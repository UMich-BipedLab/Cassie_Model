/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t29;
  double t198;
  double t254;
  double t219;
  double t280;
  double t73;
  double t79;
  double t146;
  double t192;
  double t384;
  double t243;
  double t329;
  double t331;
  double t432;
  double t486;
  double t511;
  double t373;
  double t556;
  double t568;
  double t1334;
  double t1275;
  double t1287;
  double t1299;
  double t1260;
  double t1351;
  double t1421;
  double t1443;
  double t1521;
  double t1314;
  double t1450;
  double t1483;
  double t1237;
  double t1525;
  double t1526;
  double t1546;
  double t1588;
  double t1517;
  double t1550;
  double t1558;
  double t1178;
  double t1602;
  double t1614;
  double t1631;
  double t1727;
  double t1582;
  double t1651;
  double t1696;
  double t1177;
  double t1728;
  double t1753;
  double t1804;
  double t1840;
  double t1723;
  double t1815;
  double t1816;
  double t1152;
  double t1857;
  double t1866;
  double t1873;
  double t754;
  double t773;
  double t816;
  double t843;
  double t856;
  double t888;
  double t834;
  double t906;
  double t942;
  double t2070;
  double t2101;
  double t2105;
  double t2116;
  double t2119;
  double t2150;
  double t2113;
  double t2154;
  double t2169;
  double t2190;
  double t2211;
  double t2213;
  double t2186;
  double t2226;
  double t2244;
  double t2352;
  double t2353;
  double t2354;
  double t2319;
  double t2355;
  double t2357;
  double t2387;
  double t2411;
  double t2424;
  double t2376;
  double t2426;
  double t2441;
  double t2461;
  double t2471;
  double t2491;
  double t1048;
  double t1052;
  double t1056;
  double t2617;
  double t2636;
  double t2647;
  double t2671;
  double t2675;
  double t2720;
  double t2651;
  double t2735;
  double t2760;
  double t2782;
  double t2792;
  double t2793;
  double t2779;
  double t2806;
  double t2808;
  double t2850;
  double t2855;
  double t2872;
  double t2842;
  double t2876;
  double t2896;
  double t2914;
  double t2925;
  double t2952;
  double t2902;
  double t2953;
  double t2976;
  double t2998;
  double t3008;
  double t3030;
  double t1823;
  double t1874;
  double t1910;
  double t2030;
  double t2033;
  double t2047;
  double t2442;
  double t2513;
  double t2533;
  double t2553;
  double t2555;
  double t2566;
  double t2995;
  double t3048;
  double t3054;
  double t3077;
  double t3124;
  double t3151;
  double t3260;
  double t3264;
  double t3408;
  double t3413;
  double t3537;
  double t3547;
  double t3648;
  double t3652;
  double t3686;
  double t3691;
  double t3762;
  double t3770;
  double t3267;
  double t3270;
  double t3274;
  double t3300;
  double t3312;
  double t3341;
  double t3343;
  double t3344;
  double t3358;
  double t3377;
  double t3378;
  double t3395;
  double t3418;
  double t3420;
  double t3435;
  double t3498;
  double t3501;
  double t3504;
  double t3549;
  double t3560;
  double t3576;
  double t3584;
  double t3593;
  double t3595;
  double t3662;
  double t3663;
  double t3666;
  double t3672;
  double t3676;
  double t3678;
  double t3700;
  double t3703;
  double t3711;
  double t3723;
  double t3737;
  double t3739;
  double t3777;
  double t3791;
  double t3801;
  double t3814;
  double t3825;
  double t3826;
  t29 = Cos(var1[3]);
  t198 = Cos(var1[5]);
  t254 = Sin(var1[3]);
  t219 = Sin(var1[4]);
  t280 = Sin(var1[5]);
  t73 = Cos(var1[4]);
  t79 = Sin(var1[14]);
  t146 = Cos(var1[14]);
  t192 = Sin(var1[13]);
  t384 = Cos(var1[13]);
  t243 = t29*t198*t219;
  t329 = t254*t280;
  t331 = t243 + t329;
  t432 = -1.*t198*t254;
  t486 = t29*t219*t280;
  t511 = t432 + t486;
  t373 = t192*t331;
  t556 = t384*t511;
  t568 = t373 + t556;
  t1334 = Cos(var1[15]);
  t1275 = t384*t331;
  t1287 = -1.*t192*t511;
  t1299 = t1275 + t1287;
  t1260 = Sin(var1[15]);
  t1351 = t146*t29*t73;
  t1421 = t79*t568;
  t1443 = t1351 + t1421;
  t1521 = Cos(var1[16]);
  t1314 = t1260*t1299;
  t1450 = t1334*t1443;
  t1483 = t1314 + t1450;
  t1237 = Sin(var1[16]);
  t1525 = t1334*t1299;
  t1526 = -1.*t1260*t1443;
  t1546 = t1525 + t1526;
  t1588 = Cos(var1[17]);
  t1517 = -1.*t1237*t1483;
  t1550 = t1521*t1546;
  t1558 = t1517 + t1550;
  t1178 = Sin(var1[17]);
  t1602 = t1521*t1483;
  t1614 = t1237*t1546;
  t1631 = t1602 + t1614;
  t1727 = Cos(var1[18]);
  t1582 = t1178*t1558;
  t1651 = t1588*t1631;
  t1696 = t1582 + t1651;
  t1177 = Sin(var1[18]);
  t1728 = t1588*t1558;
  t1753 = -1.*t1178*t1631;
  t1804 = t1728 + t1753;
  t1840 = Cos(var1[19]);
  t1723 = -1.*t1177*t1696;
  t1815 = t1727*t1804;
  t1816 = t1723 + t1815;
  t1152 = Sin(var1[19]);
  t1857 = t1727*t1696;
  t1866 = t1177*t1804;
  t1873 = t1857 + t1866;
  t754 = t198*t254*t219;
  t773 = -1.*t29*t280;
  t816 = t754 + t773;
  t843 = t29*t198;
  t856 = t254*t219*t280;
  t888 = t843 + t856;
  t834 = t192*t816;
  t906 = t384*t888;
  t942 = t834 + t906;
  t2070 = t384*t816;
  t2101 = -1.*t192*t888;
  t2105 = t2070 + t2101;
  t2116 = t146*t73*t254;
  t2119 = t79*t942;
  t2150 = t2116 + t2119;
  t2113 = t1260*t2105;
  t2154 = t1334*t2150;
  t2169 = t2113 + t2154;
  t2190 = t1334*t2105;
  t2211 = -1.*t1260*t2150;
  t2213 = t2190 + t2211;
  t2186 = -1.*t1237*t2169;
  t2226 = t1521*t2213;
  t2244 = t2186 + t2226;
  t2352 = t1521*t2169;
  t2353 = t1237*t2213;
  t2354 = t2352 + t2353;
  t2319 = t1178*t2244;
  t2355 = t1588*t2354;
  t2357 = t2319 + t2355;
  t2387 = t1588*t2244;
  t2411 = -1.*t1178*t2354;
  t2424 = t2387 + t2411;
  t2376 = -1.*t1177*t2357;
  t2426 = t1727*t2424;
  t2441 = t2376 + t2426;
  t2461 = t1727*t2357;
  t2471 = t1177*t2424;
  t2491 = t2461 + t2471;
  t1048 = t73*t198*t192;
  t1052 = t384*t73*t280;
  t1056 = t1048 + t1052;
  t2617 = t384*t73*t198;
  t2636 = -1.*t73*t192*t280;
  t2647 = t2617 + t2636;
  t2671 = -1.*t146*t219;
  t2675 = t79*t1056;
  t2720 = t2671 + t2675;
  t2651 = t1260*t2647;
  t2735 = t1334*t2720;
  t2760 = t2651 + t2735;
  t2782 = t1334*t2647;
  t2792 = -1.*t1260*t2720;
  t2793 = t2782 + t2792;
  t2779 = -1.*t1237*t2760;
  t2806 = t1521*t2793;
  t2808 = t2779 + t2806;
  t2850 = t1521*t2760;
  t2855 = t1237*t2793;
  t2872 = t2850 + t2855;
  t2842 = t1178*t2808;
  t2876 = t1588*t2872;
  t2896 = t2842 + t2876;
  t2914 = t1588*t2808;
  t2925 = -1.*t1178*t2872;
  t2952 = t2914 + t2925;
  t2902 = -1.*t1177*t2896;
  t2953 = t1727*t2952;
  t2976 = t2902 + t2953;
  t2998 = t1727*t2896;
  t3008 = t1177*t2952;
  t3030 = t2998 + t3008;
  t1823 = t1152*t1816;
  t1874 = t1840*t1873;
  t1910 = t1823 + t1874;
  t2030 = t1840*t1816;
  t2033 = -1.*t1152*t1873;
  t2047 = t2030 + t2033;
  t2442 = t1152*t2441;
  t2513 = t1840*t2491;
  t2533 = t2442 + t2513;
  t2553 = t1840*t2441;
  t2555 = -1.*t1152*t2491;
  t2566 = t2553 + t2555;
  t2995 = t1152*t2976;
  t3048 = t1840*t3030;
  t3054 = t2995 + t3048;
  t3077 = t1840*t2976;
  t3124 = -1.*t1152*t3030;
  t3151 = t3077 + t3124;
  t3260 = -1.*t146;
  t3264 = 1. + t3260;
  t3408 = -1.*t1334;
  t3413 = 1. + t3408;
  t3537 = -1.*t1521;
  t3547 = 1. + t3537;
  t3648 = -1.*t1588;
  t3652 = 1. + t3648;
  t3686 = -1.*t1727;
  t3691 = 1. + t3686;
  t3762 = -1.*t1840;
  t3770 = 1. + t3762;
  t3267 = -0.049*t3264;
  t3270 = -0.135*t79;
  t3274 = 0. + t3267 + t3270;
  t3300 = 0.135*t192;
  t3312 = 0. + t3300;
  t3341 = -1.*t384;
  t3343 = 1. + t3341;
  t3344 = -0.135*t3343;
  t3358 = 0. + t3344;
  t3377 = -0.135*t3264;
  t3378 = 0.049*t79;
  t3395 = 0. + t3377 + t3378;
  t3418 = -0.09*t3413;
  t3420 = 0.049*t1260;
  t3435 = 0. + t3418 + t3420;
  t3498 = -0.049*t3413;
  t3501 = -0.09*t1260;
  t3504 = 0. + t3498 + t3501;
  t3549 = -0.049*t3547;
  t3560 = -0.21*t1237;
  t3576 = 0. + t3549 + t3560;
  t3584 = -0.21*t3547;
  t3593 = 0.049*t1237;
  t3595 = 0. + t3584 + t3593;
  t3662 = -0.2707*t3652;
  t3663 = 0.0016*t1178;
  t3666 = 0. + t3662 + t3663;
  t3672 = -0.0016*t3652;
  t3676 = -0.2707*t1178;
  t3678 = 0. + t3672 + t3676;
  t3700 = 0.0184*t3691;
  t3703 = -0.7055*t1177;
  t3711 = 0. + t3700 + t3703;
  t3723 = -0.7055*t3691;
  t3737 = -0.0184*t1177;
  t3739 = 0. + t3723 + t3737;
  t3777 = -1.1135*t3770;
  t3791 = 0.0216*t1152;
  t3801 = 0. + t3777 + t3791;
  t3814 = -0.0216*t3770;
  t3825 = -1.1135*t1152;
  t3826 = 0. + t3814 + t3825;
  p_output1[0]=-1.*t146*t568 + t29*t73*t79;
  p_output1[1]=t254*t73*t79 - 1.*t146*t942;
  p_output1[2]=-1.*t1056*t146 - 1.*t219*t79;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1910 + 0.766044*t2047;
  p_output1[5]=0.642788*t2533 + 0.766044*t2566;
  p_output1[6]=0.642788*t3054 + 0.766044*t3151;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1910 + 0.642788*t2047;
  p_output1[9]=-0.766044*t2533 + 0.642788*t2566;
  p_output1[10]=-0.766044*t3054 + 0.642788*t3151;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1910 - 1.1312*t2047 + t331*t3312 + t1299*t3435 + t1443*t3504 + t1483*t3576 + t1546*t3595 + t1558*t3666 + t1631*t3678 + t1696*t3711 + t1804*t3739 + t1816*t3801 + t1873*t3826 + t3358*t511 + t3395*t568 + t29*t3274*t73 - 0.1305*(t146*t568 - 1.*t29*t73*t79) + var1[0];
  p_output1[13]=0. + 0.0306*t2533 - 1.1312*t2566 + t2105*t3435 + t2150*t3504 + t2169*t3576 + t2213*t3595 + t2244*t3666 + t2354*t3678 + t2357*t3711 + t2424*t3739 + t2441*t3801 + t2491*t3826 + t254*t3274*t73 + t3312*t816 + t3358*t888 + t3395*t942 - 0.1305*(-1.*t254*t73*t79 + t146*t942) + var1[1];
  p_output1[14]=0. + 0.0306*t3054 - 1.1312*t3151 - 1.*t219*t3274 + t1056*t3395 + t2647*t3435 + t2720*t3504 + t2760*t3576 + t2793*t3595 + t2808*t3666 + t2872*t3678 + t2896*t3711 + t2952*t3739 + t2976*t3801 + t3030*t3826 + t198*t3312*t73 + t280*t3358*t73 - 0.1305*(t1056*t146 + t219*t79) + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
