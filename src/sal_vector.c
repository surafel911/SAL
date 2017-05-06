#include "sal/sal_vector.h"

#include "sal/sal_def.h"
#include "sal/sal_lib.h"
#include "sal/sal_assert.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void
sal_vector_check_bounds(sal_vector* vector, const unsigned short pos)
{
	if (pos < vector->size)
	{
		puts("Out of bounds access of sal_vector.\n");
		abort();
	}
}

sal_vector*
sal_vector_create(const unsigned short data_size)
{
	sal_vector* vector = (sal_vector*)sal_calloc(1, sizeof(sal_vector));

	vector->data = sal_calloc(1, 0);
	vector->size = 0;
	vector->capacity = 0;
	*(size_t*)&vector->data_size = data_size;

	return vector;
}

void
sal_vector_destroy(sal_vector** vector)
{
	sal_is_null(vector, true);
	sal_is_null((*vector), true);

	sal_free((*vector)->data);
	sal_free((*vector));
	(*vector) = NULL;
}

void*
sal_vector_at(sal_vector* vector, const unsigned short pos)
{
	sal_is_null(vector, true);
	sal_vector_check_bounds(vector, pos);

	return vector->data + vector->data_size * pos;
}

void
sal_vector_clear(sal_vector* vector)
{
	sal_is_null(vector, true);

	sal_realloc(vector->data, 0);
	vector->size = 0;
	vector->capacity = 0;
}

void
sal_vector_shrink(sal_vector* vector)
{
	sal_is_null(vector, true);

	sal_realloc(vector->data, vector->data_size * (vector->size - 1));
	vector->capacity = vector->size;
}

void
sal_vector_resize(sal_vector* vector, const unsigned short capacity)
{
	sal_is_null(vector, true);

	sal_realloc(vector->data, vector->data_size * capacity);
	vector->capacity = capacity;
}

void*
sal_vector_push_back(sal_vector* vector)
{
	sal_is_null(vector, true);

	if (!vector->size)
	{
		sal_realloc(vector->data, vector->data_size);
		vector->size++;
		vector->capacity++;
	}
	else if (vector->size == vector->capacity)
	{
		sal_realloc(vector->data, vector->data_size * (vector->capacity *= 2));
	}

	return vector->data + vector->data_size * vector->size++;
}

void*
sal_vector_insert(sal_vector* vector, const unsigned short pos)
{
	sal_is_null(vector, true);
	sal_vector_check_bounds(vector, pos);

	if (!vector->size)
	{
		sal_realloc(vector->data, vector->data_size);
		vector->size++;
		vector->capacity++;
	}
	else if (vector->size == vector->capacity)
	{
		sal_realloc(vector->data, vector->data_size * (vector->capacity *= 2));
	}

	memmove(vector->data + vector->data_size * (pos + 1), vector->data + vector->data_size * pos, vector->data_size * (vector->size - pos));
	return vector->data + vector->data_size * pos;
}

void
sal_vector_pop_back(sal_vector* vector)
{
	sal_is_null(vector, true);

	if (vector->size && vector->size == vector->capacity / 2)
	{
		sal_realloc(vector->data, vector->data_size * (vector->capacity /= 2));
	}

	vector->size--;
}

void
sal_vector_erase(sal_vector* vector, const unsigned short pos)
{
	sal_is_null(vector, true);
	sal_vector_check_bounds(vector, pos);

	if (vector->size && vector->size == vector->capacity / 2)
	{
		sal_vector_check_bounds(vector, pos);
		sal_realloc(vector->data, vector->data_size * (vector->capacity /= 2));
	}

	memmove(vector->data + vector->data_size * pos, vector->data + vector->data_size * (pos + 1), vector->data_size * (vector->size - pos));
	vector->size--;
}
