/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:09:02 GMT-04:00
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
  double t3685;
  double t5439;
  double t4618;
  double t91;
  double t5473;
  double t5544;
  double t5552;
  double t5559;
  double t5560;
  double t5566;
  double t5569;
  double t5573;
  t3685 = Cos(var1[5]);
  t5439 = Sin(var1[3]);
  t4618 = Sin(var1[4]);
  t91 = Cos(var1[3]);
  t5473 = Sin(var1[5]);
  t5544 = Cos(var1[4]);
  t5552 = -1.*t3685*t5439;
  t5559 = t91*t4618*t5473;
  t5560 = t5552 + t5559;
  t5566 = t91*t3685;
  t5569 = t5439*t4618*t5473;
  t5573 = t5566 + t5569;
  p_output1[0]=-1.*t5439*t5473 - 1.*t3685*t4618*t91;
  p_output1[1]=-1.*t3685*t4618*t5439 + t5473*t91;
  p_output1[2]=-1.*t3685*t5544;
  p_output1[3]=0;
  p_output1[4]=t5560;
  p_output1[5]=t5573;
  p_output1[6]=t5473*t5544;
  p_output1[7]=0;
  p_output1[8]=t5544*t91;
  p_output1[9]=t5439*t5544;
  p_output1[10]=-1.*t4618;
  p_output1[11]=0;
  p_output1[12]=0.0302*t5560 + 0.047*t5544*t91 + 0.24925*(t5439*t5473 + t3685*t4618*t91) + var1[0];
  p_output1[13]=0.047*t5439*t5544 + 0.0302*t5573 + 0.24925*(t3685*t4618*t5439 - 1.*t5473*t91) + var1[1];
  p_output1[14]=-0.047*t4618 + 0.24925*t3685*t5544 + 0.0302*t5473*t5544 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseAccelerometerFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
