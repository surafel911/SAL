#ifndef SAL_VECTOR_H
#define SAL_VECTOR_H

#include <stddef.h>

#ifndef SAL_EMPTY
/**
 * @brief Flag to be compared with the container size to determine whether the container is empty or not.
 */
#define SAL_EMPTY 0
#endif // SAL_EMPTY

/**
 * @brief Syntactic sugar macro for sal_vector_create.
 *
 * @param[in] type Type that the sal_vector will store.
 */
#define sal_vector_create_t(type) sal_vector_create(sizeof(type))

/**
 * @brief  Syntactic sugar macro for sal_vector_at.
 *
 * @param[in] type Type that the sal_vector stores.
 *
 * @param[in] vector sal_vector to query.
 *
 * @param[in] pos Index in the sal_vector.
 */
#define sal_vector_at_t(type, vector, pos) (type*)sal_vector_at(vector, pos)

/**
 * @brief Syntactic sugar macro for getting the begining pointer for the sal_vector data.
 *
 * @param[in] type Type that the sal_vector stores.
 *
 * @param[in] vector sal_vector to query.
 */
#define sal_vector_begin_t(type, vector) ((type*)vector->data)

/**
 * @brief Syntactic sugar macro for getting the ending pointer for the sal_vector data.
 *
 * @param[in] type Type that the sal_vector stores.
 *
 * @param[in] vector sal_vector to query.
 */
#define sal_vector_end_t(type, vector) ((type*)vector->data + vector->size)

/**
 * @brief Syntactic sugar macro for sal_generate_vector.
 *
 * Is equivelent to sal_generate_vector(typem type).
 */
#define sal_generate_vector_t(type) sal_generate_vector(type, type)

/**
 * @brief Container for dynamically allocating contiguous data.
 */
struct sal_vector
{
	void* data;
	const size_t data_size;
	unsigned short size, capacity;
};

/**
 * @brief Creates a new sal_vector instance.
 *
 * @param[in] data_size Size of the data type.
 *
 * @return Pointer to a new sal_vector instance.
 */
struct sal_vector*
sal_vector_create(const unsigned short data_size);

/**
 * @brief Destroys a the sal_vector.
 *
 * Destroys the passed in sal_vector instance. All of the contents are freeded as well as the sal_vector instance.
 * The function sets the sal_vector pointer to NULL so ensure that you are not using the sal_vector.
 *
 * @param[in] vector sal_vector to destroy.
 */
void
sal_vector_destroy(struct sal_vector** vector);

/**
 * @brief Access element inside a sal_vector with bounds checking.
 *
 * @param vector sal_vector to query.
 *
 * @param pos Index in the sal_vector.
 *
 * @return Pointer to the element in the sal_vector.
 */
void*
sal_vector_at(struct sal_vector* vector, const unsigned short pos);

/**
 * @brief Clears the contents of the sal_vector.
 *
 * Clears the contents of the sal_vector. Equivelent to sal_vector_resize(vector, o).
 *
 * @param[in] vector sal_vector to clear.
 */
void
sal_vector_clear(struct sal_vector* vector);

/**
 * @brief Frees unused memory in the sal_vector.
 *
 * Reduces memory usage by freeing unused memory in the sal_vector. Sets the capacity of the sal_vector to it's size.
 *
 * @param[in] vector sal_vector to shrink.
 */
void
sal_vector_shrink(struct sal_vector* vector);

/**
 * @brief Changes the capacity of the sal_vector.
 *
 * @param[in] vector sal_vector to query.
 *
 * @param[in] capacity New capacity of the sal_vector.
 */
void
sal_vector_resize(struct sal_vector* vector, const unsigned short capacity);

/**
 * @brief Get a new element in the sal_vector.
 *
 * Gets a new element in the sal_vector. If the sal_vector has reached it's capacity, it will automatically reallocate memory
 * before returning a pointer to the new element.
 *
 * @param[in] vector sal_vector to query.
 *
 * @return Pointer to a new element in the sal_vector.
 */
void*
sal_vector_push_back(struct sal_vector* vector);

/**
 * @brief Get a new element in the sal_vector at passed in pos.
 *
 * Gets a new element in the sal_vecor by moving the elements from the passed pos back one element. Retusn the pointer
 * to the element at the passed pos. Note the contents of the returned element will not change.
 *
 * If the sal_vectot has reached it's capacity, it will automatically reallocate memory before returning a pointer to the new
 * element.
 *
 * @param[in] vector sal_vector to query
 *
 * @param[in] pos
 *
 * @return
 */
void*
sal_vector_insert(struct sal_vector* vector, const unsigned short pos);

/**
 * @brief Removes the last element.
 *
 * This function actually decrements the size member in the sal_vector, as well as reducing the capacity of the sal_vector if the size
 * is equal to half the capacity. The function will not work if the sal_vector is empty.
 *
 * @param[in] vector sal_vector to query.
 */
void
sal_vector_pop_back(struct sal_vector* vector);

/**
 * @brief Removes element at the passed in pos.
 *
 * This function removes the element at the passed in pos by moving the data from the pos + 1 forward by one element, as well as reducing
 * the capacity of the sal_vector if the sizeis equal to half the capacity. The function will not work if the sal_vector is empty.
 *
 * @param[in] vector sal_vector to query.
 *
 * @param[in] pos Position of the element to be removed in the sal_vector.
 */
void
sal_vector_erase(struct sal_vector* vector, const unsigned short pos);

#endif // SAL_VECTOR_H