#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "sal/sal_lib.h"
#include "sal/sal_map.h"

sal_map_i* map = NULL;
void func()
{
	map = sal_map_i_create();
	int* a = sal_malloc(sizeof(int));
	*a = 10;
	sal_map_i_emplace(map, 4, a);
}


int main(int argc, const char** argv)
{
	func();
	printf("%d", *(int*)sal_map_i_find(map, 4)->value);

	getchar();
}