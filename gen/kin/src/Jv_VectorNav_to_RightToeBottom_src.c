/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_VectorNav_to_RightToeBottom_src.h"

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
  double t4;
  double t427;
  double t516;
  double t873;
  double t444;
  double t615;
  double t623;
  double t349;
  double t1082;
  double t1083;
  double t1377;
  double t1675;
  double t628;
  double t1474;
  double t1581;
  double t309;
  double t1677;
  double t1813;
  double t2140;
  double t2664;
  double t1641;
  double t2208;
  double t2415;
  double t187;
  double t2681;
  double t2723;
  double t2812;
  double t3395;
  double t179;
  double t5472;
  double t5480;
  double t5229;
  double t5250;
  double t5517;
  double t5582;
  double t5586;
  double t5589;
  double t5662;
  double t5721;
  double t5741;
  double t5746;
  double t4975;
  double t4998;
  double t5347;
  double t5424;
  double t5652;
  double t5755;
  double t5801;
  double t5876;
  double t5939;
  double t5981;
  double t6054;
  double t6067;
  double t4705;
  double t4727;
  double t5061;
  double t5117;
  double t5807;
  double t6101;
  double t6126;
  double t6180;
  double t6209;
  double t6296;
  double t6356;
  double t6358;
  double t4465;
  double t2593;
  double t2885;
  double t3005;
  double t3295;
  double t3564;
  double t3702;
  double t3807;
  double t3851;
  double t4029;
  double t4222;
  double t4357;
  double t4643;
  double t4661;
  double t4671;
  double t4687;
  double t4822;
  double t4843;
  double t6167;
  double t6369;
  double t6427;
  double t6525;
  double t6554;
  double t6588;
  double t6741;
  double t6862;
  double t6863;
  double t6870;
  double t6879;
  double t8794;
  double t9056;
  double t9076;
  double t8430;
  double t9092;
  double t9165;
  double t9187;
  double t9198;
  double t9183;
  double t9205;
  double t9206;
  double t9224;
  double t9233;
  double t9237;
  double t4198;
  double t4221;
  double t4358;
  double t4562;
  double t6909;
  double t6979;
  double t9214;
  double t9239;
  double t9240;
  double t9245;
  double t9255;
  double t9263;
  double t9264;
  double t9274;
  double t9275;
  double t9284;
  double t9285;
  double t7055;
  double t7105;
  double t7151;
  double t7225;
  double t7287;
  double t7539;
  double t7617;
  double t7767;
  double t7777;
  double t7871;
  double t7006;
  double t7044;
  double t41;
  double t9341;
  double t9298;
  double t9307;
  double t9313;
  double t9315;
  double t9322;
  double t7334;
  double t7352;
  double t7444;
  double t9326;
  double t8067;
  t4 = Cos(var1[8]);
  t427 = Cos(var1[13]);
  t516 = Sin(var1[13]);
  t873 = Cos(var1[12]);
  t444 = 0.642788*t427;
  t615 = -0.766044*t516;
  t623 = t444 + t615;
  t349 = Sin(var1[12]);
  t1082 = -0.766044*t427;
  t1083 = -0.642788*t516;
  t1377 = t1082 + t1083;
  t1675 = Cos(var1[11]);
  t628 = -1.*t349*t623;
  t1474 = t873*t1377;
  t1581 = 0. + t628 + t1474;
  t309 = Sin(var1[11]);
  t1677 = t873*t623;
  t1813 = t349*t1377;
  t2140 = 0. + t1677 + t1813;
  t2664 = Cos(var1[10]);
  t1641 = t309*t1581;
  t2208 = t1675*t2140;
  t2415 = 0. + t1641 + t2208;
  t187 = Sin(var1[10]);
  t2681 = t1675*t1581;
  t2723 = -1.*t309*t2140;
  t2812 = 0. + t2681 + t2723;
  t3395 = Cos(var1[9]);
  t179 = Sin(var1[9]);
  t5472 = -1.*t427;
  t5480 = 1. + t5472;
  t5229 = -1.*t873;
  t5250 = 1. + t5229;
  t5517 = 1.0335*t5480;
  t5582 = 1.0512*t427;
  t5586 = -0.052199999999999996*t516;
  t5589 = 0. + t5517 + t5582 + t5586;
  t5662 = -0.0532*t5480;
  t5721 = -0.001*t427;
  t5741 = 0.017699999999999827*t516;
  t5746 = 0. + t5662 + t5721 + t5741;
  t4975 = -1.*t1675;
  t4998 = 1. + t4975;
  t5347 = -0.0132*t5250;
  t5424 = -0.6255*t349;
  t5652 = t349*t5589;
  t5755 = t873*t5746;
  t5801 = 0. + t5347 + t5424 + t5652 + t5755;
  t5876 = 0.6255*t5250;
  t5939 = -0.0132*t349;
  t5981 = t873*t5589;
  t6054 = -1.*t349*t5746;
  t6067 = 0. + t5876 + t5939 + t5981 + t6054;
  t4705 = -1.*t2664;
  t4727 = 1. + t4705;
  t5061 = 0.1907*t4998;
  t5117 = -0.0332*t309;
  t5807 = -1.*t309*t5801;
  t6101 = t1675*t6067;
  t6126 = 0. + t5061 + t5117 + t5807 + t6101;
  t6180 = -0.0332*t4998;
  t6209 = -0.1907*t309;
  t6296 = t1675*t5801;
  t6356 = t309*t6067;
  t6358 = 0. + t6180 + t6209 + t6296 + t6356;
  t4465 = Sin(var1[8]);
  t2593 = -1.*t187*t2415;
  t2885 = t2664*t2812;
  t3005 = 0. + t2593 + t2885;
  t3295 = t179*t3005;
  t3564 = t2664*t2415;
  t3702 = t187*t2812;
  t3807 = 0. + t3564 + t3702;
  t3851 = t3395*t3807;
  t4029 = 0. + t3295 + t3851;
  t4222 = -1.*t4;
  t4357 = 1. + t4222;
  t4643 = -1.*t3395;
  t4661 = 1. + t4643;
  t4671 = -0.0806*t4661;
  t4687 = -0.01*t179;
  t4822 = -0.0806*t4727;
  t4843 = -0.13*t187;
  t6167 = t187*t6126;
  t6369 = t2664*t6358;
  t6427 = 0. + t4822 + t4843 + t6167 + t6369;
  t6525 = t3395*t6427;
  t6554 = 0.13*t4727;
  t6588 = -0.0806*t187;
  t6741 = t2664*t6126;
  t6862 = -1.*t187*t6358;
  t6863 = 0. + t6554 + t6588 + t6741 + t6862;
  t6870 = t179*t6863;
  t6879 = 0. + t4671 + t4687 + t6525 + t6870;
  t8794 = -0.642788*t427;
  t9056 = 0.766044*t516;
  t9076 = t8794 + t9056;
  t8430 = -1.*t349*t1377;
  t9092 = t873*t9076;
  t9165 = 0. + t8430 + t9092;
  t9187 = t349*t9076;
  t9198 = 0. + t1474 + t9187;
  t9183 = t309*t9165;
  t9205 = t1675*t9198;
  t9206 = 0. + t9183 + t9205;
  t9224 = t1675*t9165;
  t9233 = -1.*t309*t9198;
  t9237 = 0. + t9224 + t9233;
  t4198 = t4*t4029;
  t4221 = 0. + t4198;
  t4358 = -0.0806*t4357;
  t4562 = -0.004500000000000004*t4465;
  t6909 = t4*t6879;
  t6979 = 0. + t4358 + t4562 + t6909;
  t9214 = -1.*t187*t9206;
  t9239 = t2664*t9237;
  t9240 = 0. + t9214 + t9239;
  t9245 = t179*t9240;
  t9255 = t2664*t9206;
  t9263 = t187*t9237;
  t9264 = 0. + t9255 + t9263;
  t9274 = t3395*t9264;
  t9275 = 0. + t9245 + t9274;
  t9284 = t4*t9275;
  t9285 = 0. + t9284;
  t7055 = 0.135*t4357;
  t7105 = 0.1305*t4;
  t7151 = -0.0806*t4465;
  t7225 = -1.*t4465*t6879;
  t7287 = 0. + t7055 + t7105 + t7151 + t7225;
  t7539 = 0.01*t4661;
  t7617 = -0.0806*t179;
  t7767 = -1.*t179*t6427;
  t7777 = t3395*t6863;
  t7871 = 0. + t7539 + t7617 + t7767 + t7777;
  t7006 = -1.*t4465*t4029;
  t7044 = 0. + t7006;
  t41 = 0. + t4;
  t9341 = 0. + t4465;
  t9298 = -1.*t4465*t9275;
  t9307 = 0. + t9298;
  t9313 = t3395*t9240;
  t9315 = -1.*t179*t9264;
  t9322 = 0. + t9313 + t9315;
  t7334 = t3395*t3005;
  t7352 = -1.*t179*t3807;
  t7444 = 0. + t7334 + t7352;
  t9326 = t7871*t9322;
  t8067 = -1.*t7444*t7871;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0. - 0.08*t41 + (-1.*t4221*t6979 - 1.*t7044*t7287 + t8067)*t9285 + t4221*(t6979*t9285 + t7287*t9307 + t9326);
  p_output1[22]=-0.08*t7044 - 0.135*t7444 + (-1.*t6979*t9285 - 1.*t7287*t9307 - 1.*t7871*t9322)*t9341 + t9285*(0. + t41*t7287 + t6979*t9341);
  p_output1[23]=-0.08*t9307 - 0.135*t9322 + (t4221*t6979 + t7044*t7287 + t7444*t7871)*t9341 + t4221*(0. - 1.*t41*t7287 - 1.*t6979*t9341);
  p_output1[24]=-0.0806 - 1.*(0. - 1.*t4029*t6879 + t8067)*t9322 - 1.*t7444*(0. + t6879*t9275 + t9326);
  p_output1[25]=0. - 0.135*t4029 - 0.1305*t9322;
  p_output1[26]=0. + 0.1305*t7444 - 0.135*t9275;
  p_output1[27]=0.;
  p_output1[28]=0. - 0.0806*t3005 - 0.01*t3807 - 1.*t6863*t9240 - 1.*t6427*t9264;
  p_output1[29]=0. + t3807*t6427 + t3005*t6863 - 0.0806*t9240 - 0.01*t9264;
  p_output1[30]=0.;
  p_output1[31]=0. - 0.13*t2415 - 0.0806*t2812 - 1.*t6358*t9206 - 1.*t6126*t9237;
  p_output1[32]=0. + t2812*t6126 + t2415*t6358 - 0.13*t9206 - 0.0806*t9237;
  p_output1[33]=0.;
  p_output1[34]=0. - 0.0332*t1581 - 0.1907*t2140 - 1.*t6067*t9165 - 1.*t5801*t9198;
  p_output1[35]=0. + t2140*t5801 + t1581*t6067 - 0.0332*t9165 - 0.1907*t9198;
  p_output1[36]=0.;
  p_output1[37]=0. - 0.0132*t1377 - 1.*t1377*t5746 - 0.6255*t623 - 1.*t5589*t9076;
  p_output1[38]=0. - 0.6255*t1377 + t1377*t5589 + t5746*t623 - 0.0132*t9076;
  p_output1[39]=0.;
  p_output1[40]=0.05136484439999989;
  p_output1[41]=0.01999455480000023;
}



void Jv_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
