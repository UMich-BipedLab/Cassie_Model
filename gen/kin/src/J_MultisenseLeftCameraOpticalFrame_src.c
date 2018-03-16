/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseLeftCameraOpticalFrame_src.h"

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
  double t2672;
  double t5139;
  double t3599;
  double t4006;
  double t5174;
  double t1352;
  double t5268;
  double t5274;
  double t5295;
  double t5232;
  double t5233;
  double t5234;
  t2672 = Sin(var1[3]);
  t5139 = Cos(var1[3]);
  t3599 = Cos(var1[5]);
  t4006 = Sin(var1[4]);
  t5174 = Sin(var1[5]);
  t1352 = Cos(var1[4]);
  t5268 = t5139*t3599*t4006;
  t5274 = t2672*t5174;
  t5295 = t5268 + t5274;
  t5232 = -1.*t5139*t3599;
  t5233 = -1.*t2672*t4006*t5174;
  t5234 = t5232 + t5233;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.052*t1352*t2672 + 0.25*(-1.*t2672*t3599*t4006 + t5139*t5174) + 0.035*t5234;
  p_output1[10]=0.052*t1352*t5139 + 0.035*(-1.*t2672*t3599 + t4006*t5139*t5174) + 0.25*t5295;
  p_output1[11]=0;
  p_output1[12]=0.25*t1352*t3599*t5139 - 0.052*t4006*t5139 + 0.035*t1352*t5139*t5174;
  p_output1[13]=0.25*t1352*t2672*t3599 - 0.052*t2672*t4006 + 0.035*t1352*t2672*t5174;
  p_output1[14]=-0.052*t1352 - 0.25*t3599*t4006 - 0.035*t4006*t5174;
  p_output1[15]=0.25*(t2672*t3599 - 1.*t4006*t5139*t5174) + 0.035*t5295;
  p_output1[16]=0.035*(t2672*t3599*t4006 - 1.*t5139*t5174) + 0.25*t5234;
  p_output1[17]=0.035*t1352*t3599 - 0.25*t1352*t5174;
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



void J_MultisenseLeftCameraOpticalFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
