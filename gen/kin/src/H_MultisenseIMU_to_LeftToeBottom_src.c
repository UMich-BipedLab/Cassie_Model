/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t100;
  double t155;
  double t610;
  double t354;
  double t951;
  double t1076;
  double t1311;
  double t970;
  double t1131;
  double t1164;
  double t839;
  double t1312;
  double t1314;
  double t1328;
  double t1552;
  double t1286;
  double t1412;
  double t1471;
  double t790;
  double t1574;
  double t1578;
  double t1590;
  double t1768;
  double t1495;
  double t1615;
  double t1713;
  double t720;
  double t1774;
  double t1792;
  double t1800;
  double t1869;
  double t1732;
  double t1833;
  double t1846;
  double t713;
  double t1898;
  double t1920;
  double t2009;
  double t2186;
  double t2187;
  double t2222;
  double t2276;
  double t2277;
  double t2322;
  double t2256;
  double t2339;
  double t2462;
  double t2554;
  double t2555;
  double t2557;
  double t2500;
  double t2563;
  double t2647;
  double t2678;
  double t2769;
  double t2784;
  double t2656;
  double t2798;
  double t2818;
  double t2834;
  double t2882;
  double t2951;
  double t3103;
  double t3178;
  double t3182;
  double t3218;
  double t3226;
  double t3273;
  double t3207;
  double t3314;
  double t3321;
  double t3333;
  double t3367;
  double t3374;
  double t3322;
  double t3405;
  double t3427;
  double t3455;
  double t3456;
  double t3476;
  double t1868;
  double t2065;
  double t2073;
  double t2081;
  double t2100;
  double t2112;
  double t2819;
  double t2952;
  double t2967;
  double t3007;
  double t3055;
  double t3070;
  double t3452;
  double t3480;
  double t3502;
  double t3549;
  double t3563;
  double t3645;
  double t3971;
  double t3978;
  double t4072;
  double t4078;
  double t4380;
  double t4414;
  double t4573;
  double t4579;
  double t4738;
  double t4752;
  double t3868;
  double t3872;
  double t3881;
  double t3903;
  double t3909;
  double t4000;
  double t4007;
  double t4042;
  double t4052;
  double t4056;
  double t4060;
  double t4140;
  double t4141;
  double t4200;
  double t4269;
  double t4346;
  double t4355;
  double t4422;
  double t4423;
  double t4451;
  double t4460;
  double t4527;
  double t4539;
  double t4630;
  double t4636;
  double t4644;
  double t4673;
  double t4675;
  double t4704;
  double t4763;
  double t4765;
  double t4773;
  double t4792;
  double t4794;
  double t4803;
  t100 = Cos(var1[1]);
  t155 = Sin(var1[0]);
  t610 = Sin(var1[1]);
  t354 = Cos(var1[0]);
  t951 = Cos(var1[2]);
  t1076 = Sin(var1[2]);
  t1311 = Cos(var1[3]);
  t970 = t951*t155*t610;
  t1131 = t354*t1076;
  t1164 = t970 + t1131;
  t839 = Sin(var1[3]);
  t1312 = t354*t951;
  t1314 = -1.*t155*t610*t1076;
  t1328 = t1312 + t1314;
  t1552 = Cos(var1[4]);
  t1286 = -1.*t839*t1164;
  t1412 = t1311*t1328;
  t1471 = t1286 + t1412;
  t790 = Sin(var1[4]);
  t1574 = t1311*t1164;
  t1578 = t839*t1328;
  t1590 = t1574 + t1578;
  t1768 = Cos(var1[5]);
  t1495 = t790*t1471;
  t1615 = t1552*t1590;
  t1713 = t1495 + t1615;
  t720 = Sin(var1[5]);
  t1774 = t1552*t1471;
  t1792 = -1.*t790*t1590;
  t1800 = t1774 + t1792;
  t1869 = Cos(var1[6]);
  t1732 = -1.*t720*t1713;
  t1833 = t1768*t1800;
  t1846 = t1732 + t1833;
  t713 = Sin(var1[6]);
  t1898 = t1768*t1713;
  t1920 = t720*t1800;
  t2009 = t1898 + t1920;
  t2186 = t354*t951*t610;
  t2187 = -1.*t155*t1076;
  t2222 = t2186 + t2187;
  t2276 = -1.*t951*t155;
  t2277 = -1.*t354*t610*t1076;
  t2322 = t2276 + t2277;
  t2256 = -1.*t839*t2222;
  t2339 = t1311*t2322;
  t2462 = t2256 + t2339;
  t2554 = t1311*t2222;
  t2555 = t839*t2322;
  t2557 = t2554 + t2555;
  t2500 = t790*t2462;
  t2563 = t1552*t2557;
  t2647 = t2500 + t2563;
  t2678 = t1552*t2462;
  t2769 = -1.*t790*t2557;
  t2784 = t2678 + t2769;
  t2656 = -1.*t720*t2647;
  t2798 = t1768*t2784;
  t2818 = t2656 + t2798;
  t2834 = t1768*t2647;
  t2882 = t720*t2784;
  t2951 = t2834 + t2882;
  t3103 = -1.*t100*t951*t839;
  t3178 = -1.*t1311*t100*t1076;
  t3182 = t3103 + t3178;
  t3218 = t1311*t100*t951;
  t3226 = -1.*t100*t839*t1076;
  t3273 = t3218 + t3226;
  t3207 = t790*t3182;
  t3314 = t1552*t3273;
  t3321 = t3207 + t3314;
  t3333 = t1552*t3182;
  t3367 = -1.*t790*t3273;
  t3374 = t3333 + t3367;
  t3322 = -1.*t720*t3321;
  t3405 = t1768*t3374;
  t3427 = t3322 + t3405;
  t3455 = t1768*t3321;
  t3456 = t720*t3374;
  t3476 = t3455 + t3456;
  t1868 = t713*t1846;
  t2065 = t1869*t2009;
  t2073 = t1868 + t2065;
  t2081 = t1869*t1846;
  t2100 = -1.*t713*t2009;
  t2112 = t2081 + t2100;
  t2819 = t713*t2818;
  t2952 = t1869*t2951;
  t2967 = t2819 + t2952;
  t3007 = t1869*t2818;
  t3055 = -1.*t713*t2951;
  t3070 = t3007 + t3055;
  t3452 = t713*t3427;
  t3480 = t1869*t3476;
  t3502 = t3452 + t3480;
  t3549 = t1869*t3427;
  t3563 = -1.*t713*t3476;
  t3645 = t3549 + t3563;
  t3971 = -1.*t951;
  t3978 = 1. + t3971;
  t4072 = -1.*t1311;
  t4078 = 1. + t4072;
  t4380 = -1.*t1552;
  t4414 = 1. + t4380;
  t4573 = -1.*t1768;
  t4579 = 1. + t4573;
  t4738 = -1.*t1869;
  t4752 = 1. + t4738;
  t3868 = -1.*t100;
  t3872 = 1. + t3868;
  t3881 = 0.135*t3872;
  t3903 = 0.049*t610;
  t3909 = 0. + t3881 + t3903;
  t4000 = -0.049*t3978;
  t4007 = -0.09*t1076;
  t4042 = 0. + t4000 + t4007;
  t4052 = -0.09*t3978;
  t4056 = 0.049*t1076;
  t4060 = 0. + t4052 + t4056;
  t4140 = -0.049*t4078;
  t4141 = -0.21*t839;
  t4200 = 0. + t4140 + t4141;
  t4269 = -0.21*t4078;
  t4346 = 0.049*t839;
  t4355 = 0. + t4269 + t4346;
  t4422 = -0.2707*t4414;
  t4423 = 0.0016*t790;
  t4451 = 0. + t4422 + t4423;
  t4460 = -0.0016*t4414;
  t4527 = -0.2707*t790;
  t4539 = 0. + t4460 + t4527;
  t4630 = 0.0184*t4579;
  t4636 = -0.7055*t720;
  t4644 = 0. + t4630 + t4636;
  t4673 = -0.7055*t4579;
  t4675 = -0.0184*t720;
  t4704 = 0. + t4673 + t4675;
  t4763 = -1.1135*t4752;
  t4765 = 0.0216*t713;
  t4773 = 0. + t4763 + t4765;
  t4792 = -0.0216*t4752;
  t4794 = -1.1135*t713;
  t4803 = 0. + t4792 + t4794;
  p_output1[0]=0. + t100*t155;
  p_output1[1]=0. - 1.*t100*t354;
  p_output1[2]=0. + t610;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t2073 - 0.766044*t2112;
  p_output1[5]=0. + 0.642788*t2967 + 0.766044*t3070;
  p_output1[6]=0. + 0.642788*t3502 + 0.766044*t3645;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t2073 - 0.642788*t2112;
  p_output1[9]=0. - 0.766044*t2967 + 0.642788*t3070;
  p_output1[10]=0. - 0.766044*t3502 + 0.642788*t3645;
  p_output1[11]=0.;
  p_output1[12]=0.24925 + 0.135*t155 - 0.1305*t100*t155 - 0.0306*t2073 + 1.1312*t2112 - 1.*t155*t3909 - 1.*t354*t4060 - 1.*t1164*t4200 - 1.*t1328*t4355 - 1.*t1471*t4451 - 1.*t1590*t4539 - 1.*t1713*t4644 - 1.*t1800*t4704 - 1.*t1846*t4773 - 1.*t2009*t4803 - 1.*t155*t4042*t610;
  p_output1[13]=-0.0302 + 0.0306*t2967 - 1.1312*t3070 + 0.135*(1. - 1.*t354) + 0.1305*t100*t354 + t354*t3909 - 1.*t155*t4060 + t2222*t4200 + t2322*t4355 + t2462*t4451 + t2557*t4539 + t2647*t4644 + t2784*t4704 + t2818*t4773 + t2951*t4803 + t354*t4042*t610;
  p_output1[14]=-0.047 + 0.0306*t3502 - 1.1312*t3645 - 0.049*t3872 + t100*t4042 - 1.*t100*t1076*t4355 + t3182*t4451 + t3273*t4539 + t3321*t4644 + t3374*t4704 + t3427*t4773 + t3476*t4803 + 0.004500000000000004*t610 + t100*t4200*t951;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
