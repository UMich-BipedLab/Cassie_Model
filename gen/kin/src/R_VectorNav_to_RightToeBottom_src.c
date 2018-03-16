/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:15:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom_src.h"

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
  double t89;
  double t181;
  double t193;
  double t180;
  double t196;
  double t167;
  double t213;
  double t214;
  double t215;
  double t189;
  double t201;
  double t205;
  double t221;
  double t153;
  double t241;
  double t249;
  double t250;
  double t211;
  double t223;
  double t227;
  double t254;
  double t141;
  double t263;
  double t264;
  double t266;
  double t231;
  double t255;
  double t259;
  double t267;
  double t74;
  double t27;
  double t109;
  double t295;
  double t297;
  double t299;
  double t287;
  double t288;
  double t289;
  double t309;
  double t311;
  double t315;
  double t291;
  double t301;
  double t305;
  double t323;
  double t324;
  double t326;
  double t307;
  double t317;
  double t319;
  double t330;
  double t333;
  double t334;
  double t321;
  double t327;
  double t328;
  double t348;
  double t349;
  double t350;
  double t344;
  double t345;
  double t346;
  double t354;
  double t355;
  double t356;
  double t347;
  double t351;
  double t352;
  double t360;
  double t361;
  double t362;
  double t353;
  double t357;
  double t358;
  double t366;
  double t367;
  double t368;
  double t359;
  double t363;
  double t364;
  double t260;
  double t269;
  double t270;
  double t275;
  double t278;
  double t279;
  double t329;
  double t335;
  double t337;
  double t339;
  double t340;
  double t341;
  double t365;
  double t369;
  double t370;
  double t372;
  double t373;
  double t374;
  t89 = Cos(var1[8]);
  t181 = Cos(var1[10]);
  t193 = Sin(var1[9]);
  t180 = Cos(var1[9]);
  t196 = Sin(var1[10]);
  t167 = Cos(var1[11]);
  t213 = -1.*t89*t181*t193;
  t214 = -1.*t89*t180*t196;
  t215 = t213 + t214;
  t189 = t89*t180*t181;
  t201 = -1.*t89*t193*t196;
  t205 = t189 + t201;
  t221 = Sin(var1[11]);
  t153 = Cos(var1[12]);
  t241 = t167*t215;
  t249 = -1.*t205*t221;
  t250 = t241 + t249;
  t211 = t167*t205;
  t223 = t215*t221;
  t227 = t211 + t223;
  t254 = Sin(var1[12]);
  t141 = Cos(var1[13]);
  t263 = t153*t250;
  t264 = -1.*t227*t254;
  t266 = t263 + t264;
  t231 = t153*t227;
  t255 = t250*t254;
  t259 = t231 + t255;
  t267 = Sin(var1[13]);
  t74 = Cos(var1[7]);
  t27 = Sin(var1[8]);
  t109 = Sin(var1[7]);
  t295 = -1.*t180*t109;
  t297 = -1.*t74*t27*t193;
  t299 = t295 + t297;
  t287 = t74*t180*t27;
  t288 = -1.*t109*t193;
  t289 = t287 + t288;
  t309 = t181*t299;
  t311 = -1.*t289*t196;
  t315 = t309 + t311;
  t291 = t181*t289;
  t301 = t299*t196;
  t305 = t291 + t301;
  t323 = t167*t315;
  t324 = -1.*t305*t221;
  t326 = t323 + t324;
  t307 = t167*t305;
  t317 = t315*t221;
  t319 = t307 + t317;
  t330 = t153*t326;
  t333 = -1.*t319*t254;
  t334 = t330 + t333;
  t321 = t153*t319;
  t327 = t326*t254;
  t328 = t321 + t327;
  t348 = t74*t180;
  t349 = -1.*t109*t27*t193;
  t350 = t348 + t349;
  t344 = t180*t109*t27;
  t345 = t74*t193;
  t346 = t344 + t345;
  t354 = t181*t350;
  t355 = -1.*t346*t196;
  t356 = t354 + t355;
  t347 = t181*t346;
  t351 = t350*t196;
  t352 = t347 + t351;
  t360 = t167*t356;
  t361 = -1.*t352*t221;
  t362 = t360 + t361;
  t353 = t167*t352;
  t357 = t356*t221;
  t358 = t353 + t357;
  t366 = t153*t362;
  t367 = -1.*t358*t254;
  t368 = t366 + t367;
  t359 = t153*t358;
  t363 = t362*t254;
  t364 = t359 + t363;
  t260 = t141*t259;
  t269 = t266*t267;
  t270 = t260 + t269;
  t275 = t141*t266;
  t278 = -1.*t259*t267;
  t279 = t275 + t278;
  t329 = t141*t328;
  t335 = t334*t267;
  t337 = t329 + t335;
  t339 = t141*t334;
  t340 = -1.*t328*t267;
  t341 = t339 + t340;
  t365 = t141*t364;
  t369 = t368*t267;
  t370 = t365 + t369;
  t372 = t141*t368;
  t373 = -1.*t364*t267;
  t374 = t372 + t373;
  p_output1[0]=0. + t27;
  p_output1[1]=0. + t74*t89;
  p_output1[2]=0. + t109*t89;
  p_output1[3]=0. + 0.642788*t270 + 0.766044*t279;
  p_output1[4]=0. - 0.642788*t337 - 0.766044*t341;
  p_output1[5]=0. - 0.642788*t370 - 0.766044*t374;
  p_output1[6]=0. - 0.766044*t270 + 0.642788*t279;
  p_output1[7]=0. + 0.766044*t337 - 0.642788*t341;
  p_output1[8]=0. + 0.766044*t370 - 0.642788*t374;
}



void R_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
