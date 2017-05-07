#ifndef SAL_LIST_H
#define SAL_LIST_H

#ifndef SAL_EMPTY
/**
 * @brief Flag to be compared with the container size to determine whether the container is empty or not.
 */
#define SAL_EMPTY 0
#endif // SAL_EMPTY

/**
 * @brief  Syntactic sugar macro for sal_list_at.
 *
 * @param[in] type Type that the sal_list stores.
 *
 * @param[in] list sal_list to query.
 *
 * @param[in] pos Index in the sal_list.
 */
#define sal_list_at_t(type, list, pos) (type*)sal_list_at(list, pos)

/**
 * @brief Syntactic sugar macro for getting the begining pointer for the sal_list data.
 *
 * @param[in] type Type that the sal_list stores.
 *
 * @param[in] list sal_list to query.
 */
#define sal_list_begin_t(type, list) ((type**)list->data)

/**
 * @brief Syntactic sugar macro for getting the ending pointer for the sal_list data.
 *
 * @param[in] type Type that the sal_list stores.
 *
 * @param[in] list sal_list to query.
 */
#define sal_list_end_t(type, list) ((type**)list->data + list->size)

/**
 * @brief
 */
#define sal_generate_list(name, type)   \
typedef struct                          \
{                                       \
	type** data;                        \
	unsigned short size;                \
} sal_list_##name;                      \

/**
 * @brief
 */
typedef struct
{
	void** data;
	unsigned short size;
} sal_list;

/**
 * @brief
 */
sal_list*
sal_list_create();

/**
 * @brief
 *
 * @param[in] list
 */
void
sal_list_destroy(sal_list** list);

/**
 * @brief
 *
 * @param[in] list
 *
 * @param[in] pos
 */
void*
sal_list_at(sal_list* list, const unsigned short pos);

/**
 * @brief
 *
 * @param[in] list
 *
 * @param[in] element
 */
void
sal_list_emplace(sal_list* list, void* element);

/**
 * @brief
 *
 * @param[in] list
 *
 * @param[in] element
 *
 * @param[in] pos
 */
void
sal_list_insert(sal_list* list, void* element, const unsigned short pos);

/**
 * @brief
 *
 * @param[in] list
 *
 * @param[in] pos
 */
void
sal_list_erase(sal_list* list, const unsigned short pos);

#endif // SAL_LIST_H