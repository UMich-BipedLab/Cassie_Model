/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_src.h"

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
  double t1008;
  double t2566;
  double t142;
  double t4097;
  double t4507;
  double t5540;
  t1008 = Cos(var1[4]);
  t2566 = Sin(var1[3]);
  t142 = Cos(var1[3]);
  t4097 = Sin(var1[4]);
  t4507 = Cos(var1[5]);
  t5540 = Sin(var1[5]);
  p_output1[0]=t1008*t142;
  p_output1[1]=t1008*t2566;
  p_output1[2]=-1.*t4097;
  p_output1[3]=0;
  p_output1[4]=t2566*t4507 - 1.*t142*t4097*t5540;
  p_output1[5]=-1.*t142*t4507 - 1.*t2566*t4097*t5540;
  p_output1[6]=-1.*t1008*t5540;
  p_output1[7]=0;
  p_output1[8]=-1.*t142*t4097*t4507 - 1.*t2566*t5540;
  p_output1[9]=-1.*t2566*t4097*t4507 + t142*t5540;
  p_output1[10]=-1.*t1008*t4507;
  p_output1[11]=0;
  p_output1[12]=0.03155*t1008*t142 - 0.07996*(t142*t4097*t4507 + t2566*t5540) + var1[0];
  p_output1[13]=0.03155*t1008*t2566 - 0.07996*(t2566*t4097*t4507 - 1.*t142*t5540) + var1[1];
  p_output1[14]=-0.03155*t4097 - 0.07996*t1008*t4507 + var1[2];
  p_output1[15]=1.;
}



void H_VectorNav_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
