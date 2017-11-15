/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_flexion_right_src.h"

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
  double t3073;
  double t7190;
  double t7142;
  double t7166;
  double t7191;
  double t1671;
  double t1944;
  double t2168;
  double t2241;
  double t4101;
  double t7172;
  double t7193;
  double t7206;
  double t7216;
  double t7223;
  double t7225;
  double t7233;
  double t474;
  double t7245;
  double t7246;
  double t7247;
  double t7250;
  double t7251;
  double t7253;
  double t7261;
  double t7264;
  double t7265;
  double t7269;
  double t7280;
  double t7282;
  double t7283;
  double t2237;
  double t2612;
  double t2909;
  double t4550;
  double t7118;
  double t7217;
  double t7218;
  double t7219;
  double t7221;
  double t7237;
  double t7239;
  double t7244;
  double t7304;
  double t7305;
  double t7306;
  double t7309;
  double t7310;
  double t7311;
  double t7257;
  double t7262;
  double t7263;
  double t7313;
  double t7314;
  double t7315;
  double t7275;
  double t7276;
  double t7278;
  double t7317;
  double t7318;
  double t7319;
  double t7328;
  double t7330;
  double t7331;
  double t7345;
  double t7346;
  double t7347;
  double t7351;
  double t7352;
  double t7353;
  double t7361;
  double t7362;
  double t7363;
  double t7381;
  double t7382;
  double t7384;
  double t7387;
  double t7388;
  double t7389;
  double t7395;
  double t7396;
  double t7397;
  double t7415;
  double t7416;
  double t7417;
  double t7419;
  double t7422;
  double t7423;
  double t7432;
  double t7433;
  double t7434;
  double t7454;
  double t7455;
  double t7456;
  double t7467;
  double t7468;
  double t7460;
  double t7462;
  double t7463;
  double t7481;
  double t7482;
  double t7484;
  double t7494;
  double t7495;
  double t7496;
  double t7491;
  double t7492;
  double t7516;
  double t7517;
  double t7518;
  double t7512;
  double t7513;
  double t7514;
  double t7535;
  double t7536;
  double t7552;
  double t7553;
  double t7554;
  double t7559;
  double t7560;
  double t7556;
  double t7557;
  double t7515;
  double t7519;
  double t7520;
  double t7521;
  double t7522;
  double t7524;
  double t7526;
  double t7527;
  double t7528;
  double t7529;
  double t7530;
  double t7531;
  double t7323;
  double t7324;
  double t7325;
  double t7577;
  double t7578;
  double t7580;
  double t7583;
  double t7584;
  double t7595;
  double t7596;
  double t7597;
  double t7599;
  double t7600;
  double t7601;
  double t7610;
  double t7611;
  double t7612;
  double t7614;
  double t7615;
  double t7616;
  double t7337;
  double t7338;
  double t7339;
  double t7625;
  double t7626;
  double t7628;
  double t7629;
  double t7630;
  double t7639;
  double t7640;
  double t7641;
  double t7653;
  double t7654;
  double t7655;
  t3073 = Sin(var1[3]);
  t7190 = Cos(var1[3]);
  t7142 = Cos(var1[5]);
  t7166 = Sin(var1[4]);
  t7191 = Sin(var1[5]);
  t1671 = Cos(var1[14]);
  t1944 = -1.*t1671;
  t2168 = 1. + t1944;
  t2241 = Sin(var1[14]);
  t4101 = Sin(var1[13]);
  t7172 = -1.*t7142*t3073*t7166;
  t7193 = t7190*t7191;
  t7206 = t7172 + t7193;
  t7216 = Cos(var1[13]);
  t7223 = -1.*t7190*t7142;
  t7225 = -1.*t3073*t7166*t7191;
  t7233 = t7223 + t7225;
  t474 = Cos(var1[4]);
  t7245 = t4101*t7206;
  t7246 = t7216*t7233;
  t7247 = t7245 + t7246;
  t7250 = Cos(var1[15]);
  t7251 = -1.*t7250;
  t7253 = 1. + t7251;
  t7261 = Sin(var1[15]);
  t7264 = t7216*t7206;
  t7265 = -1.*t4101*t7233;
  t7269 = t7264 + t7265;
  t7280 = -1.*t1671*t474*t3073;
  t7282 = t2241*t7247;
  t7283 = t7280 + t7282;
  t2237 = -0.049*t2168;
  t2612 = -0.135*t2241;
  t2909 = 0. + t2237 + t2612;
  t4550 = 0.135*t4101;
  t7118 = 0. + t4550;
  t7217 = -1.*t7216;
  t7218 = 1. + t7217;
  t7219 = -0.135*t7218;
  t7221 = 0. + t7219;
  t7237 = -0.135*t2168;
  t7239 = 0.049*t2241;
  t7244 = 0. + t7237 + t7239;
  t7304 = t7190*t7142*t7166;
  t7305 = t3073*t7191;
  t7306 = t7304 + t7305;
  t7309 = -1.*t7142*t3073;
  t7310 = t7190*t7166*t7191;
  t7311 = t7309 + t7310;
  t7257 = -0.09*t7253;
  t7262 = 0.049*t7261;
  t7263 = 0. + t7257 + t7262;
  t7313 = t4101*t7306;
  t7314 = t7216*t7311;
  t7315 = t7313 + t7314;
  t7275 = -0.049*t7253;
  t7276 = -0.09*t7261;
  t7278 = 0. + t7275 + t7276;
  t7317 = t7216*t7306;
  t7318 = -1.*t4101*t7311;
  t7319 = t7317 + t7318;
  t7328 = t1671*t7190*t474;
  t7330 = t2241*t7315;
  t7331 = t7328 + t7330;
  t7345 = t7190*t474*t7142*t4101;
  t7346 = t7216*t7190*t474*t7191;
  t7347 = t7345 + t7346;
  t7351 = t7216*t7190*t474*t7142;
  t7352 = -1.*t7190*t474*t4101*t7191;
  t7353 = t7351 + t7352;
  t7361 = -1.*t1671*t7190*t7166;
  t7362 = t2241*t7347;
  t7363 = t7361 + t7362;
  t7381 = t474*t7142*t4101*t3073;
  t7382 = t7216*t474*t3073*t7191;
  t7384 = t7381 + t7382;
  t7387 = t7216*t474*t7142*t3073;
  t7388 = -1.*t474*t4101*t3073*t7191;
  t7389 = t7387 + t7388;
  t7395 = -1.*t1671*t3073*t7166;
  t7396 = t2241*t7384;
  t7397 = t7395 + t7396;
  t7415 = -1.*t7142*t4101*t7166;
  t7416 = -1.*t7216*t7166*t7191;
  t7417 = t7415 + t7416;
  t7419 = -1.*t7216*t7142*t7166;
  t7422 = t4101*t7166*t7191;
  t7423 = t7419 + t7422;
  t7432 = -1.*t1671*t474;
  t7433 = t2241*t7417;
  t7434 = t7432 + t7433;
  t7454 = t7142*t3073;
  t7455 = -1.*t7190*t7166*t7191;
  t7456 = t7454 + t7455;
  t7467 = t4101*t7456;
  t7468 = t7317 + t7467;
  t7460 = -1.*t4101*t7306;
  t7462 = t7216*t7456;
  t7463 = t7460 + t7462;
  t7481 = t7142*t3073*t7166;
  t7482 = -1.*t7190*t7191;
  t7484 = t7481 + t7482;
  t7494 = t7216*t7484;
  t7495 = t4101*t7233;
  t7496 = t7494 + t7495;
  t7491 = -1.*t4101*t7484;
  t7492 = t7491 + t7246;
  t7516 = t7216*t474*t7142;
  t7517 = -1.*t474*t4101*t7191;
  t7518 = t7516 + t7517;
  t7512 = -1.*t474*t7142*t4101;
  t7513 = -1.*t7216*t474*t7191;
  t7514 = t7512 + t7513;
  t7535 = -1.*t7216*t7311;
  t7536 = t7460 + t7535;
  t7552 = t7190*t7142;
  t7553 = t3073*t7166*t7191;
  t7554 = t7552 + t7553;
  t7559 = -1.*t4101*t7554;
  t7560 = t7494 + t7559;
  t7556 = -1.*t7216*t7554;
  t7557 = t7491 + t7556;
  t7515 = t7263*t7514;
  t7519 = -0.135*t1671*t7518;
  t7520 = t7244*t7518;
  t7521 = t2241*t7278*t7518;
  t7522 = t7261*t7514;
  t7524 = t7250*t2241*t7518;
  t7526 = t7522 + t7524;
  t7527 = -0.049*t7526;
  t7528 = t7250*t7514;
  t7529 = -1.*t2241*t7261*t7518;
  t7530 = t7528 + t7529;
  t7531 = -0.09*t7530;
  t7323 = -1.*t7190*t474*t2241;
  t7324 = t1671*t7315;
  t7325 = t7323 + t7324;
  t7577 = -0.135*t1671;
  t7578 = -0.049*t2241;
  t7580 = t7577 + t7578;
  t7583 = 0.049*t1671;
  t7584 = t7583 + t2612;
  t7595 = t4101*t7484;
  t7596 = t7216*t7554;
  t7597 = t7595 + t7596;
  t7599 = -1.*t474*t2241*t3073;
  t7600 = t1671*t7597;
  t7601 = t7599 + t7600;
  t7610 = t474*t7142*t4101;
  t7611 = t7216*t474*t7191;
  t7612 = t7610 + t7611;
  t7614 = t2241*t7166;
  t7615 = t1671*t7612;
  t7616 = t7614 + t7615;
  t7337 = t7250*t7319;
  t7338 = -1.*t7261*t7331;
  t7339 = t7337 + t7338;
  t7625 = 0.049*t7250;
  t7626 = t7625 + t7276;
  t7628 = -0.09*t7250;
  t7629 = -0.049*t7261;
  t7630 = t7628 + t7629;
  t7639 = t1671*t474*t3073;
  t7640 = t2241*t7597;
  t7641 = t7639 + t7640;
  t7653 = -1.*t1671*t7166;
  t7654 = t2241*t7612;
  t7655 = t7653 + t7654;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t2909*t3073*t474 + t7118*t7206 + t7221*t7233 + t7244*t7247 - 0.135*(t2241*t3073*t474 + t1671*t7247) + t7263*t7269 + t7278*t7283 - 0.049*(t7261*t7269 + t7250*t7283) - 0.09*(t7250*t7269 - 1.*t7261*t7283);
  p_output1[10]=t2909*t474*t7190 + t7118*t7306 + t7221*t7311 + t7244*t7315 + t7263*t7319 - 0.135*t7325 + t7278*t7331 - 0.049*(t7261*t7319 + t7250*t7331) - 0.09*t7339;
  p_output1[11]=0;
  p_output1[12]=t474*t7118*t7142*t7190 - 1.*t2909*t7166*t7190 + t474*t7190*t7191*t7221 + t7244*t7347 - 0.135*(t2241*t7166*t7190 + t1671*t7347) + t7263*t7353 + t7278*t7363 - 0.049*(t7261*t7353 + t7250*t7363) - 0.09*(t7250*t7353 - 1.*t7261*t7363);
  p_output1[13]=t3073*t474*t7118*t7142 - 1.*t2909*t3073*t7166 + t3073*t474*t7191*t7221 + t7244*t7384 - 0.135*(t2241*t3073*t7166 + t1671*t7384) + t7263*t7389 + t7278*t7397 - 0.049*(t7261*t7389 + t7250*t7397) - 0.09*(t7250*t7389 - 1.*t7261*t7397);
  p_output1[14]=-1.*t2909*t474 - 1.*t7118*t7142*t7166 - 1.*t7166*t7191*t7221 + t7244*t7417 - 0.135*(t2241*t474 + t1671*t7417) + t7263*t7423 + t7278*t7434 - 0.049*(t7261*t7423 + t7250*t7434) - 0.09*(t7250*t7423 - 1.*t7261*t7434);
  p_output1[15]=t7221*t7306 + t7118*t7456 + t7263*t7463 - 0.135*t1671*t7468 + t7244*t7468 + t2241*t7278*t7468 - 0.049*(t7261*t7463 + t2241*t7250*t7468) - 0.09*(t7250*t7463 - 1.*t2241*t7261*t7468);
  p_output1[16]=t7118*t7233 + t7221*t7484 + t7263*t7492 - 0.135*t1671*t7496 + t7244*t7496 + t2241*t7278*t7496 - 0.049*(t7261*t7492 + t2241*t7250*t7496) - 0.09*(t7250*t7492 - 1.*t2241*t7261*t7496);
  p_output1[17]=-1.*t474*t7118*t7191 + t474*t7142*t7221 + t7515 + t7519 + t7520 + t7521 + t7527 + t7531;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
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
  p_output1[39]=0.135*t7216*t7306 - 0.135*t4101*t7311 - 0.135*t1671*t7319 + t7244*t7319 + t2241*t7278*t7319 + t7263*t7536 - 0.09*(-1.*t2241*t7261*t7319 + t7250*t7536) - 0.049*(t2241*t7250*t7319 + t7261*t7536);
  p_output1[40]=0.135*t7216*t7484 - 0.135*t4101*t7554 + t7263*t7557 - 0.135*t1671*t7560 + t7244*t7560 + t2241*t7278*t7560 - 0.049*(t7261*t7557 + t2241*t7250*t7560) - 0.09*(t7250*t7557 - 1.*t2241*t7261*t7560);
  p_output1[41]=-0.135*t4101*t474*t7191 + 0.135*t474*t7142*t7216 + t7515 + t7519 + t7520 + t7521 + t7527 + t7531;
  p_output1[42]=-0.135*(-1.*t1671*t474*t7190 - 1.*t2241*t7315) - 0.049*t7250*t7325 + 0.09*t7261*t7325 + t7278*t7325 + t474*t7190*t7580 + t7315*t7584;
  p_output1[43]=t3073*t474*t7580 + t7584*t7597 - 0.135*(t7280 - 1.*t2241*t7597) - 0.049*t7250*t7601 + 0.09*t7261*t7601 + t7278*t7601;
  p_output1[44]=-1.*t7166*t7580 + t7584*t7612 - 0.135*(t1671*t7166 - 1.*t2241*t7612) - 0.049*t7250*t7616 + 0.09*t7261*t7616 + t7278*t7616;
  p_output1[45]=-0.09*(-1.*t7261*t7319 - 1.*t7250*t7331) - 0.049*t7339 + t7319*t7626 + t7331*t7630;
  p_output1[46]=t7560*t7626 + t7630*t7641 - 0.09*(-1.*t7261*t7560 - 1.*t7250*t7641) - 0.049*(t7250*t7560 - 1.*t7261*t7641);
  p_output1[47]=t7518*t7626 + t7630*t7655 - 0.09*(-1.*t7261*t7518 - 1.*t7250*t7655) - 0.049*(t7250*t7518 - 1.*t7261*t7655);
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



void J_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
