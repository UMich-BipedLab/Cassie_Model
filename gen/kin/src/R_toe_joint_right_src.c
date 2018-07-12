/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_right_src.h"

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
  double t1673;
  double t2193;
  double t1610;
  double t2040;
  double t2366;
  double t2497;
  double t2099;
  double t2393;
  double t2438;
  double t1408;
  double t2504;
  double t2906;
  double t2964;
  double t3474;
  double t2459;
  double t3097;
  double t3173;
  double t1151;
  double t3476;
  double t3512;
  double t3534;
  double t3536;
  double t3543;
  double t3550;
  double t3554;
  double t3557;
  double t3565;
  double t3583;
  double t3176;
  double t3566;
  double t3575;
  double t912;
  double t3590;
  double t3598;
  double t3599;
  double t3620;
  double t3579;
  double t3603;
  double t3611;
  double t660;
  double t3622;
  double t3625;
  double t3644;
  double t3682;
  double t3616;
  double t3673;
  double t3674;
  double t575;
  double t3704;
  double t3709;
  double t3713;
  double t103;
  double t3824;
  double t3835;
  double t3840;
  double t3851;
  double t3859;
  double t3860;
  double t3845;
  double t3861;
  double t3865;
  double t3881;
  double t3888;
  double t3897;
  double t3909;
  double t3915;
  double t3919;
  double t3878;
  double t3920;
  double t3922;
  double t3936;
  double t3941;
  double t3952;
  double t3932;
  double t3955;
  double t3956;
  double t3989;
  double t3990;
  double t3996;
  double t3775;
  double t3987;
  double t3998;
  double t4002;
  double t4018;
  double t4026;
  double t4028;
  double t4159;
  double t4163;
  double t4167;
  double t4173;
  double t4175;
  double t4180;
  double t4190;
  double t4208;
  double t4209;
  double t4169;
  double t4212;
  double t4217;
  double t4223;
  double t4235;
  double t4237;
  double t4219;
  double t4242;
  double t4253;
  double t4298;
  double t4300;
  double t4357;
  double t4295;
  double t4363;
  double t4384;
  double t4402;
  double t4407;
  double t4413;
  double t3679;
  double t3715;
  double t3734;
  double t3795;
  double t3799;
  double t3810;
  double t4011;
  double t4048;
  double t4049;
  double t4077;
  double t4089;
  double t4092;
  double t4400;
  double t4416;
  double t4437;
  double t4448;
  double t4460;
  double t4461;
  t1673 = Cos(var1[5]);
  t2193 = Sin(var1[3]);
  t1610 = Cos(var1[3]);
  t2040 = Sin(var1[4]);
  t2366 = Sin(var1[5]);
  t2497 = Sin(var1[13]);
  t2099 = t1610*t1673*t2040;
  t2393 = t2193*t2366;
  t2438 = t2099 + t2393;
  t1408 = Cos(var1[13]);
  t2504 = -1.*t1673*t2193;
  t2906 = t1610*t2040*t2366;
  t2964 = t2504 + t2906;
  t3474 = Cos(var1[15]);
  t2459 = t1408*t2438;
  t3097 = -1.*t2497*t2964;
  t3173 = t2459 + t3097;
  t1151 = Sin(var1[15]);
  t3476 = Cos(var1[14]);
  t3512 = Cos(var1[4]);
  t3534 = t3476*t1610*t3512;
  t3536 = Sin(var1[14]);
  t3543 = t2497*t2438;
  t3550 = t1408*t2964;
  t3554 = t3543 + t3550;
  t3557 = t3536*t3554;
  t3565 = t3534 + t3557;
  t3583 = Cos(var1[16]);
  t3176 = t1151*t3173;
  t3566 = t3474*t3565;
  t3575 = t3176 + t3566;
  t912 = Sin(var1[16]);
  t3590 = t3474*t3173;
  t3598 = -1.*t1151*t3565;
  t3599 = t3590 + t3598;
  t3620 = Cos(var1[17]);
  t3579 = -1.*t912*t3575;
  t3603 = t3583*t3599;
  t3611 = t3579 + t3603;
  t660 = Sin(var1[17]);
  t3622 = t3583*t3575;
  t3625 = t912*t3599;
  t3644 = t3622 + t3625;
  t3682 = Cos(var1[18]);
  t3616 = t660*t3611;
  t3673 = t3620*t3644;
  t3674 = t3616 + t3673;
  t575 = Sin(var1[18]);
  t3704 = t3620*t3611;
  t3709 = -1.*t660*t3644;
  t3713 = t3704 + t3709;
  t103 = Cos(var1[19]);
  t3824 = t1673*t2193*t2040;
  t3835 = -1.*t1610*t2366;
  t3840 = t3824 + t3835;
  t3851 = t1610*t1673;
  t3859 = t2193*t2040*t2366;
  t3860 = t3851 + t3859;
  t3845 = t1408*t3840;
  t3861 = -1.*t2497*t3860;
  t3865 = t3845 + t3861;
  t3881 = t3476*t3512*t2193;
  t3888 = t2497*t3840;
  t3897 = t1408*t3860;
  t3909 = t3888 + t3897;
  t3915 = t3536*t3909;
  t3919 = t3881 + t3915;
  t3878 = t1151*t3865;
  t3920 = t3474*t3919;
  t3922 = t3878 + t3920;
  t3936 = t3474*t3865;
  t3941 = -1.*t1151*t3919;
  t3952 = t3936 + t3941;
  t3932 = -1.*t912*t3922;
  t3955 = t3583*t3952;
  t3956 = t3932 + t3955;
  t3989 = t3583*t3922;
  t3990 = t912*t3952;
  t3996 = t3989 + t3990;
  t3775 = Sin(var1[19]);
  t3987 = t660*t3956;
  t3998 = t3620*t3996;
  t4002 = t3987 + t3998;
  t4018 = t3620*t3956;
  t4026 = -1.*t660*t3996;
  t4028 = t4018 + t4026;
  t4159 = t1408*t3512*t1673;
  t4163 = -1.*t3512*t2497*t2366;
  t4167 = t4159 + t4163;
  t4173 = -1.*t3476*t2040;
  t4175 = t3512*t1673*t2497;
  t4180 = t1408*t3512*t2366;
  t4190 = t4175 + t4180;
  t4208 = t3536*t4190;
  t4209 = t4173 + t4208;
  t4169 = t1151*t4167;
  t4212 = t3474*t4209;
  t4217 = t4169 + t4212;
  t4223 = t3474*t4167;
  t4235 = -1.*t1151*t4209;
  t4237 = t4223 + t4235;
  t4219 = -1.*t912*t4217;
  t4242 = t3583*t4237;
  t4253 = t4219 + t4242;
  t4298 = t3583*t4217;
  t4300 = t912*t4237;
  t4357 = t4298 + t4300;
  t4295 = t660*t4253;
  t4363 = t3620*t4357;
  t4384 = t4295 + t4363;
  t4402 = t3620*t4253;
  t4407 = -1.*t660*t4357;
  t4413 = t4402 + t4407;
  t3679 = -1.*t575*t3674;
  t3715 = t3682*t3713;
  t3734 = t3679 + t3715;
  t3795 = t3682*t3674;
  t3799 = t575*t3713;
  t3810 = t3795 + t3799;
  t4011 = -1.*t575*t4002;
  t4048 = t3682*t4028;
  t4049 = t4011 + t4048;
  t4077 = t3682*t4002;
  t4089 = t575*t4028;
  t4092 = t4077 + t4089;
  t4400 = -1.*t575*t4384;
  t4416 = t3682*t4413;
  t4437 = t4400 + t4416;
  t4448 = t3682*t4384;
  t4460 = t575*t4413;
  t4461 = t4448 + t4460;
  p_output1[0]=-1.*t103*t3734 + t3775*t3810;
  p_output1[1]=-1.*t103*t4049 + t3775*t4092;
  p_output1[2]=-1.*t103*t4437 + t3775*t4461;
  p_output1[3]=t3734*t3775 + t103*t3810;
  p_output1[4]=t3775*t4049 + t103*t4092;
  p_output1[5]=t3775*t4437 + t103*t4461;
  p_output1[6]=t1610*t3512*t3536 - 1.*t3476*t3554;
  p_output1[7]=t2193*t3512*t3536 - 1.*t3476*t3909;
  p_output1[8]=-1.*t2040*t3536 - 1.*t3476*t4190;
}



void R_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
