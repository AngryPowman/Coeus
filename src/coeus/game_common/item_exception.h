#ifndef __ITEM_EXCEPTION_H__
#define __ITEM_EXCEPTION_H__

#include <exception>
#define ITEM_EXCEPTION(exception_class, what) \
    class exception_class : public std::exception \
    {                                             \
        public: exception_class() : std::exception(what) {} \
        public: virtual ~exception_class() {}     \
    }

ITEM_EXCEPTION(BadStackValueException, "Bad item stack value exception.");
ITEM_EXCEPTION(EmptyItemNameException, "Empty item name exception.");

#endif // !__ITEM_EXCEPTION
