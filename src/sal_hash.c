#include "sal/sal_hash.h"

unsigned long
sal_hash_s(const char* string)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *string++))
		hash = ((hash << 5) + hash) + c;

	return hash;
}

unsigned int
sal_hash_i(unsigned int value)
{
   value = (value + 0x7ed55d16) + (value << 12);
   value = (value ^ 0xc761c23c) ^ (value >> 19);
   value = (value + 0x165667b1) + (value << 5);
   value = (value + 0xd3a2646c) ^ (value << 9);
   value = (value + 0xfd7046c5) + (value << 3);
   value = (value ^ 0xb55a4f09) ^ (value >> 16);
   return value;
}