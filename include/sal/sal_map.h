#ifndef SAL_MAP_H
#define SAL_MAP_H

#include <stdint.h>

#if defined(_MSC_VER) && defined(_SAL_BUILD_DLL)
 /* Building SAL as a Win32 DLL */
 #define SALAPI __declspec(dllexport)
#elif defined(_MSC_VER) && defined(SAL_DLL)
 /* Calling SAL as a Win32 DLL */
 #define SALAPI __declspec(dllimport)
#elif defined(__GNUC__) && defined(_SAL_BUILD_DLL)
 /* Building SAL as a shared / dynamic library */
 #define SALAPI __attribute__((visibility("default")))
#else
 /* Building or calling SAL as a static library */
 #define SALAPI
#endif // BUILD_DLL

#ifdef _cplusplus
extern "C"
{
#endif // _cplusplus

#ifndef SAL_EMPTY
/**
 * @brief Flag to be compared with the container size to determine whether the container is empty or not.
 */
 #define SAL_EMPTY 0
#endif // SAL_EMPTY

#ifndef SAL_TABLESET
 #define SAL_TABLESET 1000
#endif // SAL_TABLESET

/************************************************************************************************
 * Generic function macros
************************************************************************************************/

#define sal_map_find(map, key) _Generic((key),              \
	const char*: sal_map_s_find,                            \
	uint8_t*: sal_map_s_find								\
	int8_t*: sal_map_s_find									\
	char*: sal_map_s_find,                                  \
	default: sal_map_i_find                                 \
	)(map, key)                                             \

#define sal_map_emplace(map, key, value) _Generic((key),    \
	const char*: sal_map_s_emplace,                         \
	uint8_t*: sal_map_s_emplace								\
	int8_t*: sal_map_s_emplace								\
	char*: sal_map_s_emplace,                               \
	default: sal_map_i_emplace                              \
	)(map, key, value)                                      \

#define sal_map_erase(map, key) _Generic((key),             \
	const char*: sal_map_s_erase,                           \
	uint8_t*: sal_map_s_erase								\
	int8_t*: sal_map_s_erase								\
	char*: sal_map_s_erase,                                 \
	default: sal_map_i_erase                                \
	)(map, key)                                             \

/************************************************************************************************
 * String map
************************************************************************************************/

/**
 * @brief Element for sal_map_s map type.
 */
struct sal_map_s_element
{
	const char* const key;
	void* value;
};

/**
 * @brief Map using C strings as keys.
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
SALAPI struct sal_map_s*
sal_map_s_create(void);

/**
 * @brief
 *
 * @param[in] map
 */
SALAPI void
sal_map_s_destroy(struct sal_map_s** map);

/**
 * @brief
 *
 * @param[in] key
 *
 * @return
 */
SALAPI struct sal_map_s_element*
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
SALAPI struct sal_map_s_element*
sal_map_s_emplace(struct sal_map_s* map, const char* key, void* value);

/**
 * @brief
 *
 * @param[in] key
 */
SALAPI void
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
SALAPI struct sal_map_i*
sal_map_i_create(void);

/**
 * @brief
 *
 * @param[in] map
 */
SALAPI void
sal_map_i_destroy(struct sal_map_i** map);

/**
 * @brief
 *
 * @param[in] key
 *
 * @return
 */
SALAPI struct sal_map_i_element*
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
SALAPI struct sal_map_i_element*
sal_map_i_emplace(struct sal_map_i* map, int key, void* value);

/**
 * @brief
 *
 * @param[in] key
 */
SALAPI void
sal_map_i_erase(struct sal_map_i* map, int key);

#ifdef _cplusplus
}
#endif // _csplutplus

#endif // SAL_MAP_H
