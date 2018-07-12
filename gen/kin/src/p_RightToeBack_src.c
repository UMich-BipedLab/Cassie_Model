/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBack_src.h"

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
  double t171;
  double t1371;
  double t1699;
  double t1530;
  double t1763;
  double t200;
  double t342;
  double t350;
  double t430;
  double t919;
  double t1583;
  double t1986;
  double t1990;
  double t2164;
  double t2450;
  double t2502;
  double t2672;
  double t175;
  double t2885;
  double t2924;
  double t2936;
  double t2955;
  double t3026;
  double t3046;
  double t3089;
  double t3126;
  double t3204;
  double t3427;
  double t4041;
  double t4056;
  double t4073;
  double t4249;
  double t4294;
  double t4338;
  double t4348;
  double t4469;
  double t4560;
  double t4592;
  double t4741;
  double t4755;
  double t4757;
  double t4775;
  double t4792;
  double t4834;
  double t4852;
  double t5055;
  double t5129;
  double t5183;
  double t5279;
  double t5300;
  double t5316;
  double t5392;
  double t5397;
  double t5410;
  double t5432;
  double t5443;
  double t5447;
  double t5453;
  double t5518;
  double t5525;
  double t5529;
  double t5547;
  double t5548;
  double t5553;
  double t5559;
  double t5580;
  double t5596;
  double t5600;
  double t5609;
  double t5616;
  double t5621;
  double t409;
  double t502;
  double t534;
  double t939;
  double t1288;
  double t2166;
  double t2208;
  double t2311;
  double t2434;
  double t2766;
  double t2851;
  double t2865;
  double t5689;
  double t5692;
  double t5719;
  double t5729;
  double t5737;
  double t5739;
  double t3072;
  double t3095;
  double t3121;
  double t5753;
  double t5762;
  double t5768;
  double t3884;
  double t3900;
  double t3916;
  double t4341;
  double t4386;
  double t4465;
  double t5788;
  double t5792;
  double t5807;
  double t5843;
  double t5844;
  double t5859;
  double t4647;
  double t4657;
  double t4673;
  double t4850;
  double t4945;
  double t5015;
  double t5875;
  double t5879;
  double t5887;
  double t5916;
  double t5918;
  double t5933;
  double t5239;
  double t5249;
  double t5264;
  double t5415;
  double t5433;
  double t5442;
  double t5935;
  double t5941;
  double t5945;
  double t5949;
  double t5951;
  double t5958;
  double t5493;
  double t5508;
  double t5512;
  double t5555;
  double t5567;
  double t5578;
  double t5966;
  double t5968;
  double t5970;
  double t5981;
  double t5982;
  double t5989;
  double t5603;
  double t5604;
  double t5607;
  double t5998;
  double t6005;
  double t6006;
  double t6018;
  double t6023;
  double t6029;
  double t6095;
  double t6099;
  double t6101;
  double t6113;
  double t6117;
  double t6121;
  double t6154;
  double t6155;
  double t6157;
  double t6163;
  double t6172;
  double t6177;
  double t6180;
  double t6182;
  double t6183;
  double t6186;
  double t6188;
  double t6195;
  double t6205;
  double t6208;
  double t6212;
  double t6217;
  double t6219;
  double t6223;
  double t6237;
  double t6240;
  double t6242;
  double t6244;
  double t6245;
  double t6247;
  double t6265;
  double t6272;
  double t6273;
  t171 = Cos(var1[3]);
  t1371 = Cos(var1[5]);
  t1699 = Sin(var1[3]);
  t1530 = Sin(var1[4]);
  t1763 = Sin(var1[5]);
  t200 = Cos(var1[14]);
  t342 = -1.*t200;
  t350 = 1. + t342;
  t430 = Sin(var1[14]);
  t919 = Sin(var1[13]);
  t1583 = t171*t1371*t1530;
  t1986 = t1699*t1763;
  t1990 = t1583 + t1986;
  t2164 = Cos(var1[13]);
  t2450 = -1.*t1371*t1699;
  t2502 = t171*t1530*t1763;
  t2672 = t2450 + t2502;
  t175 = Cos(var1[4]);
  t2885 = t919*t1990;
  t2924 = t2164*t2672;
  t2936 = t2885 + t2924;
  t2955 = Cos(var1[15]);
  t3026 = -1.*t2955;
  t3046 = 1. + t3026;
  t3089 = Sin(var1[15]);
  t3126 = t2164*t1990;
  t3204 = -1.*t919*t2672;
  t3427 = t3126 + t3204;
  t4041 = t200*t171*t175;
  t4056 = t430*t2936;
  t4073 = t4041 + t4056;
  t4249 = Cos(var1[16]);
  t4294 = -1.*t4249;
  t4338 = 1. + t4294;
  t4348 = Sin(var1[16]);
  t4469 = t3089*t3427;
  t4560 = t2955*t4073;
  t4592 = t4469 + t4560;
  t4741 = t2955*t3427;
  t4755 = -1.*t3089*t4073;
  t4757 = t4741 + t4755;
  t4775 = Cos(var1[17]);
  t4792 = -1.*t4775;
  t4834 = 1. + t4792;
  t4852 = Sin(var1[17]);
  t5055 = -1.*t4348*t4592;
  t5129 = t4249*t4757;
  t5183 = t5055 + t5129;
  t5279 = t4249*t4592;
  t5300 = t4348*t4757;
  t5316 = t5279 + t5300;
  t5392 = Cos(var1[18]);
  t5397 = -1.*t5392;
  t5410 = 1. + t5397;
  t5432 = Sin(var1[18]);
  t5443 = t4852*t5183;
  t5447 = t4775*t5316;
  t5453 = t5443 + t5447;
  t5518 = t4775*t5183;
  t5525 = -1.*t4852*t5316;
  t5529 = t5518 + t5525;
  t5547 = Cos(var1[19]);
  t5548 = -1.*t5547;
  t5553 = 1. + t5548;
  t5559 = Sin(var1[19]);
  t5580 = -1.*t5432*t5453;
  t5596 = t5392*t5529;
  t5600 = t5580 + t5596;
  t5609 = t5392*t5453;
  t5616 = t5432*t5529;
  t5621 = t5609 + t5616;
  t409 = -0.049*t350;
  t502 = -0.135*t430;
  t534 = 0. + t409 + t502;
  t939 = 0.135*t919;
  t1288 = 0. + t939;
  t2166 = -1.*t2164;
  t2208 = 1. + t2166;
  t2311 = -0.135*t2208;
  t2434 = 0. + t2311;
  t2766 = -0.135*t350;
  t2851 = 0.049*t430;
  t2865 = 0. + t2766 + t2851;
  t5689 = t1371*t1699*t1530;
  t5692 = -1.*t171*t1763;
  t5719 = t5689 + t5692;
  t5729 = t171*t1371;
  t5737 = t1699*t1530*t1763;
  t5739 = t5729 + t5737;
  t3072 = -0.09*t3046;
  t3095 = 0.049*t3089;
  t3121 = 0. + t3072 + t3095;
  t5753 = t919*t5719;
  t5762 = t2164*t5739;
  t5768 = t5753 + t5762;
  t3884 = -0.049*t3046;
  t3900 = -0.09*t3089;
  t3916 = 0. + t3884 + t3900;
  t4341 = -0.049*t4338;
  t4386 = -0.21*t4348;
  t4465 = 0. + t4341 + t4386;
  t5788 = t2164*t5719;
  t5792 = -1.*t919*t5739;
  t5807 = t5788 + t5792;
  t5843 = t200*t175*t1699;
  t5844 = t430*t5768;
  t5859 = t5843 + t5844;
  t4647 = -0.21*t4338;
  t4657 = 0.049*t4348;
  t4673 = 0. + t4647 + t4657;
  t4850 = -0.2707*t4834;
  t4945 = 0.0016*t4852;
  t5015 = 0. + t4850 + t4945;
  t5875 = t3089*t5807;
  t5879 = t2955*t5859;
  t5887 = t5875 + t5879;
  t5916 = t2955*t5807;
  t5918 = -1.*t3089*t5859;
  t5933 = t5916 + t5918;
  t5239 = -0.0016*t4834;
  t5249 = -0.2707*t4852;
  t5264 = 0. + t5239 + t5249;
  t5415 = 0.0184*t5410;
  t5433 = -0.7055*t5432;
  t5442 = 0. + t5415 + t5433;
  t5935 = -1.*t4348*t5887;
  t5941 = t4249*t5933;
  t5945 = t5935 + t5941;
  t5949 = t4249*t5887;
  t5951 = t4348*t5933;
  t5958 = t5949 + t5951;
  t5493 = -0.7055*t5410;
  t5508 = -0.0184*t5432;
  t5512 = 0. + t5493 + t5508;
  t5555 = -1.1135*t5553;
  t5567 = 0.0216*t5559;
  t5578 = 0. + t5555 + t5567;
  t5966 = t4852*t5945;
  t5968 = t4775*t5958;
  t5970 = t5966 + t5968;
  t5981 = t4775*t5945;
  t5982 = -1.*t4852*t5958;
  t5989 = t5981 + t5982;
  t5603 = -0.0216*t5553;
  t5604 = -1.1135*t5559;
  t5607 = 0. + t5603 + t5604;
  t5998 = -1.*t5432*t5970;
  t6005 = t5392*t5989;
  t6006 = t5998 + t6005;
  t6018 = t5392*t5970;
  t6023 = t5432*t5989;
  t6029 = t6018 + t6023;
  t6095 = t175*t1371*t919;
  t6099 = t2164*t175*t1763;
  t6101 = t6095 + t6099;
  t6113 = t2164*t175*t1371;
  t6117 = -1.*t175*t919*t1763;
  t6121 = t6113 + t6117;
  t6154 = -1.*t200*t1530;
  t6155 = t430*t6101;
  t6157 = t6154 + t6155;
  t6163 = t3089*t6121;
  t6172 = t2955*t6157;
  t6177 = t6163 + t6172;
  t6180 = t2955*t6121;
  t6182 = -1.*t3089*t6157;
  t6183 = t6180 + t6182;
  t6186 = -1.*t4348*t6177;
  t6188 = t4249*t6183;
  t6195 = t6186 + t6188;
  t6205 = t4249*t6177;
  t6208 = t4348*t6183;
  t6212 = t6205 + t6208;
  t6217 = t4852*t6195;
  t6219 = t4775*t6212;
  t6223 = t6217 + t6219;
  t6237 = t4775*t6195;
  t6240 = -1.*t4852*t6212;
  t6242 = t6237 + t6240;
  t6244 = -1.*t5432*t6223;
  t6245 = t5392*t6242;
  t6247 = t6244 + t6245;
  t6265 = t5392*t6223;
  t6272 = t5432*t6242;
  t6273 = t6265 + t6272;
  p_output1[0]=0. + t1288*t1990 + t2434*t2672 + t2865*t2936 + t3121*t3427 + t3916*t4073 - 0.1305*(t200*t2936 - 1.*t171*t175*t430) + t4465*t4592 + t4673*t4757 + t5015*t5183 + t5264*t5316 + t171*t175*t534 + t5442*t5453 + t5512*t5529 + t5578*t5600 + t5607*t5621 - 0.027251*(t5559*t5600 + t5547*t5621) - 1.200144*(t5547*t5600 - 1.*t5559*t5621) + var1[0];
  p_output1[1]=0. + t1699*t175*t534 + t1288*t5719 + t2434*t5739 + t2865*t5768 - 0.1305*(-1.*t1699*t175*t430 + t200*t5768) + t3121*t5807 + t3916*t5859 + t4465*t5887 + t4673*t5933 + t5015*t5945 + t5264*t5958 + t5442*t5970 + t5512*t5989 + t5578*t6006 + t5607*t6029 - 0.027251*(t5559*t6006 + t5547*t6029) - 1.200144*(t5547*t6006 - 1.*t5559*t6029) + var1[1];
  p_output1[2]=0. + t1288*t1371*t175 + t175*t1763*t2434 - 1.*t1530*t534 + t2865*t6101 - 0.1305*(t1530*t430 + t200*t6101) + t3121*t6121 + t3916*t6157 + t4465*t6177 + t4673*t6183 + t5015*t6195 + t5264*t6212 + t5442*t6223 + t5512*t6242 + t5578*t6247 + t5607*t6273 - 0.027251*(t5559*t6247 + t5547*t6273) - 1.200144*(t5547*t6247 - 1.*t5559*t6273) + var1[2];
}



void p_RightToeBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
