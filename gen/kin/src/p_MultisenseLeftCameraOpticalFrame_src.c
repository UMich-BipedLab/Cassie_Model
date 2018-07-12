/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseLeftCameraOpticalFrame_src.h"

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
  double t149;
  double t1645;
  double t4878;
  double t1811;
  double t4897;
  double t947;
  t149 = Cos(var1[3]);
  t1645 = Cos(var1[5]);
  t4878 = Sin(var1[3]);
  t1811 = Sin(var1[4]);
  t4897 = Sin(var1[5]);
  t947 = Cos(var1[4]);
  p_output1[0]=0.035*(-1.*t1645*t4878 + t149*t1811*t4897) + 0.25*(t149*t1645*t1811 + t4878*t4897) + 0.052*t149*t947 + var1[0];
  p_output1[1]=0.25*(t1645*t1811*t4878 - 1.*t149*t4897) + 0.035*(t149*t1645 + t1811*t4878*t4897) + 0.052*t4878*t947 + var1[1];
  p_output1[2]=-0.052*t1811 + 0.25*t1645*t947 + 0.035*t4897*t947 + var1[2];
}



void p_MultisenseLeftCameraOpticalFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
