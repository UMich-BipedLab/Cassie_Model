/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_left_src.h"

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
  double t2908;
  double t1634;
  double t3140;
  double t2171;
  double t3423;
  double t146;
  double t2656;
  double t3867;
  double t3876;
  double t4090;
  double t4119;
  double t4154;
  double t4197;
  double t4673;
  double t4786;
  double t4806;
  double t5243;
  double t4570;
  double t4607;
  double t4617;
  double t5403;
  double t5522;
  double t5548;
  double t5557;
  double t5576;
  double t5475;
  double t5481;
  double t5511;
  double t5590;
  double t5593;
  double t5621;
  double t5693;
  double t5696;
  double t5714;
  double t5740;
  double t5758;
  double t5763;
  double t5766;
  double t5800;
  double t5813;
  double t5834;
  double t593;
  double t887;
  double t1099;
  double t1159;
  double t4200;
  double t4234;
  double t5924;
  double t5929;
  double t5931;
  double t5944;
  double t5956;
  double t5965;
  double t5224;
  double t5321;
  double t5337;
  double t5408;
  double t5419;
  double t5420;
  double t6003;
  double t6010;
  double t6017;
  double t5572;
  double t5581;
  double t5584;
  double t5643;
  double t5666;
  double t5670;
  double t5737;
  double t5748;
  double t5753;
  double t6152;
  double t6166;
  double t6168;
  double t6189;
  double t6196;
  double t6200;
  double t5769;
  double t5773;
  double t5790;
  double t6209;
  double t6210;
  double t6217;
  double t6247;
  double t6248;
  double t6252;
  double t6301;
  double t6320;
  double t6321;
  double t6408;
  double t6418;
  double t6420;
  double t6427;
  double t6430;
  double t6438;
  double t6444;
  double t6445;
  double t6446;
  double t6457;
  double t6463;
  double t6466;
  t2908 = Cos(var1[3]);
  t1634 = Cos(var1[5]);
  t3140 = Sin(var1[4]);
  t2171 = Sin(var1[3]);
  t3423 = Sin(var1[5]);
  t146 = Cos(var1[6]);
  t2656 = -1.*t1634*t2171;
  t3867 = t2908*t3140*t3423;
  t3876 = t2656 + t3867;
  t4090 = t2908*t1634*t3140;
  t4119 = t2171*t3423;
  t4154 = t4090 + t4119;
  t4197 = Sin(var1[6]);
  t4673 = Cos(var1[7]);
  t4786 = -1.*t4673;
  t4806 = 1. + t4786;
  t5243 = Sin(var1[7]);
  t4570 = t146*t3876;
  t4607 = t4154*t4197;
  t4617 = t4570 + t4607;
  t5403 = Cos(var1[4]);
  t5522 = Cos(var1[8]);
  t5548 = -1.*t5522;
  t5557 = 1. + t5548;
  t5576 = Sin(var1[8]);
  t5475 = t2908*t5403*t4673;
  t5481 = t4617*t5243;
  t5511 = t5475 + t5481;
  t5590 = t146*t4154;
  t5593 = -1.*t3876*t4197;
  t5621 = t5590 + t5593;
  t5693 = Cos(var1[9]);
  t5696 = -1.*t5693;
  t5714 = 1. + t5696;
  t5740 = Sin(var1[9]);
  t5758 = t5522*t5511;
  t5763 = t5621*t5576;
  t5766 = t5758 + t5763;
  t5800 = t5522*t5621;
  t5813 = -1.*t5511*t5576;
  t5834 = t5800 + t5813;
  t593 = -1.*t146;
  t887 = 1. + t593;
  t1099 = 0.135*t887;
  t1159 = 0. + t1099;
  t4200 = -0.135*t4197;
  t4234 = 0. + t4200;
  t5924 = t2908*t1634;
  t5929 = t2171*t3140*t3423;
  t5931 = t5924 + t5929;
  t5944 = t1634*t2171*t3140;
  t5956 = -1.*t2908*t3423;
  t5965 = t5944 + t5956;
  t5224 = 0.135*t4806;
  t5321 = 0.049*t5243;
  t5337 = 0. + t5224 + t5321;
  t5408 = -0.049*t4806;
  t5419 = 0.135*t5243;
  t5420 = 0. + t5408 + t5419;
  t6003 = t146*t5931;
  t6010 = t5965*t4197;
  t6017 = t6003 + t6010;
  t5572 = -0.049*t5557;
  t5581 = -0.09*t5576;
  t5584 = 0. + t5572 + t5581;
  t5643 = -0.09*t5557;
  t5666 = 0.049*t5576;
  t5670 = 0. + t5643 + t5666;
  t5737 = -0.049*t5714;
  t5748 = -0.21*t5740;
  t5753 = 0. + t5737 + t5748;
  t6152 = t5403*t4673*t2171;
  t6166 = t6017*t5243;
  t6168 = t6152 + t6166;
  t6189 = t146*t5965;
  t6196 = -1.*t5931*t4197;
  t6200 = t6189 + t6196;
  t5769 = -0.21*t5714;
  t5773 = 0.049*t5740;
  t5790 = 0. + t5769 + t5773;
  t6209 = t5522*t6168;
  t6210 = t6200*t5576;
  t6217 = t6209 + t6210;
  t6247 = t5522*t6200;
  t6248 = -1.*t6168*t5576;
  t6252 = t6247 + t6248;
  t6301 = t5403*t146*t3423;
  t6320 = t5403*t1634*t4197;
  t6321 = t6301 + t6320;
  t6408 = -1.*t4673*t3140;
  t6418 = t6321*t5243;
  t6420 = t6408 + t6418;
  t6427 = t5403*t1634*t146;
  t6430 = -1.*t5403*t3423*t4197;
  t6438 = t6427 + t6430;
  t6444 = t5522*t6420;
  t6445 = t6438*t5576;
  t6446 = t6444 + t6445;
  t6457 = t5522*t6438;
  t6463 = -1.*t6420*t5576;
  t6466 = t6457 + t6463;
  p_output1[0]=0. + t1159*t3876 + t4154*t4234 + t4617*t5337 + 0.1305*(t4617*t4673 - 1.*t2908*t5243*t5403) + t2908*t5403*t5420 + t5511*t5584 + t5621*t5670 + t5753*t5766 + t5790*t5834 - 0.21*(-1.*t5740*t5766 + t5693*t5834) - 0.049*(t5693*t5766 + t5740*t5834) + var1[0];
  p_output1[1]=0. + t2171*t5403*t5420 + t1159*t5931 + t4234*t5965 + t5337*t6017 + 0.1305*(-1.*t2171*t5243*t5403 + t4673*t6017) + t5584*t6168 + t5670*t6200 + t5753*t6217 + t5790*t6252 - 0.21*(-1.*t5740*t6217 + t5693*t6252) - 0.049*(t5693*t6217 + t5740*t6252) + var1[1];
  p_output1[2]=0. + t1159*t3423*t5403 + t1634*t4234*t5403 - 1.*t3140*t5420 + t5337*t6321 + 0.1305*(t3140*t5243 + t4673*t6321) + t5584*t6420 + t5670*t6438 + t5753*t6446 + t5790*t6466 - 0.21*(-1.*t5740*t6446 + t5693*t6466) - 0.049*(t5693*t6446 + t5740*t6466) + var1[2];
}



void p_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
