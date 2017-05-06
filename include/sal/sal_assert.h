#ifndef SAL_ASSERT_H
#define SAL_ASSERT_H

// TODO: Static assert code

#include <stdbool.h>

/**
 * @brief
 *
 * @param[in] expression
 *
 * @param[in] message
 */
void
sal_assert(bool expression, const char* message);

#endif // SAL_ASSERT_H