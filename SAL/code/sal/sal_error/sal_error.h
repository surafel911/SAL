#pragma once

#include <stdlib.h>

void sal_exit(int code);

void sal_error(const char* error, int code);


typedef void (*sal_error_handle) ();

void sal_error_add_handle(const sal_error_handle error_handle);