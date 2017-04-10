#pragma once

#include <string.h>
#include "sal/sal_memory/sal_memory.h"

typedef struct sal_vector sal_vector;

typedef void* sal_vector_iterator;

sal_vector* sal_vector_create(const size_t size);
void sal_vector_destroy(const size_t size);

//void* sal_vector_get_data(const sal_vector* vector);
//unsigned int sal_vector_get_size(const sal_vector* vector);
//unsigned int sal_vector_get_capacity(const sal_vector* vector);
//sal_vector_iterator sal_vector_begin(const sal_vector* vector);
//sal_vector_iterator sal_vector_end(const sal_vector* vector);
//
//void sal_vector_resize(sal_vector* vector, unsigned int capacity);
//
//sal_vector_iterator sal_vector_push_back(sal_vector* vector, const void* value);
//sal_vector_iterator sal_vector_insert(sal_vector* vector, sal_vector_iterator pos);
//sal_vector_iterator sal_vector_emplace_back(sal_vector* vector);


#define SAL_VECTOR_GENERATE_NAME(NAME, TYPE)                                                                                         \
                                                                                                                                     \
typedef struct                                                                                                                       \
{                                                                                                                                    \
	TYPE* _data;                                                                                                                     \
	size_t _data_size;                                                                                                               \
	unsigned int _size, _capacity;                                                                                                   \
}                                                                                                                                    \
sal_vector_##NAME;                                                                                                                   \
                                                                                                                                     \
typedef TYPE* sal_vector_##NAME_iterator;                                                                                            \
                                                                                                                                     \
static unsigned char                                                                                                                 \
sal_vector_##NAME_check_bounds(const sal_vector_##NAME* vector, sal_vector_##NAME_iterator pos)                                      \
{                                                                                                                                    \
	return (pos <= vector->_data && pos < (vector->_data + vector->_size + 1) ? 1 : 0);                                              \
}                                                                                                                                    \
                                                                                                                                     \
sal_vector_##NAME*                                                                                                                   \
sal_vector_##NAME_create()                                                                                                           \
{                                                                                                                                    \
	sal_vector_##NAME* vector = (sal_vector_##NAME*)sal_malloc(sizeof(sal_vector_##NAME));                                           \
	vector->_data = NULL;                                                                                                            \
	vector->_size = 0;                                                                                                               \
	vector->_capacity = 0;                                                                                                           \
}                                                                                                                                    \
                                                                                                                                     \
void                                                                                                                                 \
sal_vector_##NAME_destroy(sal_vector_##NAME** vector)                                                                                \
{                                                                                                                                    \
	if (!vector)                                                                                                                     \
	{                                                                                                                                \
	}                                                                                                                                \
                                                                                                                                     \
	sal_free((*vector)->_data);                                                                                                      \
	sal_free((*vector));                                                                                                             \
	(*vector) = NULL;                                                                                                                \
}                                                                                                                                    \
                                                                                                                                     \
const TYPE*                                                                                                                          \
sal_vector_##NAME_get_data(const sal_vector_##NAME* vector)                                                                          \
{                                                                                                                                    \
	return vector->_data;                                                                                                            \
}                                                                                                                                    \
                                                                                                                                     \
unsigned int                                                                                                                         \
sal_vector_##NAME_get_size(const sal_vector_##NAME* vector)                                                                          \
{                                                                                                                                    \
	return vector->_size;                                                                                                            \
}                                                                                                                                    \
                                                                                                                                     \
unsigned int                                                                                                                         \
sal_vector_##NAME_get_capacity(const sal_vector_##NAME* vector)                                                                      \
{                                                                                                                                    \
	return vector->_capacity;                                                                                                        \
}                                                                                                                                    \
                                                                                                                                     \
sal_vector_##NAME_iterator                                                                                                           \
sal_vector_##NAME_begin(const sal_vector_##NAME* vector)                                                                             \
{                                                                                                                                    \
	return (sal_vector_##NAME_iterator)vector->_data;                                                                                \
}                                                                                                                                    \
                                                                                                                                     \
sal_vector_##NAME_iterator                                                                                                           \
sal_vector_##NAME_end(const sal_vector_##NAME* vector)                                                                               \
{                                                                                                                                    \
	return (sal_vector_##NAME_iterator)(vector->_data + vector->_size + 1);                                                          \
}                                                                                                                                    \
                                                                                                                                     \
void                                                                                                                                 \
sal_vector_##NAME_resize(sal_vector_##NAME* vector, const unsigned int capacity)                                                     \
{                                                                                                                                    \
	if (!vector)                                                                                                                     \
	{                                                                                                                                \
	}                                                                                                                                \
                                                                                                                                     \
	vector->_size = capacity;                                                                                                        \
	vector->_capacity = capacity;                                                                                                    \
	vector->_data = sal_realloc(vector->_data, sizeof((*vector->_data)) * capacity);                                                 \
}                                                                                                                                    \
                                                                                                                                     \
void                                                                                                                                 \
sal_vector_##NAME_push_back(sal_vector_##NAME* vector, const TYPE* value)                                                            \
{                                                                                                                                    \
	if (!vector)                                                                                                                     \
	{                                                                                                                                \
	}                                                                                                                                \
                                                                                                                                     \
	if (vector->_size == vector->_capacity)                                                                                          \
	{                                                                                                                                \
		sal_vector_##NAME_resize(vector, vector->_capacity *= 2);                                                                    \
	}                                                                                                                                \
                                                                                                                                     \
	*(vector->_data + (vector->_size++)) = (*value);                                                                                 \
}                                                                                                                                    \
                                                                                                                                     \
void                                                                                                                                 \
sal_vector_##NAME_insert(sal_vector_##NAME* vector, sal_vector_##NAME_iterator pos, const TYPE* value)                               \
{                                                                                                                                    \
	if (!vector)                                                                                                                     \
	{                                                                                                                                \
	}                                                                                                                                \
                                                                                                                                     \
	if (!sal_vector_##NAME_check_bounds(vector, pos))                                                                                \
	{                                                                                                                                \
	}                                                                                                                                \
                                                                                                                                     \
	if (vector->_size == vector->_capacity)                                                                                          \
	{                                                                                                                                \
		sal_vector_##NAME_resize(vector, vector->_capacity *= 2);                                                                    \
	}                                                                                                                                \
                                                                                                                                     \
	TYPE* src = vector->_data + (pos - sal_vector_##NAME_begin(vector));                                                             \
	TYPE* dest = src + 1;                                                                                                            \
                                                                                                                                     \
	memmove(dest, src, sizeof((*vector->_data)));                                                                                    \
                                                                                                                                     \
	*(vector->_data + (pos - sal_vector_##NAME_begin(vector))) = (*value);                                                           \
}                                                                                                                                    \
                                                                                                                                     \
TYPE*                                                                                                                                \
sal_vector_##NAME_emplace_back(sal_vector_##NAME* vector)                                                                            \
{                                                                                                                                    \
	if (!vector)                                                                                                                     \
	{                                                                                                                                \
	}                                                                                                                                \
                                                                                                                                     \
	if (vector->_size == vector->_capacity)                                                                                          \
	{                                                                                                                                \
		sal_vector_##NAME_resize(vector, vector->_capacity *= 2);                                                                    \
	}                                                                                                                                \
                                                                                                                                     \
	return (vector->_data + vector->_size++);                                                                                        \
}                                                                                                                                    \
                                                                                                                                     \
void                                                                                                                                 \
sal_vector_##NAME_pop_back(sal_vector_##NAME* vector)                                                                                \
{                                                                                                                                    \
	if (!vector)                                                                                                                     \
	{                                                                                                                                \
	}                                                                                                                                \
                                                                                                                                     \
	if (vector->_size == vector->_capacity / 2)                                                                                      \
	{                                                                                                                                \
		sal_vector_##NAME_resize(vector, vector->_capacity /= 2);                                                                    \
	}                                                                                                                                \
                                                                                                                                     \
	vector->_size--;                                                                                                                 \
}                                                                                                                                    \
                                                                                                                                     \
void                                                                                                                                 \
sal_vector_##NAME_erase(sal_vector_##NAME* vector, sal_vector_##NAME_iterator pos)                                                   \
{                                                                                                                                    \
                                                                                                                                     \
}                                                                                                                                    \
                                                                                                                                     \
void                                                                                                                                 \
sal_vector_##NAME_erase_range(sal_vector_##NAME* vector, sal_vector_##NAME_iterator first, sal_vector_##NAME_iterator last)          \
{                                                                                                                                    \
                                                                                                                                     \
}
