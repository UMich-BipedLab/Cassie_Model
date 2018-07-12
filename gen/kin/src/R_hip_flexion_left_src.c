/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_left_src.h"

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
  double t2479;
  double t3043;
  double t1770;
  double t2613;
  double t3260;
  double t179;
  double t3883;
  double t4125;
  double t4126;
  double t2802;
  double t3274;
  double t3298;
  double t4260;
  double t40;
  double t4414;
  double t4417;
  double t4795;
  double t4796;
  double t4854;
  double t4662;
  double t4693;
  double t4695;
  double t4558;
  double t4594;
  double t4418;
  double t4432;
  double t4549;
  double t4556;
  double t4566;
  double t4583;
  double t3744;
  double t4377;
  double t4386;
  double t4924;
  double t4930;
  double t4933;
  double t4947;
  double t4958;
  double t4959;
  double t4724;
  double t4872;
  double t4874;
  double t5122;
  double t5136;
  double t5143;
  double t5147;
  double t5149;
  double t5168;
  double t5035;
  double t5069;
  double t5073;
  t2479 = Cos(var1[5]);
  t3043 = Sin(var1[3]);
  t1770 = Cos(var1[3]);
  t2613 = Sin(var1[4]);
  t3260 = Sin(var1[5]);
  t179 = Cos(var1[6]);
  t3883 = -1.*t2479*t3043;
  t4125 = t1770*t2613*t3260;
  t4126 = t3883 + t4125;
  t2802 = t1770*t2479*t2613;
  t3274 = t3043*t3260;
  t3298 = t2802 + t3274;
  t4260 = Sin(var1[6]);
  t40 = Cos(var1[8]);
  t4414 = Cos(var1[4]);
  t4417 = Cos(var1[7]);
  t4795 = t1770*t2479;
  t4796 = t3043*t2613*t3260;
  t4854 = t4795 + t4796;
  t4662 = t2479*t3043*t2613;
  t4693 = -1.*t1770*t3260;
  t4695 = t4662 + t4693;
  t4558 = Sin(var1[7]);
  t4594 = Sin(var1[8]);
  t4418 = t1770*t4414*t4417;
  t4432 = t179*t4126;
  t4549 = t3298*t4260;
  t4556 = t4432 + t4549;
  t4566 = t4556*t4558;
  t4583 = t4418 + t4566;
  t3744 = t179*t3298;
  t4377 = -1.*t4126*t4260;
  t4386 = t3744 + t4377;
  t4924 = t4414*t4417*t3043;
  t4930 = t179*t4854;
  t4933 = t4695*t4260;
  t4947 = t4930 + t4933;
  t4958 = t4947*t4558;
  t4959 = t4924 + t4958;
  t4724 = t179*t4695;
  t4872 = -1.*t4854*t4260;
  t4874 = t4724 + t4872;
  t5122 = -1.*t4417*t2613;
  t5136 = t4414*t179*t3260;
  t5143 = t4414*t2479*t4260;
  t5147 = t5136 + t5143;
  t5149 = t5147*t4558;
  t5168 = t5122 + t5149;
  t5035 = t4414*t2479*t179;
  t5069 = -1.*t4414*t3260*t4260;
  t5073 = t5035 + t5069;
  p_output1[0]=-1.*t40*t4386 + t4583*t4594;
  p_output1[1]=-1.*t40*t4874 + t4594*t4959;
  p_output1[2]=-1.*t40*t5073 + t4594*t5168;
  p_output1[3]=t40*t4583 + t4386*t4594;
  p_output1[4]=t4594*t4874 + t40*t4959;
  p_output1[5]=t4594*t5073 + t40*t5168;
  p_output1[6]=-1.*t4417*t4556 + t1770*t4414*t4558;
  p_output1[7]=t3043*t4414*t4558 - 1.*t4417*t4947;
  p_output1[8]=-1.*t2613*t4558 - 1.*t4417*t5147;
}



void R_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
