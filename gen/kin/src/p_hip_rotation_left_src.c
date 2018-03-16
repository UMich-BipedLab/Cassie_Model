/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:51 GMT-04:00
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
  double t302;
  double t297;
  double t303;
  double t300;
  double t304;
  double t275;
  double t308;
  double t313;
  double t315;
  double t301;
  double t305;
  double t306;
  double t316;
  double t329;
  double t330;
  double t331;
  double t333;
  double t326;
  double t327;
  double t328;
  double t340;
  double t280;
  double t293;
  double t295;
  double t296;
  double t317;
  double t319;
  double t359;
  double t360;
  double t361;
  double t355;
  double t356;
  double t357;
  double t332;
  double t335;
  double t336;
  double t341;
  double t342;
  double t343;
  double t368;
  double t369;
  double t370;
  double t388;
  double t389;
  double t390;
  t302 = Cos(var1[3]);
  t297 = Cos(var1[5]);
  t303 = Sin(var1[4]);
  t300 = Sin(var1[3]);
  t304 = Sin(var1[5]);
  t275 = Cos(var1[6]);
  t308 = t302*t297*t303;
  t313 = t300*t304;
  t315 = t308 + t313;
  t301 = -1.*t297*t300;
  t305 = t302*t303*t304;
  t306 = t301 + t305;
  t316 = Sin(var1[6]);
  t329 = Cos(var1[7]);
  t330 = -1.*t329;
  t331 = 1. + t330;
  t333 = Sin(var1[7]);
  t326 = t275*t306;
  t327 = t315*t316;
  t328 = t326 + t327;
  t340 = Cos(var1[4]);
  t280 = -1.*t275;
  t293 = 1. + t280;
  t295 = 0.135*t293;
  t296 = 0. + t295;
  t317 = -0.135*t316;
  t319 = 0. + t317;
  t359 = t297*t300*t303;
  t360 = -1.*t302*t304;
  t361 = t359 + t360;
  t355 = t302*t297;
  t356 = t300*t303*t304;
  t357 = t355 + t356;
  t332 = 0.135*t331;
  t335 = 0.049*t333;
  t336 = 0. + t332 + t335;
  t341 = -0.049*t331;
  t342 = 0.135*t333;
  t343 = 0. + t341 + t342;
  t368 = t275*t357;
  t369 = t361*t316;
  t370 = t368 + t369;
  t388 = t340*t275*t304;
  t389 = t340*t297*t316;
  t390 = t388 + t389;
  p_output1[0]=0. + t296*t306 - 0.09*(t275*t315 - 1.*t306*t316) + t315*t319 + t328*t336 - 0.049*(t328*t333 + t302*t329*t340) + 0.135*(t328*t329 - 1.*t302*t333*t340) + t302*t340*t343 + var1[0];
  p_output1[1]=0. + t300*t340*t343 + t296*t357 + t319*t361 - 0.09*(-1.*t316*t357 + t275*t361) + t336*t370 + 0.135*(-1.*t300*t333*t340 + t329*t370) - 0.049*(t300*t329*t340 + t333*t370) + var1[1];
  p_output1[2]=0. + t296*t304*t340 + t297*t319*t340 - 0.09*(t275*t297*t340 - 1.*t304*t316*t340) - 1.*t303*t343 + t336*t390 + 0.135*(t303*t333 + t329*t390) - 0.049*(-1.*t303*t329 + t333*t390) + var1[2];
}



void p_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
