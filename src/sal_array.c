#include "sal/sal_array.h"

#include "sal/sal_lib.h"
#include "sal/sal_assert.h"

struct sal_array*
sal_array_create(const unsigned short size, const size_t data_size)
{
	struct sal_array* array = (struct sal_array*)sal_calloc(1, sizeof(struct sal_array));
	sal_assert(array == NULL, "sal_array_create: Failed to allocate memory for a sal_array instance.");

	array->data = sal_calloc(size, data_size);
	sal_assert(array == NULL, "sal_array_create: Failed to allocate memory for the sal_array instance data.");

	*(size_t*)&array->data_size = data_size;
	*(unsigned short*)&array->size = size;

	return array;
}

void
sal_array_destroy(struct sal_array** array)
{
	sal_assert(array == NULL, "sal_array_destroy: Invalid reference to a pointer to a sal_array instance passed.");
	sal_assert((*array) == NULL, "sal_array_destroy: Invalid pointer to sal_array instance passed.");

	sal_free((*array)->data);
	sal_free((*array));

	(*array) = NULL;
}

void*
sal_array_at(struct sal_array* array, const unsigned short pos)
{
	sal_assert(array == NULL, "sal_array_destroy: Invalid pointer to sal_array instance.");
	sal_assert(pos >= array->size, "sal_array_at: Out of bounds access of sal_array.");

	return (array->data + array->data_size * pos);
}