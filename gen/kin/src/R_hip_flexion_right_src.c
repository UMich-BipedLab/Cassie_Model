/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:40 GMT-05:00
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
  double t1500;
  double t7264;
  double t1487;
  double t2655;
  double t7322;
  double t7377;
  double t2661;
  double t7324;
  double t7357;
  double t1467;
  double t7387;
  double t7404;
  double t7409;
  double t1380;
  double t7417;
  double t7418;
  double t7426;
  double t7434;
  double t7443;
  double t7444;
  double t7445;
  double t7450;
  double t7469;
  double t7471;
  double t7376;
  double t7411;
  double t7414;
  double t7433;
  double t7435;
  double t7437;
  double t7438;
  double t7439;
  double t7440;
  double t7447;
  double t7475;
  double t7479;
  double t7481;
  double t7484;
  double t7485;
  double t7486;
  double t7487;
  double t7488;
  double t7494;
  double t7497;
  double t7498;
  double t7502;
  double t7506;
  double t7509;
  double t7512;
  double t7515;
  double t7516;
  t1500 = Cos(var1[5]);
  t7264 = Sin(var1[3]);
  t1487 = Cos(var1[3]);
  t2655 = Sin(var1[4]);
  t7322 = Sin(var1[5]);
  t7377 = Sin(var1[13]);
  t2661 = t1487*t1500*t2655;
  t7324 = t7264*t7322;
  t7357 = t2661 + t7324;
  t1467 = Cos(var1[13]);
  t7387 = -1.*t1500*t7264;
  t7404 = t1487*t2655*t7322;
  t7409 = t7387 + t7404;
  t1380 = Cos(var1[15]);
  t7417 = Sin(var1[15]);
  t7418 = Cos(var1[14]);
  t7426 = Cos(var1[4]);
  t7434 = Sin(var1[14]);
  t7443 = t1500*t7264*t2655;
  t7444 = -1.*t1487*t7322;
  t7445 = t7443 + t7444;
  t7450 = t1487*t1500;
  t7469 = t7264*t2655*t7322;
  t7471 = t7450 + t7469;
  t7376 = t1467*t7357;
  t7411 = -1.*t7377*t7409;
  t7414 = t7376 + t7411;
  t7433 = t7418*t1487*t7426;
  t7435 = t7377*t7357;
  t7437 = t1467*t7409;
  t7438 = t7435 + t7437;
  t7439 = t7434*t7438;
  t7440 = t7433 + t7439;
  t7447 = t1467*t7445;
  t7475 = -1.*t7377*t7471;
  t7479 = t7447 + t7475;
  t7481 = t7418*t7426*t7264;
  t7484 = t7377*t7445;
  t7485 = t1467*t7471;
  t7486 = t7484 + t7485;
  t7487 = t7434*t7486;
  t7488 = t7481 + t7487;
  t7494 = t1467*t7426*t1500;
  t7497 = -1.*t7426*t7377*t7322;
  t7498 = t7494 + t7497;
  t7502 = -1.*t7418*t2655;
  t7506 = t7426*t1500*t7377;
  t7509 = t1467*t7426*t7322;
  t7512 = t7506 + t7509;
  t7515 = t7434*t7512;
  t7516 = t7502 + t7515;
  p_output1[0]=-1.*t1380*t7414 + t7417*t7440;
  p_output1[1]=-1.*t1380*t7479 + t7417*t7488;
  p_output1[2]=-1.*t1380*t7498 + t7417*t7516;
  p_output1[3]=t7414*t7417 + t1380*t7440;
  p_output1[4]=t7417*t7479 + t1380*t7488;
  p_output1[5]=t7417*t7498 + t1380*t7516;
  p_output1[6]=t1487*t7426*t7434 - 1.*t7418*t7438;
  p_output1[7]=t7264*t7426*t7434 - 1.*t7418*t7486;
  p_output1[8]=-1.*t2655*t7434 - 1.*t7418*t7512;
}



void R_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
