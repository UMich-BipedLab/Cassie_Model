/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_RightToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t237;
  double t330;
  double t630;
  double t467;
  double t998;
  double t1094;
  double t967;
  double t1400;
  double t1503;
  double t1698;
  double t1072;
  double t1145;
  double t1345;
  double t1724;
  double t941;
  double t2154;
  double t2165;
  double t2389;
  double t1392;
  double t1800;
  double t1820;
  double t2481;
  double t938;
  double t2676;
  double t2822;
  double t2871;
  double t2113;
  double t2490;
  double t2577;
  double t2905;
  double t906;
  double t3059;
  double t3083;
  double t3096;
  double t2610;
  double t2921;
  double t2925;
  double t3130;
  double t4096;
  double t4110;
  double t4172;
  double t3734;
  double t3827;
  double t3889;
  double t4447;
  double t4453;
  double t4460;
  double t4002;
  double t4400;
  double t4444;
  double t4787;
  double t4799;
  double t4814;
  double t4445;
  double t4470;
  double t4551;
  double t4970;
  double t4972;
  double t5036;
  double t4760;
  double t4833;
  double t4947;
  double t5491;
  double t5506;
  double t5521;
  double t5336;
  double t5362;
  double t5422;
  double t5620;
  double t5670;
  double t5684;
  double t5470;
  double t5560;
  double t5561;
  double t5739;
  double t5750;
  double t5779;
  double t5595;
  double t5696;
  double t5719;
  double t3041;
  double t3205;
  double t3237;
  double t3353;
  double t3362;
  double t3537;
  double t4965;
  double t5043;
  double t5110;
  double t5142;
  double t5143;
  double t5161;
  double t5721;
  double t5797;
  double t5899;
  double t5936;
  double t5970;
  double t5997;
  double t6534;
  double t6538;
  double t6621;
  double t6632;
  double t6753;
  double t6758;
  double t6856;
  double t6864;
  double t6901;
  double t6912;
  double t6476;
  double t6485;
  double t6489;
  double t6499;
  double t6503;
  double t6543;
  double t6548;
  double t6551;
  double t6586;
  double t6592;
  double t6617;
  double t6652;
  double t6674;
  double t6677;
  double t6691;
  double t6705;
  double t6722;
  double t6772;
  double t6792;
  double t6796;
  double t6825;
  double t6826;
  double t6834;
  double t6872;
  double t6877;
  double t6882;
  double t6889;
  double t6892;
  double t6895;
  double t6918;
  double t6921;
  double t6930;
  double t6944;
  double t6953;
  double t6955;
  t237 = Cos(var1[8]);
  t330 = Sin(var1[7]);
  t630 = Sin(var1[8]);
  t467 = Cos(var1[7]);
  t998 = Cos(var1[9]);
  t1094 = Sin(var1[9]);
  t967 = Cos(var1[10]);
  t1400 = t467*t998;
  t1503 = -1.*t330*t630*t1094;
  t1698 = t1400 + t1503;
  t1072 = t998*t330*t630;
  t1145 = t467*t1094;
  t1345 = t1072 + t1145;
  t1724 = Sin(var1[10]);
  t941 = Cos(var1[11]);
  t2154 = t967*t1698;
  t2165 = -1.*t1345*t1724;
  t2389 = t2154 + t2165;
  t1392 = t967*t1345;
  t1800 = t1698*t1724;
  t1820 = t1392 + t1800;
  t2481 = Sin(var1[11]);
  t938 = Cos(var1[12]);
  t2676 = t941*t2389;
  t2822 = -1.*t1820*t2481;
  t2871 = t2676 + t2822;
  t2113 = t941*t1820;
  t2490 = t2389*t2481;
  t2577 = t2113 + t2490;
  t2905 = Sin(var1[12]);
  t906 = Cos(var1[13]);
  t3059 = t938*t2871;
  t3083 = -1.*t2577*t2905;
  t3096 = t3059 + t3083;
  t2610 = t938*t2577;
  t2921 = t2871*t2905;
  t2925 = t2610 + t2921;
  t3130 = Sin(var1[13]);
  t4096 = -1.*t998*t330;
  t4110 = -1.*t467*t630*t1094;
  t4172 = t4096 + t4110;
  t3734 = t467*t998*t630;
  t3827 = -1.*t330*t1094;
  t3889 = t3734 + t3827;
  t4447 = t967*t4172;
  t4453 = -1.*t3889*t1724;
  t4460 = t4447 + t4453;
  t4002 = t967*t3889;
  t4400 = t4172*t1724;
  t4444 = t4002 + t4400;
  t4787 = t941*t4460;
  t4799 = -1.*t4444*t2481;
  t4814 = t4787 + t4799;
  t4445 = t941*t4444;
  t4470 = t4460*t2481;
  t4551 = t4445 + t4470;
  t4970 = t938*t4814;
  t4972 = -1.*t4551*t2905;
  t5036 = t4970 + t4972;
  t4760 = t938*t4551;
  t4833 = t4814*t2905;
  t4947 = t4760 + t4833;
  t5491 = -1.*t237*t967*t1094;
  t5506 = -1.*t237*t998*t1724;
  t5521 = t5491 + t5506;
  t5336 = t237*t998*t967;
  t5362 = -1.*t237*t1094*t1724;
  t5422 = t5336 + t5362;
  t5620 = t941*t5521;
  t5670 = -1.*t5422*t2481;
  t5684 = t5620 + t5670;
  t5470 = t941*t5422;
  t5560 = t5521*t2481;
  t5561 = t5470 + t5560;
  t5739 = t938*t5684;
  t5750 = -1.*t5561*t2905;
  t5779 = t5739 + t5750;
  t5595 = t938*t5561;
  t5696 = t5684*t2905;
  t5719 = t5595 + t5696;
  t3041 = t906*t2925;
  t3205 = t3096*t3130;
  t3237 = t3041 + t3205;
  t3353 = t906*t3096;
  t3362 = -1.*t2925*t3130;
  t3537 = t3353 + t3362;
  t4965 = t906*t4947;
  t5043 = t5036*t3130;
  t5110 = t4965 + t5043;
  t5142 = t906*t5036;
  t5143 = -1.*t4947*t3130;
  t5161 = t5142 + t5143;
  t5721 = t906*t5719;
  t5797 = t5779*t3130;
  t5899 = t5721 + t5797;
  t5936 = t906*t5779;
  t5970 = -1.*t5719*t3130;
  t5997 = t5936 + t5970;
  t6534 = -1.*t998;
  t6538 = 1. + t6534;
  t6621 = -1.*t967;
  t6632 = 1. + t6621;
  t6753 = -1.*t941;
  t6758 = 1. + t6753;
  t6856 = -1.*t938;
  t6864 = 1. + t6856;
  t6901 = -1.*t906;
  t6912 = 1. + t6901;
  t6476 = -1.*t237;
  t6485 = 1. + t6476;
  t6489 = -0.135*t6485;
  t6499 = 0.049*t630;
  t6503 = 0. + t6489 + t6499;
  t6543 = -0.049*t6538;
  t6548 = -0.09*t1094;
  t6551 = 0. + t6543 + t6548;
  t6586 = -0.09*t6538;
  t6592 = 0.049*t1094;
  t6617 = 0. + t6586 + t6592;
  t6652 = -0.049*t6632;
  t6674 = -0.21*t1724;
  t6677 = 0. + t6652 + t6674;
  t6691 = -0.21*t6632;
  t6705 = 0.049*t1724;
  t6722 = 0. + t6691 + t6705;
  t6772 = -0.0016*t6758;
  t6792 = -0.2707*t2481;
  t6796 = 0. + t6772 + t6792;
  t6825 = -0.2707*t6758;
  t6826 = 0.0016*t2481;
  t6834 = 0. + t6825 + t6826;
  t6872 = 0.0184*t6864;
  t6877 = -0.7055*t2905;
  t6882 = 0. + t6872 + t6877;
  t6889 = -0.7055*t6864;
  t6892 = -0.0184*t2905;
  t6895 = 0. + t6889 + t6892;
  t6918 = -0.0216*t6912;
  t6921 = -1.1135*t3130;
  t6930 = 0. + t6918 + t6921;
  t6944 = -1.1135*t6912;
  t6953 = 0.0216*t3130;
  t6955 = 0. + t6944 + t6953;

  p_output1(0)=0. + t237*t330;
  p_output1(1)=0. - 1.*t237*t467;
  p_output1(2)=0. + t630;
  p_output1(3)=0.;
  p_output1(4)=0. - 0.642788*t3237 - 0.766044*t3537;
  p_output1(5)=0. + 0.642788*t5110 + 0.766044*t5161;
  p_output1(6)=0. + 0.642788*t5899 + 0.766044*t5997;
  p_output1(7)=0.;
  p_output1(8)=0. + 0.766044*t3237 - 0.642788*t3537;
  p_output1(9)=0. - 0.766044*t5110 + 0.642788*t5161;
  p_output1(10)=0. - 0.766044*t5899 + 0.642788*t5997;
  p_output1(11)=0.;
  p_output1(12)=0.24925 - 0.0306*t3237 - 0.135*t330 + 0.1305*t237*t330 + 1.1312*t3537 - 1.*t330*t6503 - 1.*t330*t630*t6551 - 1.*t467*t6617 - 1.*t1345*t6677 - 1.*t1698*t6722 - 1.*t1820*t6796 - 1.*t2389*t6834 - 1.*t2577*t6882 - 1.*t2871*t6895 - 1.*t2925*t6930 - 1.*t3096*t6955;
  p_output1(13)=-0.0302 - 0.135*(1. - 1.*t467) - 0.1305*t237*t467 + 0.0306*t5110 - 1.1312*t5161 + t467*t6503 + t467*t630*t6551 - 1.*t330*t6617 + t3889*t6677 + t4172*t6722 + t4444*t6796 + t4460*t6834 + t4551*t6882 + t4814*t6895 + t4947*t6930 + t5036*t6955;
  p_output1(14)=-0.047 + 0.0306*t5899 - 1.1312*t5997 - 0.004500000000000004*t630 - 0.049*t6485 + t237*t6551 - 1.*t1094*t237*t6722 + t5422*t6796 + t5521*t6834 + t5561*t6882 + t5684*t6895 + t5719*t6930 + t5779*t6955 + t237*t6677*t998;
  p_output1(15)=1.;
}


       
void H_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
