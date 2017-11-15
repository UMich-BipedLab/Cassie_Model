/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_left_src.h"

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
  double t239;
  double t261;
  double t222;
  double t272;
  double t285;
  double t287;
  double t282;
  double t295;
  double t292;
  double t293;
  double t294;
  double t286;
  double t289;
  double t290;
  double t302;
  double t303;
  double t304;
  double t298;
  double t299;
  double t300;
  t239 = Cos(var1[4]);
  t261 = Sin(var1[3]);
  t222 = Cos(var1[3]);
  t272 = Sin(var1[4]);
  t285 = Cos(var1[5]);
  t287 = Sin(var1[5]);
  t282 = Cos(var1[6]);
  t295 = Sin(var1[6]);
  t292 = t222*t285*t272;
  t293 = t261*t287;
  t294 = t292 + t293;
  t286 = -1.*t285*t261;
  t289 = t222*t272*t287;
  t290 = t286 + t289;
  t302 = t285*t261*t272;
  t303 = -1.*t222*t287;
  t304 = t302 + t303;
  t298 = t222*t285;
  t299 = t261*t272*t287;
  t300 = t298 + t299;
  p_output1[0]=t222*t239;
  p_output1[1]=t239*t261;
  p_output1[2]=-1.*t272;
  p_output1[3]=t282*t290 + t294*t295;
  p_output1[4]=t282*t300 + t295*t304;
  p_output1[5]=t239*t282*t287 + t239*t285*t295;
  p_output1[6]=t282*t294 - 1.*t290*t295;
  p_output1[7]=-1.*t295*t300 + t282*t304;
  p_output1[8]=t239*t282*t285 - 1.*t239*t287*t295;
}



void R_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
