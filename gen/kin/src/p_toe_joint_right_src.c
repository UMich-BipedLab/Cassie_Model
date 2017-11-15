/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_right_src.h"

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
  double t187;
  double t1464;
  double t1502;
  double t1482;
  double t1868;
  double t196;
  double t317;
  double t321;
  double t345;
  double t726;
  double t1496;
  double t1911;
  double t1915;
  double t2136;
  double t2774;
  double t2781;
  double t2905;
  double t195;
  double t3628;
  double t3640;
  double t3725;
  double t3898;
  double t3954;
  double t4409;
  double t4947;
  double t5114;
  double t5162;
  double t5215;
  double t7030;
  double t7475;
  double t8322;
  double t8645;
  double t8946;
  double t8964;
  double t8979;
  double t9045;
  double t9048;
  double t9049;
  double t9091;
  double t9098;
  double t9101;
  double t9104;
  double t9111;
  double t9118;
  double t9162;
  double t9175;
  double t9176;
  double t9179;
  double t9207;
  double t9208;
  double t9225;
  double t9234;
  double t9240;
  double t9245;
  double t9255;
  double t9265;
  double t9266;
  double t9272;
  double t9294;
  double t9301;
  double t9302;
  double t9307;
  double t9310;
  double t9319;
  double t9368;
  double t9384;
  double t9400;
  double t9406;
  double t9426;
  double t9428;
  double t9432;
  double t325;
  double t346;
  double t350;
  double t1095;
  double t1244;
  double t2355;
  double t2361;
  double t2552;
  double t2557;
  double t3020;
  double t3460;
  double t3462;
  double t9456;
  double t9460;
  double t9466;
  double t9468;
  double t9472;
  double t9480;
  double t4420;
  double t5079;
  double t5090;
  double t9484;
  double t9486;
  double t9487;
  double t6832;
  double t7024;
  double t7028;
  double t8969;
  double t8987;
  double t9031;
  double t9492;
  double t9493;
  double t9495;
  double t9514;
  double t9515;
  double t9519;
  double t9071;
  double t9075;
  double t9084;
  double t9131;
  double t9168;
  double t9171;
  double t9523;
  double t9524;
  double t9526;
  double t9529;
  double t9530;
  double t9537;
  double t9186;
  double t9187;
  double t9200;
  double t9248;
  double t9261;
  double t9263;
  double t9549;
  double t9554;
  double t9556;
  double t9559;
  double t9560;
  double t9564;
  double t9288;
  double t9289;
  double t9291;
  double t9342;
  double t9377;
  double t9379;
  double t9567;
  double t9568;
  double t9570;
  double t9576;
  double t9580;
  double t9581;
  double t9416;
  double t9418;
  double t9422;
  double t9584;
  double t9589;
  double t9590;
  double t9594;
  double t9595;
  double t9596;
  double t9638;
  double t9639;
  double t9643;
  double t9651;
  double t9657;
  double t9659;
  double t9673;
  double t9674;
  double t9682;
  double t9693;
  double t9697;
  double t9701;
  double t9704;
  double t9705;
  double t9706;
  double t9708;
  double t9709;
  double t9711;
  double t9715;
  double t9719;
  double t9720;
  double t9728;
  double t9730;
  double t9731;
  double t9741;
  double t9742;
  double t9744;
  double t9750;
  double t9751;
  double t9754;
  double t9759;
  double t9761;
  double t9763;
  t187 = Cos(var1[3]);
  t1464 = Cos(var1[5]);
  t1502 = Sin(var1[3]);
  t1482 = Sin(var1[4]);
  t1868 = Sin(var1[5]);
  t196 = Cos(var1[14]);
  t317 = -1.*t196;
  t321 = 1. + t317;
  t345 = Sin(var1[14]);
  t726 = Sin(var1[13]);
  t1496 = t187*t1464*t1482;
  t1911 = t1502*t1868;
  t1915 = t1496 + t1911;
  t2136 = Cos(var1[13]);
  t2774 = -1.*t1464*t1502;
  t2781 = t187*t1482*t1868;
  t2905 = t2774 + t2781;
  t195 = Cos(var1[4]);
  t3628 = t726*t1915;
  t3640 = t2136*t2905;
  t3725 = t3628 + t3640;
  t3898 = Cos(var1[15]);
  t3954 = -1.*t3898;
  t4409 = 1. + t3954;
  t4947 = Sin(var1[15]);
  t5114 = t2136*t1915;
  t5162 = -1.*t726*t2905;
  t5215 = t5114 + t5162;
  t7030 = t196*t187*t195;
  t7475 = t345*t3725;
  t8322 = t7030 + t7475;
  t8645 = Cos(var1[16]);
  t8946 = -1.*t8645;
  t8964 = 1. + t8946;
  t8979 = Sin(var1[16]);
  t9045 = t4947*t5215;
  t9048 = t3898*t8322;
  t9049 = t9045 + t9048;
  t9091 = t3898*t5215;
  t9098 = -1.*t4947*t8322;
  t9101 = t9091 + t9098;
  t9104 = Cos(var1[17]);
  t9111 = -1.*t9104;
  t9118 = 1. + t9111;
  t9162 = Sin(var1[17]);
  t9175 = -1.*t8979*t9049;
  t9176 = t8645*t9101;
  t9179 = t9175 + t9176;
  t9207 = t8645*t9049;
  t9208 = t8979*t9101;
  t9225 = t9207 + t9208;
  t9234 = Cos(var1[18]);
  t9240 = -1.*t9234;
  t9245 = 1. + t9240;
  t9255 = Sin(var1[18]);
  t9265 = t9162*t9179;
  t9266 = t9104*t9225;
  t9272 = t9265 + t9266;
  t9294 = t9104*t9179;
  t9301 = -1.*t9162*t9225;
  t9302 = t9294 + t9301;
  t9307 = Cos(var1[19]);
  t9310 = -1.*t9307;
  t9319 = 1. + t9310;
  t9368 = Sin(var1[19]);
  t9384 = -1.*t9255*t9272;
  t9400 = t9234*t9302;
  t9406 = t9384 + t9400;
  t9426 = t9234*t9272;
  t9428 = t9255*t9302;
  t9432 = t9426 + t9428;
  t325 = -0.049*t321;
  t346 = -0.135*t345;
  t350 = 0. + t325 + t346;
  t1095 = 0.135*t726;
  t1244 = 0. + t1095;
  t2355 = -1.*t2136;
  t2361 = 1. + t2355;
  t2552 = -0.135*t2361;
  t2557 = 0. + t2552;
  t3020 = -0.135*t321;
  t3460 = 0.049*t345;
  t3462 = 0. + t3020 + t3460;
  t9456 = t1464*t1502*t1482;
  t9460 = -1.*t187*t1868;
  t9466 = t9456 + t9460;
  t9468 = t187*t1464;
  t9472 = t1502*t1482*t1868;
  t9480 = t9468 + t9472;
  t4420 = -0.09*t4409;
  t5079 = 0.049*t4947;
  t5090 = 0. + t4420 + t5079;
  t9484 = t726*t9466;
  t9486 = t2136*t9480;
  t9487 = t9484 + t9486;
  t6832 = -0.049*t4409;
  t7024 = -0.09*t4947;
  t7028 = 0. + t6832 + t7024;
  t8969 = -0.049*t8964;
  t8987 = -0.21*t8979;
  t9031 = 0. + t8969 + t8987;
  t9492 = t2136*t9466;
  t9493 = -1.*t726*t9480;
  t9495 = t9492 + t9493;
  t9514 = t196*t195*t1502;
  t9515 = t345*t9487;
  t9519 = t9514 + t9515;
  t9071 = -0.21*t8964;
  t9075 = 0.049*t8979;
  t9084 = 0. + t9071 + t9075;
  t9131 = -0.2707*t9118;
  t9168 = 0.0016*t9162;
  t9171 = 0. + t9131 + t9168;
  t9523 = t4947*t9495;
  t9524 = t3898*t9519;
  t9526 = t9523 + t9524;
  t9529 = t3898*t9495;
  t9530 = -1.*t4947*t9519;
  t9537 = t9529 + t9530;
  t9186 = -0.0016*t9118;
  t9187 = -0.2707*t9162;
  t9200 = 0. + t9186 + t9187;
  t9248 = 0.0184*t9245;
  t9261 = -0.7055*t9255;
  t9263 = 0. + t9248 + t9261;
  t9549 = -1.*t8979*t9526;
  t9554 = t8645*t9537;
  t9556 = t9549 + t9554;
  t9559 = t8645*t9526;
  t9560 = t8979*t9537;
  t9564 = t9559 + t9560;
  t9288 = -0.7055*t9245;
  t9289 = -0.0184*t9255;
  t9291 = 0. + t9288 + t9289;
  t9342 = -1.1135*t9319;
  t9377 = 0.0216*t9368;
  t9379 = 0. + t9342 + t9377;
  t9567 = t9162*t9556;
  t9568 = t9104*t9564;
  t9570 = t9567 + t9568;
  t9576 = t9104*t9556;
  t9580 = -1.*t9162*t9564;
  t9581 = t9576 + t9580;
  t9416 = -0.0216*t9319;
  t9418 = -1.1135*t9368;
  t9422 = 0. + t9416 + t9418;
  t9584 = -1.*t9255*t9570;
  t9589 = t9234*t9581;
  t9590 = t9584 + t9589;
  t9594 = t9234*t9570;
  t9595 = t9255*t9581;
  t9596 = t9594 + t9595;
  t9638 = t195*t1464*t726;
  t9639 = t2136*t195*t1868;
  t9643 = t9638 + t9639;
  t9651 = t2136*t195*t1464;
  t9657 = -1.*t195*t726*t1868;
  t9659 = t9651 + t9657;
  t9673 = -1.*t196*t1482;
  t9674 = t345*t9643;
  t9682 = t9673 + t9674;
  t9693 = t4947*t9659;
  t9697 = t3898*t9682;
  t9701 = t9693 + t9697;
  t9704 = t3898*t9659;
  t9705 = -1.*t4947*t9682;
  t9706 = t9704 + t9705;
  t9708 = -1.*t8979*t9701;
  t9709 = t8645*t9706;
  t9711 = t9708 + t9709;
  t9715 = t8645*t9701;
  t9719 = t8979*t9706;
  t9720 = t9715 + t9719;
  t9728 = t9162*t9711;
  t9730 = t9104*t9720;
  t9731 = t9728 + t9730;
  t9741 = t9104*t9711;
  t9742 = -1.*t9162*t9720;
  t9744 = t9741 + t9742;
  t9750 = -1.*t9255*t9731;
  t9751 = t9234*t9744;
  t9754 = t9750 + t9751;
  t9759 = t9234*t9731;
  t9761 = t9255*t9744;
  t9763 = t9759 + t9761;
  p_output1[0]=0. + t1244*t1915 + t2557*t2905 + t187*t195*t350 + t3462*t3725 - 0.1305*(-1.*t187*t195*t345 + t196*t3725) + t5090*t5215 + t7028*t8322 + t9031*t9049 + t9084*t9101 + t9171*t9179 + t9200*t9225 + t9263*t9272 + t9291*t9302 + t9379*t9406 + t9422*t9432 - 0.0216*(t9368*t9406 + t9307*t9432) - 1.1135*(t9307*t9406 - 1.*t9368*t9432) + var1[0];
  p_output1[1]=0. + t1502*t195*t350 + t1244*t9466 + t2557*t9480 + t3462*t9487 - 0.1305*(-1.*t1502*t195*t345 + t196*t9487) + t5090*t9495 + t7028*t9519 + t9031*t9526 + t9084*t9537 + t9171*t9556 + t9200*t9564 + t9263*t9570 + t9291*t9581 + t9379*t9590 + t9422*t9596 - 0.0216*(t9368*t9590 + t9307*t9596) - 1.1135*(t9307*t9590 - 1.*t9368*t9596) + var1[1];
  p_output1[2]=0. + t1244*t1464*t195 + t1868*t195*t2557 - 1.*t1482*t350 + t3462*t9643 - 0.1305*(t1482*t345 + t196*t9643) + t5090*t9659 + t7028*t9682 + t9031*t9701 + t9084*t9706 + t9171*t9711 + t9200*t9720 + t9263*t9731 + t9291*t9744 + t9379*t9754 + t9422*t9763 - 0.0216*(t9368*t9754 + t9307*t9763) - 1.1135*(t9307*t9754 - 1.*t9368*t9763) + var1[2];
}



void p_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
