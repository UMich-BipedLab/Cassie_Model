/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseRightCameraOpticalFrame_src.h"

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
  double t4879;
  double t1433;
  double t1938;
  double t4885;
  double t5186;
  double t5423;
  t4879 = Cos(var1[3]);
  t1433 = Cos(var1[5]);
  t1938 = Sin(var1[3]);
  t4885 = Sin(var1[4]);
  t5186 = Sin(var1[5]);
  t5423 = Cos(var1[4]);
  p_output1[0]=t1433*t1938 - 1.*t4879*t4885*t5186;
  p_output1[1]=-1.*t1433*t4879 - 1.*t1938*t4885*t5186;
  p_output1[2]=-1.*t5186*t5423;
  p_output1[3]=0;
  p_output1[4]=-1.*t1433*t4879*t4885 - 1.*t1938*t5186;
  p_output1[5]=-1.*t1433*t1938*t4885 + t4879*t5186;
  p_output1[6]=-1.*t1433*t5423;
  p_output1[7]=0;
  p_output1[8]=t4879*t5423;
  p_output1[9]=t1938*t5423;
  p_output1[10]=-1.*t4885;
  p_output1[11]=0;
  p_output1[12]=0.25*(t1433*t4879*t4885 + t1938*t5186) - 0.035*(-1.*t1433*t1938 + t4879*t4885*t5186) + 0.052*t4879*t5423 + var1[0];
  p_output1[13]=0.25*(t1433*t1938*t4885 - 1.*t4879*t5186) - 0.035*(t1433*t4879 + t1938*t4885*t5186) + 0.052*t1938*t5423 + var1[1];
  p_output1[14]=-0.052*t4885 + 0.25*t1433*t5423 - 0.035*t5186*t5423 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseRightCameraOpticalFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
