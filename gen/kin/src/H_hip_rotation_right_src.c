/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_right_src.h"

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
  double t5966;
  double t5989;
  double t3653;
  double t5978;
  double t5991;
  double t780;
  double t6000;
  double t6027;
  double t5987;
  double t5992;
  double t5996;
  double t6007;
  double t6009;
  double t6012;
  double t6015;
  double t6017;
  double t6018;
  double t6021;
  double t6022;
  double t6024;
  double t6059;
  double t6060;
  double t6062;
  double t6063;
  double t6064;
  double t6065;
  t5966 = Cos(var1[5]);
  t5989 = Sin(var1[3]);
  t3653 = Cos(var1[3]);
  t5978 = Sin(var1[4]);
  t5991 = Sin(var1[5]);
  t780 = Cos(var1[13]);
  t6000 = Sin(var1[13]);
  t6027 = Cos(var1[4]);
  t5987 = t3653*t5966*t5978;
  t5992 = t5989*t5991;
  t5996 = t5987 + t5992;
  t6007 = -1.*t5966*t5989;
  t6009 = t3653*t5978*t5991;
  t6012 = t6007 + t6009;
  t6015 = t5966*t5989*t5978;
  t6017 = -1.*t3653*t5991;
  t6018 = t6015 + t6017;
  t6021 = t3653*t5966;
  t6022 = t5989*t5978*t5991;
  t6024 = t6021 + t6022;
  t6059 = 0.135*t6000;
  t6060 = 0. + t6059;
  t6062 = -1.*t780;
  t6063 = 1. + t6062;
  t6064 = -0.135*t6063;
  t6065 = 0. + t6064;
  p_output1[0]=t6000*t6012 - 1.*t5996*t780;
  p_output1[1]=t6000*t6024 - 1.*t6018*t780;
  p_output1[2]=t5991*t6000*t6027 - 1.*t5966*t6027*t780;
  p_output1[3]=0.;
  p_output1[4]=t3653*t6027;
  p_output1[5]=t5989*t6027;
  p_output1[6]=-1.*t5978;
  p_output1[7]=0.;
  p_output1[8]=-1.*t5996*t6000 - 1.*t6012*t780;
  p_output1[9]=-1.*t6000*t6018 - 1.*t6024*t780;
  p_output1[10]=-1.*t5966*t6000*t6027 - 1.*t5991*t6027*t780;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t3653*t6027 + t5996*t6060 + t6012*t6065 - 0.09*(-1.*t6000*t6012 + t5996*t780) - 0.135*(t5996*t6000 + t6012*t780) + var1[0];
  p_output1[13]=0. - 0.049*t5989*t6027 + t6018*t6060 + t6024*t6065 - 0.09*(-1.*t6000*t6024 + t6018*t780) - 0.135*(t6000*t6018 + t6024*t780) + var1[1];
  p_output1[14]=0. + 0.049*t5978 + t5966*t6027*t6060 + t5991*t6027*t6065 - 0.09*(-1.*t5991*t6000*t6027 + t5966*t6027*t780) - 0.135*(t5966*t6000*t6027 + t5991*t6027*t780) + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
