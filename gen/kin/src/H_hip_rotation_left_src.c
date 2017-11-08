/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_left_src.h"

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
  double t641;
  double t656;
  double t636;
  double t648;
  double t660;
  double t627;
  double t686;
  double t741;
  double t676;
  double t678;
  double t683;
  double t654;
  double t665;
  double t671;
  double t710;
  double t713;
  double t714;
  double t701;
  double t702;
  double t706;
  double t814;
  double t816;
  double t820;
  double t826;
  double t829;
  double t832;
  t641 = Cos(var1[5]);
  t656 = Sin(var1[3]);
  t636 = Cos(var1[3]);
  t648 = Sin(var1[4]);
  t660 = Sin(var1[5]);
  t627 = Cos(var1[6]);
  t686 = Sin(var1[6]);
  t741 = Cos(var1[4]);
  t676 = -1.*t641*t656;
  t678 = t636*t648*t660;
  t683 = t676 + t678;
  t654 = t636*t641*t648;
  t665 = t656*t660;
  t671 = t654 + t665;
  t710 = t636*t641;
  t713 = t656*t648*t660;
  t714 = t710 + t713;
  t701 = t641*t656*t648;
  t702 = -1.*t636*t660;
  t706 = t701 + t702;
  t814 = -1.*t627;
  t816 = 1. + t814;
  t820 = 0.135*t816;
  t826 = 0. + t820;
  t829 = -0.135*t686;
  t832 = 0. + t829;
  p_output1[0]=-1.*t627*t671 + t683*t686;
  p_output1[1]=-1.*t627*t706 + t686*t714;
  p_output1[2]=-1.*t627*t641*t741 + t660*t686*t741;
  p_output1[3]=0.;
  p_output1[4]=t636*t741;
  p_output1[5]=t656*t741;
  p_output1[6]=-1.*t648;
  p_output1[7]=0.;
  p_output1[8]=-1.*t627*t683 - 1.*t671*t686;
  p_output1[9]=-1.*t686*t706 - 1.*t627*t714;
  p_output1[10]=-1.*t627*t660*t741 - 1.*t641*t686*t741;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*(t627*t683 + t671*t686) - 0.09*(t627*t671 - 1.*t683*t686) - 0.049*t636*t741 + t683*t826 + t671*t832 + var1[0];
  p_output1[13]=0. + 0.135*(t686*t706 + t627*t714) - 0.09*(t627*t706 - 1.*t686*t714) - 0.049*t656*t741 + t714*t826 + t706*t832 + var1[1];
  p_output1[14]=0. + 0.049*t648 + 0.135*(t627*t660*t741 + t641*t686*t741) - 0.09*(t627*t641*t741 - 1.*t660*t686*t741) + t660*t741*t826 + t641*t741*t832 + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
