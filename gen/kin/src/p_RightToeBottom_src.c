/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottom_src.h"

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
  double t90;
  double t1476;
  double t1576;
  double t1479;
  double t1592;
  double t946;
  double t961;
  double t965;
  double t1076;
  double t1341;
  double t1530;
  double t1596;
  double t1634;
  double t1701;
  double t2046;
  double t2103;
  double t2224;
  double t241;
  double t2418;
  double t2429;
  double t2434;
  double t2479;
  double t2493;
  double t2494;
  double t2553;
  double t2624;
  double t2625;
  double t2714;
  double t2870;
  double t2938;
  double t2997;
  double t3010;
  double t3209;
  double t3223;
  double t3243;
  double t3407;
  double t3478;
  double t3521;
  double t3760;
  double t3762;
  double t3782;
  double t3858;
  double t3883;
  double t3919;
  double t3953;
  double t4012;
  double t4026;
  double t4033;
  double t4140;
  double t4147;
  double t4155;
  double t4246;
  double t4298;
  double t4319;
  double t4371;
  double t4415;
  double t4460;
  double t4465;
  double t4537;
  double t4550;
  double t4553;
  double t4575;
  double t4593;
  double t4608;
  double t4613;
  double t4626;
  double t4644;
  double t4670;
  double t4741;
  double t4771;
  double t4787;
  double t1050;
  double t1157;
  double t1269;
  double t1465;
  double t1475;
  double t1820;
  double t1835;
  double t1902;
  double t1934;
  double t2333;
  double t2376;
  double t2409;
  double t4877;
  double t4880;
  double t4891;
  double t4935;
  double t4960;
  double t4963;
  double t2499;
  double t2557;
  double t2576;
  double t4985;
  double t4999;
  double t5011;
  double t2836;
  double t2849;
  double t2862;
  double t3226;
  double t3288;
  double t3405;
  double t5029;
  double t5067;
  double t5073;
  double t5249;
  double t5253;
  double t5262;
  double t3678;
  double t3681;
  double t3718;
  double t3929;
  double t3988;
  double t3996;
  double t5315;
  double t5328;
  double t5332;
  double t5342;
  double t5366;
  double t5367;
  double t4089;
  double t4115;
  double t4133;
  double t4348;
  double t4394;
  double t4406;
  double t5369;
  double t5370;
  double t5374;
  double t5388;
  double t5392;
  double t5417;
  double t4500;
  double t4515;
  double t4524;
  double t4609;
  double t4620;
  double t4622;
  double t5425;
  double t5429;
  double t5447;
  double t5471;
  double t5482;
  double t5487;
  double t4685;
  double t4719;
  double t4733;
  double t5496;
  double t5497;
  double t5598;
  double t5606;
  double t5610;
  double t5613;
  double t5667;
  double t5669;
  double t5670;
  double t5676;
  double t5677;
  double t5679;
  double t5706;
  double t5707;
  double t5721;
  double t5724;
  double t5731;
  double t5732;
  double t5737;
  double t5739;
  double t5741;
  double t5746;
  double t5749;
  double t5750;
  double t5758;
  double t5760;
  double t5764;
  double t5773;
  double t5775;
  double t5778;
  double t5833;
  double t5844;
  double t5857;
  double t5873;
  double t5877;
  double t5880;
  double t5908;
  double t5913;
  double t5919;
  t90 = Cos(var1[3]);
  t1476 = Cos(var1[5]);
  t1576 = Sin(var1[3]);
  t1479 = Sin(var1[4]);
  t1592 = Sin(var1[5]);
  t946 = Cos(var1[14]);
  t961 = -1.*t946;
  t965 = 1. + t961;
  t1076 = Sin(var1[14]);
  t1341 = Sin(var1[13]);
  t1530 = t90*t1476*t1479;
  t1596 = t1576*t1592;
  t1634 = t1530 + t1596;
  t1701 = Cos(var1[13]);
  t2046 = -1.*t1476*t1576;
  t2103 = t90*t1479*t1592;
  t2224 = t2046 + t2103;
  t241 = Cos(var1[4]);
  t2418 = t1341*t1634;
  t2429 = t1701*t2224;
  t2434 = t2418 + t2429;
  t2479 = Cos(var1[15]);
  t2493 = -1.*t2479;
  t2494 = 1. + t2493;
  t2553 = Sin(var1[15]);
  t2624 = t1701*t1634;
  t2625 = -1.*t1341*t2224;
  t2714 = t2624 + t2625;
  t2870 = t946*t90*t241;
  t2938 = t1076*t2434;
  t2997 = t2870 + t2938;
  t3010 = Cos(var1[16]);
  t3209 = -1.*t3010;
  t3223 = 1. + t3209;
  t3243 = Sin(var1[16]);
  t3407 = t2553*t2714;
  t3478 = t2479*t2997;
  t3521 = t3407 + t3478;
  t3760 = t2479*t2714;
  t3762 = -1.*t2553*t2997;
  t3782 = t3760 + t3762;
  t3858 = Cos(var1[17]);
  t3883 = -1.*t3858;
  t3919 = 1. + t3883;
  t3953 = Sin(var1[17]);
  t4012 = -1.*t3243*t3521;
  t4026 = t3010*t3782;
  t4033 = t4012 + t4026;
  t4140 = t3010*t3521;
  t4147 = t3243*t3782;
  t4155 = t4140 + t4147;
  t4246 = Cos(var1[18]);
  t4298 = -1.*t4246;
  t4319 = 1. + t4298;
  t4371 = Sin(var1[18]);
  t4415 = t3953*t4033;
  t4460 = t3858*t4155;
  t4465 = t4415 + t4460;
  t4537 = t3858*t4033;
  t4550 = -1.*t3953*t4155;
  t4553 = t4537 + t4550;
  t4575 = Cos(var1[19]);
  t4593 = -1.*t4575;
  t4608 = 1. + t4593;
  t4613 = Sin(var1[19]);
  t4626 = -1.*t4371*t4465;
  t4644 = t4246*t4553;
  t4670 = t4626 + t4644;
  t4741 = t4246*t4465;
  t4771 = t4371*t4553;
  t4787 = t4741 + t4771;
  t1050 = -0.049*t965;
  t1157 = -0.135*t1076;
  t1269 = 0. + t1050 + t1157;
  t1465 = 0.135*t1341;
  t1475 = 0. + t1465;
  t1820 = -1.*t1701;
  t1835 = 1. + t1820;
  t1902 = -0.135*t1835;
  t1934 = 0. + t1902;
  t2333 = -0.135*t965;
  t2376 = 0.049*t1076;
  t2409 = 0. + t2333 + t2376;
  t4877 = t1476*t1576*t1479;
  t4880 = -1.*t90*t1592;
  t4891 = t4877 + t4880;
  t4935 = t90*t1476;
  t4960 = t1576*t1479*t1592;
  t4963 = t4935 + t4960;
  t2499 = -0.09*t2494;
  t2557 = 0.049*t2553;
  t2576 = 0. + t2499 + t2557;
  t4985 = t1341*t4891;
  t4999 = t1701*t4963;
  t5011 = t4985 + t4999;
  t2836 = -0.049*t2494;
  t2849 = -0.09*t2553;
  t2862 = 0. + t2836 + t2849;
  t3226 = -0.049*t3223;
  t3288 = -0.21*t3243;
  t3405 = 0. + t3226 + t3288;
  t5029 = t1701*t4891;
  t5067 = -1.*t1341*t4963;
  t5073 = t5029 + t5067;
  t5249 = t946*t241*t1576;
  t5253 = t1076*t5011;
  t5262 = t5249 + t5253;
  t3678 = -0.21*t3223;
  t3681 = 0.049*t3243;
  t3718 = 0. + t3678 + t3681;
  t3929 = -0.2707*t3919;
  t3988 = 0.0016*t3953;
  t3996 = 0. + t3929 + t3988;
  t5315 = t2553*t5073;
  t5328 = t2479*t5262;
  t5332 = t5315 + t5328;
  t5342 = t2479*t5073;
  t5366 = -1.*t2553*t5262;
  t5367 = t5342 + t5366;
  t4089 = -0.0016*t3919;
  t4115 = -0.2707*t3953;
  t4133 = 0. + t4089 + t4115;
  t4348 = 0.0184*t4319;
  t4394 = -0.7055*t4371;
  t4406 = 0. + t4348 + t4394;
  t5369 = -1.*t3243*t5332;
  t5370 = t3010*t5367;
  t5374 = t5369 + t5370;
  t5388 = t3010*t5332;
  t5392 = t3243*t5367;
  t5417 = t5388 + t5392;
  t4500 = -0.7055*t4319;
  t4515 = -0.0184*t4371;
  t4524 = 0. + t4500 + t4515;
  t4609 = -1.1135*t4608;
  t4620 = 0.0216*t4613;
  t4622 = 0. + t4609 + t4620;
  t5425 = t3953*t5374;
  t5429 = t3858*t5417;
  t5447 = t5425 + t5429;
  t5471 = t3858*t5374;
  t5482 = -1.*t3953*t5417;
  t5487 = t5471 + t5482;
  t4685 = -0.0216*t4608;
  t4719 = -1.1135*t4613;
  t4733 = 0. + t4685 + t4719;
  t5496 = -1.*t4371*t5447;
  t5497 = t4246*t5487;
  t5598 = t5496 + t5497;
  t5606 = t4246*t5447;
  t5610 = t4371*t5487;
  t5613 = t5606 + t5610;
  t5667 = t241*t1476*t1341;
  t5669 = t1701*t241*t1592;
  t5670 = t5667 + t5669;
  t5676 = t1701*t241*t1476;
  t5677 = -1.*t241*t1341*t1592;
  t5679 = t5676 + t5677;
  t5706 = -1.*t946*t1479;
  t5707 = t1076*t5670;
  t5721 = t5706 + t5707;
  t5724 = t2553*t5679;
  t5731 = t2479*t5721;
  t5732 = t5724 + t5731;
  t5737 = t2479*t5679;
  t5739 = -1.*t2553*t5721;
  t5741 = t5737 + t5739;
  t5746 = -1.*t3243*t5732;
  t5749 = t3010*t5741;
  t5750 = t5746 + t5749;
  t5758 = t3010*t5732;
  t5760 = t3243*t5741;
  t5764 = t5758 + t5760;
  t5773 = t3953*t5750;
  t5775 = t3858*t5764;
  t5778 = t5773 + t5775;
  t5833 = t3858*t5750;
  t5844 = -1.*t3953*t5764;
  t5857 = t5833 + t5844;
  t5873 = -1.*t4371*t5778;
  t5877 = t4246*t5857;
  t5880 = t5873 + t5877;
  t5908 = t4246*t5778;
  t5913 = t4371*t5857;
  t5919 = t5908 + t5913;
  p_output1[0]=0. + t1475*t1634 + t1934*t2224 + t2409*t2434 + t2576*t2714 + t2862*t2997 + t3405*t3521 + t3718*t3782 + t3996*t4033 + t4133*t4155 + t4406*t4465 + t4524*t4553 + t4622*t4670 + t4733*t4787 + 0.0306*(t4613*t4670 + t4575*t4787) - 1.1312*(t4575*t4670 - 1.*t4613*t4787) + t1269*t241*t90 - 0.1305*(-1.*t1076*t241*t90 + t2434*t946) + var1[0];
  p_output1[1]=0. + t1269*t1576*t241 + t1475*t4891 + t1934*t4963 + t2409*t5011 + t2576*t5073 + t2862*t5262 + t3405*t5332 + t3718*t5367 + t3996*t5374 + t4133*t5417 + t4406*t5447 + t4524*t5487 + t4622*t5598 + t4733*t5613 + 0.0306*(t4613*t5598 + t4575*t5613) - 1.1312*(t4575*t5598 - 1.*t4613*t5613) - 0.1305*(-1.*t1076*t1576*t241 + t5011*t946) + var1[1];
  p_output1[2]=0. - 1.*t1269*t1479 + t1475*t1476*t241 + t1592*t1934*t241 + t2409*t5670 + t2576*t5679 + t2862*t5721 + t3405*t5732 + t3718*t5741 + t3996*t5750 + t4133*t5764 + t4406*t5778 + t4524*t5857 + t4622*t5880 + t4733*t5919 + 0.0306*(t4613*t5880 + t4575*t5919) - 1.1312*(t4575*t5880 - 1.*t4613*t5919) - 0.1305*(t1076*t1479 + t5670*t946) + var1[2];
}



void p_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
