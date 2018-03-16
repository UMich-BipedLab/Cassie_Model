/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t592;
  double t2379;
  double t1873;
  double t1887;
  double t2383;
  double t2750;
  double t2368;
  double t2404;
  double t2511;
  double t1739;
  double t2855;
  double t3023;
  double t3030;
  double t3358;
  double t2530;
  double t3077;
  double t3222;
  double t1246;
  double t3564;
  double t3596;
  double t3787;
  double t6051;
  double t3271;
  double t3953;
  double t6005;
  double t1210;
  double t6146;
  double t6151;
  double t6159;
  double t369;
  double t218;
  double t1115;
  double t6219;
  double t6224;
  double t6232;
  double t6250;
  double t6253;
  double t6261;
  double t6244;
  double t6266;
  double t6269;
  double t6273;
  double t6275;
  double t6279;
  double t6272;
  double t6288;
  double t6295;
  double t6298;
  double t6302;
  double t6308;
  double t6296;
  double t6317;
  double t6332;
  double t6340;
  double t6342;
  double t6346;
  double t6388;
  double t6390;
  double t6393;
  double t6399;
  double t6409;
  double t6410;
  double t6397;
  double t6415;
  double t6421;
  double t6425;
  double t6426;
  double t6429;
  double t6423;
  double t6431;
  double t6434;
  double t6439;
  double t6441;
  double t6445;
  double t6437;
  double t6447;
  double t6451;
  double t6456;
  double t6460;
  double t6461;
  double t6042;
  double t6163;
  double t6170;
  double t6182;
  double t6189;
  double t6208;
  double t6338;
  double t6357;
  double t6359;
  double t6370;
  double t6375;
  double t6383;
  double t6453;
  double t6463;
  double t6464;
  double t6468;
  double t6469;
  double t6471;
  t592 = Cos(var1[1]);
  t2379 = Cos(var1[3]);
  t1873 = Cos(var1[2]);
  t1887 = Sin(var1[3]);
  t2383 = Sin(var1[2]);
  t2750 = Cos(var1[4]);
  t2368 = -1.*t592*t1873*t1887;
  t2404 = -1.*t2379*t592*t2383;
  t2511 = t2368 + t2404;
  t1739 = Sin(var1[4]);
  t2855 = t2379*t592*t1873;
  t3023 = -1.*t592*t1887*t2383;
  t3030 = t2855 + t3023;
  t3358 = Cos(var1[5]);
  t2530 = t1739*t2511;
  t3077 = t2750*t3030;
  t3222 = t2530 + t3077;
  t1246 = Sin(var1[5]);
  t3564 = t2750*t2511;
  t3596 = -1.*t1739*t3030;
  t3787 = t3564 + t3596;
  t6051 = Cos(var1[6]);
  t3271 = -1.*t1246*t3222;
  t3953 = t3358*t3787;
  t6005 = t3271 + t3953;
  t1210 = Sin(var1[6]);
  t6146 = t3358*t3222;
  t6151 = t1246*t3787;
  t6159 = t6146 + t6151;
  t369 = Cos(var1[0]);
  t218 = Sin(var1[1]);
  t1115 = Sin(var1[0]);
  t6219 = t369*t1873*t218;
  t6224 = -1.*t1115*t2383;
  t6232 = t6219 + t6224;
  t6250 = -1.*t1873*t1115;
  t6253 = -1.*t369*t218*t2383;
  t6261 = t6250 + t6253;
  t6244 = -1.*t1887*t6232;
  t6266 = t2379*t6261;
  t6269 = t6244 + t6266;
  t6273 = t2379*t6232;
  t6275 = t1887*t6261;
  t6279 = t6273 + t6275;
  t6272 = t1739*t6269;
  t6288 = t2750*t6279;
  t6295 = t6272 + t6288;
  t6298 = t2750*t6269;
  t6302 = -1.*t1739*t6279;
  t6308 = t6298 + t6302;
  t6296 = -1.*t1246*t6295;
  t6317 = t3358*t6308;
  t6332 = t6296 + t6317;
  t6340 = t3358*t6295;
  t6342 = t1246*t6308;
  t6346 = t6340 + t6342;
  t6388 = t1873*t1115*t218;
  t6390 = t369*t2383;
  t6393 = t6388 + t6390;
  t6399 = t369*t1873;
  t6409 = -1.*t1115*t218*t2383;
  t6410 = t6399 + t6409;
  t6397 = -1.*t1887*t6393;
  t6415 = t2379*t6410;
  t6421 = t6397 + t6415;
  t6425 = t2379*t6393;
  t6426 = t1887*t6410;
  t6429 = t6425 + t6426;
  t6423 = t1739*t6421;
  t6431 = t2750*t6429;
  t6434 = t6423 + t6431;
  t6439 = t2750*t6421;
  t6441 = -1.*t1739*t6429;
  t6445 = t6439 + t6441;
  t6437 = -1.*t1246*t6434;
  t6447 = t3358*t6445;
  t6451 = t6437 + t6447;
  t6456 = t3358*t6434;
  t6460 = t1246*t6445;
  t6461 = t6456 + t6460;
  t6042 = t1210*t6005;
  t6163 = t6051*t6159;
  t6170 = t6042 + t6163;
  t6182 = t6051*t6005;
  t6189 = -1.*t1210*t6159;
  t6208 = t6182 + t6189;
  t6338 = t1210*t6332;
  t6357 = t6051*t6346;
  t6359 = t6338 + t6357;
  t6370 = t6051*t6332;
  t6375 = -1.*t1210*t6346;
  t6383 = t6370 + t6375;
  t6453 = t1210*t6451;
  t6463 = t6051*t6461;
  t6464 = t6453 + t6463;
  t6468 = t6051*t6451;
  t6469 = -1.*t1210*t6461;
  t6471 = t6468 + t6469;

  p_output1(0)=0. + t218;
  p_output1(1)=0. + t369*t592;
  p_output1(2)=0. + t1115*t592;
  p_output1(3)=0. + 0.642788*t6170 + 0.766044*t6208;
  p_output1(4)=0. - 0.642788*t6359 - 0.766044*t6383;
  p_output1(5)=0. - 0.642788*t6464 - 0.766044*t6471;
  p_output1(6)=0. - 0.766044*t6170 + 0.642788*t6208;
  p_output1(7)=0. + 0.766044*t6359 - 0.642788*t6383;
  p_output1(8)=0. + 0.766044*t6464 - 0.642788*t6471;
}


       
void R_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
