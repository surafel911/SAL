#ifndef _SAL_VECTOR_H
#define _SAL_VECTOR_H

/* Includes */

#include "sal/utilities/sal_def.h"
#include "sal/utilities/sal_lib.h"

/* Definitions */

#define SAL_VECTOR_MAX_CAPACITY 10000

typedef struct
{
	sal_ptr data;
	sal_size_t size, capacity, data_size;
} sal_vector;

/* Create and Destroy */

#define		sal_vector_create_t(vector, type) sal_vector_create(vector, sizeof(type))
void		sal_vector_create(sal_vector* vector, const sal_size_t data_size);
void		sal_vector_destroy(sal_vector* vector);

/* Modifiers */

#define		sal_vector_for_each(vector, callback) sal_for_each(vector->data, vector->size, vector->data_size, callback)
#define		sal_vector_at_t(type, vector, pos) (*(type*)sal_vector_at(vector, pos))
sal_ptr		sal_vector_at(const sal_vector* vector, const sal_size_t pos);
void		sal_vector_shrink(sal_vector* vector);
void		sal_vector_clear(sal_vector* vector);
void		sal_vector_resize(sal_vector* vector, const sal_size_t size);
void		sal_vector_sort(const sal_vector* vector, const sal_qsort_callback callback);

/* Adding */

#define		sal_vector_push_back_t(type, vector) (*(type*)sal_vector_push_back(vector))
sal_ptr		sal_vector_push_back(sal_vector* vector);

/* Removing */

void		sal_vector_pop_back(sal_vector* vector);
void		sal_vector_erase_at(sal_vector* vector, const sal_size_t pos);

#endif // _SAL_VECTOR_H