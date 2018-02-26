/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:33:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_VectorNav_to_RightToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t361;
  double t394;
  double t424;
  double t386;
  double t401;
  double t410;
  double t355;
  double t425;
  double t428;
  double t430;
  double t453;
  double t416;
  double t436;
  double t447;
  double t351;
  double t457;
  double t469;
  double t476;
  double t490;
  double t449;
  double t479;
  double t484;
  double t346;
  double t491;
  double t494;
  double t498;
  double t288;
  double t319;
  double t525;
  double t526;
  double t527;
  double t523;
  double t528;
  double t531;
  double t535;
  double t538;
  double t503;
  double t533;
  double t539;
  double t540;
  double t544;
  double t547;
  double t548;
  double t485;
  double t499;
  double t500;
  double t504;
  double t505;
  double t510;
  double t543;
  double t550;
  double t553;
  double t555;
  double t558;
  double t559;
  t361 = Cos(var1[13]);
  t394 = Sin(var1[13]);
  t424 = Cos(var1[12]);
  t386 = 0.642788*t361;
  t401 = -0.766044*t394;
  t410 = t386 + t401;
  t355 = Sin(var1[12]);
  t425 = -0.766044*t361;
  t428 = -0.642788*t394;
  t430 = t425 + t428;
  t453 = Cos(var1[11]);
  t416 = -1.*t355*t410;
  t436 = t424*t430;
  t447 = 0. + t416 + t436;
  t351 = Sin(var1[11]);
  t457 = t424*t410;
  t469 = t355*t430;
  t476 = 0. + t457 + t469;
  t490 = Cos(var1[10]);
  t449 = t351*t447;
  t479 = t453*t476;
  t484 = 0. + t449 + t479;
  t346 = Sin(var1[10]);
  t491 = t453*t447;
  t494 = -1.*t351*t476;
  t498 = 0. + t491 + t494;
  t288 = Cos(var1[8]);
  t319 = Sin(var1[9]);
  t525 = -0.642788*t361;
  t526 = 0.766044*t394;
  t527 = t525 + t526;
  t523 = -1.*t355*t430;
  t528 = t424*t527;
  t531 = 0. + t523 + t528;
  t535 = t355*t527;
  t538 = 0. + t436 + t535;
  t503 = Cos(var1[9]);
  t533 = t351*t531;
  t539 = t453*t538;
  t540 = 0. + t533 + t539;
  t544 = t453*t531;
  t547 = -1.*t351*t538;
  t548 = 0. + t544 + t547;
  t485 = -1.*t346*t484;
  t499 = t490*t498;
  t500 = 0. + t485 + t499;
  t504 = t490*t484;
  t505 = t346*t498;
  t510 = 0. + t504 + t505;
  t543 = -1.*t346*t540;
  t550 = t490*t548;
  t553 = 0. + t543 + t550;
  t555 = t490*t540;
  t558 = t346*t548;
  t559 = 0. + t555 + t558;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0. + Sin(var1(8));
  p_output1(22)=0. + t288*(0. + t319*t500 + t503*t510);
  p_output1(23)=0. + t288*(0. + t319*t553 + t503*t559);
  p_output1(24)=0.;
  p_output1(25)=0. - 1.*t500*t503 + t319*t510;
  p_output1(26)=0. - 1.*t503*t553 + t319*t559;
  p_output1(27)=1.;
  p_output1(28)=0.;
  p_output1(29)=0.;
  p_output1(30)=1.;
  p_output1(31)=0.;
  p_output1(32)=0.;
  p_output1(33)=1.;
  p_output1(34)=0.;
  p_output1(35)=0.;
  p_output1(36)=1.;
  p_output1(37)=0.;
  p_output1(38)=0.;
  p_output1(39)=1.;
  p_output1(40)=0.;
  p_output1(41)=0.;
}


       
void Jw_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
