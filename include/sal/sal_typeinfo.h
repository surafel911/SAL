#ifndef SAL_TYPEINFO_H
#define SAL_TYPEINFO_H

#include "sal/sal_hash.h"

/**
 * @brief Gets a string of the passed in type.
 *
 * @param[in] type Type to query.
 *
 * @return A string literal of the type.
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

#endif // SAL_TYPEINFO_H
