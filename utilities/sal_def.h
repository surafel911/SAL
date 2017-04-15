#ifndef _SAL_DEF_H
#define _SAL_DEF_H

#include <stdbool.h>

typedef	unsigned short sal_size_t;

typedef	unsigned char* sal_ptr;

void	sal_is_null(void* block, bool fatal);

#endif // _SAL_DEF_H