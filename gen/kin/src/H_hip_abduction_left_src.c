/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_left_src.h"

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
  double t189;
  double t198;
  double t185;
  double t202;
  double t210;
  double t212;
  double t208;
  double t224;
  double t221;
  double t222;
  double t223;
  double t211;
  double t214;
  double t216;
  double t235;
  double t236;
  double t237;
  double t230;
  double t231;
  double t233;
  double t220;
  double t225;
  double t226;
  double t263;
  double t265;
  double t266;
  double t268;
  double t270;
  double t271;
  double t234;
  double t239;
  double t244;
  double t245;
  double t246;
  double t247;
  t189 = Cos(var1[4]);
  t198 = Sin(var1[3]);
  t185 = Cos(var1[3]);
  t202 = Sin(var1[4]);
  t210 = Cos(var1[5]);
  t212 = Sin(var1[5]);
  t208 = Cos(var1[6]);
  t224 = Sin(var1[6]);
  t221 = t185*t210*t202;
  t222 = t198*t212;
  t223 = t221 + t222;
  t211 = -1.*t210*t198;
  t214 = t185*t202*t212;
  t216 = t211 + t214;
  t235 = t210*t198*t202;
  t236 = -1.*t185*t212;
  t237 = t235 + t236;
  t230 = t185*t210;
  t231 = t198*t202*t212;
  t233 = t230 + t231;
  t220 = t208*t216;
  t225 = t223*t224;
  t226 = t220 + t225;
  t263 = -1.*t208;
  t265 = 1. + t263;
  t266 = 0.135*t265;
  t268 = 0. + t266;
  t270 = -0.135*t224;
  t271 = 0. + t270;
  t234 = t208*t233;
  t239 = t237*t224;
  t244 = t234 + t239;
  t245 = t189*t208*t212;
  t246 = t189*t210*t224;
  t247 = t245 + t246;
  p_output1[0]=t185*t189;
  p_output1[1]=t189*t198;
  p_output1[2]=-1.*t202;
  p_output1[3]=0.;
  p_output1[4]=t226;
  p_output1[5]=t244;
  p_output1[6]=t247;
  p_output1[7]=0.;
  p_output1[8]=t208*t223 - 1.*t216*t224;
  p_output1[9]=-1.*t224*t233 + t208*t237;
  p_output1[10]=t189*t208*t210 - 1.*t189*t212*t224;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t185*t189 + 0.135*t226 + t216*t268 + t223*t271 + var1[0];
  p_output1[13]=0. - 0.049*t189*t198 + 0.135*t244 + t233*t268 + t237*t271 + var1[1];
  p_output1[14]=0. + 0.049*t202 + 0.135*t247 + t189*t212*t268 + t189*t210*t271 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
