/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:19 GMT-05:00
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
  double t334;
  double t814;
  double t698;
  double t720;
  double t940;
  double t1135;
  double t803;
  double t1016;
  double t1072;
  double t690;
  double t1151;
  double t1225;
  double t1260;
  double t1545;
  double t1129;
  double t1268;
  double t1345;
  double t686;
  double t1590;
  double t1715;
  double t1727;
  double t1781;
  double t1508;
  double t1728;
  double t1731;
  double t512;
  double t1783;
  double t1785;
  double t2026;
  double t299;
  double t212;
  double t419;
  double t2589;
  double t2595;
  double t2689;
  double t2908;
  double t2936;
  double t2942;
  double t2894;
  double t2986;
  double t3010;
  double t3103;
  double t3107;
  double t3152;
  double t3034;
  double t3194;
  double t3242;
  double t3296;
  double t3319;
  double t3326;
  double t3252;
  double t3327;
  double t3339;
  double t3372;
  double t3375;
  double t3378;
  double t3719;
  double t3722;
  double t3774;
  double t3829;
  double t3860;
  double t3882;
  double t3791;
  double t3899;
  double t3936;
  double t4002;
  double t4004;
  double t4046;
  double t3967;
  double t4051;
  double t4086;
  double t4091;
  double t4098;
  double t4107;
  double t4089;
  double t4123;
  double t4126;
  double t4200;
  double t4287;
  double t4322;
  double t1737;
  double t2244;
  double t2279;
  double t2322;
  double t2333;
  double t2432;
  double t3370;
  double t3407;
  double t3447;
  double t3510;
  double t3604;
  double t3632;
  double t4160;
  double t4375;
  double t4399;
  double t4598;
  double t4747;
  double t4839;
  double t5252;
  double t5254;
  double t5737;
  double t5748;
  double t5886;
  double t5894;
  double t6238;
  double t6265;
  double t5147;
  double t5194;
  double t5407;
  double t5491;
  double t5533;
  double t5539;
  double t5635;
  double t5259;
  double t5273;
  double t5306;
  double t5648;
  double t5679;
  double t5689;
  double t5758;
  double t5762;
  double t5779;
  double t5825;
  double t5831;
  double t5859;
  double t5922;
  double t5935;
  double t5942;
  double t6154;
  double t6169;
  double t6178;
  double t6271;
  double t6291;
  double t6293;
  double t6317;
  double t6324;
  double t6348;
  double t6438;
  double t6440;
  double t6515;
  double t6535;
  double t6541;
  double t6548;
  t334 = Cos(var1[1]);
  t814 = Cos(var1[3]);
  t698 = Cos(var1[2]);
  t720 = Sin(var1[3]);
  t940 = Sin(var1[2]);
  t1135 = Cos(var1[4]);
  t803 = -1.*t334*t698*t720;
  t1016 = -1.*t814*t334*t940;
  t1072 = t803 + t1016;
  t690 = Sin(var1[4]);
  t1151 = t814*t334*t698;
  t1225 = -1.*t334*t720*t940;
  t1260 = t1151 + t1225;
  t1545 = Cos(var1[5]);
  t1129 = t690*t1072;
  t1268 = t1135*t1260;
  t1345 = t1129 + t1268;
  t686 = Sin(var1[5]);
  t1590 = t1135*t1072;
  t1715 = -1.*t690*t1260;
  t1727 = t1590 + t1715;
  t1781 = Cos(var1[6]);
  t1508 = -1.*t686*t1345;
  t1728 = t1545*t1727;
  t1731 = t1508 + t1728;
  t512 = Sin(var1[6]);
  t1783 = t1545*t1345;
  t1785 = t686*t1727;
  t2026 = t1783 + t1785;
  t299 = Cos(var1[0]);
  t212 = Sin(var1[1]);
  t419 = Sin(var1[0]);
  t2589 = t299*t698*t212;
  t2595 = -1.*t419*t940;
  t2689 = t2589 + t2595;
  t2908 = -1.*t698*t419;
  t2936 = -1.*t299*t212*t940;
  t2942 = t2908 + t2936;
  t2894 = -1.*t720*t2689;
  t2986 = t814*t2942;
  t3010 = t2894 + t2986;
  t3103 = t814*t2689;
  t3107 = t720*t2942;
  t3152 = t3103 + t3107;
  t3034 = t690*t3010;
  t3194 = t1135*t3152;
  t3242 = t3034 + t3194;
  t3296 = t1135*t3010;
  t3319 = -1.*t690*t3152;
  t3326 = t3296 + t3319;
  t3252 = -1.*t686*t3242;
  t3327 = t1545*t3326;
  t3339 = t3252 + t3327;
  t3372 = t1545*t3242;
  t3375 = t686*t3326;
  t3378 = t3372 + t3375;
  t3719 = t698*t419*t212;
  t3722 = t299*t940;
  t3774 = t3719 + t3722;
  t3829 = t299*t698;
  t3860 = -1.*t419*t212*t940;
  t3882 = t3829 + t3860;
  t3791 = -1.*t720*t3774;
  t3899 = t814*t3882;
  t3936 = t3791 + t3899;
  t4002 = t814*t3774;
  t4004 = t720*t3882;
  t4046 = t4002 + t4004;
  t3967 = t690*t3936;
  t4051 = t1135*t4046;
  t4086 = t3967 + t4051;
  t4091 = t1135*t3936;
  t4098 = -1.*t690*t4046;
  t4107 = t4091 + t4098;
  t4089 = -1.*t686*t4086;
  t4123 = t1545*t4107;
  t4126 = t4089 + t4123;
  t4200 = t1545*t4086;
  t4287 = t686*t4107;
  t4322 = t4200 + t4287;
  t1737 = t512*t1731;
  t2244 = t1781*t2026;
  t2279 = t1737 + t2244;
  t2322 = t1781*t1731;
  t2333 = -1.*t512*t2026;
  t2432 = t2322 + t2333;
  t3370 = t512*t3339;
  t3407 = t1781*t3378;
  t3447 = t3370 + t3407;
  t3510 = t1781*t3339;
  t3604 = -1.*t512*t3378;
  t3632 = t3510 + t3604;
  t4160 = t512*t4126;
  t4375 = t1781*t4322;
  t4399 = t4160 + t4375;
  t4598 = t1781*t4126;
  t4747 = -1.*t512*t4322;
  t4839 = t4598 + t4747;
  t5252 = -1.*t814;
  t5254 = 1. + t5252;
  t5737 = -1.*t1135;
  t5748 = 1. + t5737;
  t5886 = -1.*t1545;
  t5894 = 1. + t5886;
  t6238 = -1.*t1781;
  t6265 = 1. + t6238;
  t5147 = -1.*t334;
  t5194 = 1. + t5147;
  t5407 = -1.*t698;
  t5491 = 1. + t5407;
  t5533 = -0.049*t5491;
  t5539 = -0.09*t940;
  t5635 = 0. + t5533 + t5539;
  t5259 = -0.049*t5254;
  t5273 = -0.21*t720;
  t5306 = 0. + t5259 + t5273;
  t5648 = -0.21*t5254;
  t5679 = 0.049*t720;
  t5689 = 0. + t5648 + t5679;
  t5758 = -0.2707*t5748;
  t5762 = 0.0016*t690;
  t5779 = 0. + t5758 + t5762;
  t5825 = -0.0016*t5748;
  t5831 = -0.2707*t690;
  t5859 = 0. + t5825 + t5831;
  t5922 = 0.0184*t5894;
  t5935 = -0.7055*t686;
  t5942 = 0. + t5922 + t5935;
  t6154 = -0.7055*t5894;
  t6169 = -0.0184*t686;
  t6178 = 0. + t6154 + t6169;
  t6271 = -1.1135*t6265;
  t6291 = 0.0216*t512;
  t6293 = 0. + t6271 + t6291;
  t6317 = -0.0216*t6265;
  t6324 = -1.1135*t512;
  t6348 = 0. + t6317 + t6324;
  t6438 = 0.135*t5194;
  t6440 = 0.049*t212;
  t6515 = 0. + t6438 + t6440;
  t6535 = -0.09*t5491;
  t6541 = 0.049*t940;
  t6548 = 0. + t6535 + t6541;
  p_output1[0]=0. + t212;
  p_output1[1]=0. + t299*t334;
  p_output1[2]=0. + t334*t419;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t2279 + 0.766044*t2432;
  p_output1[5]=0. - 0.642788*t3447 - 0.766044*t3632;
  p_output1[6]=0. - 0.642788*t4399 - 0.766044*t4839;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t2279 + 0.642788*t2432;
  p_output1[9]=0. + 0.766044*t3447 - 0.642788*t3632;
  p_output1[10]=0. + 0.766044*t4399 - 0.642788*t4839;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.004500000000000004*t212 + 0.0306*t2279 - 1.1312*t2432 - 0.049*t5194 + t334*t5635 + t1072*t5779 + t1260*t5859 + t1345*t5942 + t1727*t6178 + t1731*t6293 + t2026*t6348 + t334*t5306*t698 - 1.*t334*t5689*t940;
  p_output1[13]=0. - 0.135*(1. - 1.*t299) - 0.1305*t299*t334 - 0.0306*t3447 + 1.1312*t3632 - 1.*t2689*t5306 - 1.*t212*t299*t5635 - 1.*t2942*t5689 - 1.*t3010*t5779 - 1.*t3152*t5859 - 1.*t3242*t5942 - 1.*t3326*t6178 - 1.*t3339*t6293 - 1.*t3378*t6348 - 1.*t299*t6515 + t419*t6548;
  p_output1[14]=-0.07996 + 0.135*t419 - 0.1305*t334*t419 - 0.0306*t4399 + 1.1312*t4839 - 1.*t3774*t5306 - 1.*t212*t419*t5635 - 1.*t3882*t5689 - 1.*t3936*t5779 - 1.*t4046*t5859 - 1.*t4086*t5942 - 1.*t4107*t6178 - 1.*t4126*t6293 - 1.*t4322*t6348 - 1.*t419*t6515 - 1.*t299*t6548;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
