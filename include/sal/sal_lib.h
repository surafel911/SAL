#ifndef SAL_LIB_H
#define SAL_LIB_H

#include <stddef.h>
#include <stdint.h>

#include <sal/internal/export.h>

#ifdef _cplusplus
extern "C"
{
#endif // _cplusplus

void
sal_free(void* ptr);

void*
sal_malloc(const size_t size);

void*
sal_calloc(const uint32_t nitems, const size_t size);

void*
sal_realloc(void* ptr, const size_t size);

#ifdef _cplusplus
}
#endif // _csplutplus

#endif // SAL_LIB_H
