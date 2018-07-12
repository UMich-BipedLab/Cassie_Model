/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_right_src.h"

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
  double t2597;
  double t4252;
  double t5012;
  double t4721;
  double t5028;
  double t3853;
  double t4993;
  double t5679;
  double t5705;
  double t5970;
  double t6365;
  double t6367;
  double t6504;
  double t2709;
  double t4000;
  double t4137;
  double t6072;
  double t6077;
  double t6091;
  double t6319;
  double t6760;
  double t6761;
  double t6762;
  double t6766;
  double t6769;
  double t6775;
  t2597 = Cos(var1[3]);
  t4252 = Cos(var1[5]);
  t5012 = Sin(var1[3]);
  t4721 = Sin(var1[4]);
  t5028 = Sin(var1[5]);
  t3853 = Sin(var1[13]);
  t4993 = t2597*t4252*t4721;
  t5679 = t5012*t5028;
  t5705 = t4993 + t5679;
  t5970 = Cos(var1[13]);
  t6365 = -1.*t4252*t5012;
  t6367 = t2597*t4721*t5028;
  t6504 = t6365 + t6367;
  t2709 = Cos(var1[4]);
  t4000 = 0.135*t3853;
  t4137 = 0. + t4000;
  t6072 = -1.*t5970;
  t6077 = 1. + t6072;
  t6091 = -0.135*t6077;
  t6319 = 0. + t6091;
  t6760 = t4252*t5012*t4721;
  t6761 = -1.*t2597*t5028;
  t6762 = t6760 + t6761;
  t6766 = t2597*t4252;
  t6769 = t5012*t4721*t5028;
  t6775 = t6766 + t6769;
  p_output1[0]=0. - 0.049*t2597*t2709 + t4137*t5705 + t6319*t6504 - 0.135*(t3853*t5705 + t5970*t6504) + var1[0];
  p_output1[1]=0. - 0.049*t2709*t5012 + t4137*t6762 + t6319*t6775 - 0.135*(t3853*t6762 + t5970*t6775) + var1[1];
  p_output1[2]=0. + t2709*t4137*t4252 + 0.049*t4721 - 0.135*(t2709*t3853*t4252 + t2709*t5028*t5970) + t2709*t5028*t6319 + var1[2];
}



void p_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
