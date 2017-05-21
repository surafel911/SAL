#include "sal/sal_map.h"

#include "sal/sal_hash.h"
#include "sal/sal_assert.h"

#include <stdlib.h>

sal_map_s*
sal_map_s_create()
{
	sal_map_s* map = (sal_map_s*)calloc(1, sizeof(sal_map_s));
	sal_assert(map->data == NULL, "sal_map_s_create: Failed to allocate memory for a sal_map_s.");

	map->data = calloc(SAL_TABLESET, sizeof(sal_map_s_element));
	sal_assert(map->data == NULL, "sal_map_s_create: Failed to allocate memory for the sal_map_s instance data.");

	map->size = 0;

	return map;
}

void
sal_map_s_destroy(sal_map_s** map)
{
	sal_assert(map == NULL, "sal_map_s_destroy: Invalid reference to a pointer to a sal_map_s instance passed.");
	sal_assert((*map) == NULL, "sal_map_s_destroy: Invalid pointer to a sal_map_s instance passed.");

	free((*map)->data);
	free((*map));
	(*map) = NULL;
}

sal_map_s_element*
sal_map_s_find(sal_map_s* map, const char* key)
{
	sal_assert(map == NULL, "sal_map_s_find: Invalid pointer to a sal_map_s instance passed.");
	sal_assert(key == NULL, "sal_map_s_find: Invalid key passed (cannot be NULL).");

	return (map->data + (sal_hash_s(key) % SAL_TABLESET))->value ? (map->data + (sal_hash_s(key) % SAL_TABLESET)) : NULL;
}

sal_map_s_element*
sal_map_s_emplace(sal_map_s* map, const char* key, void* value)
{
	sal_assert(map == NULL, "sal_map_s_emplace: Invalid pointer to a sal_map_s instance passed.");
	sal_assert(key == NULL, "sal_map_s_emplace: Invalid key passed (cannot be NULL).");

	if (map->size < _SAL_MAP_MAX_CAPACITY)
	{
		sal_assert(value == NULL, "sal_map_s_emplace: Invalid value passed (cannot be NULL).");

		sal_map_s_element* element = (map->data + (sal_hash_s(key) % SAL_TABLESET));

		if (!element->value)
		{
			element->key = key;
			element->value = value;
		}

		map->size++;

		return element;
	}
	else
	{
		return NULL;
	}
}

void
sal_map_s_erase(sal_map_s* map, const char* key)
{
	sal_assert(map == NULL, "sal_map_s_erase: Invalid pointer to a sal_map_s instance passed.");
	sal_assert(key == NULL, "sal_map_s_erase: Invalid key passed (cannot be NULL).");

	sal_map_s_element* element = (map->data + (sal_hash_s(key) % SAL_TABLESET));
	if (element->value)
	{
		element->key = NULL;
		element->value = NULL;
		map->size--;
	}
}

sal_map_i*
sal_map_i_create()
{
	sal_map_i* map = (sal_map_i*)calloc(1, sizeof(sal_map_i));
	sal_assert(map == NULL, "sal_map_i_create: Failed to allocate memory for a sal_map_i instance.");

	map->data = calloc(SAL_TABLESET, sizeof(sal_map_i_element));
	sal_assert(map->data == NULL, "sal_map_i_create: Failed to allocate memory for the sal_map_i instance data.");

	map->size = 0;

	return map;
}

void
sal_map_i_destroy(sal_map_i** map)
{
	sal_assert(map == NULL, "sal_map_i_destroy: Invalid reference to a pointer to a sal_map_i instance passed.");
	sal_assert((*map) == NULL, "sal_map_i_destroy: Invalid pointer to a sal_map_i instance passed.");

	free((*map)->data);
	free((*map));
	(*map) = NULL;
}

sal_map_i_element*
sal_map_i_find(sal_map_i* map, int key)
{
	sal_assert(map == NULL, "sal_map_i_find: Invalid pointer to a sal_map_i instance passed.");

	return (map->data + (sal_hash_i(key) % SAL_TABLESET))->value ? (map->data + (sal_hash_i(key) % SAL_TABLESET))->value : NULL;
}

sal_map_i_element*
sal_map_i_emplace(sal_map_i* map, int key, void* value)
{
	sal_assert(map, "sal_map_i_emplace: Invalid pointer to a sal_map_i instance passed.");

	if (map->size < _SAL_MAP_MAX_CAPACITY)
	{
		sal_assert(value == NULL, "sal_map_s_emplace: Invalid value passed (cannot be NULL).");

		sal_map_i_element* element = (map->data + (sal_hash_i(key) % SAL_TABLESET));

		if (!element->value)
		{
			*(long*)element = key;
			element->value = value;
		}

		map->size++;

		return element;
	}
	else
	{
		return NULL;
	}
}

void
sal_map_i_erase(sal_map_i* map, int key)
{
	sal_assert(map == NULL, "sal_map_i_erase: Invalid pointer to a sal_map_i instance passed.");

	sal_map_i_element* element = (map->data + (sal_hash_i(key) % SAL_TABLESET));
	if (element->value)
	{
		*(long*)&element->key = 0;
		element->value = NULL;
		map->size--;
	}
}