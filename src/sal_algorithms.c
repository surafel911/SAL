#include <stdio.h>
#include <string.h>

#include <sal/sal_lib.h>
#include <sal/sal_assert.h>
#include <sal/sal_algorithms.h>

void
sal_move(void* first, void* last, void* destination)
{
	memmove(destination, first, last - first);
}

void
sal_swap(void* first, void* second, const size_t data_size)
{
	if (data_size > 0)
	{
		void* block = sal_malloc(data_size);
		memcpy(block, first, data_size);

		memmove(first, second, data_size);
		memmove(second, block, data_size);

		sal_free(block);
	}
}