// automatically generated, do not modify

package MyGame.Example;

import java.nio.*;
import java.lang.*;
import java.util.*;
import flatbuffers.*;

public class Test extends Struct {
  public Test __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }
  public short a() { return bb.getShort(bb_pos + 0); }
  public byte b() { return bb.get(bb_pos + 2); }

  public static int createTest(FlatBufferBuilder builder, short a, byte b) {
    builder.prep(2, 0);
    builder.pad(1);
    builder.putByte(b);
    builder.putShort(a);
    return builder.offset();
  }
};

