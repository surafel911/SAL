#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include <sal/sal_lib.h>
#include <sal/sal_assert.h>
#include <sal/sal_vector.h>

struct sal_vector*
sal_vector_create(const size_t data_size)
{
	struct sal_vector* vector = (struct sal_vector*)sal_calloc(1, sizeof(struct sal_vector));
	vector->data = sal_malloc(0);

	*(size_t*)&vector->data_size = data_size;

	return vector;
}

void
sal_vector_destroy(struct sal_vector** vector)
{
	sal_free((*vector)->data);
	sal_free((*vector));
	(*vector) = NULL;
}

void*
sal_vector_at(struct sal_vector* vector, const unsigned short pos)
{
	return vector->data + (vector->data_size * pos);
}

void
sal_vector_clear(struct sal_vector* vector)
{
	vector->data = sal_realloc(vector->data, 0);
	vector->size = 0;
	vector->capacity = 0;
}

void
sal_vector_shrink(struct sal_vector* vector)
{
	vector->data = sal_realloc(vector->data, vector->data_size * (vector->size - 1));

	vector->capacity = vector->size;
}

void
sal_vector_resize(struct sal_vector* vector, const unsigned short capacity)
{
	vector->data = sal_realloc(vector->data, vector->data_size * capacity);

	vector->capacity = capacity;
}

void*
sal_vector_push_back(struct sal_vector* vector)
{
	if (vector->size == 0)
	{
		vector->data = sal_realloc(vector->data, vector->data_size);

		vector->capacity++;
	}
	else if (vector->size == vector->capacity)
	{
		vector->data = sal_realloc(vector->data, vector->data_size * (vector->capacity *= 2));
	}

	return (vector->data + (vector->data_size * vector->size++));
}

void*
sal_vector_insert(struct sal_vector* vector, const unsigned short pos)
{
	if (vector->size == 0)
	{
		vector->data = sal_realloc(vector->data, vector->data_size);

		vector->capacity++;
	}
	else if (vector->size == vector->capacity)
	{
		vector->data = sal_realloc(vector->data, vector->data_size * (vector->capacity *= 2));
	}

	memmove(vector->data + vector->data_size * (pos + 1), vector->data + vector->data_size * pos, vector->data_size * (vector->size++ - pos));
	return (vector->data + (vector->data_size * pos));
}

void
sal_vector_pop_back(struct sal_vector* vector)
{
	if (vector->size == (vector->capacity / 2) + ((vector->capacity / 2) % 2))
	{
		vector->capacity = (vector->capacity / 2) + ((vector->capacity / 2) % 2);

		vector->data = sal_realloc(vector->data, vector->data_size * vector->capacity);
	}

	vector->size--;
}

void
sal_vector_erase(struct sal_vector* vector, const unsigned short pos)
{
	if (vector->size == (vector->capacity / 2) + ((vector->capacity / 2) % 2))
	{
		vector->capacity = (vector->capacity / 2) + ((vector->capacity / 2) % 2);

		vector->data = sal_realloc(vector->data, vector->data_size * vector->capacity);
	}

	memmove(vector->data + vector->data_size * pos, vector->data + vector->data_size * (pos + 1), vector->data_size * (vector->size - pos));
	vector->size--;
}
