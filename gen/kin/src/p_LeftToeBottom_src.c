/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_src.h"

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
  double t606;
  double t270;
  double t609;
  double t276;
  double t961;
  double t32;
  double t424;
  double t974;
  double t1520;
  double t1992;
  double t1998;
  double t2270;
  double t2361;
  double t2625;
  double t2756;
  double t2963;
  double t3235;
  double t2509;
  double t2515;
  double t2525;
  double t3348;
  double t4063;
  double t4108;
  double t4176;
  double t4377;
  double t3844;
  double t3867;
  double t3878;
  double t4808;
  double t4950;
  double t4955;
  double t4991;
  double t4994;
  double t5007;
  double t5013;
  double t5081;
  double t5084;
  double t5086;
  double t5111;
  double t5121;
  double t5177;
  double t5207;
  double t5215;
  double t5225;
  double t5270;
  double t5283;
  double t5299;
  double t5306;
  double t5354;
  double t5364;
  double t5370;
  double t5379;
  double t5398;
  double t5414;
  double t5417;
  double t5480;
  double t5484;
  double t5510;
  double t5592;
  double t5647;
  double t5654;
  double t5676;
  double t5715;
  double t5734;
  double t5749;
  double t5780;
  double t5782;
  double t5789;
  double t5873;
  double t5885;
  double t5893;
  double t59;
  double t64;
  double t127;
  double t227;
  double t2374;
  double t2377;
  double t6004;
  double t6005;
  double t6006;
  double t6017;
  double t6018;
  double t6023;
  double t3191;
  double t3244;
  double t3317;
  double t3359;
  double t3380;
  double t3432;
  double t6040;
  double t6042;
  double t6043;
  double t4179;
  double t4426;
  double t4427;
  double t4959;
  double t4970;
  double t4977;
  double t5012;
  double t5019;
  double t5067;
  double t6132;
  double t6157;
  double t6160;
  double t6177;
  double t6195;
  double t6196;
  double t5100;
  double t5107;
  double t5108;
  double t5269;
  double t5271;
  double t5275;
  double t6232;
  double t6242;
  double t6256;
  double t6270;
  double t6273;
  double t6277;
  double t5318;
  double t5347;
  double t5353;
  double t5415;
  double t5440;
  double t5462;
  double t6283;
  double t6287;
  double t6291;
  double t6301;
  double t6302;
  double t6304;
  double t5521;
  double t5582;
  double t5589;
  double t5743;
  double t5765;
  double t5777;
  double t6307;
  double t6308;
  double t6310;
  double t6313;
  double t6314;
  double t6315;
  double t5847;
  double t5854;
  double t5865;
  double t6318;
  double t6322;
  double t6323;
  double t6327;
  double t6329;
  double t6334;
  double t6373;
  double t6377;
  double t6379;
  double t6392;
  double t6395;
  double t6399;
  double t6404;
  double t6405;
  double t6411;
  double t6417;
  double t6422;
  double t6429;
  double t6431;
  double t6433;
  double t6434;
  double t6436;
  double t6437;
  double t6439;
  double t6447;
  double t6449;
  double t6450;
  double t6455;
  double t6457;
  double t6458;
  double t6461;
  double t6463;
  double t6467;
  double t6474;
  double t6475;
  double t6480;
  double t6484;
  double t6499;
  double t6519;
  t606 = Cos(var1[3]);
  t270 = Cos(var1[5]);
  t609 = Sin(var1[4]);
  t276 = Sin(var1[3]);
  t961 = Sin(var1[5]);
  t32 = Cos(var1[6]);
  t424 = -1.*t270*t276;
  t974 = t606*t609*t961;
  t1520 = t424 + t974;
  t1992 = t606*t270*t609;
  t1998 = t276*t961;
  t2270 = t1992 + t1998;
  t2361 = Sin(var1[6]);
  t2625 = Cos(var1[7]);
  t2756 = -1.*t2625;
  t2963 = 1. + t2756;
  t3235 = Sin(var1[7]);
  t2509 = t32*t1520;
  t2515 = t2270*t2361;
  t2525 = t2509 + t2515;
  t3348 = Cos(var1[4]);
  t4063 = Cos(var1[8]);
  t4108 = -1.*t4063;
  t4176 = 1. + t4108;
  t4377 = Sin(var1[8]);
  t3844 = t606*t3348*t2625;
  t3867 = t2525*t3235;
  t3878 = t3844 + t3867;
  t4808 = t32*t2270;
  t4950 = -1.*t1520*t2361;
  t4955 = t4808 + t4950;
  t4991 = Cos(var1[9]);
  t4994 = -1.*t4991;
  t5007 = 1. + t4994;
  t5013 = Sin(var1[9]);
  t5081 = t4063*t3878;
  t5084 = t4955*t4377;
  t5086 = t5081 + t5084;
  t5111 = t4063*t4955;
  t5121 = -1.*t3878*t4377;
  t5177 = t5111 + t5121;
  t5207 = Cos(var1[10]);
  t5215 = -1.*t5207;
  t5225 = 1. + t5215;
  t5270 = Sin(var1[10]);
  t5283 = -1.*t5013*t5086;
  t5299 = t4991*t5177;
  t5306 = t5283 + t5299;
  t5354 = t4991*t5086;
  t5364 = t5013*t5177;
  t5370 = t5354 + t5364;
  t5379 = Cos(var1[11]);
  t5398 = -1.*t5379;
  t5414 = 1. + t5398;
  t5417 = Sin(var1[11]);
  t5480 = t5270*t5306;
  t5484 = t5207*t5370;
  t5510 = t5480 + t5484;
  t5592 = t5207*t5306;
  t5647 = -1.*t5270*t5370;
  t5654 = t5592 + t5647;
  t5676 = Cos(var1[12]);
  t5715 = -1.*t5676;
  t5734 = 1. + t5715;
  t5749 = Sin(var1[12]);
  t5780 = -1.*t5417*t5510;
  t5782 = t5379*t5654;
  t5789 = t5780 + t5782;
  t5873 = t5379*t5510;
  t5885 = t5417*t5654;
  t5893 = t5873 + t5885;
  t59 = -1.*t32;
  t64 = 1. + t59;
  t127 = 0.135*t64;
  t227 = 0. + t127;
  t2374 = -0.135*t2361;
  t2377 = 0. + t2374;
  t6004 = t606*t270;
  t6005 = t276*t609*t961;
  t6006 = t6004 + t6005;
  t6017 = t270*t276*t609;
  t6018 = -1.*t606*t961;
  t6023 = t6017 + t6018;
  t3191 = 0.135*t2963;
  t3244 = 0.049*t3235;
  t3317 = 0. + t3191 + t3244;
  t3359 = -0.049*t2963;
  t3380 = 0.135*t3235;
  t3432 = 0. + t3359 + t3380;
  t6040 = t32*t6006;
  t6042 = t6023*t2361;
  t6043 = t6040 + t6042;
  t4179 = -0.049*t4176;
  t4426 = -0.09*t4377;
  t4427 = 0. + t4179 + t4426;
  t4959 = -0.09*t4176;
  t4970 = 0.049*t4377;
  t4977 = 0. + t4959 + t4970;
  t5012 = -0.049*t5007;
  t5019 = -0.21*t5013;
  t5067 = 0. + t5012 + t5019;
  t6132 = t3348*t2625*t276;
  t6157 = t6043*t3235;
  t6160 = t6132 + t6157;
  t6177 = t32*t6023;
  t6195 = -1.*t6006*t2361;
  t6196 = t6177 + t6195;
  t5100 = -0.21*t5007;
  t5107 = 0.049*t5013;
  t5108 = 0. + t5100 + t5107;
  t5269 = -0.2707*t5225;
  t5271 = 0.0016*t5270;
  t5275 = 0. + t5269 + t5271;
  t6232 = t4063*t6160;
  t6242 = t6196*t4377;
  t6256 = t6232 + t6242;
  t6270 = t4063*t6196;
  t6273 = -1.*t6160*t4377;
  t6277 = t6270 + t6273;
  t5318 = -0.0016*t5225;
  t5347 = -0.2707*t5270;
  t5353 = 0. + t5318 + t5347;
  t5415 = 0.0184*t5414;
  t5440 = -0.7055*t5417;
  t5462 = 0. + t5415 + t5440;
  t6283 = -1.*t5013*t6256;
  t6287 = t4991*t6277;
  t6291 = t6283 + t6287;
  t6301 = t4991*t6256;
  t6302 = t5013*t6277;
  t6304 = t6301 + t6302;
  t5521 = -0.7055*t5414;
  t5582 = -0.0184*t5417;
  t5589 = 0. + t5521 + t5582;
  t5743 = -1.1135*t5734;
  t5765 = 0.0216*t5749;
  t5777 = 0. + t5743 + t5765;
  t6307 = t5270*t6291;
  t6308 = t5207*t6304;
  t6310 = t6307 + t6308;
  t6313 = t5207*t6291;
  t6314 = -1.*t5270*t6304;
  t6315 = t6313 + t6314;
  t5847 = -0.0216*t5734;
  t5854 = -1.1135*t5749;
  t5865 = 0. + t5847 + t5854;
  t6318 = -1.*t5417*t6310;
  t6322 = t5379*t6315;
  t6323 = t6318 + t6322;
  t6327 = t5379*t6310;
  t6329 = t5417*t6315;
  t6334 = t6327 + t6329;
  t6373 = t3348*t32*t961;
  t6377 = t3348*t270*t2361;
  t6379 = t6373 + t6377;
  t6392 = -1.*t2625*t609;
  t6395 = t6379*t3235;
  t6399 = t6392 + t6395;
  t6404 = t3348*t270*t32;
  t6405 = -1.*t3348*t961*t2361;
  t6411 = t6404 + t6405;
  t6417 = t4063*t6399;
  t6422 = t6411*t4377;
  t6429 = t6417 + t6422;
  t6431 = t4063*t6411;
  t6433 = -1.*t6399*t4377;
  t6434 = t6431 + t6433;
  t6436 = -1.*t5013*t6429;
  t6437 = t4991*t6434;
  t6439 = t6436 + t6437;
  t6447 = t4991*t6429;
  t6449 = t5013*t6434;
  t6450 = t6447 + t6449;
  t6455 = t5270*t6439;
  t6457 = t5207*t6450;
  t6458 = t6455 + t6457;
  t6461 = t5207*t6439;
  t6463 = -1.*t5270*t6450;
  t6467 = t6461 + t6463;
  t6474 = -1.*t5417*t6458;
  t6475 = t5379*t6467;
  t6480 = t6474 + t6475;
  t6484 = t5379*t6458;
  t6499 = t5417*t6467;
  t6519 = t6484 + t6499;
  p_output1[0]=0. + t1520*t227 + t2270*t2377 + t2525*t3317 + t3878*t4427 + t4955*t4977 + t5067*t5086 + t5108*t5177 + t5275*t5306 + t5353*t5370 + t5462*t5510 + t5589*t5654 + t5777*t5789 + t5865*t5893 + 0.0306*(t5749*t5789 + t5676*t5893) - 1.1312*(t5676*t5789 - 1.*t5749*t5893) + t3348*t3432*t606 + 0.1305*(t2525*t2625 - 1.*t3235*t3348*t606) + var1[0];
  p_output1[1]=0. + t276*t3348*t3432 + t227*t6006 + t2377*t6023 + t3317*t6043 + 0.1305*(-1.*t276*t3235*t3348 + t2625*t6043) + t4427*t6160 + t4977*t6196 + t5067*t6256 + t5108*t6277 + t5275*t6291 + t5353*t6304 + t5462*t6310 + t5589*t6315 + t5777*t6323 + t5865*t6334 + 0.0306*(t5749*t6323 + t5676*t6334) - 1.1312*(t5676*t6323 - 1.*t5749*t6334) + var1[1];
  p_output1[2]=0. + t2377*t270*t3348 - 1.*t3432*t609 + t3317*t6379 + 0.1305*(t3235*t609 + t2625*t6379) + t4427*t6399 + t4977*t6411 + t5067*t6429 + t5108*t6434 + t5275*t6439 + t5353*t6450 + t5462*t6458 + t5589*t6467 + t5777*t6480 + t5865*t6519 + 0.0306*(t5749*t6480 + t5676*t6519) - 1.1312*(t5676*t6480 - 1.*t5749*t6519) + t227*t3348*t961 + var1[2];
}



void p_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
