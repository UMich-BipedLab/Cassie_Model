/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseLeftCameraFrame_src.h"

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
  double t4586;
  double t4657;
  double t4579;
  double t4715;
  double t4742;
  double t4752;
  t4586 = Cos(var1[4]);
  t4657 = Sin(var1[3]);
  t4579 = Cos(var1[3]);
  t4715 = Sin(var1[4]);
  t4742 = Cos(var1[5]);
  t4752 = Sin(var1[5]);
  p_output1[0]=t4579*t4586;
  p_output1[1]=t4586*t4657;
  p_output1[2]=-1.*t4715;
  p_output1[3]=-1.*t4657*t4742 + t4579*t4715*t4752;
  p_output1[4]=t4579*t4742 + t4657*t4715*t4752;
  p_output1[5]=t4586*t4752;
  p_output1[6]=t4579*t4715*t4742 + t4657*t4752;
  p_output1[7]=t4657*t4715*t4742 - 1.*t4579*t4752;
  p_output1[8]=t4586*t4742;
}



void R_MultisenseLeftCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
