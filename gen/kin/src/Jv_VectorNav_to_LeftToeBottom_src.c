/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_VectorNav_to_LeftToeBottom_src.h"

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
  double t80;
  double t183;
  double t364;
  double t529;
  double t530;
  double t531;
  double t585;
  double t846;
  double t1138;
  double t1148;
  double t1223;
  double t1554;
  double t1875;
  double t1936;
  double t1996;
  double t2369;
  double t2394;
  double t2496;
  double t2530;
  double t2555;
  double t2591;
  double t2688;
  double t2925;
  double t3021;
  double t3022;
  double t3237;
  double t3354;
  double t3406;
  double t3551;
  double t3644;
  double t3649;
  double t3808;
  double t3874;
  double t3907;
  double t3926;
  double t4052;
  double t4067;
  double t4244;
  double t4389;
  double t4452;
  double t4502;
  double t4785;
  double t4877;
  double t5007;
  double t5012;
  double t5237;
  double t5249;
  double t5276;
  double t264;
  double t327;
  double t339;
  double t495;
  double t502;
  double t559;
  double t662;
  double t680;
  double t888;
  double t939;
  double t1079;
  double t1504;
  double t1664;
  double t1773;
  double t2203;
  double t2205;
  double t2287;
  double t2602;
  double t2698;
  double t2704;
  double t6308;
  double t6316;
  double t6567;
  double t6706;
  double t6823;
  double t6827;
  double t3100;
  double t3205;
  double t3219;
  double t3653;
  double t3822;
  double t3850;
  double t7011;
  double t7027;
  double t7043;
  double t7082;
  double t7125;
  double t7188;
  double t3941;
  double t4033;
  double t4049;
  double t4782;
  double t4847;
  double t4863;
  double t7227;
  double t7228;
  double t7229;
  double t7234;
  double t7236;
  double t7237;
  double t5075;
  double t5119;
  double t5204;
  double t7242;
  double t7244;
  double t7246;
  double t7257;
  double t7259;
  double t7287;
  double t6130;
  double t6135;
  double t6609;
  double t6916;
  double t7081;
  double t7192;
  double t7231;
  double t7238;
  double t7256;
  double t7290;
  double t7293;
  double t7315;
  double t7316;
  double t7317;
  double t7327;
  double t7334;
  double t7339;
  double t7344;
  double t756;
  double t1121;
  double t2094;
  double t2525;
  double t3023;
  double t3531;
  double t3934;
  double t4273;
  double t5073;
  double t5348;
  double t5446;
  double t5468;
  double t5482;
  double t5492;
  double t5660;
  double t5688;
  double t5691;
  double t5848;
  double t7367;
  double t7372;
  double t7445;
  double t7450;
  double t7452;
  double t7466;
  double t7468;
  double t7474;
  double t7485;
  double t7487;
  double t7493;
  double t7498;
  double t7503;
  double t7506;
  double t7515;
  double t7531;
  double t7532;
  double t7547;
  double t7548;
  double t7557;
  double t7402;
  double t7429;
  double t7430;
  double t7436;
  double t7439;
  double t7440;
  double t7457;
  double t7479;
  double t7497;
  double t7511;
  double t7533;
  double t7574;
  double t7586;
  double t7594;
  double t7597;
  double t7599;
  double t7600;
  double t7603;
  double t7604;
  double t7616;
  double t7617;
  double t7373;
  double t7409;
  double t7633;
  double t7635;
  double t7651;
  double t7652;
  double t7656;
  double t7649;
  double t7650;
  double t7672;
  double t7675;
  double t7678;
  double t7684;
  double t7644;
  double t7645;
  double t7646;
  double t7702;
  double t7705;
  double t7708;
  double t7715;
  double t7716;
  double t7717;
  double t7696;
  double t7698;
  double t7700;
  double t7740;
  double t7741;
  double t7746;
  double t7755;
  double t7756;
  double t7759;
  double t7734;
  double t7735;
  double t7738;
  double t7780;
  double t7784;
  double t7785;
  double t7792;
  double t7793;
  double t7795;
  double t7775;
  double t7776;
  double t7777;
  double t7812;
  double t7814;
  double t7815;
  double t7820;
  double t7821;
  double t7822;
  double t7806;
  double t7809;
  double t7810;
  t80 = Sin(var1[0]);
  t183 = Cos(var1[1]);
  t364 = Sin(var1[1]);
  t529 = Cos(var1[2]);
  t530 = -1.*t529;
  t531 = 1. + t530;
  t585 = Sin(var1[2]);
  t846 = Cos(var1[0]);
  t1138 = Cos(var1[3]);
  t1148 = -1.*t1138;
  t1223 = 1. + t1148;
  t1554 = Sin(var1[3]);
  t1875 = t529*t80*t364;
  t1936 = t846*t585;
  t1996 = t1875 + t1936;
  t2369 = t846*t529;
  t2394 = -1.*t80*t364*t585;
  t2496 = t2369 + t2394;
  t2530 = Cos(var1[4]);
  t2555 = -1.*t2530;
  t2591 = 1. + t2555;
  t2688 = Sin(var1[4]);
  t2925 = -1.*t1554*t1996;
  t3021 = t1138*t2496;
  t3022 = t2925 + t3021;
  t3237 = t1138*t1996;
  t3354 = t1554*t2496;
  t3406 = t3237 + t3354;
  t3551 = Cos(var1[5]);
  t3644 = -1.*t3551;
  t3649 = 1. + t3644;
  t3808 = Sin(var1[5]);
  t3874 = t2688*t3022;
  t3907 = t2530*t3406;
  t3926 = t3874 + t3907;
  t4052 = t2530*t3022;
  t4067 = -1.*t2688*t3406;
  t4244 = t4052 + t4067;
  t4389 = Cos(var1[6]);
  t4452 = -1.*t4389;
  t4502 = 1. + t4452;
  t4785 = Sin(var1[6]);
  t4877 = -1.*t3808*t3926;
  t5007 = t3551*t4244;
  t5012 = t4877 + t5007;
  t5237 = t3551*t3926;
  t5249 = t3808*t4244;
  t5276 = t5237 + t5249;
  t264 = -1.*t183;
  t327 = 1. + t264;
  t339 = 0.135*t327;
  t495 = 0.049*t364;
  t502 = 0. + t339 + t495;
  t559 = -0.049*t531;
  t662 = -0.09*t585;
  t680 = 0. + t559 + t662;
  t888 = -0.09*t531;
  t939 = 0.049*t585;
  t1079 = 0. + t888 + t939;
  t1504 = -0.049*t1223;
  t1664 = -0.21*t1554;
  t1773 = 0. + t1504 + t1664;
  t2203 = -0.21*t1223;
  t2205 = 0.049*t1554;
  t2287 = 0. + t2203 + t2205;
  t2602 = -0.2707*t2591;
  t2698 = 0.0016*t2688;
  t2704 = 0. + t2602 + t2698;
  t6308 = t846*t529*t364;
  t6316 = -1.*t80*t585;
  t6567 = t6308 + t6316;
  t6706 = -1.*t529*t80;
  t6823 = -1.*t846*t364*t585;
  t6827 = t6706 + t6823;
  t3100 = -0.0016*t2591;
  t3205 = -0.2707*t2688;
  t3219 = 0. + t3100 + t3205;
  t3653 = 0.0184*t3649;
  t3822 = -0.7055*t3808;
  t3850 = 0. + t3653 + t3822;
  t7011 = -1.*t1554*t6567;
  t7027 = t1138*t6827;
  t7043 = t7011 + t7027;
  t7082 = t1138*t6567;
  t7125 = t1554*t6827;
  t7188 = t7082 + t7125;
  t3941 = -0.7055*t3649;
  t4033 = -0.0184*t3808;
  t4049 = 0. + t3941 + t4033;
  t4782 = -1.1135*t4502;
  t4847 = 0.0216*t4785;
  t4863 = 0. + t4782 + t4847;
  t7227 = t2688*t7043;
  t7228 = t2530*t7188;
  t7229 = t7227 + t7228;
  t7234 = t2530*t7043;
  t7236 = -1.*t2688*t7188;
  t7237 = t7234 + t7236;
  t5075 = -0.0216*t4502;
  t5119 = -1.1135*t4785;
  t5204 = 0. + t5075 + t5119;
  t7242 = -1.*t3808*t7229;
  t7244 = t3551*t7237;
  t7246 = t7242 + t7244;
  t7257 = t3551*t7229;
  t7259 = t3808*t7237;
  t7287 = t7257 + t7259;
  t6130 = -1.*t846*t364*t680;
  t6135 = t80*t1079;
  t6609 = -1.*t1773*t6567;
  t6916 = -1.*t2287*t6827;
  t7081 = -1.*t2704*t7043;
  t7192 = -1.*t3219*t7188;
  t7231 = -1.*t3850*t7229;
  t7238 = -1.*t4049*t7237;
  t7256 = -1.*t4863*t7246;
  t7290 = -1.*t5204*t7287;
  t7293 = t4785*t7246;
  t7315 = t4389*t7287;
  t7316 = t7293 + t7315;
  t7317 = -0.0306*t7316;
  t7327 = t4389*t7246;
  t7334 = -1.*t4785*t7287;
  t7339 = t7327 + t7334;
  t7344 = 1.1312*t7339;
  t756 = -1.*t80*t364*t680;
  t1121 = -1.*t846*t1079;
  t2094 = -1.*t1773*t1996;
  t2525 = -1.*t2287*t2496;
  t3023 = -1.*t2704*t3022;
  t3531 = -1.*t3219*t3406;
  t3934 = -1.*t3850*t3926;
  t4273 = -1.*t4049*t4244;
  t5073 = -1.*t4863*t5012;
  t5348 = -1.*t5204*t5276;
  t5446 = t4785*t5012;
  t5468 = t4389*t5276;
  t5482 = t5446 + t5468;
  t5492 = -0.0306*t5482;
  t5660 = t4389*t5012;
  t5688 = -1.*t4785*t5276;
  t5691 = t5660 + t5688;
  t5848 = 1.1312*t5691;
  t7367 = -1.*t846;
  t7372 = 0. + t7367;
  t7445 = -1.*t183*t529*t1554;
  t7450 = -1.*t1138*t183*t585;
  t7452 = t7445 + t7450;
  t7466 = t1138*t183*t529;
  t7468 = -1.*t183*t1554*t585;
  t7474 = t7466 + t7468;
  t7485 = t2688*t7452;
  t7487 = t2530*t7474;
  t7493 = t7485 + t7487;
  t7498 = t2530*t7452;
  t7503 = -1.*t2688*t7474;
  t7506 = t7498 + t7503;
  t7515 = -1.*t3808*t7493;
  t7531 = t3551*t7506;
  t7532 = t7515 + t7531;
  t7547 = t3551*t7493;
  t7548 = t3808*t7506;
  t7557 = t7547 + t7548;
  t7402 = 0. + t80;
  t7429 = 0.049*t183;
  t7430 = t183*t529*t1773;
  t7436 = 0.004500000000000004*t364;
  t7439 = t183*t680;
  t7440 = -1.*t183*t2287*t585;
  t7457 = t2704*t7452;
  t7479 = t3219*t7474;
  t7497 = t3850*t7493;
  t7511 = t4049*t7506;
  t7533 = t4863*t7532;
  t7574 = t5204*t7557;
  t7586 = t4785*t7532;
  t7594 = t4389*t7557;
  t7597 = t7586 + t7594;
  t7599 = 0.0306*t7597;
  t7600 = t4389*t7532;
  t7603 = -1.*t4785*t7557;
  t7604 = t7600 + t7603;
  t7616 = -1.1312*t7604;
  t7617 = 0. + t7429 + t7430 + t7436 + t7439 + t7440 + t7457 + t7479 + t7497 + t7511 + t7533 + t7574 + t7599 + t7616;
  t7373 = 0.004500000000000004*t846*t183;
  t7409 = 0.004500000000000004*t183*t80;
  t7633 = t183*t80;
  t7635 = 0. + t7633;
  t7651 = -0.049*t1996;
  t7652 = -0.09*t2496;
  t7656 = 0. + t7409 + t7651 + t2094 + t7652 + t2525 + t3023 + t3531 + t3934 + t4273 + t5073 + t5348 + t5492 + t5848;
  t7649 = t846*t183;
  t7650 = 0. + t7649;
  t7672 = 0.049*t183*t529;
  t7675 = -0.09*t183*t585;
  t7678 = 0. + t7672 + t7430 + t7436 + t7675 + t7440 + t7457 + t7479 + t7497 + t7511 + t7533 + t7574 + t7599 + t7616;
  t7684 = 0. + t364;
  t7644 = -0.049*t6567;
  t7645 = -0.09*t6827;
  t7646 = 0. + t7373 + t7644 + t6609 + t7645 + t6916 + t7081 + t7192 + t7231 + t7238 + t7256 + t7290 + t7317 + t7344;
  t7702 = -0.21*t3022;
  t7705 = -0.049*t3406;
  t7708 = 0. + t7702 + t3023 + t7705 + t3531 + t3934 + t4273 + t5073 + t5348 + t5492 + t5848;
  t7715 = 0.21*t7452;
  t7716 = 0.049*t7474;
  t7717 = 0. + t7715 + t7457 + t7716 + t7479 + t7497 + t7511 + t7533 + t7574 + t7599 + t7616;
  t7696 = -0.21*t7043;
  t7698 = -0.049*t7188;
  t7700 = 0. + t7696 + t7081 + t7698 + t7192 + t7231 + t7238 + t7256 + t7290 + t7317 + t7344;
  t7740 = -0.0016*t3926;
  t7741 = -0.2707*t4244;
  t7746 = 0. + t7740 + t3934 + t7741 + t4273 + t5073 + t5348 + t5492 + t5848;
  t7755 = 0.0016*t7493;
  t7756 = 0.2707*t7506;
  t7759 = 0. + t7755 + t7497 + t7756 + t7511 + t7533 + t7574 + t7599 + t7616;
  t7734 = -0.0016*t7229;
  t7735 = -0.2707*t7237;
  t7738 = 0. + t7734 + t7231 + t7735 + t7238 + t7256 + t7290 + t7317 + t7344;
  t7780 = -0.7055*t5012;
  t7784 = 0.0184*t5276;
  t7785 = 0. + t7780 + t5073 + t7784 + t5348 + t5492 + t5848;
  t7792 = 0.7055*t7532;
  t7793 = -0.0184*t7557;
  t7795 = 0. + t7792 + t7533 + t7793 + t7574 + t7599 + t7616;
  t7775 = -0.7055*t7246;
  t7776 = 0.0184*t7287;
  t7777 = 0. + t7775 + t7256 + t7776 + t7290 + t7317 + t7344;
  t7812 = -0.052199999999999996*t5482;
  t7814 = 0.01770000000000005*t5691;
  t7815 = 0. + t7812 + t7814;
  t7820 = 0.052199999999999996*t7597;
  t7821 = -0.01770000000000005*t7604;
  t7822 = 0. + t7820 + t7821;
  t7806 = -0.052199999999999996*t7316;
  t7809 = 0.01770000000000005*t7339;
  t7810 = 0. + t7806 + t7809;
  p_output1[0]=0.;
  p_output1[1]=0. - 1.*(0. + t1121 + t2094 + t2525 + t3023 + t3531 + t3934 + t4273 + t5073 + t5348 + t5492 + t5848 + t756 + 0.135*t80 - 0.1305*t183*t80 - 1.*t502*t80);
  p_output1[2]=0. + t6130 + t6135 + t6609 + t6916 + t7081 + t7192 + t7231 + t7238 + t7256 + t7290 + t7317 + t7344 + 0.135*t846 - 0.1305*t183*t846 - 1.*t502*t846;
  p_output1[3]=t7402*(0. + t1121 + t2094 + t2525 + t3023 + t3531 + t3934 + t4273 + t5073 + t5348 + t5492 + t5848 + t7409 + t756 - 0.049*t364*t80 - 0.09*t846) - 1.*t7372*(0. + t6130 + t6135 + t6609 + t6916 + t7081 + t7192 + t7231 + t7238 + t7256 + t7290 + t7317 + t7344 + t7373 + 0.09*t80 - 0.049*t364*t846);
  p_output1[4]=0. + t7372*t7617;
  p_output1[5]=0. - 1.*t7402*t7617;
  p_output1[6]=-1.*t7635*t7646 + t7650*t7656;
  p_output1[7]=t7635*t7678 - 1.*t7656*t7684;
  p_output1[8]=-1.*t7650*t7678 + t7646*t7684;
  p_output1[9]=-1.*t7635*t7700 + t7650*t7708;
  p_output1[10]=-1.*t7684*t7708 + t7635*t7717;
  p_output1[11]=t7684*t7700 - 1.*t7650*t7717;
  p_output1[12]=-1.*t7635*t7738 + t7650*t7746;
  p_output1[13]=-1.*t7684*t7746 + t7635*t7759;
  p_output1[14]=t7684*t7738 - 1.*t7650*t7759;
  p_output1[15]=-1.*t7635*t7777 + t7650*t7785;
  p_output1[16]=-1.*t7684*t7785 + t7635*t7795;
  p_output1[17]=t7684*t7777 - 1.*t7650*t7795;
  p_output1[18]=-1.*t7635*t7810 + t7650*t7815;
  p_output1[19]=-1.*t7684*t7815 + t7635*t7822;
  p_output1[20]=t7684*t7810 - 1.*t7650*t7822;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void Jv_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
