#ifndef SAL_ARRAY_H
#define SAL_ARRAY_H

#include <stddef.h>
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

/**
 * @brief Syntactic sugar macro for sal_array_create.
 *
 * @param[in] size Number of elements to store in the sal_array.
 *
 * @param[in] type Type that the sal_array will store.
 */
#define sal_array_create_t(size, type) sal_array_create(size, sizeof(type))

/**
 * @brief Syntactic sugar macro for sal_array_at.
 *
 * @param[in] type Type that the sal_array stores.
 *
 * @param[in] array sal_array to query.
 *
 * @param[in] pos Index in the sal_array.
 */
#define sal_array_at_t(type, array, pos) (type*)sal_array_at(array, pos)

/**
 * @brief Syntactic sugar macro for getting the begining pointer for the sal_array data
 *
 * @param[in] type Type that the sal_vector stores.
 *
 * @param[in] vector sal_vector to query.
 */
#define sal_array_begin_t(type, array) ((type*)array->data)

/**
 * @brief Syntactic sugar macro for getting the ending pointer for the sal_array data.
 *
 * @param[in] type Type that the sal_array stores.
 *
 * @param[in] array sal_array to query.
 */
#define sal_array_end_t(type, array) ((type*)array->data + array->size)

/**
 * @brief Container storing statically allocating contiguous data.
 */
struct sal_array
{
	void* data;
	const size_t data_size;
	const uint16_t size;
};

/**
 * @brief Creates a new sal_array instance.
 *
 * @param[in] size Number of elements to store in the sal_array.
 *
 * @param[in] data_size Size of the data type.
 *
 * @return Pointer to a new sal_array instance.
 */
SALAPI struct sal_array*
sal_array_create(const uint16_t size, const size_t data_size);

/**
 * @brief Destroys a the sal_array.
 *
 * Destroys the passed in sal_array instance. All of the contents are freeded as well as the sal_array instance.
 * The function sets the sal_array pointer to NULL so ensure that you are not using the sal_array.
 *
 * @param[in] array sal_array to destroy.
 */
SALAPI void
sal_array_destroy(struct sal_array** array);

/**
 * @brief Access element inside a sal_array with bounds checking.
 *
 * @param array sal_array to query.
 *
 * @param pos Index in the sal_array.
 *
 * @return Pointer to the element in the sal_array.
 */
SALAPI void*
sal_array_at(struct sal_array* array, const uint16_t pos);

#ifdef _cplusplus
}
#endif // _csplutplus

#endif // SAL_ARRAY_H
