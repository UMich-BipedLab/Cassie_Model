/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:33:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_VectorNav_to_LeftToeBottom.h"

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
  double t27;
  double t163;
  double t171;
  double t196;
  double t170;
  double t175;
  double t185;
  double t150;
  double t205;
  double t207;
  double t214;
  double t233;
  double t188;
  double t219;
  double t223;
  double t132;
  double t234;
  double t235;
  double t236;
  double t244;
  double t224;
  double t238;
  double t241;
  double t124;
  double t245;
  double t246;
  double t247;
  double t98;
  double t273;
  double t274;
  double t275;
  double t276;
  double t278;
  double t282;
  double t283;
  double t286;
  double t281;
  double t288;
  double t289;
  double t291;
  double t292;
  double t296;
  double t265;
  double t337;
  double t338;
  double t331;
  double t332;
  double t341;
  double t342;
  double t343;
  double t344;
  double t346;
  double t348;
  double t349;
  double t350;
  double t323;
  double t326;
  double t333;
  double t334;
  double t345;
  double t351;
  double t352;
  double t354;
  double t355;
  double t356;
  double t357;
  double t358;
  double t317;
  double t318;
  double t327;
  double t328;
  double t353;
  double t359;
  double t360;
  double t362;
  double t363;
  double t364;
  double t365;
  double t366;
  double t300;
  double t301;
  double t306;
  double t290;
  double t297;
  double t298;
  double t313;
  double t315;
  double t371;
  double t372;
  double t373;
  double t374;
  double t375;
  double t319;
  double t321;
  double t361;
  double t367;
  double t368;
  double t387;
  double t379;
  double t380;
  double t381;
  double t384;
  double t385;
  double t389;
  double t390;
  double t391;
  double t392;
  double t393;
  double t382;
  double t383;
  double t316;
  double t369;
  double t370;
  double t376;
  double t377;
  double t258;
  double t261;
  double t262;
  double t243;
  double t248;
  double t254;
  double t386;
  double t388;
  double t394;
  double t395;
  double t257;
  double t266;
  double t269;
  double t270;
  double t271;
  double t399;
  double t400;
  double t401;
  double t402;
  double t403;
  double t299;
  double t307;
  double t309;
  double t397;
  double t398;
  double t94;
  double t420;
  double t407;
  double t408;
  double t409;
  double t412;
  double t413;
  double t378;
  double t410;
  t27 = Cos(var1[1]);
  t163 = Cos(var1[6]);
  t171 = Sin(var1[6]);
  t196 = Cos(var1[5]);
  t170 = -0.766044*t163;
  t175 = -0.642788*t171;
  t185 = t170 + t175;
  t150 = Sin(var1[5]);
  t205 = -0.642788*t163;
  t207 = 0.766044*t171;
  t214 = t205 + t207;
  t233 = Cos(var1[4]);
  t188 = -1.*t150*t185;
  t219 = t196*t214;
  t223 = 0. + t188 + t219;
  t132 = Sin(var1[4]);
  t234 = t196*t185;
  t235 = t150*t214;
  t236 = 0. + t234 + t235;
  t244 = Sin(var1[3]);
  t224 = t132*t223;
  t238 = t233*t236;
  t241 = 0. + t224 + t238;
  t124 = Cos(var1[3]);
  t245 = t233*t223;
  t246 = -1.*t132*t236;
  t247 = 0. + t245 + t246;
  t98 = Cos(var1[2]);
  t273 = 0.642788*t163;
  t274 = -0.766044*t171;
  t275 = t273 + t274;
  t276 = -1.*t150*t275;
  t278 = 0. + t276 + t234;
  t282 = t196*t275;
  t283 = t150*t185;
  t286 = 0. + t282 + t283;
  t281 = t132*t278;
  t288 = t233*t286;
  t289 = 0. + t281 + t288;
  t291 = t233*t278;
  t292 = -1.*t132*t286;
  t296 = 0. + t291 + t292;
  t265 = Sin(var1[2]);
  t337 = -1.*t163;
  t338 = 1. + t337;
  t331 = -1.*t196;
  t332 = 1. + t331;
  t341 = 1.0335*t338;
  t342 = 1.0512*t163;
  t343 = -0.052199999999999996*t171;
  t344 = 0. + t341 + t342 + t343;
  t346 = -0.0532*t338;
  t348 = -0.001*t163;
  t349 = 0.017699999999999827*t171;
  t350 = 0. + t346 + t348 + t349;
  t323 = -1.*t233;
  t326 = 1. + t323;
  t333 = -0.0132*t332;
  t334 = -0.6255*t150;
  t345 = t150*t344;
  t351 = t196*t350;
  t352 = 0. + t333 + t334 + t345 + t351;
  t354 = 0.6255*t332;
  t355 = -0.0132*t150;
  t356 = t196*t344;
  t357 = -1.*t150*t350;
  t358 = 0. + t354 + t355 + t356 + t357;
  t317 = -1.*t124;
  t318 = 1. + t317;
  t327 = 0.1907*t326;
  t328 = -0.0332*t132;
  t353 = -1.*t132*t352;
  t359 = t233*t358;
  t360 = 0. + t327 + t328 + t353 + t359;
  t362 = -0.0332*t326;
  t363 = -0.1907*t132;
  t364 = t233*t352;
  t365 = t132*t358;
  t366 = 0. + t362 + t363 + t364 + t365;
  t300 = t124*t289;
  t301 = t244*t296;
  t306 = 0. + t300 + t301;
  t290 = -1.*t244*t289;
  t297 = t124*t296;
  t298 = 0. + t290 + t297;
  t313 = -1.*t98;
  t315 = 1. + t313;
  t371 = -0.0806*t318;
  t372 = -0.13*t244;
  t373 = t244*t360;
  t374 = t124*t366;
  t375 = 0. + t371 + t372 + t373 + t374;
  t319 = 0.13*t318;
  t321 = -0.0806*t244;
  t361 = t124*t360;
  t367 = -1.*t244*t366;
  t368 = 0. + t319 + t321 + t361 + t367;
  t387 = Sin(var1[1]);
  t379 = t98*t306;
  t380 = t298*t265;
  t381 = 0. + t379 + t380;
  t384 = -1.*t27;
  t385 = 1. + t384;
  t389 = -0.0806*t315;
  t390 = t98*t375;
  t391 = -0.01*t265;
  t392 = t368*t265;
  t393 = 0. + t389 + t390 + t391 + t392;
  t382 = t27*t381;
  t383 = 0. + t382;
  t316 = 0.01*t315;
  t369 = t98*t368;
  t370 = -0.0806*t265;
  t376 = -1.*t375*t265;
  t377 = 0. + t316 + t369 + t370 + t376;
  t258 = -1.*t244*t241;
  t261 = t124*t247;
  t262 = 0. + t258 + t261;
  t243 = t124*t241;
  t248 = t244*t247;
  t254 = 0. + t243 + t248;
  t386 = -0.0806*t385;
  t388 = 0.004500000000000004*t387;
  t394 = t27*t393;
  t395 = 0. + t386 + t388 + t394;
  t257 = t98*t254;
  t266 = t262*t265;
  t269 = 0. + t257 + t266;
  t270 = t27*t269;
  t271 = 0. + t270;
  t399 = -0.135*t385;
  t400 = -0.1305*t27;
  t401 = -0.0806*t387;
  t402 = -1.*t387*t393;
  t403 = 0. + t399 + t400 + t401 + t402;
  t299 = t98*t298;
  t307 = -1.*t306*t265;
  t309 = 0. + t299 + t307;
  t397 = -1.*t387*t381;
  t398 = 0. + t397;
  t94 = 0. + t27;
  t420 = 0. + t387;
  t407 = t98*t262;
  t408 = -1.*t254*t265;
  t409 = 0. + t407 + t408;
  t412 = -1.*t387*t269;
  t413 = 0. + t412;
  t378 = -1.*t309*t377;
  t410 = t377*t409;

  p_output1(0)=0. + t271*(t378 - 1.*t383*t395 - 1.*t398*t403) + t383*(t271*t395 + t410 + t403*t413) - 0.08*t94;
  p_output1(1)=0.135*t309 - 0.08*t398 + (-1.*t271*t395 - 1.*t377*t409 - 1.*t403*t413)*t420 + t271*(0. + t395*t420 + t403*t94);
  p_output1(2)=0.135*t409 - 0.08*t413 + (t309*t377 + t383*t395 + t398*t403)*t420 + t383*(0. - 1.*t395*t420 - 1.*t403*t94);
  p_output1(3)=-0.0806 - 1.*(0. + t378 - 1.*t381*t393)*t409 - 1.*t309*(0. + t269*t393 + t410);
  p_output1(4)=0. + 0.135*t381 + 0.1305*t409;
  p_output1(5)=0. + 0.135*t269 - 0.1305*t309;
  p_output1(6)=0.;
  p_output1(7)=0. - 0.0806*t298 - 0.01*t306 - 1.*t262*t368 - 1.*t254*t375;
  p_output1(8)=0. - 0.01*t254 - 0.0806*t262 + t298*t368 + t306*t375;
  p_output1(9)=0.;
  p_output1(10)=0. - 0.13*t289 - 0.0806*t296 - 1.*t247*t360 - 1.*t241*t366;
  p_output1(11)=0. - 0.13*t241 - 0.0806*t247 + t296*t360 + t289*t366;
  p_output1(12)=0.;
  p_output1(13)=0. - 0.0332*t278 - 0.1907*t286 - 1.*t236*t352 - 1.*t223*t358;
  p_output1(14)=0. - 0.0332*t223 - 0.1907*t236 + t286*t352 + t278*t358;
  p_output1(15)=0.;
  p_output1(16)=0. - 0.0132*t185 - 0.6255*t275 - 1.*t214*t344 - 1.*t185*t350;
  p_output1(17)=0. - 0.6255*t185 - 0.0132*t214 + t185*t344 + t275*t350;
  p_output1(18)=0.;
  p_output1(19)=0.05136484439999989;
  p_output1(20)=0.01999455480000023;
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
}


       
void Jv_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
