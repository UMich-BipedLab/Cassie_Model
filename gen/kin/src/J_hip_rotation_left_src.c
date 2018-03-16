/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:52 GMT-04:00
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
  double t369;
  double t372;
  double t373;
  double t368;
  double t374;
  double t326;
  double t383;
  double t386;
  double t388;
  double t371;
  double t375;
  double t379;
  double t389;
  double t406;
  double t407;
  double t408;
  double t411;
  double t401;
  double t402;
  double t404;
  double t417;
  double t349;
  double t355;
  double t362;
  double t365;
  double t392;
  double t393;
  double t437;
  double t439;
  double t440;
  double t433;
  double t434;
  double t435;
  double t410;
  double t413;
  double t415;
  double t419;
  double t420;
  double t421;
  double t446;
  double t447;
  double t448;
  double t467;
  double t468;
  double t469;
  double t490;
  double t491;
  double t493;
  double t515;
  double t516;
  double t517;
  double t537;
  double t538;
  double t539;
  double t442;
  double t546;
  double t547;
  double t553;
  double t554;
  double t555;
  double t562;
  double t563;
  double t564;
  double t576;
  double t577;
  double t578;
  double t542;
  double t443;
  double t444;
  double t594;
  double t595;
  double t596;
  double t558;
  double t601;
  double t602;
  double t571;
  double t572;
  double t573;
  double t574;
  double t579;
  double t580;
  double t581;
  double t451;
  double t452;
  double t453;
  double t610;
  double t611;
  double t612;
  double t614;
  double t615;
  double t624;
  double t625;
  double t626;
  double t428;
  double t637;
  double t638;
  double t639;
  t369 = Cos(var1[5]);
  t372 = Sin(var1[3]);
  t373 = Sin(var1[4]);
  t368 = Cos(var1[3]);
  t374 = Sin(var1[5]);
  t326 = Cos(var1[6]);
  t383 = -1.*t369*t372*t373;
  t386 = t368*t374;
  t388 = t383 + t386;
  t371 = -1.*t368*t369;
  t375 = -1.*t372*t373*t374;
  t379 = t371 + t375;
  t389 = Sin(var1[6]);
  t406 = Cos(var1[7]);
  t407 = -1.*t406;
  t408 = 1. + t407;
  t411 = Sin(var1[7]);
  t401 = t326*t379;
  t402 = t388*t389;
  t404 = t401 + t402;
  t417 = Cos(var1[4]);
  t349 = -1.*t326;
  t355 = 1. + t349;
  t362 = 0.135*t355;
  t365 = 0. + t362;
  t392 = -0.135*t389;
  t393 = 0. + t392;
  t437 = t368*t369*t373;
  t439 = t372*t374;
  t440 = t437 + t439;
  t433 = -1.*t369*t372;
  t434 = t368*t373*t374;
  t435 = t433 + t434;
  t410 = 0.135*t408;
  t413 = 0.049*t411;
  t415 = 0. + t410 + t413;
  t419 = -0.049*t408;
  t420 = 0.135*t411;
  t421 = 0. + t419 + t420;
  t446 = t326*t435;
  t447 = t440*t389;
  t448 = t446 + t447;
  t467 = t368*t417*t326*t374;
  t468 = t368*t417*t369*t389;
  t469 = t467 + t468;
  t490 = t417*t326*t372*t374;
  t491 = t417*t369*t372*t389;
  t493 = t490 + t491;
  t515 = -1.*t326*t373*t374;
  t516 = -1.*t369*t373*t389;
  t517 = t515 + t516;
  t537 = t369*t372;
  t538 = -1.*t368*t373*t374;
  t539 = t537 + t538;
  t442 = t326*t440;
  t546 = t539*t389;
  t547 = t442 + t546;
  t553 = t369*t372*t373;
  t554 = -1.*t368*t374;
  t555 = t553 + t554;
  t562 = t326*t555;
  t563 = t379*t389;
  t564 = t562 + t563;
  t576 = t417*t369*t326;
  t577 = -1.*t417*t374*t389;
  t578 = t576 + t577;
  t542 = -1.*t440*t389;
  t443 = -1.*t435*t389;
  t444 = t442 + t443;
  t594 = t368*t369;
  t595 = t372*t373*t374;
  t596 = t594 + t595;
  t558 = -1.*t555*t389;
  t601 = -1.*t596*t389;
  t602 = t562 + t601;
  t571 = -1.*t417*t326*t374;
  t572 = -1.*t417*t369*t389;
  t573 = t571 + t572;
  t574 = -0.09*t573;
  t579 = 0.135*t406*t578;
  t580 = t578*t415;
  t581 = -0.049*t578*t411;
  t451 = t406*t448;
  t452 = -1.*t368*t417*t411;
  t453 = t451 + t452;
  t610 = 0.135*t406;
  t611 = -0.049*t411;
  t612 = t610 + t611;
  t614 = 0.049*t406;
  t615 = t614 + t420;
  t624 = t326*t596;
  t625 = t555*t389;
  t626 = t624 + t625;
  t428 = -1.*t417*t406*t372;
  t637 = t417*t326*t374;
  t638 = t417*t369*t389;
  t639 = t637 + t638;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t365*t379 - 0.09*(t326*t388 - 1.*t379*t389) + t388*t393 + t404*t415 + 0.135*(t404*t406 + t372*t411*t417) - 1.*t372*t417*t421 - 0.049*(t404*t411 + t428);
  p_output1[10]=t368*t417*t421 + t365*t435 + t393*t440 - 0.09*t444 + t415*t448 - 0.049*(t368*t406*t417 + t411*t448) + 0.135*t453;
  p_output1[11]=0;
  p_output1[12]=t365*t368*t374*t417 + t368*t369*t393*t417 - 0.09*(t326*t368*t369*t417 - 1.*t368*t374*t389*t417) - 1.*t368*t373*t421 + t415*t469 + 0.135*(t368*t373*t411 + t406*t469) - 0.049*(-1.*t368*t373*t406 + t411*t469);
  p_output1[13]=t365*t372*t374*t417 + t369*t372*t393*t417 - 0.09*(t326*t369*t372*t417 - 1.*t372*t374*t389*t417) - 1.*t372*t373*t421 + t415*t493 + 0.135*(t372*t373*t411 + t406*t493) - 0.049*(-1.*t372*t373*t406 + t411*t493);
  p_output1[14]=-1.*t365*t373*t374 - 0.09*(-1.*t326*t369*t373 + t373*t374*t389) - 1.*t369*t373*t393 - 1.*t417*t421 + t415*t517 + 0.135*(t411*t417 + t406*t517) - 0.049*(-1.*t406*t417 + t411*t517);
  p_output1[15]=t365*t440 + t393*t539 - 0.09*(t326*t539 + t542) + 0.135*t406*t547 - 0.049*t411*t547 + t415*t547;
  p_output1[16]=t379*t393 + t365*t555 - 0.09*(t401 + t558) + 0.135*t406*t564 - 0.049*t411*t564 + t415*t564;
  p_output1[17]=t365*t369*t417 - 1.*t374*t393*t417 + t574 + t579 + t580 + t581;
  p_output1[18]=0.135*t389*t435 - 0.135*t326*t440 + 0.135*t406*t444 - 0.049*t411*t444 + t415*t444 - 0.09*(-1.*t326*t435 + t542);
  p_output1[19]=-0.135*t326*t555 + 0.135*t389*t596 - 0.09*(t558 - 1.*t326*t596) + 0.135*t406*t602 - 0.049*t411*t602 + t415*t602;
  p_output1[20]=-0.135*t326*t369*t417 + 0.135*t374*t389*t417 + t574 + t579 + t580 + t581;
  p_output1[21]=0.135*(-1.*t368*t406*t417 - 1.*t411*t448) - 0.049*t453 + t368*t417*t612 + t448*t615;
  p_output1[22]=t372*t417*t612 + t615*t626 - 0.049*(-1.*t372*t411*t417 + t406*t626) + 0.135*(t428 - 1.*t411*t626);
  p_output1[23]=-1.*t373*t612 + t615*t639 - 0.049*(t373*t411 + t406*t639) + 0.135*(t373*t406 - 1.*t411*t639);
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
