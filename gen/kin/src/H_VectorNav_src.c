/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:35:05 GMT-04:00
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
  double t1245;
  double t3712;
  double t729;
  double t3947;
  double t4017;
  double t4043;
  double t4135;
  double t4136;
  double t4158;
  double t4162;
  double t4179;
  double t4193;
  t1245 = Cos(var1[4]);
  t3712 = Sin(var1[3]);
  t729 = Cos(var1[3]);
  t3947 = Sin(var1[4]);
  t4017 = Cos(var1[5]);
  t4043 = Sin(var1[5]);
  t4135 = t729*t4017*t3947;
  t4136 = t3712*t4043;
  t4158 = t4135 + t4136;
  t4162 = t4017*t3712*t3947;
  t4179 = -1.*t729*t4043;
  t4193 = t4162 + t4179;
  p_output1[0]=t1245*t729;
  p_output1[1]=t1245*t3712;
  p_output1[2]=-1.*t3947;
  p_output1[3]=0;
  p_output1[4]=-1.*t3712*t4017 + t3947*t4043*t729;
  p_output1[5]=t3712*t3947*t4043 + t4017*t729;
  p_output1[6]=t1245*t4043;
  p_output1[7]=0;
  p_output1[8]=t4158;
  p_output1[9]=t4193;
  p_output1[10]=t1245*t4017;
  p_output1[11]=0;
  p_output1[12]=-0.07996*t4158 + 0.03155*t1245*t729 + var1[0];
  p_output1[13]=0.03155*t1245*t3712 - 0.07996*t4193 + var1[1];
  p_output1[14]=-0.03155*t3947 - 0.07996*t1245*t4017 + var1[2];
  p_output1[15]=1.;
}



void H_VectorNav_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
