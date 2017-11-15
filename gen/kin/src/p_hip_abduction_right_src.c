/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_right_src.h"

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
  double t430;
  double t6357;
  double t6440;
  double t6364;
  double t6488;
  double t2271;
  double t6438;
  double t6502;
  double t6504;
  double t6508;
  double t6516;
  double t6520;
  double t6521;
  double t1261;
  double t3617;
  double t4186;
  double t6510;
  double t6511;
  double t6513;
  double t6515;
  double t6536;
  double t6537;
  double t6538;
  double t6540;
  double t6541;
  double t6542;
  t430 = Cos(var1[3]);
  t6357 = Cos(var1[5]);
  t6440 = Sin(var1[3]);
  t6364 = Sin(var1[4]);
  t6488 = Sin(var1[5]);
  t2271 = Sin(var1[13]);
  t6438 = t430*t6357*t6364;
  t6502 = t6440*t6488;
  t6504 = t6438 + t6502;
  t6508 = Cos(var1[13]);
  t6516 = -1.*t6357*t6440;
  t6520 = t430*t6364*t6488;
  t6521 = t6516 + t6520;
  t1261 = Cos(var1[4]);
  t3617 = 0.135*t2271;
  t4186 = 0. + t3617;
  t6510 = -1.*t6508;
  t6511 = 1. + t6510;
  t6513 = -0.135*t6511;
  t6515 = 0. + t6513;
  t6536 = t6357*t6440*t6364;
  t6537 = -1.*t430*t6488;
  t6538 = t6536 + t6537;
  t6540 = t430*t6357;
  t6541 = t6440*t6364*t6488;
  t6542 = t6540 + t6541;
  p_output1[0]=0. - 0.049*t1261*t430 + t4186*t6504 + t6515*t6521 - 0.135*(t2271*t6504 + t6508*t6521) + var1[0];
  p_output1[1]=0. - 0.049*t1261*t6440 + t4186*t6538 + t6515*t6542 - 0.135*(t2271*t6538 + t6508*t6542) + var1[1];
  p_output1[2]=0. + t1261*t4186*t6357 + 0.049*t6364 - 0.135*(t1261*t2271*t6357 + t1261*t6488*t6508) + t1261*t6488*t6515 + var1[2];
}



void p_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
