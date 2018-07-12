/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_right_src.h"

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
  double t641;
  double t937;
  double t491;
  double t847;
  double t959;
  double t1174;
  double t852;
  double t985;
  double t1114;
  double t463;
  double t1608;
  double t1672;
  double t1678;
  double t1840;
  double t1134;
  double t1736;
  double t1753;
  double t450;
  double t1937;
  double t2052;
  double t2070;
  double t2076;
  double t2119;
  double t2206;
  double t2211;
  double t2215;
  double t2221;
  double t2330;
  double t1797;
  double t2264;
  double t2285;
  double t444;
  double t2370;
  double t2400;
  double t2452;
  double t299;
  double t2836;
  double t2837;
  double t2838;
  double t2848;
  double t2899;
  double t2920;
  double t2839;
  double t3014;
  double t3019;
  double t3175;
  double t3194;
  double t3265;
  double t3336;
  double t3365;
  double t3369;
  double t2724;
  double t3092;
  double t3410;
  double t3417;
  double t3453;
  double t3472;
  double t3535;
  double t3832;
  double t3834;
  double t3895;
  double t3948;
  double t3981;
  double t3995;
  double t4001;
  double t4034;
  double t4066;
  double t3912;
  double t4068;
  double t4083;
  double t4154;
  double t4197;
  double t4207;
  double t2307;
  double t2515;
  double t2655;
  double t2725;
  double t2754;
  double t2797;
  double t3423;
  double t3537;
  double t3542;
  double t3702;
  double t3726;
  double t3747;
  double t4099;
  double t4282;
  double t4301;
  double t4323;
  double t4362;
  double t4365;
  double t4859;
  double t4936;
  double t5324;
  double t5331;
  double t5666;
  double t5682;
  double t5839;
  double t5841;
  double t4417;
  double t4483;
  double t4509;
  double t4955;
  double t4988;
  double t5046;
  double t5078;
  double t5147;
  double t5215;
  double t5216;
  double t5219;
  double t5221;
  double t5259;
  double t5282;
  double t5296;
  double t5409;
  double t5432;
  double t5493;
  double t5594;
  double t5610;
  double t5620;
  double t5694;
  double t5720;
  double t5748;
  double t5803;
  double t5813;
  double t5815;
  double t5853;
  double t5855;
  double t5888;
  double t5905;
  double t5914;
  double t5927;
  double t4521;
  double t4541;
  double t4582;
  double t4619;
  double t4675;
  double t4712;
  t641 = Cos(var1[5]);
  t937 = Sin(var1[3]);
  t491 = Cos(var1[3]);
  t847 = Sin(var1[4]);
  t959 = Sin(var1[5]);
  t1174 = Sin(var1[13]);
  t852 = t491*t641*t847;
  t985 = t937*t959;
  t1114 = t852 + t985;
  t463 = Cos(var1[13]);
  t1608 = -1.*t641*t937;
  t1672 = t491*t847*t959;
  t1678 = t1608 + t1672;
  t1840 = Cos(var1[15]);
  t1134 = t463*t1114;
  t1736 = -1.*t1174*t1678;
  t1753 = t1134 + t1736;
  t450 = Sin(var1[15]);
  t1937 = Cos(var1[14]);
  t2052 = Cos(var1[4]);
  t2070 = t1937*t491*t2052;
  t2076 = Sin(var1[14]);
  t2119 = t1174*t1114;
  t2206 = t463*t1678;
  t2211 = t2119 + t2206;
  t2215 = t2076*t2211;
  t2221 = t2070 + t2215;
  t2330 = Cos(var1[16]);
  t1797 = t450*t1753;
  t2264 = t1840*t2221;
  t2285 = t1797 + t2264;
  t444 = Sin(var1[16]);
  t2370 = t1840*t1753;
  t2400 = -1.*t450*t2221;
  t2452 = t2370 + t2400;
  t299 = Cos(var1[17]);
  t2836 = t641*t937*t847;
  t2837 = -1.*t491*t959;
  t2838 = t2836 + t2837;
  t2848 = t491*t641;
  t2899 = t937*t847*t959;
  t2920 = t2848 + t2899;
  t2839 = t463*t2838;
  t3014 = -1.*t1174*t2920;
  t3019 = t2839 + t3014;
  t3175 = t1937*t2052*t937;
  t3194 = t1174*t2838;
  t3265 = t463*t2920;
  t3336 = t3194 + t3265;
  t3365 = t2076*t3336;
  t3369 = t3175 + t3365;
  t2724 = Sin(var1[17]);
  t3092 = t450*t3019;
  t3410 = t1840*t3369;
  t3417 = t3092 + t3410;
  t3453 = t1840*t3019;
  t3472 = -1.*t450*t3369;
  t3535 = t3453 + t3472;
  t3832 = t463*t2052*t641;
  t3834 = -1.*t2052*t1174*t959;
  t3895 = t3832 + t3834;
  t3948 = -1.*t1937*t847;
  t3981 = t2052*t641*t1174;
  t3995 = t463*t2052*t959;
  t4001 = t3981 + t3995;
  t4034 = t2076*t4001;
  t4066 = t3948 + t4034;
  t3912 = t450*t3895;
  t4068 = t1840*t4066;
  t4083 = t3912 + t4068;
  t4154 = t1840*t3895;
  t4197 = -1.*t450*t4066;
  t4207 = t4154 + t4197;
  t2307 = -1.*t444*t2285;
  t2515 = t2330*t2452;
  t2655 = t2307 + t2515;
  t2725 = t2330*t2285;
  t2754 = t444*t2452;
  t2797 = t2725 + t2754;
  t3423 = -1.*t444*t3417;
  t3537 = t2330*t3535;
  t3542 = t3423 + t3537;
  t3702 = t2330*t3417;
  t3726 = t444*t3535;
  t3747 = t3702 + t3726;
  t4099 = -1.*t444*t4083;
  t4282 = t2330*t4207;
  t4301 = t4099 + t4282;
  t4323 = t2330*t4083;
  t4362 = t444*t4207;
  t4365 = t4323 + t4362;
  t4859 = -1.*t1937;
  t4936 = 1. + t4859;
  t5324 = -1.*t1840;
  t5331 = 1. + t5324;
  t5666 = -1.*t2330;
  t5682 = 1. + t5666;
  t5839 = -1.*t299;
  t5841 = 1. + t5839;
  t4417 = t2724*t2655;
  t4483 = t299*t2797;
  t4509 = t4417 + t4483;
  t4955 = -0.049*t4936;
  t4988 = -0.135*t2076;
  t5046 = 0. + t4955 + t4988;
  t5078 = 0.135*t1174;
  t5147 = 0. + t5078;
  t5215 = -1.*t463;
  t5216 = 1. + t5215;
  t5219 = -0.135*t5216;
  t5221 = 0. + t5219;
  t5259 = -0.135*t4936;
  t5282 = 0.049*t2076;
  t5296 = 0. + t5259 + t5282;
  t5409 = -0.09*t5331;
  t5432 = 0.049*t450;
  t5493 = 0. + t5409 + t5432;
  t5594 = -0.049*t5331;
  t5610 = -0.09*t450;
  t5620 = 0. + t5594 + t5610;
  t5694 = -0.049*t5682;
  t5720 = -0.21*t444;
  t5748 = 0. + t5694 + t5720;
  t5803 = -0.21*t5682;
  t5813 = 0.049*t444;
  t5815 = 0. + t5803 + t5813;
  t5853 = -0.2707*t5841;
  t5855 = 0.0016*t2724;
  t5888 = 0. + t5853 + t5855;
  t5905 = -0.0016*t5841;
  t5914 = -0.2707*t2724;
  t5927 = 0. + t5905 + t5914;
  t4521 = t2724*t3542;
  t4541 = t299*t3747;
  t4582 = t4521 + t4541;
  t4619 = t2724*t4301;
  t4675 = t299*t4365;
  t4712 = t4619 + t4675;
  p_output1[0]=t2724*t2797 - 1.*t2655*t299;
  p_output1[1]=-1.*t299*t3542 + t2724*t3747;
  p_output1[2]=-1.*t299*t4301 + t2724*t4365;
  p_output1[3]=0.;
  p_output1[4]=t4509;
  p_output1[5]=t4582;
  p_output1[6]=t4712;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1937*t2211 + t2052*t2076*t491;
  p_output1[9]=-1.*t1937*t3336 + t2052*t2076*t937;
  p_output1[10]=-1.*t1937*t4001 - 1.*t2076*t847;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(-1.*t2724*t2797 + t2655*t299) - 0.0016*t4509 - 0.1305*(t1937*t2211 - 1.*t2052*t2076*t491) + t2052*t491*t5046 + t1114*t5147 + t1678*t5221 + t2211*t5296 + t1753*t5493 + t2221*t5620 + t2285*t5748 + t2452*t5815 + t2655*t5888 + t2797*t5927 + var1[0];
  p_output1[13]=0. - 0.2707*(t299*t3542 - 1.*t2724*t3747) - 0.0016*t4582 + t2838*t5147 + t2920*t5221 + t3336*t5296 + t3019*t5493 + t3369*t5620 + t3417*t5748 + t3535*t5815 + t3542*t5888 + t3747*t5927 + t2052*t5046*t937 - 0.1305*(t1937*t3336 - 1.*t2052*t2076*t937) + var1[1];
  p_output1[14]=0. - 0.2707*(t299*t4301 - 1.*t2724*t4365) - 0.0016*t4712 + t4001*t5296 + t3895*t5493 + t4066*t5620 + t4083*t5748 + t4207*t5815 + t4301*t5888 + t4365*t5927 + t2052*t5147*t641 - 1.*t5046*t847 - 0.1305*(t1937*t4001 + t2076*t847) + t2052*t5221*t959 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
