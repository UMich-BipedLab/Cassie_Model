/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseLeftCameraFrame_src.h"

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
  double t1373;
  double t2442;
  double t1579;
  double t1910;
  double t3084;
  double t936;
  double t3864;
  double t3865;
  double t3874;
  double t3684;
  double t3687;
  double t3802;
  t1373 = Sin(var1[3]);
  t2442 = Cos(var1[3]);
  t1579 = Cos(var1[5]);
  t1910 = Sin(var1[4]);
  t3084 = Sin(var1[5]);
  t936 = Cos(var1[4]);
  t3864 = t2442*t1579*t1910;
  t3865 = t1373*t3084;
  t3874 = t3864 + t3865;
  t3684 = -1.*t2442*t1579;
  t3687 = -1.*t1373*t1910*t3084;
  t3802 = t3684 + t3687;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.25*(-1.*t1373*t1579*t1910 + t2442*t3084) + 0.035*t3802 - 0.052*t1373*t936;
  p_output1[10]=0.035*(-1.*t1373*t1579 + t1910*t2442*t3084) + 0.25*t3874 + 0.052*t2442*t936;
  p_output1[11]=0;
  p_output1[12]=-0.052*t1910*t2442 + 0.25*t1579*t2442*t936 + 0.035*t2442*t3084*t936;
  p_output1[13]=-0.052*t1373*t1910 + 0.25*t1373*t1579*t936 + 0.035*t1373*t3084*t936;
  p_output1[14]=-0.25*t1579*t1910 - 0.035*t1910*t3084 - 0.052*t936;
  p_output1[15]=0.25*(t1373*t1579 - 1.*t1910*t2442*t3084) + 0.035*t3874;
  p_output1[16]=0.035*(t1373*t1579*t1910 - 1.*t2442*t3084) + 0.25*t3802;
  p_output1[17]=0.035*t1579*t936 - 0.25*t3084*t936;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_MultisenseLeftCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
