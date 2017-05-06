#ifndef SAL_HASH_H
#define SAL_HASH_H

// TODO: Credit this nigga

/**
 * @brief Hashing function for strings.
 *
 * @param string C string to use as the seed for the hash function.
 *
 * @return A hashed value of the C string seed.
 */
unsigned long
sal_hash_s(const char* string);

/**
 * @brief Hashing function for integers.
 *
 * @param value Integer to use as the seed for the has function.
 *
 * @return A hashed value of the integer seed.
 */
unsigned int
sal_hash_i(unsigned int value);

#endif // SAL_HASH_H