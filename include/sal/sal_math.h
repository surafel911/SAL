#ifndef SAL_MATH_H
#define SAL_MATH_H

#include <math.h>

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

SALAPI __inline__ double
sal_acos(double x)
{
	return acos(x) * (180.0 / M_PI);
}

SALAPI __inline__ double
sal_asin(double x)
{
	return asin(x) * (180.0 / M_PI);
}
SALAPI __inline__ double
sal_atan(double x)
{
	return atan(x) * (180.0 / M_PI);
}

SALAPI __inline__ double
sal_atan2(double y, double x)
{
	return atan2(y / (180.0 / M_PI), x / (180.0 / M_PI)) * (180.0 / M_PI);
}

SALAPI __inline__ double
sal_cos(double x)
{
	return cos(x / (180.0 / M_PI));
}

SALAPI __inline__ double
sal_sin(double x)
{
	return sin(x / (180.0 / M_PI));
}

SALAPI __inline__ double
sal_tan(double x)
{
	return tan(x / (180.0 / M_PI));
}

SALAPI __inline__ float
sal_acosf(float x)
{
	return acosf(x / (180.0 / M_PI)) * (180.0f / M_PI);
}

SALAPI__inline__ float
sal_asinf(float x)
{
	return asinf(x / (180.0 / M_PI)) * (180.0f / M_PI);
}

SALAPI __inline__ float
sal_atanf(float x)
{
	return atanf(x / (180.0 / M_PI)) * (180.0f / M_PI);
}

SALAPI __inline__ float
sal_atan2f(float y, float x)
{
	return atan2f(y / (180.0 / M_PI), x / (180.0 / M_PI)) * (180.0f / M_PI);
}


SALAPI __inline__ float
sal_cosf(float x)
{
	return cosf(x / (180.0 / M_PI));
}

SALAPI __inline__ float
sal_sinf(float x)
{
	return sinf(x / (180.0 / M_PI));
}

SALAPI __inline__ float
sal_tanf(float x)
{
	return tanf(x / (180.0 / M_PI));
}

#ifdef SAL_MATH_DEGREE
#define acos(x) sal_acos(x)
#define asin(x) sal_asin(x)
#define atan(x) sal_atan(x)
#define atan2(y, x) sal_atan2(y ,x)
#define cos(x) sal_cos(x)
#define sin(x) sal_sin(x)
#define tan(x) sal_tan(x)
#define acosf(x) sal_acosf(x)
#define asinf(x) sal_asinf(x)
#define atanf(x) sal_atanf(x)
#define atan2f(y, x) sal_atan2f(y ,x)
#define cosf(x) sal_cosf(x)
#define sinf(x) sal_sinf(x)
#define tanf(x) sal_tanf(x)
#endif // SAL_MATH_DEGREE

#ifdef _cplusplus
}
#endif // _csplutplus

#endif // SAL_MATH_H
