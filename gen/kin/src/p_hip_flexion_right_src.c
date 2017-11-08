/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:36 GMT-05:00
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
  double t6120;
  double t6151;
  double t6154;
  double t6152;
  double t6156;
  double t6128;
  double t6131;
  double t6132;
  double t6138;
  double t6147;
  double t6153;
  double t6157;
  double t6158;
  double t6160;
  double t6165;
  double t6166;
  double t6167;
  double t6125;
  double t6174;
  double t6175;
  double t6176;
  double t6135;
  double t6140;
  double t6144;
  double t6149;
  double t6150;
  double t6161;
  double t6162;
  double t6163;
  double t6164;
  double t6169;
  double t6170;
  double t6171;
  double t6194;
  double t6195;
  double t6196;
  double t6198;
  double t6199;
  double t6200;
  double t6203;
  double t6204;
  double t6205;
  double t6223;
  double t6224;
  double t6225;
  t6120 = Cos(var1[3]);
  t6151 = Cos(var1[5]);
  t6154 = Sin(var1[3]);
  t6152 = Sin(var1[4]);
  t6156 = Sin(var1[5]);
  t6128 = Cos(var1[14]);
  t6131 = -1.*t6128;
  t6132 = 1. + t6131;
  t6138 = Sin(var1[14]);
  t6147 = Sin(var1[13]);
  t6153 = t6120*t6151*t6152;
  t6157 = t6154*t6156;
  t6158 = t6153 + t6157;
  t6160 = Cos(var1[13]);
  t6165 = -1.*t6151*t6154;
  t6166 = t6120*t6152*t6156;
  t6167 = t6165 + t6166;
  t6125 = Cos(var1[4]);
  t6174 = t6147*t6158;
  t6175 = t6160*t6167;
  t6176 = t6174 + t6175;
  t6135 = -0.049*t6132;
  t6140 = -0.135*t6138;
  t6144 = 0. + t6135 + t6140;
  t6149 = 0.135*t6147;
  t6150 = 0. + t6149;
  t6161 = -1.*t6160;
  t6162 = 1. + t6161;
  t6163 = -0.135*t6162;
  t6164 = 0. + t6163;
  t6169 = -0.135*t6132;
  t6170 = 0.049*t6138;
  t6171 = 0. + t6169 + t6170;
  t6194 = t6151*t6154*t6152;
  t6195 = -1.*t6120*t6156;
  t6196 = t6194 + t6195;
  t6198 = t6120*t6151;
  t6199 = t6154*t6152*t6156;
  t6200 = t6198 + t6199;
  t6203 = t6147*t6196;
  t6204 = t6160*t6200;
  t6205 = t6203 + t6204;
  t6223 = t6125*t6151*t6147;
  t6224 = t6160*t6125*t6156;
  t6225 = t6223 + t6224;
  p_output1[0]=0. + t6120*t6125*t6144 + t6150*t6158 + t6164*t6167 - 0.09*(t6158*t6160 - 1.*t6147*t6167) + t6171*t6176 - 0.135*(-1.*t6120*t6125*t6138 + t6128*t6176) - 0.049*(t6120*t6125*t6128 + t6138*t6176) + var1[0];
  p_output1[1]=0. + t6125*t6144*t6154 + t6150*t6196 + t6164*t6200 - 0.09*(t6160*t6196 - 1.*t6147*t6200) + t6171*t6205 - 0.135*(-1.*t6125*t6138*t6154 + t6128*t6205) - 0.049*(t6125*t6128*t6154 + t6138*t6205) + var1[1];
  p_output1[2]=0. + t6125*t6150*t6151 - 1.*t6144*t6152 - 0.09*(-1.*t6125*t6147*t6156 + t6125*t6151*t6160) + t6125*t6156*t6164 + t6171*t6225 - 0.135*(t6138*t6152 + t6128*t6225) - 0.049*(-1.*t6128*t6152 + t6138*t6225) + var1[2];
}



void p_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
