/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom_src.h"

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
  double t103;
  double t575;
  double t608;
  double t622;
  double t660;
  double t772;
  double t1889;
  double t2240;
  double t2257;
  double t2366;
  double t2420;
  double t2482;
  double t2489;
  double t2497;
  double t2629;
  double t2639;
  double t2722;
  double t2906;
  double t2922;
  double t2964;
  double t3016;
  double t3176;
  double t3221;
  double t3223;
  double t3453;
  double t3474;
  double t3476;
  double t3534;
  double t3536;
  double t3543;
  double t3554;
  double t3566;
  double t3575;
  double t3579;
  double t3603;
  double t3611;
  double t3616;
  double t3713;
  double t283;
  double t399;
  double t1408;
  double t1519;
  double t1610;
  double t1673;
  double t1959;
  double t2040;
  double t753;
  double t773;
  double t912;
  double t3835;
  double t2103;
  double t2174;
  double t2193;
  double t2393;
  double t2438;
  double t2459;
  double t3860;
  double t3861;
  double t3865;
  double t3881;
  double t3888;
  double t3897;
  double t2580;
  double t2604;
  double t2617;
  double t3006;
  double t3097;
  double t3173;
  double t3915;
  double t3919;
  double t3920;
  double t3930;
  double t3932;
  double t3936;
  double t3246;
  double t3375;
  double t3414;
  double t3550;
  double t3557;
  double t3565;
  double t3952;
  double t3955;
  double t3956;
  double t3987;
  double t3989;
  double t3990;
  double t3590;
  double t3598;
  double t3599;
  double t3998;
  double t4002;
  double t4011;
  double t4026;
  double t4028;
  double t4048;
  double t3799;
  double t3810;
  double t3824;
  double t3840;
  double t3845;
  double t3851;
  double t4212;
  double t4217;
  double t4219;
  double t4235;
  double t4237;
  double t4242;
  double t4285;
  double t4295;
  double t4298;
  double t4357;
  double t4363;
  double t4370;
  double t4384;
  double t4400;
  double t4402;
  double t4413;
  double t4416;
  double t4419;
  double t4448;
  double t4460;
  double t4461;
  double t4479;
  double t4491;
  double t4533;
  t103 = Cos(var1[1]);
  t575 = Cos(var1[2]);
  t608 = Cos(var1[3]);
  t622 = -1.*t608;
  t660 = 1. + t622;
  t772 = Sin(var1[3]);
  t1889 = Sin(var1[2]);
  t2240 = Cos(var1[4]);
  t2257 = -1.*t2240;
  t2366 = 1. + t2257;
  t2420 = Sin(var1[4]);
  t2482 = -1.*t103*t575*t772;
  t2489 = -1.*t608*t103*t1889;
  t2497 = t2482 + t2489;
  t2629 = t608*t103*t575;
  t2639 = -1.*t103*t772*t1889;
  t2722 = t2629 + t2639;
  t2906 = Cos(var1[5]);
  t2922 = -1.*t2906;
  t2964 = 1. + t2922;
  t3016 = Sin(var1[5]);
  t3176 = t2420*t2497;
  t3221 = t2240*t2722;
  t3223 = t3176 + t3221;
  t3453 = t2240*t2497;
  t3474 = -1.*t2420*t2722;
  t3476 = t3453 + t3474;
  t3534 = Cos(var1[6]);
  t3536 = -1.*t3534;
  t3543 = 1. + t3536;
  t3554 = Sin(var1[6]);
  t3566 = -1.*t3016*t3223;
  t3575 = t2906*t3476;
  t3579 = t3566 + t3575;
  t3603 = t2906*t3223;
  t3611 = t3016*t3476;
  t3616 = t3603 + t3611;
  t3713 = Cos(var1[0]);
  t283 = -1.*t103;
  t399 = 1. + t283;
  t1408 = Sin(var1[1]);
  t1519 = -1.*t575;
  t1610 = 1. + t1519;
  t1673 = -0.049*t1610;
  t1959 = -0.09*t1889;
  t2040 = 0. + t1673 + t1959;
  t753 = -0.049*t660;
  t773 = -0.21*t772;
  t912 = 0. + t753 + t773;
  t3835 = Sin(var1[0]);
  t2103 = -0.21*t660;
  t2174 = 0.049*t772;
  t2193 = 0. + t2103 + t2174;
  t2393 = -0.2707*t2366;
  t2438 = 0.0016*t2420;
  t2459 = 0. + t2393 + t2438;
  t3860 = t3713*t575*t1408;
  t3861 = -1.*t3835*t1889;
  t3865 = t3860 + t3861;
  t3881 = -1.*t575*t3835;
  t3888 = -1.*t3713*t1408*t1889;
  t3897 = t3881 + t3888;
  t2580 = -0.0016*t2366;
  t2604 = -0.2707*t2420;
  t2617 = 0. + t2580 + t2604;
  t3006 = 0.0184*t2964;
  t3097 = -0.7055*t3016;
  t3173 = 0. + t3006 + t3097;
  t3915 = -1.*t772*t3865;
  t3919 = t608*t3897;
  t3920 = t3915 + t3919;
  t3930 = t608*t3865;
  t3932 = t772*t3897;
  t3936 = t3930 + t3932;
  t3246 = -0.7055*t2964;
  t3375 = -0.0184*t3016;
  t3414 = 0. + t3246 + t3375;
  t3550 = -1.1135*t3543;
  t3557 = 0.0216*t3554;
  t3565 = 0. + t3550 + t3557;
  t3952 = t2420*t3920;
  t3955 = t2240*t3936;
  t3956 = t3952 + t3955;
  t3987 = t2240*t3920;
  t3989 = -1.*t2420*t3936;
  t3990 = t3987 + t3989;
  t3590 = -0.0216*t3543;
  t3598 = -1.1135*t3554;
  t3599 = 0. + t3590 + t3598;
  t3998 = -1.*t3016*t3956;
  t4002 = t2906*t3990;
  t4011 = t3998 + t4002;
  t4026 = t2906*t3956;
  t4028 = t3016*t3990;
  t4048 = t4026 + t4028;
  t3799 = 0.135*t399;
  t3810 = 0.049*t1408;
  t3824 = 0. + t3799 + t3810;
  t3840 = -0.09*t1610;
  t3845 = 0.049*t1889;
  t3851 = 0. + t3840 + t3845;
  t4212 = t575*t3835*t1408;
  t4217 = t3713*t1889;
  t4219 = t4212 + t4217;
  t4235 = t3713*t575;
  t4237 = -1.*t3835*t1408*t1889;
  t4242 = t4235 + t4237;
  t4285 = -1.*t772*t4219;
  t4295 = t608*t4242;
  t4298 = t4285 + t4295;
  t4357 = t608*t4219;
  t4363 = t772*t4242;
  t4370 = t4357 + t4363;
  t4384 = t2420*t4298;
  t4400 = t2240*t4370;
  t4402 = t4384 + t4400;
  t4413 = t2240*t4298;
  t4416 = -1.*t2420*t4370;
  t4419 = t4413 + t4416;
  t4448 = -1.*t3016*t4402;
  t4460 = t2906*t4419;
  t4461 = t4448 + t4460;
  t4479 = t2906*t4402;
  t4491 = t3016*t4419;
  t4533 = t4479 + t4491;
  p_output1[0]=-0.03155 + 0.004500000000000004*t1408 + t103*t2040 - 1.*t103*t1889*t2193 + t2459*t2497 + t2617*t2722 + t3173*t3223 + t3414*t3476 + t3565*t3579 + t3599*t3616 + 0.0306*(t3554*t3579 + t3534*t3616) - 1.1312*(t3534*t3579 - 1.*t3554*t3616) - 0.049*t399 + t103*t575*t912;
  p_output1[1]=0. + 0.135*(1. - 1.*t3713) + 0.1305*t103*t3713 + t1408*t2040*t3713 + t3713*t3824 - 1.*t3835*t3851 + t2193*t3897 + t2459*t3920 + t2617*t3936 + t3173*t3956 + t3414*t3990 + t3565*t4011 + t3599*t4048 + 0.0306*(t3554*t4011 + t3534*t4048) - 1.1312*(t3534*t4011 - 1.*t3554*t4048) + t3865*t912;
  p_output1[2]=0.07996 - 0.135*t3835 + 0.1305*t103*t3835 + t1408*t2040*t3835 + t3824*t3835 + t3713*t3851 + t2193*t4242 + t2459*t4298 + t2617*t4370 + t3173*t4402 + t3414*t4419 + t3565*t4461 + t3599*t4533 + 0.0306*(t3554*t4461 + t3534*t4533) - 1.1312*(t3534*t4461 - 1.*t3554*t4533) + t4219*t912;
}



void p_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
