/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:50 GMT-04:00
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
  double t203;
  double t225;
  double t186;
  double t236;
  double t249;
  double t251;
  double t246;
  double t259;
  double t256;
  double t257;
  double t258;
  double t250;
  double t253;
  double t254;
  double t266;
  double t267;
  double t268;
  double t262;
  double t263;
  double t264;
  t203 = Cos(var1[4]);
  t225 = Sin(var1[3]);
  t186 = Cos(var1[3]);
  t236 = Sin(var1[4]);
  t249 = Cos(var1[5]);
  t251 = Sin(var1[5]);
  t246 = Cos(var1[6]);
  t259 = Sin(var1[6]);
  t256 = t186*t249*t236;
  t257 = t225*t251;
  t258 = t256 + t257;
  t250 = -1.*t249*t225;
  t253 = t186*t236*t251;
  t254 = t250 + t253;
  t266 = t249*t225*t236;
  t267 = -1.*t186*t251;
  t268 = t266 + t267;
  t262 = t186*t249;
  t263 = t225*t236*t251;
  t264 = t262 + t263;
  p_output1[0]=t186*t203;
  p_output1[1]=t203*t225;
  p_output1[2]=-1.*t236;
  p_output1[3]=t246*t254 + t258*t259;
  p_output1[4]=t246*t264 + t259*t268;
  p_output1[5]=t203*t246*t251 + t203*t249*t259;
  p_output1[6]=t246*t258 - 1.*t254*t259;
  p_output1[7]=-1.*t259*t264 + t246*t268;
  p_output1[8]=t203*t246*t249 - 1.*t203*t251*t259;
}



void R_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
