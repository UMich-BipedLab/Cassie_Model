/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_left_src.h"

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
  double t338;
  double t333;
  double t339;
  double t336;
  double t340;
  double t311;
  double t344;
  double t349;
  double t351;
  double t337;
  double t341;
  double t342;
  double t352;
  double t365;
  double t366;
  double t367;
  double t369;
  double t362;
  double t363;
  double t364;
  double t376;
  double t316;
  double t329;
  double t331;
  double t332;
  double t353;
  double t355;
  double t395;
  double t396;
  double t397;
  double t391;
  double t392;
  double t393;
  double t368;
  double t371;
  double t372;
  double t377;
  double t378;
  double t379;
  double t404;
  double t405;
  double t406;
  double t424;
  double t425;
  double t426;
  t338 = Cos(var1[3]);
  t333 = Cos(var1[5]);
  t339 = Sin(var1[4]);
  t336 = Sin(var1[3]);
  t340 = Sin(var1[5]);
  t311 = Cos(var1[6]);
  t344 = t338*t333*t339;
  t349 = t336*t340;
  t351 = t344 + t349;
  t337 = -1.*t333*t336;
  t341 = t338*t339*t340;
  t342 = t337 + t341;
  t352 = Sin(var1[6]);
  t365 = Cos(var1[7]);
  t366 = -1.*t365;
  t367 = 1. + t366;
  t369 = Sin(var1[7]);
  t362 = t311*t342;
  t363 = t351*t352;
  t364 = t362 + t363;
  t376 = Cos(var1[4]);
  t316 = -1.*t311;
  t329 = 1. + t316;
  t331 = 0.135*t329;
  t332 = 0. + t331;
  t353 = -0.135*t352;
  t355 = 0. + t353;
  t395 = t333*t336*t339;
  t396 = -1.*t338*t340;
  t397 = t395 + t396;
  t391 = t338*t333;
  t392 = t336*t339*t340;
  t393 = t391 + t392;
  t368 = 0.135*t367;
  t371 = 0.049*t369;
  t372 = 0. + t368 + t371;
  t377 = -0.049*t367;
  t378 = 0.135*t369;
  t379 = 0. + t377 + t378;
  t404 = t311*t393;
  t405 = t397*t352;
  t406 = t404 + t405;
  t424 = t376*t311*t340;
  t425 = t376*t333*t352;
  t426 = t424 + t425;
  p_output1[0]=0. + t332*t342 - 0.09*(t311*t351 - 1.*t342*t352) + t351*t355 + t364*t372 - 0.049*(t364*t369 + t338*t365*t376) + 0.135*(t364*t365 - 1.*t338*t369*t376) + t338*t376*t379 + var1[0];
  p_output1[1]=0. + t336*t376*t379 + t332*t393 + t355*t397 - 0.09*(-1.*t352*t393 + t311*t397) + t372*t406 + 0.135*(-1.*t336*t369*t376 + t365*t406) - 0.049*(t336*t365*t376 + t369*t406) + var1[1];
  p_output1[2]=0. + t332*t340*t376 + t333*t355*t376 - 0.09*(t311*t333*t376 - 1.*t340*t352*t376) - 1.*t339*t379 + t372*t426 + 0.135*(t339*t369 + t365*t426) - 0.049*(-1.*t339*t365 + t369*t426) + var1[2];
}



void p_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
