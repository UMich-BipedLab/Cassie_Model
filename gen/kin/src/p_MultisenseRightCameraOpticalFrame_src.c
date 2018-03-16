/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseRightCameraOpticalFrame_src.h"

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
  double t160;
  double t3411;
  double t3760;
  double t3713;
  double t3792;
  double t1744;
  t160 = Cos(var1[3]);
  t3411 = Cos(var1[5]);
  t3760 = Sin(var1[3]);
  t3713 = Sin(var1[4]);
  t3792 = Sin(var1[5]);
  t1744 = Cos(var1[4]);
  p_output1[0]=0.052*t160*t1744 - 0.035*(-1.*t3411*t3760 + t160*t3713*t3792) + 0.25*(t160*t3411*t3713 + t3760*t3792) + var1[0];
  p_output1[1]=0.052*t1744*t3760 + 0.25*(t3411*t3713*t3760 - 1.*t160*t3792) - 0.035*(t160*t3411 + t3713*t3760*t3792) + var1[1];
  p_output1[2]=0.25*t1744*t3411 - 0.052*t3713 - 0.035*t1744*t3792 + var1[2];
}



void p_MultisenseRightCameraOpticalFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
