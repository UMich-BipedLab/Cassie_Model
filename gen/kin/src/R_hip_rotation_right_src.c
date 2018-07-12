/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_right_src.h"

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
  double t327;
  double t2191;
  double t256;
  double t831;
  double t2220;
  double t158;
  double t3500;
  double t4826;
  double t1462;
  double t2588;
  double t2604;
  double t3575;
  double t3922;
  double t3999;
  double t5105;
  double t5181;
  double t4180;
  double t4253;
  double t4317;
  double t4400;
  double t4441;
  double t4482;
  double t5191;
  double t5232;
  double t5244;
  double t5349;
  double t5352;
  double t5385;
  double t5465;
  double t5474;
  double t5485;
  t327 = Cos(var1[5]);
  t2191 = Sin(var1[3]);
  t256 = Cos(var1[3]);
  t831 = Sin(var1[4]);
  t2220 = Sin(var1[5]);
  t158 = Cos(var1[13]);
  t3500 = Sin(var1[13]);
  t4826 = Cos(var1[4]);
  t1462 = t256*t327*t831;
  t2588 = t2191*t2220;
  t2604 = t1462 + t2588;
  t3575 = -1.*t327*t2191;
  t3922 = t256*t831*t2220;
  t3999 = t3575 + t3922;
  t5105 = Cos(var1[14]);
  t5181 = Sin(var1[14]);
  t4180 = t327*t2191*t831;
  t4253 = -1.*t256*t2220;
  t4317 = t4180 + t4253;
  t4400 = t256*t327;
  t4441 = t2191*t831*t2220;
  t4482 = t4400 + t4441;
  t5191 = t3500*t2604;
  t5232 = t158*t3999;
  t5244 = t5191 + t5232;
  t5349 = t3500*t4317;
  t5352 = t158*t4482;
  t5385 = t5349 + t5352;
  t5465 = t4826*t327*t3500;
  t5474 = t158*t4826*t2220;
  t5485 = t5465 + t5474;
  p_output1[0]=-1.*t158*t2604 + t3500*t3999;
  p_output1[1]=-1.*t158*t4317 + t3500*t4482;
  p_output1[2]=-1.*t158*t327*t4826 + t2220*t3500*t4826;
  p_output1[3]=t256*t4826*t5105 + t5181*t5244;
  p_output1[4]=t2191*t4826*t5105 + t5181*t5385;
  p_output1[5]=t5181*t5485 - 1.*t5105*t831;
  p_output1[6]=t256*t4826*t5181 - 1.*t5105*t5244;
  p_output1[7]=t2191*t4826*t5181 - 1.*t5105*t5385;
  p_output1[8]=-1.*t5105*t5485 - 1.*t5181*t831;
}



void R_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
