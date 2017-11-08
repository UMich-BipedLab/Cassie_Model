/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_src.h"

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
  double t2843;
  double t3308;
  double t355;
  double t4071;
  double t4160;
  double t4164;
  t2843 = Cos(var1[4]);
  t3308 = Sin(var1[3]);
  t355 = Cos(var1[3]);
  t4071 = Sin(var1[4]);
  t4160 = Cos(var1[5]);
  t4164 = Sin(var1[5]);
  p_output1[0]=t2843*t355;
  p_output1[1]=t2843*t3308;
  p_output1[2]=-1.*t4071;
  p_output1[3]=0;
  p_output1[4]=t3308*t4160 - 1.*t355*t4071*t4164;
  p_output1[5]=-1.*t355*t4160 - 1.*t3308*t4071*t4164;
  p_output1[6]=-1.*t2843*t4164;
  p_output1[7]=0;
  p_output1[8]=-1.*t355*t4071*t4160 - 1.*t3308*t4164;
  p_output1[9]=-1.*t3308*t4071*t4160 + t355*t4164;
  p_output1[10]=-1.*t2843*t4160;
  p_output1[11]=0;
  p_output1[12]=0.08225*t2843*t355 - 0.05156*(t355*t4071*t4160 + t3308*t4164) + var1[0];
  p_output1[13]=0.08225*t2843*t3308 - 0.05156*(t3308*t4071*t4160 - 1.*t355*t4164) + var1[1];
  p_output1[14]=-0.08225*t4071 - 0.05156*t2843*t4160 + var1[2];
  p_output1[15]=1.;
}



void H_VectorNav_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
