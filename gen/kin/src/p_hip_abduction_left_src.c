/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:53 GMT-05:00
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
  double t109;
  double t127;
  double t130;
  double t128;
  double t131;
  double t118;
  double t129;
  double t132;
  double t133;
  double t135;
  double t136;
  double t137;
  double t138;
  double t111;
  double t122;
  double t124;
  double t125;
  double t126;
  double t139;
  double t140;
  double t149;
  double t150;
  double t151;
  double t153;
  double t154;
  double t155;
  t109 = Cos(var1[3]);
  t127 = Cos(var1[5]);
  t130 = Sin(var1[4]);
  t128 = Sin(var1[3]);
  t131 = Sin(var1[5]);
  t118 = Cos(var1[6]);
  t129 = -1.*t127*t128;
  t132 = t109*t130*t131;
  t133 = t129 + t132;
  t135 = t109*t127*t130;
  t136 = t128*t131;
  t137 = t135 + t136;
  t138 = Sin(var1[6]);
  t111 = Cos(var1[4]);
  t122 = -1.*t118;
  t124 = 1. + t122;
  t125 = 0.135*t124;
  t126 = 0. + t125;
  t139 = -0.135*t138;
  t140 = 0. + t139;
  t149 = t109*t127;
  t150 = t128*t130*t131;
  t151 = t149 + t150;
  t153 = t127*t128*t130;
  t154 = -1.*t109*t131;
  t155 = t153 + t154;
  p_output1[0]=0. - 0.049*t109*t111 + t126*t133 + 0.135*(t118*t133 + t137*t138) + t137*t140 + var1[0];
  p_output1[1]=0. - 0.049*t111*t128 + t126*t151 + t140*t155 + 0.135*(t118*t151 + t138*t155) + var1[1];
  p_output1[2]=0. + 0.049*t130 + t111*t126*t131 + 0.135*(t111*t118*t131 + t111*t127*t138) + t111*t127*t140 + var1[2];
}



void p_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
