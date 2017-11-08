/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_left_src.h"

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
  double t379;
  double t427;
  double t433;
  double t429;
  double t434;
  double t402;
  double t430;
  double t437;
  double t438;
  double t443;
  double t445;
  double t447;
  double t449;
  double t396;
  double t405;
  double t413;
  double t417;
  double t419;
  double t451;
  double t452;
  double t485;
  double t486;
  double t489;
  double t492;
  double t493;
  double t496;
  t379 = Cos(var1[3]);
  t427 = Cos(var1[5]);
  t433 = Sin(var1[4]);
  t429 = Sin(var1[3]);
  t434 = Sin(var1[5]);
  t402 = Cos(var1[6]);
  t430 = -1.*t427*t429;
  t437 = t379*t433*t434;
  t438 = t430 + t437;
  t443 = t379*t427*t433;
  t445 = t429*t434;
  t447 = t443 + t445;
  t449 = Sin(var1[6]);
  t396 = Cos(var1[4]);
  t405 = -1.*t402;
  t413 = 1. + t405;
  t417 = 0.135*t413;
  t419 = 0. + t417;
  t451 = -0.135*t449;
  t452 = 0. + t451;
  t485 = t379*t427;
  t486 = t429*t433*t434;
  t489 = t485 + t486;
  t492 = t427*t429*t433;
  t493 = -1.*t379*t434;
  t496 = t492 + t493;
  p_output1[0]=0. - 0.049*t379*t396 + t419*t438 - 0.09*(t402*t447 - 1.*t438*t449) + 0.135*(t402*t438 + t447*t449) + t447*t452 + var1[0];
  p_output1[1]=0. - 0.049*t396*t429 + t419*t489 + t452*t496 - 0.09*(-1.*t449*t489 + t402*t496) + 0.135*(t402*t489 + t449*t496) + var1[1];
  p_output1[2]=0. + 0.049*t433 + t396*t419*t434 + 0.135*(t396*t402*t434 + t396*t427*t449) - 0.09*(t396*t402*t427 - 1.*t396*t434*t449) + t396*t427*t452 + var1[2];
}



void p_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
