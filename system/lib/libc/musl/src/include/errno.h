#ifndef ERRNO_H
#define ERRNO_H

#include "../../../../../include/libc/errno.h"

#ifdef __GNUC__
__attribute__((const))
#endif
hidden int *___errno_location(void);

#undef errno
#define errno (*___errno_location())

#endif