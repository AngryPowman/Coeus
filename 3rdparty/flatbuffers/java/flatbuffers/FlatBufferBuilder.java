/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package flatbuffers;

import java.lang.String;
import java.util.Arrays;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.Charset;

// Class that helps you build a FlatBuffer.
// See the section "Use in Java" in the main FlatBuffers documentation.

public class FlatBufferBuilder {
    ByteBuffer bb;       // Where we construct the FlatBuffer.
    int space;           // Remaining space in the ByteBuffer.
    final Charset utf8charset = Charset.forName("UTF-8");
    int minalign = 1;    // Minimum alignment encountered so far.
    int[] vtable;        // The vtable for the current table, null otherwise.
    int object_start;    // Starting offset of the current struct/table.
    int[] vtables = new int[16];  // List of offsets of all vtables.
    int num_vtables = 0;          // Number of entries in `vtables` in use.
    int vector_num_elems = 0;     // For the current vector being built.

    // Java doesn't seem to have these.
    final int SIZEOF_SHORT = 2;
    final int SIZEOF_INT = 4;

    // Start with a buffer of size `initial_size`, then grow as required.
    public FlatBufferBuilder(int initial_size) {
        space = initial_size;
        bb = newByteBuffer(new byte[initial_size]);
    }

    ByteBuffer newByteBuffer(byte[] buf) {
        ByteBuffer newbb = ByteBuffer.wrap(buf);
        newbb.order(ByteOrder.LITTLE_ENDIAN);
        return newbb;
    }

    // Doubles the size of the ByteBuffer, and copies the old data towards the
    // end of the new buffer (since we build the buffer backwards).
    ByteBuffer growByteBuffer(ByteBuffer bb) {
        byte[] old_buf = bb.array();
        int old_buf_size = old_buf.length;
        int new_buf_size = old_buf_size * 2;
        byte[] new_buf = new byte[new_buf_size];
        System.arraycopy(old_buf, 0, new_buf, new_buf_size - old_buf_size, old_buf_size);
        ByteBuffer nbb = newByteBuffer(new_buf);
        nbb.position(bb.position());
        return nbb;
    }

    // Offset relative to the end of the buffer.
    public int offset() {
        return bb.array().length - space;
    }

    public void pad(int byte_size) {
        for (int i = 0; i < byte_size; i++) bb.put(--space, (byte)0);
    }

    // Prepare to write an element of `size` after `additional_bytes`
    // have been written, e.g. if you write a string, you need to align such
    // the int length field is aligned to SIZEOF_INT, and the string data follows it
    // directly.
    // If all you need to do is align, `additional_bytes` will be 0.
    public void prep(int size, int additional_bytes) {
        // Track the biggest thing we've ever aligned to.
        if (size > minalign) minalign = size;
        // Find the amount of alignment needed such that `size` is properly
        // aligned after `additional_bytes`
        int align_size = ((~(bb.array().length - space + additional_bytes)) + 1) & (size - 1);
        // Reallocate the buffer if needed.
        while (space < align_size + size + additional_bytes) {
            int old_buf_size = bb.array().length;
            bb = growByteBuffer(bb);
            space += bb.array().length - old_buf_size;
        }
        pad(align_size);
    }

    // Add a scalar to the buffer, backwards from the current location.
    // Doesn't align nor check for space.
    public void putByte  (byte   x) { bb.put      (space -= 1, x); }
    public void putShort (short  x) { bb.putShort (space -= 2, x); }
    public void putInt   (int    x) { bb.putInt   (space -= 4, x); }
    public void putLong  (long   x) { bb.putLong  (space -= 8, x); }
    public void putFloat (float  x) { bb.putFloat (space -= 4, x); }
    public void putDouble(double x) { bb.putDouble(space -= 8, x); }

    // Adds a scalar to the buffer, properly aligned, and the buffer grown
    // if needed.
    public void addByte  (byte   x) { prep(1, 0); putByte  (x); }
    public void addShort (short  x) { prep(2, 0); putShort (x); }
    public void addInt   (int    x) { prep(4, 0); putInt   (x); }
    public void addLong  (long   x) { prep(8, 0); putLong  (x); }
    public void addFloat (float  x) { prep(4, 0); putFloat (x); }
    public void addDouble(double x) { prep(8, 0); putDouble(x); }

    // Adds on offset, relative to where it will be written.
    public void addOffset(int off) {
        prep(SIZEOF_INT, 0);  // Ensure alignment is already done.
        assert off <= offset();
        off = offset() - off + SIZEOF_INT;
        putInt(off);
    }

    public void startVector(int elem_size, int num_elems) {
        notNested();
        vector_num_elems = num_elems;
        prep(SIZEOF_INT, elem_size * num_elems);
    }

    public int endVector() {
        putInt(vector_num_elems);
        return offset();
    }

    public int createString(String s) {
        byte[] utf8 = s.getBytes(utf8charset);
        bb.put(--space, (byte)0);
        startVector(1, utf8.length);
        System.arraycopy(utf8, 0, bb.array(), space -= utf8.length, utf8.length);
        return endVector();
    }

    public void notNested() {
        // You should not be creating any other objects or strings/vectors
        // while an object is being constructed
        if (vtable != null)
            throw new AssertionError("FlatBuffers: object serialization must not be nested.");
    }

    public void Nested(int obj) {
        // Structs are always stored inline, so need to be created right
        // where they are used. You'll get this assert if you created it
        // elsewhere.
        if (obj != offset())
            throw new AssertionError("FlatBuffers: struct must be serialized inline.");
    }

    public void startObject(int numfields) {
        notNested();
        vtable = new int[numfields];
        object_start = offset();
    }

    // Add a scalar to a table at `o` into its vtable, with value `x` and default `d`
    public void addByte  (int o, byte   x, int    d) { if(x != d) { addByte  (x); slot(o); } }
    public void addShort (int o, short  x, int    d) { if(x != d) { addShort (x); slot(o); } }
    public void addInt   (int o, int    x, int    d) { if(x != d) { addInt   (x); slot(o); } }
    public void addLong  (int o, long   x, long   d) { if(x != d) { addLong  (x); slot(o); } }
    public void addFloat (int o, float  x, double d) { if(x != d) { addFloat (x); slot(o); } }
    public void addDouble(int o, double x, double d) { if(x != d) { addDouble(x); slot(o); } }
    public void addOffset(int o, int    x, int    d) { if(x != d) { addOffset(x); slot(o); } }

    // Structs are stored inline, so nothing additional is being added. `d` is always 0.
    public void addStruct(int voffset, int x, int d) {
        if(x != d) {
            Nested(x);
            slot(voffset);
        }
    }

    // Set the current vtable at `voffset` to the current location in the buffer.
    public void slot(int voffset) {
        vtable[voffset] = offset();
    }

    public int endObject() {
        assert vtable != null; // calling endObject without a startObject
        addInt(0);
        int vtableloc = offset();
        // Write out the current vtable.
        for (int i = vtable.length - 1; i >= 0 ; i--) {
            // Offset relative to the start of the table.
            short off = (short)(vtable[i] != 0 ? vtableloc - vtable[i] : 0);
            putShort(off);
        }

        final int standard_fields = 2; // The fields below:
        putShort((short)(vtableloc - object_start));
        putShort((short)((vtable.length + standard_fields) * SIZEOF_SHORT));

        // Search for an existing vtable that matches the current one.
        int existing_vtable = 0;
        outer_loop:
        for (int i = 0; i < num_vtables; i++) {
            int vt1 = bb.array().length - vtables[i];
            int vt2 = space;
            short len = bb.getShort(vt1);
            if (len == bb.getShort(vt2)) {
                for (int j = SIZEOF_SHORT; j < len; j += SIZEOF_SHORT) {
                    if (bb.getShort(vt1 + j) != bb.getShort(vt2 + j)) {
                        continue outer_loop;
                    }
                }
                existing_vtable = vtables[i];
                break outer_loop;
            }
        }

        if (existing_vtable != 0) {
            // Found a match:
            // Remove the current vtable.
            space = bb.array().length - vtableloc;
            // Point table to existing vtable.
            bb.putInt(space, existing_vtable - vtableloc);
        } else {
            // No match:
            // Add the location of the current vtable to the list of vtables.
            if (num_vtables == vtables.length) vtables = Arrays.copyOf(vtables, num_vtables * 2);
            vtables[num_vtables++] = offset();
            // Point table to current vtable.
            bb.putInt(bb.array().length - vtableloc, offset() - vtableloc);
        }

        vtable = null;
        return vtableloc;
    }

    public void finish(int root_table) {
        prep(minalign, SIZEOF_INT);
        addOffset(root_table);
    }

    public ByteBuffer dataBuffer() { return bb; }

    // The FlatBuffer data doesn't start at offset 0 in the ByteBuffer:
    public int dataStart() {
        return bb.array().length - offset();
    }
}
