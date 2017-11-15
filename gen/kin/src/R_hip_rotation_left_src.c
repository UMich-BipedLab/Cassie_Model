/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:01 GMT-05:00
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
  double t576;
  double t598;
  double t572;
  double t585;
  double t604;
  double t550;
  double t638;
  double t665;
  double t627;
  double t628;
  double t630;
  double t596;
  double t606;
  double t614;
  double t672;
  double t654;
  double t655;
  double t656;
  double t647;
  double t651;
  double t652;
  double t678;
  double t674;
  double t676;
  double t677;
  double t682;
  double t684;
  double t685;
  double t690;
  double t691;
  double t692;
  t576 = Cos(var1[5]);
  t598 = Sin(var1[3]);
  t572 = Cos(var1[3]);
  t585 = Sin(var1[4]);
  t604 = Sin(var1[5]);
  t550 = Cos(var1[6]);
  t638 = Sin(var1[6]);
  t665 = Cos(var1[4]);
  t627 = -1.*t576*t598;
  t628 = t572*t585*t604;
  t630 = t627 + t628;
  t596 = t572*t576*t585;
  t606 = t598*t604;
  t614 = t596 + t606;
  t672 = Cos(var1[7]);
  t654 = t572*t576;
  t655 = t598*t585*t604;
  t656 = t654 + t655;
  t647 = t576*t598*t585;
  t651 = -1.*t572*t604;
  t652 = t647 + t651;
  t678 = Sin(var1[7]);
  t674 = t550*t630;
  t676 = t614*t638;
  t677 = t674 + t676;
  t682 = t550*t656;
  t684 = t652*t638;
  t685 = t682 + t684;
  t690 = t665*t550*t604;
  t691 = t665*t576*t638;
  t692 = t690 + t691;
  p_output1[0]=-1.*t550*t614 + t630*t638;
  p_output1[1]=-1.*t550*t652 + t638*t656;
  p_output1[2]=-1.*t550*t576*t665 + t604*t638*t665;
  p_output1[3]=t572*t665*t672 + t677*t678;
  p_output1[4]=t598*t665*t672 + t678*t685;
  p_output1[5]=-1.*t585*t672 + t678*t692;
  p_output1[6]=-1.*t672*t677 + t572*t665*t678;
  p_output1[7]=t598*t665*t678 - 1.*t672*t685;
  p_output1[8]=-1.*t585*t678 - 1.*t672*t692;
}



void R_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
