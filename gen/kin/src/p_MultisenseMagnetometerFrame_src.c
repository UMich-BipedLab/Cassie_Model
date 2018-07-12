/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:54 GMT-04:00
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
  double t428;
  double t2801;
  double t3826;
  double t3080;
  double t5133;
  double t454;
  t428 = Cos(var1[3]);
  t2801 = Cos(var1[5]);
  t3826 = Sin(var1[3]);
  t3080 = Sin(var1[4]);
  t5133 = Sin(var1[5]);
  t454 = Cos(var1[4]);
  p_output1[0]=0.047*t428*t454 + 0.24925*(t2801*t3080*t428 + t3826*t5133) + 0.0302*(-1.*t2801*t3826 + t3080*t428*t5133) + var1[0];
  p_output1[1]=0.047*t3826*t454 + 0.0302*(t2801*t428 + t3080*t3826*t5133) + 0.24925*(t2801*t3080*t3826 - 1.*t428*t5133) + var1[1];
  p_output1[2]=-0.047*t3080 + 0.24925*t2801*t454 + 0.0302*t454*t5133 + var1[2];
}



void p_MultisenseMagnetometerFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
