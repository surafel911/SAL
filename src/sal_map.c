#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

#include <sal/sal_lib.h>
#include <sal/sal_map.h>
#include <sal/sal_hash.h>
#include <sal/sal_assert.h>

struct sal_map_s*
sal_map_s_create()
{
	struct sal_map_s* map = (struct sal_map_s*)sal_calloc(1, sizeof(struct sal_map_s));
	map->data = sal_calloc(SAL_TABLESET, sizeof(struct sal_map_s_element));

	return map;
}

void
sal_map_s_destroy(struct sal_map_s** map)
{
	sal_free((*map)->data);
	sal_free((*map));
	(*map) = NULL;
}

struct sal_map_s_element*
sal_map_s_find(struct sal_map_s* map, const char* key)
{
	sal_assert(key == NULL, "sal_map_s_find: Invalid key passed (cannot be NULL).");

	return (map->data + (sal_hash_s(key) % SAL_TABLESET))->value;
}

struct sal_map_s_element*
sal_map_s_emplace(struct sal_map_s* map, const char* key, void* value)
{
	sal_assert(key == NULL, "sal_map_s_emplace: Invalid key passed (cannot be NULL).");

	sal_assert(value == NULL, "sal_map_s_emplace: Invalid value passed (cannot be NULL).");

	struct sal_map_s_element* element = (map->data + (sal_hash_s(key) % SAL_TABLESET));

	if (!element->value)
	{
		(*(const char**)&element->key) = key;
		element->value = value;
			
		map->size++;
	
		return element;
	}
	else
	{
		return NULL;
	}
}

void
sal_map_s_erase(struct sal_map_s* map, const char* key)
{
	sal_assert(key == NULL, "sal_map_s_erase: Invalid key passed (cannot be NULL).");

	struct sal_map_s_element* element = (map->data + (sal_hash_s(key) % SAL_TABLESET));

	if (element->value)
	{
		(*(const char**)&element->key) = NULL;
		element->value = NULL;
		map->size--;
	}
}

struct sal_map_i*
sal_map_i_create()
{
	struct sal_map_i* map = (struct sal_map_i*)sal_calloc(1, sizeof(struct sal_map_i));
	map->data = sal_calloc(SAL_TABLESET, sizeof(struct sal_map_i_element));

	return map;
}

void
sal_map_i_destroy(struct sal_map_i** map)
{
	sal_free((*map)->data);
	sal_free((*map));
	(*map) = NULL;
}

struct sal_map_i_element*
sal_map_i_find(struct sal_map_i* map, int key)
{
	return (map->data + (sal_hash_i(key) % SAL_TABLESET))->value;
}

struct sal_map_i_element*
sal_map_i_emplace(struct sal_map_i* map, int key, void* value)
{
	sal_assert(value == NULL, "sal_map_s_emplace: Invalid value passed (cannot be NULL).");

	struct sal_map_i_element* element = (map->data + (sal_hash_i(key) % SAL_TABLESET));

	if (!element->value)
	{
		(*(int*)&element->key) = key;
		element->value = value;
			
		map->size++;
			
		return element;
	}
	else
	{
		return NULL;
	}
}

void
sal_map_i_erase(struct sal_map_i* map, int key)
{
	struct sal_map_i_element* element = (map->data + (sal_hash_i(key) % SAL_TABLESET));

	if (element->value)
	{
		(*(int*)&element->key) = 0;
		element->value = NULL;
		map->size--;
	}
}
