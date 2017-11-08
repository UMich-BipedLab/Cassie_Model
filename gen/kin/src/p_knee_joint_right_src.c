/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_right_src.h"

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
  double t1454;
  double t6500;
  double t6506;
  double t6503;
  double t6507;
  double t3279;
  double t6461;
  double t6466;
  double t6474;
  double t6494;
  double t6505;
  double t6508;
  double t6509;
  double t6512;
  double t6524;
  double t6525;
  double t6526;
  double t1933;
  double t6531;
  double t6532;
  double t6533;
  double t6536;
  double t6537;
  double t6538;
  double t6540;
  double t6543;
  double t6544;
  double t6545;
  double t6557;
  double t6558;
  double t6561;
  double t6470;
  double t6480;
  double t6486;
  double t6495;
  double t6499;
  double t6517;
  double t6519;
  double t6520;
  double t6521;
  double t6528;
  double t6529;
  double t6530;
  double t6574;
  double t6575;
  double t6576;
  double t6578;
  double t6579;
  double t6580;
  double t6539;
  double t6541;
  double t6542;
  double t6582;
  double t6583;
  double t6584;
  double t6553;
  double t6554;
  double t6555;
  double t6586;
  double t6589;
  double t6590;
  double t6598;
  double t6599;
  double t6600;
  double t6614;
  double t6615;
  double t6616;
  double t6618;
  double t6619;
  double t6620;
  double t6626;
  double t6627;
  double t6628;
  t1454 = Cos(var1[3]);
  t6500 = Cos(var1[5]);
  t6506 = Sin(var1[3]);
  t6503 = Sin(var1[4]);
  t6507 = Sin(var1[5]);
  t3279 = Cos(var1[14]);
  t6461 = -1.*t3279;
  t6466 = 1. + t6461;
  t6474 = Sin(var1[14]);
  t6494 = Sin(var1[13]);
  t6505 = t1454*t6500*t6503;
  t6508 = t6506*t6507;
  t6509 = t6505 + t6508;
  t6512 = Cos(var1[13]);
  t6524 = -1.*t6500*t6506;
  t6525 = t1454*t6503*t6507;
  t6526 = t6524 + t6525;
  t1933 = Cos(var1[4]);
  t6531 = t6494*t6509;
  t6532 = t6512*t6526;
  t6533 = t6531 + t6532;
  t6536 = Cos(var1[15]);
  t6537 = -1.*t6536;
  t6538 = 1. + t6537;
  t6540 = Sin(var1[15]);
  t6543 = t6512*t6509;
  t6544 = -1.*t6494*t6526;
  t6545 = t6543 + t6544;
  t6557 = t3279*t1454*t1933;
  t6558 = t6474*t6533;
  t6561 = t6557 + t6558;
  t6470 = -0.049*t6466;
  t6480 = -0.135*t6474;
  t6486 = 0. + t6470 + t6480;
  t6495 = 0.135*t6494;
  t6499 = 0. + t6495;
  t6517 = -1.*t6512;
  t6519 = 1. + t6517;
  t6520 = -0.135*t6519;
  t6521 = 0. + t6520;
  t6528 = -0.135*t6466;
  t6529 = 0.049*t6474;
  t6530 = 0. + t6528 + t6529;
  t6574 = t6500*t6506*t6503;
  t6575 = -1.*t1454*t6507;
  t6576 = t6574 + t6575;
  t6578 = t1454*t6500;
  t6579 = t6506*t6503*t6507;
  t6580 = t6578 + t6579;
  t6539 = -0.09*t6538;
  t6541 = 0.049*t6540;
  t6542 = 0. + t6539 + t6541;
  t6582 = t6494*t6576;
  t6583 = t6512*t6580;
  t6584 = t6582 + t6583;
  t6553 = -0.049*t6538;
  t6554 = -0.09*t6540;
  t6555 = 0. + t6553 + t6554;
  t6586 = t6512*t6576;
  t6589 = -1.*t6494*t6580;
  t6590 = t6586 + t6589;
  t6598 = t3279*t1933*t6506;
  t6599 = t6474*t6584;
  t6600 = t6598 + t6599;
  t6614 = t1933*t6500*t6494;
  t6615 = t6512*t1933*t6507;
  t6616 = t6614 + t6615;
  t6618 = t6512*t1933*t6500;
  t6619 = -1.*t1933*t6494*t6507;
  t6620 = t6618 + t6619;
  t6626 = -1.*t3279*t6503;
  t6627 = t6474*t6616;
  t6628 = t6626 + t6627;
  p_output1[0]=0. + t1454*t1933*t6486 + t6499*t6509 + t6521*t6526 + t6530*t6533 - 0.1305*(-1.*t1454*t1933*t6474 + t3279*t6533) + t6542*t6545 + t6555*t6561 - 0.049*(t6540*t6545 + t6536*t6561) - 0.21*(t6536*t6545 - 1.*t6540*t6561) + var1[0];
  p_output1[1]=0. + t1933*t6486*t6506 + t6499*t6576 + t6521*t6580 + t6530*t6584 - 0.1305*(-1.*t1933*t6474*t6506 + t3279*t6584) + t6542*t6590 + t6555*t6600 - 0.049*(t6540*t6590 + t6536*t6600) - 0.21*(t6536*t6590 - 1.*t6540*t6600) + var1[1];
  p_output1[2]=0. + t1933*t6499*t6500 - 1.*t6486*t6503 + t1933*t6507*t6521 + t6530*t6616 - 0.1305*(t6474*t6503 + t3279*t6616) + t6542*t6620 + t6555*t6628 - 0.049*(t6540*t6620 + t6536*t6628) - 0.21*(t6536*t6620 - 1.*t6540*t6628) + var1[2];
}



void p_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
