/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_abduction_left_src.h"

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
  double t1092;
  double t1540;
  double t1562;
  double t1499;
  double t1601;
  double t1349;
  double t1549;
  double t1605;
  double t1609;
  double t1620;
  double t1635;
  double t1663;
  double t1664;
  double t870;
  double t1433;
  double t1441;
  double t1457;
  double t1482;
  double t1674;
  double t1705;
  double t1779;
  double t1791;
  double t1795;
  double t1807;
  double t1830;
  double t1833;
  double t2193;
  double t2197;
  double t2200;
  double t2273;
  double t2279;
  double t2301;
  double t2212;
  double t2328;
  double t2493;
  double t2494;
  double t2512;
  double t2421;
  double t2422;
  double t2443;
  double t2449;
  t1092 = Sin(var1[3]);
  t1540 = Cos(var1[5]);
  t1562 = Sin(var1[4]);
  t1499 = Cos(var1[3]);
  t1601 = Sin(var1[5]);
  t1349 = Cos(var1[6]);
  t1549 = -1.*t1499*t1540;
  t1605 = -1.*t1092*t1562*t1601;
  t1609 = t1549 + t1605;
  t1620 = -1.*t1540*t1092*t1562;
  t1635 = t1499*t1601;
  t1663 = t1620 + t1635;
  t1664 = Sin(var1[6]);
  t870 = Cos(var1[4]);
  t1433 = -1.*t1349;
  t1441 = 1. + t1433;
  t1457 = 0.135*t1441;
  t1482 = 0. + t1457;
  t1674 = -0.135*t1664;
  t1705 = 0. + t1674;
  t1779 = -1.*t1540*t1092;
  t1791 = t1499*t1562*t1601;
  t1795 = t1779 + t1791;
  t1807 = t1499*t1540*t1562;
  t1830 = t1092*t1601;
  t1833 = t1807 + t1830;
  t2193 = t1540*t1092;
  t2197 = -1.*t1499*t1562*t1601;
  t2200 = t2193 + t2197;
  t2273 = t1540*t1092*t1562;
  t2279 = -1.*t1499*t1601;
  t2301 = t2273 + t2279;
  t2212 = t1349*t1833;
  t2328 = t1349*t2301;
  t2493 = t1499*t1540;
  t2494 = t1092*t1562*t1601;
  t2512 = t2493 + t2494;
  t2421 = t870*t1540*t1349;
  t2422 = -1.*t870*t1601*t1664;
  t2443 = t2421 + t2422;
  t2449 = 0.135*t2443;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1482*t1609 + 0.135*(t1349*t1609 + t1663*t1664) + t1663*t1705 + 0.049*t1092*t870;
  p_output1[10]=t1482*t1795 + t1705*t1833 + 0.135*(t1349*t1795 + t1664*t1833) - 0.049*t1499*t870;
  p_output1[11]=0;
  p_output1[12]=0.049*t1499*t1562 + t1482*t1499*t1601*t870 + t1499*t1540*t1705*t870 + 0.135*(t1349*t1499*t1601*t870 + t1499*t1540*t1664*t870);
  p_output1[13]=0.049*t1092*t1562 + t1092*t1482*t1601*t870 + t1092*t1540*t1705*t870 + 0.135*(t1092*t1349*t1601*t870 + t1092*t1540*t1664*t870);
  p_output1[14]=-1.*t1482*t1562*t1601 + 0.135*(-1.*t1349*t1562*t1601 - 1.*t1540*t1562*t1664) - 1.*t1540*t1562*t1705 + 0.049*t870;
  p_output1[15]=t1482*t1833 + t1705*t2200 + 0.135*(t1664*t2200 + t2212);
  p_output1[16]=t1609*t1705 + t1482*t2301 + 0.135*(t1609*t1664 + t2328);
  p_output1[17]=t2449 + t1482*t1540*t870 - 1.*t1601*t1705*t870;
  p_output1[18]=0.135*t1664*t1795 - 0.135*t1349*t1833 + 0.135*(-1.*t1664*t1795 + t2212);
  p_output1[19]=-0.135*t1349*t2301 + 0.135*t1664*t2512 + 0.135*(t2328 - 1.*t1664*t2512);
  p_output1[20]=t2449 - 0.135*t1349*t1540*t870 + 0.135*t1601*t1664*t870;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
