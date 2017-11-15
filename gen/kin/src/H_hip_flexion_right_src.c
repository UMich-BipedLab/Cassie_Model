/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:39 GMT-05:00
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
  double t387;
  double t1531;
  double t284;
  double t985;
  double t1673;
  double t2477;
  double t1507;
  double t1751;
  double t1840;
  double t256;
  double t2571;
  double t2612;
  double t2842;
  double t253;
  double t7193;
  double t7249;
  double t7262;
  double t7270;
  double t7303;
  double t7304;
  double t7307;
  double t7314;
  double t7317;
  double t7322;
  double t2473;
  double t2861;
  double t3160;
  double t7263;
  double t7272;
  double t7276;
  double t7282;
  double t7286;
  double t7295;
  double t7312;
  double t7324;
  double t7328;
  double t7333;
  double t7337;
  double t7341;
  double t7342;
  double t7344;
  double t7345;
  double t7356;
  double t7358;
  double t7359;
  double t7364;
  double t7365;
  double t7366;
  double t7367;
  double t7368;
  double t7369;
  double t7418;
  double t7422;
  double t7462;
  double t7464;
  double t7376;
  double t7378;
  double t7381;
  double t7426;
  double t7427;
  double t7428;
  double t7431;
  double t7433;
  double t7438;
  double t7439;
  double t7440;
  double t7441;
  double t7448;
  double t7454;
  double t7456;
  double t7467;
  double t7469;
  double t7470;
  double t7478;
  double t7480;
  double t7487;
  double t7382;
  double t7386;
  double t7387;
  double t7392;
  double t7393;
  double t7399;
  t387 = Cos(var1[5]);
  t1531 = Sin(var1[3]);
  t284 = Cos(var1[3]);
  t985 = Sin(var1[4]);
  t1673 = Sin(var1[5]);
  t2477 = Sin(var1[13]);
  t1507 = t284*t387*t985;
  t1751 = t1531*t1673;
  t1840 = t1507 + t1751;
  t256 = Cos(var1[13]);
  t2571 = -1.*t387*t1531;
  t2612 = t284*t985*t1673;
  t2842 = t2571 + t2612;
  t253 = Cos(var1[15]);
  t7193 = Sin(var1[15]);
  t7249 = Cos(var1[14]);
  t7262 = Cos(var1[4]);
  t7270 = Sin(var1[14]);
  t7303 = t387*t1531*t985;
  t7304 = -1.*t284*t1673;
  t7307 = t7303 + t7304;
  t7314 = t284*t387;
  t7317 = t1531*t985*t1673;
  t7322 = t7314 + t7317;
  t2473 = t256*t1840;
  t2861 = -1.*t2477*t2842;
  t3160 = t2473 + t2861;
  t7263 = t7249*t284*t7262;
  t7272 = t2477*t1840;
  t7276 = t256*t2842;
  t7282 = t7272 + t7276;
  t7286 = t7270*t7282;
  t7295 = t7263 + t7286;
  t7312 = t256*t7307;
  t7324 = -1.*t2477*t7322;
  t7328 = t7312 + t7324;
  t7333 = t7249*t7262*t1531;
  t7337 = t2477*t7307;
  t7341 = t256*t7322;
  t7342 = t7337 + t7341;
  t7344 = t7270*t7342;
  t7345 = t7333 + t7344;
  t7356 = t256*t7262*t387;
  t7358 = -1.*t7262*t2477*t1673;
  t7359 = t7356 + t7358;
  t7364 = -1.*t7249*t985;
  t7365 = t7262*t387*t2477;
  t7366 = t256*t7262*t1673;
  t7367 = t7365 + t7366;
  t7368 = t7270*t7367;
  t7369 = t7364 + t7368;
  t7418 = -1.*t7249;
  t7422 = 1. + t7418;
  t7462 = -1.*t253;
  t7464 = 1. + t7462;
  t7376 = t7193*t3160;
  t7378 = t253*t7295;
  t7381 = t7376 + t7378;
  t7426 = -0.049*t7422;
  t7427 = -0.135*t7270;
  t7428 = 0. + t7426 + t7427;
  t7431 = 0.135*t2477;
  t7433 = 0. + t7431;
  t7438 = -1.*t256;
  t7439 = 1. + t7438;
  t7440 = -0.135*t7439;
  t7441 = 0. + t7440;
  t7448 = -0.135*t7422;
  t7454 = 0.049*t7270;
  t7456 = 0. + t7448 + t7454;
  t7467 = -0.09*t7464;
  t7469 = 0.049*t7193;
  t7470 = 0. + t7467 + t7469;
  t7478 = -0.049*t7464;
  t7480 = -0.09*t7193;
  t7487 = 0. + t7478 + t7480;
  t7382 = t7193*t7328;
  t7386 = t253*t7345;
  t7387 = t7382 + t7386;
  t7392 = t7193*t7359;
  t7393 = t253*t7369;
  t7399 = t7392 + t7393;
  p_output1[0]=-1.*t253*t3160 + t7193*t7295;
  p_output1[1]=-1.*t253*t7328 + t7193*t7345;
  p_output1[2]=-1.*t253*t7359 + t7193*t7369;
  p_output1[3]=0.;
  p_output1[4]=t7381;
  p_output1[5]=t7387;
  p_output1[6]=t7399;
  p_output1[7]=0.;
  p_output1[8]=t284*t7262*t7270 - 1.*t7249*t7282;
  p_output1[9]=t1531*t7262*t7270 - 1.*t7249*t7342;
  p_output1[10]=-1.*t7249*t7367 - 1.*t7270*t985;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(-1.*t284*t7262*t7270 + t7249*t7282) - 0.09*(t253*t3160 - 1.*t7193*t7295) - 0.049*t7381 + t284*t7262*t7428 + t1840*t7433 + t2842*t7441 + t7282*t7456 + t3160*t7470 + t7295*t7487 + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t1531*t7262*t7270 + t7249*t7342) - 0.09*(t253*t7328 - 1.*t7193*t7345) - 0.049*t7387 + t1531*t7262*t7428 + t7307*t7433 + t7322*t7441 + t7342*t7456 + t7328*t7470 + t7345*t7487 + var1[1];
  p_output1[14]=0. - 0.09*(t253*t7359 - 1.*t7193*t7369) - 0.049*t7399 + t387*t7262*t7433 + t1673*t7262*t7441 + t7367*t7456 + t7359*t7470 + t7369*t7487 - 1.*t7428*t985 - 0.135*(t7249*t7367 + t7270*t985) + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
