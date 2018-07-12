/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_left_src.h"

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
  double t686;
  double t1022;
  double t498;
  double t764;
  double t1053;
  double t442;
  double t1510;
  double t2585;
  double t1203;
  double t1238;
  double t1304;
  double t1013;
  double t1080;
  double t1122;
  double t2805;
  double t2166;
  double t2255;
  double t2292;
  double t1775;
  double t1787;
  double t2066;
  double t2975;
  double t2857;
  double t2894;
  double t2965;
  double t3158;
  double t3187;
  double t3193;
  double t3262;
  double t3316;
  double t3363;
  double t3725;
  double t3727;
  double t2826;
  double t2980;
  double t3049;
  double t3643;
  double t3645;
  double t3648;
  double t3652;
  double t3661;
  double t3665;
  double t3743;
  double t3748;
  double t3768;
  double t3815;
  double t3817;
  double t3823;
  double t3146;
  double t3209;
  double t3233;
  double t3252;
  double t3387;
  double t3405;
  t686 = Cos(var1[5]);
  t1022 = Sin(var1[3]);
  t498 = Cos(var1[3]);
  t764 = Sin(var1[4]);
  t1053 = Sin(var1[5]);
  t442 = Cos(var1[6]);
  t1510 = Sin(var1[6]);
  t2585 = Cos(var1[4]);
  t1203 = -1.*t686*t1022;
  t1238 = t498*t764*t1053;
  t1304 = t1203 + t1238;
  t1013 = t498*t686*t764;
  t1080 = t1022*t1053;
  t1122 = t1013 + t1080;
  t2805 = Cos(var1[7]);
  t2166 = t498*t686;
  t2255 = t1022*t764*t1053;
  t2292 = t2166 + t2255;
  t1775 = t686*t1022*t764;
  t1787 = -1.*t498*t1053;
  t2066 = t1775 + t1787;
  t2975 = Sin(var1[7]);
  t2857 = t442*t1304;
  t2894 = t1122*t1510;
  t2965 = t2857 + t2894;
  t3158 = t442*t2292;
  t3187 = t2066*t1510;
  t3193 = t3158 + t3187;
  t3262 = t2585*t442*t1053;
  t3316 = t2585*t686*t1510;
  t3363 = t3262 + t3316;
  t3725 = -1.*t2805;
  t3727 = 1. + t3725;
  t2826 = t498*t2585*t2805;
  t2980 = t2965*t2975;
  t3049 = t2826 + t2980;
  t3643 = -1.*t442;
  t3645 = 1. + t3643;
  t3648 = 0.135*t3645;
  t3652 = 0. + t3648;
  t3661 = -0.135*t1510;
  t3665 = 0. + t3661;
  t3743 = 0.135*t3727;
  t3748 = 0.049*t2975;
  t3768 = 0. + t3743 + t3748;
  t3815 = -0.049*t3727;
  t3817 = 0.135*t2975;
  t3823 = 0. + t3815 + t3817;
  t3146 = t2585*t2805*t1022;
  t3209 = t3193*t2975;
  t3233 = t3146 + t3209;
  t3252 = -1.*t2805*t764;
  t3387 = t3363*t2975;
  t3405 = t3252 + t3387;
  p_output1[0]=t1304*t1510 - 1.*t1122*t442;
  p_output1[1]=t1510*t2292 - 1.*t2066*t442;
  p_output1[2]=t1053*t1510*t2585 - 1.*t2585*t442*t686;
  p_output1[3]=0.;
  p_output1[4]=t3049;
  p_output1[5]=t3233;
  p_output1[6]=t3405;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2805*t2965 + t2585*t2975*t498;
  p_output1[9]=t1022*t2585*t2975 - 1.*t2805*t3193;
  p_output1[10]=-1.*t2805*t3363 - 1.*t2975*t764;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t3049 + t1304*t3652 + t1122*t3665 + t2965*t3768 - 0.09*(-1.*t1304*t1510 + t1122*t442) + t2585*t3823*t498 + 0.135*(t2805*t2965 - 1.*t2585*t2975*t498) + var1[0];
  p_output1[13]=0. + 0.135*(-1.*t1022*t2585*t2975 + t2805*t3193) - 0.049*t3233 + t2292*t3652 + t2066*t3665 + t3193*t3768 + t1022*t2585*t3823 - 0.09*(-1.*t1510*t2292 + t2066*t442) + var1[1];
  p_output1[14]=0. - 0.049*t3405 + t1053*t2585*t3652 + t3363*t3768 + t2585*t3665*t686 - 0.09*(-1.*t1053*t1510*t2585 + t2585*t442*t686) - 1.*t3823*t764 + 0.135*(t2805*t3363 + t2975*t764) + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
