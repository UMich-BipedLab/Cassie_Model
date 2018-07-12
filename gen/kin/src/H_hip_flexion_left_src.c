/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_left_src.h"

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
  double t1087;
  double t1472;
  double t983;
  double t1121;
  double t1573;
  double t781;
  double t1644;
  double t1719;
  double t1906;
  double t1339;
  double t1600;
  double t1606;
  double t1967;
  double t660;
  double t2124;
  double t2148;
  double t2939;
  double t2966;
  double t2996;
  double t2639;
  double t2640;
  double t2721;
  double t2458;
  double t2504;
  double t2236;
  double t2272;
  double t2417;
  double t2431;
  double t2490;
  double t2497;
  double t1638;
  double t1994;
  double t2040;
  double t3227;
  double t3236;
  double t3237;
  double t3300;
  double t3440;
  double t3468;
  double t2923;
  double t3151;
  double t3208;
  double t3603;
  double t3651;
  double t3656;
  double t3686;
  double t3688;
  double t3690;
  double t3506;
  double t3525;
  double t3533;
  double t4509;
  double t4541;
  double t4805;
  double t4811;
  double t3950;
  double t4013;
  double t4020;
  double t4365;
  double t4376;
  double t4377;
  double t4386;
  double t4417;
  double t4418;
  double t4549;
  double t4556;
  double t4558;
  double t4583;
  double t4594;
  double t4656;
  double t4854;
  double t4872;
  double t4874;
  double t4888;
  double t4900;
  double t4924;
  double t4043;
  double t4085;
  double t4091;
  double t4125;
  double t4126;
  double t4129;
  t1087 = Cos(var1[5]);
  t1472 = Sin(var1[3]);
  t983 = Cos(var1[3]);
  t1121 = Sin(var1[4]);
  t1573 = Sin(var1[5]);
  t781 = Cos(var1[6]);
  t1644 = -1.*t1087*t1472;
  t1719 = t983*t1121*t1573;
  t1906 = t1644 + t1719;
  t1339 = t983*t1087*t1121;
  t1600 = t1472*t1573;
  t1606 = t1339 + t1600;
  t1967 = Sin(var1[6]);
  t660 = Cos(var1[8]);
  t2124 = Cos(var1[4]);
  t2148 = Cos(var1[7]);
  t2939 = t983*t1087;
  t2966 = t1472*t1121*t1573;
  t2996 = t2939 + t2966;
  t2639 = t1087*t1472*t1121;
  t2640 = -1.*t983*t1573;
  t2721 = t2639 + t2640;
  t2458 = Sin(var1[7]);
  t2504 = Sin(var1[8]);
  t2236 = t983*t2124*t2148;
  t2272 = t781*t1906;
  t2417 = t1606*t1967;
  t2431 = t2272 + t2417;
  t2490 = t2431*t2458;
  t2497 = t2236 + t2490;
  t1638 = t781*t1606;
  t1994 = -1.*t1906*t1967;
  t2040 = t1638 + t1994;
  t3227 = t2124*t2148*t1472;
  t3236 = t781*t2996;
  t3237 = t2721*t1967;
  t3300 = t3236 + t3237;
  t3440 = t3300*t2458;
  t3468 = t3227 + t3440;
  t2923 = t781*t2721;
  t3151 = -1.*t2996*t1967;
  t3208 = t2923 + t3151;
  t3603 = -1.*t2148*t1121;
  t3651 = t2124*t781*t1573;
  t3656 = t2124*t1087*t1967;
  t3686 = t3651 + t3656;
  t3688 = t3686*t2458;
  t3690 = t3603 + t3688;
  t3506 = t2124*t1087*t781;
  t3525 = -1.*t2124*t1573*t1967;
  t3533 = t3506 + t3525;
  t4509 = -1.*t2148;
  t4541 = 1. + t4509;
  t4805 = -1.*t660;
  t4811 = 1. + t4805;
  t3950 = t660*t2497;
  t4013 = t2040*t2504;
  t4020 = t3950 + t4013;
  t4365 = -1.*t781;
  t4376 = 1. + t4365;
  t4377 = 0.135*t4376;
  t4386 = 0. + t4377;
  t4417 = -0.135*t1967;
  t4418 = 0. + t4417;
  t4549 = 0.135*t4541;
  t4556 = 0.049*t2458;
  t4558 = 0. + t4549 + t4556;
  t4583 = -0.049*t4541;
  t4594 = 0.135*t2458;
  t4656 = 0. + t4583 + t4594;
  t4854 = -0.049*t4811;
  t4872 = -0.09*t2504;
  t4874 = 0. + t4854 + t4872;
  t4888 = -0.09*t4811;
  t4900 = 0.049*t2504;
  t4924 = 0. + t4888 + t4900;
  t4043 = t660*t3468;
  t4085 = t3208*t2504;
  t4091 = t4043 + t4085;
  t4125 = t660*t3690;
  t4126 = t3533*t2504;
  t4129 = t4125 + t4126;
  p_output1[0]=t2497*t2504 - 1.*t2040*t660;
  p_output1[1]=t2504*t3468 - 1.*t3208*t660;
  p_output1[2]=t2504*t3690 - 1.*t3533*t660;
  p_output1[3]=0.;
  p_output1[4]=t4020;
  p_output1[5]=t4091;
  p_output1[6]=t4129;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2148*t2431 + t2124*t2458*t983;
  p_output1[9]=t1472*t2124*t2458 - 1.*t2148*t3300;
  p_output1[10]=-1.*t1121*t2458 - 1.*t2148*t3686;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t4020 + t1906*t4386 + t1606*t4418 + t2431*t4558 + t2497*t4874 + t2040*t4924 - 0.09*(-1.*t2497*t2504 + t2040*t660) + t2124*t4656*t983 + 0.135*(t2148*t2431 - 1.*t2124*t2458*t983) + var1[0];
  p_output1[13]=0. + 0.135*(-1.*t1472*t2124*t2458 + t2148*t3300) - 0.049*t4091 + t2996*t4386 + t2721*t4418 + t3300*t4558 + t1472*t2124*t4656 + t3468*t4874 + t3208*t4924 - 0.09*(-1.*t2504*t3468 + t3208*t660) + var1[1];
  p_output1[14]=0. + 0.135*(t1121*t2458 + t2148*t3686) - 0.049*t4129 + t1573*t2124*t4386 + t1087*t2124*t4418 + t3686*t4558 - 1.*t1121*t4656 + t3690*t4874 + t3533*t4924 - 0.09*(-1.*t2504*t3690 + t3533*t660) + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
