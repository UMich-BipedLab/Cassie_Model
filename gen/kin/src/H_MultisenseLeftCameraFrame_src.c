/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:14 GMT-05:00
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
  double t1872;
  double t3802;
  double t1181;
  double t3909;
  double t3948;
  double t3996;
  double t4187;
  double t4192;
  double t4204;
  double t3960;
  double t4011;
  double t4026;
  double t4226;
  double t4323;
  double t4337;
  double t4100;
  double t4116;
  double t4124;
  t1872 = Cos(var1[4]);
  t3802 = Sin(var1[3]);
  t1181 = Cos(var1[3]);
  t3909 = Sin(var1[4]);
  t3948 = Cos(var1[5]);
  t3996 = Sin(var1[5]);
  t4187 = t1181*t3948*t3909;
  t4192 = t3802*t3996;
  t4204 = t4187 + t4192;
  t3960 = -1.*t3948*t3802;
  t4011 = t1181*t3909*t3996;
  t4026 = t3960 + t4011;
  t4226 = t3948*t3802*t3909;
  t4323 = -1.*t1181*t3996;
  t4337 = t4226 + t4323;
  t4100 = t1181*t3948;
  t4116 = t3802*t3909*t3996;
  t4124 = t4100 + t4116;
  p_output1[0]=t1181*t1872;
  p_output1[1]=t1872*t3802;
  p_output1[2]=-1.*t3909;
  p_output1[3]=0;
  p_output1[4]=t4026;
  p_output1[5]=t4124;
  p_output1[6]=t1872*t3996;
  p_output1[7]=0;
  p_output1[8]=t4204;
  p_output1[9]=t4337;
  p_output1[10]=t1872*t3948;
  p_output1[11]=0;
  p_output1[12]=0.052*t1181*t1872 + 0.035*t4026 + 0.25*t4204 + var1[0];
  p_output1[13]=0.052*t1872*t3802 + 0.035*t4124 + 0.25*t4337 + var1[1];
  p_output1[14]=-0.052*t3909 + 0.25*t1872*t3948 + 0.035*t1872*t3996 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseLeftCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
