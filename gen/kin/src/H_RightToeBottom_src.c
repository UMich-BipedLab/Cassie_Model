/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:06 GMT-05:00
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
  double t47;
  double t326;
  double t391;
  double t328;
  double t415;
  double t109;
  double t181;
  double t267;
  double t288;
  double t602;
  double t373;
  double t424;
  double t505;
  double t782;
  double t783;
  double t796;
  double t558;
  double t844;
  double t867;
  double t1396;
  double t1270;
  double t1319;
  double t1360;
  double t1190;
  double t1399;
  double t1426;
  double t1444;
  double t1571;
  double t1387;
  double t1461;
  double t1470;
  double t1184;
  double t1577;
  double t1592;
  double t1594;
  double t1714;
  double t1504;
  double t1628;
  double t1634;
  double t1161;
  double t1721;
  double t1729;
  double t1759;
  double t1850;
  double t1702;
  double t1788;
  double t1826;
  double t1156;
  double t1855;
  double t1945;
  double t1979;
  double t2050;
  double t1828;
  double t1998;
  double t2031;
  double t1151;
  double t2053;
  double t2084;
  double t2086;
  double t927;
  double t956;
  double t958;
  double t987;
  double t1029;
  double t1039;
  double t976;
  double t1045;
  double t1055;
  double t2225;
  double t2250;
  double t2266;
  double t2309;
  double t2349;
  double t2361;
  double t2277;
  double t2364;
  double t2367;
  double t2369;
  double t2378;
  double t2390;
  double t2368;
  double t2403;
  double t2433;
  double t2519;
  double t2520;
  double t2526;
  double t2471;
  double t2531;
  double t2537;
  double t2572;
  double t2582;
  double t2656;
  double t2540;
  double t2671;
  double t2731;
  double t2774;
  double t2777;
  double t2786;
  double t1127;
  double t1135;
  double t1140;
  double t2900;
  double t2903;
  double t2904;
  double t2917;
  double t2921;
  double t2924;
  double t2908;
  double t2925;
  double t2929;
  double t2935;
  double t2939;
  double t2950;
  double t2930;
  double t2957;
  double t2959;
  double t2992;
  double t2995;
  double t3026;
  double t2991;
  double t3038;
  double t3044;
  double t3064;
  double t3100;
  double t3109;
  double t3047;
  double t3117;
  double t3123;
  double t3187;
  double t3221;
  double t3359;
  double t2033;
  double t2090;
  double t2103;
  double t2151;
  double t2160;
  double t2164;
  double t2746;
  double t2797;
  double t2799;
  double t2803;
  double t2809;
  double t2822;
  double t3181;
  double t3375;
  double t3380;
  double t3384;
  double t3385;
  double t3392;
  double t3560;
  double t3562;
  double t3751;
  double t3756;
  double t3887;
  double t3914;
  double t3972;
  double t3995;
  double t4103;
  double t4107;
  double t4178;
  double t4182;
  double t3575;
  double t3577;
  double t3581;
  double t3589;
  double t3613;
  double t3647;
  double t3653;
  double t3655;
  double t3683;
  double t3695;
  double t3727;
  double t3736;
  double t3762;
  double t3766;
  double t3777;
  double t3864;
  double t3871;
  double t3874;
  double t3924;
  double t3927;
  double t3929;
  double t3948;
  double t3953;
  double t3960;
  double t3996;
  double t3997;
  double t4011;
  double t4037;
  double t4058;
  double t4062;
  double t4116;
  double t4121;
  double t4124;
  double t4134;
  double t4153;
  double t4166;
  double t4187;
  double t4193;
  double t4194;
  double t4219;
  double t4247;
  double t4250;
  t47 = Cos(var1[3]);
  t326 = Cos(var1[5]);
  t391 = Sin(var1[3]);
  t328 = Sin(var1[4]);
  t415 = Sin(var1[5]);
  t109 = Cos(var1[4]);
  t181 = Sin(var1[14]);
  t267 = Cos(var1[14]);
  t288 = Sin(var1[13]);
  t602 = Cos(var1[13]);
  t373 = t47*t326*t328;
  t424 = t391*t415;
  t505 = t373 + t424;
  t782 = -1.*t326*t391;
  t783 = t47*t328*t415;
  t796 = t782 + t783;
  t558 = t288*t505;
  t844 = t602*t796;
  t867 = t558 + t844;
  t1396 = Cos(var1[15]);
  t1270 = t602*t505;
  t1319 = -1.*t288*t796;
  t1360 = t1270 + t1319;
  t1190 = Sin(var1[15]);
  t1399 = t267*t47*t109;
  t1426 = t181*t867;
  t1444 = t1399 + t1426;
  t1571 = Cos(var1[16]);
  t1387 = t1190*t1360;
  t1461 = t1396*t1444;
  t1470 = t1387 + t1461;
  t1184 = Sin(var1[16]);
  t1577 = t1396*t1360;
  t1592 = -1.*t1190*t1444;
  t1594 = t1577 + t1592;
  t1714 = Cos(var1[17]);
  t1504 = -1.*t1184*t1470;
  t1628 = t1571*t1594;
  t1634 = t1504 + t1628;
  t1161 = Sin(var1[17]);
  t1721 = t1571*t1470;
  t1729 = t1184*t1594;
  t1759 = t1721 + t1729;
  t1850 = Cos(var1[18]);
  t1702 = t1161*t1634;
  t1788 = t1714*t1759;
  t1826 = t1702 + t1788;
  t1156 = Sin(var1[18]);
  t1855 = t1714*t1634;
  t1945 = -1.*t1161*t1759;
  t1979 = t1855 + t1945;
  t2050 = Cos(var1[19]);
  t1828 = -1.*t1156*t1826;
  t1998 = t1850*t1979;
  t2031 = t1828 + t1998;
  t1151 = Sin(var1[19]);
  t2053 = t1850*t1826;
  t2084 = t1156*t1979;
  t2086 = t2053 + t2084;
  t927 = t326*t391*t328;
  t956 = -1.*t47*t415;
  t958 = t927 + t956;
  t987 = t47*t326;
  t1029 = t391*t328*t415;
  t1039 = t987 + t1029;
  t976 = t288*t958;
  t1045 = t602*t1039;
  t1055 = t976 + t1045;
  t2225 = t602*t958;
  t2250 = -1.*t288*t1039;
  t2266 = t2225 + t2250;
  t2309 = t267*t109*t391;
  t2349 = t181*t1055;
  t2361 = t2309 + t2349;
  t2277 = t1190*t2266;
  t2364 = t1396*t2361;
  t2367 = t2277 + t2364;
  t2369 = t1396*t2266;
  t2378 = -1.*t1190*t2361;
  t2390 = t2369 + t2378;
  t2368 = -1.*t1184*t2367;
  t2403 = t1571*t2390;
  t2433 = t2368 + t2403;
  t2519 = t1571*t2367;
  t2520 = t1184*t2390;
  t2526 = t2519 + t2520;
  t2471 = t1161*t2433;
  t2531 = t1714*t2526;
  t2537 = t2471 + t2531;
  t2572 = t1714*t2433;
  t2582 = -1.*t1161*t2526;
  t2656 = t2572 + t2582;
  t2540 = -1.*t1156*t2537;
  t2671 = t1850*t2656;
  t2731 = t2540 + t2671;
  t2774 = t1850*t2537;
  t2777 = t1156*t2656;
  t2786 = t2774 + t2777;
  t1127 = t109*t326*t288;
  t1135 = t602*t109*t415;
  t1140 = t1127 + t1135;
  t2900 = t602*t109*t326;
  t2903 = -1.*t109*t288*t415;
  t2904 = t2900 + t2903;
  t2917 = -1.*t267*t328;
  t2921 = t181*t1140;
  t2924 = t2917 + t2921;
  t2908 = t1190*t2904;
  t2925 = t1396*t2924;
  t2929 = t2908 + t2925;
  t2935 = t1396*t2904;
  t2939 = -1.*t1190*t2924;
  t2950 = t2935 + t2939;
  t2930 = -1.*t1184*t2929;
  t2957 = t1571*t2950;
  t2959 = t2930 + t2957;
  t2992 = t1571*t2929;
  t2995 = t1184*t2950;
  t3026 = t2992 + t2995;
  t2991 = t1161*t2959;
  t3038 = t1714*t3026;
  t3044 = t2991 + t3038;
  t3064 = t1714*t2959;
  t3100 = -1.*t1161*t3026;
  t3109 = t3064 + t3100;
  t3047 = -1.*t1156*t3044;
  t3117 = t1850*t3109;
  t3123 = t3047 + t3117;
  t3187 = t1850*t3044;
  t3221 = t1156*t3109;
  t3359 = t3187 + t3221;
  t2033 = t1151*t2031;
  t2090 = t2050*t2086;
  t2103 = t2033 + t2090;
  t2151 = t2050*t2031;
  t2160 = -1.*t1151*t2086;
  t2164 = t2151 + t2160;
  t2746 = t1151*t2731;
  t2797 = t2050*t2786;
  t2799 = t2746 + t2797;
  t2803 = t2050*t2731;
  t2809 = -1.*t1151*t2786;
  t2822 = t2803 + t2809;
  t3181 = t1151*t3123;
  t3375 = t2050*t3359;
  t3380 = t3181 + t3375;
  t3384 = t2050*t3123;
  t3385 = -1.*t1151*t3359;
  t3392 = t3384 + t3385;
  t3560 = -1.*t267;
  t3562 = 1. + t3560;
  t3751 = -1.*t1396;
  t3756 = 1. + t3751;
  t3887 = -1.*t1571;
  t3914 = 1. + t3887;
  t3972 = -1.*t1714;
  t3995 = 1. + t3972;
  t4103 = -1.*t1850;
  t4107 = 1. + t4103;
  t4178 = -1.*t2050;
  t4182 = 1. + t4178;
  t3575 = -0.049*t3562;
  t3577 = -0.135*t181;
  t3581 = 0. + t3575 + t3577;
  t3589 = 0.135*t288;
  t3613 = 0. + t3589;
  t3647 = -1.*t602;
  t3653 = 1. + t3647;
  t3655 = -0.135*t3653;
  t3683 = 0. + t3655;
  t3695 = -0.135*t3562;
  t3727 = 0.049*t181;
  t3736 = 0. + t3695 + t3727;
  t3762 = -0.09*t3756;
  t3766 = 0.049*t1190;
  t3777 = 0. + t3762 + t3766;
  t3864 = -0.049*t3756;
  t3871 = -0.09*t1190;
  t3874 = 0. + t3864 + t3871;
  t3924 = -0.049*t3914;
  t3927 = -0.21*t1184;
  t3929 = 0. + t3924 + t3927;
  t3948 = -0.21*t3914;
  t3953 = 0.049*t1184;
  t3960 = 0. + t3948 + t3953;
  t3996 = -0.2707*t3995;
  t3997 = 0.0016*t1161;
  t4011 = 0. + t3996 + t3997;
  t4037 = -0.0016*t3995;
  t4058 = -0.2707*t1161;
  t4062 = 0. + t4037 + t4058;
  t4116 = 0.0184*t4107;
  t4121 = -0.7055*t1156;
  t4124 = 0. + t4116 + t4121;
  t4134 = -0.7055*t4107;
  t4153 = -0.0184*t1156;
  t4166 = 0. + t4134 + t4153;
  t4187 = -1.1135*t4182;
  t4193 = 0.0216*t1151;
  t4194 = 0. + t4187 + t4193;
  t4219 = -0.0216*t4182;
  t4247 = -1.1135*t1151;
  t4250 = 0. + t4219 + t4247;
  p_output1[0]=t109*t181*t47 - 1.*t267*t867;
  p_output1[1]=-1.*t1055*t267 + t109*t181*t391;
  p_output1[2]=-1.*t1140*t267 - 1.*t181*t328;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2103 + 0.766044*t2164;
  p_output1[5]=0.642788*t2799 + 0.766044*t2822;
  p_output1[6]=0.642788*t3380 + 0.766044*t3392;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2103 + 0.642788*t2164;
  p_output1[9]=-0.766044*t2799 + 0.642788*t2822;
  p_output1[10]=-0.766044*t3380 + 0.642788*t3392;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2103 - 1.1312*t2164 + t1360*t3777 + t1444*t3874 + t1470*t3929 + t1594*t3960 + t1634*t4011 + t1759*t4062 + t1826*t4124 + t1979*t4166 + t2031*t4194 + t2086*t4250 + t109*t3581*t47 + t3613*t505 + t3683*t796 + t3736*t867 - 0.1305*(-1.*t109*t181*t47 + t267*t867) + var1[0];
  p_output1[13]=0. + 0.0306*t2799 - 1.1312*t2822 + t1039*t3683 + t1055*t3736 + t2266*t3777 + t2361*t3874 + t109*t3581*t391 - 0.1305*(t1055*t267 - 1.*t109*t181*t391) + t2367*t3929 + t2390*t3960 + t2433*t4011 + t2526*t4062 + t2537*t4124 + t2656*t4166 + t2731*t4194 + t2786*t4250 + t3613*t958 + var1[1];
  p_output1[14]=0. - 0.1305*(t1140*t267 + t181*t328) + 0.0306*t3380 - 1.1312*t3392 - 1.*t328*t3581 + t109*t326*t3613 + t1140*t3736 + t2904*t3777 + t2924*t3874 + t2929*t3929 + t2950*t3960 + t2959*t4011 + t3026*t4062 + t3044*t4124 + t109*t3683*t415 + t3109*t4166 + t3123*t4194 + t3359*t4250 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
