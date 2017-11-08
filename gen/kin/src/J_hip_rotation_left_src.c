/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_rotation_left_src.h"

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
  double t472;
  double t552;
  double t558;
  double t551;
  double t559;
  double t509;
  double t555;
  double t560;
  double t562;
  double t567;
  double t570;
  double t571;
  double t572;
  double t445;
  double t515;
  double t527;
  double t538;
  double t539;
  double t578;
  double t579;
  double t610;
  double t611;
  double t613;
  double t617;
  double t620;
  double t623;
  double t769;
  double t772;
  double t777;
  double t639;
  double t582;
  double t802;
  double t803;
  double t808;
  double t785;
  double t640;
  double t641;
  double t875;
  double t876;
  double t878;
  double t812;
  double t819;
  double t836;
  double t837;
  double t838;
  double t841;
  double t842;
  double t845;
  double t846;
  double t851;
  t472 = Sin(var1[3]);
  t552 = Cos(var1[5]);
  t558 = Sin(var1[4]);
  t551 = Cos(var1[3]);
  t559 = Sin(var1[5]);
  t509 = Cos(var1[6]);
  t555 = -1.*t551*t552;
  t560 = -1.*t472*t558*t559;
  t562 = t555 + t560;
  t567 = -1.*t552*t472*t558;
  t570 = t551*t559;
  t571 = t567 + t570;
  t572 = Sin(var1[6]);
  t445 = Cos(var1[4]);
  t515 = -1.*t509;
  t527 = 1. + t515;
  t538 = 0.135*t527;
  t539 = 0. + t538;
  t578 = -0.135*t572;
  t579 = 0. + t578;
  t610 = -1.*t552*t472;
  t611 = t551*t558*t559;
  t613 = t610 + t611;
  t617 = t551*t552*t558;
  t620 = t472*t559;
  t623 = t617 + t620;
  t769 = t552*t472;
  t772 = -1.*t551*t558*t559;
  t777 = t769 + t772;
  t639 = t509*t623;
  t582 = t509*t562;
  t802 = t552*t472*t558;
  t803 = -1.*t551*t559;
  t808 = t802 + t803;
  t785 = -1.*t623*t572;
  t640 = -1.*t613*t572;
  t641 = t639 + t640;
  t875 = t551*t552;
  t876 = t472*t558*t559;
  t878 = t875 + t876;
  t812 = -1.*t808*t572;
  t819 = t509*t808;
  t836 = -1.*t445*t509*t559;
  t837 = -1.*t445*t552*t572;
  t838 = t836 + t837;
  t841 = -0.09*t838;
  t842 = t445*t552*t509;
  t845 = -1.*t445*t559*t572;
  t846 = t842 + t845;
  t851 = 0.135*t846;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t445*t472 + t539*t562 - 0.09*(t509*t571 - 1.*t562*t572) + t571*t579 + 0.135*(t571*t572 + t582);
  p_output1[10]=-0.049*t445*t551 + t539*t613 + t579*t623 + 0.135*(t509*t613 + t572*t623) - 0.09*t641;
  p_output1[11]=0;
  p_output1[12]=0.049*t551*t558 + t445*t539*t551*t559 + 0.135*(t445*t509*t551*t559 + t445*t551*t552*t572) - 0.09*(t445*t509*t551*t552 - 1.*t445*t551*t559*t572) + t445*t551*t552*t579;
  p_output1[13]=0.049*t472*t558 + t445*t472*t539*t559 + 0.135*(t445*t472*t509*t559 + t445*t472*t552*t572) - 0.09*(t445*t472*t509*t552 - 1.*t445*t472*t559*t572) + t445*t472*t552*t579;
  p_output1[14]=0.049*t445 - 1.*t539*t558*t559 + 0.135*(-1.*t509*t558*t559 - 1.*t552*t558*t572) - 0.09*(-1.*t509*t552*t558 + t558*t559*t572) - 1.*t552*t558*t579;
  p_output1[15]=t539*t623 + t579*t777 + 0.135*(t639 + t572*t777) - 0.09*(t509*t777 + t785);
  p_output1[16]=t562*t579 + t539*t808 - 0.09*(t582 + t812) + 0.135*(t562*t572 + t819);
  p_output1[17]=t445*t539*t552 - 1.*t445*t559*t579 + t841 + t851;
  p_output1[18]=0.135*t572*t613 - 0.135*t509*t623 + 0.135*t641 - 0.09*(-1.*t509*t613 + t785);
  p_output1[19]=-0.135*t509*t808 + 0.135*t572*t878 - 0.09*(t812 - 1.*t509*t878) + 0.135*(t819 - 1.*t572*t878);
  p_output1[20]=-0.135*t445*t509*t552 + 0.135*t445*t559*t572 + t841 + t851;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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



void J_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
