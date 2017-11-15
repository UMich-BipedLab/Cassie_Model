/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseRightCameraFrame_src.h"

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
  double t1841;
  double t4786;
  double t163;
  double t4845;
  double t4856;
  double t4867;
  t1841 = Cos(var1[4]);
  t4786 = Sin(var1[3]);
  t163 = Cos(var1[3]);
  t4845 = Sin(var1[4]);
  t4856 = Cos(var1[5]);
  t4867 = Sin(var1[5]);
  p_output1[0]=t163*t1841;
  p_output1[1]=t1841*t4786;
  p_output1[2]=-1.*t4845;
  p_output1[3]=-1.*t4786*t4856 + t163*t4845*t4867;
  p_output1[4]=t163*t4856 + t4786*t4845*t4867;
  p_output1[5]=t1841*t4867;
  p_output1[6]=t163*t4845*t4856 + t4786*t4867;
  p_output1[7]=t4786*t4845*t4856 - 1.*t163*t4867;
  p_output1[8]=t1841*t4856;
}



void R_MultisenseRightCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
