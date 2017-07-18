#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#define SAL_DLL
#include <sal/sal_hash.h>
#include <sal/sal_algorithms.h>

#include <unordered_map>

int main()
{
	printf("%d\n", sal_hash_s("resources/image/dalek-base.png") % 100);
	printf("%d\n", sal_hash_s("resources/image/dalek-top.png") % 100);
	printf("%d\n", sal_hash_s("resources/image/dalek-laser.png") % 100);

	std::unordered_map<int, int> map;
	printf("%d\n", map.max_size());
}
