/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom_src.h"

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
  double t355;
  double t140;
  double t410;
  double t294;
  double t446;
  double t31;
  double t96;
  double t562;
  double t582;
  double t590;
  double t298;
  double t460;
  double t483;
  double t494;
  double t514;
  double t536;
  double t560;
  double t567;
  double t568;
  double t993;
  double t1112;
  double t1139;
  double t1155;
  double t1014;
  double t1066;
  double t1075;
  double t1196;
  double t1350;
  double t1081;
  double t1295;
  double t1310;
  double t982;
  double t1355;
  double t1370;
  double t1381;
  double t1406;
  double t1334;
  double t1386;
  double t1394;
  double t968;
  double t1416;
  double t1427;
  double t1434;
  double t1586;
  double t1395;
  double t1454;
  double t1494;
  double t963;
  double t1627;
  double t1630;
  double t1644;
  double t1695;
  double t1575;
  double t1646;
  double t1667;
  double t925;
  double t1706;
  double t1711;
  double t1717;
  double t602;
  double t611;
  double t615;
  double t616;
  double t619;
  double t620;
  double t629;
  double t646;
  double t648;
  double t1992;
  double t2190;
  double t2196;
  double t1891;
  double t1924;
  double t1945;
  double t1979;
  double t2198;
  double t2235;
  double t2266;
  double t2295;
  double t2343;
  double t2265;
  double t2371;
  double t2408;
  double t2449;
  double t2460;
  double t2475;
  double t2430;
  double t2483;
  double t2491;
  double t2520;
  double t2562;
  double t2590;
  double t2515;
  double t2596;
  double t2610;
  double t2628;
  double t2630;
  double t2638;
  double t699;
  double t734;
  double t799;
  double t2854;
  double t2858;
  double t2865;
  double t2774;
  double t2793;
  double t2839;
  double t2840;
  double t2882;
  double t2907;
  double t2957;
  double t2970;
  double t2974;
  double t2956;
  double t2997;
  double t3018;
  double t3048;
  double t3072;
  double t3078;
  double t3035;
  double t3105;
  double t3111;
  double t3121;
  double t3124;
  double t3147;
  double t3117;
  double t3150;
  double t3184;
  double t3277;
  double t3285;
  double t3286;
  double t1680;
  double t1724;
  double t1749;
  double t1766;
  double t1815;
  double t1844;
  double t2624;
  double t2642;
  double t2664;
  double t2690;
  double t2702;
  double t2710;
  double t3215;
  double t3293;
  double t3331;
  double t3371;
  double t3373;
  double t3382;
  double t3771;
  double t3772;
  double t3910;
  double t3921;
  double t4032;
  double t4048;
  double t4222;
  double t4251;
  double t4356;
  double t4362;
  double t4462;
  double t4464;
  double t3612;
  double t3618;
  double t3634;
  double t3692;
  double t3716;
  double t3741;
  double t3777;
  double t3780;
  double t3783;
  double t3809;
  double t3824;
  double t3845;
  double t3948;
  double t3953;
  double t3959;
  double t3979;
  double t3997;
  double t4009;
  double t4088;
  double t4117;
  double t4121;
  double t4133;
  double t4138;
  double t4188;
  double t4254;
  double t4256;
  double t4263;
  double t4290;
  double t4291;
  double t4296;
  double t4363;
  double t4371;
  double t4379;
  double t4405;
  double t4409;
  double t4425;
  double t4476;
  double t4477;
  double t4482;
  double t4549;
  double t4556;
  double t4583;
  t355 = Cos(var1[3]);
  t140 = Cos(var1[5]);
  t410 = Sin(var1[4]);
  t294 = Sin(var1[3]);
  t446 = Sin(var1[5]);
  t31 = Cos(var1[7]);
  t96 = Cos(var1[6]);
  t562 = Sin(var1[6]);
  t582 = Cos(var1[4]);
  t590 = Sin(var1[7]);
  t298 = -1.*t140*t294;
  t460 = t355*t410*t446;
  t483 = t298 + t460;
  t494 = t96*t483;
  t514 = t355*t140*t410;
  t536 = t294*t446;
  t560 = t514 + t536;
  t567 = t560*t562;
  t568 = t494 + t567;
  t993 = Cos(var1[8]);
  t1112 = t96*t560;
  t1139 = -1.*t483*t562;
  t1155 = t1112 + t1139;
  t1014 = t355*t582*t31;
  t1066 = t568*t590;
  t1075 = t1014 + t1066;
  t1196 = Sin(var1[8]);
  t1350 = Cos(var1[9]);
  t1081 = t993*t1075;
  t1295 = t1155*t1196;
  t1310 = t1081 + t1295;
  t982 = Sin(var1[9]);
  t1355 = t993*t1155;
  t1370 = -1.*t1075*t1196;
  t1381 = t1355 + t1370;
  t1406 = Cos(var1[10]);
  t1334 = -1.*t982*t1310;
  t1386 = t1350*t1381;
  t1394 = t1334 + t1386;
  t968 = Sin(var1[10]);
  t1416 = t1350*t1310;
  t1427 = t982*t1381;
  t1434 = t1416 + t1427;
  t1586 = Cos(var1[11]);
  t1395 = t968*t1394;
  t1454 = t1406*t1434;
  t1494 = t1395 + t1454;
  t963 = Sin(var1[11]);
  t1627 = t1406*t1394;
  t1630 = -1.*t968*t1434;
  t1644 = t1627 + t1630;
  t1695 = Cos(var1[12]);
  t1575 = -1.*t963*t1494;
  t1646 = t1586*t1644;
  t1667 = t1575 + t1646;
  t925 = Sin(var1[12]);
  t1706 = t1586*t1494;
  t1711 = t963*t1644;
  t1717 = t1706 + t1711;
  t602 = t355*t140;
  t611 = t294*t410*t446;
  t615 = t602 + t611;
  t616 = t96*t615;
  t619 = t140*t294*t410;
  t620 = -1.*t355*t446;
  t629 = t619 + t620;
  t646 = t629*t562;
  t648 = t616 + t646;
  t1992 = t96*t629;
  t2190 = -1.*t615*t562;
  t2196 = t1992 + t2190;
  t1891 = t582*t31*t294;
  t1924 = t648*t590;
  t1945 = t1891 + t1924;
  t1979 = t993*t1945;
  t2198 = t2196*t1196;
  t2235 = t1979 + t2198;
  t2266 = t993*t2196;
  t2295 = -1.*t1945*t1196;
  t2343 = t2266 + t2295;
  t2265 = -1.*t982*t2235;
  t2371 = t1350*t2343;
  t2408 = t2265 + t2371;
  t2449 = t1350*t2235;
  t2460 = t982*t2343;
  t2475 = t2449 + t2460;
  t2430 = t968*t2408;
  t2483 = t1406*t2475;
  t2491 = t2430 + t2483;
  t2520 = t1406*t2408;
  t2562 = -1.*t968*t2475;
  t2590 = t2520 + t2562;
  t2515 = -1.*t963*t2491;
  t2596 = t1586*t2590;
  t2610 = t2515 + t2596;
  t2628 = t1586*t2491;
  t2630 = t963*t2590;
  t2638 = t2628 + t2630;
  t699 = t582*t96*t446;
  t734 = t582*t140*t562;
  t799 = t699 + t734;
  t2854 = t582*t140*t96;
  t2858 = -1.*t582*t446*t562;
  t2865 = t2854 + t2858;
  t2774 = -1.*t31*t410;
  t2793 = t799*t590;
  t2839 = t2774 + t2793;
  t2840 = t993*t2839;
  t2882 = t2865*t1196;
  t2907 = t2840 + t2882;
  t2957 = t993*t2865;
  t2970 = -1.*t2839*t1196;
  t2974 = t2957 + t2970;
  t2956 = -1.*t982*t2907;
  t2997 = t1350*t2974;
  t3018 = t2956 + t2997;
  t3048 = t1350*t2907;
  t3072 = t982*t2974;
  t3078 = t3048 + t3072;
  t3035 = t968*t3018;
  t3105 = t1406*t3078;
  t3111 = t3035 + t3105;
  t3121 = t1406*t3018;
  t3124 = -1.*t968*t3078;
  t3147 = t3121 + t3124;
  t3117 = -1.*t963*t3111;
  t3150 = t1586*t3147;
  t3184 = t3117 + t3150;
  t3277 = t1586*t3111;
  t3285 = t963*t3147;
  t3286 = t3277 + t3285;
  t1680 = t925*t1667;
  t1724 = t1695*t1717;
  t1749 = t1680 + t1724;
  t1766 = t1695*t1667;
  t1815 = -1.*t925*t1717;
  t1844 = t1766 + t1815;
  t2624 = t925*t2610;
  t2642 = t1695*t2638;
  t2664 = t2624 + t2642;
  t2690 = t1695*t2610;
  t2702 = -1.*t925*t2638;
  t2710 = t2690 + t2702;
  t3215 = t925*t3184;
  t3293 = t1695*t3286;
  t3331 = t3215 + t3293;
  t3371 = t1695*t3184;
  t3373 = -1.*t925*t3286;
  t3382 = t3371 + t3373;
  t3771 = -1.*t31;
  t3772 = 1. + t3771;
  t3910 = -1.*t993;
  t3921 = 1. + t3910;
  t4032 = -1.*t1350;
  t4048 = 1. + t4032;
  t4222 = -1.*t1406;
  t4251 = 1. + t4222;
  t4356 = -1.*t1586;
  t4362 = 1. + t4356;
  t4462 = -1.*t1695;
  t4464 = 1. + t4462;
  t3612 = -1.*t96;
  t3618 = 1. + t3612;
  t3634 = 0.135*t3618;
  t3692 = 0. + t3634;
  t3716 = -0.135*t562;
  t3741 = 0. + t3716;
  t3777 = 0.135*t3772;
  t3780 = 0.049*t590;
  t3783 = 0. + t3777 + t3780;
  t3809 = -0.049*t3772;
  t3824 = 0.135*t590;
  t3845 = 0. + t3809 + t3824;
  t3948 = -0.049*t3921;
  t3953 = -0.09*t1196;
  t3959 = 0. + t3948 + t3953;
  t3979 = -0.09*t3921;
  t3997 = 0.049*t1196;
  t4009 = 0. + t3979 + t3997;
  t4088 = -0.049*t4048;
  t4117 = -0.21*t982;
  t4121 = 0. + t4088 + t4117;
  t4133 = -0.21*t4048;
  t4138 = 0.049*t982;
  t4188 = 0. + t4133 + t4138;
  t4254 = -0.2707*t4251;
  t4256 = 0.0016*t968;
  t4263 = 0. + t4254 + t4256;
  t4290 = -0.0016*t4251;
  t4291 = -0.2707*t968;
  t4296 = 0. + t4290 + t4291;
  t4363 = 0.0184*t4362;
  t4371 = -0.7055*t963;
  t4379 = 0. + t4363 + t4371;
  t4405 = -0.7055*t4362;
  t4409 = -0.0184*t963;
  t4425 = 0. + t4405 + t4409;
  t4476 = -1.1135*t4464;
  t4477 = 0.0216*t925;
  t4482 = 0. + t4476 + t4477;
  t4549 = -0.0216*t4464;
  t4556 = -1.1135*t925;
  t4583 = 0. + t4549 + t4556;
  p_output1[0]=-1.*t31*t568 + t355*t582*t590;
  p_output1[1]=t294*t582*t590 - 1.*t31*t648;
  p_output1[2]=-1.*t410*t590 - 1.*t31*t799;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1749 + 0.766044*t1844;
  p_output1[5]=0.642788*t2664 + 0.766044*t2710;
  p_output1[6]=0.642788*t3331 + 0.766044*t3382;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1749 + 0.642788*t1844;
  p_output1[9]=-0.766044*t2664 + 0.642788*t2710;
  p_output1[10]=-0.766044*t3331 + 0.642788*t3382;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1749 - 1.1312*t1844 + t1075*t3959 + t1155*t4009 + t1310*t4121 + t1381*t4188 + t1394*t4263 + t1434*t4296 + t1494*t4379 + t1644*t4425 + t1667*t4482 + t1717*t4583 + t3692*t483 + t3741*t560 + t3783*t568 + t355*t3845*t582 + 0.1305*(t31*t568 - 1.*t355*t582*t590) + var1[0];
  p_output1[13]=0. + 0.0306*t2664 - 1.1312*t2710 + t1945*t3959 + t2196*t4009 + t2235*t4121 + t2343*t4188 + t2408*t4263 + t2475*t4296 + t2491*t4379 + t2590*t4425 + t2610*t4482 + t2638*t4583 + t294*t3845*t582 + t3692*t615 + t3741*t629 + t3783*t648 + 0.1305*(-1.*t294*t582*t590 + t31*t648) + var1[1];
  p_output1[14]=0. + 0.0306*t3331 - 1.1312*t3382 + t2839*t3959 + t2865*t4009 - 1.*t3845*t410 + t2907*t4121 + t2974*t4188 + t3018*t4263 + t3078*t4296 + t3111*t4379 + t3147*t4425 + t3184*t4482 + t3286*t4583 + t140*t3741*t582 + t3692*t446*t582 + t3783*t799 + 0.1305*(t410*t590 + t31*t799) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
