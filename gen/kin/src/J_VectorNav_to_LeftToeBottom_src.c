/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_LeftToeBottom_src.h"

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
  double t404;
  double t465;
  double t517;
  double t452;
  double t493;
  double t495;
  double t342;
  double t518;
  double t560;
  double t633;
  double t678;
  double t507;
  double t640;
  double t642;
  double t334;
  double t810;
  double t867;
  double t892;
  double t1002;
  double t645;
  double t893;
  double t969;
  double t266;
  double t1037;
  double t1096;
  double t1135;
  double t253;
  double t257;
  double t1463;
  double t1479;
  double t1517;
  double t1395;
  double t1534;
  double t1559;
  double t1846;
  double t1855;
  double t1803;
  double t1856;
  double t1895;
  double t1936;
  double t2009;
  double t2066;
  double t1302;
  double t1935;
  double t2091;
  double t2142;
  double t2171;
  double t2203;
  double t2242;
  double t2244;
  double t2255;
  double t2256;
  double t2302;
  double t2303;
  double t1243;
  double t1269;
  double t1293;
  double t971;
  double t1188;
  double t1204;
  double t2740;
  double t2775;
  double t2663;
  double t2678;
  double t2837;
  double t2845;
  double t2869;
  double t2899;
  double t2953;
  double t2982;
  double t3018;
  double t3019;
  double t2605;
  double t2610;
  double t2722;
  double t2730;
  double t2907;
  double t3035;
  double t3047;
  double t3124;
  double t3128;
  double t3154;
  double t3344;
  double t3381;
  double t2473;
  double t2500;
  double t2633;
  double t2662;
  double t3064;
  double t3411;
  double t3416;
  double t3467;
  double t3482;
  double t3485;
  double t3486;
  double t3672;
  double t1210;
  double t1323;
  double t1363;
  double t1369;
  double t1380;
  double t238;
  double t2358;
  double t2434;
  double t3769;
  double t3782;
  double t3787;
  double t3788;
  double t3930;
  double t2575;
  double t2596;
  double t3429;
  double t3716;
  double t3735;
  double t4046;
  double t4162;
  double t4195;
  double t4202;
  double t4291;
  double t4310;
  double t4361;
  double t2456;
  double t3738;
  double t3768;
  double t3973;
  double t4002;
  double t4167;
  double t4184;
  double t4365;
  double t4405;
  double t4486;
  double t4536;
  double t4537;
  double t4548;
  double t4607;
  double t2325;
  double t2333;
  double t2338;
  double t4435;
  double t4442;
  double t252;
  double t2308;
  double t4673;
  double t4683;
  double t4779;
  double t4952;
  double t5033;
  double t4042;
  double t4814;
  t404 = Cos(var1[6]);
  t465 = Sin(var1[6]);
  t517 = Cos(var1[5]);
  t452 = 0.642788*t404;
  t493 = -0.766044*t465;
  t495 = t452 + t493;
  t342 = Sin(var1[5]);
  t518 = -0.766044*t404;
  t560 = -0.642788*t465;
  t633 = t518 + t560;
  t678 = Cos(var1[4]);
  t507 = -1.*t342*t495;
  t640 = t517*t633;
  t642 = 0. + t507 + t640;
  t334 = Sin(var1[4]);
  t810 = t517*t495;
  t867 = t342*t633;
  t892 = 0. + t810 + t867;
  t1002 = Sin(var1[3]);
  t645 = t334*t642;
  t893 = t678*t892;
  t969 = 0. + t645 + t893;
  t266 = Cos(var1[3]);
  t1037 = t678*t642;
  t1096 = -1.*t334*t892;
  t1135 = 0. + t1037 + t1096;
  t253 = Cos(var1[1]);
  t257 = Cos(var1[2]);
  t1463 = -0.642788*t404;
  t1479 = 0.766044*t465;
  t1517 = t1463 + t1479;
  t1395 = -1.*t342*t633;
  t1534 = t517*t1517;
  t1559 = 0. + t1395 + t1534;
  t1846 = t342*t1517;
  t1855 = 0. + t640 + t1846;
  t1803 = t334*t1559;
  t1856 = t678*t1855;
  t1895 = 0. + t1803 + t1856;
  t1936 = t678*t1559;
  t2009 = -1.*t334*t1855;
  t2066 = 0. + t1936 + t2009;
  t1302 = Sin(var1[2]);
  t1935 = t266*t1895;
  t2091 = t1002*t2066;
  t2142 = 0. + t1935 + t2091;
  t2171 = t257*t2142;
  t2203 = -1.*t1002*t1895;
  t2242 = t266*t2066;
  t2244 = 0. + t2203 + t2242;
  t2255 = t2244*t1302;
  t2256 = 0. + t2171 + t2255;
  t2302 = t253*t2256;
  t2303 = 0. + t2302;
  t1243 = -1.*t1002*t969;
  t1269 = t266*t1135;
  t1293 = 0. + t1243 + t1269;
  t971 = t266*t969;
  t1188 = t1002*t1135;
  t1204 = 0. + t971 + t1188;
  t2740 = -1.*t404;
  t2775 = 1. + t2740;
  t2663 = -1.*t517;
  t2678 = 1. + t2663;
  t2837 = 1.0335*t2775;
  t2845 = 1.0512*t404;
  t2869 = -0.052199999999999996*t465;
  t2899 = 0. + t2837 + t2845 + t2869;
  t2953 = -0.0532*t2775;
  t2982 = -0.001*t404;
  t3018 = 0.017699999999999827*t465;
  t3019 = 0. + t2953 + t2982 + t3018;
  t2605 = -1.*t678;
  t2610 = 1. + t2605;
  t2722 = -0.0132*t2678;
  t2730 = -0.6255*t342;
  t2907 = t342*t2899;
  t3035 = t517*t3019;
  t3047 = 0. + t2722 + t2730 + t2907 + t3035;
  t3124 = 0.6255*t2678;
  t3128 = -0.0132*t342;
  t3154 = t517*t2899;
  t3344 = -1.*t342*t3019;
  t3381 = 0. + t3124 + t3128 + t3154 + t3344;
  t2473 = -1.*t266;
  t2500 = 1. + t2473;
  t2633 = 0.1907*t2610;
  t2662 = -0.0332*t334;
  t3064 = -1.*t334*t3047;
  t3411 = t678*t3381;
  t3416 = 0. + t2633 + t2662 + t3064 + t3411;
  t3467 = -0.0332*t2610;
  t3482 = -0.1907*t334;
  t3485 = t678*t3047;
  t3486 = t334*t3381;
  t3672 = 0. + t3467 + t3482 + t3485 + t3486;
  t1210 = t257*t1204;
  t1323 = t1293*t1302;
  t1363 = 0. + t1210 + t1323;
  t1369 = t253*t1363;
  t1380 = 0. + t1369;
  t238 = Sin(var1[1]);
  t2358 = -1.*t257;
  t2434 = 1. + t2358;
  t3769 = -0.0806*t2500;
  t3782 = -0.13*t1002;
  t3787 = t1002*t3416;
  t3788 = t266*t3672;
  t3930 = 0. + t3769 + t3782 + t3787 + t3788;
  t2575 = 0.13*t2500;
  t2596 = -0.0806*t1002;
  t3429 = t266*t3416;
  t3716 = -1.*t1002*t3672;
  t3735 = 0. + t2575 + t2596 + t3429 + t3716;
  t4046 = -1.*t253;
  t4162 = 1. + t4046;
  t4195 = -0.0806*t2434;
  t4202 = t257*t3930;
  t4291 = -0.01*t1302;
  t4310 = t3735*t1302;
  t4361 = 0. + t4195 + t4202 + t4291 + t4310;
  t2456 = 0.01*t2434;
  t3738 = t257*t3735;
  t3768 = -0.0806*t1302;
  t3973 = -1.*t3930*t1302;
  t4002 = 0. + t2456 + t3738 + t3768 + t3973;
  t4167 = -0.0806*t4162;
  t4184 = 0.004500000000000004*t238;
  t4365 = t253*t4361;
  t4405 = 0. + t4167 + t4184 + t4365;
  t4486 = -0.135*t4162;
  t4536 = -0.1305*t253;
  t4537 = -0.0806*t238;
  t4548 = -1.*t238*t4361;
  t4607 = 0. + t4486 + t4536 + t4537 + t4548;
  t2325 = t257*t1293;
  t2333 = -1.*t1204*t1302;
  t2338 = 0. + t2325 + t2333;
  t4435 = -1.*t238*t1363;
  t4442 = 0. + t4435;
  t252 = 0. + t238;
  t2308 = 0. + t253;
  t4673 = t257*t2244;
  t4683 = -1.*t2142*t1302;
  t4779 = 0. + t4673 + t4683;
  t4952 = -1.*t238*t2256;
  t5033 = 0. + t4952;
  t4042 = -1.*t2338*t4002;
  t4814 = t4002*t4779;
  p_output1[0]=t252;
  p_output1[1]=t1380;
  p_output1[2]=t2303;
  p_output1[3]=0. - 0.08*t2308 + t2303*(t4042 - 1.*t1380*t4405 - 1.*t4442*t4607) + t1380*(t2303*t4405 + t4814 + t4607*t5033);
  p_output1[4]=0.135*t2338 - 0.08*t4442 + t2303*(0. + t252*t4405 + t2308*t4607) + t252*(-1.*t2303*t4405 - 1.*t4002*t4779 - 1.*t4607*t5033);
  p_output1[5]=t1380*(0. - 1.*t252*t4405 - 1.*t2308*t4607) + t252*(t2338*t4002 + t1380*t4405 + t4442*t4607) + 0.135*t4779 - 0.08*t5033;
  p_output1[6]=0.;
  p_output1[7]=0. + t1204*t1302 - 1.*t1293*t257;
  p_output1[8]=0. + t1302*t2142 - 1.*t2244*t257;
  p_output1[9]=-0.0806 - 1.*(0. + t4042 - 1.*t1363*t4361)*t4779 - 1.*t2338*(0. + t2256*t4361 + t4814);
  p_output1[10]=0. + 0.135*t1363 + 0.1305*t4779;
  p_output1[11]=0. + 0.135*t2256 - 0.1305*t2338;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=0.;
  p_output1[16]=0. - 0.01*t1204 - 0.0806*t1293 - 1.*t2244*t3735 - 1.*t2142*t3930;
  p_output1[17]=0. - 0.01*t2142 - 0.0806*t2244 + t1293*t3735 + t1204*t3930;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
  p_output1[21]=0.;
  p_output1[22]=0. - 0.0806*t1135 - 1.*t2066*t3416 - 1.*t1895*t3672 - 0.13*t969;
  p_output1[23]=0. - 0.13*t1895 - 0.0806*t2066 + t1135*t3416 + t3672*t969;
  p_output1[24]=1.;
  p_output1[25]=0.;
  p_output1[26]=0.;
  p_output1[27]=0.;
  p_output1[28]=0. - 1.*t1855*t3047 - 1.*t1559*t3381 - 0.0332*t642 - 0.1907*t892;
  p_output1[29]=0. - 0.0332*t1559 - 0.1907*t1855 + t3381*t642 + t3047*t892;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0. - 1.*t1517*t2899 - 0.6255*t495 - 0.0132*t633 - 1.*t3019*t633;
  p_output1[35]=0. - 0.0132*t1517 + t3019*t495 - 0.6255*t633 + t2899*t633;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=0.05136484439999989;
  p_output1[41]=0.01999455480000023;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void J_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
