#ifndef SAL_MAP_H
#define SAL_MAP_H

#ifndef SAL_EMPTY
/**
 * @brief Flag to be compared with the container size to determine whether the container is empty or not.
 */
#define SAL_EMPTY 0
#endif // SAL_EMPTY

#ifndef SAL_TABLESET
/**
 * @brief Number of elements in a map.
 *
 * Number of elements in a map. This macro is used to indicate where in the sal_map an element will be stored
 * after hashing the key. This macro can be overridden before including the header file to change the tableset
 * of the map.
 */
#define SAL_TABLESET 256
#endif // SAL_TABLESET

#ifndef _SAL_MAP_MAX_CAPACITY
/**
 * @brief Maximum value allowed for SAL_TABLESET.
 */
#define _SAL_MAP_MAX_CAPACITY 1000
#endif // _SAL_MAP_MAX_CAPACITY

#if SAL_TABLESET > _SAL_MAP_MAX_CAPACITY
#error "SAL_TABLESET is greater than the maximum tableset (1000)."
#endif // SAL_TABLESET > _SAL_MAP_MAX_CAPACITY

/************************************************************************************************
 * Generic function macros
************************************************************************************************/

#define sal_map_find(map, key) _Generic((key),              \
	const char*: sal_map_s_find,                            \
	char*: sal_map_s_find,                                  \
	default: sal_map_i_find                                 \
	)(map, key)                                             \

#define sal_map_emplace(map, key, value) _Generic((key),    \
	const char*: sal_map_s_emplace,                         \
	char*: sal_map_s_emplace,                               \
	default: sal_map_i_emplace                              \
	)(map, key, value)                                      \

#define sal_map_erase(map, key) _Generic((key),             \
	const char*: sal_map_s_erase,                           \
	char*: sal_map_s_erase,                                 \
	default: sal_map_i_erase                                \
	)(map, key)                                             \

/************************************************************************************************
 * String map
************************************************************************************************/

/**
 * @brief
 */
struct sal_map_s_element
{
	const char* key;
	void* value;
};

/**
 * @brief
 */
struct sal_map_s
{
	struct sal_map_s_element* data;
	unsigned short size;
};

/**
 * @brief

 * @return Pointer to a new sal_map_s instance
 */
struct sal_map_s*
sal_map_s_create(void);

/**
 * @brief
 *
 * @param[in] map
 */
void
sal_map_s_destroy(struct sal_map_s** map);

/**
 * @brief
 *
 * @param[in] key
 *
 * @return
 */
struct sal_map_s_element*
sal_map_s_find(struct sal_map_s* map, const char* key);

/**
 * @brief
 *
 * @param[in] key
 *
 * @param[in] value
 *
 * @return
 */
struct sal_map_s_element*
sal_map_s_emplace(struct sal_map_s* map, const char* key, void* value);

/**
 * @brief
 *
 * @param[in] key
 */
void
sal_map_s_erase(struct sal_map_s* map, const char* key);

/************************************************************************************************
 * Integer map
************************************************************************************************/

/**
 * @brief
 */
struct sal_map_i_element
{
	const int key;
	void* value;
};

/**
 * @brief
 */
struct sal_map_i
{
	struct sal_map_i_element* data;
	unsigned short size;
};

/**
 * @brief
 *
 * @return
 */
struct sal_map_i*
sal_map_i_create(void);

/**
 * @brief
 *
 * @param[in] map
 */
void
sal_map_i_destroy(struct sal_map_i** map);

/**
 * @brief
 *
 * @param[in] key
 *
 * @return
 */
struct sal_map_i_element*
sal_map_i_find(struct sal_map_i* map, int key);

/**
 * @brief
 *
 * @param[in] key
 *
 * @param[in] value
 *
 * @return
 */
struct sal_map_i_element*
sal_map_i_emplace(struct sal_map_i* map, int key, void* value);

/**
 * @brief
 *
 * @param[in] key
 */
void
sal_map_i_erase(struct sal_map_i* map, int key);

#endif // SAL_MAP_H