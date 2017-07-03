#ifndef SAL_HASH_H
#define SAL_HASH_H

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

/**
 * @brief Hashing function for strings.
 *
 * This function uses the C string hashing algorithm djb2 reported by Dan Bernstein listed in http://www.cse.yorku.ca/~oz/hash.html.
 *
 * @param string C string to use as the seed for the hash function.
 *
 * @return A hashed value of the C string seed.
 */
SALAPI uint64_t
sal_hash_s(const char* string);

/**
 * @brief Hashing function for integers.
 *
 * This function uses the Robert Jenkins' 32 bit integer hash function listed in https://gist.github.com/badboy/6267743.
 *
 * @param value Integer to use as the seed for the has function.
 *
 * @return A hashed value of the integer seed.
 */
SALAPI uint32_t
sal_hash_i(uint32_t value);

#ifdef _cplusplus
}
#endif // _csplutplus

#endif // SAL_HASH_H
