#ifndef SAL_TYPEINFO_H
#define SAL_TYPEINFO_H

#include "sal/sal_hash.h"

/**
 * @brief Generates a type index hash based on the type's size.
 *
 * Uses the sal_hash_i function to generate a hash value for the type from the type's size.
 * This value can be used for indexing by type. This macro function is only a helper function, meaning that
 * there may be some collisions between types that have the same size and will not be able to differentate
 * between signed and unsigned types.
 *
 * @param[in] type Type to query.
 */
#define sal_type_index(type) sal_hash_i(sizeof(type))

#endif // SAL_TYPEINFO_H