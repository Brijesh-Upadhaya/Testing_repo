#ifndef __UTILS_H__
#define __UTILS_H__

#include <math.h>

#ifndef FSQR
#define FSQR(x) ((x)*(x))
#endif

#ifndef M_INV3
#define M_INV3 0.33333333333333333333333333
#endif

#ifndef M_INV6
#define M_INV6 0.16666666666666666666666666
#endif

/* e */
#ifndef M_E
#define M_E 2.71828182845904523536028747135
#endif

/* log_2(e) */
#ifndef M_LOG2E
#define M_LOG2E 1.44269504088896340735992468100
#endif

/* log_10(e) */
#ifndef M_LOG10E
#define M_LOG10E 0.43429448190325182765112891892
#endif

/* sqrt(2) */
#ifndef M_SQRT2
#define M_SQRT2 1.41421356237309504880168872421
#endif

/* sqrt(1/2) */
#ifndef M_SQRT1_2
#define M_SQRT1_2  0.70710678118654752440084436210
#endif

/* sqrt(3) */
#ifndef M_SQRT3
#define M_SQRT3    1.73205080756887729352744634151
#endif

#ifndef M_PI
#define M_PI       3.14159265358979323846264338328      /* pi */
#endif

#ifndef M_PI_2
#define M_PI_2     1.57079632679489661923132169164      /* pi/2 */
#endif

#ifndef M_PI_4
#define M_PI_4     0.78539816339744830961566084582     /* pi/4 */
#endif

#ifndef M_SQRTPI
#define M_SQRTPI   1.77245385090551602729816748334      /* sqrt(pi) */
#endif

#ifndef M_2_SQRTPI
#define M_2_SQRTPI 1.12837916709551257389615890312      /* 2/sqrt(pi) */
#endif

#ifndef M_1_PI
#define M_1_PI     0.31830988618379067153776752675      /* 1/pi */
#endif

#ifndef M_2_PI
#define M_2_PI     0.63661977236758134307553505349      /* 2/pi */
#endif

#ifndef M_LN10
#define M_LN10     2.30258509299404568401799145468      /* ln(10) */
#endif

#ifndef M_LN2
#define M_LN2      0.69314718055994530941723212146      /* ln(2) */
#endif

#ifndef M_LNPI
#define M_LNPI     1.14472988584940017414342735135      /* ln(pi) */
#endif

#endif /* __UTILS_H__ */
