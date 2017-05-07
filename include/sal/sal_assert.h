#ifndef SAL_ASSERT_H
#define SAL_ASSERT_H

// TODO: Static assert code

#include <stdbool.h>

/**
 * @brief Evaluates the expression and, if false, prints out an error message and aborts the program.
 *
 * @param[in] expression Expression to be evaluated by sal_assert.h
 *
 * @param[in] message Message to be printed if the expression evaluates to false.
 */
void
sal_assert(bool expression, const char* message);

#endif // SAL_ASSERT_H