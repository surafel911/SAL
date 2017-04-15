#ifndef _SAL_LIB_H
#define _SAL_LIB_H

#include "sal/utilities/sal_def.h"

typedef		void (*sal_for_each_callback) (const void*, const void*);
typedef		bool (*sal_qsort_callback) (const void*, const void*);

void		sal_free(void* block);
void*		sal_malloc(const sal_size_t size);
void*		sal_calloc(const sal_size_t nitems, const sal_size_t size);
void*		sal_realloc(void* block, const sal_size_t size);

#define		sal_for_each_t(type, data, size, callback) sal_for_each(data, size, sizeof(type), callback)
void		sal_for_each(void* data, const sal_size_t size, const sal_size_t data_size, const sal_for_each_callback callback);

#endif // _SAL_LIB_H