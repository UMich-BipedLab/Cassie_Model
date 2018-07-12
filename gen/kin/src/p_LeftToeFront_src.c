/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeFront_src.h"

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
  double t988;
  double t743;
  double t1265;
  double t833;
  double t1441;
  double t325;
  double t862;
  double t1499;
  double t1549;
  double t1756;
  double t1821;
  double t1840;
  double t1932;
  double t2279;
  double t2336;
  double t2402;
  double t2522;
  double t2248;
  double t2269;
  double t2271;
  double t2692;
  double t3041;
  double t3055;
  double t3081;
  double t3150;
  double t3004;
  double t3007;
  double t3008;
  double t3349;
  double t3393;
  double t3410;
  double t3638;
  double t3687;
  double t3783;
  double t3923;
  double t4007;
  double t4040;
  double t4067;
  double t4143;
  double t4149;
  double t4152;
  double t4246;
  double t4275;
  double t4284;
  double t4471;
  double t4491;
  double t4526;
  double t4537;
  double t4652;
  double t4681;
  double t4713;
  double t4729;
  double t4734;
  double t4794;
  double t4803;
  double t4847;
  double t4856;
  double t4858;
  double t4890;
  double t4902;
  double t4907;
  double t5007;
  double t5025;
  double t5035;
  double t5047;
  double t5073;
  double t5080;
  double t5095;
  double t5170;
  double t5177;
  double t5201;
  double t403;
  double t419;
  double t555;
  double t735;
  double t2128;
  double t2224;
  double t5268;
  double t5269;
  double t5276;
  double t5278;
  double t5280;
  double t5281;
  double t2445;
  double t2538;
  double t2579;
  double t2717;
  double t2770;
  double t2805;
  double t5291;
  double t5292;
  double t5297;
  double t3088;
  double t3248;
  double t3256;
  double t3437;
  double t3472;
  double t3515;
  double t3903;
  double t3954;
  double t3988;
  double t5336;
  double t5348;
  double t5363;
  double t5365;
  double t5376;
  double t5381;
  double t4084;
  double t4112;
  double t4131;
  double t4452;
  double t4475;
  double t4479;
  double t5396;
  double t5402;
  double t5403;
  double t5419;
  double t5440;
  double t5441;
  double t4558;
  double t4594;
  double t4646;
  double t4801;
  double t4807;
  double t4840;
  double t5450;
  double t5452;
  double t5455;
  double t5460;
  double t5462;
  double t5477;
  double t4870;
  double t4873;
  double t4875;
  double t5041;
  double t5053;
  double t5070;
  double t5486;
  double t5505;
  double t5513;
  double t5533;
  double t5541;
  double t5550;
  double t5126;
  double t5133;
  double t5141;
  double t5555;
  double t5558;
  double t5566;
  double t5588;
  double t5589;
  double t5597;
  double t5646;
  double t5647;
  double t5648;
  double t5781;
  double t5787;
  double t5791;
  double t5806;
  double t5809;
  double t5814;
  double t5850;
  double t5853;
  double t5856;
  double t5875;
  double t5878;
  double t5880;
  double t5893;
  double t5894;
  double t5918;
  double t5937;
  double t5987;
  double t5993;
  double t6012;
  double t6014;
  double t6017;
  double t6025;
  double t6040;
  double t6041;
  double t6091;
  double t6092;
  double t6096;
  double t6124;
  double t6125;
  double t6140;
  t988 = Cos(var1[3]);
  t743 = Cos(var1[5]);
  t1265 = Sin(var1[4]);
  t833 = Sin(var1[3]);
  t1441 = Sin(var1[5]);
  t325 = Cos(var1[6]);
  t862 = -1.*t743*t833;
  t1499 = t988*t1265*t1441;
  t1549 = t862 + t1499;
  t1756 = t988*t743*t1265;
  t1821 = t833*t1441;
  t1840 = t1756 + t1821;
  t1932 = Sin(var1[6]);
  t2279 = Cos(var1[7]);
  t2336 = -1.*t2279;
  t2402 = 1. + t2336;
  t2522 = Sin(var1[7]);
  t2248 = t325*t1549;
  t2269 = t1840*t1932;
  t2271 = t2248 + t2269;
  t2692 = Cos(var1[4]);
  t3041 = Cos(var1[8]);
  t3055 = -1.*t3041;
  t3081 = 1. + t3055;
  t3150 = Sin(var1[8]);
  t3004 = t988*t2692*t2279;
  t3007 = t2271*t2522;
  t3008 = t3004 + t3007;
  t3349 = t325*t1840;
  t3393 = -1.*t1549*t1932;
  t3410 = t3349 + t3393;
  t3638 = Cos(var1[9]);
  t3687 = -1.*t3638;
  t3783 = 1. + t3687;
  t3923 = Sin(var1[9]);
  t4007 = t3041*t3008;
  t4040 = t3410*t3150;
  t4067 = t4007 + t4040;
  t4143 = t3041*t3410;
  t4149 = -1.*t3008*t3150;
  t4152 = t4143 + t4149;
  t4246 = Cos(var1[10]);
  t4275 = -1.*t4246;
  t4284 = 1. + t4275;
  t4471 = Sin(var1[10]);
  t4491 = -1.*t3923*t4067;
  t4526 = t3638*t4152;
  t4537 = t4491 + t4526;
  t4652 = t3638*t4067;
  t4681 = t3923*t4152;
  t4713 = t4652 + t4681;
  t4729 = Cos(var1[11]);
  t4734 = -1.*t4729;
  t4794 = 1. + t4734;
  t4803 = Sin(var1[11]);
  t4847 = t4471*t4537;
  t4856 = t4246*t4713;
  t4858 = t4847 + t4856;
  t4890 = t4246*t4537;
  t4902 = -1.*t4471*t4713;
  t4907 = t4890 + t4902;
  t5007 = Cos(var1[12]);
  t5025 = -1.*t5007;
  t5035 = 1. + t5025;
  t5047 = Sin(var1[12]);
  t5073 = -1.*t4803*t4858;
  t5080 = t4729*t4907;
  t5095 = t5073 + t5080;
  t5170 = t4729*t4858;
  t5177 = t4803*t4907;
  t5201 = t5170 + t5177;
  t403 = -1.*t325;
  t419 = 1. + t403;
  t555 = 0.135*t419;
  t735 = 0. + t555;
  t2128 = -0.135*t1932;
  t2224 = 0. + t2128;
  t5268 = t988*t743;
  t5269 = t833*t1265*t1441;
  t5276 = t5268 + t5269;
  t5278 = t743*t833*t1265;
  t5280 = -1.*t988*t1441;
  t5281 = t5278 + t5280;
  t2445 = 0.135*t2402;
  t2538 = 0.049*t2522;
  t2579 = 0. + t2445 + t2538;
  t2717 = -0.049*t2402;
  t2770 = 0.135*t2522;
  t2805 = 0. + t2717 + t2770;
  t5291 = t325*t5276;
  t5292 = t5281*t1932;
  t5297 = t5291 + t5292;
  t3088 = -0.049*t3081;
  t3248 = -0.09*t3150;
  t3256 = 0. + t3088 + t3248;
  t3437 = -0.09*t3081;
  t3472 = 0.049*t3150;
  t3515 = 0. + t3437 + t3472;
  t3903 = -0.049*t3783;
  t3954 = -0.21*t3923;
  t3988 = 0. + t3903 + t3954;
  t5336 = t2692*t2279*t833;
  t5348 = t5297*t2522;
  t5363 = t5336 + t5348;
  t5365 = t325*t5281;
  t5376 = -1.*t5276*t1932;
  t5381 = t5365 + t5376;
  t4084 = -0.21*t3783;
  t4112 = 0.049*t3923;
  t4131 = 0. + t4084 + t4112;
  t4452 = -0.2707*t4284;
  t4475 = 0.0016*t4471;
  t4479 = 0. + t4452 + t4475;
  t5396 = t3041*t5363;
  t5402 = t5381*t3150;
  t5403 = t5396 + t5402;
  t5419 = t3041*t5381;
  t5440 = -1.*t5363*t3150;
  t5441 = t5419 + t5440;
  t4558 = -0.0016*t4284;
  t4594 = -0.2707*t4471;
  t4646 = 0. + t4558 + t4594;
  t4801 = 0.0184*t4794;
  t4807 = -0.7055*t4803;
  t4840 = 0. + t4801 + t4807;
  t5450 = -1.*t3923*t5403;
  t5452 = t3638*t5441;
  t5455 = t5450 + t5452;
  t5460 = t3638*t5403;
  t5462 = t3923*t5441;
  t5477 = t5460 + t5462;
  t4870 = -0.7055*t4794;
  t4873 = -0.0184*t4803;
  t4875 = 0. + t4870 + t4873;
  t5041 = -1.1135*t5035;
  t5053 = 0.0216*t5047;
  t5070 = 0. + t5041 + t5053;
  t5486 = t4471*t5455;
  t5505 = t4246*t5477;
  t5513 = t5486 + t5505;
  t5533 = t4246*t5455;
  t5541 = -1.*t4471*t5477;
  t5550 = t5533 + t5541;
  t5126 = -0.0216*t5035;
  t5133 = -1.1135*t5047;
  t5141 = 0. + t5126 + t5133;
  t5555 = -1.*t4803*t5513;
  t5558 = t4729*t5550;
  t5566 = t5555 + t5558;
  t5588 = t4729*t5513;
  t5589 = t4803*t5550;
  t5597 = t5588 + t5589;
  t5646 = t2692*t325*t1441;
  t5647 = t2692*t743*t1932;
  t5648 = t5646 + t5647;
  t5781 = -1.*t2279*t1265;
  t5787 = t5648*t2522;
  t5791 = t5781 + t5787;
  t5806 = t2692*t743*t325;
  t5809 = -1.*t2692*t1441*t1932;
  t5814 = t5806 + t5809;
  t5850 = t3041*t5791;
  t5853 = t5814*t3150;
  t5856 = t5850 + t5853;
  t5875 = t3041*t5814;
  t5878 = -1.*t5791*t3150;
  t5880 = t5875 + t5878;
  t5893 = -1.*t3923*t5856;
  t5894 = t3638*t5880;
  t5918 = t5893 + t5894;
  t5937 = t3638*t5856;
  t5987 = t3923*t5880;
  t5993 = t5937 + t5987;
  t6012 = t4471*t5918;
  t6014 = t4246*t5993;
  t6017 = t6012 + t6014;
  t6025 = t4246*t5918;
  t6040 = -1.*t4471*t5993;
  t6041 = t6025 + t6040;
  t6091 = -1.*t4803*t6017;
  t6092 = t4729*t6041;
  t6096 = t6091 + t6092;
  t6124 = t4729*t6017;
  t6125 = t4803*t6041;
  t6140 = t6124 + t6125;
  p_output1[0]=0. + t1840*t2224 + t2271*t2579 + t3008*t3256 + t3410*t3515 + t3988*t4067 + t4131*t4152 + t4479*t4537 + t4646*t4713 + t4840*t4858 + t4875*t4907 + t5070*t5095 + t5141*t5201 + 0.088451*(t5047*t5095 + t5007*t5201) - 1.062256*(t5007*t5095 - 1.*t5047*t5201) + t1549*t735 + t2692*t2805*t988 + 0.1305*(t2271*t2279 - 1.*t2522*t2692*t988) + var1[0];
  p_output1[1]=0. + t2224*t5281 + t2579*t5297 + t3256*t5363 + t3515*t5381 + t3988*t5403 + t4131*t5441 + t4479*t5455 + t4646*t5477 + t4840*t5513 + t4875*t5550 + t5070*t5566 + t5141*t5597 + 0.088451*(t5047*t5566 + t5007*t5597) - 1.062256*(t5007*t5566 - 1.*t5047*t5597) + t5276*t735 + t2692*t2805*t833 + 0.1305*(t2279*t5297 - 1.*t2522*t2692*t833) + var1[1];
  p_output1[2]=0. - 1.*t1265*t2805 + t2579*t5648 + 0.1305*(t1265*t2522 + t2279*t5648) + t3256*t5791 + t3515*t5814 + t3988*t5856 + t4131*t5880 + t4479*t5918 + t4646*t5993 + t4840*t6017 + t4875*t6041 + t5070*t6096 + t5141*t6140 + 0.088451*(t5047*t6096 + t5007*t6140) - 1.062256*(t5007*t6096 - 1.*t5047*t6140) + t1441*t2692*t735 + t2224*t2692*t743 + var1[2];
}



void p_LeftToeFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
