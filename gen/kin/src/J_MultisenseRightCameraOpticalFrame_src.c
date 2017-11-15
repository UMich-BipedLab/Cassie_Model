/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseRightCameraOpticalFrame_src.h"

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
  double t3652;
  double t5126;
  double t5098;
  double t5104;
  double t5133;
  double t1591;
  double t5176;
  double t5177;
  double t5180;
  double t5153;
  double t5154;
  double t5162;
  t3652 = Sin(var1[3]);
  t5126 = Cos(var1[3]);
  t5098 = Cos(var1[5]);
  t5104 = Sin(var1[4]);
  t5133 = Sin(var1[5]);
  t1591 = Cos(var1[4]);
  t5176 = t5126*t5098*t5104;
  t5177 = t3652*t5133;
  t5180 = t5176 + t5177;
  t5153 = -1.*t5126*t5098;
  t5154 = -1.*t3652*t5104*t5133;
  t5162 = t5153 + t5154;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.052*t1591*t3652 + 0.25*(-1.*t3652*t5098*t5104 + t5126*t5133) - 0.035*t5162;
  p_output1[10]=0.052*t1591*t5126 - 0.035*(-1.*t3652*t5098 + t5104*t5126*t5133) + 0.25*t5180;
  p_output1[11]=0;
  p_output1[12]=0.25*t1591*t5098*t5126 - 0.052*t5104*t5126 - 0.035*t1591*t5126*t5133;
  p_output1[13]=0.25*t1591*t3652*t5098 - 0.052*t3652*t5104 - 0.035*t1591*t3652*t5133;
  p_output1[14]=-0.052*t1591 - 0.25*t5098*t5104 + 0.035*t5104*t5133;
  p_output1[15]=0.25*(t3652*t5098 - 1.*t5104*t5126*t5133) - 0.035*t5180;
  p_output1[16]=-0.035*(t3652*t5098*t5104 - 1.*t5126*t5133) + 0.25*t5162;
  p_output1[17]=-0.035*t1591*t5098 - 0.25*t1591*t5133;
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



void J_MultisenseRightCameraOpticalFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
