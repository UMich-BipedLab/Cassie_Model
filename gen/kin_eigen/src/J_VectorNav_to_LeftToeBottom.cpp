/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t80;
  double t451;
  double t652;
  double t969;
  double t1038;
  double t1047;
  double t1136;
  double t1228;
  double t1637;
  double t1684;
  double t1707;
  double t1952;
  double t2140;
  double t2148;
  double t2218;
  double t2660;
  double t2732;
  double t2856;
  double t2911;
  double t3006;
  double t3062;
  double t3142;
  double t3297;
  double t3344;
  double t3437;
  double t3664;
  double t3786;
  double t3807;
  double t3985;
  double t3996;
  double t4079;
  double t4156;
  double t4328;
  double t4429;
  double t4450;
  double t4936;
  double t4959;
  double t4964;
  double t5028;
  double t5056;
  double t5065;
  double t5117;
  double t5131;
  double t5142;
  double t5166;
  double t5422;
  double t5469;
  double t5474;
  double t530;
  double t577;
  double t639;
  double t782;
  double t793;
  double t1103;
  double t1147;
  double t1166;
  double t1235;
  double t1236;
  double t1297;
  double t1794;
  double t1991;
  double t2019;
  double t2490;
  double t2503;
  double t2625;
  double t3114;
  double t3227;
  double t3294;
  double t5824;
  double t5825;
  double t5826;
  double t5869;
  double t5873;
  double t5903;
  double t3491;
  double t3567;
  double t3618;
  double t4144;
  double t4177;
  double t4217;
  double t5932;
  double t5948;
  double t5980;
  double t6042;
  double t6068;
  double t6070;
  double t4537;
  double t4551;
  double t4850;
  double t5084;
  double t5118;
  double t5125;
  double t6097;
  double t6102;
  double t6113;
  double t6182;
  double t6193;
  double t6197;
  double t5347;
  double t5365;
  double t5404;
  double t6221;
  double t6223;
  double t6235;
  double t6247;
  double t6258;
  double t6267;
  double t6336;
  double t6337;
  double t5821;
  double t5822;
  double t5857;
  double t5917;
  double t5981;
  double t6089;
  double t6173;
  double t6219;
  double t6237;
  double t6268;
  double t6284;
  double t6291;
  double t6296;
  double t6298;
  double t6300;
  double t6303;
  double t6312;
  double t6316;
  double t6334;
  double t1206;
  double t1304;
  double t2242;
  double t2882;
  double t3478;
  double t3821;
  double t4456;
  double t4971;
  double t5171;
  double t5494;
  double t5498;
  double t5521;
  double t5558;
  double t5560;
  double t5561;
  double t5582;
  double t5670;
  double t5684;
  double t6416;
  double t6424;
  double t6439;
  double t6448;
  double t6453;
  double t6460;
  double t6469;
  double t6471;
  double t6475;
  double t6479;
  double t6484;
  double t6485;
  double t6488;
  double t6489;
  double t6492;
  double t6503;
  double t6508;
  double t6512;
  double t6393;
  double t6397;
  double t6401;
  double t6409;
  double t6415;
  double t6445;
  double t6467;
  double t6476;
  double t6487;
  double t6499;
  double t6515;
  double t6518;
  double t6520;
  double t6523;
  double t6527;
  double t6528;
  double t6529;
  double t6531;
  double t6533;
  double t6539;
  double t6570;
  double t6576;
  double t6339;
  double t6553;
  double t6554;
  double t6367;
  double t6552;
  double t6596;
  double t6600;
  double t6602;
  double t6619;
  double t6620;
  double t6626;
  double t6578;
  double t6580;
  double t6588;
  double t6677;
  double t6680;
  double t6681;
  double t6705;
  double t6713;
  double t6727;
  double t6657;
  double t6666;
  double t6669;
  double t6796;
  double t6797;
  double t6798;
  double t6826;
  double t6834;
  double t6838;
  double t6766;
  double t6772;
  double t6775;
  double t6897;
  double t6900;
  double t6906;
  double t6921;
  double t6930;
  double t6931;
  double t6890;
  double t6892;
  double t6893;
  double t6995;
  double t7000;
  double t7001;
  double t7021;
  double t7023;
  double t7024;
  double t6970;
  double t6984;
  double t6989;
  t80 = Sin(var1[0]);
  t451 = Cos(var1[1]);
  t652 = Sin(var1[1]);
  t969 = Cos(var1[2]);
  t1038 = -1.*t969;
  t1047 = 1. + t1038;
  t1136 = Sin(var1[2]);
  t1228 = Cos(var1[0]);
  t1637 = Cos(var1[3]);
  t1684 = -1.*t1637;
  t1707 = 1. + t1684;
  t1952 = Sin(var1[3]);
  t2140 = t969*t80*t652;
  t2148 = t1228*t1136;
  t2218 = t2140 + t2148;
  t2660 = t1228*t969;
  t2732 = -1.*t80*t652*t1136;
  t2856 = t2660 + t2732;
  t2911 = Cos(var1[4]);
  t3006 = -1.*t2911;
  t3062 = 1. + t3006;
  t3142 = Sin(var1[4]);
  t3297 = -1.*t1952*t2218;
  t3344 = t1637*t2856;
  t3437 = t3297 + t3344;
  t3664 = t1637*t2218;
  t3786 = t1952*t2856;
  t3807 = t3664 + t3786;
  t3985 = Cos(var1[5]);
  t3996 = -1.*t3985;
  t4079 = 1. + t3996;
  t4156 = Sin(var1[5]);
  t4328 = t3142*t3437;
  t4429 = t2911*t3807;
  t4450 = t4328 + t4429;
  t4936 = t2911*t3437;
  t4959 = -1.*t3142*t3807;
  t4964 = t4936 + t4959;
  t5028 = Cos(var1[6]);
  t5056 = -1.*t5028;
  t5065 = 1. + t5056;
  t5117 = Sin(var1[6]);
  t5131 = -1.*t4156*t4450;
  t5142 = t3985*t4964;
  t5166 = t5131 + t5142;
  t5422 = t3985*t4450;
  t5469 = t4156*t4964;
  t5474 = t5422 + t5469;
  t530 = -1.*t451;
  t577 = 1. + t530;
  t639 = 0.135*t577;
  t782 = 0.049*t652;
  t793 = 0. + t639 + t782;
  t1103 = -0.049*t1047;
  t1147 = -0.09*t1136;
  t1166 = 0. + t1103 + t1147;
  t1235 = -0.09*t1047;
  t1236 = 0.049*t1136;
  t1297 = 0. + t1235 + t1236;
  t1794 = -0.049*t1707;
  t1991 = -0.21*t1952;
  t2019 = 0. + t1794 + t1991;
  t2490 = -0.21*t1707;
  t2503 = 0.049*t1952;
  t2625 = 0. + t2490 + t2503;
  t3114 = -0.2707*t3062;
  t3227 = 0.0016*t3142;
  t3294 = 0. + t3114 + t3227;
  t5824 = t1228*t969*t652;
  t5825 = -1.*t80*t1136;
  t5826 = t5824 + t5825;
  t5869 = -1.*t969*t80;
  t5873 = -1.*t1228*t652*t1136;
  t5903 = t5869 + t5873;
  t3491 = -0.0016*t3062;
  t3567 = -0.2707*t3142;
  t3618 = 0. + t3491 + t3567;
  t4144 = 0.0184*t4079;
  t4177 = -0.7055*t4156;
  t4217 = 0. + t4144 + t4177;
  t5932 = -1.*t1952*t5826;
  t5948 = t1637*t5903;
  t5980 = t5932 + t5948;
  t6042 = t1637*t5826;
  t6068 = t1952*t5903;
  t6070 = t6042 + t6068;
  t4537 = -0.7055*t4079;
  t4551 = -0.0184*t4156;
  t4850 = 0. + t4537 + t4551;
  t5084 = -1.1135*t5065;
  t5118 = 0.0216*t5117;
  t5125 = 0. + t5084 + t5118;
  t6097 = t3142*t5980;
  t6102 = t2911*t6070;
  t6113 = t6097 + t6102;
  t6182 = t2911*t5980;
  t6193 = -1.*t3142*t6070;
  t6197 = t6182 + t6193;
  t5347 = -0.0216*t5065;
  t5365 = -1.1135*t5117;
  t5404 = 0. + t5347 + t5365;
  t6221 = -1.*t4156*t6113;
  t6223 = t3985*t6197;
  t6235 = t6221 + t6223;
  t6247 = t3985*t6113;
  t6258 = t4156*t6197;
  t6267 = t6247 + t6258;
  t6336 = -1.*t1228;
  t6337 = 0. + t6336;
  t5821 = -1.*t1228*t652*t1166;
  t5822 = t80*t1297;
  t5857 = -1.*t2019*t5826;
  t5917 = -1.*t2625*t5903;
  t5981 = -1.*t3294*t5980;
  t6089 = -1.*t3618*t6070;
  t6173 = -1.*t4217*t6113;
  t6219 = -1.*t4850*t6197;
  t6237 = -1.*t5125*t6235;
  t6268 = -1.*t5404*t6267;
  t6284 = t5117*t6235;
  t6291 = t5028*t6267;
  t6296 = t6284 + t6291;
  t6298 = -0.0306*t6296;
  t6300 = t5028*t6235;
  t6303 = -1.*t5117*t6267;
  t6312 = t6300 + t6303;
  t6316 = 1.1312*t6312;
  t6334 = 0. + t80;
  t1206 = -1.*t80*t652*t1166;
  t1304 = -1.*t1228*t1297;
  t2242 = -1.*t2019*t2218;
  t2882 = -1.*t2625*t2856;
  t3478 = -1.*t3294*t3437;
  t3821 = -1.*t3618*t3807;
  t4456 = -1.*t4217*t4450;
  t4971 = -1.*t4850*t4964;
  t5171 = -1.*t5125*t5166;
  t5494 = -1.*t5404*t5474;
  t5498 = t5117*t5166;
  t5521 = t5028*t5474;
  t5558 = t5498 + t5521;
  t5560 = -0.0306*t5558;
  t5561 = t5028*t5166;
  t5582 = -1.*t5117*t5474;
  t5670 = t5561 + t5582;
  t5684 = 1.1312*t5670;
  t6416 = -1.*t451*t969*t1952;
  t6424 = -1.*t1637*t451*t1136;
  t6439 = t6416 + t6424;
  t6448 = t1637*t451*t969;
  t6453 = -1.*t451*t1952*t1136;
  t6460 = t6448 + t6453;
  t6469 = t3142*t6439;
  t6471 = t2911*t6460;
  t6475 = t6469 + t6471;
  t6479 = t2911*t6439;
  t6484 = -1.*t3142*t6460;
  t6485 = t6479 + t6484;
  t6488 = -1.*t4156*t6475;
  t6489 = t3985*t6485;
  t6492 = t6488 + t6489;
  t6503 = t3985*t6475;
  t6508 = t4156*t6485;
  t6512 = t6503 + t6508;
  t6393 = 0.049*t451;
  t6397 = t451*t969*t2019;
  t6401 = 0.004500000000000004*t652;
  t6409 = t451*t1166;
  t6415 = -1.*t451*t2625*t1136;
  t6445 = t3294*t6439;
  t6467 = t3618*t6460;
  t6476 = t4217*t6475;
  t6487 = t4850*t6485;
  t6499 = t5125*t6492;
  t6515 = t5404*t6512;
  t6518 = t5117*t6492;
  t6520 = t5028*t6512;
  t6523 = t6518 + t6520;
  t6527 = 0.0306*t6523;
  t6528 = t5028*t6492;
  t6529 = -1.*t5117*t6512;
  t6531 = t6528 + t6529;
  t6533 = -1.1312*t6531;
  t6539 = 0. + t6393 + t6397 + t6401 + t6409 + t6415 + t6445 + t6467 + t6476 + t6487 + t6499 + t6515 + t6527 + t6533;
  t6570 = t451*t80;
  t6576 = 0. + t6570;
  t6339 = 0.004500000000000004*t1228*t451;
  t6553 = t1228*t451;
  t6554 = 0. + t6553;
  t6367 = 0.004500000000000004*t451*t80;
  t6552 = 0. + t652;
  t6596 = -0.049*t2218;
  t6600 = -0.09*t2856;
  t6602 = 0. + t6367 + t6596 + t2242 + t6600 + t2882 + t3478 + t3821 + t4456 + t4971 + t5171 + t5494 + t5560 + t5684;
  t6619 = 0.049*t451*t969;
  t6620 = -0.09*t451*t1136;
  t6626 = 0. + t6619 + t6397 + t6401 + t6620 + t6415 + t6445 + t6467 + t6476 + t6487 + t6499 + t6515 + t6527 + t6533;
  t6578 = -0.049*t5826;
  t6580 = -0.09*t5903;
  t6588 = 0. + t6339 + t6578 + t5857 + t6580 + t5917 + t5981 + t6089 + t6173 + t6219 + t6237 + t6268 + t6298 + t6316;
  t6677 = -0.21*t3437;
  t6680 = -0.049*t3807;
  t6681 = 0. + t6677 + t3478 + t6680 + t3821 + t4456 + t4971 + t5171 + t5494 + t5560 + t5684;
  t6705 = 0.21*t6439;
  t6713 = 0.049*t6460;
  t6727 = 0. + t6705 + t6445 + t6713 + t6467 + t6476 + t6487 + t6499 + t6515 + t6527 + t6533;
  t6657 = -0.21*t5980;
  t6666 = -0.049*t6070;
  t6669 = 0. + t6657 + t5981 + t6666 + t6089 + t6173 + t6219 + t6237 + t6268 + t6298 + t6316;
  t6796 = -0.0016*t4450;
  t6797 = -0.2707*t4964;
  t6798 = 0. + t6796 + t4456 + t6797 + t4971 + t5171 + t5494 + t5560 + t5684;
  t6826 = 0.0016*t6475;
  t6834 = 0.2707*t6485;
  t6838 = 0. + t6826 + t6476 + t6834 + t6487 + t6499 + t6515 + t6527 + t6533;
  t6766 = -0.0016*t6113;
  t6772 = -0.2707*t6197;
  t6775 = 0. + t6766 + t6173 + t6772 + t6219 + t6237 + t6268 + t6298 + t6316;
  t6897 = -0.7055*t5166;
  t6900 = 0.0184*t5474;
  t6906 = 0. + t6897 + t5171 + t6900 + t5494 + t5560 + t5684;
  t6921 = 0.7055*t6492;
  t6930 = -0.0184*t6512;
  t6931 = 0. + t6921 + t6499 + t6930 + t6515 + t6527 + t6533;
  t6890 = -0.7055*t6235;
  t6892 = 0.0184*t6267;
  t6893 = 0. + t6890 + t6237 + t6892 + t6268 + t6298 + t6316;
  t6995 = -0.052199999999999996*t5558;
  t7000 = 0.01770000000000005*t5670;
  t7001 = 0. + t6995 + t7000;
  t7021 = 0.052199999999999996*t6523;
  t7023 = -0.01770000000000005*t6531;
  t7024 = 0. + t7021 + t7023;
  t6970 = -0.052199999999999996*t6296;
  t6984 = 0.01770000000000005*t6312;
  t6989 = 0. + t6970 + t6984;

  p_output1(0)=1.;
  p_output1(1)=0.;
  p_output1(2)=0.;
  p_output1(3)=0.;
  p_output1(4)=0. - 1.*(0. + t1206 + t1304 + t2242 + t2882 + t3478 + t3821 + t4456 + t4971 + t5171 + t5494 + t5560 + t5684 + 0.135*t80 - 0.1305*t451*t80 - 1.*t793*t80);
  p_output1(5)=0. + 0.135*t1228 - 0.1305*t1228*t451 + t5821 + t5822 + t5857 + t5917 + t5981 + t6089 + t6173 + t6219 + t6237 + t6268 + t6298 + t6316 - 1.*t1228*t793;
  p_output1(6)=0.;
  p_output1(7)=t6334;
  p_output1(8)=t6337;
  p_output1(9)=-1.*t6337*(0. + t5821 + t5822 + t5857 + t5917 + t5981 + t6089 + t6173 + t6219 + t6237 + t6268 + t6298 + t6316 + t6339 - 0.049*t1228*t652 + 0.09*t80) + t6334*(0. + t1206 - 0.09*t1228 + t1304 + t2242 + t2882 + t3478 + t3821 + t4456 + t4971 + t5171 + t5494 + t5560 + t5684 + t6367 - 0.049*t652*t80);
  p_output1(10)=0. + t6337*t6539;
  p_output1(11)=0. - 1.*t6334*t6539;
  p_output1(12)=t6552;
  p_output1(13)=t6554;
  p_output1(14)=t6576;
  p_output1(15)=-1.*t6576*t6588 + t6554*t6602;
  p_output1(16)=-1.*t6552*t6602 + t6576*t6626;
  p_output1(17)=t6552*t6588 - 1.*t6554*t6626;
  p_output1(18)=t6552;
  p_output1(19)=t6554;
  p_output1(20)=t6576;
  p_output1(21)=-1.*t6576*t6669 + t6554*t6681;
  p_output1(22)=-1.*t6552*t6681 + t6576*t6727;
  p_output1(23)=t6552*t6669 - 1.*t6554*t6727;
  p_output1(24)=t6552;
  p_output1(25)=t6554;
  p_output1(26)=t6576;
  p_output1(27)=-1.*t6576*t6775 + t6554*t6798;
  p_output1(28)=-1.*t6552*t6798 + t6576*t6838;
  p_output1(29)=t6552*t6775 - 1.*t6554*t6838;
  p_output1(30)=t6552;
  p_output1(31)=t6554;
  p_output1(32)=t6576;
  p_output1(33)=-1.*t6576*t6893 + t6554*t6906;
  p_output1(34)=-1.*t6552*t6906 + t6576*t6931;
  p_output1(35)=t6552*t6893 - 1.*t6554*t6931;
  p_output1(36)=t6552;
  p_output1(37)=t6554;
  p_output1(38)=t6576;
  p_output1(39)=-1.*t6576*t6989 + t6554*t7001;
  p_output1(40)=-1.*t6552*t7001 + t6576*t7024;
  p_output1(41)=t6552*t6989 - 1.*t6554*t7024;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
  p_output1(60)=0;
  p_output1(61)=0;
  p_output1(62)=0;
  p_output1(63)=0;
  p_output1(64)=0;
  p_output1(65)=0;
  p_output1(66)=0;
  p_output1(67)=0;
  p_output1(68)=0;
  p_output1(69)=0;
  p_output1(70)=0;
  p_output1(71)=0;
  p_output1(72)=0;
  p_output1(73)=0;
  p_output1(74)=0;
  p_output1(75)=0;
  p_output1(76)=0;
  p_output1(77)=0;
  p_output1(78)=0;
  p_output1(79)=0;
  p_output1(80)=0;
  p_output1(81)=0;
  p_output1(82)=0;
  p_output1(83)=0;
}


       
void J_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
