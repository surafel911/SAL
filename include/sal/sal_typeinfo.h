#ifndef SAL_TYPEINFO_H
#define SAL_TYPEINFO_H

#include "sal/sal_hash.h"

/**
 * @brief
 *
 * @param[in] type
 *
 * @return
 */
#define sal_type_name(type) #name

/**
 * @brief
 *
 * @param[in] type
 *
 * @return
 */
#define sal_type_index(type) (sal_type_index)sal_hash_s(#type)

/**
 * @brief
 */
typedef unsigned int sal_type_index;

#endif // SAL_TYPEINFO_H