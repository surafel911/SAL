#include "sal/sal_def.h"

#include <stdio.h>
#include <stdlib.h>

void
sal_is_null(void* block, bool fatal)
{
	if (!block)
	{
		printf("%s: Invalid pointer passed.", __FUNCTION__);

		if (fatal)
		{
			abort();
		}
	}
}