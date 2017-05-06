#include "sal/sal_assert.h"

#include <stdio.h>
#include <assert.h>

void
sal_assert(bool expression, const char* message)
{
	if (expression)
	{
		printf("%s\n", message);
		assert(expression);
	}
}