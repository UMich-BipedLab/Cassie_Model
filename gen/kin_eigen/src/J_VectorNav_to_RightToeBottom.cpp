/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:33:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t274;
  double t282;
  double t301;
  double t281;
  double t288;
  double t298;
  double t273;
  double t319;
  double t327;
  double t328;
  double t348;
  double t300;
  double t334;
  double t342;
  double t270;
  double t351;
  double t355;
  double t356;
  double t372;
  double t346;
  double t361;
  double t364;
  double t261;
  double t373;
  double t374;
  double t380;
  double t238;
  double t257;
  double t424;
  double t425;
  double t426;
  double t421;
  double t428;
  double t429;
  double t431;
  double t433;
  double t396;
  double t430;
  double t436;
  double t437;
  double t441;
  double t443;
  double t444;
  double t370;
  double t386;
  double t390;
  double t394;
  double t401;
  double t404;
  double t407;
  double t410;
  double t415;
  double t416;
  double t419;
  double t234;
  double t496;
  double t497;
  double t492;
  double t493;
  double t498;
  double t499;
  double t500;
  double t501;
  double t503;
  double t504;
  double t505;
  double t506;
  double t488;
  double t489;
  double t494;
  double t495;
  double t502;
  double t507;
  double t508;
  double t510;
  double t511;
  double t512;
  double t513;
  double t514;
  double t480;
  double t481;
  double t490;
  double t491;
  double t509;
  double t515;
  double t516;
  double t518;
  double t519;
  double t520;
  double t521;
  double t522;
  double t465;
  double t466;
  double t473;
  double t474;
  double t476;
  double t479;
  double t484;
  double t485;
  double t517;
  double t523;
  double t524;
  double t525;
  double t526;
  double t527;
  double t528;
  double t529;
  double t530;
  double t531;
  double t532;
  double t438;
  double t445;
  double t446;
  double t447;
  double t449;
  double t451;
  double t452;
  double t453;
  double t454;
  double t457;
  double t459;
  double t469;
  double t470;
  double t533;
  double t534;
  double t538;
  double t539;
  double t540;
  double t541;
  double t542;
  double t547;
  double t548;
  double t549;
  double t550;
  double t551;
  double t536;
  double t537;
  double t235;
  double t461;
  double t556;
  double t557;
  double t559;
  double t560;
  double t561;
  double t544;
  double t545;
  double t546;
  double t562;
  double t552;
  t274 = Cos(var1[13]);
  t282 = Sin(var1[13]);
  t301 = Cos(var1[12]);
  t281 = 0.642788*t274;
  t288 = -0.766044*t282;
  t298 = t281 + t288;
  t273 = Sin(var1[12]);
  t319 = -0.766044*t274;
  t327 = -0.642788*t282;
  t328 = t319 + t327;
  t348 = Cos(var1[11]);
  t300 = -1.*t273*t298;
  t334 = t301*t328;
  t342 = 0. + t300 + t334;
  t270 = Sin(var1[11]);
  t351 = t301*t298;
  t355 = t273*t328;
  t356 = 0. + t351 + t355;
  t372 = Cos(var1[10]);
  t346 = t270*t342;
  t361 = t348*t356;
  t364 = 0. + t346 + t361;
  t261 = Sin(var1[10]);
  t373 = t348*t342;
  t374 = -1.*t270*t356;
  t380 = 0. + t373 + t374;
  t238 = Cos(var1[8]);
  t257 = Sin(var1[9]);
  t424 = -0.642788*t274;
  t425 = 0.766044*t282;
  t426 = t424 + t425;
  t421 = -1.*t273*t328;
  t428 = t301*t426;
  t429 = 0. + t421 + t428;
  t431 = t273*t426;
  t433 = 0. + t334 + t431;
  t396 = Cos(var1[9]);
  t430 = t270*t429;
  t436 = t348*t433;
  t437 = 0. + t430 + t436;
  t441 = t348*t429;
  t443 = -1.*t270*t433;
  t444 = 0. + t441 + t443;
  t370 = -1.*t261*t364;
  t386 = t372*t380;
  t390 = 0. + t370 + t386;
  t394 = t257*t390;
  t401 = t372*t364;
  t404 = t261*t380;
  t407 = 0. + t401 + t404;
  t410 = t396*t407;
  t415 = 0. + t394 + t410;
  t416 = t238*t415;
  t419 = 0. + t416;
  t234 = Sin(var1[8]);
  t496 = -1.*t274;
  t497 = 1. + t496;
  t492 = -1.*t301;
  t493 = 1. + t492;
  t498 = 1.0335*t497;
  t499 = 1.0512*t274;
  t500 = -0.052199999999999996*t282;
  t501 = 0. + t498 + t499 + t500;
  t503 = -0.0532*t497;
  t504 = -0.001*t274;
  t505 = 0.017699999999999827*t282;
  t506 = 0. + t503 + t504 + t505;
  t488 = -1.*t348;
  t489 = 1. + t488;
  t494 = -0.0132*t493;
  t495 = -0.6255*t273;
  t502 = t273*t501;
  t507 = t301*t506;
  t508 = 0. + t494 + t495 + t502 + t507;
  t510 = 0.6255*t493;
  t511 = -0.0132*t273;
  t512 = t301*t501;
  t513 = -1.*t273*t506;
  t514 = 0. + t510 + t511 + t512 + t513;
  t480 = -1.*t372;
  t481 = 1. + t480;
  t490 = 0.1907*t489;
  t491 = -0.0332*t270;
  t509 = -1.*t270*t508;
  t515 = t348*t514;
  t516 = 0. + t490 + t491 + t509 + t515;
  t518 = -0.0332*t489;
  t519 = -0.1907*t270;
  t520 = t348*t508;
  t521 = t270*t514;
  t522 = 0. + t518 + t519 + t520 + t521;
  t465 = -1.*t238;
  t466 = 1. + t465;
  t473 = -1.*t396;
  t474 = 1. + t473;
  t476 = -0.0806*t474;
  t479 = -0.01*t257;
  t484 = -0.0806*t481;
  t485 = -0.13*t261;
  t517 = t261*t516;
  t523 = t372*t522;
  t524 = 0. + t484 + t485 + t517 + t523;
  t525 = t396*t524;
  t526 = 0.13*t481;
  t527 = -0.0806*t261;
  t528 = t372*t516;
  t529 = -1.*t261*t522;
  t530 = 0. + t526 + t527 + t528 + t529;
  t531 = t257*t530;
  t532 = 0. + t476 + t479 + t525 + t531;
  t438 = -1.*t261*t437;
  t445 = t372*t444;
  t446 = 0. + t438 + t445;
  t447 = t257*t446;
  t449 = t372*t437;
  t451 = t261*t444;
  t452 = 0. + t449 + t451;
  t453 = t396*t452;
  t454 = 0. + t447 + t453;
  t457 = t238*t454;
  t459 = 0. + t457;
  t469 = -0.0806*t466;
  t470 = -0.004500000000000004*t234;
  t533 = t238*t532;
  t534 = 0. + t469 + t470 + t533;
  t538 = 0.135*t466;
  t539 = 0.1305*t238;
  t540 = -0.0806*t234;
  t541 = -1.*t234*t532;
  t542 = 0. + t538 + t539 + t540 + t541;
  t547 = 0.01*t474;
  t548 = -0.0806*t257;
  t549 = -1.*t257*t524;
  t550 = t396*t530;
  t551 = 0. + t547 + t548 + t549 + t550;
  t536 = -1.*t234*t415;
  t537 = 0. + t536;
  t235 = 0. + t234;
  t461 = 0. + t238;
  t556 = -1.*t234*t454;
  t557 = 0. + t556;
  t559 = t396*t446;
  t560 = -1.*t257*t452;
  t561 = 0. + t559 + t560;
  t544 = t396*t390;
  t545 = -1.*t257*t407;
  t546 = 0. + t544 + t545;
  t562 = t551*t561;
  t552 = -1.*t546*t551;

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
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=t235;
  p_output1(43)=t419;
  p_output1(44)=t459;
  p_output1(45)=0. - 0.08*t461 + t459*(-1.*t419*t534 - 1.*t537*t542 + t552) + t419*(t459*t534 + t542*t557 + t562);
  p_output1(46)=-0.08*t537 + t459*(0. + t235*t534 + t461*t542) - 0.135*t546 + t235*(-1.*t459*t534 - 1.*t542*t557 - 1.*t551*t561);
  p_output1(47)=t419*(0. - 1.*t235*t534 - 1.*t461*t542) + t235*(t419*t534 + t537*t542 + t546*t551) - 0.08*t557 - 0.135*t561;
  p_output1(48)=0.;
  p_output1(49)=0. - 1.*t390*t396 + t257*t407;
  p_output1(50)=0. - 1.*t396*t446 + t257*t452;
  p_output1(51)=-0.0806 - 1.*(0. - 1.*t415*t532 + t552)*t561 - 1.*t546*(0. + t454*t532 + t562);
  p_output1(52)=0. - 0.135*t415 - 0.1305*t561;
  p_output1(53)=0. - 0.135*t454 + 0.1305*t546;
  p_output1(54)=1.;
  p_output1(55)=0.;
  p_output1(56)=0.;
  p_output1(57)=0.;
  p_output1(58)=0. - 0.0806*t390 - 0.01*t407 - 1.*t452*t524 - 1.*t446*t530;
  p_output1(59)=0. - 0.0806*t446 - 0.01*t452 + t407*t524 + t390*t530;
  p_output1(60)=1.;
  p_output1(61)=0.;
  p_output1(62)=0.;
  p_output1(63)=0.;
  p_output1(64)=0. - 0.13*t364 - 0.0806*t380 - 1.*t444*t516 - 1.*t437*t522;
  p_output1(65)=0. - 0.13*t437 - 0.0806*t444 + t380*t516 + t364*t522;
  p_output1(66)=1.;
  p_output1(67)=0.;
  p_output1(68)=0.;
  p_output1(69)=0.;
  p_output1(70)=0. - 0.0332*t342 - 0.1907*t356 - 1.*t433*t508 - 1.*t429*t514;
  p_output1(71)=0. - 0.0332*t429 - 0.1907*t433 + t356*t508 + t342*t514;
  p_output1(72)=1.;
  p_output1(73)=0.;
  p_output1(74)=0.;
  p_output1(75)=0.;
  p_output1(76)=0. - 0.6255*t298 - 0.0132*t328 - 1.*t426*t501 - 1.*t328*t506;
  p_output1(77)=0. - 0.6255*t328 - 0.0132*t426 + t328*t501 + t298*t506;
  p_output1(78)=1.;
  p_output1(79)=0.;
  p_output1(80)=0.;
  p_output1(81)=0.;
  p_output1(82)=0.05136484439999989;
  p_output1(83)=0.01999455480000023;
}


       
void J_VectorNav_to_RightToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
