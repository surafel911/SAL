#ifndef SAL_ASSERT_H
#define SAL_ASSERT_H

#include <stdbool.h>

/**
 * @brief Evaluates the expression and, if false, prints out the error message and exits the program with the given code.
 *
 * Evaluates the expression and, if false, prints out the error message and exits the program with the given code. Note
 * that this function is not affected by the NDEBUG flag.
 *
 * @param[in] expression Expression to be evaluated by sal_assert.
 *
 * @param[in] message Message to be printed if the expression evaluates to false.
 */
void
sal_assert(const bool expression, const char* message);

#endif // SAL_ASSERT_H