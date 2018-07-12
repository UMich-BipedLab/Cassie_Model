/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_right_src.h"

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
  double t1055;
  double t3601;
  double t456;
  double t2536;
  double t3701;
  double t4655;
  double t3084;
  double t3876;
  double t4464;
  double t423;
  double t4660;
  double t5373;
  double t5593;
  double t378;
  double t6183;
  double t6322;
  double t6331;
  double t6379;
  double t6690;
  double t6763;
  double t6774;
  double t6813;
  double t6821;
  double t6831;
  double t4501;
  double t5972;
  double t5982;
  double t6356;
  double t6471;
  double t6492;
  double t6534;
  double t6545;
  double t6548;
  double t6811;
  double t6847;
  double t6851;
  double t6889;
  double t6897;
  double t6913;
  double t6918;
  double t6929;
  double t6941;
  double t6973;
  double t7029;
  double t7035;
  double t7059;
  double t7079;
  double t7096;
  double t7116;
  double t7128;
  double t7139;
  t1055 = Cos(var1[5]);
  t3601 = Sin(var1[3]);
  t456 = Cos(var1[3]);
  t2536 = Sin(var1[4]);
  t3701 = Sin(var1[5]);
  t4655 = Sin(var1[13]);
  t3084 = t456*t1055*t2536;
  t3876 = t3601*t3701;
  t4464 = t3084 + t3876;
  t423 = Cos(var1[13]);
  t4660 = -1.*t1055*t3601;
  t5373 = t456*t2536*t3701;
  t5593 = t4660 + t5373;
  t378 = Cos(var1[15]);
  t6183 = Sin(var1[15]);
  t6322 = Cos(var1[14]);
  t6331 = Cos(var1[4]);
  t6379 = Sin(var1[14]);
  t6690 = t1055*t3601*t2536;
  t6763 = -1.*t456*t3701;
  t6774 = t6690 + t6763;
  t6813 = t456*t1055;
  t6821 = t3601*t2536*t3701;
  t6831 = t6813 + t6821;
  t4501 = t423*t4464;
  t5972 = -1.*t4655*t5593;
  t5982 = t4501 + t5972;
  t6356 = t6322*t456*t6331;
  t6471 = t4655*t4464;
  t6492 = t423*t5593;
  t6534 = t6471 + t6492;
  t6545 = t6379*t6534;
  t6548 = t6356 + t6545;
  t6811 = t423*t6774;
  t6847 = -1.*t4655*t6831;
  t6851 = t6811 + t6847;
  t6889 = t6322*t6331*t3601;
  t6897 = t4655*t6774;
  t6913 = t423*t6831;
  t6918 = t6897 + t6913;
  t6929 = t6379*t6918;
  t6941 = t6889 + t6929;
  t6973 = t423*t6331*t1055;
  t7029 = -1.*t6331*t4655*t3701;
  t7035 = t6973 + t7029;
  t7059 = -1.*t6322*t2536;
  t7079 = t6331*t1055*t4655;
  t7096 = t423*t6331*t3701;
  t7116 = t7079 + t7096;
  t7128 = t6379*t7116;
  t7139 = t7059 + t7128;
  p_output1[0]=-1.*t378*t5982 + t6183*t6548;
  p_output1[1]=-1.*t378*t6851 + t6183*t6941;
  p_output1[2]=-1.*t378*t7035 + t6183*t7139;
  p_output1[3]=t5982*t6183 + t378*t6548;
  p_output1[4]=t6183*t6851 + t378*t6941;
  p_output1[5]=t6183*t7035 + t378*t7139;
  p_output1[6]=t456*t6331*t6379 - 1.*t6322*t6534;
  p_output1[7]=t3601*t6331*t6379 - 1.*t6322*t6918;
  p_output1[8]=-1.*t2536*t6379 - 1.*t6322*t7116;
}



void R_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
