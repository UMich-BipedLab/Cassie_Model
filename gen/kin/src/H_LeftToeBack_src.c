/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBack_src.h"

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
  double t306;
  double t234;
  double t351;
  double t249;
  double t356;
  double t168;
  double t195;
  double t645;
  double t696;
  double t709;
  double t265;
  double t459;
  double t463;
  double t542;
  double t601;
  double t605;
  double t610;
  double t658;
  double t665;
  double t1333;
  double t1463;
  double t1542;
  double t1552;
  double t1372;
  double t1375;
  double t1398;
  double t1560;
  double t1671;
  double t1445;
  double t1561;
  double t1569;
  double t1321;
  double t1678;
  double t1700;
  double t1705;
  double t1736;
  double t1632;
  double t1714;
  double t1729;
  double t1312;
  double t1754;
  double t1776;
  double t1827;
  double t1892;
  double t1732;
  double t1869;
  double t1876;
  double t1261;
  double t1928;
  double t1953;
  double t1978;
  double t2039;
  double t1884;
  double t2008;
  double t2025;
  double t1217;
  double t2046;
  double t2048;
  double t2055;
  double t740;
  double t742;
  double t755;
  double t789;
  double t804;
  double t910;
  double t924;
  double t935;
  double t943;
  double t2246;
  double t2262;
  double t2302;
  double t2175;
  double t2194;
  double t2207;
  double t2215;
  double t2362;
  double t2374;
  double t2436;
  double t2483;
  double t2510;
  double t2414;
  double t2558;
  double t2592;
  double t2619;
  double t2624;
  double t2632;
  double t2618;
  double t2642;
  double t2653;
  double t2670;
  double t2684;
  double t2707;
  double t2663;
  double t2716;
  double t2722;
  double t2750;
  double t2762;
  double t2794;
  double t1094;
  double t1107;
  double t1129;
  double t2913;
  double t2916;
  double t2917;
  double t2861;
  double t2877;
  double t2880;
  double t2904;
  double t2925;
  double t2928;
  double t2947;
  double t2950;
  double t2979;
  double t2940;
  double t3005;
  double t3059;
  double t3112;
  double t3115;
  double t3117;
  double t3067;
  double t3125;
  double t3128;
  double t3168;
  double t3182;
  double t3183;
  double t3139;
  double t3186;
  double t3191;
  double t3199;
  double t3200;
  double t3211;
  double t2036;
  double t2062;
  double t2064;
  double t2071;
  double t2104;
  double t2106;
  double t2728;
  double t2799;
  double t2800;
  double t2814;
  double t2817;
  double t2849;
  double t3196;
  double t3229;
  double t3241;
  double t3263;
  double t3277;
  double t3279;
  double t3518;
  double t3531;
  double t3797;
  double t3822;
  double t4008;
  double t4019;
  double t4195;
  double t4201;
  double t4286;
  double t4297;
  double t4397;
  double t4433;
  double t3423;
  double t3444;
  double t3454;
  double t3458;
  double t3495;
  double t3500;
  double t3539;
  double t3551;
  double t3555;
  double t3628;
  double t3630;
  double t3634;
  double t3827;
  double t3847;
  double t3880;
  double t3957;
  double t3976;
  double t3985;
  double t4043;
  double t4053;
  double t4103;
  double t4172;
  double t4182;
  double t4188;
  double t4205;
  double t4215;
  double t4218;
  double t4239;
  double t4273;
  double t4274;
  double t4304;
  double t4327;
  double t4352;
  double t4358;
  double t4370;
  double t4392;
  double t4436;
  double t4446;
  double t4495;
  double t4564;
  double t4601;
  double t4611;
  t306 = Cos(var1[3]);
  t234 = Cos(var1[5]);
  t351 = Sin(var1[4]);
  t249 = Sin(var1[3]);
  t356 = Sin(var1[5]);
  t168 = Cos(var1[7]);
  t195 = Cos(var1[6]);
  t645 = Sin(var1[6]);
  t696 = Cos(var1[4]);
  t709 = Sin(var1[7]);
  t265 = -1.*t234*t249;
  t459 = t306*t351*t356;
  t463 = t265 + t459;
  t542 = t195*t463;
  t601 = t306*t234*t351;
  t605 = t249*t356;
  t610 = t601 + t605;
  t658 = t610*t645;
  t665 = t542 + t658;
  t1333 = Cos(var1[8]);
  t1463 = t195*t610;
  t1542 = -1.*t463*t645;
  t1552 = t1463 + t1542;
  t1372 = t306*t696*t168;
  t1375 = t665*t709;
  t1398 = t1372 + t1375;
  t1560 = Sin(var1[8]);
  t1671 = Cos(var1[9]);
  t1445 = t1333*t1398;
  t1561 = t1552*t1560;
  t1569 = t1445 + t1561;
  t1321 = Sin(var1[9]);
  t1678 = t1333*t1552;
  t1700 = -1.*t1398*t1560;
  t1705 = t1678 + t1700;
  t1736 = Cos(var1[10]);
  t1632 = -1.*t1321*t1569;
  t1714 = t1671*t1705;
  t1729 = t1632 + t1714;
  t1312 = Sin(var1[10]);
  t1754 = t1671*t1569;
  t1776 = t1321*t1705;
  t1827 = t1754 + t1776;
  t1892 = Cos(var1[11]);
  t1732 = t1312*t1729;
  t1869 = t1736*t1827;
  t1876 = t1732 + t1869;
  t1261 = Sin(var1[11]);
  t1928 = t1736*t1729;
  t1953 = -1.*t1312*t1827;
  t1978 = t1928 + t1953;
  t2039 = Cos(var1[12]);
  t1884 = -1.*t1261*t1876;
  t2008 = t1892*t1978;
  t2025 = t1884 + t2008;
  t1217 = Sin(var1[12]);
  t2046 = t1892*t1876;
  t2048 = t1261*t1978;
  t2055 = t2046 + t2048;
  t740 = t306*t234;
  t742 = t249*t351*t356;
  t755 = t740 + t742;
  t789 = t195*t755;
  t804 = t234*t249*t351;
  t910 = -1.*t306*t356;
  t924 = t804 + t910;
  t935 = t924*t645;
  t943 = t789 + t935;
  t2246 = t195*t924;
  t2262 = -1.*t755*t645;
  t2302 = t2246 + t2262;
  t2175 = t696*t168*t249;
  t2194 = t943*t709;
  t2207 = t2175 + t2194;
  t2215 = t1333*t2207;
  t2362 = t2302*t1560;
  t2374 = t2215 + t2362;
  t2436 = t1333*t2302;
  t2483 = -1.*t2207*t1560;
  t2510 = t2436 + t2483;
  t2414 = -1.*t1321*t2374;
  t2558 = t1671*t2510;
  t2592 = t2414 + t2558;
  t2619 = t1671*t2374;
  t2624 = t1321*t2510;
  t2632 = t2619 + t2624;
  t2618 = t1312*t2592;
  t2642 = t1736*t2632;
  t2653 = t2618 + t2642;
  t2670 = t1736*t2592;
  t2684 = -1.*t1312*t2632;
  t2707 = t2670 + t2684;
  t2663 = -1.*t1261*t2653;
  t2716 = t1892*t2707;
  t2722 = t2663 + t2716;
  t2750 = t1892*t2653;
  t2762 = t1261*t2707;
  t2794 = t2750 + t2762;
  t1094 = t696*t195*t356;
  t1107 = t696*t234*t645;
  t1129 = t1094 + t1107;
  t2913 = t696*t234*t195;
  t2916 = -1.*t696*t356*t645;
  t2917 = t2913 + t2916;
  t2861 = -1.*t168*t351;
  t2877 = t1129*t709;
  t2880 = t2861 + t2877;
  t2904 = t1333*t2880;
  t2925 = t2917*t1560;
  t2928 = t2904 + t2925;
  t2947 = t1333*t2917;
  t2950 = -1.*t2880*t1560;
  t2979 = t2947 + t2950;
  t2940 = -1.*t1321*t2928;
  t3005 = t1671*t2979;
  t3059 = t2940 + t3005;
  t3112 = t1671*t2928;
  t3115 = t1321*t2979;
  t3117 = t3112 + t3115;
  t3067 = t1312*t3059;
  t3125 = t1736*t3117;
  t3128 = t3067 + t3125;
  t3168 = t1736*t3059;
  t3182 = -1.*t1312*t3117;
  t3183 = t3168 + t3182;
  t3139 = -1.*t1261*t3128;
  t3186 = t1892*t3183;
  t3191 = t3139 + t3186;
  t3199 = t1892*t3128;
  t3200 = t1261*t3183;
  t3211 = t3199 + t3200;
  t2036 = t1217*t2025;
  t2062 = t2039*t2055;
  t2064 = t2036 + t2062;
  t2071 = t2039*t2025;
  t2104 = -1.*t1217*t2055;
  t2106 = t2071 + t2104;
  t2728 = t1217*t2722;
  t2799 = t2039*t2794;
  t2800 = t2728 + t2799;
  t2814 = t2039*t2722;
  t2817 = -1.*t1217*t2794;
  t2849 = t2814 + t2817;
  t3196 = t1217*t3191;
  t3229 = t2039*t3211;
  t3241 = t3196 + t3229;
  t3263 = t2039*t3191;
  t3277 = -1.*t1217*t3211;
  t3279 = t3263 + t3277;
  t3518 = -1.*t168;
  t3531 = 1. + t3518;
  t3797 = -1.*t1333;
  t3822 = 1. + t3797;
  t4008 = -1.*t1671;
  t4019 = 1. + t4008;
  t4195 = -1.*t1736;
  t4201 = 1. + t4195;
  t4286 = -1.*t1892;
  t4297 = 1. + t4286;
  t4397 = -1.*t2039;
  t4433 = 1. + t4397;
  t3423 = -1.*t195;
  t3444 = 1. + t3423;
  t3454 = 0.135*t3444;
  t3458 = 0. + t3454;
  t3495 = -0.135*t645;
  t3500 = 0. + t3495;
  t3539 = 0.135*t3531;
  t3551 = 0.049*t709;
  t3555 = 0. + t3539 + t3551;
  t3628 = -0.049*t3531;
  t3630 = 0.135*t709;
  t3634 = 0. + t3628 + t3630;
  t3827 = -0.049*t3822;
  t3847 = -0.09*t1560;
  t3880 = 0. + t3827 + t3847;
  t3957 = -0.09*t3822;
  t3976 = 0.049*t1560;
  t3985 = 0. + t3957 + t3976;
  t4043 = -0.049*t4019;
  t4053 = -0.21*t1321;
  t4103 = 0. + t4043 + t4053;
  t4172 = -0.21*t4019;
  t4182 = 0.049*t1321;
  t4188 = 0. + t4172 + t4182;
  t4205 = -0.2707*t4201;
  t4215 = 0.0016*t1312;
  t4218 = 0. + t4205 + t4215;
  t4239 = -0.0016*t4201;
  t4273 = -0.2707*t1312;
  t4274 = 0. + t4239 + t4273;
  t4304 = 0.0184*t4297;
  t4327 = -0.7055*t1261;
  t4352 = 0. + t4304 + t4327;
  t4358 = -0.7055*t4297;
  t4370 = -0.0184*t1261;
  t4392 = 0. + t4358 + t4370;
  t4436 = -1.1135*t4433;
  t4446 = 0.0216*t1217;
  t4495 = 0. + t4436 + t4446;
  t4564 = -0.0216*t4433;
  t4601 = -1.1135*t1217;
  t4611 = 0. + t4564 + t4601;
  p_output1[0]=-1.*t168*t665 + t306*t696*t709;
  p_output1[1]=t249*t696*t709 - 1.*t168*t943;
  p_output1[2]=-1.*t1129*t168 - 1.*t351*t709;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2064 + 0.766044*t2106;
  p_output1[5]=0.642788*t2800 + 0.766044*t2849;
  p_output1[6]=0.642788*t3241 + 0.766044*t3279;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2064 + 0.642788*t2106;
  p_output1[9]=-0.766044*t2800 + 0.642788*t2849;
  p_output1[10]=-0.766044*t3241 + 0.642788*t3279;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t2064 - 1.200144*t2106 + t1398*t3880 + t1552*t3985 + t1569*t4103 + t1705*t4188 + t1729*t4218 + t1827*t4274 + t1876*t4352 + t1978*t4392 + t2025*t4495 + t2055*t4611 + t3458*t463 + t3500*t610 + t3555*t665 + t306*t3634*t696 + 0.1305*(t168*t665 - 1.*t306*t696*t709) + var1[0];
  p_output1[13]=0. - 0.027251*t2800 - 1.200144*t2849 + t2207*t3880 + t2302*t3985 + t2374*t4103 + t2510*t4188 + t2592*t4218 + t2632*t4274 + t2653*t4352 + t2707*t4392 + t2722*t4495 + t2794*t4611 + t249*t3634*t696 + t3458*t755 + t3500*t924 + t3555*t943 + 0.1305*(-1.*t249*t696*t709 + t168*t943) + var1[1];
  p_output1[14]=0. - 0.027251*t3241 - 1.200144*t3279 + t1129*t3555 - 1.*t351*t3634 + t2880*t3880 + t2917*t3985 + t2928*t4103 + t2979*t4188 + t3059*t4218 + t3117*t4274 + t3128*t4352 + t3183*t4392 + t3191*t4495 + t3211*t4611 + t234*t3500*t696 + t3458*t356*t696 + 0.1305*(t1129*t168 + t351*t709) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
