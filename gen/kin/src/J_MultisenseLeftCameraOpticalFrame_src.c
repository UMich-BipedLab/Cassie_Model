/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:21 GMT-05:00
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
  double t394;
  double t4874;
  double t1386;
  double t4028;
  double t4958;
  double t341;
  double t5008;
  double t5013;
  double t5027;
  double t4989;
  double t4995;
  double t4996;
  t394 = Sin(var1[3]);
  t4874 = Cos(var1[3]);
  t1386 = Cos(var1[5]);
  t4028 = Sin(var1[4]);
  t4958 = Sin(var1[5]);
  t341 = Cos(var1[4]);
  t5008 = t4874*t1386*t4028;
  t5013 = t394*t4958;
  t5027 = t5008 + t5013;
  t4989 = -1.*t4874*t1386;
  t4995 = -1.*t394*t4028*t4958;
  t4996 = t4989 + t4995;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.052*t341*t394 + 0.25*(-1.*t1386*t394*t4028 + t4874*t4958) + 0.035*t4996;
  p_output1[10]=0.052*t341*t4874 + 0.035*(-1.*t1386*t394 + t4028*t4874*t4958) + 0.25*t5027;
  p_output1[11]=0;
  p_output1[12]=0.25*t1386*t341*t4874 - 0.052*t4028*t4874 + 0.035*t341*t4874*t4958;
  p_output1[13]=0.25*t1386*t341*t394 - 0.052*t394*t4028 + 0.035*t341*t394*t4958;
  p_output1[14]=-0.052*t341 - 0.25*t1386*t4028 - 0.035*t4028*t4958;
  p_output1[15]=0.25*(t1386*t394 - 1.*t4028*t4874*t4958) + 0.035*t5027;
  p_output1[16]=0.035*(t1386*t394*t4028 - 1.*t4874*t4958) + 0.25*t4996;
  p_output1[17]=0.035*t1386*t341 - 0.25*t341*t4958;
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
