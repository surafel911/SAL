#include "sal_error.h"

void sal_exit(int code)
{
	exit(code);
}

void sal_error(const char* error, int code)
{
	puts(error);

	sal_exit(code);
}

void sal_error_add_handle(const sal_error_handle error_handle)
{

}