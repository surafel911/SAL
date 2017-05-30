#include <stdio.h>
#include <stdlib.h>

#include <sal/sal_lib.h>
#include <sal/sal_assert.h>

void
sal_free(void* ptr)
{
	sal_assert(ptr == NULL, "sal_free: Invalid pointer passed.");

	free(ptr);
}

void*
sal_calloc(const int nitems, const size_t data_size)
{
	void* ptr = calloc(nitems, data_size);
	sal_assert(ptr == NULL, "sal_calloc: Failed to allocate memory.");

	return ptr;
}

void*
sal_malloc(const size_t data_size)
{
	void* ptr = malloc(data_size);
	sal_assert(ptr == NULL, "sal_malloc: Failed to allocate memory.");

	return ptr;
}

void*
sal_realloc(void* ptr, const size_t data_size)
{
	ptr = realloc(ptr, data_size);
	sal_assert(ptr == NULL, "sal_realloc: Failed to allocate memory.");

	return ptr;
}