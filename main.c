#include <stdio.h>
#include <stdlib.h>
#include "sal/utilities/sal_lib.h"
#include "sal/containers/sal_vector.h"

int main()
{
	sal_vector vector;
	sal_vector_create(&vector, sizeof(int));

	int index;
	for (index = 0; index < 10; index++)
		sal_vector_push_back_t(int, &vector) = index;

	for (index = 0; index < 10; index++)
		printf("%d\n" 	, sal_vector_at_t(int, &vector, index));

	sal_vector_destroy(&vector);

	return 0;
}