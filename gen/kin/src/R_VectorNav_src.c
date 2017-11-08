/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_src.h"

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
  double t971;
  double t4063;
  double t503;
  double t4188;
  double t4219;
  double t4256;
  t971 = Cos(var1[4]);
  t4063 = Sin(var1[3]);
  t503 = Cos(var1[3]);
  t4188 = Sin(var1[4]);
  t4219 = Cos(var1[5]);
  t4256 = Sin(var1[5]);
  p_output1[0]=t503*t971;
  p_output1[1]=t4063*t971;
  p_output1[2]=-1.*t4188;
  p_output1[3]=t4063*t4219 - 1.*t4188*t4256*t503;
  p_output1[4]=-1.*t4063*t4188*t4256 - 1.*t4219*t503;
  p_output1[5]=-1.*t4256*t971;
  p_output1[6]=-1.*t4063*t4256 - 1.*t4188*t4219*t503;
  p_output1[7]=-1.*t4063*t4188*t4219 + t4256*t503;
  p_output1[8]=-1.*t4219*t971;
}



void R_VectorNav_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
