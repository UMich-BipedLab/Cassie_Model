/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t53;
  double t17;
  double t266;
  double t348;
  double t349;
  double t427;
  double t524;
  double t542;
  double t578;
  t53 = Sin(var1[0]);
  t17 = Cos(var1[0]);
  t266 = Cos(var1[1]);
  t348 = t266*t53;
  t349 = 0. + t348;
  t427 = -1.*t17*t266;
  t524 = 0. + t427;
  t542 = Sin(var1[1]);
  t578 = 0. + t542;
  p_output1[0]=0.;
  p_output1[1]=0.;
  p_output1[2]=1.;
  p_output1[3]=0. - 1.*t17;
  p_output1[4]=0. - 1.*t53;
  p_output1[5]=0.;
  p_output1[6]=t349;
  p_output1[7]=t524;
  p_output1[8]=t578;
  p_output1[9]=t349;
  p_output1[10]=t524;
  p_output1[11]=t578;
  p_output1[12]=t349;
  p_output1[13]=t524;
  p_output1[14]=t578;
  p_output1[15]=t349;
  p_output1[16]=t524;
  p_output1[17]=t578;
  p_output1[18]=t349;
  p_output1[19]=t524;
  p_output1[20]=t578;
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
}



void Jw_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
