/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBack_src.h"

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
  double t734;
  double t172;
  double t783;
  double t346;
  double t789;
  double t20;
  double t139;
  double t1107;
  double t1248;
  double t1375;
  double t529;
  double t822;
  double t845;
  double t859;
  double t874;
  double t925;
  double t1029;
  double t1192;
  double t1197;
  double t2800;
  double t2945;
  double t2979;
  double t3005;
  double t2809;
  double t2849;
  double t2869;
  double t3059;
  double t3191;
  double t2925;
  double t3067;
  double t3115;
  double t2799;
  double t3199;
  double t3200;
  double t3229;
  double t3291;
  double t3183;
  double t3241;
  double t3257;
  double t2765;
  double t3292;
  double t3313;
  double t3314;
  double t3357;
  double t3279;
  double t3326;
  double t3329;
  double t2762;
  double t3360;
  double t3388;
  double t3400;
  double t3551;
  double t3356;
  double t3477;
  double t3502;
  double t2728;
  double t3555;
  double t3602;
  double t3627;
  double t1552;
  double t1678;
  double t1776;
  double t1869;
  double t1978;
  double t1996;
  double t2036;
  double t2048;
  double t2071;
  double t4117;
  double t4161;
  double t4164;
  double t3985;
  double t4043;
  double t4053;
  double t4114;
  double t4168;
  double t4182;
  double t4205;
  double t4218;
  double t4229;
  double t4192;
  double t4282;
  double t4316;
  double t4327;
  double t4340;
  double t4352;
  double t4325;
  double t4356;
  double t4370;
  double t4411;
  double t4436;
  double t4446;
  double t4392;
  double t4512;
  double t4564;
  double t4611;
  double t4664;
  double t4680;
  double t2378;
  double t2384;
  double t2558;
  double t4890;
  double t4896;
  double t4919;
  double t4859;
  double t4874;
  double t4876;
  double t4888;
  double t4944;
  double t4950;
  double t4970;
  double t4985;
  double t5001;
  double t4951;
  double t5026;
  double t5032;
  double t5063;
  double t5092;
  double t5103;
  double t5059;
  double t5116;
  double t5121;
  double t5143;
  double t5154;
  double t5166;
  double t5139;
  double t5207;
  double t5217;
  double t5283;
  double t5323;
  double t5324;
  double t3539;
  double t3690;
  double t3780;
  double t3847;
  double t3880;
  double t3930;
  double t4601;
  double t4690;
  double t4707;
  double t4776;
  double t4780;
  double t4787;
  double t5222;
  double t5327;
  double t5341;
  double t5391;
  double t5396;
  double t5418;
  t734 = Cos(var1[3]);
  t172 = Cos(var1[5]);
  t783 = Sin(var1[4]);
  t346 = Sin(var1[3]);
  t789 = Sin(var1[5]);
  t20 = Cos(var1[7]);
  t139 = Cos(var1[6]);
  t1107 = Sin(var1[6]);
  t1248 = Cos(var1[4]);
  t1375 = Sin(var1[7]);
  t529 = -1.*t172*t346;
  t822 = t734*t783*t789;
  t845 = t529 + t822;
  t859 = t139*t845;
  t874 = t734*t172*t783;
  t925 = t346*t789;
  t1029 = t874 + t925;
  t1192 = t1029*t1107;
  t1197 = t859 + t1192;
  t2800 = Cos(var1[8]);
  t2945 = t139*t1029;
  t2979 = -1.*t845*t1107;
  t3005 = t2945 + t2979;
  t2809 = t734*t1248*t20;
  t2849 = t1197*t1375;
  t2869 = t2809 + t2849;
  t3059 = Sin(var1[8]);
  t3191 = Cos(var1[9]);
  t2925 = t2800*t2869;
  t3067 = t3005*t3059;
  t3115 = t2925 + t3067;
  t2799 = Sin(var1[9]);
  t3199 = t2800*t3005;
  t3200 = -1.*t2869*t3059;
  t3229 = t3199 + t3200;
  t3291 = Cos(var1[10]);
  t3183 = -1.*t2799*t3115;
  t3241 = t3191*t3229;
  t3257 = t3183 + t3241;
  t2765 = Sin(var1[10]);
  t3292 = t3191*t3115;
  t3313 = t2799*t3229;
  t3314 = t3292 + t3313;
  t3357 = Cos(var1[11]);
  t3279 = t2765*t3257;
  t3326 = t3291*t3314;
  t3329 = t3279 + t3326;
  t2762 = Sin(var1[11]);
  t3360 = t3291*t3257;
  t3388 = -1.*t2765*t3314;
  t3400 = t3360 + t3388;
  t3551 = Cos(var1[12]);
  t3356 = -1.*t2762*t3329;
  t3477 = t3357*t3400;
  t3502 = t3356 + t3477;
  t2728 = Sin(var1[12]);
  t3555 = t3357*t3329;
  t3602 = t2762*t3400;
  t3627 = t3555 + t3602;
  t1552 = t734*t172;
  t1678 = t346*t783*t789;
  t1776 = t1552 + t1678;
  t1869 = t139*t1776;
  t1978 = t172*t346*t783;
  t1996 = -1.*t734*t789;
  t2036 = t1978 + t1996;
  t2048 = t2036*t1107;
  t2071 = t1869 + t2048;
  t4117 = t139*t2036;
  t4161 = -1.*t1776*t1107;
  t4164 = t4117 + t4161;
  t3985 = t1248*t20*t346;
  t4043 = t2071*t1375;
  t4053 = t3985 + t4043;
  t4114 = t2800*t4053;
  t4168 = t4164*t3059;
  t4182 = t4114 + t4168;
  t4205 = t2800*t4164;
  t4218 = -1.*t4053*t3059;
  t4229 = t4205 + t4218;
  t4192 = -1.*t2799*t4182;
  t4282 = t3191*t4229;
  t4316 = t4192 + t4282;
  t4327 = t3191*t4182;
  t4340 = t2799*t4229;
  t4352 = t4327 + t4340;
  t4325 = t2765*t4316;
  t4356 = t3291*t4352;
  t4370 = t4325 + t4356;
  t4411 = t3291*t4316;
  t4436 = -1.*t2765*t4352;
  t4446 = t4411 + t4436;
  t4392 = -1.*t2762*t4370;
  t4512 = t3357*t4446;
  t4564 = t4392 + t4512;
  t4611 = t3357*t4370;
  t4664 = t2762*t4446;
  t4680 = t4611 + t4664;
  t2378 = t1248*t139*t789;
  t2384 = t1248*t172*t1107;
  t2558 = t2378 + t2384;
  t4890 = t1248*t172*t139;
  t4896 = -1.*t1248*t789*t1107;
  t4919 = t4890 + t4896;
  t4859 = -1.*t20*t783;
  t4874 = t2558*t1375;
  t4876 = t4859 + t4874;
  t4888 = t2800*t4876;
  t4944 = t4919*t3059;
  t4950 = t4888 + t4944;
  t4970 = t2800*t4919;
  t4985 = -1.*t4876*t3059;
  t5001 = t4970 + t4985;
  t4951 = -1.*t2799*t4950;
  t5026 = t3191*t5001;
  t5032 = t4951 + t5026;
  t5063 = t3191*t4950;
  t5092 = t2799*t5001;
  t5103 = t5063 + t5092;
  t5059 = t2765*t5032;
  t5116 = t3291*t5103;
  t5121 = t5059 + t5116;
  t5143 = t3291*t5032;
  t5154 = -1.*t2765*t5103;
  t5166 = t5143 + t5154;
  t5139 = -1.*t2762*t5121;
  t5207 = t3357*t5166;
  t5217 = t5139 + t5207;
  t5283 = t3357*t5121;
  t5323 = t2762*t5166;
  t5324 = t5283 + t5323;
  t3539 = t2728*t3502;
  t3690 = t3551*t3627;
  t3780 = t3539 + t3690;
  t3847 = t3551*t3502;
  t3880 = -1.*t2728*t3627;
  t3930 = t3847 + t3880;
  t4601 = t2728*t4564;
  t4690 = t3551*t4680;
  t4707 = t4601 + t4690;
  t4776 = t3551*t4564;
  t4780 = -1.*t2728*t4680;
  t4787 = t4776 + t4780;
  t5222 = t2728*t5217;
  t5327 = t3551*t5324;
  t5341 = t5222 + t5327;
  t5391 = t3551*t5217;
  t5396 = -1.*t2728*t5324;
  t5418 = t5391 + t5396;
  p_output1[0]=-1.*t1197*t20 + t1248*t1375*t734;
  p_output1[1]=-1.*t20*t2071 + t1248*t1375*t346;
  p_output1[2]=-1.*t20*t2558 - 1.*t1375*t783;
  p_output1[3]=0.642788*t3780 + 0.766044*t3930;
  p_output1[4]=0.642788*t4707 + 0.766044*t4787;
  p_output1[5]=0.642788*t5341 + 0.766044*t5418;
  p_output1[6]=-0.766044*t3780 + 0.642788*t3930;
  p_output1[7]=-0.766044*t4707 + 0.642788*t4787;
  p_output1[8]=-0.766044*t5341 + 0.642788*t5418;
}



void R_LeftToeBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
