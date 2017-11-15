/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_src.h"

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
  double t705;
  double t468;
  double t759;
  double t570;
  double t765;
  double t356;
  double t702;
  double t857;
  double t862;
  double t1038;
  double t1382;
  double t1384;
  double t1763;
  double t2532;
  double t2534;
  double t2539;
  double t2626;
  double t2402;
  double t2434;
  double t2438;
  double t2684;
  double t3496;
  double t3664;
  double t3862;
  double t3913;
  double t2892;
  double t2893;
  double t3439;
  double t4018;
  double t4025;
  double t4083;
  double t4388;
  double t4394;
  double t4646;
  double t4938;
  double t5021;
  double t5030;
  double t5050;
  double t5352;
  double t5372;
  double t5395;
  double t5471;
  double t5487;
  double t5488;
  double t5490;
  double t5529;
  double t5531;
  double t5544;
  double t5614;
  double t5619;
  double t5625;
  double t5646;
  double t5647;
  double t5664;
  double t5715;
  double t5776;
  double t5783;
  double t5787;
  double t5847;
  double t5867;
  double t5886;
  double t5931;
  double t5938;
  double t5949;
  double t5981;
  double t6003;
  double t6050;
  double t6055;
  double t6282;
  double t6308;
  double t6324;
  double t389;
  double t390;
  double t420;
  double t452;
  double t2216;
  double t2257;
  double t6456;
  double t6459;
  double t6462;
  double t6482;
  double t6486;
  double t6497;
  double t2618;
  double t2637;
  double t2652;
  double t2690;
  double t2694;
  double t2741;
  double t6547;
  double t6554;
  double t6565;
  double t3888;
  double t3922;
  double t3946;
  double t4158;
  double t4243;
  double t4340;
  double t4647;
  double t4949;
  double t4994;
  double t6657;
  double t6678;
  double t6687;
  double t6713;
  double t6717;
  double t6720;
  double t5237;
  double t5252;
  double t5311;
  double t5489;
  double t5513;
  double t5522;
  double t6734;
  double t6740;
  double t6741;
  double t6802;
  double t6824;
  double t6832;
  double t5587;
  double t5592;
  double t5599;
  double t5682;
  double t5730;
  double t5743;
  double t6862;
  double t6876;
  double t6894;
  double t6954;
  double t6958;
  double t6962;
  double t5832;
  double t5840;
  double t5843;
  double t5971;
  double t5985;
  double t5993;
  double t7090;
  double t7099;
  double t7128;
  double t7165;
  double t7182;
  double t7184;
  double t6192;
  double t6193;
  double t6277;
  double t7222;
  double t7230;
  double t7232;
  double t7246;
  double t7252;
  double t7253;
  double t7529;
  double t7557;
  double t7596;
  double t7739;
  double t7788;
  double t7843;
  double t8002;
  double t8012;
  double t8078;
  double t8184;
  double t8253;
  double t8256;
  double t8300;
  double t8311;
  double t8354;
  double t8466;
  double t8723;
  double t8728;
  double t8906;
  double t9031;
  double t9035;
  double t9091;
  double t9101;
  double t9106;
  double t9116;
  double t9176;
  double t9200;
  double t9263;
  double t9265;
  double t9288;
  double t9379;
  double t9422;
  double t9440;
  t705 = Cos(var1[3]);
  t468 = Cos(var1[5]);
  t759 = Sin(var1[4]);
  t570 = Sin(var1[3]);
  t765 = Sin(var1[5]);
  t356 = Cos(var1[6]);
  t702 = -1.*t468*t570;
  t857 = t705*t759*t765;
  t862 = t702 + t857;
  t1038 = t705*t468*t759;
  t1382 = t570*t765;
  t1384 = t1038 + t1382;
  t1763 = Sin(var1[6]);
  t2532 = Cos(var1[7]);
  t2534 = -1.*t2532;
  t2539 = 1. + t2534;
  t2626 = Sin(var1[7]);
  t2402 = t356*t862;
  t2434 = t1384*t1763;
  t2438 = t2402 + t2434;
  t2684 = Cos(var1[4]);
  t3496 = Cos(var1[8]);
  t3664 = -1.*t3496;
  t3862 = 1. + t3664;
  t3913 = Sin(var1[8]);
  t2892 = t705*t2684*t2532;
  t2893 = t2438*t2626;
  t3439 = t2892 + t2893;
  t4018 = t356*t1384;
  t4025 = -1.*t862*t1763;
  t4083 = t4018 + t4025;
  t4388 = Cos(var1[9]);
  t4394 = -1.*t4388;
  t4646 = 1. + t4394;
  t4938 = Sin(var1[9]);
  t5021 = t3496*t3439;
  t5030 = t4083*t3913;
  t5050 = t5021 + t5030;
  t5352 = t3496*t4083;
  t5372 = -1.*t3439*t3913;
  t5395 = t5352 + t5372;
  t5471 = Cos(var1[10]);
  t5487 = -1.*t5471;
  t5488 = 1. + t5487;
  t5490 = Sin(var1[10]);
  t5529 = -1.*t4938*t5050;
  t5531 = t4388*t5395;
  t5544 = t5529 + t5531;
  t5614 = t4388*t5050;
  t5619 = t4938*t5395;
  t5625 = t5614 + t5619;
  t5646 = Cos(var1[11]);
  t5647 = -1.*t5646;
  t5664 = 1. + t5647;
  t5715 = Sin(var1[11]);
  t5776 = t5490*t5544;
  t5783 = t5471*t5625;
  t5787 = t5776 + t5783;
  t5847 = t5471*t5544;
  t5867 = -1.*t5490*t5625;
  t5886 = t5847 + t5867;
  t5931 = Cos(var1[12]);
  t5938 = -1.*t5931;
  t5949 = 1. + t5938;
  t5981 = Sin(var1[12]);
  t6003 = -1.*t5715*t5787;
  t6050 = t5646*t5886;
  t6055 = t6003 + t6050;
  t6282 = t5646*t5787;
  t6308 = t5715*t5886;
  t6324 = t6282 + t6308;
  t389 = -1.*t356;
  t390 = 1. + t389;
  t420 = 0.135*t390;
  t452 = 0. + t420;
  t2216 = -0.135*t1763;
  t2257 = 0. + t2216;
  t6456 = t705*t468;
  t6459 = t570*t759*t765;
  t6462 = t6456 + t6459;
  t6482 = t468*t570*t759;
  t6486 = -1.*t705*t765;
  t6497 = t6482 + t6486;
  t2618 = 0.135*t2539;
  t2637 = 0.049*t2626;
  t2652 = 0. + t2618 + t2637;
  t2690 = -0.049*t2539;
  t2694 = 0.135*t2626;
  t2741 = 0. + t2690 + t2694;
  t6547 = t356*t6462;
  t6554 = t6497*t1763;
  t6565 = t6547 + t6554;
  t3888 = -0.049*t3862;
  t3922 = -0.09*t3913;
  t3946 = 0. + t3888 + t3922;
  t4158 = -0.09*t3862;
  t4243 = 0.049*t3913;
  t4340 = 0. + t4158 + t4243;
  t4647 = -0.049*t4646;
  t4949 = -0.21*t4938;
  t4994 = 0. + t4647 + t4949;
  t6657 = t2684*t2532*t570;
  t6678 = t6565*t2626;
  t6687 = t6657 + t6678;
  t6713 = t356*t6497;
  t6717 = -1.*t6462*t1763;
  t6720 = t6713 + t6717;
  t5237 = -0.21*t4646;
  t5252 = 0.049*t4938;
  t5311 = 0. + t5237 + t5252;
  t5489 = -0.2707*t5488;
  t5513 = 0.0016*t5490;
  t5522 = 0. + t5489 + t5513;
  t6734 = t3496*t6687;
  t6740 = t6720*t3913;
  t6741 = t6734 + t6740;
  t6802 = t3496*t6720;
  t6824 = -1.*t6687*t3913;
  t6832 = t6802 + t6824;
  t5587 = -0.0016*t5488;
  t5592 = -0.2707*t5490;
  t5599 = 0. + t5587 + t5592;
  t5682 = 0.0184*t5664;
  t5730 = -0.7055*t5715;
  t5743 = 0. + t5682 + t5730;
  t6862 = -1.*t4938*t6741;
  t6876 = t4388*t6832;
  t6894 = t6862 + t6876;
  t6954 = t4388*t6741;
  t6958 = t4938*t6832;
  t6962 = t6954 + t6958;
  t5832 = -0.7055*t5664;
  t5840 = -0.0184*t5715;
  t5843 = 0. + t5832 + t5840;
  t5971 = -1.1135*t5949;
  t5985 = 0.0216*t5981;
  t5993 = 0. + t5971 + t5985;
  t7090 = t5490*t6894;
  t7099 = t5471*t6962;
  t7128 = t7090 + t7099;
  t7165 = t5471*t6894;
  t7182 = -1.*t5490*t6962;
  t7184 = t7165 + t7182;
  t6192 = -0.0216*t5949;
  t6193 = -1.1135*t5981;
  t6277 = 0. + t6192 + t6193;
  t7222 = -1.*t5715*t7128;
  t7230 = t5646*t7184;
  t7232 = t7222 + t7230;
  t7246 = t5646*t7128;
  t7252 = t5715*t7184;
  t7253 = t7246 + t7252;
  t7529 = t2684*t356*t765;
  t7557 = t2684*t468*t1763;
  t7596 = t7529 + t7557;
  t7739 = -1.*t2532*t759;
  t7788 = t7596*t2626;
  t7843 = t7739 + t7788;
  t8002 = t2684*t468*t356;
  t8012 = -1.*t2684*t765*t1763;
  t8078 = t8002 + t8012;
  t8184 = t3496*t7843;
  t8253 = t8078*t3913;
  t8256 = t8184 + t8253;
  t8300 = t3496*t8078;
  t8311 = -1.*t7843*t3913;
  t8354 = t8300 + t8311;
  t8466 = -1.*t4938*t8256;
  t8723 = t4388*t8354;
  t8728 = t8466 + t8723;
  t8906 = t4388*t8256;
  t9031 = t4938*t8354;
  t9035 = t8906 + t9031;
  t9091 = t5490*t8728;
  t9101 = t5471*t9035;
  t9106 = t9091 + t9101;
  t9116 = t5471*t8728;
  t9176 = -1.*t5490*t9035;
  t9200 = t9116 + t9176;
  t9263 = -1.*t5715*t9106;
  t9265 = t5646*t9200;
  t9288 = t9263 + t9265;
  t9379 = t5646*t9106;
  t9422 = t5715*t9200;
  t9440 = t9379 + t9422;
  p_output1[0]=0. + t1384*t2257 + t2438*t2652 + t3439*t3946 + t4083*t4340 + t4994*t5050 + t5311*t5395 + t5522*t5544 + t5599*t5625 + t5743*t5787 + t5843*t5886 + t5993*t6055 + t6277*t6324 + 0.0306*(t5981*t6055 + t5931*t6324) - 1.1312*(t5931*t6055 - 1.*t5981*t6324) + t2684*t2741*t705 + 0.1305*(t2438*t2532 - 1.*t2626*t2684*t705) + t452*t862 + var1[0];
  p_output1[1]=0. + t2684*t2741*t570 + t452*t6462 + t2257*t6497 + t2652*t6565 + 0.1305*(-1.*t2626*t2684*t570 + t2532*t6565) + t3946*t6687 + t4340*t6720 + t4994*t6741 + t5311*t6832 + t5522*t6894 + t5599*t6962 + t5743*t7128 + t5843*t7184 + t5993*t7232 + t6277*t7253 + 0.0306*(t5981*t7232 + t5931*t7253) - 1.1312*(t5931*t7232 - 1.*t5981*t7253) + var1[1];
  p_output1[2]=0. + t2257*t2684*t468 - 1.*t2741*t759 + t2652*t7596 + 0.1305*(t2626*t759 + t2532*t7596) + t2684*t452*t765 + t3946*t7843 + t4340*t8078 + t4994*t8256 + t5311*t8354 + t5522*t8728 + t5599*t9035 + t5743*t9106 + t5843*t9200 + t5993*t9288 + t6277*t9440 + 0.0306*(t5981*t9288 + t5931*t9440) - 1.1312*(t5931*t9288 - 1.*t5981*t9440) + var1[2];
}



void p_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
