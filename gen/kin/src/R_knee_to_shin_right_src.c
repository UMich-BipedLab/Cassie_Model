/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_right_src.h"

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
  double t3676;
  double t5289;
  double t3473;
  double t3691;
  double t5410;
  double t6134;
  double t5247;
  double t5681;
  double t5717;
  double t3437;
  double t6259;
  double t6291;
  double t6293;
  double t6298;
  double t5825;
  double t6294;
  double t6295;
  double t3153;
  double t6307;
  double t6309;
  double t6312;
  double t6314;
  double t6317;
  double t6325;
  double t6326;
  double t6331;
  double t6333;
  double t6341;
  double t6296;
  double t6334;
  double t6338;
  double t3086;
  double t6342;
  double t6346;
  double t6350;
  double t1630;
  double t6376;
  double t6377;
  double t6379;
  double t6385;
  double t6392;
  double t6394;
  double t6382;
  double t6397;
  double t6400;
  double t6408;
  double t6410;
  double t6412;
  double t6413;
  double t6414;
  double t6415;
  double t6354;
  double t6404;
  double t6416;
  double t6418;
  double t6421;
  double t6422;
  double t6427;
  double t6454;
  double t6457;
  double t6458;
  double t6468;
  double t6471;
  double t6473;
  double t6474;
  double t6475;
  double t6476;
  double t6464;
  double t6478;
  double t6480;
  double t6483;
  double t6485;
  double t6491;
  double t6339;
  double t6351;
  double t6352;
  double t6360;
  double t6361;
  double t6368;
  double t6419;
  double t6428;
  double t6433;
  double t6442;
  double t6444;
  double t6445;
  double t6481;
  double t6492;
  double t6644;
  double t8220;
  double t8296;
  double t8316;
  t3676 = Cos(var1[5]);
  t5289 = Sin(var1[3]);
  t3473 = Cos(var1[3]);
  t3691 = Sin(var1[4]);
  t5410 = Sin(var1[5]);
  t6134 = Sin(var1[13]);
  t5247 = t3473*t3676*t3691;
  t5681 = t5289*t5410;
  t5717 = t5247 + t5681;
  t3437 = Cos(var1[13]);
  t6259 = -1.*t3676*t5289;
  t6291 = t3473*t3691*t5410;
  t6293 = t6259 + t6291;
  t6298 = Cos(var1[15]);
  t5825 = t3437*t5717;
  t6294 = -1.*t6134*t6293;
  t6295 = t5825 + t6294;
  t3153 = Sin(var1[15]);
  t6307 = Cos(var1[14]);
  t6309 = Cos(var1[4]);
  t6312 = t6307*t3473*t6309;
  t6314 = Sin(var1[14]);
  t6317 = t6134*t5717;
  t6325 = t3437*t6293;
  t6326 = t6317 + t6325;
  t6331 = t6314*t6326;
  t6333 = t6312 + t6331;
  t6341 = Cos(var1[16]);
  t6296 = t3153*t6295;
  t6334 = t6298*t6333;
  t6338 = t6296 + t6334;
  t3086 = Sin(var1[16]);
  t6342 = t6298*t6295;
  t6346 = -1.*t3153*t6333;
  t6350 = t6342 + t6346;
  t1630 = Cos(var1[17]);
  t6376 = t3676*t5289*t3691;
  t6377 = -1.*t3473*t5410;
  t6379 = t6376 + t6377;
  t6385 = t3473*t3676;
  t6392 = t5289*t3691*t5410;
  t6394 = t6385 + t6392;
  t6382 = t3437*t6379;
  t6397 = -1.*t6134*t6394;
  t6400 = t6382 + t6397;
  t6408 = t6307*t6309*t5289;
  t6410 = t6134*t6379;
  t6412 = t3437*t6394;
  t6413 = t6410 + t6412;
  t6414 = t6314*t6413;
  t6415 = t6408 + t6414;
  t6354 = Sin(var1[17]);
  t6404 = t3153*t6400;
  t6416 = t6298*t6415;
  t6418 = t6404 + t6416;
  t6421 = t6298*t6400;
  t6422 = -1.*t3153*t6415;
  t6427 = t6421 + t6422;
  t6454 = t3437*t6309*t3676;
  t6457 = -1.*t6309*t6134*t5410;
  t6458 = t6454 + t6457;
  t6468 = -1.*t6307*t3691;
  t6471 = t6309*t3676*t6134;
  t6473 = t3437*t6309*t5410;
  t6474 = t6471 + t6473;
  t6475 = t6314*t6474;
  t6476 = t6468 + t6475;
  t6464 = t3153*t6458;
  t6478 = t6298*t6476;
  t6480 = t6464 + t6478;
  t6483 = t6298*t6458;
  t6485 = -1.*t3153*t6476;
  t6491 = t6483 + t6485;
  t6339 = -1.*t3086*t6338;
  t6351 = t6341*t6350;
  t6352 = t6339 + t6351;
  t6360 = t6341*t6338;
  t6361 = t3086*t6350;
  t6368 = t6360 + t6361;
  t6419 = -1.*t3086*t6418;
  t6428 = t6341*t6427;
  t6433 = t6419 + t6428;
  t6442 = t6341*t6418;
  t6444 = t3086*t6427;
  t6445 = t6442 + t6444;
  t6481 = -1.*t3086*t6480;
  t6492 = t6341*t6491;
  t6644 = t6481 + t6492;
  t8220 = t6341*t6480;
  t8296 = t3086*t6491;
  t8316 = t8220 + t8296;
  p_output1[0]=-1.*t1630*t6352 + t6354*t6368;
  p_output1[1]=-1.*t1630*t6433 + t6354*t6445;
  p_output1[2]=-1.*t1630*t6644 + t6354*t8316;
  p_output1[3]=t6352*t6354 + t1630*t6368;
  p_output1[4]=t6354*t6433 + t1630*t6445;
  p_output1[5]=t6354*t6644 + t1630*t8316;
  p_output1[6]=t3473*t6309*t6314 - 1.*t6307*t6326;
  p_output1[7]=t5289*t6309*t6314 - 1.*t6307*t6413;
  p_output1[8]=-1.*t3691*t6314 - 1.*t6307*t6474;
}



void R_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
