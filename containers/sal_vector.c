#include "sal_vector.h"

/* Includes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Internal Functions */

static void
sal_vector_check_bounds(const sal_vector* vector, const sal_size_t pos)
{
	if (pos >= vector->size)
	{
		printf("sal_vector: Out of bounds access on vector of data size %d.", vector->data_size);
		abort();
	}
}

static void
sal_vector_is_initialized(const sal_vector* vector)
{
	if (!vector->data)
	{
		puts("sal_vector: Use of an uninitialized vector.");
		abort();
	}
}

/* Create and Destroy */

void
sal_vector_create(sal_vector* vector, const sal_size_t data_size)
{
	sal_is_null(vector, true);

	vector->data = sal_malloc(data_size);
	vector->size = 0;
	vector->capacity = 1;
	vector->data_size = data_size;
}

void
sal_vector_destroy(sal_vector* vector)
{
	sal_is_null(vector, true);
	sal_vector_is_initialized(vector);

	sal_free(vector->data);
	vector->data = NULL;
	vector->size = 0;
	vector->capacity = 0;
}

/* Modifiers */

sal_ptr
sal_vector_at(const sal_vector* vector, const sal_size_t pos)
{
	sal_is_null((sal_vector*)vector, true);
	sal_vector_is_initialized((sal_vector*)vector);
	sal_vector_check_bounds(vector, pos);

	return (vector->data + (vector->data_size * pos));
}

void
sal_vector_shrink(sal_vector* vector)
{
	sal_is_null(vector, true);
	sal_vector_is_initialized((sal_vector*)vector);

	vector->data = sal_realloc(vector->data, vector->data_size * vector->size);
	vector->capacity = vector->size;
}

void
sal_vector_clear(sal_vector* vector)
{
	sal_is_null(vector, true);
	sal_vector_is_initialized((sal_vector*)vector);

	sal_free(vector->data);

	vector->data = sal_malloc(vector->data_size);
	vector->size = 0;
	vector->capacity = 1;
}

void
sal_vector_resize(sal_vector* vector, const sal_size_t size)
{
	sal_is_null(vector, true);
	sal_vector_is_initialized((sal_vector*)vector);

	if (size == 0)
	{
		sal_vector_clear(vector);
	}
	else
	{
		vector->capacity = size;
		vector->data = (sal_ptr)sal_realloc(vector->data, vector->data_size * (vector->capacity * 2 > SAL_VECTOR_MAX_CAPACITY ?
			SAL_VECTOR_MAX_CAPACITY : vector->capacity));
	}
}

void
sal_vector_sort(const sal_vector* vector, const sal_qsort_callback callback)
{
	sal_is_null((sal_vector*)vector, true);
	sal_vector_is_initialized((sal_vector*)vector);

	qsort(vector->data, vector->size, vector->data_size, (int (*)(const void *, const void*))callback);
}

/* Adding */

sal_ptr
sal_vector_push_back(sal_vector* vector)
{
	sal_is_null(vector, true);
	sal_vector_is_initialized((sal_vector*)vector);

	if (vector->size == vector->capacity)
	{
		sal_vector_resize(vector, vector->capacity * 2);
	}

	return (sal_ptr)(vector->data + vector->data_size * vector->size++);
}

/* Removing */

void
sal_vector_pop_back(sal_vector* vector)
{
	sal_is_null(vector, true);
	sal_vector_is_initialized((sal_vector*)vector);

	if (vector->capacity != 1 && vector->size - 1 == vector->capacity / 2)
	{
		sal_vector_resize(vector, vector->capacity / 2);
	}

	vector->size--;
}

void
sal_vector_erase_at(sal_vector* vector, const sal_size_t pos)
{
	sal_is_null(vector, true);
	sal_vector_is_initialized((sal_vector*)vector);
	sal_vector_check_bounds(vector, pos);

	memmove(vector->data + vector->size * vector->data_size, vector->data + pos * vector->data_size, vector->data_size);

	sal_vector_pop_back(vector);
}