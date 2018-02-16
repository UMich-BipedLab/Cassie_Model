/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_left_src.h"

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
  double t431;
  double t446;
  double t429;
  double t434;
  double t449;
  double t425;
  double t465;
  double t491;
  double t460;
  double t461;
  double t463;
  double t445;
  double t454;
  double t455;
  double t499;
  double t483;
  double t484;
  double t485;
  double t472;
  double t473;
  double t480;
  double t504;
  double t501;
  double t502;
  double t503;
  double t514;
  double t518;
  double t519;
  double t526;
  double t528;
  double t532;
  double t573;
  double t576;
  double t500;
  double t508;
  double t509;
  double t552;
  double t553;
  double t556;
  double t557;
  double t560;
  double t562;
  double t578;
  double t582;
  double t583;
  double t585;
  double t586;
  double t587;
  double t511;
  double t520;
  double t521;
  double t524;
  double t533;
  double t536;
  t431 = Cos(var1[5]);
  t446 = Sin(var1[3]);
  t429 = Cos(var1[3]);
  t434 = Sin(var1[4]);
  t449 = Sin(var1[5]);
  t425 = Cos(var1[6]);
  t465 = Sin(var1[6]);
  t491 = Cos(var1[4]);
  t460 = -1.*t431*t446;
  t461 = t429*t434*t449;
  t463 = t460 + t461;
  t445 = t429*t431*t434;
  t454 = t446*t449;
  t455 = t445 + t454;
  t499 = Cos(var1[7]);
  t483 = t429*t431;
  t484 = t446*t434*t449;
  t485 = t483 + t484;
  t472 = t431*t446*t434;
  t473 = -1.*t429*t449;
  t480 = t472 + t473;
  t504 = Sin(var1[7]);
  t501 = t425*t463;
  t502 = t455*t465;
  t503 = t501 + t502;
  t514 = t425*t485;
  t518 = t480*t465;
  t519 = t514 + t518;
  t526 = t491*t425*t449;
  t528 = t491*t431*t465;
  t532 = t526 + t528;
  t573 = -1.*t499;
  t576 = 1. + t573;
  t500 = t429*t491*t499;
  t508 = t503*t504;
  t509 = t500 + t508;
  t552 = -1.*t425;
  t553 = 1. + t552;
  t556 = 0.135*t553;
  t557 = 0. + t556;
  t560 = -0.135*t465;
  t562 = 0. + t560;
  t578 = 0.135*t576;
  t582 = 0.049*t504;
  t583 = 0. + t578 + t582;
  t585 = -0.049*t576;
  t586 = 0.135*t504;
  t587 = 0. + t585 + t586;
  t511 = t491*t499*t446;
  t520 = t519*t504;
  t521 = t511 + t520;
  t524 = -1.*t499*t434;
  t533 = t532*t504;
  t536 = t524 + t533;
  p_output1[0]=-1.*t425*t455 + t463*t465;
  p_output1[1]=-1.*t425*t480 + t465*t485;
  p_output1[2]=-1.*t425*t431*t491 + t449*t465*t491;
  p_output1[3]=0.;
  p_output1[4]=t509;
  p_output1[5]=t521;
  p_output1[6]=t536;
  p_output1[7]=0.;
  p_output1[8]=-1.*t499*t503 + t429*t491*t504;
  p_output1[9]=t446*t491*t504 - 1.*t499*t519;
  p_output1[10]=-1.*t434*t504 - 1.*t499*t532;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t425*t455 - 1.*t463*t465) + 0.135*(t499*t503 - 1.*t429*t491*t504) - 0.049*t509 + t463*t557 + t455*t562 + t503*t583 + t429*t491*t587 + var1[0];
  p_output1[13]=0. - 0.09*(t425*t480 - 1.*t465*t485) + 0.135*(-1.*t446*t491*t504 + t499*t519) - 0.049*t521 + t485*t557 + t480*t562 + t519*t583 + t446*t491*t587 + var1[1];
  p_output1[14]=0. - 0.09*(t425*t431*t491 - 1.*t449*t465*t491) + 0.135*(t434*t504 + t499*t532) - 0.049*t536 + t449*t491*t557 + t431*t491*t562 + t532*t583 - 1.*t434*t587 + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
