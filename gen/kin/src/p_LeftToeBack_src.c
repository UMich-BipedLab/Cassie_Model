/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBack_src.h"

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
  double t1095;
  double t751;
  double t1529;
  double t1034;
  double t1607;
  double t35;
  double t1076;
  double t1741;
  double t1797;
  double t1852;
  double t1935;
  double t1965;
  double t1976;
  double t2398;
  double t2453;
  double t2470;
  double t2662;
  double t2280;
  double t2289;
  double t2350;
  double t2810;
  double t3299;
  double t3383;
  double t3545;
  double t3589;
  double t3228;
  double t3261;
  double t3280;
  double t3730;
  double t3774;
  double t3854;
  double t4137;
  double t4165;
  double t4189;
  double t4236;
  double t4312;
  double t4346;
  double t4387;
  double t4580;
  double t4591;
  double t4653;
  double t4740;
  double t4750;
  double t4767;
  double t4807;
  double t4918;
  double t4929;
  double t4941;
  double t5053;
  double t5059;
  double t5083;
  double t5133;
  double t5142;
  double t5160;
  double t5178;
  double t5256;
  double t5284;
  double t5310;
  double t5396;
  double t5419;
  double t5429;
  double t5438;
  double t5452;
  double t5454;
  double t5468;
  double t5476;
  double t5485;
  double t5505;
  double t5550;
  double t5560;
  double t5569;
  double t163;
  double t412;
  double t479;
  double t711;
  double t2077;
  double t2168;
  double t5657;
  double t5679;
  double t5685;
  double t5705;
  double t5706;
  double t5732;
  double t2657;
  double t2686;
  double t2711;
  double t2868;
  double t3005;
  double t3091;
  double t5743;
  double t5749;
  double t5754;
  double t3570;
  double t3629;
  double t3632;
  double t3855;
  double t3918;
  double t3927;
  double t4201;
  double t4282;
  double t4304;
  double t5799;
  double t5804;
  double t5805;
  double t5823;
  double t5837;
  double t5845;
  double t4421;
  double t4512;
  double t4575;
  double t4800;
  double t4840;
  double t4890;
  double t5858;
  double t5863;
  double t5864;
  double t5874;
  double t5876;
  double t5880;
  double t4983;
  double t5030;
  double t5045;
  double t5174;
  double t5206;
  double t5242;
  double t5899;
  double t5908;
  double t5913;
  double t5918;
  double t5937;
  double t5940;
  double t5365;
  double t5371;
  double t5389;
  double t5462;
  double t5469;
  double t5471;
  double t5966;
  double t5970;
  double t5999;
  double t6008;
  double t6013;
  double t6028;
  double t5516;
  double t5531;
  double t5534;
  double t6061;
  double t6071;
  double t6075;
  double t6090;
  double t6141;
  double t6142;
  double t6213;
  double t6216;
  double t6221;
  double t6270;
  double t6272;
  double t6284;
  double t6304;
  double t6313;
  double t6317;
  double t6333;
  double t6334;
  double t6353;
  double t6367;
  double t6369;
  double t6387;
  double t6403;
  double t6407;
  double t6408;
  double t6420;
  double t6440;
  double t6446;
  double t6453;
  double t6463;
  double t6465;
  double t6476;
  double t6477;
  double t6487;
  double t6496;
  double t6499;
  double t6506;
  double t6521;
  double t6529;
  double t6565;
  t1095 = Cos(var1[3]);
  t751 = Cos(var1[5]);
  t1529 = Sin(var1[4]);
  t1034 = Sin(var1[3]);
  t1607 = Sin(var1[5]);
  t35 = Cos(var1[6]);
  t1076 = -1.*t751*t1034;
  t1741 = t1095*t1529*t1607;
  t1797 = t1076 + t1741;
  t1852 = t1095*t751*t1529;
  t1935 = t1034*t1607;
  t1965 = t1852 + t1935;
  t1976 = Sin(var1[6]);
  t2398 = Cos(var1[7]);
  t2453 = -1.*t2398;
  t2470 = 1. + t2453;
  t2662 = Sin(var1[7]);
  t2280 = t35*t1797;
  t2289 = t1965*t1976;
  t2350 = t2280 + t2289;
  t2810 = Cos(var1[4]);
  t3299 = Cos(var1[8]);
  t3383 = -1.*t3299;
  t3545 = 1. + t3383;
  t3589 = Sin(var1[8]);
  t3228 = t1095*t2810*t2398;
  t3261 = t2350*t2662;
  t3280 = t3228 + t3261;
  t3730 = t35*t1965;
  t3774 = -1.*t1797*t1976;
  t3854 = t3730 + t3774;
  t4137 = Cos(var1[9]);
  t4165 = -1.*t4137;
  t4189 = 1. + t4165;
  t4236 = Sin(var1[9]);
  t4312 = t3299*t3280;
  t4346 = t3854*t3589;
  t4387 = t4312 + t4346;
  t4580 = t3299*t3854;
  t4591 = -1.*t3280*t3589;
  t4653 = t4580 + t4591;
  t4740 = Cos(var1[10]);
  t4750 = -1.*t4740;
  t4767 = 1. + t4750;
  t4807 = Sin(var1[10]);
  t4918 = -1.*t4236*t4387;
  t4929 = t4137*t4653;
  t4941 = t4918 + t4929;
  t5053 = t4137*t4387;
  t5059 = t4236*t4653;
  t5083 = t5053 + t5059;
  t5133 = Cos(var1[11]);
  t5142 = -1.*t5133;
  t5160 = 1. + t5142;
  t5178 = Sin(var1[11]);
  t5256 = t4807*t4941;
  t5284 = t4740*t5083;
  t5310 = t5256 + t5284;
  t5396 = t4740*t4941;
  t5419 = -1.*t4807*t5083;
  t5429 = t5396 + t5419;
  t5438 = Cos(var1[12]);
  t5452 = -1.*t5438;
  t5454 = 1. + t5452;
  t5468 = Sin(var1[12]);
  t5476 = -1.*t5178*t5310;
  t5485 = t5133*t5429;
  t5505 = t5476 + t5485;
  t5550 = t5133*t5310;
  t5560 = t5178*t5429;
  t5569 = t5550 + t5560;
  t163 = -1.*t35;
  t412 = 1. + t163;
  t479 = 0.135*t412;
  t711 = 0. + t479;
  t2077 = -0.135*t1976;
  t2168 = 0. + t2077;
  t5657 = t1095*t751;
  t5679 = t1034*t1529*t1607;
  t5685 = t5657 + t5679;
  t5705 = t751*t1034*t1529;
  t5706 = -1.*t1095*t1607;
  t5732 = t5705 + t5706;
  t2657 = 0.135*t2470;
  t2686 = 0.049*t2662;
  t2711 = 0. + t2657 + t2686;
  t2868 = -0.049*t2470;
  t3005 = 0.135*t2662;
  t3091 = 0. + t2868 + t3005;
  t5743 = t35*t5685;
  t5749 = t5732*t1976;
  t5754 = t5743 + t5749;
  t3570 = -0.049*t3545;
  t3629 = -0.09*t3589;
  t3632 = 0. + t3570 + t3629;
  t3855 = -0.09*t3545;
  t3918 = 0.049*t3589;
  t3927 = 0. + t3855 + t3918;
  t4201 = -0.049*t4189;
  t4282 = -0.21*t4236;
  t4304 = 0. + t4201 + t4282;
  t5799 = t2810*t2398*t1034;
  t5804 = t5754*t2662;
  t5805 = t5799 + t5804;
  t5823 = t35*t5732;
  t5837 = -1.*t5685*t1976;
  t5845 = t5823 + t5837;
  t4421 = -0.21*t4189;
  t4512 = 0.049*t4236;
  t4575 = 0. + t4421 + t4512;
  t4800 = -0.2707*t4767;
  t4840 = 0.0016*t4807;
  t4890 = 0. + t4800 + t4840;
  t5858 = t3299*t5805;
  t5863 = t5845*t3589;
  t5864 = t5858 + t5863;
  t5874 = t3299*t5845;
  t5876 = -1.*t5805*t3589;
  t5880 = t5874 + t5876;
  t4983 = -0.0016*t4767;
  t5030 = -0.2707*t4807;
  t5045 = 0. + t4983 + t5030;
  t5174 = 0.0184*t5160;
  t5206 = -0.7055*t5178;
  t5242 = 0. + t5174 + t5206;
  t5899 = -1.*t4236*t5864;
  t5908 = t4137*t5880;
  t5913 = t5899 + t5908;
  t5918 = t4137*t5864;
  t5937 = t4236*t5880;
  t5940 = t5918 + t5937;
  t5365 = -0.7055*t5160;
  t5371 = -0.0184*t5178;
  t5389 = 0. + t5365 + t5371;
  t5462 = -1.1135*t5454;
  t5469 = 0.0216*t5468;
  t5471 = 0. + t5462 + t5469;
  t5966 = t4807*t5913;
  t5970 = t4740*t5940;
  t5999 = t5966 + t5970;
  t6008 = t4740*t5913;
  t6013 = -1.*t4807*t5940;
  t6028 = t6008 + t6013;
  t5516 = -0.0216*t5454;
  t5531 = -1.1135*t5468;
  t5534 = 0. + t5516 + t5531;
  t6061 = -1.*t5178*t5999;
  t6071 = t5133*t6028;
  t6075 = t6061 + t6071;
  t6090 = t5133*t5999;
  t6141 = t5178*t6028;
  t6142 = t6090 + t6141;
  t6213 = t2810*t35*t1607;
  t6216 = t2810*t751*t1976;
  t6221 = t6213 + t6216;
  t6270 = -1.*t2398*t1529;
  t6272 = t6221*t2662;
  t6284 = t6270 + t6272;
  t6304 = t2810*t751*t35;
  t6313 = -1.*t2810*t1607*t1976;
  t6317 = t6304 + t6313;
  t6333 = t3299*t6284;
  t6334 = t6317*t3589;
  t6353 = t6333 + t6334;
  t6367 = t3299*t6317;
  t6369 = -1.*t6284*t3589;
  t6387 = t6367 + t6369;
  t6403 = -1.*t4236*t6353;
  t6407 = t4137*t6387;
  t6408 = t6403 + t6407;
  t6420 = t4137*t6353;
  t6440 = t4236*t6387;
  t6446 = t6420 + t6440;
  t6453 = t4807*t6408;
  t6463 = t4740*t6446;
  t6465 = t6453 + t6463;
  t6476 = t4740*t6408;
  t6477 = -1.*t4807*t6446;
  t6487 = t6476 + t6477;
  t6496 = -1.*t5178*t6465;
  t6499 = t5133*t6487;
  t6506 = t6496 + t6499;
  t6521 = t5133*t6465;
  t6529 = t5178*t6487;
  t6565 = t6521 + t6529;
  p_output1[0]=0. + t1965*t2168 + t2350*t2711 + 0.1305*(t2350*t2398 - 1.*t1095*t2662*t2810) + t1095*t2810*t3091 + t3280*t3632 + t3854*t3927 + t4304*t4387 + t4575*t4653 + t4890*t4941 + t5045*t5083 + t5242*t5310 + t5389*t5429 + t5471*t5505 + t5534*t5569 - 0.027251*(t5468*t5505 + t5438*t5569) - 1.200144*(t5438*t5505 - 1.*t5468*t5569) + t1797*t711 + var1[0];
  p_output1[1]=0. + t1034*t2810*t3091 + t2168*t5732 + t2711*t5754 + 0.1305*(-1.*t1034*t2662*t2810 + t2398*t5754) + t3632*t5805 + t3927*t5845 + t4304*t5864 + t4575*t5880 + t4890*t5913 + t5045*t5940 + t5242*t5999 + t5389*t6028 + t5471*t6075 + t5534*t6142 - 0.027251*(t5468*t6075 + t5438*t6142) - 1.200144*(t5438*t6075 - 1.*t5468*t6142) + t5685*t711 + var1[1];
  p_output1[2]=0. - 1.*t1529*t3091 + t2711*t6221 + 0.1305*(t1529*t2662 + t2398*t6221) + t3632*t6284 + t3927*t6317 + t4304*t6353 + t4575*t6387 + t4890*t6408 + t5045*t6446 + t5242*t6465 + t5389*t6487 + t5471*t6506 + t5534*t6565 - 0.027251*(t5468*t6506 + t5438*t6565) - 1.200144*(t5438*t6506 - 1.*t5468*t6565) + t1607*t2810*t711 + t2168*t2810*t751 + var1[2];
}



void p_LeftToeBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
