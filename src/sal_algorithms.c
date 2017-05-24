#include "sal/sal_algorithms.h"

#include <stdio.h>
#include <string.h>

#include "sal/sal_lib.h"
#include "sal/sal_assert.h"

void
sal_move(void* first, void* last, void* destination)
{
	sal_assert(first == NULL, "sal_move: Invalid pointer passed into 'first'.");
	sal_assert(first == NULL, "sal_move: Invalid pointer passed into 'last'.");
	sal_assert(first == NULL, "sal_move: Invalid pointer passed into 'destination'.");

	memmove(destination, first, last - first);
}

void
sal_swap(void* first, void* second, const size_t data_size)
{
	sal_assert(first == NULL, "sal_move: Invalid pointer passed into 'first'.");
	sal_assert(first == NULL, "sal_move: Invalid pointer passed into 'second'.");

	if (data_size > 0)
	{
		void* block = sal_malloc(data_size);
		memcpy(block, first, data_size);

		memmove(first, second, data_size);
		memmove(second, block, data_size);

		sal_free(block);
	}
}