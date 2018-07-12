/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_right_src.h"

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
  double t465;
  double t2687;
  double t2735;
  double t2707;
  double t2746;
  double t1928;
  double t2194;
  double t2418;
  double t2632;
  double t2674;
  double t2708;
  double t2752;
  double t2754;
  double t3080;
  double t3501;
  double t3528;
  double t3542;
  double t1108;
  double t5546;
  double t5632;
  double t5882;
  double t2580;
  double t2661;
  double t2663;
  double t2684;
  double t2686;
  double t3122;
  double t3131;
  double t3160;
  double t3363;
  double t4390;
  double t4754;
  double t5508;
  double t7267;
  double t7300;
  double t7302;
  double t7325;
  double t7338;
  double t7340;
  double t7352;
  double t7364;
  double t7387;
  double t7533;
  double t7536;
  double t7547;
  t465 = Cos(var1[3]);
  t2687 = Cos(var1[5]);
  t2735 = Sin(var1[3]);
  t2707 = Sin(var1[4]);
  t2746 = Sin(var1[5]);
  t1928 = Cos(var1[14]);
  t2194 = -1.*t1928;
  t2418 = 1. + t2194;
  t2632 = Sin(var1[14]);
  t2674 = Sin(var1[13]);
  t2708 = t465*t2687*t2707;
  t2752 = t2735*t2746;
  t2754 = t2708 + t2752;
  t3080 = Cos(var1[13]);
  t3501 = -1.*t2687*t2735;
  t3528 = t465*t2707*t2746;
  t3542 = t3501 + t3528;
  t1108 = Cos(var1[4]);
  t5546 = t2674*t2754;
  t5632 = t3080*t3542;
  t5882 = t5546 + t5632;
  t2580 = -0.049*t2418;
  t2661 = -0.135*t2632;
  t2663 = 0. + t2580 + t2661;
  t2684 = 0.135*t2674;
  t2686 = 0. + t2684;
  t3122 = -1.*t3080;
  t3131 = 1. + t3122;
  t3160 = -0.135*t3131;
  t3363 = 0. + t3160;
  t4390 = -0.135*t2418;
  t4754 = 0.049*t2632;
  t5508 = 0. + t4390 + t4754;
  t7267 = t2687*t2735*t2707;
  t7300 = -1.*t465*t2746;
  t7302 = t7267 + t7300;
  t7325 = t465*t2687;
  t7338 = t2735*t2707*t2746;
  t7340 = t7325 + t7338;
  t7352 = t2674*t7302;
  t7364 = t3080*t7340;
  t7387 = t7352 + t7364;
  t7533 = t1108*t2687*t2674;
  t7536 = t3080*t1108*t2746;
  t7547 = t7533 + t7536;
  p_output1[0]=0. + t2686*t2754 + t3363*t3542 - 0.09*(t2754*t3080 - 1.*t2674*t3542) + t1108*t2663*t465 + t5508*t5882 - 0.135*(-1.*t1108*t2632*t465 + t1928*t5882) - 0.049*(t1108*t1928*t465 + t2632*t5882) + var1[0];
  p_output1[1]=0. + t1108*t2663*t2735 + t2686*t7302 + t3363*t7340 - 0.09*(t3080*t7302 - 1.*t2674*t7340) + t5508*t7387 - 0.135*(-1.*t1108*t2632*t2735 + t1928*t7387) - 0.049*(t1108*t1928*t2735 + t2632*t7387) + var1[1];
  p_output1[2]=0. + t1108*t2686*t2687 - 1.*t2663*t2707 - 0.09*(-1.*t1108*t2674*t2746 + t1108*t2687*t3080) + t1108*t2746*t3363 + t5508*t7547 - 0.135*(t2632*t2707 + t1928*t7547) - 0.049*(-1.*t1928*t2707 + t2632*t7547) + var1[2];
}



void p_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
