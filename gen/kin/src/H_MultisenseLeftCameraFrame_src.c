/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseLeftCameraFrame_src.h"

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
  double t1071;
  double t3226;
  double t735;
  double t3870;
  double t3953;
  double t3983;
  double t4108;
  double t4127;
  double t4149;
  double t3980;
  double t3986;
  double t3994;
  double t4155;
  double t4184;
  double t4224;
  double t4033;
  double t4052;
  double t4065;
  t1071 = Cos(var1[4]);
  t3226 = Sin(var1[3]);
  t735 = Cos(var1[3]);
  t3870 = Sin(var1[4]);
  t3953 = Cos(var1[5]);
  t3983 = Sin(var1[5]);
  t4108 = t735*t3953*t3870;
  t4127 = t3226*t3983;
  t4149 = t4108 + t4127;
  t3980 = -1.*t3953*t3226;
  t3986 = t735*t3870*t3983;
  t3994 = t3980 + t3986;
  t4155 = t3953*t3226*t3870;
  t4184 = -1.*t735*t3983;
  t4224 = t4155 + t4184;
  t4033 = t735*t3953;
  t4052 = t3226*t3870*t3983;
  t4065 = t4033 + t4052;
  p_output1[0]=t1071*t735;
  p_output1[1]=t1071*t3226;
  p_output1[2]=-1.*t3870;
  p_output1[3]=0;
  p_output1[4]=t3994;
  p_output1[5]=t4065;
  p_output1[6]=t1071*t3983;
  p_output1[7]=0;
  p_output1[8]=t4149;
  p_output1[9]=t4224;
  p_output1[10]=t1071*t3953;
  p_output1[11]=0;
  p_output1[12]=0.035*t3994 + 0.25*t4149 + 0.052*t1071*t735 + var1[0];
  p_output1[13]=0.052*t1071*t3226 + 0.035*t4065 + 0.25*t4224 + var1[1];
  p_output1[14]=-0.052*t3870 + 0.25*t1071*t3953 + 0.035*t1071*t3983 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseLeftCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
