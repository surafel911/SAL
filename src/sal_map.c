#include "sal/sal_map.h"

#ifndef SAL_TABLESET
/**
 * @brief
 */
#define SAL_TABLESET 256
#endif // SAL_TABLESET

#include "sal/sal_def.h"
#include "sal/sal_lib.h"
#include "sal/sal_hash.h"

sal_map_s*
sal_map_s_create()
{
	sal_map_s* map = (sal_map_s*)sal_calloc(1, sizeof(sal_map_s));

	map->data = sal_calloc(SAL_TABLESET, sizeof(sal_map_s_element));
	map->size = 0;

	return map;
}

void
sal_map_s_destroy(sal_map_s** map)
{
	sal_is_null(map, true);
	sal_is_null((*map), true);

	sal_free((*map)->data);
	sal_free((*map));
	(*map) = NULL;
}

sal_map_s_element*
sal_map_s_find(sal_map_s* map, const char* key)
{
	sal_is_null(map, true);
	sal_is_null((char*)key, true);

	return map->data + (sal_hash_s(key) % SAL_TABLESET);
}

sal_map_s_element*
sal_map_s_emplace(sal_map_s* map, const char* key, void* value)
{
	(map->data + (sal_hash_s(key) % SAL_TABLESET))->key = key;
	(map->data + (sal_hash_s(key) % SAL_TABLESET))->value = value;
	map->size++;

	return (map->data + (sal_hash_s(key) % SAL_TABLESET));
}

void
sal_map_s_erase(sal_map_s* map, const char* key)
{
	(map->data + (sal_hash_s(key) % SAL_TABLESET))->key = NULL;
	(map->data + (sal_hash_s(key) % SAL_TABLESET))->value = NULL;
	map->size--;
}

sal_map_i*
sal_map_i_create()
{
	sal_map_i* map = (sal_map_i*)sal_calloc(1, sizeof(sal_map_i));

	map->data = sal_calloc(SAL_TABLESET, sizeof(sal_map_i_element));
	map->size = 0;

	return map;
}

void
sal_map_i_destroy(sal_map_i** map)
{
	sal_is_null(map, true);
	sal_is_null((*map), true);

	sal_free((*map)->data);
	sal_free((*map));
	(*map) = NULL;
}

sal_map_i_element*
sal_map_i_find(sal_map_i* map, int key)
{
	sal_is_null(map, true);

	return map->data + (sal_hash_i(key) % SAL_TABLESET);
}

sal_map_i_element*
sal_map_i_emplace(sal_map_i* map, int key, void* value)
{
	*(long*)(map->data + (sal_hash_i(key) % SAL_TABLESET)) = key;
	(map->data + (sal_hash_i(key) % SAL_TABLESET))->value = value;
	map->size++;

	return (map->data + (sal_hash_i(key) % SAL_TABLESET));
}

void
sal_map_i_erase(sal_map_i* map, int key)
{
	*(long*)(map->data + (sal_hash_i(key) % SAL_TABLESET)) = 0;
	(map->data + (sal_hash_i(key) % SAL_TABLESET))->value = NULL;
	map->size--;
}