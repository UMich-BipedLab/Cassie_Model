/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:39 GMT-05:00
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
  double t1502;
  double t6166;
  double t615;
  double t2838;
  double t6241;
  double t435;
  double t6264;
  double t6295;
  double t3333;
  double t6252;
  double t6260;
  double t6265;
  double t6267;
  double t6272;
  double t6305;
  double t6312;
  double t6277;
  double t6279;
  double t6282;
  double t6286;
  double t6288;
  double t6289;
  double t6313;
  double t6314;
  double t6315;
  double t6320;
  double t6321;
  double t6322;
  double t6332;
  double t6333;
  double t6334;
  double t6355;
  double t6356;
  double t6308;
  double t6316;
  double t6317;
  double t6357;
  double t6360;
  double t6362;
  double t6369;
  double t6370;
  double t6373;
  double t6374;
  double t6375;
  double t6376;
  double t6378;
  double t6379;
  double t6387;
  double t6318;
  double t6326;
  double t6327;
  double t6330;
  double t6337;
  double t6338;
  t1502 = Cos(var1[5]);
  t6166 = Sin(var1[3]);
  t615 = Cos(var1[3]);
  t2838 = Sin(var1[4]);
  t6241 = Sin(var1[5]);
  t435 = Cos(var1[13]);
  t6264 = Sin(var1[13]);
  t6295 = Cos(var1[4]);
  t3333 = t615*t1502*t2838;
  t6252 = t6166*t6241;
  t6260 = t3333 + t6252;
  t6265 = -1.*t1502*t6166;
  t6267 = t615*t2838*t6241;
  t6272 = t6265 + t6267;
  t6305 = Cos(var1[14]);
  t6312 = Sin(var1[14]);
  t6277 = t1502*t6166*t2838;
  t6279 = -1.*t615*t6241;
  t6282 = t6277 + t6279;
  t6286 = t615*t1502;
  t6288 = t6166*t2838*t6241;
  t6289 = t6286 + t6288;
  t6313 = t6264*t6260;
  t6314 = t435*t6272;
  t6315 = t6313 + t6314;
  t6320 = t6264*t6282;
  t6321 = t435*t6289;
  t6322 = t6320 + t6321;
  t6332 = t6295*t1502*t6264;
  t6333 = t435*t6295*t6241;
  t6334 = t6332 + t6333;
  t6355 = -1.*t6305;
  t6356 = 1. + t6355;
  t6308 = t6305*t615*t6295;
  t6316 = t6312*t6315;
  t6317 = t6308 + t6316;
  t6357 = -0.049*t6356;
  t6360 = -0.135*t6312;
  t6362 = 0. + t6357 + t6360;
  t6369 = 0.135*t6264;
  t6370 = 0. + t6369;
  t6373 = -1.*t435;
  t6374 = 1. + t6373;
  t6375 = -0.135*t6374;
  t6376 = 0. + t6375;
  t6378 = -0.135*t6356;
  t6379 = 0.049*t6312;
  t6387 = 0. + t6378 + t6379;
  t6318 = t6305*t6295*t6166;
  t6326 = t6312*t6322;
  t6327 = t6318 + t6326;
  t6330 = -1.*t6305*t2838;
  t6337 = t6312*t6334;
  t6338 = t6330 + t6337;
  p_output1[0]=-1.*t435*t6260 + t6264*t6272;
  p_output1[1]=-1.*t435*t6282 + t6264*t6289;
  p_output1[2]=-1.*t1502*t435*t6295 + t6241*t6264*t6295;
  p_output1[3]=0.;
  p_output1[4]=t6317;
  p_output1[5]=t6327;
  p_output1[6]=t6338;
  p_output1[7]=0.;
  p_output1[8]=t615*t6295*t6312 - 1.*t6305*t6315;
  p_output1[9]=t6166*t6295*t6312 - 1.*t6305*t6322;
  p_output1[10]=-1.*t2838*t6312 - 1.*t6305*t6334;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t435*t6260 - 1.*t6264*t6272) - 0.135*(-1.*t615*t6295*t6312 + t6305*t6315) - 0.049*t6317 + t615*t6295*t6362 + t6260*t6370 + t6272*t6376 + t6315*t6387 + var1[0];
  p_output1[13]=0. - 0.09*(t435*t6282 - 1.*t6264*t6289) - 0.135*(-1.*t6166*t6295*t6312 + t6305*t6322) - 0.049*t6327 + t6166*t6295*t6362 + t6282*t6370 + t6289*t6376 + t6322*t6387 + var1[1];
  p_output1[14]=0. - 0.09*(t1502*t435*t6295 - 1.*t6241*t6264*t6295) - 0.135*(t2838*t6312 + t6305*t6334) - 0.049*t6338 - 1.*t2838*t6362 + t1502*t6295*t6370 + t6241*t6295*t6376 + t6334*t6387 + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
