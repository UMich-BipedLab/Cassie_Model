/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:28 GMT-05:00
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
  double t12;
  double t6427;
  double t6488;
  double t6428;
  double t6489;
  double t6349;
  double t6487;
  double t6493;
  double t6495;
  double t6501;
  double t6510;
  double t6513;
  double t6514;
  double t96;
  double t6358;
  double t6362;
  double t6505;
  double t6506;
  double t6507;
  double t6509;
  double t6531;
  double t6533;
  double t6539;
  double t6542;
  double t6543;
  double t6544;
  t12 = Cos(var1[3]);
  t6427 = Cos(var1[5]);
  t6488 = Sin(var1[3]);
  t6428 = Sin(var1[4]);
  t6489 = Sin(var1[5]);
  t6349 = Sin(var1[13]);
  t6487 = t12*t6427*t6428;
  t6493 = t6488*t6489;
  t6495 = t6487 + t6493;
  t6501 = Cos(var1[13]);
  t6510 = -1.*t6427*t6488;
  t6513 = t12*t6428*t6489;
  t6514 = t6510 + t6513;
  t96 = Cos(var1[4]);
  t6358 = 0.135*t6349;
  t6362 = 0. + t6358;
  t6505 = -1.*t6501;
  t6506 = 1. + t6505;
  t6507 = -0.135*t6506;
  t6509 = 0. + t6507;
  t6531 = t6427*t6488*t6428;
  t6533 = -1.*t12*t6489;
  t6539 = t6531 + t6533;
  t6542 = t12*t6427;
  t6543 = t6488*t6428*t6489;
  t6544 = t6542 + t6543;
  p_output1[0]=0. + t6362*t6495 + t6509*t6514 - 0.135*(t6349*t6495 + t6501*t6514) - 0.049*t12*t96 + var1[0];
  p_output1[1]=0. + t6362*t6539 + t6509*t6544 - 0.135*(t6349*t6539 + t6501*t6544) - 0.049*t6488*t96 + var1[1];
  p_output1[2]=0. + 0.049*t6428 + t6362*t6427*t96 + t6489*t6509*t96 - 0.135*(t6349*t6427*t96 + t6489*t6501*t96) + var1[2];
}



void p_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
