/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t16;
  double t64;
  double t554;
  double t249;
  double t1227;
  double t1451;
  double t1169;
  double t2006;
  double t2011;
  double t2042;
  double t1385;
  double t1766;
  double t1894;
  double t2191;
  double t882;
  double t2346;
  double t2402;
  double t2481;
  double t1953;
  double t2235;
  double t2244;
  double t2497;
  double t731;
  double t2567;
  double t2638;
  double t2668;
  double t2316;
  double t2504;
  double t2529;
  double t2669;
  double t714;
  double t2832;
  double t2885;
  double t2993;
  double t2536;
  double t2698;
  double t2700;
  double t3010;
  double t3393;
  double t3410;
  double t3412;
  double t3331;
  double t3340;
  double t3370;
  double t3543;
  double t3623;
  double t3637;
  double t3372;
  double t3496;
  double t3522;
  double t3728;
  double t3754;
  double t3776;
  double t3540;
  double t3651;
  double t3672;
  double t3884;
  double t3902;
  double t3949;
  double t3680;
  double t3791;
  double t3803;
  double t4347;
  double t4366;
  double t4386;
  double t4256;
  double t4291;
  double t4319;
  double t4478;
  double t4511;
  double t4520;
  double t4341;
  double t4395;
  double t4420;
  double t4573;
  double t4626;
  double t4633;
  double t4464;
  double t4527;
  double t4532;
  double t2723;
  double t3080;
  double t3087;
  double t3143;
  double t3202;
  double t3214;
  double t3821;
  double t3951;
  double t3962;
  double t4018;
  double t4110;
  double t4114;
  double t4562;
  double t4671;
  double t4697;
  double t4748;
  double t4754;
  double t4769;
  t16 = Cos(var1[8]);
  t64 = Sin(var1[7]);
  t554 = Sin(var1[8]);
  t249 = Cos(var1[7]);
  t1227 = Cos(var1[9]);
  t1451 = Sin(var1[9]);
  t1169 = Cos(var1[10]);
  t2006 = t249*t1227;
  t2011 = -1.*t64*t554*t1451;
  t2042 = t2006 + t2011;
  t1385 = t1227*t64*t554;
  t1766 = t249*t1451;
  t1894 = t1385 + t1766;
  t2191 = Sin(var1[10]);
  t882 = Cos(var1[11]);
  t2346 = t1169*t2042;
  t2402 = -1.*t1894*t2191;
  t2481 = t2346 + t2402;
  t1953 = t1169*t1894;
  t2235 = t2042*t2191;
  t2244 = t1953 + t2235;
  t2497 = Sin(var1[11]);
  t731 = Cos(var1[12]);
  t2567 = t882*t2481;
  t2638 = -1.*t2244*t2497;
  t2668 = t2567 + t2638;
  t2316 = t882*t2244;
  t2504 = t2481*t2497;
  t2529 = t2316 + t2504;
  t2669 = Sin(var1[12]);
  t714 = Cos(var1[13]);
  t2832 = t731*t2668;
  t2885 = -1.*t2529*t2669;
  t2993 = t2832 + t2885;
  t2536 = t731*t2529;
  t2698 = t2668*t2669;
  t2700 = t2536 + t2698;
  t3010 = Sin(var1[13]);
  t3393 = -1.*t1227*t64;
  t3410 = -1.*t249*t554*t1451;
  t3412 = t3393 + t3410;
  t3331 = t249*t1227*t554;
  t3340 = -1.*t64*t1451;
  t3370 = t3331 + t3340;
  t3543 = t1169*t3412;
  t3623 = -1.*t3370*t2191;
  t3637 = t3543 + t3623;
  t3372 = t1169*t3370;
  t3496 = t3412*t2191;
  t3522 = t3372 + t3496;
  t3728 = t882*t3637;
  t3754 = -1.*t3522*t2497;
  t3776 = t3728 + t3754;
  t3540 = t882*t3522;
  t3651 = t3637*t2497;
  t3672 = t3540 + t3651;
  t3884 = t731*t3776;
  t3902 = -1.*t3672*t2669;
  t3949 = t3884 + t3902;
  t3680 = t731*t3672;
  t3791 = t3776*t2669;
  t3803 = t3680 + t3791;
  t4347 = -1.*t16*t1169*t1451;
  t4366 = -1.*t16*t1227*t2191;
  t4386 = t4347 + t4366;
  t4256 = t16*t1227*t1169;
  t4291 = -1.*t16*t1451*t2191;
  t4319 = t4256 + t4291;
  t4478 = t882*t4386;
  t4511 = -1.*t4319*t2497;
  t4520 = t4478 + t4511;
  t4341 = t882*t4319;
  t4395 = t4386*t2497;
  t4420 = t4341 + t4395;
  t4573 = t731*t4520;
  t4626 = -1.*t4420*t2669;
  t4633 = t4573 + t4626;
  t4464 = t731*t4420;
  t4527 = t4520*t2669;
  t4532 = t4464 + t4527;
  t2723 = t714*t2700;
  t3080 = t2993*t3010;
  t3087 = t2723 + t3080;
  t3143 = t714*t2993;
  t3202 = -1.*t2700*t3010;
  t3214 = t3143 + t3202;
  t3821 = t714*t3803;
  t3951 = t3949*t3010;
  t3962 = t3821 + t3951;
  t4018 = t714*t3949;
  t4110 = -1.*t3803*t3010;
  t4114 = t4018 + t4110;
  t4562 = t714*t4532;
  t4671 = t4633*t3010;
  t4697 = t4562 + t4671;
  t4748 = t714*t4633;
  t4754 = -1.*t4532*t3010;
  t4769 = t4748 + t4754;
  p_output1[0]=0. + t16*t64;
  p_output1[1]=0. - 1.*t16*t249;
  p_output1[2]=0. + t554;
  p_output1[3]=0. - 0.642788*t3087 - 0.766044*t3214;
  p_output1[4]=0. + 0.642788*t3962 + 0.766044*t4114;
  p_output1[5]=0. + 0.642788*t4697 + 0.766044*t4769;
  p_output1[6]=0. + 0.766044*t3087 - 0.642788*t3214;
  p_output1[7]=0. - 0.766044*t3962 + 0.642788*t4114;
  p_output1[8]=0. - 0.766044*t4697 + 0.642788*t4769;
}



void R_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
