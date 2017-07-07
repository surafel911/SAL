#ifndef SAL_LIB_H
#define SAL_LIB_H

#include <stddef.h>
#include <stdint.h>

#if defined(_MSC_VER) && defined(_SAL_BUILD_DLL)
 /* Building SAL as a Win32 DLL */
 #define SALAPI __declspec(dllexport)
#elif defined(_MSC_VER) && defined(SAL_DLL)
 /* Calling SAL as a Win32 DLL */
 #define SALAPI __declspec(dllimport)
#elif defined(__GNUC__) && defined(_SAL_BUILD_DLL)
 /* Building SAL as a shared / dynamic library */
 #define SALAPI __attribute__((visibility("default")))
#else
 /* Building or calling SAL as a static library */
 #define SALAPI
#endif // BUILD_DLL

#ifdef _cplusplus
extern "C"
{
#endif // _cplusplus

SALAPI void
sal_free(void* ptr);

SALAPI void*
sal_malloc(const size_t size);

SALAPI void*
sal_calloc(const uint32_t nitems, const size_t size);

SALAPI void*
sal_realloc(void* ptr, const size_t size);

#ifdef _cplusplus
}
#endif // _csplutplus

#endif // SAL_LIB_H
