/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_right_src.h"

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
  double t559;
  double t828;
  double t557;
  double t697;
  double t909;
  double t1069;
  double t823;
  double t943;
  double t947;
  double t548;
  double t1079;
  double t1103;
  double t1338;
  double t1409;
  double t997;
  double t1349;
  double t1357;
  double t501;
  double t1432;
  double t1482;
  double t1542;
  double t1582;
  double t1599;
  double t1639;
  double t1690;
  double t1746;
  double t1762;
  double t1810;
  double t1408;
  double t1784;
  double t1789;
  double t469;
  double t1826;
  double t1830;
  double t1836;
  double t2020;
  double t1803;
  double t1958;
  double t1962;
  double t459;
  double t2040;
  double t2052;
  double t2153;
  double t381;
  double t2524;
  double t2531;
  double t2567;
  double t2739;
  double t2764;
  double t2784;
  double t2657;
  double t2806;
  double t2817;
  double t2883;
  double t2935;
  double t2961;
  double t3028;
  double t3069;
  double t3070;
  double t2880;
  double t3073;
  double t3081;
  double t3092;
  double t3097;
  double t3160;
  double t2278;
  double t3087;
  double t3168;
  double t3189;
  double t3232;
  double t3241;
  double t3242;
  double t3272;
  double t3274;
  double t3282;
  double t3288;
  double t3289;
  double t3290;
  double t3296;
  double t3300;
  double t3303;
  double t3287;
  double t3309;
  double t3310;
  double t3318;
  double t3321;
  double t3328;
  double t3315;
  double t3335;
  double t3337;
  double t3345;
  double t3350;
  double t3377;
  double t1977;
  double t2246;
  double t2263;
  double t2311;
  double t2313;
  double t2322;
  double t3222;
  double t3257;
  double t3258;
  double t3263;
  double t3266;
  double t3267;
  double t3338;
  double t3393;
  double t3425;
  double t3453;
  double t3470;
  double t3475;
  double t3926;
  double t3944;
  double t4075;
  double t4081;
  double t4158;
  double t4159;
  double t4217;
  double t4225;
  double t4268;
  double t4270;
  double t3532;
  double t3538;
  double t3562;
  double t3957;
  double t3958;
  double t3960;
  double t3963;
  double t3992;
  double t4008;
  double t4013;
  double t4017;
  double t4021;
  double t4034;
  double t4047;
  double t4053;
  double t4082;
  double t4095;
  double t4106;
  double t4133;
  double t4136;
  double t4145;
  double t4163;
  double t4167;
  double t4169;
  double t4177;
  double t4207;
  double t4210;
  double t4238;
  double t4242;
  double t4244;
  double t4249;
  double t4250;
  double t4255;
  double t4271;
  double t4273;
  double t4276;
  double t4288;
  double t4297;
  double t4301;
  double t3584;
  double t3603;
  double t3607;
  double t3662;
  double t3668;
  double t3677;
  t559 = Cos(var1[5]);
  t828 = Sin(var1[3]);
  t557 = Cos(var1[3]);
  t697 = Sin(var1[4]);
  t909 = Sin(var1[5]);
  t1069 = Sin(var1[13]);
  t823 = t557*t559*t697;
  t943 = t828*t909;
  t947 = t823 + t943;
  t548 = Cos(var1[13]);
  t1079 = -1.*t559*t828;
  t1103 = t557*t697*t909;
  t1338 = t1079 + t1103;
  t1409 = Cos(var1[15]);
  t997 = t548*t947;
  t1349 = -1.*t1069*t1338;
  t1357 = t997 + t1349;
  t501 = Sin(var1[15]);
  t1432 = Cos(var1[14]);
  t1482 = Cos(var1[4]);
  t1542 = t1432*t557*t1482;
  t1582 = Sin(var1[14]);
  t1599 = t1069*t947;
  t1639 = t548*t1338;
  t1690 = t1599 + t1639;
  t1746 = t1582*t1690;
  t1762 = t1542 + t1746;
  t1810 = Cos(var1[16]);
  t1408 = t501*t1357;
  t1784 = t1409*t1762;
  t1789 = t1408 + t1784;
  t469 = Sin(var1[16]);
  t1826 = t1409*t1357;
  t1830 = -1.*t501*t1762;
  t1836 = t1826 + t1830;
  t2020 = Cos(var1[17]);
  t1803 = -1.*t469*t1789;
  t1958 = t1810*t1836;
  t1962 = t1803 + t1958;
  t459 = Sin(var1[17]);
  t2040 = t1810*t1789;
  t2052 = t469*t1836;
  t2153 = t2040 + t2052;
  t381 = Sin(var1[18]);
  t2524 = t559*t828*t697;
  t2531 = -1.*t557*t909;
  t2567 = t2524 + t2531;
  t2739 = t557*t559;
  t2764 = t828*t697*t909;
  t2784 = t2739 + t2764;
  t2657 = t548*t2567;
  t2806 = -1.*t1069*t2784;
  t2817 = t2657 + t2806;
  t2883 = t1432*t1482*t828;
  t2935 = t1069*t2567;
  t2961 = t548*t2784;
  t3028 = t2935 + t2961;
  t3069 = t1582*t3028;
  t3070 = t2883 + t3069;
  t2880 = t501*t2817;
  t3073 = t1409*t3070;
  t3081 = t2880 + t3073;
  t3092 = t1409*t2817;
  t3097 = -1.*t501*t3070;
  t3160 = t3092 + t3097;
  t2278 = Cos(var1[18]);
  t3087 = -1.*t469*t3081;
  t3168 = t1810*t3160;
  t3189 = t3087 + t3168;
  t3232 = t1810*t3081;
  t3241 = t469*t3160;
  t3242 = t3232 + t3241;
  t3272 = t548*t1482*t559;
  t3274 = -1.*t1482*t1069*t909;
  t3282 = t3272 + t3274;
  t3288 = -1.*t1432*t697;
  t3289 = t1482*t559*t1069;
  t3290 = t548*t1482*t909;
  t3296 = t3289 + t3290;
  t3300 = t1582*t3296;
  t3303 = t3288 + t3300;
  t3287 = t501*t3282;
  t3309 = t1409*t3303;
  t3310 = t3287 + t3309;
  t3318 = t1409*t3282;
  t3321 = -1.*t501*t3303;
  t3328 = t3318 + t3321;
  t3315 = -1.*t469*t3310;
  t3335 = t1810*t3328;
  t3337 = t3315 + t3335;
  t3345 = t1810*t3310;
  t3350 = t469*t3328;
  t3377 = t3345 + t3350;
  t1977 = t459*t1962;
  t2246 = t2020*t2153;
  t2263 = t1977 + t2246;
  t2311 = t2020*t1962;
  t2313 = -1.*t459*t2153;
  t2322 = t2311 + t2313;
  t3222 = t459*t3189;
  t3257 = t2020*t3242;
  t3258 = t3222 + t3257;
  t3263 = t2020*t3189;
  t3266 = -1.*t459*t3242;
  t3267 = t3263 + t3266;
  t3338 = t459*t3337;
  t3393 = t2020*t3377;
  t3425 = t3338 + t3393;
  t3453 = t2020*t3337;
  t3470 = -1.*t459*t3377;
  t3475 = t3453 + t3470;
  t3926 = -1.*t1432;
  t3944 = 1. + t3926;
  t4075 = -1.*t1409;
  t4081 = 1. + t4075;
  t4158 = -1.*t1810;
  t4159 = 1. + t4158;
  t4217 = -1.*t2020;
  t4225 = 1. + t4217;
  t4268 = -1.*t2278;
  t4270 = 1. + t4268;
  t3532 = t2278*t2263;
  t3538 = t381*t2322;
  t3562 = t3532 + t3538;
  t3957 = -0.049*t3944;
  t3958 = -0.135*t1582;
  t3960 = 0. + t3957 + t3958;
  t3963 = 0.135*t1069;
  t3992 = 0. + t3963;
  t4008 = -1.*t548;
  t4013 = 1. + t4008;
  t4017 = -0.135*t4013;
  t4021 = 0. + t4017;
  t4034 = -0.135*t3944;
  t4047 = 0.049*t1582;
  t4053 = 0. + t4034 + t4047;
  t4082 = -0.09*t4081;
  t4095 = 0.049*t501;
  t4106 = 0. + t4082 + t4095;
  t4133 = -0.049*t4081;
  t4136 = -0.09*t501;
  t4145 = 0. + t4133 + t4136;
  t4163 = -0.049*t4159;
  t4167 = -0.21*t469;
  t4169 = 0. + t4163 + t4167;
  t4177 = -0.21*t4159;
  t4207 = 0.049*t469;
  t4210 = 0. + t4177 + t4207;
  t4238 = -0.2707*t4225;
  t4242 = 0.0016*t459;
  t4244 = 0. + t4238 + t4242;
  t4249 = -0.0016*t4225;
  t4250 = -0.2707*t459;
  t4255 = 0. + t4249 + t4250;
  t4271 = 0.0184*t4270;
  t4273 = -0.7055*t381;
  t4276 = 0. + t4271 + t4273;
  t4288 = -0.7055*t4270;
  t4297 = -0.0184*t381;
  t4301 = 0. + t4288 + t4297;
  t3584 = t2278*t3258;
  t3603 = t381*t3267;
  t3607 = t3584 + t3603;
  t3662 = t2278*t3425;
  t3668 = t381*t3475;
  t3677 = t3662 + t3668;
  p_output1[0]=-1.*t2278*t2322 + t2263*t381;
  p_output1[1]=-1.*t2278*t3267 + t3258*t381;
  p_output1[2]=-1.*t2278*t3475 + t3425*t381;
  p_output1[3]=0.;
  p_output1[4]=t3562;
  p_output1[5]=t3607;
  p_output1[6]=t3677;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1432*t1690 + t1482*t1582*t557;
  p_output1[9]=-1.*t1432*t3028 + t1482*t1582*t828;
  p_output1[10]=-1.*t1432*t3296 - 1.*t1582*t697;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t3562 - 0.7055*(t2278*t2322 - 1.*t2263*t381) + t1338*t4021 + t1690*t4053 + t1357*t4106 + t1762*t4145 + t1789*t4169 + t1836*t4210 + t1962*t4244 + t2153*t4255 + t2263*t4276 + t2322*t4301 + t1482*t3960*t557 - 0.1305*(t1432*t1690 - 1.*t1482*t1582*t557) + t3992*t947 + var1[0];
  p_output1[13]=0. + 0.0184*t3607 - 0.7055*(t2278*t3267 - 1.*t3258*t381) + t2567*t3992 + t2784*t4021 + t3028*t4053 + t2817*t4106 + t3070*t4145 + t3081*t4169 + t3160*t4210 + t3189*t4244 + t3242*t4255 + t3258*t4276 + t3267*t4301 + t1482*t3960*t828 - 0.1305*(t1432*t3028 - 1.*t1482*t1582*t828) + var1[1];
  p_output1[14]=0. + 0.0184*t3677 - 0.7055*(t2278*t3475 - 1.*t3425*t381) + t3296*t4053 + t3282*t4106 + t3303*t4145 + t3310*t4169 + t3328*t4210 + t3337*t4244 + t3377*t4255 + t3425*t4276 + t3475*t4301 + t1482*t3992*t559 - 1.*t3960*t697 - 0.1305*(t1432*t3296 + t1582*t697) + t1482*t4021*t909 + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
