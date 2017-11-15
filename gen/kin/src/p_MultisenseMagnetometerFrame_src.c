/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseMagnetometerFrame_src.h"

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
  double t2686;
  double t5264;
  double t5281;
  double t5266;
  double t5286;
  double t4510;
  t2686 = Cos(var1[3]);
  t5264 = Cos(var1[5]);
  t5281 = Sin(var1[3]);
  t5266 = Sin(var1[4]);
  t5286 = Sin(var1[5]);
  t4510 = Cos(var1[4]);
  p_output1[0]=0.047*t2686*t4510 + 0.0302*(-1.*t5264*t5281 + t2686*t5266*t5286) + 0.24925*(t2686*t5264*t5266 + t5281*t5286) + var1[0];
  p_output1[1]=0.047*t4510*t5281 + 0.24925*(t5264*t5266*t5281 - 1.*t2686*t5286) + 0.0302*(t2686*t5264 + t5266*t5281*t5286) + var1[1];
  p_output1[2]=0.24925*t4510*t5264 - 0.047*t5266 + 0.0302*t4510*t5286 + var1[2];
}



void p_MultisenseMagnetometerFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
