/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseMagnetometerFrame_src.h"

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
  double t1068;
  double t2832;
  double t1700;
  double t935;
  double t2859;
  double t3867;
  t1068 = Cos(var1[5]);
  t2832 = Sin(var1[3]);
  t1700 = Sin(var1[4]);
  t935 = Cos(var1[3]);
  t2859 = Sin(var1[5]);
  t3867 = Cos(var1[4]);
  p_output1[0]=-1.*t2832*t2859 - 1.*t1068*t1700*t935;
  p_output1[1]=-1.*t1068*t1700*t2832 + t2859*t935;
  p_output1[2]=-1.*t1068*t3867;
  p_output1[3]=-1.*t1068*t2832 + t1700*t2859*t935;
  p_output1[4]=t1700*t2832*t2859 + t1068*t935;
  p_output1[5]=t2859*t3867;
  p_output1[6]=t3867*t935;
  p_output1[7]=t2832*t3867;
  p_output1[8]=-1.*t1700;
}



void R_MultisenseMagnetometerFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
