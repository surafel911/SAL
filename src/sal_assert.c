#include <stdio.h>
#include <stdlib.h>

#include <sal/sal_assert.h>

void
sal_assert(const bool expression, const char* message)
{
	if (expression)
	{
		fprintf(stderr, "%s\n\n", message);
		abort();
	}
}