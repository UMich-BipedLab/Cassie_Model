/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:09:12 GMT-04:00
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
  double t172;
  double t188;
  double t153;
  double t3254;
  double t4898;
  double t5829;
  t172 = Cos(var1[4]);
  t188 = Sin(var1[3]);
  t153 = Cos(var1[3]);
  t3254 = Sin(var1[4]);
  t4898 = Cos(var1[5]);
  t5829 = Sin(var1[5]);
  p_output1[0]=t153*t172;
  p_output1[1]=t172*t188;
  p_output1[2]=-1.*t3254;
  p_output1[3]=0;
  p_output1[4]=t188*t4898 - 1.*t153*t3254*t5829;
  p_output1[5]=-1.*t153*t4898 - 1.*t188*t3254*t5829;
  p_output1[6]=-1.*t172*t5829;
  p_output1[7]=0;
  p_output1[8]=-1.*t153*t3254*t4898 - 1.*t188*t5829;
  p_output1[9]=-1.*t188*t3254*t4898 + t153*t5829;
  p_output1[10]=-1.*t172*t4898;
  p_output1[11]=0;
  p_output1[12]=0.03155*t153*t172 - 0.07996*(t153*t3254*t4898 + t188*t5829) + var1[0];
  p_output1[13]=0.03155*t172*t188 - 0.07996*(t188*t3254*t4898 - 1.*t153*t5829) + var1[1];
  p_output1[14]=-0.03155*t3254 - 0.07996*t172*t4898 + var1[2];
  p_output1[15]=1.;
}



void H_VectorNav_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
