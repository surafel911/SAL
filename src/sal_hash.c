#include <sal/sal_hash.h>

uint64_t
sal_hash_s(const char* string)
{
	uint64_t hash = 5381;
	int32_t c;

	while ((c = *string++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return hash;
}

uint32_t
sal_hash_i(uint32_t value)
{
   value = (value + 0x7ed55d16) + (value << 12);
   value = (value ^ 0xc761c23c) ^ (value >> 19);
   value = (value + 0x165667b1) + (value << 5);
   value = (value + 0xd3a2646c) ^ (value << 9);
   value = (value + 0xfd7046c5) + (value << 3);
   value = (value ^ 0xb55a4f09) ^ (value >> 16);

   return value;
}
