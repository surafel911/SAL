#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include <sal/sal_lib.h>
#include <sal/sal_vector.h>
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
	va_list arg_list;
	va_list arg_start;
	va_start(arg_list, format);
	va_copy(arg_start, arg_list);
	
	size_t string_length = 0;
	size_t format_length = strlen(format);

	char buffer[15];
	const char* start = format;
	for (; format < start + format_length; format++)
	{
		if ((*format) == '%')
		{
			switch ((*(++format)))
			{
			case 's':
				string_length += strlen(va_arg(arg_list, const char*));
				break;
			case 'd':
			case 'i':
				sprintf(buffer, "%d%s", va_arg(arg_list, long), '\0');
				string_length += strlen(buffer);
				break;
			case 'f':
				sprintf(buffer, "%f%s", va_arg(arg_list, double), '\0');
				string_length += strlen(buffer);
				break;
			}
		}
		else
		{
			string_length++;
		}
	}

	char* string = sal_malloc(sizeof(char) * (string_length + 1));
	vsprintf(string, start, arg_start);
	(*(string + string_length)) = '\0';

	va_end(arg_list);

	return (const char*)string;
}
