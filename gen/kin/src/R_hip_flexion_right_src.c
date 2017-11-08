/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_right_src.h"

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
  double t1149;
  double t2043;
  double t1021;
  double t1281;
  double t6316;
  double t1015;
  double t6354;
  double t6422;
  double t1288;
  double t6332;
  double t6333;
  double t6360;
  double t6370;
  double t6372;
  double t6428;
  double t6433;
  double t6391;
  double t6392;
  double t6393;
  double t6405;
  double t6407;
  double t6419;
  double t6435;
  double t6436;
  double t6437;
  double t6441;
  double t6443;
  double t6444;
  double t6451;
  double t6453;
  double t6458;
  t1149 = Cos(var1[5]);
  t2043 = Sin(var1[3]);
  t1021 = Cos(var1[3]);
  t1281 = Sin(var1[4]);
  t6316 = Sin(var1[5]);
  t1015 = Cos(var1[13]);
  t6354 = Sin(var1[13]);
  t6422 = Cos(var1[4]);
  t1288 = t1021*t1149*t1281;
  t6332 = t2043*t6316;
  t6333 = t1288 + t6332;
  t6360 = -1.*t1149*t2043;
  t6370 = t1021*t1281*t6316;
  t6372 = t6360 + t6370;
  t6428 = Cos(var1[14]);
  t6433 = Sin(var1[14]);
  t6391 = t1149*t2043*t1281;
  t6392 = -1.*t1021*t6316;
  t6393 = t6391 + t6392;
  t6405 = t1021*t1149;
  t6407 = t2043*t1281*t6316;
  t6419 = t6405 + t6407;
  t6435 = t6354*t6333;
  t6436 = t1015*t6372;
  t6437 = t6435 + t6436;
  t6441 = t6354*t6393;
  t6443 = t1015*t6419;
  t6444 = t6441 + t6443;
  t6451 = t6422*t1149*t6354;
  t6453 = t1015*t6422*t6316;
  t6458 = t6451 + t6453;
  p_output1[0]=-1.*t1015*t6333 + t6354*t6372;
  p_output1[1]=-1.*t1015*t6393 + t6354*t6419;
  p_output1[2]=-1.*t1015*t1149*t6422 + t6316*t6354*t6422;
  p_output1[3]=t1021*t6422*t6428 + t6433*t6437;
  p_output1[4]=t2043*t6422*t6428 + t6433*t6444;
  p_output1[5]=-1.*t1281*t6428 + t6433*t6458;
  p_output1[6]=t1021*t6422*t6433 - 1.*t6428*t6437;
  p_output1[7]=t2043*t6422*t6433 - 1.*t6428*t6444;
  p_output1[8]=-1.*t1281*t6433 - 1.*t6428*t6458;
}



void R_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
