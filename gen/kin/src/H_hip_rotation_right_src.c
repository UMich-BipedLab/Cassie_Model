/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:32 GMT-04:00
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
  double t1521;
  double t2471;
  double t1235;
  double t2262;
  double t2549;
  double t459;
  double t3168;
  double t4072;
  double t2343;
  double t2868;
  double t2947;
  double t3179;
  double t3299;
  double t3314;
  double t4184;
  double t4258;
  double t3638;
  double t3708;
  double t3773;
  double t3877;
  double t3903;
  double t3957;
  double t4316;
  double t4317;
  double t4344;
  double t4436;
  double t4441;
  double t4446;
  double t4526;
  double t4638;
  double t4683;
  double t5062;
  double t5077;
  double t4253;
  double t4385;
  double t4400;
  double t5080;
  double t5092;
  double t5103;
  double t5107;
  double t5125;
  double t5171;
  double t5176;
  double t5181;
  double t5191;
  double t5244;
  double t5302;
  double t5319;
  double t4411;
  double t4471;
  double t4479;
  double t4495;
  double t4746;
  double t4823;
  t1521 = Cos(var1[5]);
  t2471 = Sin(var1[3]);
  t1235 = Cos(var1[3]);
  t2262 = Sin(var1[4]);
  t2549 = Sin(var1[5]);
  t459 = Cos(var1[13]);
  t3168 = Sin(var1[13]);
  t4072 = Cos(var1[4]);
  t2343 = t1235*t1521*t2262;
  t2868 = t2471*t2549;
  t2947 = t2343 + t2868;
  t3179 = -1.*t1521*t2471;
  t3299 = t1235*t2262*t2549;
  t3314 = t3179 + t3299;
  t4184 = Cos(var1[14]);
  t4258 = Sin(var1[14]);
  t3638 = t1521*t2471*t2262;
  t3708 = -1.*t1235*t2549;
  t3773 = t3638 + t3708;
  t3877 = t1235*t1521;
  t3903 = t2471*t2262*t2549;
  t3957 = t3877 + t3903;
  t4316 = t3168*t2947;
  t4317 = t459*t3314;
  t4344 = t4316 + t4317;
  t4436 = t3168*t3773;
  t4441 = t459*t3957;
  t4446 = t4436 + t4441;
  t4526 = t4072*t1521*t3168;
  t4638 = t459*t4072*t2549;
  t4683 = t4526 + t4638;
  t5062 = -1.*t4184;
  t5077 = 1. + t5062;
  t4253 = t4184*t1235*t4072;
  t4385 = t4258*t4344;
  t4400 = t4253 + t4385;
  t5080 = -0.049*t5077;
  t5092 = -0.135*t4258;
  t5103 = 0. + t5080 + t5092;
  t5107 = 0.135*t3168;
  t5125 = 0. + t5107;
  t5171 = -1.*t459;
  t5176 = 1. + t5171;
  t5181 = -0.135*t5176;
  t5191 = 0. + t5181;
  t5244 = -0.135*t5077;
  t5302 = 0.049*t4258;
  t5319 = 0. + t5244 + t5302;
  t4411 = t4184*t4072*t2471;
  t4471 = t4258*t4446;
  t4479 = t4411 + t4471;
  t4495 = -1.*t4184*t2262;
  t4746 = t4258*t4683;
  t4823 = t4495 + t4746;
  p_output1[0]=t3168*t3314 - 1.*t2947*t459;
  p_output1[1]=t3168*t3957 - 1.*t3773*t459;
  p_output1[2]=t2549*t3168*t4072 - 1.*t1521*t4072*t459;
  p_output1[3]=0.;
  p_output1[4]=t4400;
  p_output1[5]=t4479;
  p_output1[6]=t4823;
  p_output1[7]=0.;
  p_output1[8]=t1235*t4072*t4258 - 1.*t4184*t4344;
  p_output1[9]=t2471*t4072*t4258 - 1.*t4184*t4446;
  p_output1[10]=-1.*t2262*t4258 - 1.*t4184*t4683;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(-1.*t1235*t4072*t4258 + t4184*t4344) - 0.049*t4400 - 0.09*(-1.*t3168*t3314 + t2947*t459) + t1235*t4072*t5103 + t2947*t5125 + t3314*t5191 + t4344*t5319 + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t2471*t4072*t4258 + t4184*t4446) - 0.049*t4479 - 0.09*(-1.*t3168*t3957 + t3773*t459) + t2471*t4072*t5103 + t3773*t5125 + t3957*t5191 + t4446*t5319 + var1[1];
  p_output1[14]=0. - 0.09*(-1.*t2549*t3168*t4072 + t1521*t4072*t459) - 0.135*(t2262*t4258 + t4184*t4683) - 0.049*t4823 - 1.*t2262*t5103 + t1521*t4072*t5125 + t2549*t4072*t5191 + t4683*t5319 + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
