/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:50 GMT-04:00
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
  double t153;
  double t162;
  double t149;
  double t166;
  double t174;
  double t176;
  double t172;
  double t188;
  double t185;
  double t186;
  double t187;
  double t175;
  double t178;
  double t180;
  double t199;
  double t200;
  double t201;
  double t194;
  double t195;
  double t197;
  double t184;
  double t189;
  double t190;
  double t227;
  double t229;
  double t230;
  double t232;
  double t234;
  double t235;
  double t198;
  double t203;
  double t208;
  double t209;
  double t210;
  double t211;
  t153 = Cos(var1[4]);
  t162 = Sin(var1[3]);
  t149 = Cos(var1[3]);
  t166 = Sin(var1[4]);
  t174 = Cos(var1[5]);
  t176 = Sin(var1[5]);
  t172 = Cos(var1[6]);
  t188 = Sin(var1[6]);
  t185 = t149*t174*t166;
  t186 = t162*t176;
  t187 = t185 + t186;
  t175 = -1.*t174*t162;
  t178 = t149*t166*t176;
  t180 = t175 + t178;
  t199 = t174*t162*t166;
  t200 = -1.*t149*t176;
  t201 = t199 + t200;
  t194 = t149*t174;
  t195 = t162*t166*t176;
  t197 = t194 + t195;
  t184 = t172*t180;
  t189 = t187*t188;
  t190 = t184 + t189;
  t227 = -1.*t172;
  t229 = 1. + t227;
  t230 = 0.135*t229;
  t232 = 0. + t230;
  t234 = -0.135*t188;
  t235 = 0. + t234;
  t198 = t172*t197;
  t203 = t201*t188;
  t208 = t198 + t203;
  t209 = t153*t172*t176;
  t210 = t153*t174*t188;
  t211 = t209 + t210;
  p_output1[0]=t149*t153;
  p_output1[1]=t153*t162;
  p_output1[2]=-1.*t166;
  p_output1[3]=0.;
  p_output1[4]=t190;
  p_output1[5]=t208;
  p_output1[6]=t211;
  p_output1[7]=0.;
  p_output1[8]=t172*t187 - 1.*t180*t188;
  p_output1[9]=-1.*t188*t197 + t172*t201;
  p_output1[10]=t153*t172*t174 - 1.*t153*t176*t188;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t149*t153 + 0.135*t190 + t180*t232 + t187*t235 + var1[0];
  p_output1[13]=0. - 0.049*t153*t162 + 0.135*t208 + t197*t232 + t201*t235 + var1[1];
  p_output1[14]=0. + 0.049*t166 + 0.135*t211 + t153*t176*t232 + t153*t174*t235 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
