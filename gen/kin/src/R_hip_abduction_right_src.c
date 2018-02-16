/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_right_src.h"

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
  double t6603;
  double t61;
  double t6679;
  double t6635;
  double t6699;
  double t6702;
  double t6692;
  double t6708;
  double t6701;
  double t6703;
  double t6704;
  double t6709;
  double t6710;
  double t6712;
  double t6716;
  double t6717;
  double t6719;
  double t6723;
  double t6724;
  double t6725;
  t6603 = Cos(var1[4]);
  t61 = Cos(var1[3]);
  t6679 = Sin(var1[4]);
  t6635 = Sin(var1[3]);
  t6699 = Cos(var1[5]);
  t6702 = Sin(var1[5]);
  t6692 = Sin(var1[13]);
  t6708 = Cos(var1[13]);
  t6701 = t61*t6699*t6679;
  t6703 = t6635*t6702;
  t6704 = t6701 + t6703;
  t6709 = -1.*t6699*t6635;
  t6710 = t61*t6679*t6702;
  t6712 = t6709 + t6710;
  t6716 = t6699*t6635*t6679;
  t6717 = -1.*t61*t6702;
  t6719 = t6716 + t6717;
  t6723 = t61*t6699;
  t6724 = t6635*t6679*t6702;
  t6725 = t6723 + t6724;
  p_output1[0]=t61*t6603;
  p_output1[1]=t6603*t6635;
  p_output1[2]=-1.*t6679;
  p_output1[3]=t6692*t6704 + t6708*t6712;
  p_output1[4]=t6692*t6719 + t6708*t6725;
  p_output1[5]=t6603*t6692*t6699 + t6603*t6702*t6708;
  p_output1[6]=t6704*t6708 - 1.*t6692*t6712;
  p_output1[7]=t6708*t6719 - 1.*t6692*t6725;
  p_output1[8]=-1.*t6603*t6692*t6702 + t6603*t6699*t6708;
}



void R_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
