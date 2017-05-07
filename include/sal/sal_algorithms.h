#ifndef SAL_ALGORITHMS_H
#define SAL_ALGORITHMS_H

// TODO: Review the need of these and whether the header is named correctly.

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

/**
 * @brief
 *
 * @param[in] begin
 *
 * @param[in] end
 *
 * @param[in] data_size
 *
 * @param[in] comparison
 */
#define sal_sort(begin, end, data_size, comparison)      \
for (; begin != end - data_size; begin += data_size)     \
{                                                        \
	if (comparison)                                      \
	{                                                    \
		sal_swap(begin, begin + data_size, data_size);   \
	}                                                    \
}                                                        \

#endif // SAL_ALGORITHMS_H