/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseHead_src.h"

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
  double t181;
  double t946;
  double t161;
  double t1856;
  double t1929;
  double t1971;
  double t3257;
  double t3435;
  double t3448;
  double t3471;
  double t3506;
  double t3516;
  t181 = Cos(var1[4]);
  t946 = Sin(var1[3]);
  t161 = Cos(var1[3]);
  t1856 = Sin(var1[4]);
  t1929 = Cos(var1[5]);
  t1971 = Sin(var1[5]);
  t3257 = t161*t1929*t1856;
  t3435 = t946*t1971;
  t3448 = t3257 + t3435;
  t3471 = t1929*t946*t1856;
  t3506 = -1.*t161*t1971;
  t3516 = t3471 + t3506;
  p_output1[0]=t161*t181;
  p_output1[1]=t181*t946;
  p_output1[2]=-1.*t1856;
  p_output1[3]=0;
  p_output1[4]=t161*t1856*t1971 - 1.*t1929*t946;
  p_output1[5]=t161*t1929 + t1856*t1971*t946;
  p_output1[6]=t181*t1971;
  p_output1[7]=0;
  p_output1[8]=t3448;
  p_output1[9]=t3516;
  p_output1[10]=t181*t1929;
  p_output1[11]=0;
  p_output1[12]=0.25*t3448 + var1[0];
  p_output1[13]=0.25*t3516 + var1[1];
  p_output1[14]=0.25*t181*t1929 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseHead_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
