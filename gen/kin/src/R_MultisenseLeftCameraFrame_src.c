/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseLeftCameraFrame_src.h"

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
  double t4187;
  double t4337;
  double t4011;
  double t4396;
  double t4425;
  double t4492;
  t4187 = Cos(var1[4]);
  t4337 = Sin(var1[3]);
  t4011 = Cos(var1[3]);
  t4396 = Sin(var1[4]);
  t4425 = Cos(var1[5]);
  t4492 = Sin(var1[5]);
  p_output1[0]=t4011*t4187;
  p_output1[1]=t4187*t4337;
  p_output1[2]=-1.*t4396;
  p_output1[3]=-1.*t4337*t4425 + t4011*t4396*t4492;
  p_output1[4]=t4011*t4425 + t4337*t4396*t4492;
  p_output1[5]=t4187*t4492;
  p_output1[6]=t4011*t4396*t4425 + t4337*t4492;
  p_output1[7]=t4337*t4396*t4425 - 1.*t4011*t4492;
  p_output1[8]=t4187*t4425;
}



void R_MultisenseLeftCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
