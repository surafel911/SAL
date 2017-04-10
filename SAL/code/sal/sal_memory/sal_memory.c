#include "sal_memory.h"

void* sal_malloc(const size_t size)
{
	void* block = malloc(size);

	if (!block)
	{
		sal_exit(-1);
	}

	return block;
}

void* sal_realloc(void* block, const size_t size)
{
	block = realloc(block, size);

	if (!block)
	{
		sal_exit(-1);
	}

	return block;
}

void sal_free(void* block)
{
	if (!block)
	{
		sal_exit(-1);
	}

	free(block);
}