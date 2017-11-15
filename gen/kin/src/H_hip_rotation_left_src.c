/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:00 GMT-05:00
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
  double t467;
  double t482;
  double t465;
  double t470;
  double t485;
  double t461;
  double t501;
  double t527;
  double t496;
  double t497;
  double t499;
  double t481;
  double t490;
  double t491;
  double t535;
  double t519;
  double t520;
  double t521;
  double t508;
  double t509;
  double t516;
  double t540;
  double t537;
  double t538;
  double t539;
  double t550;
  double t554;
  double t555;
  double t562;
  double t564;
  double t568;
  double t609;
  double t612;
  double t536;
  double t544;
  double t545;
  double t588;
  double t589;
  double t592;
  double t593;
  double t596;
  double t598;
  double t614;
  double t618;
  double t619;
  double t621;
  double t622;
  double t623;
  double t547;
  double t556;
  double t557;
  double t560;
  double t569;
  double t572;
  t467 = Cos(var1[5]);
  t482 = Sin(var1[3]);
  t465 = Cos(var1[3]);
  t470 = Sin(var1[4]);
  t485 = Sin(var1[5]);
  t461 = Cos(var1[6]);
  t501 = Sin(var1[6]);
  t527 = Cos(var1[4]);
  t496 = -1.*t467*t482;
  t497 = t465*t470*t485;
  t499 = t496 + t497;
  t481 = t465*t467*t470;
  t490 = t482*t485;
  t491 = t481 + t490;
  t535 = Cos(var1[7]);
  t519 = t465*t467;
  t520 = t482*t470*t485;
  t521 = t519 + t520;
  t508 = t467*t482*t470;
  t509 = -1.*t465*t485;
  t516 = t508 + t509;
  t540 = Sin(var1[7]);
  t537 = t461*t499;
  t538 = t491*t501;
  t539 = t537 + t538;
  t550 = t461*t521;
  t554 = t516*t501;
  t555 = t550 + t554;
  t562 = t527*t461*t485;
  t564 = t527*t467*t501;
  t568 = t562 + t564;
  t609 = -1.*t535;
  t612 = 1. + t609;
  t536 = t465*t527*t535;
  t544 = t539*t540;
  t545 = t536 + t544;
  t588 = -1.*t461;
  t589 = 1. + t588;
  t592 = 0.135*t589;
  t593 = 0. + t592;
  t596 = -0.135*t501;
  t598 = 0. + t596;
  t614 = 0.135*t612;
  t618 = 0.049*t540;
  t619 = 0. + t614 + t618;
  t621 = -0.049*t612;
  t622 = 0.135*t540;
  t623 = 0. + t621 + t622;
  t547 = t527*t535*t482;
  t556 = t555*t540;
  t557 = t547 + t556;
  t560 = -1.*t535*t470;
  t569 = t568*t540;
  t572 = t560 + t569;
  p_output1[0]=-1.*t461*t491 + t499*t501;
  p_output1[1]=-1.*t461*t516 + t501*t521;
  p_output1[2]=-1.*t461*t467*t527 + t485*t501*t527;
  p_output1[3]=0.;
  p_output1[4]=t545;
  p_output1[5]=t557;
  p_output1[6]=t572;
  p_output1[7]=0.;
  p_output1[8]=-1.*t535*t539 + t465*t527*t540;
  p_output1[9]=t482*t527*t540 - 1.*t535*t555;
  p_output1[10]=-1.*t470*t540 - 1.*t535*t568;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t461*t491 - 1.*t499*t501) + 0.135*(t535*t539 - 1.*t465*t527*t540) - 0.049*t545 + t499*t593 + t491*t598 + t539*t619 + t465*t527*t623 + var1[0];
  p_output1[13]=0. - 0.09*(t461*t516 - 1.*t501*t521) + 0.135*(-1.*t482*t527*t540 + t535*t555) - 0.049*t557 + t521*t593 + t516*t598 + t555*t619 + t482*t527*t623 + var1[1];
  p_output1[14]=0. - 0.09*(t461*t467*t527 - 1.*t485*t501*t527) + 0.135*(t470*t540 + t535*t568) - 0.049*t572 + t485*t527*t593 + t467*t527*t598 + t568*t619 - 1.*t470*t623 + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
