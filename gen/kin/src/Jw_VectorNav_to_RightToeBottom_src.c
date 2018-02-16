/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_VectorNav_to_RightToeBottom_src.h"

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
  double t169;
  double t305;
  double t29;
  double t221;
  double t233;
  double t312;
  double t451;
  double t463;
  double t534;
  t169 = Cos(var1[7]);
  t305 = Cos(var1[8]);
  t29 = Sin(var1[7]);
  t221 = Sin(var1[8]);
  t233 = 0. + t221;
  t312 = t169*t305;
  t451 = 0. + t312;
  t463 = t305*t29;
  t534 = 0. + t463;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=1.;
  p_output1[22]=0.;
  p_output1[23]=0.;
  p_output1[24]=0.;
  p_output1[25]=0. + t29;
  p_output1[26]=0. - 1.*t169;
  p_output1[27]=t233;
  p_output1[28]=t451;
  p_output1[29]=t534;
  p_output1[30]=t233;
  p_output1[31]=t451;
  p_output1[32]=t534;
  p_output1[33]=t233;
  p_output1[34]=t451;
  p_output1[35]=t534;
  p_output1[36]=t233;
  p_output1[37]=t451;
  p_output1[38]=t534;
  p_output1[39]=t233;
  p_output1[40]=t451;
  p_output1[41]=t534;
}



void Jw_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
