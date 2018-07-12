/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t267;
  double t349;
  double t923;
  double t1194;
  double t1254;
  double t1379;
  double t1504;
  double t1932;
  double t2481;
  double t2611;
  double t2820;
  double t2955;
  double t3052;
  double t3073;
  double t3150;
  double t3384;
  double t3393;
  double t3415;
  double t3797;
  double t3800;
  double t3848;
  double t4241;
  double t5019;
  double t5104;
  double t5262;
  double t5440;
  double t5485;
  double t5695;
  double t5906;
  double t5924;
  double t5942;
  double t5968;
  double t6059;
  double t6080;
  double t6130;
  double t6398;
  double t6564;
  double t6576;
  double t6680;
  double t6723;
  double t6936;
  double t7041;
  double t7069;
  double t7077;
  double t7081;
  double t7114;
  double t7118;
  double t7124;
  double t580;
  double t712;
  double t920;
  double t940;
  double t1046;
  double t1501;
  double t1516;
  double t1549;
  double t2244;
  double t2253;
  double t2301;
  double t2893;
  double t2971;
  double t2981;
  double t3208;
  double t3291;
  double t3318;
  double t4138;
  double t4325;
  double t4858;
  double t7224;
  double t7227;
  double t7228;
  double t7236;
  double t7242;
  double t7245;
  double t5301;
  double t5313;
  double t5363;
  double t5944;
  double t6038;
  double t6052;
  double t7263;
  double t7265;
  double t7267;
  double t7275;
  double t7283;
  double t7285;
  double t6261;
  double t6314;
  double t6315;
  double t7012;
  double t7048;
  double t7063;
  double t7308;
  double t7313;
  double t7317;
  double t7321;
  double t7325;
  double t7330;
  double t7099;
  double t7104;
  double t7111;
  double t7340;
  double t7341;
  double t7348;
  double t7351;
  double t7356;
  double t7368;
  double t7478;
  double t7486;
  double t7489;
  double t7498;
  double t7500;
  double t7503;
  double t7516;
  double t7521;
  double t7523;
  double t7526;
  double t7531;
  double t7533;
  double t7538;
  double t7541;
  double t7545;
  double t7550;
  double t7551;
  double t7557;
  t267 = Sin(var1[0]);
  t349 = Cos(var1[1]);
  t923 = Sin(var1[1]);
  t1194 = Cos(var1[2]);
  t1254 = -1.*t1194;
  t1379 = 1. + t1254;
  t1504 = Sin(var1[2]);
  t1932 = Cos(var1[0]);
  t2481 = Cos(var1[3]);
  t2611 = -1.*t2481;
  t2820 = 1. + t2611;
  t2955 = Sin(var1[3]);
  t3052 = t1194*t267*t923;
  t3073 = t1932*t1504;
  t3150 = t3052 + t3073;
  t3384 = t1932*t1194;
  t3393 = -1.*t267*t923*t1504;
  t3415 = t3384 + t3393;
  t3797 = Cos(var1[4]);
  t3800 = -1.*t3797;
  t3848 = 1. + t3800;
  t4241 = Sin(var1[4]);
  t5019 = -1.*t2955*t3150;
  t5104 = t2481*t3415;
  t5262 = t5019 + t5104;
  t5440 = t2481*t3150;
  t5485 = t2955*t3415;
  t5695 = t5440 + t5485;
  t5906 = Cos(var1[5]);
  t5924 = -1.*t5906;
  t5942 = 1. + t5924;
  t5968 = Sin(var1[5]);
  t6059 = t4241*t5262;
  t6080 = t3797*t5695;
  t6130 = t6059 + t6080;
  t6398 = t3797*t5262;
  t6564 = -1.*t4241*t5695;
  t6576 = t6398 + t6564;
  t6680 = Cos(var1[6]);
  t6723 = -1.*t6680;
  t6936 = 1. + t6723;
  t7041 = Sin(var1[6]);
  t7069 = -1.*t5968*t6130;
  t7077 = t5906*t6576;
  t7081 = t7069 + t7077;
  t7114 = t5906*t6130;
  t7118 = t5968*t6576;
  t7124 = t7114 + t7118;
  t580 = -1.*t349;
  t712 = 1. + t580;
  t920 = 0.135*t712;
  t940 = 0.049*t923;
  t1046 = 0. + t920 + t940;
  t1501 = -0.049*t1379;
  t1516 = -0.09*t1504;
  t1549 = 0. + t1501 + t1516;
  t2244 = -0.09*t1379;
  t2253 = 0.049*t1504;
  t2301 = 0. + t2244 + t2253;
  t2893 = -0.049*t2820;
  t2971 = -0.21*t2955;
  t2981 = 0. + t2893 + t2971;
  t3208 = -0.21*t2820;
  t3291 = 0.049*t2955;
  t3318 = 0. + t3208 + t3291;
  t4138 = -0.2707*t3848;
  t4325 = 0.0016*t4241;
  t4858 = 0. + t4138 + t4325;
  t7224 = t1932*t1194*t923;
  t7227 = -1.*t267*t1504;
  t7228 = t7224 + t7227;
  t7236 = -1.*t1194*t267;
  t7242 = -1.*t1932*t923*t1504;
  t7245 = t7236 + t7242;
  t5301 = -0.0016*t3848;
  t5313 = -0.2707*t4241;
  t5363 = 0. + t5301 + t5313;
  t5944 = 0.0184*t5942;
  t6038 = -0.7055*t5968;
  t6052 = 0. + t5944 + t6038;
  t7263 = -1.*t2955*t7228;
  t7265 = t2481*t7245;
  t7267 = t7263 + t7265;
  t7275 = t2481*t7228;
  t7283 = t2955*t7245;
  t7285 = t7275 + t7283;
  t6261 = -0.7055*t5942;
  t6314 = -0.0184*t5968;
  t6315 = 0. + t6261 + t6314;
  t7012 = -1.1135*t6936;
  t7048 = 0.0216*t7041;
  t7063 = 0. + t7012 + t7048;
  t7308 = t4241*t7267;
  t7313 = t3797*t7285;
  t7317 = t7308 + t7313;
  t7321 = t3797*t7267;
  t7325 = -1.*t4241*t7285;
  t7330 = t7321 + t7325;
  t7099 = -0.0216*t6936;
  t7104 = -1.1135*t7041;
  t7111 = 0. + t7099 + t7104;
  t7340 = -1.*t5968*t7317;
  t7341 = t5906*t7330;
  t7348 = t7340 + t7341;
  t7351 = t5906*t7317;
  t7356 = t5968*t7330;
  t7368 = t7351 + t7356;
  t7478 = -1.*t349*t1194*t2955;
  t7486 = -1.*t2481*t349*t1504;
  t7489 = t7478 + t7486;
  t7498 = t2481*t349*t1194;
  t7500 = -1.*t349*t2955*t1504;
  t7503 = t7498 + t7500;
  t7516 = t4241*t7489;
  t7521 = t3797*t7503;
  t7523 = t7516 + t7521;
  t7526 = t3797*t7489;
  t7531 = -1.*t4241*t7503;
  t7533 = t7526 + t7531;
  t7538 = -1.*t5968*t7523;
  t7541 = t5906*t7533;
  t7545 = t7538 + t7541;
  t7550 = t5906*t7523;
  t7551 = t5968*t7533;
  t7557 = t7550 + t7551;
  p_output1[0]=0.24925 - 1.*t1932*t2301 + 0.135*t267 - 1.*t1046*t267 - 1.*t2981*t3150 - 1.*t3318*t3415 - 0.1305*t267*t349 - 1.*t4858*t5262 - 1.*t5363*t5695 - 1.*t6052*t6130 - 1.*t6315*t6576 - 1.*t7063*t7081 - 1.*t7111*t7124 - 0.0306*(t7041*t7081 + t6680*t7124) + 1.1312*(t6680*t7081 - 1.*t7041*t7124) - 1.*t1549*t267*t923;
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t1932) + t1046*t1932 - 1.*t2301*t267 + 0.1305*t1932*t349 + t2981*t7228 + t3318*t7245 + t4858*t7267 + t5363*t7285 + t6052*t7317 + t6315*t7330 + t7063*t7348 + t7111*t7368 + 0.0306*(t7041*t7348 + t6680*t7368) - 1.1312*(t6680*t7348 - 1.*t7041*t7368) + t1549*t1932*t923;
  p_output1[2]=-0.047 + t1549*t349 + t1194*t2981*t349 - 1.*t1504*t3318*t349 - 0.049*t712 + t4858*t7489 + t5363*t7503 + t6052*t7523 + t6315*t7533 + t7063*t7545 + t7111*t7557 + 0.0306*(t7041*t7545 + t6680*t7557) - 1.1312*(t6680*t7545 - 1.*t7041*t7557) + 0.004500000000000004*t923;
}



void p_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
