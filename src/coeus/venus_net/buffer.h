#ifndef __BUFFER_H__
#define __BUFFER_H__

#include <stddef.h>
#include <assert.h>
#include <string.h>
#include <algorithm>
#include "Poco/ScopedLock.h"
#include "Poco/AutoPtr.h"
#include "Poco/Mutex.h"
#include "Poco/RefCountedObject.h"

class Buffer : public Poco::RefCountedObject
{
public:
	Buffer(size_t maxCapacity) : b(maxCapacity), i(b.begin()) { }
	virtual ~Buffer() {}

	void swapBuffer(Buffer&);

	class Container
	{
	public:
		// 类似使用vector的用法.
		typedef unsigned char Byte;
		typedef unsigned char value_type;
		typedef Byte* iterator;
		typedef const Byte* const_iterator;
		typedef Byte& reference;
		typedef const Byte& const_reference;
		typedef Byte* pointer;
		typedef ptrdiff_t difference_type;
		typedef size_t size_type;

		Container(size_type maxCapacity);

		~Container();

		iterator begin()
		{
			return _buf;
		}

		const_iterator begin() const
		{
			return _buf;
		}

		iterator end()
		{
			return _buf + _size;
		}

		const_iterator end() const
		{
			return _buf + _size;
		}

		size_type size() const
		{
			return _size;
		}

		bool empty() const
		{
			return !_size;
		}

		void swap(Container&);

		void clear();

		inline void resize(size_type n)
		{
            Poco::ScopedLock<Poco::Mutex> lock(_mutex);

			if(n == 0)
			{
				clear();
			}
			else if(n > _capacity)
			{
				reserve(n);
			}

			_size = n;
		}

		void reset()
		{
			if(_size > 0 && _size * 2 < _capacity)
			{
				if(++_shrinkCounter > 2)
				{
					reserve(_size);
					_shrinkCounter = 0;
				}
			}
			else
			{
				_shrinkCounter = 0;
			}
			_size = 0;
		}

		void push_back(value_type v)
		{
			resize(_size + 1);
			_buf[_size - 1] = v;
		}

		reference operator[](size_type n)
		{
			assert(n < _size);
			return _buf[n];
		}

		const_reference operator[](size_type n) const
		{
			assert(n < _size);
			return _buf[n];
		}

	private:

		Container(const Container&);
		void operator=(const Container&);
		void reserve(size_type);

		pointer _buf;
		size_type _size;
		size_type _capacity;
		size_type _maxCapacity;
		int _shrinkCounter;
        Poco::Mutex _mutex;
	};

	Container b;
	Container::iterator i;
};

typedef Poco::AutoPtr<Buffer> BufferPtr;

#endif
