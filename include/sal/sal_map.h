#ifndef SAL_MAP_H
#define SAL_MAP_H

#ifndef SAL_EMPTY
/**
 * @brief
 */
#define SAL_EMPTY 0
#endif // SAL_EMPTY

// TODO: Add generic shit

/************************************************************************************************
 * String map
************************************************************************************************/

/**
 * @brief
 */
typedef struct
{
	const char* key;
	void* value;
} sal_map_s_element;

/**
 * @brief
 */
typedef struct
{
	sal_map_s_element* data;
	unsigned short size;
} sal_map_s;

/**
 * @brief

 * @return Pointer to a new sal_map_s instance
 */
sal_map_s*
sal_map_s_create();

/**
 * @brief
 *
 * @param[in] map
 */
void
sal_map_s_destroy(sal_map_s** map);

/**
 * @brief
 *
 * @param[in] key
 *
 * @return
 */
sal_map_s_element*
sal_map_s_find(sal_map_s* map, const char* key);

/**
 * @brief
 *
 * @param[in] key
 *
 * @param[in] value
 *
 * @return
 */
sal_map_s_element*
sal_map_s_emplace(sal_map_s* map, const char* key, void* value);

/**
 * @brief
 *
 * @param[in] key
 */
void
sal_map_s_erase(sal_map_s* map, const char* key);

/************************************************************************************************
 * Integer map
************************************************************************************************/

/**
 * @brief
 */
typedef struct
{
	const long key;
	void* value;
} sal_map_i_element;

/**
 * @brief
 */
typedef struct
{
	sal_map_i_element* data;
	unsigned short size;
} sal_map_i;

/**
 * @brief
 *
 * @return
 */
sal_map_i*
sal_map_i_create();

/**
 * @brief
 *
 * @param[in] map
 */
void
sal_map_i_destroy(sal_map_i** map);

/**
 * @brief
 *
 * @param[in] key
 *
 * @return
 */
sal_map_i_element*
sal_map_i_find(sal_map_i* map, int key);

/**
 * @brief
 *
 * @param[in] key
 *
 * @param[in] value
 *
 * @return
 */
sal_map_i_element*
sal_map_i_emplace(sal_map_i* map, int key, void* value);

/**
 * @brief
 *
 * @param[in] key
 */
void
sal_map_i_erase(sal_map_i* map, int key);

#endif // SAL_MAP_H