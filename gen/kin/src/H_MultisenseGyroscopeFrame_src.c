/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:09:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseGyroscopeFrame_src.h"

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
  double t2080;
  double t1085;
  double t1692;
  double t2114;
  double t2392;
  double t5445;
  t2080 = Cos(var1[3]);
  t1085 = Cos(var1[5]);
  t1692 = Sin(var1[3]);
  t2114 = Sin(var1[4]);
  t2392 = Sin(var1[5]);
  t5445 = Cos(var1[4]);
  p_output1[0]=t1085*t1692 - 1.*t2080*t2114*t2392;
  p_output1[1]=-1.*t1085*t2080 - 1.*t1692*t2114*t2392;
  p_output1[2]=-1.*t2392*t5445;
  p_output1[3]=0;
  p_output1[4]=-1.*t1085*t2080*t2114 - 1.*t1692*t2392;
  p_output1[5]=-1.*t1085*t1692*t2114 + t2080*t2392;
  p_output1[6]=-1.*t1085*t5445;
  p_output1[7]=0;
  p_output1[8]=t2080*t5445;
  p_output1[9]=t1692*t5445;
  p_output1[10]=-1.*t2114;
  p_output1[11]=0;
  p_output1[12]=0.25125*(t1085*t2080*t2114 + t1692*t2392) + 0.0388*(-1.*t1085*t1692 + t2080*t2114*t2392) + 0.047*t2080*t5445 + var1[0];
  p_output1[13]=0.25125*(t1085*t1692*t2114 - 1.*t2080*t2392) + 0.0388*(t1085*t2080 + t1692*t2114*t2392) + 0.047*t1692*t5445 + var1[1];
  p_output1[14]=-0.047*t2114 + 0.25125*t1085*t5445 + 0.0388*t2392*t5445 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseGyroscopeFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
