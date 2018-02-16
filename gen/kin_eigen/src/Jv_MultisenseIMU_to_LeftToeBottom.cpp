/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_MultisenseIMU_to_LeftToeBottom.h"

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
  double t17;
  double t85;
  double t497;
  double t870;
  double t897;
  double t1043;
  double t1141;
  double t1305;
  double t1554;
  double t1626;
  double t1631;
  double t1648;
  double t1856;
  double t1984;
  double t1998;
  double t2290;
  double t2407;
  double t2416;
  double t2511;
  double t2656;
  double t2665;
  double t2738;
  double t2935;
  double t3034;
  double t3051;
  double t3126;
  double t3129;
  double t3137;
  double t3264;
  double t3291;
  double t3292;
  double t3434;
  double t3698;
  double t3745;
  double t3772;
  double t3911;
  double t3912;
  double t3919;
  double t4137;
  double t4155;
  double t4164;
  double t4422;
  double t4449;
  double t4469;
  double t4503;
  double t4672;
  double t4675;
  double t4681;
  double t281;
  double t294;
  double t427;
  double t529;
  double t712;
  double t1126;
  double t1183;
  double t1238;
  double t1397;
  double t1442;
  double t1457;
  double t1642;
  double t1745;
  double t1752;
  double t2159;
  double t2200;
  double t2276;
  double t2670;
  double t2790;
  double t2841;
  double t5108;
  double t5115;
  double t5116;
  double t5160;
  double t5231;
  double t5232;
  double t3088;
  double t3110;
  double t3125;
  double t3354;
  double t3469;
  double t3594;
  double t5435;
  double t5504;
  double t5530;
  double t5593;
  double t5677;
  double t5685;
  double t3851;
  double t3884;
  double t3898;
  double t4187;
  double t4443;
  double t4446;
  double t5733;
  double t5856;
  double t5872;
  double t5991;
  double t5996;
  double t6010;
  double t4536;
  double t4542;
  double t4643;
  double t6148;
  double t6314;
  double t6403;
  double t6687;
  double t6689;
  double t6711;
  double t7353;
  double t7380;
  double t7415;
  double t7430;
  double t7469;
  double t7512;
  double t7542;
  double t7582;
  double t7587;
  double t7649;
  double t7672;
  double t7702;
  double t7732;
  double t7733;
  double t7739;
  double t7751;
  double t7764;
  double t7771;
  double t7130;
  double t7144;
  double t7177;
  double t7216;
  double t7220;
  double t7427;
  double t7515;
  double t7619;
  double t7716;
  double t7748;
  double t7773;
  double t7774;
  double t7775;
  double t7781;
  double t7791;
  double t7798;
  double t7807;
  double t7809;
  double t7830;
  double t7831;
  double t7834;
  double t7837;
  double t1288;
  double t1505;
  double t2010;
  double t2473;
  double t3053;
  double t3213;
  double t3797;
  double t4067;
  double t4533;
  double t4703;
  double t4769;
  double t4832;
  double t4845;
  double t4868;
  double t4873;
  double t4881;
  double t4908;
  double t4917;
  double t7079;
  double t7097;
  double t5068;
  double t5076;
  double t5145;
  double t5235;
  double t5577;
  double t5694;
  double t5894;
  double t6047;
  double t6519;
  double t6769;
  double t6804;
  double t6820;
  double t6880;
  double t6922;
  double t6947;
  double t6974;
  double t7013;
  double t7031;
  double t7843;
  double t7908;
  double t7912;
  double t7913;
  double t7923;
  double t7875;
  double t7948;
  double t7949;
  double t7925;
  double t7927;
  double t7930;
  double t7898;
  double t7899;
  double t7960;
  double t7964;
  double t7968;
  double t7986;
  double t7992;
  double t7993;
  double t7999;
  double t8005;
  double t8007;
  double t8014;
  double t8018;
  double t8023;
  double t8038;
  double t8042;
  double t8043;
  double t8047;
  double t8051;
  double t8055;
  double t8069;
  double t8071;
  double t8074;
  double t8086;
  double t8087;
  double t8088;
  double t8095;
  double t8096;
  double t8097;
  double t8110;
  double t8112;
  double t8113;
  double t8127;
  double t8128;
  double t8129;
  double t8139;
  double t8140;
  double t8141;
  double t8149;
  double t8152;
  double t8154;
  t17 = Cos(var1[0]);
  t85 = Cos(var1[1]);
  t497 = Sin(var1[1]);
  t870 = Cos(var1[2]);
  t897 = -1.*t870;
  t1043 = 1. + t897;
  t1141 = Sin(var1[2]);
  t1305 = Sin(var1[0]);
  t1554 = Cos(var1[3]);
  t1626 = -1.*t1554;
  t1631 = 1. + t1626;
  t1648 = Sin(var1[3]);
  t1856 = t17*t870*t497;
  t1984 = -1.*t1305*t1141;
  t1998 = t1856 + t1984;
  t2290 = -1.*t870*t1305;
  t2407 = -1.*t17*t497*t1141;
  t2416 = t2290 + t2407;
  t2511 = Cos(var1[4]);
  t2656 = -1.*t2511;
  t2665 = 1. + t2656;
  t2738 = Sin(var1[4]);
  t2935 = -1.*t1648*t1998;
  t3034 = t1554*t2416;
  t3051 = t2935 + t3034;
  t3126 = t1554*t1998;
  t3129 = t1648*t2416;
  t3137 = t3126 + t3129;
  t3264 = Cos(var1[5]);
  t3291 = -1.*t3264;
  t3292 = 1. + t3291;
  t3434 = Sin(var1[5]);
  t3698 = t2738*t3051;
  t3745 = t2511*t3137;
  t3772 = t3698 + t3745;
  t3911 = t2511*t3051;
  t3912 = -1.*t2738*t3137;
  t3919 = t3911 + t3912;
  t4137 = Cos(var1[6]);
  t4155 = -1.*t4137;
  t4164 = 1. + t4155;
  t4422 = Sin(var1[6]);
  t4449 = -1.*t3434*t3772;
  t4469 = t3264*t3919;
  t4503 = t4449 + t4469;
  t4672 = t3264*t3772;
  t4675 = t3434*t3919;
  t4681 = t4672 + t4675;
  t281 = -1.*t85;
  t294 = 1. + t281;
  t427 = 0.135*t294;
  t529 = 0.049*t497;
  t712 = 0. + t427 + t529;
  t1126 = -0.049*t1043;
  t1183 = -0.09*t1141;
  t1238 = 0. + t1126 + t1183;
  t1397 = -0.09*t1043;
  t1442 = 0.049*t1141;
  t1457 = 0. + t1397 + t1442;
  t1642 = -0.049*t1631;
  t1745 = -0.21*t1648;
  t1752 = 0. + t1642 + t1745;
  t2159 = -0.21*t1631;
  t2200 = 0.049*t1648;
  t2276 = 0. + t2159 + t2200;
  t2670 = -0.2707*t2665;
  t2790 = 0.0016*t2738;
  t2841 = 0. + t2670 + t2790;
  t5108 = t870*t1305*t497;
  t5115 = t17*t1141;
  t5116 = t5108 + t5115;
  t5160 = t17*t870;
  t5231 = -1.*t1305*t497*t1141;
  t5232 = t5160 + t5231;
  t3088 = -0.0016*t2665;
  t3110 = -0.2707*t2738;
  t3125 = 0. + t3088 + t3110;
  t3354 = 0.0184*t3292;
  t3469 = -0.7055*t3434;
  t3594 = 0. + t3354 + t3469;
  t5435 = -1.*t1648*t5116;
  t5504 = t1554*t5232;
  t5530 = t5435 + t5504;
  t5593 = t1554*t5116;
  t5677 = t1648*t5232;
  t5685 = t5593 + t5677;
  t3851 = -0.7055*t3292;
  t3884 = -0.0184*t3434;
  t3898 = 0. + t3851 + t3884;
  t4187 = -1.1135*t4164;
  t4443 = 0.0216*t4422;
  t4446 = 0. + t4187 + t4443;
  t5733 = t2738*t5530;
  t5856 = t2511*t5685;
  t5872 = t5733 + t5856;
  t5991 = t2511*t5530;
  t5996 = -1.*t2738*t5685;
  t6010 = t5991 + t5996;
  t4536 = -0.0216*t4164;
  t4542 = -1.1135*t4422;
  t4643 = 0. + t4536 + t4542;
  t6148 = -1.*t3434*t5872;
  t6314 = t3264*t6010;
  t6403 = t6148 + t6314;
  t6687 = t3264*t5872;
  t6689 = t3434*t6010;
  t6711 = t6687 + t6689;
  t7353 = -1.*t85*t870*t1648;
  t7380 = -1.*t1554*t85*t1141;
  t7415 = t7353 + t7380;
  t7430 = t1554*t85*t870;
  t7469 = -1.*t85*t1648*t1141;
  t7512 = t7430 + t7469;
  t7542 = t2738*t7415;
  t7582 = t2511*t7512;
  t7587 = t7542 + t7582;
  t7649 = t2511*t7415;
  t7672 = -1.*t2738*t7512;
  t7702 = t7649 + t7672;
  t7732 = -1.*t3434*t7587;
  t7733 = t3264*t7702;
  t7739 = t7732 + t7733;
  t7751 = t3264*t7587;
  t7764 = t3434*t7702;
  t7771 = t7751 + t7764;
  t7130 = 0.049*t85;
  t7144 = t85*t870*t1752;
  t7177 = 0.004500000000000004*t497;
  t7216 = t85*t1238;
  t7220 = -1.*t85*t2276*t1141;
  t7427 = t2841*t7415;
  t7515 = t3125*t7512;
  t7619 = t3594*t7587;
  t7716 = t3898*t7702;
  t7748 = t4446*t7739;
  t7773 = t4643*t7771;
  t7774 = t4422*t7739;
  t7775 = t4137*t7771;
  t7781 = t7774 + t7775;
  t7791 = 0.0306*t7781;
  t7798 = t4137*t7739;
  t7807 = -1.*t4422*t7771;
  t7809 = t7798 + t7807;
  t7830 = -1.1312*t7809;
  t7831 = 0. + t7130 + t7144 + t7177 + t7216 + t7220 + t7427 + t7515 + t7619 + t7716 + t7748 + t7773 + t7791 + t7830;
  t7834 = -1.*t17;
  t7837 = 0. + t7834;
  t1288 = t17*t497*t1238;
  t1505 = -1.*t1305*t1457;
  t2010 = t1752*t1998;
  t2473 = t2276*t2416;
  t3053 = t2841*t3051;
  t3213 = t3125*t3137;
  t3797 = t3594*t3772;
  t4067 = t3898*t3919;
  t4533 = t4446*t4503;
  t4703 = t4643*t4681;
  t4769 = t4422*t4503;
  t4832 = t4137*t4681;
  t4845 = t4769 + t4832;
  t4868 = 0.0306*t4845;
  t4873 = t4137*t4503;
  t4881 = -1.*t4422*t4681;
  t4908 = t4873 + t4881;
  t4917 = -1.1312*t4908;
  t7079 = -1.*t1305;
  t7097 = 0. + t7079;
  t5068 = -1.*t1305*t497*t1238;
  t5076 = -1.*t17*t1457;
  t5145 = -1.*t1752*t5116;
  t5235 = -1.*t2276*t5232;
  t5577 = -1.*t2841*t5530;
  t5694 = -1.*t3125*t5685;
  t5894 = -1.*t3594*t5872;
  t6047 = -1.*t3898*t6010;
  t6519 = -1.*t4446*t6403;
  t6769 = -1.*t4643*t6711;
  t6804 = t4422*t6403;
  t6820 = t4137*t6711;
  t6880 = t6804 + t6820;
  t6922 = -0.0306*t6880;
  t6947 = t4137*t6403;
  t6974 = -1.*t4422*t6711;
  t7013 = t6947 + t6974;
  t7031 = 1.1312*t7013;
  t7843 = -0.004500000000000004*t17*t85;
  t7908 = 0.049*t85*t870;
  t7912 = -0.09*t85*t1141;
  t7913 = 0. + t7908 + t7144 + t7177 + t7912 + t7220 + t7427 + t7515 + t7619 + t7716 + t7748 + t7773 + t7791 + t7830;
  t7923 = 0. + t497;
  t7875 = 0.004500000000000004*t85*t1305;
  t7948 = t85*t1305;
  t7949 = 0. + t7948;
  t7925 = 0.049*t1998;
  t7927 = 0.09*t2416;
  t7930 = 0. + t7843 + t7925 + t2010 + t7927 + t2473 + t3053 + t3213 + t3797 + t4067 + t4533 + t4703 + t4868 + t4917;
  t7898 = -1.*t17*t85;
  t7899 = 0. + t7898;
  t7960 = -0.049*t5116;
  t7964 = -0.09*t5232;
  t7968 = 0. + t7875 + t7960 + t5145 + t7964 + t5235 + t5577 + t5694 + t5894 + t6047 + t6519 + t6769 + t6922 + t7031;
  t7986 = 0.21*t7415;
  t7992 = 0.049*t7512;
  t7993 = 0. + t7986 + t7427 + t7992 + t7515 + t7619 + t7716 + t7748 + t7773 + t7791 + t7830;
  t7999 = 0.21*t3051;
  t8005 = 0.049*t3137;
  t8007 = 0. + t7999 + t3053 + t8005 + t3213 + t3797 + t4067 + t4533 + t4703 + t4868 + t4917;
  t8014 = -0.21*t5530;
  t8018 = -0.049*t5685;
  t8023 = 0. + t8014 + t5577 + t8018 + t5694 + t5894 + t6047 + t6519 + t6769 + t6922 + t7031;
  t8038 = 0.0016*t7587;
  t8042 = 0.2707*t7702;
  t8043 = 0. + t8038 + t7619 + t8042 + t7716 + t7748 + t7773 + t7791 + t7830;
  t8047 = 0.0016*t3772;
  t8051 = 0.2707*t3919;
  t8055 = 0. + t8047 + t3797 + t8051 + t4067 + t4533 + t4703 + t4868 + t4917;
  t8069 = -0.0016*t5872;
  t8071 = -0.2707*t6010;
  t8074 = 0. + t8069 + t5894 + t8071 + t6047 + t6519 + t6769 + t6922 + t7031;
  t8086 = 0.7055*t7739;
  t8087 = -0.0184*t7771;
  t8088 = 0. + t8086 + t7748 + t8087 + t7773 + t7791 + t7830;
  t8095 = 0.7055*t4503;
  t8096 = -0.0184*t4681;
  t8097 = 0. + t8095 + t4533 + t8096 + t4703 + t4868 + t4917;
  t8110 = -0.7055*t6403;
  t8112 = 0.0184*t6711;
  t8113 = 0. + t8110 + t6519 + t8112 + t6769 + t6922 + t7031;
  t8127 = 0.052199999999999996*t7781;
  t8128 = -0.01770000000000005*t7809;
  t8129 = 0. + t8127 + t8128;
  t8139 = 0.052199999999999996*t4845;
  t8140 = -0.01770000000000005*t4908;
  t8141 = 0. + t8139 + t8140;
  t8149 = -0.052199999999999996*t6880;
  t8152 = 0.01770000000000005*t7013;
  t8154 = 0. + t8149 + t8152;

  p_output1(0)=0. - 1.*(0. + t1288 + t1505 - 0.135*t17 + t2010 + t2473 + t3053 + t3213 + t3797 + t4067 + t4533 + t4703 + t4868 + t4917 + t17*t712 + 0.1305*t17*t85);
  p_output1(1)=0. + 0.135*t1305 + t5068 + t5076 + t5145 + t5235 + t5577 + t5694 + t5894 + t6047 + t6519 + t6769 + t6922 + t7031 - 1.*t1305*t712 - 0.1305*t1305*t85;
  p_output1(2)=0.;
  p_output1(3)=0. + t7097*t7831;
  p_output1(4)=0. - 1.*t7831*t7837;
  p_output1(5)=t7837*(0. + t1288 - 0.09*t1305 + t1505 + t2010 + t2473 + t3053 + t3213 + t3797 + t4067 + t4533 + t4703 + t4868 + t4917 + 0.049*t17*t497 + t7843) - 1.*t7097*(0. - 0.09*t17 - 0.049*t1305*t497 + t5068 + t5076 + t5145 + t5235 + t5577 + t5694 + t5894 + t6047 + t6519 + t6769 + t6922 + t7031 + t7875);
  p_output1(6)=t7899*t7913 - 1.*t7923*t7930;
  p_output1(7)=-1.*t7913*t7949 + t7923*t7968;
  p_output1(8)=t7930*t7949 - 1.*t7899*t7968;
  p_output1(9)=t7899*t7993 - 1.*t7923*t8007;
  p_output1(10)=-1.*t7949*t7993 + t7923*t8023;
  p_output1(11)=t7949*t8007 - 1.*t7899*t8023;
  p_output1(12)=t7899*t8043 - 1.*t7923*t8055;
  p_output1(13)=-1.*t7949*t8043 + t7923*t8074;
  p_output1(14)=t7949*t8055 - 1.*t7899*t8074;
  p_output1(15)=t7899*t8088 - 1.*t7923*t8097;
  p_output1(16)=-1.*t7949*t8088 + t7923*t8113;
  p_output1(17)=t7949*t8097 - 1.*t7899*t8113;
  p_output1(18)=t7899*t8129 - 1.*t7923*t8141;
  p_output1(19)=-1.*t7949*t8129 + t7923*t8154;
  p_output1(20)=t7949*t8141 - 1.*t7899*t8154;
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


       
void Jv_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
