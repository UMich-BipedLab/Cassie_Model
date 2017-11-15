/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_src.h"

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
  double t772;
  double t617;
  double t797;
  double t699;
  double t908;
  double t316;
  double t376;
  double t1238;
  double t1282;
  double t1368;
  double t737;
  double t997;
  double t1167;
  double t1183;
  double t1207;
  double t1211;
  double t1235;
  double t1242;
  double t1249;
  double t2285;
  double t2400;
  double t2407;
  double t2495;
  double t2287;
  double t2322;
  double t2381;
  double t2509;
  double t2601;
  double t2384;
  double t2515;
  double t2541;
  double t2283;
  double t2610;
  double t2648;
  double t2671;
  double t2711;
  double t2556;
  double t2681;
  double t2688;
  double t2251;
  double t2717;
  double t2722;
  double t2735;
  double t2835;
  double t2702;
  double t2769;
  double t2783;
  double t2148;
  double t2838;
  double t2840;
  double t2842;
  double t2879;
  double t2796;
  double t2843;
  double t2847;
  double t2124;
  double t2890;
  double t2891;
  double t2932;
  double t1655;
  double t1687;
  double t1688;
  double t1711;
  double t1731;
  double t1747;
  double t1783;
  double t1827;
  double t1830;
  double t2995;
  double t3002;
  double t3009;
  double t2972;
  double t2973;
  double t2979;
  double t2994;
  double t3029;
  double t3034;
  double t3039;
  double t3041;
  double t3042;
  double t3037;
  double t3045;
  double t3049;
  double t3069;
  double t3074;
  double t3075;
  double t3066;
  double t3077;
  double t3165;
  double t3190;
  double t3199;
  double t3201;
  double t3169;
  double t3207;
  double t3269;
  double t3279;
  double t3280;
  double t3288;
  double t1939;
  double t1981;
  double t2056;
  double t3366;
  double t3367;
  double t3381;
  double t3336;
  double t3341;
  double t3342;
  double t3356;
  double t3415;
  double t3422;
  double t3450;
  double t3455;
  double t3461;
  double t3434;
  double t3465;
  double t3486;
  double t3499;
  double t3500;
  double t3511;
  double t3491;
  double t3512;
  double t3537;
  double t3551;
  double t3556;
  double t3559;
  double t3548;
  double t3568;
  double t3573;
  double t3580;
  double t3622;
  double t3623;
  double t2863;
  double t2938;
  double t2943;
  double t2953;
  double t2956;
  double t2962;
  double t3273;
  double t3289;
  double t3290;
  double t3303;
  double t3304;
  double t3308;
  double t3575;
  double t3624;
  double t3630;
  double t3658;
  double t3672;
  double t3675;
  t772 = Cos(var1[3]);
  t617 = Cos(var1[5]);
  t797 = Sin(var1[4]);
  t699 = Sin(var1[3]);
  t908 = Sin(var1[5]);
  t316 = Cos(var1[7]);
  t376 = Cos(var1[6]);
  t1238 = Sin(var1[6]);
  t1282 = Cos(var1[4]);
  t1368 = Sin(var1[7]);
  t737 = -1.*t617*t699;
  t997 = t772*t797*t908;
  t1167 = t737 + t997;
  t1183 = t376*t1167;
  t1207 = t772*t617*t797;
  t1211 = t699*t908;
  t1235 = t1207 + t1211;
  t1242 = t1235*t1238;
  t1249 = t1183 + t1242;
  t2285 = Cos(var1[8]);
  t2400 = t376*t1235;
  t2407 = -1.*t1167*t1238;
  t2495 = t2400 + t2407;
  t2287 = t772*t1282*t316;
  t2322 = t1249*t1368;
  t2381 = t2287 + t2322;
  t2509 = Sin(var1[8]);
  t2601 = Cos(var1[9]);
  t2384 = t2285*t2381;
  t2515 = t2495*t2509;
  t2541 = t2384 + t2515;
  t2283 = Sin(var1[9]);
  t2610 = t2285*t2495;
  t2648 = -1.*t2381*t2509;
  t2671 = t2610 + t2648;
  t2711 = Cos(var1[10]);
  t2556 = -1.*t2283*t2541;
  t2681 = t2601*t2671;
  t2688 = t2556 + t2681;
  t2251 = Sin(var1[10]);
  t2717 = t2601*t2541;
  t2722 = t2283*t2671;
  t2735 = t2717 + t2722;
  t2835 = Cos(var1[11]);
  t2702 = t2251*t2688;
  t2769 = t2711*t2735;
  t2783 = t2702 + t2769;
  t2148 = Sin(var1[11]);
  t2838 = t2711*t2688;
  t2840 = -1.*t2251*t2735;
  t2842 = t2838 + t2840;
  t2879 = Cos(var1[12]);
  t2796 = -1.*t2148*t2783;
  t2843 = t2835*t2842;
  t2847 = t2796 + t2843;
  t2124 = Sin(var1[12]);
  t2890 = t2835*t2783;
  t2891 = t2148*t2842;
  t2932 = t2890 + t2891;
  t1655 = t772*t617;
  t1687 = t699*t797*t908;
  t1688 = t1655 + t1687;
  t1711 = t376*t1688;
  t1731 = t617*t699*t797;
  t1747 = -1.*t772*t908;
  t1783 = t1731 + t1747;
  t1827 = t1783*t1238;
  t1830 = t1711 + t1827;
  t2995 = t376*t1783;
  t3002 = -1.*t1688*t1238;
  t3009 = t2995 + t3002;
  t2972 = t1282*t316*t699;
  t2973 = t1830*t1368;
  t2979 = t2972 + t2973;
  t2994 = t2285*t2979;
  t3029 = t3009*t2509;
  t3034 = t2994 + t3029;
  t3039 = t2285*t3009;
  t3041 = -1.*t2979*t2509;
  t3042 = t3039 + t3041;
  t3037 = -1.*t2283*t3034;
  t3045 = t2601*t3042;
  t3049 = t3037 + t3045;
  t3069 = t2601*t3034;
  t3074 = t2283*t3042;
  t3075 = t3069 + t3074;
  t3066 = t2251*t3049;
  t3077 = t2711*t3075;
  t3165 = t3066 + t3077;
  t3190 = t2711*t3049;
  t3199 = -1.*t2251*t3075;
  t3201 = t3190 + t3199;
  t3169 = -1.*t2148*t3165;
  t3207 = t2835*t3201;
  t3269 = t3169 + t3207;
  t3279 = t2835*t3165;
  t3280 = t2148*t3201;
  t3288 = t3279 + t3280;
  t1939 = t1282*t376*t908;
  t1981 = t1282*t617*t1238;
  t2056 = t1939 + t1981;
  t3366 = t1282*t617*t376;
  t3367 = -1.*t1282*t908*t1238;
  t3381 = t3366 + t3367;
  t3336 = -1.*t316*t797;
  t3341 = t2056*t1368;
  t3342 = t3336 + t3341;
  t3356 = t2285*t3342;
  t3415 = t3381*t2509;
  t3422 = t3356 + t3415;
  t3450 = t2285*t3381;
  t3455 = -1.*t3342*t2509;
  t3461 = t3450 + t3455;
  t3434 = -1.*t2283*t3422;
  t3465 = t2601*t3461;
  t3486 = t3434 + t3465;
  t3499 = t2601*t3422;
  t3500 = t2283*t3461;
  t3511 = t3499 + t3500;
  t3491 = t2251*t3486;
  t3512 = t2711*t3511;
  t3537 = t3491 + t3512;
  t3551 = t2711*t3486;
  t3556 = -1.*t2251*t3511;
  t3559 = t3551 + t3556;
  t3548 = -1.*t2148*t3537;
  t3568 = t2835*t3559;
  t3573 = t3548 + t3568;
  t3580 = t2835*t3537;
  t3622 = t2148*t3559;
  t3623 = t3580 + t3622;
  t2863 = t2124*t2847;
  t2938 = t2879*t2932;
  t2943 = t2863 + t2938;
  t2953 = t2879*t2847;
  t2956 = -1.*t2124*t2932;
  t2962 = t2953 + t2956;
  t3273 = t2124*t3269;
  t3289 = t2879*t3288;
  t3290 = t3273 + t3289;
  t3303 = t2879*t3269;
  t3304 = -1.*t2124*t3288;
  t3308 = t3303 + t3304;
  t3575 = t2124*t3573;
  t3624 = t2879*t3623;
  t3630 = t3575 + t3624;
  t3658 = t2879*t3573;
  t3672 = -1.*t2124*t3623;
  t3675 = t3658 + t3672;
  p_output1[0]=-1.*t1249*t316 + t1282*t1368*t772;
  p_output1[1]=-1.*t1830*t316 + t1282*t1368*t699;
  p_output1[2]=-1.*t2056*t316 - 1.*t1368*t797;
  p_output1[3]=0.642788*t2943 + 0.766044*t2962;
  p_output1[4]=0.642788*t3290 + 0.766044*t3308;
  p_output1[5]=0.642788*t3630 + 0.766044*t3675;
  p_output1[6]=-0.766044*t2943 + 0.642788*t2962;
  p_output1[7]=-0.766044*t3290 + 0.642788*t3308;
  p_output1[8]=-0.766044*t3630 + 0.642788*t3675;
}



void R_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
