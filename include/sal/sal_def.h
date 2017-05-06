#ifndef SAL_DEF_H
#define SAL_DEF_H

#include <stddef.h>
#include <stdbool.h>

/**
 * @brief Checks whether the pointer is NULL and, if so, aborts the program.
 *
 * @param[in] block Pointer to query.
 *
 * @param[in] fatal Whether or not to abort the program if the passed in pointer is NULL.
 */
void
sal_is_null(void* block, bool fatal);

#endif // SAL_DEF_H