#include "sal_vector.h"

struct sal_vector
{
	void* _data;
	size_t _data_size;
	unsigned int _size, _capacity;
};