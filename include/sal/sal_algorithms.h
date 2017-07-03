#ifndef SAL_ALGORITHMS_H
#define SAL_ALGORITHMS_H

#include <stddef.h>

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

/**
 * @brief
 *
 * @param[in] first
 *
 * @param[in] last
 *
 * @param[in] destination
 */
SALAPI void
sal_move(void* first, void* last, void* destination);

/**
 * @brief
 *
 * @param[in] first
 *
 * @param[in] second
 *
 * @param[in] data_size
 */
SALAPI void
sal_swap(void* first, void* second, const size_t data_size);

/**
 * @brief
 *
 */
SALAPI const char*
sal_build_string(const char* format, ...);

#ifdef _cplusplus
}
#endif // _csplutplus

#endif // SAL_ALGORITHMS_H
