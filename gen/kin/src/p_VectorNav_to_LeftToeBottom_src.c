/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom_src.h"

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
  double t401;
  double t1562;
  double t1671;
  double t1742;
  double t1760;
  double t1783;
  double t2508;
  double t3124;
  double t3421;
  double t3569;
  double t3604;
  double t3698;
  double t3701;
  double t3708;
  double t4109;
  double t4125;
  double t4158;
  double t4235;
  double t4275;
  double t4289;
  double t4322;
  double t4420;
  double t4433;
  double t4436;
  double t4461;
  double t4471;
  double t4477;
  double t4482;
  double t4484;
  double t4486;
  double t4493;
  double t4504;
  double t4513;
  double t4514;
  double t4537;
  double t4538;
  double t4546;
  double t4778;
  double t787;
  double t813;
  double t1876;
  double t2252;
  double t2337;
  double t2482;
  double t2544;
  double t2552;
  double t1778;
  double t1785;
  double t1791;
  double t4982;
  double t2743;
  double t2770;
  double t2907;
  double t3579;
  double t3620;
  double t3648;
  double t5012;
  double t5018;
  double t5020;
  double t5025;
  double t5049;
  double t5076;
  double t3918;
  double t3956;
  double t3989;
  double t4303;
  double t4358;
  double t4404;
  double t5101;
  double t5127;
  double t5128;
  double t5190;
  double t5195;
  double t5196;
  double t4441;
  double t4448;
  double t4452;
  double t4491;
  double t4497;
  double t4501;
  double t5235;
  double t5285;
  double t5287;
  double t5298;
  double t5310;
  double t5313;
  double t4528;
  double t4531;
  double t4534;
  double t5317;
  double t5337;
  double t5371;
  double t5396;
  double t5402;
  double t5409;
  double t4850;
  double t4879;
  double t4906;
  double t4986;
  double t4988;
  double t4992;
  double t5666;
  double t5667;
  double t5669;
  double t5692;
  double t5696;
  double t5702;
  double t5712;
  double t5717;
  double t5723;
  double t5730;
  double t5732;
  double t5743;
  double t5753;
  double t5764;
  double t5776;
  double t5796;
  double t5798;
  double t5799;
  double t5847;
  double t5848;
  double t5878;
  double t5923;
  double t5924;
  double t5941;
  t401 = Cos(var1[1]);
  t1562 = Cos(var1[2]);
  t1671 = Cos(var1[3]);
  t1742 = -1.*t1671;
  t1760 = 1. + t1742;
  t1783 = Sin(var1[3]);
  t2508 = Sin(var1[2]);
  t3124 = Cos(var1[4]);
  t3421 = -1.*t3124;
  t3569 = 1. + t3421;
  t3604 = Sin(var1[4]);
  t3698 = -1.*t401*t1562*t1783;
  t3701 = -1.*t1671*t401*t2508;
  t3708 = t3698 + t3701;
  t4109 = t1671*t401*t1562;
  t4125 = -1.*t401*t1783*t2508;
  t4158 = t4109 + t4125;
  t4235 = Cos(var1[5]);
  t4275 = -1.*t4235;
  t4289 = 1. + t4275;
  t4322 = Sin(var1[5]);
  t4420 = t3604*t3708;
  t4433 = t3124*t4158;
  t4436 = t4420 + t4433;
  t4461 = t3124*t3708;
  t4471 = -1.*t3604*t4158;
  t4477 = t4461 + t4471;
  t4482 = Cos(var1[6]);
  t4484 = -1.*t4482;
  t4486 = 1. + t4484;
  t4493 = Sin(var1[6]);
  t4504 = -1.*t4322*t4436;
  t4513 = t4235*t4477;
  t4514 = t4504 + t4513;
  t4537 = t4235*t4436;
  t4538 = t4322*t4477;
  t4546 = t4537 + t4538;
  t4778 = Cos(var1[0]);
  t787 = -1.*t401;
  t813 = 1. + t787;
  t1876 = Sin(var1[1]);
  t2252 = -1.*t1562;
  t2337 = 1. + t2252;
  t2482 = -0.049*t2337;
  t2544 = -0.09*t2508;
  t2552 = 0. + t2482 + t2544;
  t1778 = -0.049*t1760;
  t1785 = -0.21*t1783;
  t1791 = 0. + t1778 + t1785;
  t4982 = Sin(var1[0]);
  t2743 = -0.21*t1760;
  t2770 = 0.049*t1783;
  t2907 = 0. + t2743 + t2770;
  t3579 = -0.2707*t3569;
  t3620 = 0.0016*t3604;
  t3648 = 0. + t3579 + t3620;
  t5012 = t4778*t1562*t1876;
  t5018 = -1.*t4982*t2508;
  t5020 = t5012 + t5018;
  t5025 = -1.*t1562*t4982;
  t5049 = -1.*t4778*t1876*t2508;
  t5076 = t5025 + t5049;
  t3918 = -0.0016*t3569;
  t3956 = -0.2707*t3604;
  t3989 = 0. + t3918 + t3956;
  t4303 = 0.0184*t4289;
  t4358 = -0.7055*t4322;
  t4404 = 0. + t4303 + t4358;
  t5101 = -1.*t1783*t5020;
  t5127 = t1671*t5076;
  t5128 = t5101 + t5127;
  t5190 = t1671*t5020;
  t5195 = t1783*t5076;
  t5196 = t5190 + t5195;
  t4441 = -0.7055*t4289;
  t4448 = -0.0184*t4322;
  t4452 = 0. + t4441 + t4448;
  t4491 = -1.1135*t4486;
  t4497 = 0.0216*t4493;
  t4501 = 0. + t4491 + t4497;
  t5235 = t3604*t5128;
  t5285 = t3124*t5196;
  t5287 = t5235 + t5285;
  t5298 = t3124*t5128;
  t5310 = -1.*t3604*t5196;
  t5313 = t5298 + t5310;
  t4528 = -0.0216*t4486;
  t4531 = -1.1135*t4493;
  t4534 = 0. + t4528 + t4531;
  t5317 = -1.*t4322*t5287;
  t5337 = t4235*t5313;
  t5371 = t5317 + t5337;
  t5396 = t4235*t5287;
  t5402 = t4322*t5313;
  t5409 = t5396 + t5402;
  t4850 = 0.135*t813;
  t4879 = 0.049*t1876;
  t4906 = 0. + t4850 + t4879;
  t4986 = -0.09*t2337;
  t4988 = 0.049*t2508;
  t4992 = 0. + t4986 + t4988;
  t5666 = t1562*t4982*t1876;
  t5667 = t4778*t2508;
  t5669 = t5666 + t5667;
  t5692 = t4778*t1562;
  t5696 = -1.*t4982*t1876*t2508;
  t5702 = t5692 + t5696;
  t5712 = -1.*t1783*t5669;
  t5717 = t1671*t5702;
  t5723 = t5712 + t5717;
  t5730 = t1671*t5669;
  t5732 = t1783*t5702;
  t5743 = t5730 + t5732;
  t5753 = t3604*t5723;
  t5764 = t3124*t5743;
  t5776 = t5753 + t5764;
  t5796 = t3124*t5723;
  t5798 = -1.*t3604*t5743;
  t5799 = t5796 + t5798;
  t5847 = -1.*t4322*t5776;
  t5848 = t4235*t5799;
  t5878 = t5847 + t5848;
  t5923 = t4235*t5776;
  t5924 = t4322*t5799;
  t5941 = t5923 + t5924;
  p_output1[0]=-0.03155 + 0.004500000000000004*t1876 + t3648*t3708 + t1562*t1791*t401 + t2552*t401 - 1.*t2508*t2907*t401 + t3989*t4158 + t4404*t4436 + t4452*t4477 + t4501*t4514 + t4534*t4546 + 0.0306*(t4493*t4514 + t4482*t4546) - 1.1312*(t4482*t4514 - 1.*t4493*t4546) - 0.049*t813;
  p_output1[1]=0. - 0.135*(1. - 1.*t4778) - 1.*t1876*t2552*t4778 - 0.1305*t401*t4778 - 1.*t4778*t4906 + t4982*t4992 - 1.*t1791*t5020 - 1.*t2907*t5076 - 1.*t3648*t5128 - 1.*t3989*t5196 - 1.*t4404*t5287 - 1.*t4452*t5313 - 1.*t4501*t5371 - 1.*t4534*t5409 - 0.0306*(t4493*t5371 + t4482*t5409) + 1.1312*(t4482*t5371 - 1.*t4493*t5409);
  p_output1[2]=-0.07996 + 0.135*t4982 - 1.*t1876*t2552*t4982 - 0.1305*t401*t4982 - 1.*t4906*t4982 - 1.*t4778*t4992 - 1.*t1791*t5669 - 1.*t2907*t5702 - 1.*t3648*t5723 - 1.*t3989*t5743 - 1.*t4404*t5776 - 1.*t4452*t5799 - 1.*t4501*t5878 - 1.*t4534*t5941 - 0.0306*(t4493*t5878 + t4482*t5941) + 1.1312*(t4482*t5878 - 1.*t4493*t5941);
}



void p_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
