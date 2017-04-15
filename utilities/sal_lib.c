#include "sal_lib.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
sal_free(void* block)
{
	if (!block)
	{
		puts("sal_free: Invalid memory location.");
	}

	free(block);
}

void*
sal_malloc(const sal_size_t size)
{
	void* block = malloc(size);
	if (!block)
	{
		perror(__FUNCTION__);
	}

	return block;
}

void*
sal_calloc(const sal_size_t nitems, const sal_size_t size)
{
	void* block = calloc(nitems, size);
	if (!block)
	{
		perror(__FUNCTION__);
	}

	return block;
}

void*
sal_realloc(void* block, const sal_size_t size)
{
	block = realloc(block, size);
	if (!block)
	{
		perror(__FUNCTION__);
	}

	return block;
}

void
sal_for_each(void* data, const sal_size_t size, const sal_size_t data_size, const sal_for_each_callback callback)
{
	sal_is_null(callback, true);

	for (void* ptr = data; ptr < data + data_size * (size - 1); ptr += data_size)
	{
		callback(ptr, ptr + data_size);
	}
}

#define malloc sal_malloc