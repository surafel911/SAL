#ifndef SAL_ALGORITHMS_H
#define SAL_ALGORITHMS_H

#include <stddef.h>

#include <sal/internal/export.h>

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
