/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseAccelerometerFrame_src.h"

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
  double t2229;
  double t5138;
  double t4312;
  double t1023;
  double t5162;
  double t5209;
  double t5216;
  double t5222;
  double t5228;
  double t5234;
  double t5235;
  double t5240;
  t2229 = Cos(var1[5]);
  t5138 = Sin(var1[3]);
  t4312 = Sin(var1[4]);
  t1023 = Cos(var1[3]);
  t5162 = Sin(var1[5]);
  t5209 = Cos(var1[4]);
  t5216 = -1.*t2229*t5138;
  t5222 = t1023*t4312*t5162;
  t5228 = t5216 + t5222;
  t5234 = t1023*t2229;
  t5235 = t5138*t4312*t5162;
  t5240 = t5234 + t5235;
  p_output1[0]=-1.*t1023*t2229*t4312 - 1.*t5138*t5162;
  p_output1[1]=-1.*t2229*t4312*t5138 + t1023*t5162;
  p_output1[2]=-1.*t2229*t5209;
  p_output1[3]=0;
  p_output1[4]=t5228;
  p_output1[5]=t5240;
  p_output1[6]=t5162*t5209;
  p_output1[7]=0;
  p_output1[8]=t1023*t5209;
  p_output1[9]=t5138*t5209;
  p_output1[10]=-1.*t4312;
  p_output1[11]=0;
  p_output1[12]=0.24925*(t1023*t2229*t4312 + t5138*t5162) + 0.047*t1023*t5209 + 0.0302*t5228 + var1[0];
  p_output1[13]=0.24925*(t2229*t4312*t5138 - 1.*t1023*t5162) + 0.047*t5138*t5209 + 0.0302*t5240 + var1[1];
  p_output1[14]=-0.047*t4312 + 0.24925*t2229*t5209 + 0.0302*t5162*t5209 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseAccelerometerFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
