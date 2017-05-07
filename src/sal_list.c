#include "sal/sal_list.h"

#include "sal/sal_def.h"
#include "sal/sal_lib.h"

#include <stdio.h>
#include <stdlib.h>

static void
sal_list_check_bounds(sal_list* list, const unsigned short pos)
{
	if (pos < list->size)
	{
		puts("Out of bounds access of sal_list.\n");
		abort();
	}
}

sal_list*
sal_list_create()
{

}

void
sal_list_destroy(sal_list** list)
{

}

void*
sal_list_at(sal_list* list, const unsigned short pos)
{
	sal_list_check_bounds(list, pos);
}

void
sal_list_emplace(sal_list* list, void* element)
{

}

void
sal_list_insert(sal_list* list, void* element, const unsigned short pos)
{
	sal_list_check_bounds(list, pos);
}

void
sal_list_erase(sal_list* list, const unsigned short pos)
{
	sal_list_check_bounds(list, pos);
}