/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:15:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom_src.h"

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
  double t167;
  double t329;
  double t341;
  double t368;
  double t372;
  double t375;
  double t378;
  double t405;
  double t406;
  double t412;
  double t417;
  double t399;
  double t400;
  double t403;
  double t424;
  double t425;
  double t426;
  double t435;
  double t436;
  double t437;
  double t439;
  double t431;
  double t432;
  double t433;
  double t445;
  double t446;
  double t448;
  double t464;
  double t465;
  double t466;
  double t469;
  double t458;
  double t460;
  double t461;
  double t476;
  double t477;
  double t480;
  double t494;
  double t211;
  double t269;
  double t291;
  double t334;
  double t335;
  double t338;
  double t342;
  double t359;
  double t510;
  double t376;
  double t379;
  double t381;
  double t390;
  double t393;
  double t394;
  double t518;
  double t519;
  double t520;
  double t523;
  double t526;
  double t527;
  double t415;
  double t418;
  double t421;
  double t427;
  double t428;
  double t429;
  double t529;
  double t530;
  double t531;
  double t533;
  double t534;
  double t535;
  double t438;
  double t440;
  double t442;
  double t449;
  double t452;
  double t456;
  double t537;
  double t538;
  double t539;
  double t541;
  double t542;
  double t543;
  double t468;
  double t472;
  double t473;
  double t481;
  double t482;
  double t483;
  double t545;
  double t546;
  double t547;
  double t549;
  double t550;
  double t551;
  double t502;
  double t503;
  double t504;
  double t511;
  double t512;
  double t514;
  double t567;
  double t568;
  double t569;
  double t571;
  double t572;
  double t573;
  double t575;
  double t576;
  double t577;
  double t579;
  double t580;
  double t581;
  double t583;
  double t584;
  double t585;
  double t587;
  double t588;
  double t589;
  double t591;
  double t592;
  double t593;
  double t595;
  double t596;
  double t597;
  t167 = Cos(var1[8]);
  t329 = Cos(var1[9]);
  t341 = Sin(var1[9]);
  t368 = Cos(var1[10]);
  t372 = -1.*t368;
  t375 = 1. + t372;
  t378 = Sin(var1[10]);
  t405 = Cos(var1[11]);
  t406 = -1.*t405;
  t412 = 1. + t406;
  t417 = Sin(var1[11]);
  t399 = t167*t329*t368;
  t400 = -1.*t167*t341*t378;
  t403 = t399 + t400;
  t424 = -1.*t167*t368*t341;
  t425 = -1.*t167*t329*t378;
  t426 = t424 + t425;
  t435 = Cos(var1[12]);
  t436 = -1.*t435;
  t437 = 1. + t436;
  t439 = Sin(var1[12]);
  t431 = t405*t403;
  t432 = t426*t417;
  t433 = t431 + t432;
  t445 = t405*t426;
  t446 = -1.*t403*t417;
  t448 = t445 + t446;
  t464 = Cos(var1[13]);
  t465 = -1.*t464;
  t466 = 1. + t465;
  t469 = Sin(var1[13]);
  t458 = t435*t433;
  t460 = t448*t439;
  t461 = t458 + t460;
  t476 = t435*t448;
  t477 = -1.*t433*t439;
  t480 = t476 + t477;
  t494 = Cos(var1[7]);
  t211 = -1.*t167;
  t269 = 1. + t211;
  t291 = Sin(var1[8]);
  t334 = -1.*t329;
  t335 = 1. + t334;
  t338 = -0.049*t335;
  t342 = -0.09*t341;
  t359 = 0. + t338 + t342;
  t510 = Sin(var1[7]);
  t376 = -0.049*t375;
  t379 = -0.21*t378;
  t381 = 0. + t376 + t379;
  t390 = -0.21*t375;
  t393 = 0.049*t378;
  t394 = 0. + t390 + t393;
  t518 = t494*t329*t291;
  t519 = -1.*t510*t341;
  t520 = t518 + t519;
  t523 = -1.*t329*t510;
  t526 = -1.*t494*t291*t341;
  t527 = t523 + t526;
  t415 = -0.0016*t412;
  t418 = -0.2707*t417;
  t421 = 0. + t415 + t418;
  t427 = -0.2707*t412;
  t428 = 0.0016*t417;
  t429 = 0. + t427 + t428;
  t529 = t368*t520;
  t530 = t527*t378;
  t531 = t529 + t530;
  t533 = t368*t527;
  t534 = -1.*t520*t378;
  t535 = t533 + t534;
  t438 = 0.0184*t437;
  t440 = -0.7055*t439;
  t442 = 0. + t438 + t440;
  t449 = -0.7055*t437;
  t452 = -0.0184*t439;
  t456 = 0. + t449 + t452;
  t537 = t405*t531;
  t538 = t535*t417;
  t539 = t537 + t538;
  t541 = t405*t535;
  t542 = -1.*t531*t417;
  t543 = t541 + t542;
  t468 = -0.0216*t466;
  t472 = -1.1135*t469;
  t473 = 0. + t468 + t472;
  t481 = -1.1135*t466;
  t482 = 0.0216*t469;
  t483 = 0. + t481 + t482;
  t545 = t435*t539;
  t546 = t543*t439;
  t547 = t545 + t546;
  t549 = t435*t543;
  t550 = -1.*t539*t439;
  t551 = t549 + t550;
  t502 = -0.135*t269;
  t503 = 0.049*t291;
  t504 = 0. + t502 + t503;
  t511 = -0.09*t335;
  t512 = 0.049*t341;
  t514 = 0. + t511 + t512;
  t567 = t329*t510*t291;
  t568 = t494*t341;
  t569 = t567 + t568;
  t571 = t494*t329;
  t572 = -1.*t510*t291*t341;
  t573 = t571 + t572;
  t575 = t368*t569;
  t576 = t573*t378;
  t577 = t575 + t576;
  t579 = t368*t573;
  t580 = -1.*t569*t378;
  t581 = t579 + t580;
  t583 = t405*t577;
  t584 = t581*t417;
  t585 = t583 + t584;
  t587 = t405*t581;
  t588 = -1.*t577*t417;
  t589 = t587 + t588;
  t591 = t435*t585;
  t592 = t589*t439;
  t593 = t591 + t592;
  t595 = t435*t589;
  t596 = -1.*t585*t439;
  t597 = t595 + t596;
  p_output1[0]=-0.03155 - 0.049*t269 - 0.004500000000000004*t291 + t167*t359 + t167*t329*t381 - 1.*t167*t341*t394 + t403*t421 + t426*t429 + t433*t442 + t448*t456 + t461*t473 - 1.1312*(-1.*t461*t469 + t464*t480) + 0.0306*(t461*t464 + t469*t480) + t480*t483;
  p_output1[1]=0. + 0.135*(1. - 1.*t494) + 0.1305*t167*t494 - 1.*t291*t359*t494 - 1.*t494*t504 + t510*t514 - 1.*t381*t520 - 1.*t394*t527 - 1.*t421*t531 - 1.*t429*t535 - 1.*t442*t539 - 1.*t456*t543 - 1.*t473*t547 - 1.*t483*t551 + 1.1312*(-1.*t469*t547 + t464*t551) - 0.0306*(t464*t547 + t469*t551);
  p_output1[2]=-0.07996 - 0.135*t510 + 0.1305*t167*t510 - 1.*t291*t359*t510 - 1.*t504*t510 - 1.*t494*t514 - 1.*t381*t569 - 1.*t394*t573 - 1.*t421*t577 - 1.*t429*t581 - 1.*t442*t585 - 1.*t456*t589 - 1.*t473*t593 - 1.*t483*t597 + 1.1312*(-1.*t469*t593 + t464*t597) - 0.0306*(t464*t593 + t469*t597);
}



void p_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
