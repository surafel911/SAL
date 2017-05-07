#ifndef SAL_HASH_H
#define SAL_HASH_H

/**
 * @brief Hashing function for strings.
 *
 * This function uses the C string hashing algorithm djb2 reported by Dan Bernstein listed in http://www.cse.yorku.ca/~oz/hash.html.
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
 * This function uses the Robert Jenkins' 32 bit integer hash function listed in https://gist.github.com/badboy/6267743.
 *
 * @param value Integer to use as the seed for the has function.
 *
 * @return A hashed value of the integer seed.
 */
unsigned int
sal_hash_i(unsigned int value);

#endif // SAL_HASH_H