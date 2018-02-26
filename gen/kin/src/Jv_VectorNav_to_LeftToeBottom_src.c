/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:12 GMT-05:00
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
  double t7;
  double t966;
  double t1108;
  double t1286;
  double t975;
  double t1241;
  double t1263;
  double t935;
  double t1374;
  double t1469;
  double t1544;
  double t1914;
  double t1269;
  double t1596;
  double t1715;
  double t931;
  double t1963;
  double t1999;
  double t2021;
  double t2055;
  double t1856;
  double t2031;
  double t2048;
  double t863;
  double t2073;
  double t2249;
  double t2270;
  double t862;
  double t2701;
  double t2735;
  double t2765;
  double t2843;
  double t2925;
  double t2928;
  double t2981;
  double t2982;
  double t2927;
  double t3059;
  double t3429;
  double t3433;
  double t3456;
  double t3523;
  double t2603;
  double t4850;
  double t4870;
  double t4733;
  double t4801;
  double t4931;
  double t4946;
  double t5057;
  double t5058;
  double t5209;
  double t5253;
  double t5261;
  double t5279;
  double t4512;
  double t4537;
  double t4814;
  double t4828;
  double t5185;
  double t5298;
  double t5318;
  double t5474;
  double t5536;
  double t5606;
  double t5619;
  double t5624;
  double t4184;
  double t4209;
  double t4622;
  double t4634;
  double t5391;
  double t5658;
  double t5697;
  double t5732;
  double t5755;
  double t5756;
  double t5762;
  double t5843;
  double t3894;
  double t4026;
  double t4047;
  double t3430;
  double t3772;
  double t3787;
  double t4078;
  double t4167;
  double t5902;
  double t5948;
  double t6024;
  double t6029;
  double t6062;
  double t4241;
  double t4445;
  double t5708;
  double t5848;
  double t5867;
  double t6332;
  double t6200;
  double t6204;
  double t6208;
  double t6219;
  double t6253;
  double t6371;
  double t6382;
  double t6408;
  double t6436;
  double t6455;
  double t6209;
  double t6215;
  double t4171;
  double t5874;
  double t5897;
  double t6096;
  double t6105;
  double t2561;
  double t2571;
  double t2591;
  double t2054;
  double t2326;
  double t2425;
  double t6271;
  double t6354;
  double t6494;
  double t6512;
  double t2478;
  double t2616;
  double t2622;
  double t2698;
  double t2699;
  double t6580;
  double t6591;
  double t6637;
  double t6641;
  double t6676;
  double t3889;
  double t4069;
  double t4070;
  double t6538;
  double t6563;
  double t78;
  double t6986;
  double t6729;
  double t6780;
  double t6789;
  double t6877;
  double t6878;
  double t6166;
  double t6831;
  t7 = Cos(var1[1]);
  t966 = Cos(var1[6]);
  t1108 = Sin(var1[6]);
  t1286 = Cos(var1[5]);
  t975 = -0.766044*t966;
  t1241 = -0.642788*t1108;
  t1263 = t975 + t1241;
  t935 = Sin(var1[5]);
  t1374 = -0.642788*t966;
  t1469 = 0.766044*t1108;
  t1544 = t1374 + t1469;
  t1914 = Cos(var1[4]);
  t1269 = -1.*t935*t1263;
  t1596 = t1286*t1544;
  t1715 = 0. + t1269 + t1596;
  t931 = Sin(var1[4]);
  t1963 = t1286*t1263;
  t1999 = t935*t1544;
  t2021 = 0. + t1963 + t1999;
  t2055 = Sin(var1[3]);
  t1856 = t931*t1715;
  t2031 = t1914*t2021;
  t2048 = 0. + t1856 + t2031;
  t863 = Cos(var1[3]);
  t2073 = t1914*t1715;
  t2249 = -1.*t931*t2021;
  t2270 = 0. + t2073 + t2249;
  t862 = Cos(var1[2]);
  t2701 = 0.642788*t966;
  t2735 = -0.766044*t1108;
  t2765 = t2701 + t2735;
  t2843 = -1.*t935*t2765;
  t2925 = 0. + t2843 + t1963;
  t2928 = t1286*t2765;
  t2981 = t935*t1263;
  t2982 = 0. + t2928 + t2981;
  t2927 = t931*t2925;
  t3059 = t1914*t2982;
  t3429 = 0. + t2927 + t3059;
  t3433 = t1914*t2925;
  t3456 = -1.*t931*t2982;
  t3523 = 0. + t3433 + t3456;
  t2603 = Sin(var1[2]);
  t4850 = -1.*t966;
  t4870 = 1. + t4850;
  t4733 = -1.*t1286;
  t4801 = 1. + t4733;
  t4931 = 1.0335*t4870;
  t4946 = 1.0512*t966;
  t5057 = -0.052199999999999996*t1108;
  t5058 = 0. + t4931 + t4946 + t5057;
  t5209 = -0.0532*t4870;
  t5253 = -0.001*t966;
  t5261 = 0.017699999999999827*t1108;
  t5279 = 0. + t5209 + t5253 + t5261;
  t4512 = -1.*t1914;
  t4537 = 1. + t4512;
  t4814 = -0.0132*t4801;
  t4828 = -0.6255*t935;
  t5185 = t935*t5058;
  t5298 = t1286*t5279;
  t5318 = 0. + t4814 + t4828 + t5185 + t5298;
  t5474 = 0.6255*t4801;
  t5536 = -0.0132*t935;
  t5606 = t1286*t5058;
  t5619 = -1.*t935*t5279;
  t5624 = 0. + t5474 + t5536 + t5606 + t5619;
  t4184 = -1.*t863;
  t4209 = 1. + t4184;
  t4622 = 0.1907*t4537;
  t4634 = -0.0332*t931;
  t5391 = -1.*t931*t5318;
  t5658 = t1914*t5624;
  t5697 = 0. + t4622 + t4634 + t5391 + t5658;
  t5732 = -0.0332*t4537;
  t5755 = -0.1907*t931;
  t5756 = t1914*t5318;
  t5762 = t931*t5624;
  t5843 = 0. + t5732 + t5755 + t5756 + t5762;
  t3894 = t863*t3429;
  t4026 = t2055*t3523;
  t4047 = 0. + t3894 + t4026;
  t3430 = -1.*t2055*t3429;
  t3772 = t863*t3523;
  t3787 = 0. + t3430 + t3772;
  t4078 = -1.*t862;
  t4167 = 1. + t4078;
  t5902 = -0.0806*t4209;
  t5948 = -0.13*t2055;
  t6024 = t2055*t5697;
  t6029 = t863*t5843;
  t6062 = 0. + t5902 + t5948 + t6024 + t6029;
  t4241 = 0.13*t4209;
  t4445 = -0.0806*t2055;
  t5708 = t863*t5697;
  t5848 = -1.*t2055*t5843;
  t5867 = 0. + t4241 + t4445 + t5708 + t5848;
  t6332 = Sin(var1[1]);
  t6200 = t862*t4047;
  t6204 = t3787*t2603;
  t6208 = 0. + t6200 + t6204;
  t6219 = -1.*t7;
  t6253 = 1. + t6219;
  t6371 = -0.0806*t4167;
  t6382 = t862*t6062;
  t6408 = -0.01*t2603;
  t6436 = t5867*t2603;
  t6455 = 0. + t6371 + t6382 + t6408 + t6436;
  t6209 = t7*t6208;
  t6215 = 0. + t6209;
  t4171 = 0.01*t4167;
  t5874 = t862*t5867;
  t5897 = -0.0806*t2603;
  t6096 = -1.*t6062*t2603;
  t6105 = 0. + t4171 + t5874 + t5897 + t6096;
  t2561 = -1.*t2055*t2048;
  t2571 = t863*t2270;
  t2591 = 0. + t2561 + t2571;
  t2054 = t863*t2048;
  t2326 = t2055*t2270;
  t2425 = 0. + t2054 + t2326;
  t6271 = -0.0806*t6253;
  t6354 = 0.004500000000000004*t6332;
  t6494 = t7*t6455;
  t6512 = 0. + t6271 + t6354 + t6494;
  t2478 = t862*t2425;
  t2616 = t2591*t2603;
  t2622 = 0. + t2478 + t2616;
  t2698 = t7*t2622;
  t2699 = 0. + t2698;
  t6580 = -0.135*t6253;
  t6591 = -0.1305*t7;
  t6637 = -0.0806*t6332;
  t6641 = -1.*t6332*t6455;
  t6676 = 0. + t6580 + t6591 + t6637 + t6641;
  t3889 = t862*t3787;
  t4069 = -1.*t4047*t2603;
  t4070 = 0. + t3889 + t4069;
  t6538 = -1.*t6332*t6208;
  t6563 = 0. + t6538;
  t78 = 0. + t7;
  t6986 = 0. + t6332;
  t6729 = t862*t2591;
  t6780 = -1.*t2425*t2603;
  t6789 = 0. + t6729 + t6780;
  t6877 = -1.*t6332*t2622;
  t6878 = 0. + t6877;
  t6166 = -1.*t4070*t6105;
  t6831 = t6105*t6789;
  p_output1[0]=0. + t2699*(t6166 - 1.*t6215*t6512 - 1.*t6563*t6676) + t6215*(t2699*t6512 + t6831 + t6676*t6878) - 0.08*t78;
  p_output1[1]=0.135*t4070 - 0.08*t6563 + (-1.*t2699*t6512 - 1.*t6105*t6789 - 1.*t6676*t6878)*t6986 + t2699*(0. + t6512*t6986 + t6676*t78);
  p_output1[2]=0.135*t6789 - 0.08*t6878 + (t4070*t6105 + t6215*t6512 + t6563*t6676)*t6986 + t6215*(0. - 1.*t6512*t6986 - 1.*t6676*t78);
  p_output1[3]=-0.0806 - 1.*(0. + t6166 - 1.*t6208*t6455)*t6789 - 1.*t4070*(0. + t2622*t6455 + t6831);
  p_output1[4]=0. + 0.135*t6208 + 0.1305*t6789;
  p_output1[5]=0. + 0.135*t2622 - 0.1305*t4070;
  p_output1[6]=0.;
  p_output1[7]=0. - 0.0806*t3787 - 0.01*t4047 - 1.*t2591*t5867 - 1.*t2425*t6062;
  p_output1[8]=0. - 0.01*t2425 - 0.0806*t2591 + t3787*t5867 + t4047*t6062;
  p_output1[9]=0.;
  p_output1[10]=0. - 0.13*t3429 - 0.0806*t3523 - 1.*t2270*t5697 - 1.*t2048*t5843;
  p_output1[11]=0. - 0.13*t2048 - 0.0806*t2270 + t3523*t5697 + t3429*t5843;
  p_output1[12]=0.;
  p_output1[13]=0. - 0.0332*t2925 - 0.1907*t2982 - 1.*t2021*t5318 - 1.*t1715*t5624;
  p_output1[14]=0. - 0.0332*t1715 - 0.1907*t2021 + t2982*t5318 + t2925*t5624;
  p_output1[15]=0.;
  p_output1[16]=0. - 0.0132*t1263 - 0.6255*t2765 - 1.*t1544*t5058 - 1.*t1263*t5279;
  p_output1[17]=0. - 0.6255*t1263 - 0.0132*t1544 + t1263*t5058 + t2765*t5279;
  p_output1[18]=0.;
  p_output1[19]=0.05136484439999989;
  p_output1[20]=0.01999455480000023;
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
