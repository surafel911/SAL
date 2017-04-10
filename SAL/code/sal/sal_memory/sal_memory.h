#pragma once

#include <stdlib.h>

#include "sal/sal_error/sal_error.h"

void*	sal_malloc(const size_t size);
void*	sal_realloc(void* ptr, const size_t size);

void	sal_free(void* ptr);

#define	malloc 		sal_malloc
#define realloc		sal_realloc
#define free		sal_free