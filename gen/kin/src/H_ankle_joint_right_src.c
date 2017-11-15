/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_right_src.h"

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
  double t363;
  double t470;
  double t241;
  double t384;
  double t521;
  double t566;
  double t400;
  double t559;
  double t561;
  double t221;
  double t567;
  double t720;
  double t746;
  double t835;
  double t565;
  double t788;
  double t813;
  double t217;
  double t931;
  double t941;
  double t1120;
  double t1160;
  double t1163;
  double t1189;
  double t1199;
  double t1200;
  double t1229;
  double t1331;
  double t814;
  double t1292;
  double t1307;
  double t197;
  double t1338;
  double t1346;
  double t1381;
  double t1697;
  double t1327;
  double t1431;
  double t1481;
  double t168;
  double t1710;
  double t1730;
  double t1732;
  double t84;
  double t1843;
  double t1859;
  double t1881;
  double t1889;
  double t1907;
  double t1926;
  double t1888;
  double t1927;
  double t1928;
  double t1940;
  double t1953;
  double t1961;
  double t1993;
  double t1996;
  double t2001;
  double t1929;
  double t2006;
  double t2018;
  double t2026;
  double t2034;
  double t2044;
  double t1799;
  double t2022;
  double t2088;
  double t2121;
  double t2140;
  double t2162;
  double t2165;
  double t2358;
  double t2385;
  double t2398;
  double t2440;
  double t2452;
  double t2464;
  double t2468;
  double t2484;
  double t2494;
  double t2424;
  double t2499;
  double t2517;
  double t2524;
  double t2550;
  double t2565;
  double t2521;
  double t2600;
  double t2603;
  double t2638;
  double t2640;
  double t2645;
  double t1554;
  double t1734;
  double t1740;
  double t1801;
  double t1804;
  double t1805;
  double t2127;
  double t2167;
  double t2196;
  double t2217;
  double t2266;
  double t2268;
  double t2617;
  double t2661;
  double t2673;
  double t2832;
  double t2857;
  double t2858;
  double t3458;
  double t3524;
  double t3977;
  double t4000;
  double t4263;
  double t4268;
  double t4319;
  double t4320;
  double t4415;
  double t4417;
  double t2868;
  double t2882;
  double t2981;
  double t3534;
  double t3585;
  double t3586;
  double t3673;
  double t3703;
  double t3808;
  double t3814;
  double t3856;
  double t3872;
  double t3903;
  double t3925;
  double t3943;
  double t4070;
  double t4075;
  double t4081;
  double t4232;
  double t4259;
  double t4260;
  double t4272;
  double t4277;
  double t4280;
  double t4294;
  double t4311;
  double t4313;
  double t4326;
  double t4345;
  double t4346;
  double t4361;
  double t4386;
  double t4399;
  double t4424;
  double t4432;
  double t4441;
  double t4658;
  double t4659;
  double t4670;
  double t2982;
  double t3017;
  double t3063;
  double t3085;
  double t3103;
  double t3107;
  t363 = Cos(var1[5]);
  t470 = Sin(var1[3]);
  t241 = Cos(var1[3]);
  t384 = Sin(var1[4]);
  t521 = Sin(var1[5]);
  t566 = Sin(var1[13]);
  t400 = t241*t363*t384;
  t559 = t470*t521;
  t561 = t400 + t559;
  t221 = Cos(var1[13]);
  t567 = -1.*t363*t470;
  t720 = t241*t384*t521;
  t746 = t567 + t720;
  t835 = Cos(var1[15]);
  t565 = t221*t561;
  t788 = -1.*t566*t746;
  t813 = t565 + t788;
  t217 = Sin(var1[15]);
  t931 = Cos(var1[14]);
  t941 = Cos(var1[4]);
  t1120 = t931*t241*t941;
  t1160 = Sin(var1[14]);
  t1163 = t566*t561;
  t1189 = t221*t746;
  t1199 = t1163 + t1189;
  t1200 = t1160*t1199;
  t1229 = t1120 + t1200;
  t1331 = Cos(var1[16]);
  t814 = t217*t813;
  t1292 = t835*t1229;
  t1307 = t814 + t1292;
  t197 = Sin(var1[16]);
  t1338 = t835*t813;
  t1346 = -1.*t217*t1229;
  t1381 = t1338 + t1346;
  t1697 = Cos(var1[17]);
  t1327 = -1.*t197*t1307;
  t1431 = t1331*t1381;
  t1481 = t1327 + t1431;
  t168 = Sin(var1[17]);
  t1710 = t1331*t1307;
  t1730 = t197*t1381;
  t1732 = t1710 + t1730;
  t84 = Sin(var1[18]);
  t1843 = t363*t470*t384;
  t1859 = -1.*t241*t521;
  t1881 = t1843 + t1859;
  t1889 = t241*t363;
  t1907 = t470*t384*t521;
  t1926 = t1889 + t1907;
  t1888 = t221*t1881;
  t1927 = -1.*t566*t1926;
  t1928 = t1888 + t1927;
  t1940 = t931*t941*t470;
  t1953 = t566*t1881;
  t1961 = t221*t1926;
  t1993 = t1953 + t1961;
  t1996 = t1160*t1993;
  t2001 = t1940 + t1996;
  t1929 = t217*t1928;
  t2006 = t835*t2001;
  t2018 = t1929 + t2006;
  t2026 = t835*t1928;
  t2034 = -1.*t217*t2001;
  t2044 = t2026 + t2034;
  t1799 = Cos(var1[18]);
  t2022 = -1.*t197*t2018;
  t2088 = t1331*t2044;
  t2121 = t2022 + t2088;
  t2140 = t1331*t2018;
  t2162 = t197*t2044;
  t2165 = t2140 + t2162;
  t2358 = t221*t941*t363;
  t2385 = -1.*t941*t566*t521;
  t2398 = t2358 + t2385;
  t2440 = -1.*t931*t384;
  t2452 = t941*t363*t566;
  t2464 = t221*t941*t521;
  t2468 = t2452 + t2464;
  t2484 = t1160*t2468;
  t2494 = t2440 + t2484;
  t2424 = t217*t2398;
  t2499 = t835*t2494;
  t2517 = t2424 + t2499;
  t2524 = t835*t2398;
  t2550 = -1.*t217*t2494;
  t2565 = t2524 + t2550;
  t2521 = -1.*t197*t2517;
  t2600 = t1331*t2565;
  t2603 = t2521 + t2600;
  t2638 = t1331*t2517;
  t2640 = t197*t2565;
  t2645 = t2638 + t2640;
  t1554 = t168*t1481;
  t1734 = t1697*t1732;
  t1740 = t1554 + t1734;
  t1801 = t1697*t1481;
  t1804 = -1.*t168*t1732;
  t1805 = t1801 + t1804;
  t2127 = t168*t2121;
  t2167 = t1697*t2165;
  t2196 = t2127 + t2167;
  t2217 = t1697*t2121;
  t2266 = -1.*t168*t2165;
  t2268 = t2217 + t2266;
  t2617 = t168*t2603;
  t2661 = t1697*t2645;
  t2673 = t2617 + t2661;
  t2832 = t1697*t2603;
  t2857 = -1.*t168*t2645;
  t2858 = t2832 + t2857;
  t3458 = -1.*t931;
  t3524 = 1. + t3458;
  t3977 = -1.*t835;
  t4000 = 1. + t3977;
  t4263 = -1.*t1331;
  t4268 = 1. + t4263;
  t4319 = -1.*t1697;
  t4320 = 1. + t4319;
  t4415 = -1.*t1799;
  t4417 = 1. + t4415;
  t2868 = t1799*t1740;
  t2882 = t84*t1805;
  t2981 = t2868 + t2882;
  t3534 = -0.049*t3524;
  t3585 = -0.135*t1160;
  t3586 = 0. + t3534 + t3585;
  t3673 = 0.135*t566;
  t3703 = 0. + t3673;
  t3808 = -1.*t221;
  t3814 = 1. + t3808;
  t3856 = -0.135*t3814;
  t3872 = 0. + t3856;
  t3903 = -0.135*t3524;
  t3925 = 0.049*t1160;
  t3943 = 0. + t3903 + t3925;
  t4070 = -0.09*t4000;
  t4075 = 0.049*t217;
  t4081 = 0. + t4070 + t4075;
  t4232 = -0.049*t4000;
  t4259 = -0.09*t217;
  t4260 = 0. + t4232 + t4259;
  t4272 = -0.049*t4268;
  t4277 = -0.21*t197;
  t4280 = 0. + t4272 + t4277;
  t4294 = -0.21*t4268;
  t4311 = 0.049*t197;
  t4313 = 0. + t4294 + t4311;
  t4326 = -0.2707*t4320;
  t4345 = 0.0016*t168;
  t4346 = 0. + t4326 + t4345;
  t4361 = -0.0016*t4320;
  t4386 = -0.2707*t168;
  t4399 = 0. + t4361 + t4386;
  t4424 = 0.0184*t4417;
  t4432 = -0.7055*t84;
  t4441 = 0. + t4424 + t4432;
  t4658 = -0.7055*t4417;
  t4659 = -0.0184*t84;
  t4670 = 0. + t4658 + t4659;
  t2982 = t1799*t2196;
  t3017 = t84*t2268;
  t3063 = t2982 + t3017;
  t3085 = t1799*t2673;
  t3103 = t84*t2858;
  t3107 = t3085 + t3103;
  p_output1[0]=-1.*t1799*t1805 + t1740*t84;
  p_output1[1]=-1.*t1799*t2268 + t2196*t84;
  p_output1[2]=-1.*t1799*t2858 + t2673*t84;
  p_output1[3]=0.;
  p_output1[4]=t2981;
  p_output1[5]=t3063;
  p_output1[6]=t3107;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1199*t931 + t1160*t241*t941;
  p_output1[9]=-1.*t1993*t931 + t1160*t470*t941;
  p_output1[10]=-1.*t1160*t384 - 1.*t2468*t931;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t2981 + t1199*t3943 + t1229*t4260 + t1307*t4280 + t1381*t4313 + t1481*t4346 + t1732*t4399 + t1740*t4441 + t1805*t4670 + t3703*t561 + t3872*t746 + t4081*t813 - 0.7055*(t1799*t1805 - 1.*t1740*t84) + t241*t3586*t941 - 0.1305*(t1199*t931 - 1.*t1160*t241*t941) + var1[0];
  p_output1[13]=0. + 0.0184*t3063 + t1881*t3703 + t1926*t3872 + t1993*t3943 + t1928*t4081 + t2001*t4260 + t2018*t4280 + t2044*t4313 + t2121*t4346 + t2165*t4399 + t2196*t4441 + t2268*t4670 - 0.7055*(t1799*t2268 - 1.*t2196*t84) + t3586*t470*t941 - 0.1305*(t1993*t931 - 1.*t1160*t470*t941) + var1[1];
  p_output1[14]=0. + 0.0184*t3107 - 1.*t3586*t384 + t2468*t3943 + t2398*t4081 + t2494*t4260 + t2517*t4280 + t2565*t4313 + t2603*t4346 + t2645*t4399 + t2673*t4441 + t2858*t4670 - 0.7055*(t1799*t2858 - 1.*t2673*t84) - 0.1305*(t1160*t384 + t2468*t931) + t363*t3703*t941 + t3872*t521*t941 + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
