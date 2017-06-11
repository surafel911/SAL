#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include <sal/sal_assert.h>
#include <sal/sal_vector.h>

struct sal_vector*
sal_vector_create(const unsigned short data_size)
{
	struct sal_vector* vector = (struct sal_vector*)sal_calloc(1, sizeof(struct sal_vector));
	sal_assert(vector == NULL, "sal_vector_create: Failed to allocate memory for a sal_vector instance.");

	vector->data = sal_calloc(1, 0);
	sal_assert(vector == NULL, "sal_vector_create: Failed to allocate memory for the sal_vector instance data.");

	vector->size = 0;
	vector->capacity = 0;
	*(size_t*)&vector->data_size = data_size;

	return vector;
}

void
sal_vector_destroy(struct sal_vector** vector)
{
	sal_assert(vector == NULL, "sal_vector_destroy: Invalid reference to a pointer to a sal_vector instance passed.");
	sal_assert((*vector) == NULL, "sal_vector_destroy: Invalid pointer to sal_vector instance passed.");

	sal_free((*vector)->data);
	sal_free((*vector));
	(*vector) = NULL;
}

void*
sal_vector_at(struct sal_vector* vector, const unsigned short pos)
{
	sal_assert(vector == NULL, "sal_vector_at: Invalid pointer to sal_vector instance passed.");
	sal_assert(pos < vector->size, "sal_vector_at: Out of bounds access of sal_vector.");

	return vector->data + vector->data_size * pos;
}

void
sal_vector_clear(struct sal_vector* vector)
{
	sal_assert(vector == NULL, "sal_vector_clear: Invalid pointer to sal_vector instance passed.");

	sal_realloc(vector->data, 0);
	vector->size = 0;
	vector->capacity = 0;
}

void
sal_vector_shrink(struct sal_vector* vector)
{
	sal_assert(vector == NULL, "sal_vector_shrink: Invalid pointer to sal_vector instance passed.");

	sal_realloc(vector->data, vector->data_size * (vector->size - 1));
	sal_assert(vector->data == NULL, "sal_vector_shrink: Failed to sal_reallocate memory for sal_vector data.");

	vector->capacity = vector->size;
}

void
sal_vector_resize(struct sal_vector* vector, const unsigned short capacity)
{
	sal_assert(vector == NULL, "sal_vector_resize: Invalid pointer to sal_vector instance passed.");

	sal_realloc(vector->data, vector->data_size * capacity);
	sal_assert(vector->data == NULL, "sal_vector_resize: Failed to sal_reallocate memory for sal_vector data.");

	vector->capacity = capacity;
}

void*
sal_vector_push_back(struct sal_vector* vector)
{
	sal_assert(vector == NULL, "sal_vector_push_back: Invalid pointer to sal_vector instance passed.");

	if (!vector->size)
	{
		sal_realloc(vector->data, vector->data_size);
		sal_assert(vector->data == NULL, "sal_vector_push_back: Failed to sal_reallocate memory for sal_vector data.");

		vector->capacity++;
	}
	else if (vector->size == vector->capacity)
	{
		sal_realloc(vector->data, vector->data_size * (vector->capacity *= 2));
		sal_assert(vector->data == NULL, "sal_vector_push_back: Failed to sal_reallocate memory for sal_vector data.");
	}

	return vector->data + vector->data_size * vector->size++;
}

void*
sal_vector_insert(struct sal_vector* vector, const unsigned short pos)
{
	sal_assert(vector == NULL, "sal_vector_insert: Invalid pointer to sal_vector instance passed.");
	sal_assert(pos >= vector->size, "sal_vector_insert: Out of bounds access of sal_vector.");

	if (!vector->size)
	{
		sal_realloc(vector->data, vector->data_size);
		sal_assert(vector->data == NULL, "sal_vector_insert: Failed to sal_reallocate memory for sal_vector data.");

		vector->capacity++;
	}
	else if (vector->size == vector->capacity)
	{
		sal_realloc(vector->data, vector->data_size * (vector->capacity *= 2));
		sal_assert(vector->data == NULL, "sal_vector_insert: Failed to sal_reallocate memory for sal_vector data.");
	}

	memmove(vector->data + vector->data_size * (pos + 1), vector->data + vector->data_size * pos, vector->data_size * (vector->size++ - pos));
	return vector->data + vector->data_size * pos;
}

void
sal_vector_pop_back(struct sal_vector* vector)
{
	sal_assert(vector == NULL, "sal_vector_pop_back: Invalid pointer to sal_vector instance passed.");

	if (vector->size && vector->size == vector->capacity / 2)
	{
		sal_realloc(vector->data, vector->data_size * (vector->capacity /= 2));
		sal_assert(vector->data == NULL, "sal_vector_pop_back: Failed to sal_reallocate memory for sal_vector data.");
	}

	vector->size--;
}

void
sal_vector_erase(struct sal_vector* vector, const unsigned short pos)
{
	sal_assert(vector == NULL, "sal_vector_erase: Invalid pointer to sal_vector instance passed.");
	sal_assert(pos >= vector->size, "sal_vector_erase: Out of bounds access of sal_vector.");

	if (vector->size && vector->size == vector->capacity / 2)
	{
		sal_realloc(vector->data, vector->data_size * (vector->capacity /= 2));
		sal_assert(vector->data == NULL, "sal_vector_erase: Failed to sal_reallocate memory for sal_vector data.");
	}

	memmove(vector->data + vector->data_size * pos, vector->data + vector->data_size * (pos + 1), vector->data_size * (vector->size - pos));
	vector->size--;
}
