#ifndef SAL_LIB_H
#define SAL_LIB_H

#include <stddef.h>

/**
 * @brief Frees memory with invalid pointer checking.
 *
 * A simple wrapper for the C standard free() function. If the passed in pointer is invalid, an error message is pritned
 * to the console and the program aborts.
 *
 * @param ptr Pointer to the memory to deallocate.
 */
void
sal_free(void* ptr);

/**
 * @brief
 * @param nitems
 * @param data_size
 */
void*
sal_calloc(const int nitems, const size_t data_size);

/**
 * @brief
 * @param data_size
 */
void*
sal_malloc(const size_t data_size);

/**
 * @brief
 * @param ptr
 * @param data_size
 */
void*
sal_realloc(void* ptr, const size_t data_size);

#endif // SAL_LIB_H