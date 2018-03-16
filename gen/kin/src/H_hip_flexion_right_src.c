/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_right_src.h"

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
  double t221;
  double t233;
  double t212;
  double t230;
  double t237;
  double t245;
  double t232;
  double t238;
  double t243;
  double t208;
  double t312;
  double t555;
  double t686;
  double t168;
  double t1052;
  double t1718;
  double t1787;
  double t2428;
  double t3158;
  double t3164;
  double t3166;
  double t3196;
  double t3199;
  double t3203;
  double t244;
  double t715;
  double t851;
  double t2024;
  double t2641;
  double t2979;
  double t3026;
  double t3089;
  double t3091;
  double t3182;
  double t3211;
  double t3220;
  double t3251;
  double t7176;
  double t7221;
  double t7224;
  double t7227;
  double t7241;
  double t7252;
  double t7254;
  double t7255;
  double t7257;
  double t7264;
  double t7270;
  double t7272;
  double t7275;
  double t7277;
  double t7337;
  double t7338;
  double t7367;
  double t7368;
  double t7285;
  double t7289;
  double t7290;
  double t7339;
  double t7343;
  double t7345;
  double t7347;
  double t7348;
  double t7350;
  double t7351;
  double t7352;
  double t7353;
  double t7357;
  double t7360;
  double t7361;
  double t7369;
  double t7370;
  double t7375;
  double t7387;
  double t7388;
  double t7389;
  double t7294;
  double t7299;
  double t7307;
  double t7310;
  double t7312;
  double t7313;
  t221 = Cos(var1[5]);
  t233 = Sin(var1[3]);
  t212 = Cos(var1[3]);
  t230 = Sin(var1[4]);
  t237 = Sin(var1[5]);
  t245 = Sin(var1[13]);
  t232 = t212*t221*t230;
  t238 = t233*t237;
  t243 = t232 + t238;
  t208 = Cos(var1[13]);
  t312 = -1.*t221*t233;
  t555 = t212*t230*t237;
  t686 = t312 + t555;
  t168 = Cos(var1[15]);
  t1052 = Sin(var1[15]);
  t1718 = Cos(var1[14]);
  t1787 = Cos(var1[4]);
  t2428 = Sin(var1[14]);
  t3158 = t221*t233*t230;
  t3164 = -1.*t212*t237;
  t3166 = t3158 + t3164;
  t3196 = t212*t221;
  t3199 = t233*t230*t237;
  t3203 = t3196 + t3199;
  t244 = t208*t243;
  t715 = -1.*t245*t686;
  t851 = t244 + t715;
  t2024 = t1718*t212*t1787;
  t2641 = t245*t243;
  t2979 = t208*t686;
  t3026 = t2641 + t2979;
  t3089 = t2428*t3026;
  t3091 = t2024 + t3089;
  t3182 = t208*t3166;
  t3211 = -1.*t245*t3203;
  t3220 = t3182 + t3211;
  t3251 = t1718*t1787*t233;
  t7176 = t245*t3166;
  t7221 = t208*t3203;
  t7224 = t7176 + t7221;
  t7227 = t2428*t7224;
  t7241 = t3251 + t7227;
  t7252 = t208*t1787*t221;
  t7254 = -1.*t1787*t245*t237;
  t7255 = t7252 + t7254;
  t7257 = -1.*t1718*t230;
  t7264 = t1787*t221*t245;
  t7270 = t208*t1787*t237;
  t7272 = t7264 + t7270;
  t7275 = t2428*t7272;
  t7277 = t7257 + t7275;
  t7337 = -1.*t1718;
  t7338 = 1. + t7337;
  t7367 = -1.*t168;
  t7368 = 1. + t7367;
  t7285 = t1052*t851;
  t7289 = t168*t3091;
  t7290 = t7285 + t7289;
  t7339 = -0.049*t7338;
  t7343 = -0.135*t2428;
  t7345 = 0. + t7339 + t7343;
  t7347 = 0.135*t245;
  t7348 = 0. + t7347;
  t7350 = -1.*t208;
  t7351 = 1. + t7350;
  t7352 = -0.135*t7351;
  t7353 = 0. + t7352;
  t7357 = -0.135*t7338;
  t7360 = 0.049*t2428;
  t7361 = 0. + t7357 + t7360;
  t7369 = -0.09*t7368;
  t7370 = 0.049*t1052;
  t7375 = 0. + t7369 + t7370;
  t7387 = -0.049*t7368;
  t7388 = -0.09*t1052;
  t7389 = 0. + t7387 + t7388;
  t7294 = t1052*t3220;
  t7299 = t168*t7241;
  t7307 = t7294 + t7299;
  t7310 = t1052*t7255;
  t7312 = t168*t7277;
  t7313 = t7310 + t7312;
  p_output1[0]=t1052*t3091 - 1.*t168*t851;
  p_output1[1]=-1.*t168*t3220 + t1052*t7241;
  p_output1[2]=-1.*t168*t7255 + t1052*t7277;
  p_output1[3]=0.;
  p_output1[4]=t7290;
  p_output1[5]=t7307;
  p_output1[6]=t7313;
  p_output1[7]=0.;
  p_output1[8]=t1787*t212*t2428 - 1.*t1718*t3026;
  p_output1[9]=t1787*t233*t2428 - 1.*t1718*t7224;
  p_output1[10]=-1.*t230*t2428 - 1.*t1718*t7272;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(-1.*t1787*t212*t2428 + t1718*t3026) - 0.049*t7290 + t1787*t212*t7345 + t243*t7348 + t686*t7353 + t3026*t7361 + t3091*t7389 + t7375*t851 - 0.09*(-1.*t1052*t3091 + t168*t851) + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t1787*t233*t2428 + t1718*t7224) - 0.09*(t168*t3220 - 1.*t1052*t7241) - 0.049*t7307 + t1787*t233*t7345 + t3166*t7348 + t3203*t7353 + t7224*t7361 + t3220*t7375 + t7241*t7389 + var1[1];
  p_output1[14]=0. - 0.135*(t230*t2428 + t1718*t7272) - 0.09*(t168*t7255 - 1.*t1052*t7277) - 0.049*t7313 - 1.*t230*t7345 + t1787*t221*t7348 + t1787*t237*t7353 + t7272*t7361 + t7255*t7375 + t7277*t7389 + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
