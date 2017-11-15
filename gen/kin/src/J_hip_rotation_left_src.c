/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_rotation_left_src.h"

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
  double t405;
  double t408;
  double t409;
  double t404;
  double t410;
  double t362;
  double t419;
  double t422;
  double t424;
  double t407;
  double t411;
  double t415;
  double t425;
  double t442;
  double t443;
  double t444;
  double t447;
  double t437;
  double t438;
  double t440;
  double t453;
  double t385;
  double t391;
  double t398;
  double t401;
  double t428;
  double t429;
  double t473;
  double t475;
  double t476;
  double t469;
  double t470;
  double t471;
  double t446;
  double t449;
  double t451;
  double t455;
  double t456;
  double t457;
  double t482;
  double t483;
  double t484;
  double t503;
  double t504;
  double t505;
  double t526;
  double t527;
  double t529;
  double t551;
  double t552;
  double t553;
  double t573;
  double t574;
  double t575;
  double t478;
  double t582;
  double t583;
  double t589;
  double t590;
  double t591;
  double t598;
  double t599;
  double t600;
  double t612;
  double t613;
  double t614;
  double t578;
  double t479;
  double t480;
  double t630;
  double t631;
  double t632;
  double t594;
  double t637;
  double t638;
  double t607;
  double t608;
  double t609;
  double t610;
  double t615;
  double t616;
  double t617;
  double t487;
  double t488;
  double t489;
  double t646;
  double t647;
  double t648;
  double t650;
  double t651;
  double t660;
  double t661;
  double t662;
  double t464;
  double t673;
  double t674;
  double t675;
  t405 = Cos(var1[5]);
  t408 = Sin(var1[3]);
  t409 = Sin(var1[4]);
  t404 = Cos(var1[3]);
  t410 = Sin(var1[5]);
  t362 = Cos(var1[6]);
  t419 = -1.*t405*t408*t409;
  t422 = t404*t410;
  t424 = t419 + t422;
  t407 = -1.*t404*t405;
  t411 = -1.*t408*t409*t410;
  t415 = t407 + t411;
  t425 = Sin(var1[6]);
  t442 = Cos(var1[7]);
  t443 = -1.*t442;
  t444 = 1. + t443;
  t447 = Sin(var1[7]);
  t437 = t362*t415;
  t438 = t424*t425;
  t440 = t437 + t438;
  t453 = Cos(var1[4]);
  t385 = -1.*t362;
  t391 = 1. + t385;
  t398 = 0.135*t391;
  t401 = 0. + t398;
  t428 = -0.135*t425;
  t429 = 0. + t428;
  t473 = t404*t405*t409;
  t475 = t408*t410;
  t476 = t473 + t475;
  t469 = -1.*t405*t408;
  t470 = t404*t409*t410;
  t471 = t469 + t470;
  t446 = 0.135*t444;
  t449 = 0.049*t447;
  t451 = 0. + t446 + t449;
  t455 = -0.049*t444;
  t456 = 0.135*t447;
  t457 = 0. + t455 + t456;
  t482 = t362*t471;
  t483 = t476*t425;
  t484 = t482 + t483;
  t503 = t404*t453*t362*t410;
  t504 = t404*t453*t405*t425;
  t505 = t503 + t504;
  t526 = t453*t362*t408*t410;
  t527 = t453*t405*t408*t425;
  t529 = t526 + t527;
  t551 = -1.*t362*t409*t410;
  t552 = -1.*t405*t409*t425;
  t553 = t551 + t552;
  t573 = t405*t408;
  t574 = -1.*t404*t409*t410;
  t575 = t573 + t574;
  t478 = t362*t476;
  t582 = t575*t425;
  t583 = t478 + t582;
  t589 = t405*t408*t409;
  t590 = -1.*t404*t410;
  t591 = t589 + t590;
  t598 = t362*t591;
  t599 = t415*t425;
  t600 = t598 + t599;
  t612 = t453*t405*t362;
  t613 = -1.*t453*t410*t425;
  t614 = t612 + t613;
  t578 = -1.*t476*t425;
  t479 = -1.*t471*t425;
  t480 = t478 + t479;
  t630 = t404*t405;
  t631 = t408*t409*t410;
  t632 = t630 + t631;
  t594 = -1.*t591*t425;
  t637 = -1.*t632*t425;
  t638 = t598 + t637;
  t607 = -1.*t453*t362*t410;
  t608 = -1.*t453*t405*t425;
  t609 = t607 + t608;
  t610 = -0.09*t609;
  t615 = 0.135*t442*t614;
  t616 = t614*t451;
  t617 = -0.049*t614*t447;
  t487 = t442*t484;
  t488 = -1.*t404*t453*t447;
  t489 = t487 + t488;
  t646 = 0.135*t442;
  t647 = -0.049*t447;
  t648 = t646 + t647;
  t650 = 0.049*t442;
  t651 = t650 + t456;
  t660 = t362*t632;
  t661 = t591*t425;
  t662 = t660 + t661;
  t464 = -1.*t453*t442*t408;
  t673 = t453*t362*t410;
  t674 = t453*t405*t425;
  t675 = t673 + t674;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t401*t415 - 0.09*(t362*t424 - 1.*t415*t425) + t424*t429 + t440*t451 + 0.135*(t440*t442 + t408*t447*t453) - 1.*t408*t453*t457 - 0.049*(t440*t447 + t464);
  p_output1[10]=t404*t453*t457 + t401*t471 + t429*t476 - 0.09*t480 + t451*t484 - 0.049*(t404*t442*t453 + t447*t484) + 0.135*t489;
  p_output1[11]=0;
  p_output1[12]=t401*t404*t410*t453 + t404*t405*t429*t453 - 0.09*(t362*t404*t405*t453 - 1.*t404*t410*t425*t453) - 1.*t404*t409*t457 + t451*t505 + 0.135*(t404*t409*t447 + t442*t505) - 0.049*(-1.*t404*t409*t442 + t447*t505);
  p_output1[13]=t401*t408*t410*t453 + t405*t408*t429*t453 - 0.09*(t362*t405*t408*t453 - 1.*t408*t410*t425*t453) - 1.*t408*t409*t457 + t451*t529 + 0.135*(t408*t409*t447 + t442*t529) - 0.049*(-1.*t408*t409*t442 + t447*t529);
  p_output1[14]=-1.*t401*t409*t410 - 0.09*(-1.*t362*t405*t409 + t409*t410*t425) - 1.*t405*t409*t429 - 1.*t453*t457 + t451*t553 + 0.135*(t447*t453 + t442*t553) - 0.049*(-1.*t442*t453 + t447*t553);
  p_output1[15]=t401*t476 + t429*t575 - 0.09*(t362*t575 + t578) + 0.135*t442*t583 - 0.049*t447*t583 + t451*t583;
  p_output1[16]=t415*t429 + t401*t591 - 0.09*(t437 + t594) + 0.135*t442*t600 - 0.049*t447*t600 + t451*t600;
  p_output1[17]=t401*t405*t453 - 1.*t410*t429*t453 + t610 + t615 + t616 + t617;
  p_output1[18]=0.135*t425*t471 - 0.135*t362*t476 + 0.135*t442*t480 - 0.049*t447*t480 + t451*t480 - 0.09*(-1.*t362*t471 + t578);
  p_output1[19]=-0.135*t362*t591 + 0.135*t425*t632 - 0.09*(t594 - 1.*t362*t632) + 0.135*t442*t638 - 0.049*t447*t638 + t451*t638;
  p_output1[20]=-0.135*t362*t405*t453 + 0.135*t410*t425*t453 + t610 + t615 + t616 + t617;
  p_output1[21]=0.135*(-1.*t404*t442*t453 - 1.*t447*t484) - 0.049*t489 + t404*t453*t648 + t484*t651;
  p_output1[22]=t408*t453*t648 + t651*t662 - 0.049*(-1.*t408*t447*t453 + t442*t662) + 0.135*(t464 - 1.*t447*t662);
  p_output1[23]=-1.*t409*t648 + t651*t675 - 0.049*(t409*t447 + t442*t675) + 0.135*(t409*t442 - 1.*t447*t675);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
