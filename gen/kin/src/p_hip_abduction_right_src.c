/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:26 GMT-05:00
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
  double t5662;
  double t5664;
  double t5775;
  double t5773;
  double t5778;
  double t5780;
  t5662 = Cos(var1[3]);
  t5664 = Cos(var1[4]);
  t5775 = Sin(var1[3]);
  t5773 = Cos(var1[5]);
  t5778 = Sin(var1[4]);
  t5780 = Sin(var1[5]);
  p_output1[0]=-0.049*t5662*t5664 - 0.135*(-1.*t5773*t5775 + t5662*t5778*t5780) + var1[0];
  p_output1[1]=-0.049*t5664*t5775 - 0.135*(t5662*t5773 + t5775*t5778*t5780) + var1[1];
  p_output1[2]=0.049*t5778 - 0.135*t5664*t5780 + var1[2];
}



void p_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
