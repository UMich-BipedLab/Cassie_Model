/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseRightCameraFrame_src.h"

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
  double t3944;
  double t4554;
  double t1208;
  double t4618;
  double t4637;
  double t4648;
  double t4785;
  double t4788;
  double t4794;
  double t4642;
  double t4685;
  double t4700;
  double t4797;
  double t4804;
  double t4809;
  double t4727;
  double t4745;
  double t4747;
  t3944 = Cos(var1[4]);
  t4554 = Sin(var1[3]);
  t1208 = Cos(var1[3]);
  t4618 = Sin(var1[4]);
  t4637 = Cos(var1[5]);
  t4648 = Sin(var1[5]);
  t4785 = t1208*t4637*t4618;
  t4788 = t4554*t4648;
  t4794 = t4785 + t4788;
  t4642 = -1.*t4637*t4554;
  t4685 = t1208*t4618*t4648;
  t4700 = t4642 + t4685;
  t4797 = t4637*t4554*t4618;
  t4804 = -1.*t1208*t4648;
  t4809 = t4797 + t4804;
  t4727 = t1208*t4637;
  t4745 = t4554*t4618*t4648;
  t4747 = t4727 + t4745;
  p_output1[0]=t1208*t3944;
  p_output1[1]=t3944*t4554;
  p_output1[2]=-1.*t4618;
  p_output1[3]=0;
  p_output1[4]=t4700;
  p_output1[5]=t4747;
  p_output1[6]=t3944*t4648;
  p_output1[7]=0;
  p_output1[8]=t4794;
  p_output1[9]=t4809;
  p_output1[10]=t3944*t4637;
  p_output1[11]=0;
  p_output1[12]=0.052*t1208*t3944 - 0.035*t4700 + 0.25*t4794 + var1[0];
  p_output1[13]=0.052*t3944*t4554 - 0.035*t4747 + 0.25*t4809 + var1[1];
  p_output1[14]=-0.052*t4618 + 0.25*t3944*t4637 - 0.035*t3944*t4648 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseRightCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
