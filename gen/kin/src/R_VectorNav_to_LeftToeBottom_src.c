/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom_src.h"

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
  double t442;
  double t1909;
  double t1737;
  double t1785;
  double t1972;
  double t2432;
  double t1885;
  double t1973;
  double t1987;
  double t1658;
  double t2491;
  double t2515;
  double t2532;
  double t2652;
  double t2050;
  double t2533;
  double t2589;
  double t1647;
  double t2781;
  double t2787;
  double t2873;
  double t2978;
  double t2651;
  double t2950;
  double t2958;
  double t1241;
  double t2986;
  double t2988;
  double t3002;
  double t436;
  double t208;
  double t714;
  double t3282;
  double t3327;
  double t3372;
  double t3393;
  double t3407;
  double t3424;
  double t3375;
  double t3499;
  double t3534;
  double t3553;
  double t3608;
  double t3625;
  double t3539;
  double t3666;
  double t3673;
  double t3719;
  double t3736;
  double t3742;
  double t3711;
  double t3798;
  double t3829;
  double t3852;
  double t3892;
  double t4002;
  double t4288;
  double t4297;
  double t4301;
  double t4305;
  double t4319;
  double t4321;
  double t4302;
  double t4323;
  double t4325;
  double t4327;
  double t4328;
  double t4331;
  double t4326;
  double t4339;
  double t4345;
  double t4352;
  double t4353;
  double t4355;
  double t4347;
  double t4367;
  double t4376;
  double t4388;
  double t4399;
  double t4412;
  double t2973;
  double t3061;
  double t3074;
  double t3137;
  double t3198;
  double t3222;
  double t3839;
  double t4016;
  double t4028;
  double t4200;
  double t4271;
  double t4276;
  double t4382;
  double t4416;
  double t4421;
  double t4430;
  double t4435;
  double t4438;
  t442 = Cos(var1[1]);
  t1909 = Cos(var1[3]);
  t1737 = Cos(var1[2]);
  t1785 = Sin(var1[3]);
  t1972 = Sin(var1[2]);
  t2432 = Cos(var1[4]);
  t1885 = -1.*t442*t1737*t1785;
  t1973 = -1.*t1909*t442*t1972;
  t1987 = t1885 + t1973;
  t1658 = Sin(var1[4]);
  t2491 = t1909*t442*t1737;
  t2515 = -1.*t442*t1785*t1972;
  t2532 = t2491 + t2515;
  t2652 = Cos(var1[5]);
  t2050 = t1658*t1987;
  t2533 = t2432*t2532;
  t2589 = t2050 + t2533;
  t1647 = Sin(var1[5]);
  t2781 = t2432*t1987;
  t2787 = -1.*t1658*t2532;
  t2873 = t2781 + t2787;
  t2978 = Cos(var1[6]);
  t2651 = -1.*t1647*t2589;
  t2950 = t2652*t2873;
  t2958 = t2651 + t2950;
  t1241 = Sin(var1[6]);
  t2986 = t2652*t2589;
  t2988 = t1647*t2873;
  t3002 = t2986 + t2988;
  t436 = Cos(var1[0]);
  t208 = Sin(var1[1]);
  t714 = Sin(var1[0]);
  t3282 = t436*t1737*t208;
  t3327 = -1.*t714*t1972;
  t3372 = t3282 + t3327;
  t3393 = -1.*t1737*t714;
  t3407 = -1.*t436*t208*t1972;
  t3424 = t3393 + t3407;
  t3375 = -1.*t1785*t3372;
  t3499 = t1909*t3424;
  t3534 = t3375 + t3499;
  t3553 = t1909*t3372;
  t3608 = t1785*t3424;
  t3625 = t3553 + t3608;
  t3539 = t1658*t3534;
  t3666 = t2432*t3625;
  t3673 = t3539 + t3666;
  t3719 = t2432*t3534;
  t3736 = -1.*t1658*t3625;
  t3742 = t3719 + t3736;
  t3711 = -1.*t1647*t3673;
  t3798 = t2652*t3742;
  t3829 = t3711 + t3798;
  t3852 = t2652*t3673;
  t3892 = t1647*t3742;
  t4002 = t3852 + t3892;
  t4288 = t1737*t714*t208;
  t4297 = t436*t1972;
  t4301 = t4288 + t4297;
  t4305 = t436*t1737;
  t4319 = -1.*t714*t208*t1972;
  t4321 = t4305 + t4319;
  t4302 = -1.*t1785*t4301;
  t4323 = t1909*t4321;
  t4325 = t4302 + t4323;
  t4327 = t1909*t4301;
  t4328 = t1785*t4321;
  t4331 = t4327 + t4328;
  t4326 = t1658*t4325;
  t4339 = t2432*t4331;
  t4345 = t4326 + t4339;
  t4352 = t2432*t4325;
  t4353 = -1.*t1658*t4331;
  t4355 = t4352 + t4353;
  t4347 = -1.*t1647*t4345;
  t4367 = t2652*t4355;
  t4376 = t4347 + t4367;
  t4388 = t2652*t4345;
  t4399 = t1647*t4355;
  t4412 = t4388 + t4399;
  t2973 = t1241*t2958;
  t3061 = t2978*t3002;
  t3074 = t2973 + t3061;
  t3137 = t2978*t2958;
  t3198 = -1.*t1241*t3002;
  t3222 = t3137 + t3198;
  t3839 = t1241*t3829;
  t4016 = t2978*t4002;
  t4028 = t3839 + t4016;
  t4200 = t2978*t3829;
  t4271 = -1.*t1241*t4002;
  t4276 = t4200 + t4271;
  t4382 = t1241*t4376;
  t4416 = t2978*t4412;
  t4421 = t4382 + t4416;
  t4430 = t2978*t4376;
  t4435 = -1.*t1241*t4412;
  t4438 = t4430 + t4435;
  p_output1[0]=0. + t208;
  p_output1[1]=0. + t436*t442;
  p_output1[2]=0. + t442*t714;
  p_output1[3]=0. + 0.642788*t3074 + 0.766044*t3222;
  p_output1[4]=0. - 0.642788*t4028 - 0.766044*t4276;
  p_output1[5]=0. - 0.642788*t4421 - 0.766044*t4438;
  p_output1[6]=0. - 0.766044*t3074 + 0.642788*t3222;
  p_output1[7]=0. + 0.766044*t4028 - 0.642788*t4276;
  p_output1[8]=0. + 0.766044*t4421 - 0.642788*t4438;
}



void R_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
