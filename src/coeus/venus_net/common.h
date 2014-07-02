#ifndef __COMMON_H_
#define __COMMON_H_

#include "types.h"

#if defined(_WIN32)
	#define SERVER_DECL __declspec(dllexport)
#endif

// lines
#if defined(_WIN32)
#define NEWLINE "\r\n"
#else
#define NEWLINE "\n"
#endif

// safe delete macro
#ifndef SAFE_DELETE
#define SAFE_DELETE(x)	if (nullptr != (x)) { delete (x); (x) = nullptr; }
#endif

#ifndef SAFE_DELETE_ARR
#define SAFE_DELETE_ARR(x)	if (nullptr != (x)) { delete [] (x); (x) = nullptr; }
#endif


#endif