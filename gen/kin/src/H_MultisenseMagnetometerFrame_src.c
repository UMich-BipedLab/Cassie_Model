/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseMagnetometerFrame_src.h"

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
  double t396;
  double t5345;
  double t3339;
  double t44;
  double t5351;
  double t5390;
  double t5394;
  double t5398;
  double t5399;
  double t5403;
  double t5406;
  double t5407;
  t396 = Cos(var1[5]);
  t5345 = Sin(var1[3]);
  t3339 = Sin(var1[4]);
  t44 = Cos(var1[3]);
  t5351 = Sin(var1[5]);
  t5390 = Cos(var1[4]);
  t5394 = -1.*t396*t5345;
  t5398 = t44*t3339*t5351;
  t5399 = t5394 + t5398;
  t5403 = t44*t396;
  t5406 = t5345*t3339*t5351;
  t5407 = t5403 + t5406;
  p_output1[0]=-1.*t3339*t396*t44 - 1.*t5345*t5351;
  p_output1[1]=-1.*t3339*t396*t5345 + t44*t5351;
  p_output1[2]=-1.*t396*t5390;
  p_output1[3]=0;
  p_output1[4]=t5399;
  p_output1[5]=t5407;
  p_output1[6]=t5351*t5390;
  p_output1[7]=0;
  p_output1[8]=t44*t5390;
  p_output1[9]=t5345*t5390;
  p_output1[10]=-1.*t3339;
  p_output1[11]=0;
  p_output1[12]=0.24925*(t3339*t396*t44 + t5345*t5351) + 0.047*t44*t5390 + 0.0302*t5399 + var1[0];
  p_output1[13]=0.24925*(t3339*t396*t5345 - 1.*t44*t5351) + 0.047*t5345*t5390 + 0.0302*t5407 + var1[1];
  p_output1[14]=-0.047*t3339 + 0.24925*t396*t5390 + 0.0302*t5351*t5390 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseMagnetometerFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
