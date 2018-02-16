/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t20;
  double t165;
  double t639;
  double t861;
  double t972;
  double t978;
  double t1235;
  double t1577;
  double t1957;
  double t1971;
  double t2105;
  double t2123;
  double t2216;
  double t2248;
  double t2322;
  double t2490;
  double t2559;
  double t2617;
  double t2830;
  double t2876;
  double t2960;
  double t3114;
  double t3351;
  double t3353;
  double t3358;
  double t3537;
  double t3548;
  double t3579;
  double t3672;
  double t3684;
  double t3747;
  double t3852;
  double t4002;
  double t4062;
  double t4076;
  double t4551;
  double t4628;
  double t4688;
  double t5024;
  double t5042;
  double t5097;
  double t5169;
  double t5347;
  double t5383;
  double t5384;
  double t5491;
  double t5521;
  double t5533;
  double t468;
  double t503;
  double t604;
  double t695;
  double t714;
  double t1072;
  double t1400;
  double t1418;
  double t1794;
  double t1800;
  double t1832;
  double t2113;
  double t2140;
  double t2186;
  double t2389;
  double t2411;
  double t2441;
  double t3041;
  double t3130;
  double t3227;
  double t5797;
  double t5803;
  double t5836;
  double t5929;
  double t5953;
  double t6037;
  double t3491;
  double t3506;
  double t3528;
  double t3827;
  double t3866;
  double t3892;
  double t6110;
  double t6211;
  double t6223;
  double t6284;
  double t6298;
  double t6302;
  double t4172;
  double t4412;
  double t4429;
  double t5142;
  double t5241;
  double t5320;
  double t6332;
  double t6344;
  double t6349;
  double t6367;
  double t6372;
  double t6375;
  double t5409;
  double t5422;
  double t5440;
  double t6393;
  double t6397;
  double t6401;
  double t6422;
  double t6428;
  double t6439;
  double t5759;
  double t5779;
  double t5877;
  double t6057;
  double t6258;
  double t6328;
  double t6354;
  double t6378;
  double t6412;
  double t6445;
  double t6448;
  double t6462;
  double t6467;
  double t6471;
  double t6476;
  double t6479;
  double t6485;
  double t6487;
  double t1463;
  double t1951;
  double t2334;
  double t2653;
  double t3400;
  double t3611;
  double t4157;
  double t4985;
  double t5407;
  double t5539;
  double t5558;
  double t5560;
  double t5561;
  double t5570;
  double t5620;
  double t5626;
  double t5670;
  double t5684;
  double t6492;
  double t6499;
  double t6600;
  double t6606;
  double t6612;
  double t6621;
  double t6627;
  double t6628;
  double t6636;
  double t6652;
  double t6657;
  double t6667;
  double t6676;
  double t6677;
  double t6684;
  double t6686;
  double t6691;
  double t6722;
  double t6732;
  double t6739;
  double t6533;
  double t6570;
  double t6578;
  double t6586;
  double t6592;
  double t6596;
  double t6620;
  double t6632;
  double t6663;
  double t6680;
  double t6705;
  double t6744;
  double t6745;
  double t6751;
  double t6753;
  double t6758;
  double t6765;
  double t6766;
  double t6772;
  double t6796;
  double t6805;
  double t6503;
  double t6541;
  double t6856;
  double t6857;
  double t6895;
  double t6897;
  double t6900;
  double t6892;
  double t6894;
  double t6930;
  double t6939;
  double t6940;
  double t6945;
  double t6864;
  double t6872;
  double t6874;
  double t7032;
  double t7042;
  double t7047;
  double t7062;
  double t7063;
  double t7064;
  double t7000;
  double t7005;
  double t7014;
  double t7133;
  double t7163;
  double t7174;
  double t7184;
  double t7185;
  double t7191;
  double t7111;
  double t7117;
  double t7121;
  double t7241;
  double t7243;
  double t7246;
  double t7254;
  double t7256;
  double t7257;
  double t7224;
  double t7225;
  double t7232;
  double t7300;
  double t7308;
  double t7309;
  double t7316;
  double t7324;
  double t7325;
  double t7282;
  double t7292;
  double t7295;
  t20 = Sin(var1[0]);
  t165 = Cos(var1[1]);
  t639 = Sin(var1[1]);
  t861 = Cos(var1[2]);
  t972 = -1.*t861;
  t978 = 1. + t972;
  t1235 = Sin(var1[2]);
  t1577 = Cos(var1[0]);
  t1957 = Cos(var1[3]);
  t1971 = -1.*t1957;
  t2105 = 1. + t1971;
  t2123 = Sin(var1[3]);
  t2216 = t861*t20*t639;
  t2248 = t1577*t1235;
  t2322 = t2216 + t2248;
  t2490 = t1577*t861;
  t2559 = -1.*t20*t639*t1235;
  t2617 = t2490 + t2559;
  t2830 = Cos(var1[4]);
  t2876 = -1.*t2830;
  t2960 = 1. + t2876;
  t3114 = Sin(var1[4]);
  t3351 = -1.*t2123*t2322;
  t3353 = t1957*t2617;
  t3358 = t3351 + t3353;
  t3537 = t1957*t2322;
  t3548 = t2123*t2617;
  t3579 = t3537 + t3548;
  t3672 = Cos(var1[5]);
  t3684 = -1.*t3672;
  t3747 = 1. + t3684;
  t3852 = Sin(var1[5]);
  t4002 = t3114*t3358;
  t4062 = t2830*t3579;
  t4076 = t4002 + t4062;
  t4551 = t2830*t3358;
  t4628 = -1.*t3114*t3579;
  t4688 = t4551 + t4628;
  t5024 = Cos(var1[6]);
  t5042 = -1.*t5024;
  t5097 = 1. + t5042;
  t5169 = Sin(var1[6]);
  t5347 = -1.*t3852*t4076;
  t5383 = t3672*t4688;
  t5384 = t5347 + t5383;
  t5491 = t3672*t4076;
  t5521 = t3852*t4688;
  t5533 = t5491 + t5521;
  t468 = -1.*t165;
  t503 = 1. + t468;
  t604 = 0.135*t503;
  t695 = 0.049*t639;
  t714 = 0. + t604 + t695;
  t1072 = -0.049*t978;
  t1400 = -0.09*t1235;
  t1418 = 0. + t1072 + t1400;
  t1794 = -0.09*t978;
  t1800 = 0.049*t1235;
  t1832 = 0. + t1794 + t1800;
  t2113 = -0.049*t2105;
  t2140 = -0.21*t2123;
  t2186 = 0. + t2113 + t2140;
  t2389 = -0.21*t2105;
  t2411 = 0.049*t2123;
  t2441 = 0. + t2389 + t2411;
  t3041 = -0.2707*t2960;
  t3130 = 0.0016*t3114;
  t3227 = 0. + t3041 + t3130;
  t5797 = t1577*t861*t639;
  t5803 = -1.*t20*t1235;
  t5836 = t5797 + t5803;
  t5929 = -1.*t861*t20;
  t5953 = -1.*t1577*t639*t1235;
  t6037 = t5929 + t5953;
  t3491 = -0.0016*t2960;
  t3506 = -0.2707*t3114;
  t3528 = 0. + t3491 + t3506;
  t3827 = 0.0184*t3747;
  t3866 = -0.7055*t3852;
  t3892 = 0. + t3827 + t3866;
  t6110 = -1.*t2123*t5836;
  t6211 = t1957*t6037;
  t6223 = t6110 + t6211;
  t6284 = t1957*t5836;
  t6298 = t2123*t6037;
  t6302 = t6284 + t6298;
  t4172 = -0.7055*t3747;
  t4412 = -0.0184*t3852;
  t4429 = 0. + t4172 + t4412;
  t5142 = -1.1135*t5097;
  t5241 = 0.0216*t5169;
  t5320 = 0. + t5142 + t5241;
  t6332 = t3114*t6223;
  t6344 = t2830*t6302;
  t6349 = t6332 + t6344;
  t6367 = t2830*t6223;
  t6372 = -1.*t3114*t6302;
  t6375 = t6367 + t6372;
  t5409 = -0.0216*t5097;
  t5422 = -1.1135*t5169;
  t5440 = 0. + t5409 + t5422;
  t6393 = -1.*t3852*t6349;
  t6397 = t3672*t6375;
  t6401 = t6393 + t6397;
  t6422 = t3672*t6349;
  t6428 = t3852*t6375;
  t6439 = t6422 + t6428;
  t5759 = -1.*t1577*t639*t1418;
  t5779 = t20*t1832;
  t5877 = -1.*t2186*t5836;
  t6057 = -1.*t2441*t6037;
  t6258 = -1.*t3227*t6223;
  t6328 = -1.*t3528*t6302;
  t6354 = -1.*t3892*t6349;
  t6378 = -1.*t4429*t6375;
  t6412 = -1.*t5320*t6401;
  t6445 = -1.*t5440*t6439;
  t6448 = t5169*t6401;
  t6462 = t5024*t6439;
  t6467 = t6448 + t6462;
  t6471 = -0.0306*t6467;
  t6476 = t5024*t6401;
  t6479 = -1.*t5169*t6439;
  t6485 = t6476 + t6479;
  t6487 = 1.1312*t6485;
  t1463 = -1.*t20*t639*t1418;
  t1951 = -1.*t1577*t1832;
  t2334 = -1.*t2186*t2322;
  t2653 = -1.*t2441*t2617;
  t3400 = -1.*t3227*t3358;
  t3611 = -1.*t3528*t3579;
  t4157 = -1.*t3892*t4076;
  t4985 = -1.*t4429*t4688;
  t5407 = -1.*t5320*t5384;
  t5539 = -1.*t5440*t5533;
  t5558 = t5169*t5384;
  t5560 = t5024*t5533;
  t5561 = t5558 + t5560;
  t5570 = -0.0306*t5561;
  t5620 = t5024*t5384;
  t5626 = -1.*t5169*t5533;
  t5670 = t5620 + t5626;
  t5684 = 1.1312*t5670;
  t6492 = -1.*t1577;
  t6499 = 0. + t6492;
  t6600 = -1.*t165*t861*t2123;
  t6606 = -1.*t1957*t165*t1235;
  t6612 = t6600 + t6606;
  t6621 = t1957*t165*t861;
  t6627 = -1.*t165*t2123*t1235;
  t6628 = t6621 + t6627;
  t6636 = t3114*t6612;
  t6652 = t2830*t6628;
  t6657 = t6636 + t6652;
  t6667 = t2830*t6612;
  t6676 = -1.*t3114*t6628;
  t6677 = t6667 + t6676;
  t6684 = -1.*t3852*t6657;
  t6686 = t3672*t6677;
  t6691 = t6684 + t6686;
  t6722 = t3672*t6657;
  t6732 = t3852*t6677;
  t6739 = t6722 + t6732;
  t6533 = 0. + t20;
  t6570 = 0.049*t165;
  t6578 = t165*t861*t2186;
  t6586 = 0.004500000000000004*t639;
  t6592 = t165*t1418;
  t6596 = -1.*t165*t2441*t1235;
  t6620 = t3227*t6612;
  t6632 = t3528*t6628;
  t6663 = t3892*t6657;
  t6680 = t4429*t6677;
  t6705 = t5320*t6691;
  t6744 = t5440*t6739;
  t6745 = t5169*t6691;
  t6751 = t5024*t6739;
  t6753 = t6745 + t6751;
  t6758 = 0.0306*t6753;
  t6765 = t5024*t6691;
  t6766 = -1.*t5169*t6739;
  t6772 = t6765 + t6766;
  t6796 = -1.1312*t6772;
  t6805 = 0. + t6570 + t6578 + t6586 + t6592 + t6596 + t6620 + t6632 + t6663 + t6680 + t6705 + t6744 + t6758 + t6796;
  t6503 = 0.004500000000000004*t1577*t165;
  t6541 = 0.004500000000000004*t165*t20;
  t6856 = t165*t20;
  t6857 = 0. + t6856;
  t6895 = -0.049*t2322;
  t6897 = -0.09*t2617;
  t6900 = 0. + t6541 + t6895 + t2334 + t6897 + t2653 + t3400 + t3611 + t4157 + t4985 + t5407 + t5539 + t5570 + t5684;
  t6892 = t1577*t165;
  t6894 = 0. + t6892;
  t6930 = 0.049*t165*t861;
  t6939 = -0.09*t165*t1235;
  t6940 = 0. + t6930 + t6578 + t6586 + t6939 + t6596 + t6620 + t6632 + t6663 + t6680 + t6705 + t6744 + t6758 + t6796;
  t6945 = 0. + t639;
  t6864 = -0.049*t5836;
  t6872 = -0.09*t6037;
  t6874 = 0. + t6503 + t6864 + t5877 + t6872 + t6057 + t6258 + t6328 + t6354 + t6378 + t6412 + t6445 + t6471 + t6487;
  t7032 = -0.21*t3358;
  t7042 = -0.049*t3579;
  t7047 = 0. + t7032 + t3400 + t7042 + t3611 + t4157 + t4985 + t5407 + t5539 + t5570 + t5684;
  t7062 = 0.21*t6612;
  t7063 = 0.049*t6628;
  t7064 = 0. + t7062 + t6620 + t7063 + t6632 + t6663 + t6680 + t6705 + t6744 + t6758 + t6796;
  t7000 = -0.21*t6223;
  t7005 = -0.049*t6302;
  t7014 = 0. + t7000 + t6258 + t7005 + t6328 + t6354 + t6378 + t6412 + t6445 + t6471 + t6487;
  t7133 = -0.0016*t4076;
  t7163 = -0.2707*t4688;
  t7174 = 0. + t7133 + t4157 + t7163 + t4985 + t5407 + t5539 + t5570 + t5684;
  t7184 = 0.0016*t6657;
  t7185 = 0.2707*t6677;
  t7191 = 0. + t7184 + t6663 + t7185 + t6680 + t6705 + t6744 + t6758 + t6796;
  t7111 = -0.0016*t6349;
  t7117 = -0.2707*t6375;
  t7121 = 0. + t7111 + t6354 + t7117 + t6378 + t6412 + t6445 + t6471 + t6487;
  t7241 = -0.7055*t5384;
  t7243 = 0.0184*t5533;
  t7246 = 0. + t7241 + t5407 + t7243 + t5539 + t5570 + t5684;
  t7254 = 0.7055*t6691;
  t7256 = -0.0184*t6739;
  t7257 = 0. + t7254 + t6705 + t7256 + t6744 + t6758 + t6796;
  t7224 = -0.7055*t6401;
  t7225 = 0.0184*t6439;
  t7232 = 0. + t7224 + t6412 + t7225 + t6445 + t6471 + t6487;
  t7300 = -0.052199999999999996*t5561;
  t7308 = 0.01770000000000005*t5670;
  t7309 = 0. + t7300 + t7308;
  t7316 = 0.052199999999999996*t6753;
  t7324 = -0.01770000000000005*t6772;
  t7325 = 0. + t7316 + t7324;
  t7282 = -0.052199999999999996*t6467;
  t7292 = 0.01770000000000005*t6485;
  t7295 = 0. + t7282 + t7292;

  p_output1(0)=0.;
  p_output1(1)=0. - 1.*(0. + t1463 + t1951 + 0.135*t20 - 0.1305*t165*t20 + t2334 + t2653 + t3400 + t3611 + t4157 + t4985 + t5407 + t5539 + t5570 + t5684 - 1.*t20*t714);
  p_output1(2)=0. + 0.135*t1577 - 0.1305*t1577*t165 + t5759 + t5779 + t5877 + t6057 + t6258 + t6328 + t6354 + t6378 + t6412 + t6445 + t6471 + t6487 - 1.*t1577*t714;
  p_output1(3)=-1.*t6499*(0. + 0.09*t20 + t5759 + t5779 + t5877 + t6057 + t6258 + t6328 + t6354 + t6378 - 0.049*t1577*t639 + t6412 + t6445 + t6471 + t6487 + t6503) + t6533*(0. + t1463 - 0.09*t1577 + t1951 + t2334 + t2653 + t3400 + t3611 + t4157 + t4985 + t5407 + t5539 + t5570 + t5684 - 0.049*t20*t639 + t6541);
  p_output1(4)=0. + t6499*t6805;
  p_output1(5)=0. - 1.*t6533*t6805;
  p_output1(6)=-1.*t6857*t6874 + t6894*t6900;
  p_output1(7)=t6857*t6940 - 1.*t6900*t6945;
  p_output1(8)=-1.*t6894*t6940 + t6874*t6945;
  p_output1(9)=-1.*t6857*t7014 + t6894*t7047;
  p_output1(10)=-1.*t6945*t7047 + t6857*t7064;
  p_output1(11)=t6945*t7014 - 1.*t6894*t7064;
  p_output1(12)=-1.*t6857*t7121 + t6894*t7174;
  p_output1(13)=-1.*t6945*t7174 + t6857*t7191;
  p_output1(14)=t6945*t7121 - 1.*t6894*t7191;
  p_output1(15)=-1.*t6857*t7232 + t6894*t7246;
  p_output1(16)=-1.*t6945*t7246 + t6857*t7257;
  p_output1(17)=t6945*t7232 - 1.*t6894*t7257;
  p_output1(18)=-1.*t6857*t7295 + t6894*t7309;
  p_output1(19)=-1.*t6945*t7309 + t6857*t7325;
  p_output1(20)=t6945*t7295 - 1.*t6894*t7325;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
}


       
void Jv_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
