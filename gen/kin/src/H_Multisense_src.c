/*
 * Automatically Generated from Mathematica.
 * Thu 9 Nov 2017 12:21:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_Multisense_src.h"

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
  double t1833;
  double t2426;
  double t1752;
  double t2479;
  double t2723;
  double t2771;
  double t3070;
  double t3125;
  double t3133;
  double t3138;
  double t3152;
  double t3156;
  t1833 = Cos(var1[4]);
  t2426 = Sin(var1[3]);
  t1752 = Cos(var1[3]);
  t2479 = Sin(var1[4]);
  t2723 = Cos(var1[5]);
  t2771 = Sin(var1[5]);
  t3070 = t1752*t2723*t2479;
  t3125 = t2426*t2771;
  t3133 = t3070 + t3125;
  t3138 = t2723*t2426*t2479;
  t3152 = -1.*t1752*t2771;
  t3156 = t3138 + t3152;
  p_output1[0]=t1752*t1833;
  p_output1[1]=t1833*t2426;
  p_output1[2]=-1.*t2479;
  p_output1[3]=0;
  p_output1[4]=-1.*t2426*t2723 + t1752*t2479*t2771;
  p_output1[5]=t1752*t2723 + t2426*t2479*t2771;
  p_output1[6]=t1833*t2771;
  p_output1[7]=0;
  p_output1[8]=t3133;
  p_output1[9]=t3156;
  p_output1[10]=t1833*t2723;
  p_output1[11]=0;
  p_output1[12]=0.0507*t1752*t1833 + 0.2784*t3133 + var1[0];
  p_output1[13]=0.0507*t1833*t2426 + 0.2784*t3156 + var1[1];
  p_output1[14]=-0.0507*t2479 + 0.2784*t1833*t2723 + var1[2];
  p_output1[15]=1.;
}



void H_Multisense_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
