#ifndef SAL_ASSERT_H
#define SAL_ASSERT_H

#include <stdbool.h>

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

typedef void (*sal_error_callback) (const char*);

/**
 * @brief Sets the error callback called by sal_assert.
 * 
 * Sets the error callback called by sal_assert.
 *
 * @param[in] error_callback Error callback to set.
 */
SALAPI void
sal_set_error_callback(sal_error_callback error_callback);

/**
 * @brief Evaluates the expression and, if false, prints out the error message and exits the program with the given code.
 *
 * Evaluates the expression and, if false, either calls the set error callback or prints out the error message onto the console
 * and exits the program. Note that this function is not affected by the NDEBUG flag.
 *
 * @param[in] expression Expression to be evaluated by sal_assert.
 *
 * @param[in] message Message to be printed onto the console pr passed into the error callback if the expression evaluates to false.
 */
SALAPI void
sal_assert(const bool expression, const char* message);

#ifdef _cplusplus
}
#endif // _csplutplus

#endif // SAL_ASSERT_H
