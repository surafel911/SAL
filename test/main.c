#include "sal/sal_lib.h"
#include "sal/sal_map.h"
#include "sal/sal_array.h"
#include "sal/sal_vector.h"

#include <stdio.h>

#define MAX 20.0f

int main()
{


	puts("sal_array:");
	sal_array* array = sal_array_create_t(MAX, int);

	for (int* value = array->data; value != (int*)array->data + array->size; value++)
	{
		(*value) = value - (int*)array->data;
		printf("%d\n", (*value));
	}

	sal_array_destroy((sal_array**)&array);

	puts("");

	puts("sal_vector:");
	sal_vector* vector = sal_vector_create_t(float);
	int value = 0;
	*(float*)sal_vector_push_back(vector) = value++ / MAX;
	*(float*)sal_vector_push_back(vector) = value++ / MAX;
	*(float*)sal_vector_push_back(vector) = value++ / MAX;

	sal_vector_resize(vector, MAX - value);

	for (float* element = vector->data; value < MAX; value++, element++)
	{
		*element = value / MAX;
		printf("%f\n", *element);
	}

	sal_vector_destroy(&vector);

	puts("\n");

	getchar();
}