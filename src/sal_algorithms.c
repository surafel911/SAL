#include "sal/sal_algorithms.h"

#include "sal/sal_def.h"
#include "sal/sal_lib.h"

#include <stdio.h>
#include <string.h>

void
sal_move(void* first, void* last, void* destination)
{
	sal_is_null(first, true);
	sal_is_null(last, true);
	sal_is_null(destination, true);

	memmove(destination, first, last - first);
}

void
sal_swap(void* first, void* second, const size_t data_size)
{
	sal_is_null(first, true);
	sal_is_null(second, true);
	sal_is_null((void*)data_size, true);

	void* block = sal_malloc(data_size);
	memcpy(block, first, data_size);

	memmove(first, second, data_size);
	memmove(second, block, data_size);

	sal_free(block);
}