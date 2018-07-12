/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_left_src.h"

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
  double t2794;
  double t2224;
  double t3190;
  double t2248;
  double t3213;
  double t672;
  double t2402;
  double t3407;
  double t3429;
  double t3866;
  double t3922;
  double t3972;
  double t3973;
  double t4187;
  double t4209;
  double t4214;
  double t4229;
  double t4027;
  double t4069;
  double t4072;
  double t4250;
  double t4459;
  double t4466;
  double t4476;
  double t4492;
  double t4386;
  double t4414;
  double t4433;
  double t4549;
  double t4557;
  double t4559;
  double t896;
  double t1537;
  double t2036;
  double t2122;
  double t3974;
  double t4017;
  double t4796;
  double t4805;
  double t4814;
  double t4838;
  double t4850;
  double t4854;
  double t4215;
  double t4236;
  double t4240;
  double t4287;
  double t4296;
  double t4306;
  double t4884;
  double t4885;
  double t4902;
  double t4489;
  double t4497;
  double t4513;
  double t4560;
  double t4594;
  double t4599;
  double t4959;
  double t4968;
  double t4978;
  double t4988;
  double t4992;
  double t4993;
  double t5106;
  double t5111;
  double t5121;
  double t5155;
  double t5172;
  double t5173;
  double t5185;
  double t5206;
  double t5225;
  t2794 = Cos(var1[3]);
  t2224 = Cos(var1[5]);
  t3190 = Sin(var1[4]);
  t2248 = Sin(var1[3]);
  t3213 = Sin(var1[5]);
  t672 = Cos(var1[6]);
  t2402 = -1.*t2224*t2248;
  t3407 = t2794*t3190*t3213;
  t3429 = t2402 + t3407;
  t3866 = t2794*t2224*t3190;
  t3922 = t2248*t3213;
  t3972 = t3866 + t3922;
  t3973 = Sin(var1[6]);
  t4187 = Cos(var1[7]);
  t4209 = -1.*t4187;
  t4214 = 1. + t4209;
  t4229 = Sin(var1[7]);
  t4027 = t672*t3429;
  t4069 = t3972*t3973;
  t4072 = t4027 + t4069;
  t4250 = Cos(var1[4]);
  t4459 = Cos(var1[8]);
  t4466 = -1.*t4459;
  t4476 = 1. + t4466;
  t4492 = Sin(var1[8]);
  t4386 = t2794*t4250*t4187;
  t4414 = t4072*t4229;
  t4433 = t4386 + t4414;
  t4549 = t672*t3972;
  t4557 = -1.*t3429*t3973;
  t4559 = t4549 + t4557;
  t896 = -1.*t672;
  t1537 = 1. + t896;
  t2036 = 0.135*t1537;
  t2122 = 0. + t2036;
  t3974 = -0.135*t3973;
  t4017 = 0. + t3974;
  t4796 = t2794*t2224;
  t4805 = t2248*t3190*t3213;
  t4814 = t4796 + t4805;
  t4838 = t2224*t2248*t3190;
  t4850 = -1.*t2794*t3213;
  t4854 = t4838 + t4850;
  t4215 = 0.135*t4214;
  t4236 = 0.049*t4229;
  t4240 = 0. + t4215 + t4236;
  t4287 = -0.049*t4214;
  t4296 = 0.135*t4229;
  t4306 = 0. + t4287 + t4296;
  t4884 = t672*t4814;
  t4885 = t4854*t3973;
  t4902 = t4884 + t4885;
  t4489 = -0.049*t4476;
  t4497 = -0.09*t4492;
  t4513 = 0. + t4489 + t4497;
  t4560 = -0.09*t4476;
  t4594 = 0.049*t4492;
  t4599 = 0. + t4560 + t4594;
  t4959 = t4250*t4187*t2248;
  t4968 = t4902*t4229;
  t4978 = t4959 + t4968;
  t4988 = t672*t4854;
  t4992 = -1.*t4814*t3973;
  t4993 = t4988 + t4992;
  t5106 = t4250*t672*t3213;
  t5111 = t4250*t2224*t3973;
  t5121 = t5106 + t5111;
  t5155 = -1.*t4187*t3190;
  t5172 = t5121*t4229;
  t5173 = t5155 + t5172;
  t5185 = t4250*t2224*t672;
  t5206 = -1.*t4250*t3213*t3973;
  t5225 = t5185 + t5206;
  p_output1[0]=0. + t2122*t3429 + t3972*t4017 + t4072*t4240 + 0.135*(t4072*t4187 - 1.*t2794*t4229*t4250) + t2794*t4250*t4306 + t4433*t4513 - 0.09*(-1.*t4433*t4492 + t4459*t4559) - 0.049*(t4433*t4459 + t4492*t4559) + t4559*t4599 + var1[0];
  p_output1[1]=0. + t2248*t4250*t4306 + t2122*t4814 + t4017*t4854 + t4240*t4902 + 0.135*(-1.*t2248*t4229*t4250 + t4187*t4902) + t4513*t4978 + t4599*t4993 - 0.09*(-1.*t4492*t4978 + t4459*t4993) - 0.049*(t4459*t4978 + t4492*t4993) + var1[1];
  p_output1[2]=0. + t2122*t3213*t4250 + t2224*t4017*t4250 - 1.*t3190*t4306 + t4240*t5121 + 0.135*(t3190*t4229 + t4187*t5121) + t4513*t5173 + t4599*t5225 - 0.09*(-1.*t4492*t5173 + t4459*t5225) - 0.049*(t4459*t5173 + t4492*t5225) + var1[2];
}



void p_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
