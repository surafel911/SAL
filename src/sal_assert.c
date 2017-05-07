#include "sal/sal_assert.h"

#include <stdio.h>
#include <stdlib.h>

void
sal_assert(bool expression, const char* message)
{
	if (expression)
	{
		printf("%s\n", message);
		abort();
	}
}