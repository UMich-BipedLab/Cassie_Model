/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:18 GMT-05:00
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
  double t228;
  double t2201;
  double t207;
  double t3572;
  double t3691;
  double t4952;
  double t5006;
  double t5010;
  double t5020;
  double t4943;
  double t4965;
  double t4975;
  double t5022;
  double t5072;
  double t5085;
  double t4983;
  double t4995;
  double t4997;
  t228 = Cos(var1[4]);
  t2201 = Sin(var1[3]);
  t207 = Cos(var1[3]);
  t3572 = Sin(var1[4]);
  t3691 = Cos(var1[5]);
  t4952 = Sin(var1[5]);
  t5006 = t207*t3691*t3572;
  t5010 = t2201*t4952;
  t5020 = t5006 + t5010;
  t4943 = -1.*t3691*t2201;
  t4965 = t207*t3572*t4952;
  t4975 = t4943 + t4965;
  t5022 = t3691*t2201*t3572;
  t5072 = -1.*t207*t4952;
  t5085 = t5022 + t5072;
  t4983 = t207*t3691;
  t4995 = t2201*t3572*t4952;
  t4997 = t4983 + t4995;
  p_output1[0]=t207*t228;
  p_output1[1]=t2201*t228;
  p_output1[2]=-1.*t3572;
  p_output1[3]=0;
  p_output1[4]=t4975;
  p_output1[5]=t4997;
  p_output1[6]=t228*t4952;
  p_output1[7]=0;
  p_output1[8]=t5020;
  p_output1[9]=t5085;
  p_output1[10]=t228*t3691;
  p_output1[11]=0;
  p_output1[12]=0.052*t207*t228 - 0.035*t4975 + 0.25*t5020 + var1[0];
  p_output1[13]=0.052*t2201*t228 - 0.035*t4997 + 0.25*t5085 + var1[1];
  p_output1[14]=-0.052*t3572 + 0.25*t228*t3691 - 0.035*t228*t4952 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseRightCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
