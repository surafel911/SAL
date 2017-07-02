#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#include <sal/sal_lib.h>
#include <sal/sal_array.h>
#include <sal/sal_assert.h>

struct sal_array*
sal_array_create(const uint16_t size, const size_t data_size)
{
	struct sal_array* array = (struct sal_array*)sal_malloc(sizeof(struct sal_array));
	array->data = sal_calloc(size, data_size);

	*(size_t*)&array->data_size = data_size;
	*(uint16_t*)&array->size = size;

	return array;
}

void
sal_array_destroy(struct sal_array** array)
{
	free((*array)->data);
	free((*array));
	(*array) = NULL;
}

void*
sal_array_at(struct sal_array* array, const unsigned short pos)
{
	return (array->data + (array->data_size * pos));
}
