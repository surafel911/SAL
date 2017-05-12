#include "sal/sal_lib.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
sal_free(void* block)
{
	if (!block)
	{
		puts("sal_free: Invalid memory location.");
		abort();
	}

	free(block);
}

void*
sal_malloc(const size_t size)
{
	void* block = malloc(size);
	if (!block)
	{
		puts("sal_malloc: Failed to allocate memory.");
		abort();
	}

	return block;
}

void*
sal_calloc(const size_t nitems, const size_t size)
{
	void* block = calloc(nitems, size);
	if (!block)
	{
		puts("sal_calloc: Failed to allocate memory.");
		abort();
	}

	return block;
}

void*
sal_realloc(void* block, const size_t size)
{
	block = realloc(block, size);
	if (!block)
	{
		puts("sal_realloc: Failed to reallocate memory.");
		abort();
	}

	return block;
}