/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_abduction_left_src.h"

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
  double t105;
  double t125;
  double t128;
  double t124;
  double t129;
  double t115;
  double t126;
  double t130;
  double t132;
  double t135;
  double t136;
  double t137;
  double t138;
  double t97;
  double t117;
  double t119;
  double t121;
  double t123;
  double t139;
  double t140;
  double t148;
  double t149;
  double t150;
  double t152;
  double t153;
  double t154;
  double t190;
  double t192;
  double t194;
  double t201;
  double t202;
  double t203;
  double t196;
  double t207;
  double t226;
  double t227;
  double t228;
  double t214;
  double t215;
  double t216;
  double t217;
  t105 = Sin(var1[3]);
  t125 = Cos(var1[5]);
  t128 = Sin(var1[4]);
  t124 = Cos(var1[3]);
  t129 = Sin(var1[5]);
  t115 = Cos(var1[6]);
  t126 = -1.*t124*t125;
  t130 = -1.*t105*t128*t129;
  t132 = t126 + t130;
  t135 = -1.*t125*t105*t128;
  t136 = t124*t129;
  t137 = t135 + t136;
  t138 = Sin(var1[6]);
  t97 = Cos(var1[4]);
  t117 = -1.*t115;
  t119 = 1. + t117;
  t121 = 0.135*t119;
  t123 = 0. + t121;
  t139 = -0.135*t138;
  t140 = 0. + t139;
  t148 = -1.*t125*t105;
  t149 = t124*t128*t129;
  t150 = t148 + t149;
  t152 = t124*t125*t128;
  t153 = t105*t129;
  t154 = t152 + t153;
  t190 = t125*t105;
  t192 = -1.*t124*t128*t129;
  t194 = t190 + t192;
  t201 = t125*t105*t128;
  t202 = -1.*t124*t129;
  t203 = t201 + t202;
  t196 = t115*t154;
  t207 = t115*t203;
  t226 = t124*t125;
  t227 = t105*t128*t129;
  t228 = t226 + t227;
  t214 = t97*t125*t115;
  t215 = -1.*t97*t129*t138;
  t216 = t214 + t215;
  t217 = 0.135*t216;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t123*t132 + 0.135*(t115*t132 + t137*t138) + t137*t140 + 0.049*t105*t97;
  p_output1[10]=t123*t150 + t140*t154 + 0.135*(t115*t150 + t138*t154) - 0.049*t124*t97;
  p_output1[11]=0;
  p_output1[12]=0.049*t124*t128 + t123*t124*t129*t97 + t124*t125*t140*t97 + 0.135*(t115*t124*t129*t97 + t124*t125*t138*t97);
  p_output1[13]=0.049*t105*t128 + t105*t123*t129*t97 + t105*t125*t140*t97 + 0.135*(t105*t115*t129*t97 + t105*t125*t138*t97);
  p_output1[14]=-1.*t123*t128*t129 + 0.135*(-1.*t115*t128*t129 - 1.*t125*t128*t138) - 1.*t125*t128*t140 + 0.049*t97;
  p_output1[15]=t123*t154 + t140*t194 + 0.135*(t138*t194 + t196);
  p_output1[16]=t132*t140 + t123*t203 + 0.135*(t132*t138 + t207);
  p_output1[17]=t217 + t123*t125*t97 - 1.*t129*t140*t97;
  p_output1[18]=0.135*t138*t150 - 0.135*t115*t154 + 0.135*(-1.*t138*t150 + t196);
  p_output1[19]=-0.135*t115*t203 + 0.135*t138*t228 + 0.135*(t207 - 1.*t138*t228);
  p_output1[20]=t217 - 0.135*t115*t125*t97 + 0.135*t129*t138*t97;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
