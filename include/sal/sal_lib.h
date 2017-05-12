#ifndef SAL_LIB_H
#define SAL_LIB_H

#include "sal/sal_def.h"

/**
 * @brief Deallocates a block of memory.
 *
 * Deallocates the pointer passed into the function. If the pointer points to NULL or invalid memory, the function will
 * cause the program to abort and print an error message.
 *
 * @param block Pointer to the memory to deallocate.
 */
void
sal_free(void* block);

/**
 * @brief Allocate a block of memory.
 *
 * Allocates the passed in size in bytes of memory and returns the resulting pointer. If there is an allocation error,
 * the function will cause the program to abort and print an error message.
 *
 * @param size Size in bytes of memory to allocate.
 *
 * @return Pointer to the allocated memory.
 */
void*
sal_malloc(const size_t size);

/**
 * @brief Allocates a block of memory and sets the bits to 0.
 *
 * Allocates memory and initializes the bits to 0. If there is an allocation error the function will cause the program to abort
 * print an error message.
 *
 * @param[in] nitems Number of elements to allocate.
 *
 * @param[in] size Size of each element.
 *
 * @return Pointer to the allocated memory.
 */
void*
sal_calloc(const size_t nitems, const size_t size);

/**
 * @brief Reallocates a block of memory to the passed in size in bytes.
 *
 * @param[in] block Pointer to the block of memory to reallocate.
 *
 * @param[in] size Size in bytes to reallocate.
 *
 * @return Pointer to the reallocated memory.
 */
void*
sal_realloc(void* block, const size_t size);

#endif // SAL_LIB_H