/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#include <ctype.h>

#undef isascii
int isascii (int);

int
isascii (int c)
{
	return __isascii(c);
}
