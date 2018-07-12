/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:54 GMT-04:00
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
  double t583;
  double t1791;
  double t400;
  double t1836;
  double t1887;
  double t1916;
  double t1885;
  double t2039;
  double t2007;
  double t2013;
  double t2028;
  double t1903;
  double t1950;
  double t1951;
  double t2143;
  double t2147;
  double t2149;
  double t2074;
  double t2075;
  double t2096;
  double t1992;
  double t2043;
  double t2051;
  double t2365;
  double t2407;
  double t2411;
  double t2418;
  double t2443;
  double t2456;
  double t2113;
  double t2158;
  double t2167;
  double t2186;
  double t2193;
  double t2200;
  t583 = Cos(var1[4]);
  t1791 = Sin(var1[3]);
  t400 = Cos(var1[3]);
  t1836 = Sin(var1[4]);
  t1887 = Cos(var1[5]);
  t1916 = Sin(var1[5]);
  t1885 = Cos(var1[6]);
  t2039 = Sin(var1[6]);
  t2007 = t400*t1887*t1836;
  t2013 = t1791*t1916;
  t2028 = t2007 + t2013;
  t1903 = -1.*t1887*t1791;
  t1950 = t400*t1836*t1916;
  t1951 = t1903 + t1950;
  t2143 = t1887*t1791*t1836;
  t2147 = -1.*t400*t1916;
  t2149 = t2143 + t2147;
  t2074 = t400*t1887;
  t2075 = t1791*t1836*t1916;
  t2096 = t2074 + t2075;
  t1992 = t1885*t1951;
  t2043 = t2028*t2039;
  t2051 = t1992 + t2043;
  t2365 = -1.*t1885;
  t2407 = 1. + t2365;
  t2411 = 0.135*t2407;
  t2418 = 0. + t2411;
  t2443 = -0.135*t2039;
  t2456 = 0. + t2443;
  t2113 = t1885*t2096;
  t2158 = t2149*t2039;
  t2167 = t2113 + t2158;
  t2186 = t583*t1885*t1916;
  t2193 = t583*t1887*t2039;
  t2200 = t2186 + t2193;
  p_output1[0]=t400*t583;
  p_output1[1]=t1791*t583;
  p_output1[2]=-1.*t1836;
  p_output1[3]=0.;
  p_output1[4]=t2051;
  p_output1[5]=t2167;
  p_output1[6]=t2200;
  p_output1[7]=0.;
  p_output1[8]=t1885*t2028 - 1.*t1951*t2039;
  p_output1[9]=-1.*t2039*t2096 + t1885*t2149;
  p_output1[10]=t1885*t1887*t583 - 1.*t1916*t2039*t583;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*t2051 + t1951*t2418 + t2028*t2456 - 0.049*t400*t583 + var1[0];
  p_output1[13]=0. + 0.135*t2167 + t2096*t2418 + t2149*t2456 - 0.049*t1791*t583 + var1[1];
  p_output1[14]=0. + 0.049*t1836 + 0.135*t2200 + t1916*t2418*t583 + t1887*t2456*t583 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
