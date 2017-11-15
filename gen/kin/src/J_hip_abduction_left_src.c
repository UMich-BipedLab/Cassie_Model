/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:54 GMT-05:00
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
  double t141;
  double t161;
  double t164;
  double t160;
  double t165;
  double t151;
  double t162;
  double t166;
  double t168;
  double t171;
  double t172;
  double t173;
  double t174;
  double t133;
  double t153;
  double t155;
  double t157;
  double t159;
  double t175;
  double t176;
  double t184;
  double t185;
  double t186;
  double t188;
  double t189;
  double t190;
  double t226;
  double t228;
  double t230;
  double t237;
  double t238;
  double t239;
  double t232;
  double t243;
  double t262;
  double t263;
  double t264;
  double t250;
  double t251;
  double t252;
  double t253;
  t141 = Sin(var1[3]);
  t161 = Cos(var1[5]);
  t164 = Sin(var1[4]);
  t160 = Cos(var1[3]);
  t165 = Sin(var1[5]);
  t151 = Cos(var1[6]);
  t162 = -1.*t160*t161;
  t166 = -1.*t141*t164*t165;
  t168 = t162 + t166;
  t171 = -1.*t161*t141*t164;
  t172 = t160*t165;
  t173 = t171 + t172;
  t174 = Sin(var1[6]);
  t133 = Cos(var1[4]);
  t153 = -1.*t151;
  t155 = 1. + t153;
  t157 = 0.135*t155;
  t159 = 0. + t157;
  t175 = -0.135*t174;
  t176 = 0. + t175;
  t184 = -1.*t161*t141;
  t185 = t160*t164*t165;
  t186 = t184 + t185;
  t188 = t160*t161*t164;
  t189 = t141*t165;
  t190 = t188 + t189;
  t226 = t161*t141;
  t228 = -1.*t160*t164*t165;
  t230 = t226 + t228;
  t237 = t161*t141*t164;
  t238 = -1.*t160*t165;
  t239 = t237 + t238;
  t232 = t151*t190;
  t243 = t151*t239;
  t262 = t160*t161;
  t263 = t141*t164*t165;
  t264 = t262 + t263;
  t250 = t133*t161*t151;
  t251 = -1.*t133*t165*t174;
  t252 = t250 + t251;
  t253 = 0.135*t252;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t133*t141 + t159*t168 + 0.135*(t151*t168 + t173*t174) + t173*t176;
  p_output1[10]=-0.049*t133*t160 + t159*t186 + t176*t190 + 0.135*(t151*t186 + t174*t190);
  p_output1[11]=0;
  p_output1[12]=0.049*t160*t164 + t133*t159*t160*t165 + 0.135*(t133*t151*t160*t165 + t133*t160*t161*t174) + t133*t160*t161*t176;
  p_output1[13]=0.049*t141*t164 + t133*t141*t159*t165 + 0.135*(t133*t141*t151*t165 + t133*t141*t161*t174) + t133*t141*t161*t176;
  p_output1[14]=0.049*t133 - 1.*t159*t164*t165 + 0.135*(-1.*t151*t164*t165 - 1.*t161*t164*t174) - 1.*t161*t164*t176;
  p_output1[15]=t159*t190 + t176*t230 + 0.135*(t174*t230 + t232);
  p_output1[16]=t168*t176 + t159*t239 + 0.135*(t168*t174 + t243);
  p_output1[17]=t133*t159*t161 - 1.*t133*t165*t176 + t253;
  p_output1[18]=0.135*t174*t186 - 0.135*t151*t190 + 0.135*(-1.*t174*t186 + t232);
  p_output1[19]=-0.135*t151*t239 + 0.135*t174*t264 + 0.135*(t243 - 1.*t174*t264);
  p_output1[20]=-0.135*t133*t151*t161 + 0.135*t133*t165*t174 + t253;
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
