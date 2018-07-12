/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_right_src.h"

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
  double t2177;
  double t561;
  double t2901;
  double t2313;
  double t6025;
  double t6540;
  double t3522;
  double t6746;
  double t6058;
  double t6541;
  double t6661;
  double t6815;
  double t6824;
  double t6833;
  double t6848;
  double t6849;
  double t6872;
  double t6905;
  double t6911;
  double t6919;
  t2177 = Cos(var1[4]);
  t561 = Cos(var1[3]);
  t2901 = Sin(var1[4]);
  t2313 = Sin(var1[3]);
  t6025 = Cos(var1[5]);
  t6540 = Sin(var1[5]);
  t3522 = Sin(var1[13]);
  t6746 = Cos(var1[13]);
  t6058 = t561*t6025*t2901;
  t6541 = t2313*t6540;
  t6661 = t6058 + t6541;
  t6815 = -1.*t6025*t2313;
  t6824 = t561*t2901*t6540;
  t6833 = t6815 + t6824;
  t6848 = t6025*t2313*t2901;
  t6849 = -1.*t561*t6540;
  t6872 = t6848 + t6849;
  t6905 = t561*t6025;
  t6911 = t2313*t2901*t6540;
  t6919 = t6905 + t6911;
  p_output1[0]=t2177*t561;
  p_output1[1]=t2177*t2313;
  p_output1[2]=-1.*t2901;
  p_output1[3]=t3522*t6661 + t6746*t6833;
  p_output1[4]=t3522*t6872 + t6746*t6919;
  p_output1[5]=t2177*t3522*t6025 + t2177*t6540*t6746;
  p_output1[6]=t6661*t6746 - 1.*t3522*t6833;
  p_output1[7]=t6746*t6872 - 1.*t3522*t6919;
  p_output1[8]=-1.*t2177*t3522*t6540 + t2177*t6025*t6746;
}



void R_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
