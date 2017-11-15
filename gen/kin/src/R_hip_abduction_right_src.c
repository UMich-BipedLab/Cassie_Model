/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:31 GMT-05:00
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
  double t6643;
  double t6622;
  double t6696;
  double t6678;
  double t6712;
  double t6715;
  double t6711;
  double t6723;
  double t6713;
  double t6717;
  double t6720;
  double t6724;
  double t6727;
  double t6729;
  double t6734;
  double t6735;
  double t6736;
  double t6739;
  double t6740;
  double t6742;
  t6643 = Cos(var1[4]);
  t6622 = Cos(var1[3]);
  t6696 = Sin(var1[4]);
  t6678 = Sin(var1[3]);
  t6712 = Cos(var1[5]);
  t6715 = Sin(var1[5]);
  t6711 = Sin(var1[13]);
  t6723 = Cos(var1[13]);
  t6713 = t6622*t6712*t6696;
  t6717 = t6678*t6715;
  t6720 = t6713 + t6717;
  t6724 = -1.*t6712*t6678;
  t6727 = t6622*t6696*t6715;
  t6729 = t6724 + t6727;
  t6734 = t6712*t6678*t6696;
  t6735 = -1.*t6622*t6715;
  t6736 = t6734 + t6735;
  t6739 = t6622*t6712;
  t6740 = t6678*t6696*t6715;
  t6742 = t6739 + t6740;
  p_output1[0]=t6622*t6643;
  p_output1[1]=t6643*t6678;
  p_output1[2]=-1.*t6696;
  p_output1[3]=t6711*t6720 + t6723*t6729;
  p_output1[4]=t6711*t6736 + t6723*t6742;
  p_output1[5]=t6643*t6711*t6712 + t6643*t6715*t6723;
  p_output1[6]=t6720*t6723 - 1.*t6711*t6729;
  p_output1[7]=t6723*t6736 - 1.*t6711*t6742;
  p_output1[8]=-1.*t6643*t6711*t6715 + t6643*t6712*t6723;
}



void R_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
