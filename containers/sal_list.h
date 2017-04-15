#ifndef _SAL_LIST_H
#define _SAL_LIST_H

/* Includes */

#include "sal/utilities/sal_def.h"
#include "sal/utilities/sal_lib.h"

/* Definitions */

#define SAL_LIST_MAX_VALUES 10000

typedef struct
{
	sal_ptr* data;
	sal_size_t size;
} sal_list;

/* Create and Destroy */

void		sal_list_create(sal_list* list);
void		sal_list_destroy(sal_list* list);

/* Modifiers */

#define		sal_list_for_each(list, callback) sal_for_each(list->data, list->size, list->data_size, callback)
#define		sal_list_at_t(type, list, pos) (*(type*)sal_list_at(list, pos))
sal_ptr		sal_list_at(const sal_list* list, const sal_size_t pos);
void		sal_list_clear(sal_list* list);
void		sal_list_sort(const sal_list* list, const sal_qsort_callback callback);

/* Adding */

void		sal_list_emplace_back(sal_list* list, const sal_ptr value);
void		sal_list_emplace_front(sal_list* list, const sal_ptr value);
void		sal_list_insert(sal_list* list, sal_ptr value, const sal_size_t pos);

/* Removing */

void		sal_list_remove(sal_list* list, const sal_size_t pos);

#endif // _SAL_LIST_H