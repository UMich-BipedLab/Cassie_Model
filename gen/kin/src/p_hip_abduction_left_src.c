/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:51 GMT-04:00
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
  double t128;
  double t1209;
  double t1233;
  double t1213;
  double t1241;
  double t1012;
  double t1219;
  double t1244;
  double t1250;
  double t1277;
  double t1279;
  double t1312;
  double t1319;
  double t959;
  double t1106;
  double t1119;
  double t1152;
  double t1201;
  double t1326;
  double t1330;
  double t1431;
  double t1433;
  double t1441;
  double t1457;
  double t1480;
  double t1482;
  t128 = Cos(var1[3]);
  t1209 = Cos(var1[5]);
  t1233 = Sin(var1[4]);
  t1213 = Sin(var1[3]);
  t1241 = Sin(var1[5]);
  t1012 = Cos(var1[6]);
  t1219 = -1.*t1209*t1213;
  t1244 = t128*t1233*t1241;
  t1250 = t1219 + t1244;
  t1277 = t128*t1209*t1233;
  t1279 = t1213*t1241;
  t1312 = t1277 + t1279;
  t1319 = Sin(var1[6]);
  t959 = Cos(var1[4]);
  t1106 = -1.*t1012;
  t1119 = 1. + t1106;
  t1152 = 0.135*t1119;
  t1201 = 0. + t1152;
  t1326 = -0.135*t1319;
  t1330 = 0. + t1326;
  t1431 = t128*t1209;
  t1433 = t1213*t1233*t1241;
  t1441 = t1431 + t1433;
  t1457 = t1209*t1213*t1233;
  t1480 = -1.*t128*t1241;
  t1482 = t1457 + t1480;
  p_output1[0]=0. + t1201*t1250 + 0.135*(t1012*t1250 + t1312*t1319) + t1312*t1330 - 0.049*t128*t959 + var1[0];
  p_output1[1]=0. + t1201*t1441 + t1330*t1482 + 0.135*(t1012*t1441 + t1319*t1482) - 0.049*t1213*t959 + var1[1];
  p_output1[2]=0. + 0.049*t1233 + t1201*t1241*t959 + t1209*t1330*t959 + 0.135*(t1012*t1241*t959 + t1209*t1319*t959) + var1[2];
}



void p_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
