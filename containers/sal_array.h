#ifndef _SAL_ARRAY_H
#define _SAL_ARRAY_H

/* Includes */

#include "sal/utilities/sal_def.h"
#include "sal/utilities/sal_lib.h"

/* Definitions */

#define SAL_ARRAY_MAX_VALUES 10000

typedef struct
{
	sal_ptr data;
	sal_size_t size, data_size;
} sal_array;

/* Create and Destroy */

#define		sal_array_create_t(type, size, array) sal_array_create(array, size, sizeof(type));
void		sal_array_create(sal_array* array, const sal_size_t size, const sal_size_t data_size);
void		sal_array_destroy(sal_array* array);

/* Modify */

#define		sal_array_for_each(list, callback) sal_for_each(list->data, list->size, list->data_size, callback)
#define		sal_array_at_t(type, array, pos) (*(type*)sal_array_at(array, pos))
sal_ptr		sal_array_at(const sal_array* array, const sal_size_t pos);
void		sal_array_sort(const sal_array* array, const sal_qsort_callback callback);

#endif // SAL_ARRAY_H