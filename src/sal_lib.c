#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include <sal/sal_lib.h>
#include <sal/sal_assert.h>

void
sal_free(void* ptr)
{
	sal_assert(ptr == NULL, "sal_free: Pointer points to an invalid location.");

	free(ptr);
}

void*
sal_malloc(const size_t size)
{
	void* mem = malloc(size);
	sal_assert(mem == NULL, "sal_malloc: Failed to allocate memory.");

	return mem;
}

void*
sal_calloc(const uint32_t nitems, const size_t size)
{
	void* mem = calloc(nitems, size);
	sal_assert(mem == NULL, "sal_calloc: Failed to allocate memory.");

	return mem;
}

void*
sal_realloc(void* ptr, const size_t size)
{
	void* mem = realloc(ptr, size);
	sal_assert(mem == NULL, "sal_realloc: Failed to allocate memory.");

	return mem;
}
