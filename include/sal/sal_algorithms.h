#ifndef SAL_ALGORITHMS_H
#define SAL_ALGORITHMS_H

#include <stddef.h>

/**
 * @brief
 *
 * @param[in] first
 *
 * @param[in] last
 *
 * @param[in] destination
 */
void
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
void
sal_swap(void* first, void* second, const size_t data_size);

#endif // SAL_ALGORITHMS_H