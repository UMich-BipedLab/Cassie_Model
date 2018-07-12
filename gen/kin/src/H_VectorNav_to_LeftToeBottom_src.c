/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom_src.h"

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
  double t273;
  double t1076;
  double t968;
  double t1031;
  double t1132;
  double t1185;
  double t1058;
  double t1153;
  double t1155;
  double t871;
  double t1211;
  double t1216;
  double t1231;
  double t1398;
  double t1160;
  double t1266;
  double t1291;
  double t847;
  double t1451;
  double t1539;
  double t1571;
  double t1762;
  double t1346;
  double t1588;
  double t1759;
  double t806;
  double t1786;
  double t1798;
  double t1800;
  double t234;
  double t129;
  double t582;
  double t1949;
  double t1979;
  double t1987;
  double t2058;
  double t2076;
  double t2093;
  double t2013;
  double t2094;
  double t2134;
  double t2151;
  double t2196;
  double t2197;
  double t2149;
  double t2206;
  double t2216;
  double t2229;
  double t2260;
  double t2291;
  double t2221;
  double t2294;
  double t2300;
  double t2315;
  double t2347;
  double t2407;
  double t2621;
  double t2639;
  double t2675;
  double t2709;
  double t2718;
  double t2722;
  double t2682;
  double t2730;
  double t2737;
  double t2747;
  double t2749;
  double t2757;
  double t2745;
  double t2767;
  double t2768;
  double t2815;
  double t2839;
  double t2894;
  double t2774;
  double t2922;
  double t2934;
  double t3006;
  double t3016;
  double t3020;
  double t1761;
  double t1806;
  double t1807;
  double t1902;
  double t1934;
  double t1937;
  double t2309;
  double t2453;
  double t2489;
  double t2561;
  double t2569;
  double t2578;
  double t2951;
  double t3145;
  double t3154;
  double t3223;
  double t3230;
  double t3245;
  double t3696;
  double t3714;
  double t3963;
  double t3967;
  double t4230;
  double t4251;
  double t4401;
  double t4405;
  double t3685;
  double t3688;
  double t3877;
  double t3887;
  double t3890;
  double t3891;
  double t3898;
  double t3721;
  double t3738;
  double t3829;
  double t3917;
  double t3929;
  double t3931;
  double t3969;
  double t4001;
  double t4034;
  double t4067;
  double t4081;
  double t4115;
  double t4260;
  double t4285;
  double t4313;
  double t4370;
  double t4373;
  double t4378;
  double t4419;
  double t4435;
  double t4436;
  double t4447;
  double t4475;
  double t4479;
  double t4662;
  double t4686;
  double t4698;
  double t4769;
  double t4790;
  double t4860;
  t273 = Cos(var1[1]);
  t1076 = Cos(var1[3]);
  t968 = Cos(var1[2]);
  t1031 = Sin(var1[3]);
  t1132 = Sin(var1[2]);
  t1185 = Cos(var1[4]);
  t1058 = -1.*t273*t968*t1031;
  t1153 = -1.*t1076*t273*t1132;
  t1155 = t1058 + t1153;
  t871 = Sin(var1[4]);
  t1211 = t1076*t273*t968;
  t1216 = -1.*t273*t1031*t1132;
  t1231 = t1211 + t1216;
  t1398 = Cos(var1[5]);
  t1160 = t871*t1155;
  t1266 = t1185*t1231;
  t1291 = t1160 + t1266;
  t847 = Sin(var1[5]);
  t1451 = t1185*t1155;
  t1539 = -1.*t871*t1231;
  t1571 = t1451 + t1539;
  t1762 = Cos(var1[6]);
  t1346 = -1.*t847*t1291;
  t1588 = t1398*t1571;
  t1759 = t1346 + t1588;
  t806 = Sin(var1[6]);
  t1786 = t1398*t1291;
  t1798 = t847*t1571;
  t1800 = t1786 + t1798;
  t234 = Cos(var1[0]);
  t129 = Sin(var1[1]);
  t582 = Sin(var1[0]);
  t1949 = t234*t968*t129;
  t1979 = -1.*t582*t1132;
  t1987 = t1949 + t1979;
  t2058 = -1.*t968*t582;
  t2076 = -1.*t234*t129*t1132;
  t2093 = t2058 + t2076;
  t2013 = -1.*t1031*t1987;
  t2094 = t1076*t2093;
  t2134 = t2013 + t2094;
  t2151 = t1076*t1987;
  t2196 = t1031*t2093;
  t2197 = t2151 + t2196;
  t2149 = t871*t2134;
  t2206 = t1185*t2197;
  t2216 = t2149 + t2206;
  t2229 = t1185*t2134;
  t2260 = -1.*t871*t2197;
  t2291 = t2229 + t2260;
  t2221 = -1.*t847*t2216;
  t2294 = t1398*t2291;
  t2300 = t2221 + t2294;
  t2315 = t1398*t2216;
  t2347 = t847*t2291;
  t2407 = t2315 + t2347;
  t2621 = t968*t582*t129;
  t2639 = t234*t1132;
  t2675 = t2621 + t2639;
  t2709 = t234*t968;
  t2718 = -1.*t582*t129*t1132;
  t2722 = t2709 + t2718;
  t2682 = -1.*t1031*t2675;
  t2730 = t1076*t2722;
  t2737 = t2682 + t2730;
  t2747 = t1076*t2675;
  t2749 = t1031*t2722;
  t2757 = t2747 + t2749;
  t2745 = t871*t2737;
  t2767 = t1185*t2757;
  t2768 = t2745 + t2767;
  t2815 = t1185*t2737;
  t2839 = -1.*t871*t2757;
  t2894 = t2815 + t2839;
  t2774 = -1.*t847*t2768;
  t2922 = t1398*t2894;
  t2934 = t2774 + t2922;
  t3006 = t1398*t2768;
  t3016 = t847*t2894;
  t3020 = t3006 + t3016;
  t1761 = t806*t1759;
  t1806 = t1762*t1800;
  t1807 = t1761 + t1806;
  t1902 = t1762*t1759;
  t1934 = -1.*t806*t1800;
  t1937 = t1902 + t1934;
  t2309 = t806*t2300;
  t2453 = t1762*t2407;
  t2489 = t2309 + t2453;
  t2561 = t1762*t2300;
  t2569 = -1.*t806*t2407;
  t2578 = t2561 + t2569;
  t2951 = t806*t2934;
  t3145 = t1762*t3020;
  t3154 = t2951 + t3145;
  t3223 = t1762*t2934;
  t3230 = -1.*t806*t3020;
  t3245 = t3223 + t3230;
  t3696 = -1.*t1076;
  t3714 = 1. + t3696;
  t3963 = -1.*t1185;
  t3967 = 1. + t3963;
  t4230 = -1.*t1398;
  t4251 = 1. + t4230;
  t4401 = -1.*t1762;
  t4405 = 1. + t4401;
  t3685 = -1.*t273;
  t3688 = 1. + t3685;
  t3877 = -1.*t968;
  t3887 = 1. + t3877;
  t3890 = -0.049*t3887;
  t3891 = -0.09*t1132;
  t3898 = 0. + t3890 + t3891;
  t3721 = -0.049*t3714;
  t3738 = -0.21*t1031;
  t3829 = 0. + t3721 + t3738;
  t3917 = -0.21*t3714;
  t3929 = 0.049*t1031;
  t3931 = 0. + t3917 + t3929;
  t3969 = -0.2707*t3967;
  t4001 = 0.0016*t871;
  t4034 = 0. + t3969 + t4001;
  t4067 = -0.0016*t3967;
  t4081 = -0.2707*t871;
  t4115 = 0. + t4067 + t4081;
  t4260 = 0.0184*t4251;
  t4285 = -0.7055*t847;
  t4313 = 0. + t4260 + t4285;
  t4370 = -0.7055*t4251;
  t4373 = -0.0184*t847;
  t4378 = 0. + t4370 + t4373;
  t4419 = -1.1135*t4405;
  t4435 = 0.0216*t806;
  t4436 = 0. + t4419 + t4435;
  t4447 = -0.0216*t4405;
  t4475 = -1.1135*t806;
  t4479 = 0. + t4447 + t4475;
  t4662 = 0.135*t3688;
  t4686 = 0.049*t129;
  t4698 = 0. + t4662 + t4686;
  t4769 = -0.09*t3887;
  t4790 = 0.049*t1132;
  t4860 = 0. + t4769 + t4790;
  p_output1[0]=0. + t129;
  p_output1[1]=0. - 1.*t234*t273;
  p_output1[2]=0. - 1.*t273*t582;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t1807 + 0.766044*t1937;
  p_output1[5]=0. + 0.642788*t2489 + 0.766044*t2578;
  p_output1[6]=0. + 0.642788*t3154 + 0.766044*t3245;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t1807 + 0.642788*t1937;
  p_output1[9]=0. - 0.766044*t2489 + 0.642788*t2578;
  p_output1[10]=0. - 0.766044*t3154 + 0.642788*t3245;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.004500000000000004*t129 + 0.0306*t1807 - 1.1312*t1937 - 0.049*t3688 + t273*t3898 - 1.*t1132*t273*t3931 + t1155*t4034 + t1231*t4115 + t1291*t4313 + t1571*t4378 + t1759*t4436 + t1800*t4479 + t273*t3829*t968;
  p_output1[13]=0. + 0.135*(1. - 1.*t234) + 0.0306*t2489 - 1.1312*t2578 + 0.1305*t234*t273 + t1987*t3829 + t129*t234*t3898 + t2093*t3931 + t2134*t4034 + t2197*t4115 + t2216*t4313 + t2291*t4378 + t2300*t4436 + t2407*t4479 + t234*t4698 - 1.*t4860*t582;
  p_output1[14]=0.07996 + 0.0306*t3154 - 1.1312*t3245 + t2675*t3829 + t2722*t3931 + t2737*t4034 + t2757*t4115 + t2768*t4313 + t2894*t4378 + t2934*t4436 + t3020*t4479 + t234*t4860 - 0.135*t582 + 0.1305*t273*t582 + t129*t3898*t582 + t4698*t582;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
