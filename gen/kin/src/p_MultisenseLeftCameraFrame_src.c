/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseLeftCameraFrame_src.h"

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
  double t1456;
  double t3038;
  double t3375;
  double t3151;
  double t3389;
  double t1579;
  t1456 = Cos(var1[3]);
  t3038 = Cos(var1[5]);
  t3375 = Sin(var1[3]);
  t3151 = Sin(var1[4]);
  t3389 = Sin(var1[5]);
  t1579 = Cos(var1[4]);
  p_output1[0]=0.052*t1456*t1579 + 0.035*(-1.*t3038*t3375 + t1456*t3151*t3389) + 0.25*(t1456*t3038*t3151 + t3375*t3389) + var1[0];
  p_output1[1]=0.052*t1579*t3375 + 0.25*(t3038*t3151*t3375 - 1.*t1456*t3389) + 0.035*(t1456*t3038 + t3151*t3375*t3389) + var1[1];
  p_output1[2]=0.25*t1579*t3038 - 0.052*t3151 + 0.035*t1579*t3389 + var1[2];
}



void p_MultisenseLeftCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
