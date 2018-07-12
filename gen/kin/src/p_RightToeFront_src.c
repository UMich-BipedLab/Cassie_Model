/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeFront_src.h"

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
  double t120;
  double t1307;
  double t1728;
  double t1450;
  double t1755;
  double t220;
  double t279;
  double t491;
  double t796;
  double t1214;
  double t1602;
  double t1809;
  double t1846;
  double t2111;
  double t2328;
  double t2394;
  double t2577;
  double t123;
  double t2746;
  double t2788;
  double t2797;
  double t2914;
  double t2952;
  double t3008;
  double t3234;
  double t3342;
  double t3398;
  double t3418;
  double t3574;
  double t3577;
  double t3581;
  double t3586;
  double t3595;
  double t3739;
  double t3789;
  double t3884;
  double t3943;
  double t3946;
  double t4119;
  double t4187;
  double t4200;
  double t4230;
  double t4244;
  double t4282;
  double t4323;
  double t4342;
  double t4345;
  double t4360;
  double t4494;
  double t4503;
  double t4533;
  double t4544;
  double t4551;
  double t4556;
  double t4600;
  double t4632;
  double t4638;
  double t4656;
  double t4688;
  double t4690;
  double t4698;
  double t4708;
  double t4717;
  double t4725;
  double t4746;
  double t4769;
  double t4772;
  double t4783;
  double t4862;
  double t4863;
  double t4864;
  double t525;
  double t951;
  double t959;
  double t1251;
  double t1303;
  double t2124;
  double t2235;
  double t2310;
  double t2319;
  double t2652;
  double t2674;
  double t2735;
  double t4999;
  double t5001;
  double t5009;
  double t5016;
  double t5089;
  double t5090;
  double t3040;
  double t3267;
  double t3282;
  double t5119;
  double t5123;
  double t5135;
  double t3560;
  double t3563;
  double t3568;
  double t3767;
  double t3834;
  double t3875;
  double t5155;
  double t5162;
  double t5164;
  double t5218;
  double t5239;
  double t5248;
  double t4010;
  double t4022;
  double t4093;
  double t4305;
  double t4329;
  double t4333;
  double t5255;
  double t5288;
  double t5301;
  double t5315;
  double t5317;
  double t5325;
  double t4426;
  double t4469;
  double t4472;
  double t4576;
  double t4628;
  double t4630;
  double t5333;
  double t5337;
  double t5343;
  double t5353;
  double t5357;
  double t5361;
  double t4669;
  double t4674;
  double t4683;
  double t4741;
  double t4753;
  double t4764;
  double t5374;
  double t5378;
  double t5380;
  double t5404;
  double t5407;
  double t5411;
  double t4798;
  double t4827;
  double t4835;
  double t5428;
  double t5430;
  double t5431;
  double t5453;
  double t5459;
  double t5475;
  double t5616;
  double t5655;
  double t5656;
  double t5678;
  double t5686;
  double t5708;
  double t5797;
  double t5819;
  double t5822;
  double t5854;
  double t5863;
  double t5865;
  double t5877;
  double t5890;
  double t5902;
  double t5913;
  double t5914;
  double t5918;
  double t5926;
  double t5927;
  double t5929;
  double t5932;
  double t5951;
  double t5954;
  double t5961;
  double t5963;
  double t5966;
  double t5978;
  double t5990;
  double t5991;
  double t6003;
  double t6020;
  double t6026;
  t120 = Cos(var1[3]);
  t1307 = Cos(var1[5]);
  t1728 = Sin(var1[3]);
  t1450 = Sin(var1[4]);
  t1755 = Sin(var1[5]);
  t220 = Cos(var1[14]);
  t279 = -1.*t220;
  t491 = 1. + t279;
  t796 = Sin(var1[14]);
  t1214 = Sin(var1[13]);
  t1602 = t120*t1307*t1450;
  t1809 = t1728*t1755;
  t1846 = t1602 + t1809;
  t2111 = Cos(var1[13]);
  t2328 = -1.*t1307*t1728;
  t2394 = t120*t1450*t1755;
  t2577 = t2328 + t2394;
  t123 = Cos(var1[4]);
  t2746 = t1214*t1846;
  t2788 = t2111*t2577;
  t2797 = t2746 + t2788;
  t2914 = Cos(var1[15]);
  t2952 = -1.*t2914;
  t3008 = 1. + t2952;
  t3234 = Sin(var1[15]);
  t3342 = t2111*t1846;
  t3398 = -1.*t1214*t2577;
  t3418 = t3342 + t3398;
  t3574 = t220*t120*t123;
  t3577 = t796*t2797;
  t3581 = t3574 + t3577;
  t3586 = Cos(var1[16]);
  t3595 = -1.*t3586;
  t3739 = 1. + t3595;
  t3789 = Sin(var1[16]);
  t3884 = t3234*t3418;
  t3943 = t2914*t3581;
  t3946 = t3884 + t3943;
  t4119 = t2914*t3418;
  t4187 = -1.*t3234*t3581;
  t4200 = t4119 + t4187;
  t4230 = Cos(var1[17]);
  t4244 = -1.*t4230;
  t4282 = 1. + t4244;
  t4323 = Sin(var1[17]);
  t4342 = -1.*t3789*t3946;
  t4345 = t3586*t4200;
  t4360 = t4342 + t4345;
  t4494 = t3586*t3946;
  t4503 = t3789*t4200;
  t4533 = t4494 + t4503;
  t4544 = Cos(var1[18]);
  t4551 = -1.*t4544;
  t4556 = 1. + t4551;
  t4600 = Sin(var1[18]);
  t4632 = t4323*t4360;
  t4638 = t4230*t4533;
  t4656 = t4632 + t4638;
  t4688 = t4230*t4360;
  t4690 = -1.*t4323*t4533;
  t4698 = t4688 + t4690;
  t4708 = Cos(var1[19]);
  t4717 = -1.*t4708;
  t4725 = 1. + t4717;
  t4746 = Sin(var1[19]);
  t4769 = -1.*t4600*t4656;
  t4772 = t4544*t4698;
  t4783 = t4769 + t4772;
  t4862 = t4544*t4656;
  t4863 = t4600*t4698;
  t4864 = t4862 + t4863;
  t525 = -0.049*t491;
  t951 = -0.135*t796;
  t959 = 0. + t525 + t951;
  t1251 = 0.135*t1214;
  t1303 = 0. + t1251;
  t2124 = -1.*t2111;
  t2235 = 1. + t2124;
  t2310 = -0.135*t2235;
  t2319 = 0. + t2310;
  t2652 = -0.135*t491;
  t2674 = 0.049*t796;
  t2735 = 0. + t2652 + t2674;
  t4999 = t1307*t1728*t1450;
  t5001 = -1.*t120*t1755;
  t5009 = t4999 + t5001;
  t5016 = t120*t1307;
  t5089 = t1728*t1450*t1755;
  t5090 = t5016 + t5089;
  t3040 = -0.09*t3008;
  t3267 = 0.049*t3234;
  t3282 = 0. + t3040 + t3267;
  t5119 = t1214*t5009;
  t5123 = t2111*t5090;
  t5135 = t5119 + t5123;
  t3560 = -0.049*t3008;
  t3563 = -0.09*t3234;
  t3568 = 0. + t3560 + t3563;
  t3767 = -0.049*t3739;
  t3834 = -0.21*t3789;
  t3875 = 0. + t3767 + t3834;
  t5155 = t2111*t5009;
  t5162 = -1.*t1214*t5090;
  t5164 = t5155 + t5162;
  t5218 = t220*t123*t1728;
  t5239 = t796*t5135;
  t5248 = t5218 + t5239;
  t4010 = -0.21*t3739;
  t4022 = 0.049*t3789;
  t4093 = 0. + t4010 + t4022;
  t4305 = -0.2707*t4282;
  t4329 = 0.0016*t4323;
  t4333 = 0. + t4305 + t4329;
  t5255 = t3234*t5164;
  t5288 = t2914*t5248;
  t5301 = t5255 + t5288;
  t5315 = t2914*t5164;
  t5317 = -1.*t3234*t5248;
  t5325 = t5315 + t5317;
  t4426 = -0.0016*t4282;
  t4469 = -0.2707*t4323;
  t4472 = 0. + t4426 + t4469;
  t4576 = 0.0184*t4556;
  t4628 = -0.7055*t4600;
  t4630 = 0. + t4576 + t4628;
  t5333 = -1.*t3789*t5301;
  t5337 = t3586*t5325;
  t5343 = t5333 + t5337;
  t5353 = t3586*t5301;
  t5357 = t3789*t5325;
  t5361 = t5353 + t5357;
  t4669 = -0.7055*t4556;
  t4674 = -0.0184*t4600;
  t4683 = 0. + t4669 + t4674;
  t4741 = -1.1135*t4725;
  t4753 = 0.0216*t4746;
  t4764 = 0. + t4741 + t4753;
  t5374 = t4323*t5343;
  t5378 = t4230*t5361;
  t5380 = t5374 + t5378;
  t5404 = t4230*t5343;
  t5407 = -1.*t4323*t5361;
  t5411 = t5404 + t5407;
  t4798 = -0.0216*t4725;
  t4827 = -1.1135*t4746;
  t4835 = 0. + t4798 + t4827;
  t5428 = -1.*t4600*t5380;
  t5430 = t4544*t5411;
  t5431 = t5428 + t5430;
  t5453 = t4544*t5380;
  t5459 = t4600*t5411;
  t5475 = t5453 + t5459;
  t5616 = t123*t1307*t1214;
  t5655 = t2111*t123*t1755;
  t5656 = t5616 + t5655;
  t5678 = t2111*t123*t1307;
  t5686 = -1.*t123*t1214*t1755;
  t5708 = t5678 + t5686;
  t5797 = -1.*t220*t1450;
  t5819 = t796*t5656;
  t5822 = t5797 + t5819;
  t5854 = t3234*t5708;
  t5863 = t2914*t5822;
  t5865 = t5854 + t5863;
  t5877 = t2914*t5708;
  t5890 = -1.*t3234*t5822;
  t5902 = t5877 + t5890;
  t5913 = -1.*t3789*t5865;
  t5914 = t3586*t5902;
  t5918 = t5913 + t5914;
  t5926 = t3586*t5865;
  t5927 = t3789*t5902;
  t5929 = t5926 + t5927;
  t5932 = t4323*t5918;
  t5951 = t4230*t5929;
  t5954 = t5932 + t5951;
  t5961 = t4230*t5918;
  t5963 = -1.*t4323*t5929;
  t5966 = t5961 + t5963;
  t5978 = -1.*t4600*t5954;
  t5990 = t4544*t5966;
  t5991 = t5978 + t5990;
  t6003 = t4544*t5954;
  t6020 = t4600*t5966;
  t6026 = t6003 + t6020;
  p_output1[0]=0. + t1303*t1846 + t2319*t2577 + t2735*t2797 + t3282*t3418 + t3568*t3581 + t3875*t3946 + t4093*t4200 + t4333*t4360 + t4472*t4533 + t4630*t4656 + t4683*t4698 + t4764*t4783 + t4835*t4864 + 0.088451*(t4746*t4783 + t4708*t4864) - 1.062256*(t4708*t4783 - 1.*t4746*t4864) - 0.1305*(t220*t2797 - 1.*t120*t123*t796) + t120*t123*t959 + var1[0];
  p_output1[1]=0. + t1303*t5009 + t2319*t5090 + t2735*t5135 + t3282*t5164 + t3568*t5248 + t3875*t5301 + t4093*t5325 + t4333*t5343 + t4472*t5361 + t4630*t5380 + t4683*t5411 + t4764*t5431 + t4835*t5475 + 0.088451*(t4746*t5431 + t4708*t5475) - 1.062256*(t4708*t5431 - 1.*t4746*t5475) - 0.1305*(t220*t5135 - 1.*t123*t1728*t796) + t123*t1728*t959 + var1[1];
  p_output1[2]=0. + t123*t1303*t1307 + t123*t1755*t2319 + t2735*t5656 + t3282*t5708 + t3568*t5822 + t3875*t5865 + t4093*t5902 + t4333*t5918 + t4472*t5929 + t4630*t5954 + t4683*t5966 + t4764*t5991 + t4835*t6026 + 0.088451*(t4746*t5991 + t4708*t6026) - 1.062256*(t4708*t5991 - 1.*t4746*t6026) - 0.1305*(t220*t5656 + t1450*t796) - 1.*t1450*t959 + var1[2];
}



void p_RightToeFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
