/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t98;
  double t116;
  double t427;
  double t203;
  double t511;
  double t566;
  double t493;
  double t667;
  double t746;
  double t748;
  double t554;
  double t570;
  double t646;
  double t837;
  double t489;
  double t1015;
  double t1054;
  double t1170;
  double t666;
  double t863;
  double t890;
  double t1221;
  double t480;
  double t1385;
  double t1411;
  double t1432;
  double t947;
  double t1227;
  double t1285;
  double t1440;
  double t448;
  double t1557;
  double t1624;
  double t1627;
  double t1340;
  double t1451;
  double t1499;
  double t1699;
  double t2061;
  double t2106;
  double t2109;
  double t1936;
  double t1946;
  double t1947;
  double t2191;
  double t2221;
  double t2233;
  double t2011;
  double t2154;
  double t2171;
  double t2267;
  double t2281;
  double t2316;
  double t2176;
  double t2235;
  double t2241;
  double t2402;
  double t2493;
  double t2497;
  double t2254;
  double t2352;
  double t2380;
  double t2646;
  double t2665;
  double t2668;
  double t2567;
  double t2583;
  double t2605;
  double t2723;
  double t2725;
  double t2730;
  double t2609;
  double t2700;
  double t2712;
  double t2923;
  double t2960;
  double t2993;
  double t2713;
  double t2790;
  double t2871;
  double t1509;
  double t1747;
  double t1766;
  double t1811;
  double t1871;
  double t1894;
  double t2397;
  double t2498;
  double t2504;
  double t2514;
  double t2522;
  double t2529;
  double t2914;
  double t3010;
  double t3028;
  double t3087;
  double t3101;
  double t3106;
  double t3449;
  double t3454;
  double t3599;
  double t3612;
  double t3706;
  double t3726;
  double t3830;
  double t3848;
  double t4026;
  double t4055;
  double t3371;
  double t3391;
  double t3393;
  double t3402;
  double t3403;
  double t3457;
  double t3496;
  double t3535;
  double t3540;
  double t3555;
  double t3572;
  double t3637;
  double t3638;
  double t3640;
  double t3651;
  double t3656;
  double t3678;
  double t3730;
  double t3776;
  double t3788;
  double t3799;
  double t3803;
  double t3817;
  double t3859;
  double t3884;
  double t3888;
  double t3951;
  double t3992;
  double t4002;
  double t4059;
  double t4066;
  double t4088;
  double t4094;
  double t4114;
  double t4121;
  t98 = Cos(var1[8]);
  t116 = Sin(var1[7]);
  t427 = Sin(var1[8]);
  t203 = Cos(var1[7]);
  t511 = Cos(var1[9]);
  t566 = Sin(var1[9]);
  t493 = Cos(var1[10]);
  t667 = t203*t511;
  t746 = -1.*t116*t427*t566;
  t748 = t667 + t746;
  t554 = t511*t116*t427;
  t570 = t203*t566;
  t646 = t554 + t570;
  t837 = Sin(var1[10]);
  t489 = Cos(var1[11]);
  t1015 = t493*t748;
  t1054 = -1.*t646*t837;
  t1170 = t1015 + t1054;
  t666 = t493*t646;
  t863 = t748*t837;
  t890 = t666 + t863;
  t1221 = Sin(var1[11]);
  t480 = Cos(var1[12]);
  t1385 = t489*t1170;
  t1411 = -1.*t890*t1221;
  t1432 = t1385 + t1411;
  t947 = t489*t890;
  t1227 = t1170*t1221;
  t1285 = t947 + t1227;
  t1440 = Sin(var1[12]);
  t448 = Cos(var1[13]);
  t1557 = t480*t1432;
  t1624 = -1.*t1285*t1440;
  t1627 = t1557 + t1624;
  t1340 = t480*t1285;
  t1451 = t1432*t1440;
  t1499 = t1340 + t1451;
  t1699 = Sin(var1[13]);
  t2061 = -1.*t511*t116;
  t2106 = -1.*t203*t427*t566;
  t2109 = t2061 + t2106;
  t1936 = t203*t511*t427;
  t1946 = -1.*t116*t566;
  t1947 = t1936 + t1946;
  t2191 = t493*t2109;
  t2221 = -1.*t1947*t837;
  t2233 = t2191 + t2221;
  t2011 = t493*t1947;
  t2154 = t2109*t837;
  t2171 = t2011 + t2154;
  t2267 = t489*t2233;
  t2281 = -1.*t2171*t1221;
  t2316 = t2267 + t2281;
  t2176 = t489*t2171;
  t2235 = t2233*t1221;
  t2241 = t2176 + t2235;
  t2402 = t480*t2316;
  t2493 = -1.*t2241*t1440;
  t2497 = t2402 + t2493;
  t2254 = t480*t2241;
  t2352 = t2316*t1440;
  t2380 = t2254 + t2352;
  t2646 = -1.*t98*t493*t566;
  t2665 = -1.*t98*t511*t837;
  t2668 = t2646 + t2665;
  t2567 = t98*t511*t493;
  t2583 = -1.*t98*t566*t837;
  t2605 = t2567 + t2583;
  t2723 = t489*t2668;
  t2725 = -1.*t2605*t1221;
  t2730 = t2723 + t2725;
  t2609 = t489*t2605;
  t2700 = t2668*t1221;
  t2712 = t2609 + t2700;
  t2923 = t480*t2730;
  t2960 = -1.*t2712*t1440;
  t2993 = t2923 + t2960;
  t2713 = t480*t2712;
  t2790 = t2730*t1440;
  t2871 = t2713 + t2790;
  t1509 = t448*t1499;
  t1747 = t1627*t1699;
  t1766 = t1509 + t1747;
  t1811 = t448*t1627;
  t1871 = -1.*t1499*t1699;
  t1894 = t1811 + t1871;
  t2397 = t448*t2380;
  t2498 = t2497*t1699;
  t2504 = t2397 + t2498;
  t2514 = t448*t2497;
  t2522 = -1.*t2380*t1699;
  t2529 = t2514 + t2522;
  t2914 = t448*t2871;
  t3010 = t2993*t1699;
  t3028 = t2914 + t3010;
  t3087 = t448*t2993;
  t3101 = -1.*t2871*t1699;
  t3106 = t3087 + t3101;
  t3449 = -1.*t511;
  t3454 = 1. + t3449;
  t3599 = -1.*t493;
  t3612 = 1. + t3599;
  t3706 = -1.*t489;
  t3726 = 1. + t3706;
  t3830 = -1.*t480;
  t3848 = 1. + t3830;
  t4026 = -1.*t448;
  t4055 = 1. + t4026;
  t3371 = -1.*t98;
  t3391 = 1. + t3371;
  t3393 = -0.135*t3391;
  t3402 = 0.049*t427;
  t3403 = 0. + t3393 + t3402;
  t3457 = -0.049*t3454;
  t3496 = -0.09*t566;
  t3535 = 0. + t3457 + t3496;
  t3540 = -0.09*t3454;
  t3555 = 0.049*t566;
  t3572 = 0. + t3540 + t3555;
  t3637 = -0.049*t3612;
  t3638 = -0.21*t837;
  t3640 = 0. + t3637 + t3638;
  t3651 = -0.21*t3612;
  t3656 = 0.049*t837;
  t3678 = 0. + t3651 + t3656;
  t3730 = -0.0016*t3726;
  t3776 = -0.2707*t1221;
  t3788 = 0. + t3730 + t3776;
  t3799 = -0.2707*t3726;
  t3803 = 0.0016*t1221;
  t3817 = 0. + t3799 + t3803;
  t3859 = 0.0184*t3848;
  t3884 = -0.7055*t1440;
  t3888 = 0. + t3859 + t3884;
  t3951 = -0.7055*t3848;
  t3992 = -0.0184*t1440;
  t4002 = 0. + t3951 + t3992;
  t4059 = -0.0216*t4055;
  t4066 = -1.1135*t1699;
  t4088 = 0. + t4059 + t4066;
  t4094 = -1.1135*t4055;
  t4114 = 0.0216*t1699;
  t4121 = 0. + t4094 + t4114;
  p_output1[0]=0. + t116*t98;
  p_output1[1]=0. - 1.*t203*t98;
  p_output1[2]=0. + t427;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t1766 - 0.766044*t1894;
  p_output1[5]=0. + 0.642788*t2504 + 0.766044*t2529;
  p_output1[6]=0. + 0.642788*t3028 + 0.766044*t3106;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t1766 - 0.642788*t1894;
  p_output1[9]=0. - 0.766044*t2504 + 0.642788*t2529;
  p_output1[10]=0. - 0.766044*t3028 + 0.642788*t3106;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.135*t116 - 0.0306*t1766 + 1.1312*t1894 - 1.*t116*t3403 - 1.*t203*t3572 - 1.*t1170*t3817 - 1.*t1285*t3888 - 1.*t1432*t4002 - 1.*t1499*t4088 - 1.*t1627*t4121 - 1.*t116*t3535*t427 - 1.*t3640*t646 - 1.*t3678*t748 - 1.*t3788*t890 + 0.1305*t116*t98;
  p_output1[13]=-0.0302 - 0.135*(1. - 1.*t203) + 0.0306*t2504 - 1.1312*t2529 + t203*t3403 - 1.*t116*t3572 + t1947*t3640 + t2109*t3678 + t2171*t3788 + t2233*t3817 + t2241*t3888 + t2316*t4002 + t2380*t4088 + t2497*t4121 + t203*t3535*t427 - 0.1305*t203*t98;
  p_output1[14]=-0.047 + 0.0306*t3028 - 1.1312*t3106 - 0.049*t3391 + t2605*t3788 + t2668*t3817 + t2712*t3888 + t2730*t4002 + t2871*t4088 + t2993*t4121 - 0.004500000000000004*t427 + t3535*t98 + t3640*t511*t98 - 1.*t3678*t566*t98;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
