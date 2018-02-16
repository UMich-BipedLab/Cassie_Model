/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseIMU_to_LeftToeBottom.h"

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
  double t240;
  double t401;
  double t747;
  double t898;
  double t948;
  double t1019;
  double t1088;
  double t1388;
  double t1559;
  double t1587;
  double t1674;
  double t1825;
  double t1945;
  double t1948;
  double t2064;
  double t2375;
  double t2405;
  double t2448;
  double t2542;
  double t2635;
  double t2707;
  double t2837;
  double t3032;
  double t3034;
  double t3044;
  double t3410;
  double t3434;
  double t3477;
  double t3522;
  double t3589;
  double t3667;
  double t3794;
  double t3874;
  double t3911;
  double t3939;
  double t4469;
  double t4685;
  double t4726;
  double t4866;
  double t4887;
  double t5015;
  double t5037;
  double t5040;
  double t5045;
  double t5048;
  double t5235;
  double t5245;
  double t5366;
  double t613;
  double t666;
  double t688;
  double t774;
  double t786;
  double t1035;
  double t1183;
  double t1250;
  double t1430;
  double t1442;
  double t1490;
  double t1752;
  double t1856;
  double t1894;
  double t2217;
  double t2276;
  double t2286;
  double t2788;
  double t2841;
  double t3031;
  double t6374;
  double t6465;
  double t6466;
  double t6519;
  double t6542;
  double t6589;
  double t3110;
  double t3292;
  double t3314;
  double t3745;
  double t3797;
  double t3870;
  double t6748;
  double t6755;
  double t6763;
  double t6769;
  double t6880;
  double t6896;
  double t4067;
  double t4414;
  double t4418;
  double t5033;
  double t5038;
  double t5039;
  double t6922;
  double t6924;
  double t6927;
  double t6947;
  double t6948;
  double t6971;
  double t5116;
  double t5160;
  double t5165;
  double t7007;
  double t7031;
  double t7089;
  double t7175;
  double t7216;
  double t7265;
  double t7540;
  double t7542;
  double t7635;
  double t7646;
  double t7649;
  double t7674;
  double t7675;
  double t7686;
  double t7716;
  double t7719;
  double t7726;
  double t7739;
  double t7744;
  double t7748;
  double t7754;
  double t7756;
  double t7764;
  double t7774;
  double t7775;
  double t7779;
  double t7524;
  double t7525;
  double t7569;
  double t7582;
  double t7587;
  double t7619;
  double t7620;
  double t7672;
  double t7702;
  double t7732;
  double t7751;
  double t7771;
  double t7781;
  double t7784;
  double t7791;
  double t7798;
  double t7807;
  double t7809;
  double t7817;
  double t7820;
  double t7822;
  double t7827;
  double t1362;
  double t1522;
  double t2139;
  double t2473;
  double t3086;
  double t3483;
  double t3986;
  double t4769;
  double t5068;
  double t5414;
  double t5435;
  double t5530;
  double t5562;
  double t5577;
  double t5734;
  double t5830;
  double t5856;
  double t5972;
  double t6233;
  double t6311;
  double t6481;
  double t6678;
  double t6764;
  double t6907;
  double t6937;
  double t7004;
  double t7134;
  double t7288;
  double t7353;
  double t7380;
  double t7415;
  double t7469;
  double t7470;
  double t7492;
  double t7496;
  double t7512;
  double t7877;
  double t7879;
  double t7880;
  double t7837;
  double t7875;
  double t7876;
  double t7882;
  double t7884;
  double t7885;
  double t7859;
  double t7889;
  double t7890;
  double t7893;
  double t7907;
  double t7908;
  double t7910;
  double t7925;
  double t7927;
  double t7929;
  double t7933;
  double t7940;
  double t7941;
  double t7950;
  double t7956;
  double t7959;
  double t7975;
  double t7978;
  double t7982;
  double t7985;
  double t7986;
  double t7989;
  double t7998;
  double t7999;
  double t8004;
  double t8012;
  double t8014;
  double t8016;
  double t8021;
  double t8023;
  double t8026;
  double t8032;
  double t8035;
  double t8037;
  double t8048;
  double t8051;
  double t8052;
  double t8056;
  double t8058;
  double t8060;
  double t8074;
  double t8075;
  double t8076;
  t240 = Cos(var1[0]);
  t401 = Cos(var1[1]);
  t747 = Sin(var1[1]);
  t898 = Cos(var1[2]);
  t948 = -1.*t898;
  t1019 = 1. + t948;
  t1088 = Sin(var1[2]);
  t1388 = Sin(var1[0]);
  t1559 = Cos(var1[3]);
  t1587 = -1.*t1559;
  t1674 = 1. + t1587;
  t1825 = Sin(var1[3]);
  t1945 = t240*t898*t747;
  t1948 = -1.*t1388*t1088;
  t2064 = t1945 + t1948;
  t2375 = -1.*t898*t1388;
  t2405 = -1.*t240*t747*t1088;
  t2448 = t2375 + t2405;
  t2542 = Cos(var1[4]);
  t2635 = -1.*t2542;
  t2707 = 1. + t2635;
  t2837 = Sin(var1[4]);
  t3032 = -1.*t1825*t2064;
  t3034 = t1559*t2448;
  t3044 = t3032 + t3034;
  t3410 = t1559*t2064;
  t3434 = t1825*t2448;
  t3477 = t3410 + t3434;
  t3522 = Cos(var1[5]);
  t3589 = -1.*t3522;
  t3667 = 1. + t3589;
  t3794 = Sin(var1[5]);
  t3874 = t2837*t3044;
  t3911 = t2542*t3477;
  t3939 = t3874 + t3911;
  t4469 = t2542*t3044;
  t4685 = -1.*t2837*t3477;
  t4726 = t4469 + t4685;
  t4866 = Cos(var1[6]);
  t4887 = -1.*t4866;
  t5015 = 1. + t4887;
  t5037 = Sin(var1[6]);
  t5040 = -1.*t3794*t3939;
  t5045 = t3522*t4726;
  t5048 = t5040 + t5045;
  t5235 = t3522*t3939;
  t5245 = t3794*t4726;
  t5366 = t5235 + t5245;
  t613 = -1.*t401;
  t666 = 1. + t613;
  t688 = 0.135*t666;
  t774 = 0.049*t747;
  t786 = 0. + t688 + t774;
  t1035 = -0.049*t1019;
  t1183 = -0.09*t1088;
  t1250 = 0. + t1035 + t1183;
  t1430 = -0.09*t1019;
  t1442 = 0.049*t1088;
  t1490 = 0. + t1430 + t1442;
  t1752 = -0.049*t1674;
  t1856 = -0.21*t1825;
  t1894 = 0. + t1752 + t1856;
  t2217 = -0.21*t1674;
  t2276 = 0.049*t1825;
  t2286 = 0. + t2217 + t2276;
  t2788 = -0.2707*t2707;
  t2841 = 0.0016*t2837;
  t3031 = 0. + t2788 + t2841;
  t6374 = t898*t1388*t747;
  t6465 = t240*t1088;
  t6466 = t6374 + t6465;
  t6519 = t240*t898;
  t6542 = -1.*t1388*t747*t1088;
  t6589 = t6519 + t6542;
  t3110 = -0.0016*t2707;
  t3292 = -0.2707*t2837;
  t3314 = 0. + t3110 + t3292;
  t3745 = 0.0184*t3667;
  t3797 = -0.7055*t3794;
  t3870 = 0. + t3745 + t3797;
  t6748 = -1.*t1825*t6466;
  t6755 = t1559*t6589;
  t6763 = t6748 + t6755;
  t6769 = t1559*t6466;
  t6880 = t1825*t6589;
  t6896 = t6769 + t6880;
  t4067 = -0.7055*t3667;
  t4414 = -0.0184*t3794;
  t4418 = 0. + t4067 + t4414;
  t5033 = -1.1135*t5015;
  t5038 = 0.0216*t5037;
  t5039 = 0. + t5033 + t5038;
  t6922 = t2837*t6763;
  t6924 = t2542*t6896;
  t6927 = t6922 + t6924;
  t6947 = t2542*t6763;
  t6948 = -1.*t2837*t6896;
  t6971 = t6947 + t6948;
  t5116 = -0.0216*t5015;
  t5160 = -1.1135*t5037;
  t5165 = 0. + t5116 + t5160;
  t7007 = -1.*t3794*t6927;
  t7031 = t3522*t6971;
  t7089 = t7007 + t7031;
  t7175 = t3522*t6927;
  t7216 = t3794*t6971;
  t7265 = t7175 + t7216;
  t7540 = -1.*t1388;
  t7542 = 0. + t7540;
  t7635 = -1.*t401*t898*t1825;
  t7646 = -1.*t1559*t401*t1088;
  t7649 = t7635 + t7646;
  t7674 = t1559*t401*t898;
  t7675 = -1.*t401*t1825*t1088;
  t7686 = t7674 + t7675;
  t7716 = t2837*t7649;
  t7719 = t2542*t7686;
  t7726 = t7716 + t7719;
  t7739 = t2542*t7649;
  t7744 = -1.*t2837*t7686;
  t7748 = t7739 + t7744;
  t7754 = -1.*t3794*t7726;
  t7756 = t3522*t7748;
  t7764 = t7754 + t7756;
  t7774 = t3522*t7726;
  t7775 = t3794*t7748;
  t7779 = t7774 + t7775;
  t7524 = -1.*t240;
  t7525 = 0. + t7524;
  t7569 = 0.049*t401;
  t7582 = t401*t898*t1894;
  t7587 = 0.004500000000000004*t747;
  t7619 = t401*t1250;
  t7620 = -1.*t401*t2286*t1088;
  t7672 = t3031*t7649;
  t7702 = t3314*t7686;
  t7732 = t3870*t7726;
  t7751 = t4418*t7748;
  t7771 = t5039*t7764;
  t7781 = t5165*t7779;
  t7784 = t5037*t7764;
  t7791 = t4866*t7779;
  t7798 = t7784 + t7791;
  t7807 = 0.0306*t7798;
  t7809 = t4866*t7764;
  t7817 = -1.*t5037*t7779;
  t7820 = t7809 + t7817;
  t7822 = -1.1312*t7820;
  t7827 = 0. + t7569 + t7582 + t7587 + t7619 + t7620 + t7672 + t7702 + t7732 + t7751 + t7771 + t7781 + t7807 + t7822;
  t1362 = t240*t747*t1250;
  t1522 = -1.*t1388*t1490;
  t2139 = t1894*t2064;
  t2473 = t2286*t2448;
  t3086 = t3031*t3044;
  t3483 = t3314*t3477;
  t3986 = t3870*t3939;
  t4769 = t4418*t4726;
  t5068 = t5039*t5048;
  t5414 = t5165*t5366;
  t5435 = t5037*t5048;
  t5530 = t4866*t5366;
  t5562 = t5435 + t5530;
  t5577 = 0.0306*t5562;
  t5734 = t4866*t5048;
  t5830 = -1.*t5037*t5366;
  t5856 = t5734 + t5830;
  t5972 = -1.1312*t5856;
  t6233 = -1.*t1388*t747*t1250;
  t6311 = -1.*t240*t1490;
  t6481 = -1.*t1894*t6466;
  t6678 = -1.*t2286*t6589;
  t6764 = -1.*t3031*t6763;
  t6907 = -1.*t3314*t6896;
  t6937 = -1.*t3870*t6927;
  t7004 = -1.*t4418*t6971;
  t7134 = -1.*t5039*t7089;
  t7288 = -1.*t5165*t7265;
  t7353 = t5037*t7089;
  t7380 = t4866*t7265;
  t7415 = t7353 + t7380;
  t7469 = -0.0306*t7415;
  t7470 = t4866*t7089;
  t7492 = -1.*t5037*t7265;
  t7496 = t7470 + t7492;
  t7512 = 1.1312*t7496;
  t7877 = -1.*t240*t401;
  t7879 = 0. + t7877;
  t7880 = 0. + t747;
  t7837 = -0.004500000000000004*t240*t401;
  t7875 = t401*t1388;
  t7876 = 0. + t7875;
  t7882 = 0.049*t401*t898;
  t7884 = -0.09*t401*t1088;
  t7885 = 0. + t7882 + t7582 + t7587 + t7884 + t7620 + t7672 + t7702 + t7732 + t7751 + t7771 + t7781 + t7807 + t7822;
  t7859 = 0.004500000000000004*t401*t1388;
  t7889 = 0.049*t2064;
  t7890 = 0.09*t2448;
  t7893 = 0. + t7837 + t7889 + t2139 + t7890 + t2473 + t3086 + t3483 + t3986 + t4769 + t5068 + t5414 + t5577 + t5972;
  t7907 = -0.049*t6466;
  t7908 = -0.09*t6589;
  t7910 = 0. + t7859 + t7907 + t6481 + t7908 + t6678 + t6764 + t6907 + t6937 + t7004 + t7134 + t7288 + t7469 + t7512;
  t7925 = 0.21*t7649;
  t7927 = 0.049*t7686;
  t7929 = 0. + t7925 + t7672 + t7927 + t7702 + t7732 + t7751 + t7771 + t7781 + t7807 + t7822;
  t7933 = 0.21*t3044;
  t7940 = 0.049*t3477;
  t7941 = 0. + t7933 + t3086 + t7940 + t3483 + t3986 + t4769 + t5068 + t5414 + t5577 + t5972;
  t7950 = -0.21*t6763;
  t7956 = -0.049*t6896;
  t7959 = 0. + t7950 + t6764 + t7956 + t6907 + t6937 + t7004 + t7134 + t7288 + t7469 + t7512;
  t7975 = 0.0016*t7726;
  t7978 = 0.2707*t7748;
  t7982 = 0. + t7975 + t7732 + t7978 + t7751 + t7771 + t7781 + t7807 + t7822;
  t7985 = 0.0016*t3939;
  t7986 = 0.2707*t4726;
  t7989 = 0. + t7985 + t3986 + t7986 + t4769 + t5068 + t5414 + t5577 + t5972;
  t7998 = -0.0016*t6927;
  t7999 = -0.2707*t6971;
  t8004 = 0. + t7998 + t6937 + t7999 + t7004 + t7134 + t7288 + t7469 + t7512;
  t8012 = 0.7055*t7764;
  t8014 = -0.0184*t7779;
  t8016 = 0. + t8012 + t7771 + t8014 + t7781 + t7807 + t7822;
  t8021 = 0.7055*t5048;
  t8023 = -0.0184*t5366;
  t8026 = 0. + t8021 + t5068 + t8023 + t5414 + t5577 + t5972;
  t8032 = -0.7055*t7089;
  t8035 = 0.0184*t7265;
  t8037 = 0. + t8032 + t7134 + t8035 + t7288 + t7469 + t7512;
  t8048 = 0.052199999999999996*t7798;
  t8051 = -0.01770000000000005*t7820;
  t8052 = 0. + t8048 + t8051;
  t8056 = 0.052199999999999996*t5562;
  t8058 = -0.01770000000000005*t5856;
  t8060 = 0. + t8056 + t8058;
  t8074 = -0.052199999999999996*t7415;
  t8075 = 0.01770000000000005*t7496;
  t8076 = 0. + t8074 + t8075;

  p_output1(0)=0.;
  p_output1(1)=0.;
  p_output1(2)=1.;
  p_output1(3)=0. - 1.*(0. + t1362 + t1522 + t2139 - 0.135*t240 + t2473 + t3086 + t3483 + t3986 + 0.1305*t240*t401 + t4769 + t5068 + t5414 + t5577 + t5972 + t240*t786);
  p_output1(4)=0. + 0.135*t1388 - 0.1305*t1388*t401 + t6233 + t6311 + t6481 + t6678 + t6764 + t6907 + t6937 + t7004 + t7134 + t7288 + t7469 + t7512 - 1.*t1388*t786;
  p_output1(5)=0.;
  p_output1(6)=t7525;
  p_output1(7)=t7542;
  p_output1(8)=0.;
  p_output1(9)=0. + t7542*t7827;
  p_output1(10)=0. - 1.*t7525*t7827;
  p_output1(11)=t7525*(0. + t1362 - 0.09*t1388 + t1522 + t2139 + t2473 + t3086 + t3483 + t3986 + t4769 + t5068 + t5414 + t5577 + t5972 + 0.049*t240*t747 + t7837) - 1.*t7542*(0. - 0.09*t240 + t6233 + t6311 + t6481 + t6678 + t6764 + t6907 + t6937 + t7004 + t7134 + t7288 + t7469 - 0.049*t1388*t747 + t7512 + t7859);
  p_output1(12)=t7876;
  p_output1(13)=t7879;
  p_output1(14)=t7880;
  p_output1(15)=t7879*t7885 - 1.*t7880*t7893;
  p_output1(16)=-1.*t7876*t7885 + t7880*t7910;
  p_output1(17)=t7876*t7893 - 1.*t7879*t7910;
  p_output1(18)=t7876;
  p_output1(19)=t7879;
  p_output1(20)=t7880;
  p_output1(21)=t7879*t7929 - 1.*t7880*t7941;
  p_output1(22)=-1.*t7876*t7929 + t7880*t7959;
  p_output1(23)=t7876*t7941 - 1.*t7879*t7959;
  p_output1(24)=t7876;
  p_output1(25)=t7879;
  p_output1(26)=t7880;
  p_output1(27)=t7879*t7982 - 1.*t7880*t7989;
  p_output1(28)=-1.*t7876*t7982 + t7880*t8004;
  p_output1(29)=t7876*t7989 - 1.*t7879*t8004;
  p_output1(30)=t7876;
  p_output1(31)=t7879;
  p_output1(32)=t7880;
  p_output1(33)=t7879*t8016 - 1.*t7880*t8026;
  p_output1(34)=-1.*t7876*t8016 + t7880*t8037;
  p_output1(35)=t7876*t8026 - 1.*t7879*t8037;
  p_output1(36)=t7876;
  p_output1(37)=t7879;
  p_output1(38)=t7880;
  p_output1(39)=t7879*t8052 - 1.*t7880*t8060;
  p_output1(40)=-1.*t7876*t8052 + t7880*t8076;
  p_output1(41)=t7876*t8060 - 1.*t7879*t8076;
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


       
void J_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
