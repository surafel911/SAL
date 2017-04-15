#include "sal_array.h"

/* Includes */

#include <stdio.h>
#include <stdlib.h>

/* Internal Functions */

static void
sal_array_check_bounds(const sal_array* array, const sal_size_t pos)
{
	if (pos >= array->size)
	{
		printf("sal_array: Out of bounds access on array of data size %d.", array->data_size);
		abort();
	}
}

static void sal_array_is_initialized(const sal_array* array)
{
	if (!array->data)
	{
		puts("sal_array: Use of an uninitialized array.");
		abort();
	}
}

/* Create and Destroy */

void
sal_array_create(sal_array* array, const sal_size_t size, const sal_size_t data_size)
{
	sal_is_null(array, true);

	array->data = sal_malloc(0);
	array->size = size;
	array->data_size = data_size;
}

void
sal_array_destroy(sal_array* array)
{
	sal_is_null(array, true);
	sal_array_is_initialized(array);
}

/* Modify */

sal_ptr
sal_array_at(const sal_array* array, const sal_size_t pos)
{
	sal_is_null((sal_array*)array, true);
	sal_array_is_initialized(array);
	sal_array_check_bounds(array, pos);

	return array->data + array->data_size * pos;
}

void
sal_array_sort(const sal_array* array, const sal_qsort_callback callback)
{
	sal_is_null((sal_array*)array, true);
	sal_array_is_initialized(array);

	qsort(array->data, array->size, array->data_size, (int (*)(const void *, const void*))callback);
}