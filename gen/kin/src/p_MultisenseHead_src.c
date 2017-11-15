/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseHead_src.h"

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
  double t454;
  double t1376;
  double t1127;
  double t368;
  double t1426;
  t454 = Cos(var1[5]);
  t1376 = Sin(var1[3]);
  t1127 = Sin(var1[4]);
  t368 = Cos(var1[3]);
  t1426 = Sin(var1[5]);
  p_output1[0]=0.25*(t1376*t1426 + t1127*t368*t454) + var1[0];
  p_output1[1]=0.25*(-1.*t1426*t368 + t1127*t1376*t454) + var1[1];
  p_output1[2]=0.25*t454*Cos(var1[4]) + var1[2];
}



void p_MultisenseHead_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
