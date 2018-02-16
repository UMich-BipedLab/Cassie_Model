/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:14:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_left_src.h"

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
  double t73;
  double t91;
  double t94;
  double t92;
  double t95;
  double t82;
  double t93;
  double t96;
  double t97;
  double t99;
  double t100;
  double t101;
  double t102;
  double t75;
  double t86;
  double t88;
  double t89;
  double t90;
  double t103;
  double t104;
  double t113;
  double t114;
  double t115;
  double t117;
  double t118;
  double t119;
  t73 = Cos(var1[3]);
  t91 = Cos(var1[5]);
  t94 = Sin(var1[4]);
  t92 = Sin(var1[3]);
  t95 = Sin(var1[5]);
  t82 = Cos(var1[6]);
  t93 = -1.*t91*t92;
  t96 = t73*t94*t95;
  t97 = t93 + t96;
  t99 = t73*t91*t94;
  t100 = t92*t95;
  t101 = t99 + t100;
  t102 = Sin(var1[6]);
  t75 = Cos(var1[4]);
  t86 = -1.*t82;
  t88 = 1. + t86;
  t89 = 0.135*t88;
  t90 = 0. + t89;
  t103 = -0.135*t102;
  t104 = 0. + t103;
  t113 = t73*t91;
  t114 = t92*t94*t95;
  t115 = t113 + t114;
  t117 = t91*t92*t94;
  t118 = -1.*t73*t95;
  t119 = t117 + t118;
  p_output1[0]=0. + t101*t104 - 0.049*t73*t75 + t90*t97 + 0.135*(t101*t102 + t82*t97) + var1[0];
  p_output1[1]=0. + t104*t119 + 0.135*(t102*t119 + t115*t82) + t115*t90 - 0.049*t75*t92 + var1[1];
  p_output1[2]=0. + t104*t75*t91 + 0.049*t94 + t75*t90*t95 + 0.135*(t102*t75*t91 + t75*t82*t95) + var1[2];
}



void p_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
