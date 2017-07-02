#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include <sal/sal_lib.h>
#include <sal/sal_algorithms.h>

void
sal_move(void* first, void* last, void* destination)
{
	memmove(destination, first, last - first);
}

void
sal_swap(void* first, void* second, const size_t data_size)
{
	if (data_size > 0)
	{
		void* temp = sal_malloc(data_size);
		memcpy(temp, first, data_size);

		memmove(first, second, data_size);
		memmove(second, temp, data_size);

		sal_free(temp);
	}
}

const char*
sal_build_string(const char* format, ...)
{
	va_list args;
	va_start(args, format);

	va_end(args);
}
