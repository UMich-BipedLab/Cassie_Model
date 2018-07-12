/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_right_src.h"

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
  double t1080;
  double t2390;
  double t1052;
  double t1470;
  double t2394;
  double t2496;
  double t1676;
  double t2418;
  double t2432;
  double t992;
  double t2506;
  double t2715;
  double t3032;
  double t3414;
  double t2439;
  double t3253;
  double t3373;
  double t721;
  double t3561;
  double t3574;
  double t4251;
  double t4294;
  double t4330;
  double t4366;
  double t4369;
  double t4450;
  double t4476;
  double t4525;
  double t3394;
  double t4489;
  double t4505;
  double t688;
  double t4538;
  double t4596;
  double t4600;
  double t4634;
  double t4515;
  double t4613;
  double t4626;
  double t192;
  double t4651;
  double t4658;
  double t4669;
  double t174;
  double t4789;
  double t4827;
  double t4828;
  double t4869;
  double t4899;
  double t4977;
  double t4861;
  double t4990;
  double t5014;
  double t5056;
  double t5081;
  double t5098;
  double t5112;
  double t5113;
  double t5123;
  double t5031;
  double t5137;
  double t5175;
  double t5193;
  double t5212;
  double t5224;
  double t4703;
  double t5189;
  double t5231;
  double t5233;
  double t5239;
  double t5241;
  double t5248;
  double t5350;
  double t5361;
  double t5367;
  double t5378;
  double t5380;
  double t5383;
  double t5386;
  double t5425;
  double t5461;
  double t5375;
  double t5464;
  double t5470;
  double t5479;
  double t5490;
  double t5499;
  double t5475;
  double t5507;
  double t5519;
  double t5561;
  double t5570;
  double t5579;
  double t4628;
  double t4692;
  double t4698;
  double t4714;
  double t4716;
  double t4725;
  double t5235;
  double t5250;
  double t5258;
  double t5303;
  double t5315;
  double t5317;
  double t5539;
  double t5592;
  double t5596;
  double t5605;
  double t5633;
  double t5640;
  t1080 = Cos(var1[5]);
  t2390 = Sin(var1[3]);
  t1052 = Cos(var1[3]);
  t1470 = Sin(var1[4]);
  t2394 = Sin(var1[5]);
  t2496 = Sin(var1[13]);
  t1676 = t1052*t1080*t1470;
  t2418 = t2390*t2394;
  t2432 = t1676 + t2418;
  t992 = Cos(var1[13]);
  t2506 = -1.*t1080*t2390;
  t2715 = t1052*t1470*t2394;
  t3032 = t2506 + t2715;
  t3414 = Cos(var1[15]);
  t2439 = t992*t2432;
  t3253 = -1.*t2496*t3032;
  t3373 = t2439 + t3253;
  t721 = Sin(var1[15]);
  t3561 = Cos(var1[14]);
  t3574 = Cos(var1[4]);
  t4251 = t3561*t1052*t3574;
  t4294 = Sin(var1[14]);
  t4330 = t2496*t2432;
  t4366 = t992*t3032;
  t4369 = t4330 + t4366;
  t4450 = t4294*t4369;
  t4476 = t4251 + t4450;
  t4525 = Cos(var1[16]);
  t3394 = t721*t3373;
  t4489 = t3414*t4476;
  t4505 = t3394 + t4489;
  t688 = Sin(var1[16]);
  t4538 = t3414*t3373;
  t4596 = -1.*t721*t4476;
  t4600 = t4538 + t4596;
  t4634 = Cos(var1[17]);
  t4515 = -1.*t688*t4505;
  t4613 = t4525*t4600;
  t4626 = t4515 + t4613;
  t192 = Sin(var1[17]);
  t4651 = t4525*t4505;
  t4658 = t688*t4600;
  t4669 = t4651 + t4658;
  t174 = Sin(var1[18]);
  t4789 = t1080*t2390*t1470;
  t4827 = -1.*t1052*t2394;
  t4828 = t4789 + t4827;
  t4869 = t1052*t1080;
  t4899 = t2390*t1470*t2394;
  t4977 = t4869 + t4899;
  t4861 = t992*t4828;
  t4990 = -1.*t2496*t4977;
  t5014 = t4861 + t4990;
  t5056 = t3561*t3574*t2390;
  t5081 = t2496*t4828;
  t5098 = t992*t4977;
  t5112 = t5081 + t5098;
  t5113 = t4294*t5112;
  t5123 = t5056 + t5113;
  t5031 = t721*t5014;
  t5137 = t3414*t5123;
  t5175 = t5031 + t5137;
  t5193 = t3414*t5014;
  t5212 = -1.*t721*t5123;
  t5224 = t5193 + t5212;
  t4703 = Cos(var1[18]);
  t5189 = -1.*t688*t5175;
  t5231 = t4525*t5224;
  t5233 = t5189 + t5231;
  t5239 = t4525*t5175;
  t5241 = t688*t5224;
  t5248 = t5239 + t5241;
  t5350 = t992*t3574*t1080;
  t5361 = -1.*t3574*t2496*t2394;
  t5367 = t5350 + t5361;
  t5378 = -1.*t3561*t1470;
  t5380 = t3574*t1080*t2496;
  t5383 = t992*t3574*t2394;
  t5386 = t5380 + t5383;
  t5425 = t4294*t5386;
  t5461 = t5378 + t5425;
  t5375 = t721*t5367;
  t5464 = t3414*t5461;
  t5470 = t5375 + t5464;
  t5479 = t3414*t5367;
  t5490 = -1.*t721*t5461;
  t5499 = t5479 + t5490;
  t5475 = -1.*t688*t5470;
  t5507 = t4525*t5499;
  t5519 = t5475 + t5507;
  t5561 = t4525*t5470;
  t5570 = t688*t5499;
  t5579 = t5561 + t5570;
  t4628 = t192*t4626;
  t4692 = t4634*t4669;
  t4698 = t4628 + t4692;
  t4714 = t4634*t4626;
  t4716 = -1.*t192*t4669;
  t4725 = t4714 + t4716;
  t5235 = t192*t5233;
  t5250 = t4634*t5248;
  t5258 = t5235 + t5250;
  t5303 = t4634*t5233;
  t5315 = -1.*t192*t5248;
  t5317 = t5303 + t5315;
  t5539 = t192*t5519;
  t5592 = t4634*t5579;
  t5596 = t5539 + t5592;
  t5605 = t4634*t5519;
  t5633 = -1.*t192*t5579;
  t5640 = t5605 + t5633;
  p_output1[0]=t174*t4698 - 1.*t4703*t4725;
  p_output1[1]=t174*t5258 - 1.*t4703*t5317;
  p_output1[2]=t174*t5596 - 1.*t4703*t5640;
  p_output1[3]=t4698*t4703 + t174*t4725;
  p_output1[4]=t4703*t5258 + t174*t5317;
  p_output1[5]=t4703*t5596 + t174*t5640;
  p_output1[6]=t1052*t3574*t4294 - 1.*t3561*t4369;
  p_output1[7]=t2390*t3574*t4294 - 1.*t3561*t5112;
  p_output1[8]=-1.*t1470*t4294 - 1.*t3561*t5386;
}



void R_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
