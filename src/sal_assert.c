#include <stdio.h>
#include <stdlib.h>

#include <sal/sal_assert.h>

static sal_error_callback _error_callback = NULL;

void
sal_set_error_callback(sal_error_callback error_callback)
{
	_error_callback = error_callback;
}

void
sal_assert(const bool expression, const char* message)
{
	if (expression)
	{
		if (_error_callback != NULL)
		{
			_error_callback(message);
			abort();
		}
		else
		{
			fprintf(stderr, "%s\n\n", message);
			perror("\n\nErrno");
			abort();
		}
	}
}
