/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_right_src.h"

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
  double t20;
  double t2895;
  double t3165;
  double t2988;
  double t3784;
  double t265;
  double t267;
  double t330;
  double t601;
  double t2524;
  double t3039;
  double t4332;
  double t4422;
  double t4532;
  double t5497;
  double t5522;
  double t5556;
  double t234;
  double t6165;
  double t6279;
  double t6305;
  double t6314;
  double t6327;
  double t6345;
  double t6505;
  double t6551;
  double t6597;
  double t6604;
  double t6839;
  double t6898;
  double t6900;
  double t394;
  double t1630;
  double t1734;
  double t2666;
  double t2718;
  double t4956;
  double t5256;
  double t5302;
  double t5389;
  double t5875;
  double t6006;
  double t6086;
  double t7132;
  double t7133;
  double t7139;
  double t7173;
  double t7201;
  double t7220;
  double t6478;
  double t6532;
  double t6545;
  double t7247;
  double t7260;
  double t7264;
  double t6774;
  double t6784;
  double t6821;
  double t7397;
  double t7402;
  double t7405;
  double t7494;
  double t7498;
  double t7501;
  double t7713;
  double t7716;
  double t7728;
  double t7754;
  double t7763;
  double t7784;
  double t7860;
  double t7862;
  double t7875;
  t20 = Cos(var1[3]);
  t2895 = Cos(var1[5]);
  t3165 = Sin(var1[3]);
  t2988 = Sin(var1[4]);
  t3784 = Sin(var1[5]);
  t265 = Cos(var1[14]);
  t267 = -1.*t265;
  t330 = 1. + t267;
  t601 = Sin(var1[14]);
  t2524 = Sin(var1[13]);
  t3039 = t20*t2895*t2988;
  t4332 = t3165*t3784;
  t4422 = t3039 + t4332;
  t4532 = Cos(var1[13]);
  t5497 = -1.*t2895*t3165;
  t5522 = t20*t2988*t3784;
  t5556 = t5497 + t5522;
  t234 = Cos(var1[4]);
  t6165 = t2524*t4422;
  t6279 = t4532*t5556;
  t6305 = t6165 + t6279;
  t6314 = Cos(var1[15]);
  t6327 = -1.*t6314;
  t6345 = 1. + t6327;
  t6505 = Sin(var1[15]);
  t6551 = t4532*t4422;
  t6597 = -1.*t2524*t5556;
  t6604 = t6551 + t6597;
  t6839 = t265*t20*t234;
  t6898 = t601*t6305;
  t6900 = t6839 + t6898;
  t394 = -0.049*t330;
  t1630 = -0.135*t601;
  t1734 = 0. + t394 + t1630;
  t2666 = 0.135*t2524;
  t2718 = 0. + t2666;
  t4956 = -1.*t4532;
  t5256 = 1. + t4956;
  t5302 = -0.135*t5256;
  t5389 = 0. + t5302;
  t5875 = -0.135*t330;
  t6006 = 0.049*t601;
  t6086 = 0. + t5875 + t6006;
  t7132 = t2895*t3165*t2988;
  t7133 = -1.*t20*t3784;
  t7139 = t7132 + t7133;
  t7173 = t20*t2895;
  t7201 = t3165*t2988*t3784;
  t7220 = t7173 + t7201;
  t6478 = -0.09*t6345;
  t6532 = 0.049*t6505;
  t6545 = 0. + t6478 + t6532;
  t7247 = t2524*t7139;
  t7260 = t4532*t7220;
  t7264 = t7247 + t7260;
  t6774 = -0.049*t6345;
  t6784 = -0.09*t6505;
  t6821 = 0. + t6774 + t6784;
  t7397 = t4532*t7139;
  t7402 = -1.*t2524*t7220;
  t7405 = t7397 + t7402;
  t7494 = t265*t234*t3165;
  t7498 = t601*t7264;
  t7501 = t7494 + t7498;
  t7713 = t234*t2895*t2524;
  t7716 = t4532*t234*t3784;
  t7728 = t7713 + t7716;
  t7754 = t4532*t234*t2895;
  t7763 = -1.*t234*t2524*t3784;
  t7784 = t7754 + t7763;
  t7860 = -1.*t265*t2988;
  t7862 = t601*t7728;
  t7875 = t7860 + t7862;
  p_output1[0]=0. + t1734*t20*t234 + t2718*t4422 + t5389*t5556 + t6086*t6305 - 0.135*(-1.*t20*t234*t601 + t265*t6305) + t6545*t6604 + t6821*t6900 - 0.049*(t6505*t6604 + t6314*t6900) - 0.09*(t6314*t6604 - 1.*t6505*t6900) + var1[0];
  p_output1[1]=0. + t1734*t234*t3165 + t2718*t7139 + t5389*t7220 + t6086*t7264 - 0.135*(-1.*t234*t3165*t601 + t265*t7264) + t6545*t7405 + t6821*t7501 - 0.049*(t6505*t7405 + t6314*t7501) - 0.09*(t6314*t7405 - 1.*t6505*t7501) + var1[1];
  p_output1[2]=0. + t234*t2718*t2895 - 1.*t1734*t2988 + t234*t3784*t5389 + t6086*t7728 - 0.135*(t2988*t601 + t265*t7728) + t6545*t7784 + t6821*t7875 - 0.049*(t6505*t7784 + t6314*t7875) - 0.09*(t6314*t7784 - 1.*t6505*t7875) + var1[2];
}



void p_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
