/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:24:37 GMT-04:00
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
  double t1814;
  double t1984;
  double t2341;
  double t1877;
  double t2026;
  double t2156;
  double t1713;
  double t2378;
  double t2447;
  double t2503;
  double t2737;
  double t2275;
  double t2566;
  double t2624;
  double t935;
  double t2949;
  double t2953;
  double t3011;
  double t3143;
  double t2688;
  double t3059;
  double t3089;
  double t794;
  double t3183;
  double t3353;
  double t3485;
  double t143;
  double t168;
  double t3633;
  double t5958;
  double t6021;
  double t5778;
  double t5794;
  double t6067;
  double t6092;
  double t6105;
  double t6268;
  double t6312;
  double t6330;
  double t6347;
  double t6352;
  double t5439;
  double t5544;
  double t5883;
  double t5955;
  double t6309;
  double t6415;
  double t6474;
  double t6689;
  double t6702;
  double t6776;
  double t6909;
  double t6910;
  double t5118;
  double t5310;
  double t5562;
  double t5660;
  double t6580;
  double t6965;
  double t6987;
  double t7021;
  double t7030;
  double t7032;
  double t7073;
  double t7075;
  double t4801;
  double t3141;
  double t3493;
  double t3523;
  double t3612;
  double t3796;
  double t4012;
  double t4036;
  double t4276;
  double t4421;
  double t4605;
  double t4748;
  double t4963;
  double t4971;
  double t4990;
  double t5104;
  double t5327;
  double t5352;
  double t7001;
  double t7156;
  double t7186;
  double t7303;
  double t7330;
  double t7334;
  double t7356;
  double t7368;
  double t7402;
  double t7431;
  double t7443;
  double t7762;
  double t7777;
  double t7784;
  double t7755;
  double t7806;
  double t7815;
  double t7847;
  double t7851;
  double t7836;
  double t7866;
  double t7871;
  double t7883;
  double t7893;
  double t7894;
  double t4428;
  double t4525;
  double t4789;
  double t4955;
  double t7485;
  double t7493;
  double t7881;
  double t7909;
  double t7918;
  double t7921;
  double t7930;
  double t7931;
  double t7945;
  double t7958;
  double t7978;
  double t7984;
  double t7988;
  double t7548;
  double t7577;
  double t7590;
  double t7629;
  double t7638;
  double t7684;
  double t7685;
  double t7687;
  double t7709;
  double t7723;
  double t8057;
  double t7522;
  double t7533;
  double t7656;
  double t7665;
  double t7678;
  double t8016;
  double t8018;
  double t8020;
  double t8061;
  double t8066;
  double t8003;
  double t8006;
  double t8030;
  double t7724;
  t1814 = Cos(var1[13]);
  t1984 = Sin(var1[13]);
  t2341 = Cos(var1[12]);
  t1877 = 0.642788*t1814;
  t2026 = -0.766044*t1984;
  t2156 = t1877 + t2026;
  t1713 = Sin(var1[12]);
  t2378 = -0.766044*t1814;
  t2447 = -0.642788*t1984;
  t2503 = t2378 + t2447;
  t2737 = Cos(var1[11]);
  t2275 = -1.*t1713*t2156;
  t2566 = t2341*t2503;
  t2624 = 0. + t2275 + t2566;
  t935 = Sin(var1[11]);
  t2949 = t2341*t2156;
  t2953 = t1713*t2503;
  t3011 = 0. + t2949 + t2953;
  t3143 = Cos(var1[10]);
  t2688 = t935*t2624;
  t3059 = t2737*t3011;
  t3089 = 0. + t2688 + t3059;
  t794 = Sin(var1[10]);
  t3183 = t2737*t2624;
  t3353 = -1.*t935*t3011;
  t3485 = 0. + t3183 + t3353;
  t143 = Cos(var1[8]);
  t168 = Cos(var1[9]);
  t3633 = Sin(var1[9]);
  t5958 = -1.*t1814;
  t6021 = 1. + t5958;
  t5778 = -1.*t2341;
  t5794 = 1. + t5778;
  t6067 = -0.0216*t6021;
  t6092 = 0.0306*t1814;
  t6105 = 0.01770000000000005*t1984;
  t6268 = 0. + t6067 + t6092 + t6105;
  t6312 = -1.1135*t6021;
  t6330 = -1.1312*t1814;
  t6347 = 0.052199999999999996*t1984;
  t6352 = 0. + t6312 + t6330 + t6347;
  t5439 = -1.*t2737;
  t5544 = 1. + t5439;
  t5883 = -0.7055*t5794;
  t5955 = -0.0184*t1713;
  t6309 = t1713*t6268;
  t6415 = t2341*t6352;
  t6474 = 0. + t5883 + t5955 + t6309 + t6415;
  t6689 = 0.0184*t5794;
  t6702 = -0.7055*t1713;
  t6776 = t2341*t6268;
  t6909 = -1.*t1713*t6352;
  t6910 = 0. + t6689 + t6702 + t6776 + t6909;
  t5118 = -1.*t3143;
  t5310 = 1. + t5118;
  t5562 = -0.0016*t5544;
  t5660 = -0.2707*t935;
  t6580 = -1.*t935*t6474;
  t6965 = t2737*t6910;
  t6987 = 0. + t5562 + t5660 + t6580 + t6965;
  t7021 = -0.2707*t5544;
  t7030 = 0.0016*t935;
  t7032 = t2737*t6474;
  t7073 = t935*t6910;
  t7075 = 0. + t7021 + t7030 + t7032 + t7073;
  t4801 = Sin(var1[8]);
  t3141 = -1.*t794*t3089;
  t3493 = t3143*t3485;
  t3523 = 0. + t3141 + t3493;
  t3612 = t168*t3523;
  t3796 = t3143*t3089;
  t4012 = t794*t3485;
  t4036 = 0. + t3796 + t4012;
  t4276 = -1.*t3633*t4036;
  t4421 = 0. + t3612 + t4276;
  t4605 = -1.*t143;
  t4748 = 1. + t4605;
  t4963 = -1.*t168;
  t4971 = 1. + t4963;
  t4990 = -0.049*t4971;
  t5104 = -0.09*t3633;
  t5327 = -0.21*t5310;
  t5352 = 0.049*t794;
  t7001 = t794*t6987;
  t7156 = t3143*t7075;
  t7186 = 0. + t5327 + t5352 + t7001 + t7156;
  t7303 = -1.*t3633*t7186;
  t7330 = -0.049*t5310;
  t7334 = -0.21*t794;
  t7356 = t3143*t6987;
  t7368 = -1.*t794*t7075;
  t7402 = 0. + t7330 + t7334 + t7356 + t7368;
  t7431 = t168*t7402;
  t7443 = 0. + t4990 + t5104 + t7303 + t7431;
  t7762 = 0.766044*t1814;
  t7777 = 0.642788*t1984;
  t7784 = t7762 + t7777;
  t7755 = t1713*t2156;
  t7806 = t2341*t7784;
  t7815 = 0. + t7755 + t7806;
  t7847 = -1.*t1713*t7784;
  t7851 = 0. + t2949 + t7847;
  t7836 = -1.*t935*t7815;
  t7866 = t2737*t7851;
  t7871 = 0. + t7836 + t7866;
  t7883 = t2737*t7815;
  t7893 = t935*t7851;
  t7894 = 0. + t7883 + t7893;
  t4428 = t143*t4421;
  t4525 = 0. + t4428;
  t4789 = -0.049*t4748;
  t4955 = -0.004500000000000004*t4801;
  t7485 = t143*t7443;
  t7493 = 0. + t4789 + t4955 + t7485;
  t7881 = t794*t7871;
  t7909 = t3143*t7894;
  t7918 = 0. + t7881 + t7909;
  t7921 = -1.*t3633*t7918;
  t7930 = t3143*t7871;
  t7931 = -1.*t794*t7894;
  t7945 = 0. + t7930 + t7931;
  t7958 = t168*t7945;
  t7978 = 0. + t7921 + t7958;
  t7984 = t143*t7978;
  t7988 = 0. + t7984;
  t7548 = -0.135*t4748;
  t7577 = -0.1305*t143;
  t7590 = 0.049*t4801;
  t7629 = t4801*t7443;
  t7638 = 0. + t7548 + t7577 + t7590 + t7629;
  t7684 = -0.09*t4971;
  t7685 = 0.049*t3633;
  t7687 = t168*t7186;
  t7709 = t3633*t7402;
  t7723 = 0. + t7684 + t7685 + t7687 + t7709;
  t8057 = 0. + t4801;
  t7522 = t4801*t4421;
  t7533 = 0. + t7522;
  t7656 = t3633*t3523;
  t7665 = t168*t4036;
  t7678 = 0. + t7656 + t7665;
  t8016 = t168*t7918;
  t8018 = t3633*t7945;
  t8020 = 0. + t8016 + t8018;
  t8061 = -1.*t143;
  t8066 = 0. + t8061;
  t8003 = t4801*t7978;
  t8006 = 0. + t8003;
  t8030 = -1.*t7723*t8020;
  t7724 = t7678*t7723;
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
  p_output1[21]=0. + (t4525*t7493 + t7533*t7638 + t7724)*t7988 + t4525*(-1.*t7493*t7988 - 1.*t7638*t8006 + t8030);
  p_output1[22]=0.135*t8020 + (-1.*t4525*t7493 - 1.*t7533*t7638 - 1.*t7678*t7723)*t8057 + t4525*(0. + t7493*t8057 + t7638*t8066);
  p_output1[23]=0.135*t7678 + (t7493*t7988 + t7638*t8006 + t7723*t8020)*t8057 + t7988*(0. - 1.*t7493*t8057 - 1.*t7638*t8066);
  p_output1[24]=-0.049 + (0. + t4421*t7443 + t7724)*t8020 + t7678*(0. - 1.*t7443*t7978 + t8030);
  p_output1[25]=0. + 0.1305*t7678 - 0.135*t7978;
  p_output1[26]=0. - 0.135*t4421 - 0.1305*t8020;
  p_output1[27]=0.;
  p_output1[28]=0. - 1.*t4036*t7186 - 1.*t3523*t7402 + 0.049*t7918 - 0.09*t7945;
  p_output1[29]=0. - 0.09*t3523 + 0.049*t4036 + t7186*t7918 + t7402*t7945;
  p_output1[30]=0.;
  p_output1[31]=0. - 1.*t3485*t6987 - 1.*t3089*t7075 - 0.21*t7871 + 0.049*t7894;
  p_output1[32]=0. + 0.049*t3089 - 0.21*t3485 + t6987*t7871 + t7075*t7894;
  p_output1[33]=0.;
  p_output1[34]=0. - 1.*t3011*t6474 - 1.*t2624*t6910 + 0.0016*t7815 - 0.2707*t7851;
  p_output1[35]=0. - 0.2707*t2624 + 0.0016*t3011 + t6474*t7815 + t6910*t7851;
  p_output1[36]=0.;
  p_output1[37]=0. - 0.7055*t2156 - 1.*t2503*t6268 - 1.*t2156*t6352 - 0.0184*t7784;
  p_output1[38]=0. - 0.0184*t2156 - 0.7055*t2503 + t2156*t6268 + t6352*t7784;
  p_output1[39]=0.;
  p_output1[40]=0.05136484440000011;
  p_output1[41]=0.019994554799999897;
}



void Jv_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
