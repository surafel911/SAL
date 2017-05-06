#include "sal/sal_array.h"

#include "sal/sal_def.h"
#include "sal/sal_lib.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void
sal_array_check_bounds(sal_array* array, const unsigned short pos)
{
	if (pos < array->size)
	{
		puts("Out of bounds access of sal_vector.\n");
		abort();
	}
}

sal_array*
sal_array_create(const unsigned short size, const size_t data_size)
{
	sal_array* array = (sal_array*)sal_calloc(1, sizeof(sal_array));

	array->data = sal_calloc(1, data_size * size);
	*(size_t*)&array->data_size = data_size;
	*(unsigned short*)&array->size = size;

	return array;
}

void
sal_array_destroy(sal_array** array)
{
	sal_is_null(array, true);
	sal_is_null((*array), true);

	sal_free((*array)->data);
	sal_free((*array));
	(*array) = NULL;
}

void*
sal_array_at(sal_array* array, const unsigned short pos)
{
	sal_is_null(array, true);
	sal_array_check_bounds(array, pos);

	return array->data + array->data_size * pos;
}