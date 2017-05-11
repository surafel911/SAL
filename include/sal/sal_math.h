#ifndef SAL_MATH_H
#define SAL_MATH_H

#include <math.h>

__inline__ double
sal_acos(double x)
{
	return acos(x) * (180.0 / PI);
}

__inline__ double
sal_asin(double x)
{
	return asin(x) * (180.0 / PI);
}
__inline__ double
sal_atan(double x)
{
	return atan(x) * (180.0 / PI);
}

__inline__ double
sal_atan2(double y, double x)
{
	return atan2(y, x) * (180.0 / PI);
}

__inline__ double
sal_cos(double x)
{
	return cos(x) * (180.0 / PI);
}

__inline__ double
sal_sin(double x)
{
	return sin(x) * (180.0 / PI);
}

__inline__ double
sal_tan(double x)
{
	return tan(x) * (180.0 / PI);
}

__inline__ float
sal_acosf(float x)
{
	return acosf(x) * (180.0f / PI);
}

__inline__ float
sal_asinf(float x)
{
	return asinf(x) * (180.0f / PI);
}

__inline__ float
sal_atanf(float x)
{
	return atanf(x) * (180.0f / PI);
}

__inline__ float
sal_atan2f(float y, float x)
{
	return atan2f(y, x) * (180.0f / PI);
}


__inline__ float
sal_cosf(float x)
{
	return cosf(x) * (180.0f / PI);
}

__inline__ float
sal_sinf(float x)
{
	return sinf(x) * (180.0f / PI);
}

__inline__ float
sal_tanf(float x)
{
	return tanf(x) * (180.0f / PI);
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

#endif // SAL_MATH_H