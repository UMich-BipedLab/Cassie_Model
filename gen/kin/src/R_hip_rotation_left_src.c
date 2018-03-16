/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_left_src.h"

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
  double t540;
  double t562;
  double t536;
  double t549;
  double t568;
  double t514;
  double t602;
  double t629;
  double t591;
  double t592;
  double t594;
  double t560;
  double t570;
  double t578;
  double t636;
  double t618;
  double t619;
  double t620;
  double t611;
  double t615;
  double t616;
  double t642;
  double t638;
  double t640;
  double t641;
  double t646;
  double t648;
  double t649;
  double t654;
  double t655;
  double t656;
  t540 = Cos(var1[5]);
  t562 = Sin(var1[3]);
  t536 = Cos(var1[3]);
  t549 = Sin(var1[4]);
  t568 = Sin(var1[5]);
  t514 = Cos(var1[6]);
  t602 = Sin(var1[6]);
  t629 = Cos(var1[4]);
  t591 = -1.*t540*t562;
  t592 = t536*t549*t568;
  t594 = t591 + t592;
  t560 = t536*t540*t549;
  t570 = t562*t568;
  t578 = t560 + t570;
  t636 = Cos(var1[7]);
  t618 = t536*t540;
  t619 = t562*t549*t568;
  t620 = t618 + t619;
  t611 = t540*t562*t549;
  t615 = -1.*t536*t568;
  t616 = t611 + t615;
  t642 = Sin(var1[7]);
  t638 = t514*t594;
  t640 = t578*t602;
  t641 = t638 + t640;
  t646 = t514*t620;
  t648 = t616*t602;
  t649 = t646 + t648;
  t654 = t629*t514*t568;
  t655 = t629*t540*t602;
  t656 = t654 + t655;
  p_output1[0]=-1.*t514*t578 + t594*t602;
  p_output1[1]=-1.*t514*t616 + t602*t620;
  p_output1[2]=-1.*t514*t540*t629 + t568*t602*t629;
  p_output1[3]=t536*t629*t636 + t641*t642;
  p_output1[4]=t562*t629*t636 + t642*t649;
  p_output1[5]=-1.*t549*t636 + t642*t656;
  p_output1[6]=-1.*t636*t641 + t536*t629*t642;
  p_output1[7]=t562*t629*t642 - 1.*t636*t649;
  p_output1[8]=-1.*t549*t642 - 1.*t636*t656;
}



void R_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
