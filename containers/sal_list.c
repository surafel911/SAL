#include "sal_list.h"

/* Includes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Internal Functions */

static void
sal_list_check_bounds(const sal_list* list, const sal_size_t pos)
{
	if (pos >= list->size)
	{
		printf("sal_list: Out of bounds access on list.");
		abort();
	}
}

static void
sal_list_is_initialized(const sal_list* list)
{
	if (!list->data)
	{
		puts("sal_list: Use of an uninitialized list.");
		abort();
	}
}

/* Create and Destroy */

void
sal_list_create(sal_list* list)
{
	list = sal_malloc(sizeof(sal_list));

	list->data = sal_malloc(0);
	list->size = 0;
}

void
sal_list_destroy(sal_list* list)
{
	sal_is_null(list, true);

	sal_free(list->data);
	list->data = NULL;
	list->size = 0;
}

/* Modifiers */

sal_ptr
sal_list_at(const sal_list* list, const sal_size_t pos)
{
	sal_is_null((sal_list*)list, true);
	sal_list_check_bounds(list, pos);

	return *(list->data + pos);
}

void
sal_list_clear(sal_list* list)
{
	sal_is_null(list, true);
	sal_list_is_initialized(list);

	sal_free(list->data);

	list->data = sal_malloc(0);
	list->size = 0;
}

void
sal_list_sort(const sal_list* list, const sal_qsort_callback callback)
{
	sal_is_null((sal_list*)list, true);
	sal_list_is_initialized(list);

	qsort(list->data, list->size, 1, (int (*)(const void *, const void*))callback);
}

/* Adding */

void
sal_list_emplace_back(sal_list* list, sal_ptr value)
{
	sal_is_null(list, true);
	sal_list_is_initialized(list);

	list->data = sal_realloc(list->data, ++list->size);
	list->data[list->size - 1] = value;
}

void
sal_list_emplace_front(sal_list* list, sal_ptr value)
{
	sal_is_null(list, true);
	sal_list_is_initialized(list);

	list->data = sal_realloc(list->data, ++list->size);
	memmove(list->data + 1, list->data, (list->size - 1));
	list->data[0] = value;
}

void
sal_list_insert(sal_list* list, sal_ptr value, const sal_size_t pos)
{
	sal_is_null(list, true);
	sal_list_is_initialized(list);
	sal_list_check_bounds(list, pos);

	list->data = sal_realloc(list->data, ++list->size);
	memmove(list->data + (pos + 1), list->data + pos, list->size - pos - 1);
	list->data[pos] = value;
}

/* Removing */

void
sal_list_remove(sal_list* list, const sal_size_t pos)
{
	sal_is_null(list, true);
	sal_list_is_initialized(list);
	sal_list_check_bounds(list, pos);

	memmove(list->data + pos, list->data + pos + 1, list->size - pos);
	list->data = sal_realloc(list->data, --list->size);
}