/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t25;
  double t90;
  double t606;
  double t913;
  double t1016;
  double t1166;
  double t1294;
  double t1439;
  double t1752;
  double t1866;
  double t1944;
  double t2066;
  double t2241;
  double t2383;
  double t2483;
  double t2888;
  double t2890;
  double t2933;
  double t3408;
  double t3501;
  double t3555;
  double t3603;
  double t3830;
  double t3862;
  double t3891;
  double t4034;
  double t4061;
  double t4229;
  double t4308;
  double t4428;
  double t4443;
  double t4511;
  double t4763;
  double t4787;
  double t4837;
  double t5085;
  double t5113;
  double t5154;
  double t5190;
  double t5202;
  double t5335;
  double t5586;
  double t5662;
  double t5679;
  double t5741;
  double t6112;
  double t6116;
  double t6145;
  double t250;
  double t494;
  double t602;
  double t669;
  double t751;
  double t1233;
  double t1334;
  double t1362;
  double t1534;
  double t1548;
  double t1578;
  double t1962;
  double t2164;
  double t2166;
  double t2725;
  double t2798;
  double t2806;
  double t3572;
  double t3806;
  double t3813;
  double t6642;
  double t6658;
  double t6739;
  double t6762;
  double t6775;
  double t6798;
  double t3917;
  double t3936;
  double t3989;
  double t4507;
  double t4586;
  double t4636;
  double t6838;
  double t6915;
  double t6955;
  double t7002;
  double t7042;
  double t7050;
  double t4892;
  double t5032;
  double t5040;
  double t5373;
  double t5616;
  double t5635;
  double t7067;
  double t7075;
  double t7084;
  double t7097;
  double t7100;
  double t7118;
  double t6008;
  double t6021;
  double t6030;
  double t7138;
  double t7139;
  double t7159;
  double t7211;
  double t7216;
  double t7219;
  double t7400;
  double t7406;
  double t7407;
  double t7438;
  double t7439;
  double t7441;
  double t7459;
  double t7463;
  double t7477;
  double t7522;
  double t7525;
  double t7528;
  double t7544;
  double t7546;
  double t7556;
  double t7562;
  double t7564;
  double t7568;
  t25 = Sin(var1[0]);
  t90 = Cos(var1[1]);
  t606 = Sin(var1[1]);
  t913 = Cos(var1[2]);
  t1016 = -1.*t913;
  t1166 = 1. + t1016;
  t1294 = Sin(var1[2]);
  t1439 = Cos(var1[0]);
  t1752 = Cos(var1[3]);
  t1866 = -1.*t1752;
  t1944 = 1. + t1866;
  t2066 = Sin(var1[3]);
  t2241 = t913*t25*t606;
  t2383 = t1439*t1294;
  t2483 = t2241 + t2383;
  t2888 = t1439*t913;
  t2890 = -1.*t25*t606*t1294;
  t2933 = t2888 + t2890;
  t3408 = Cos(var1[4]);
  t3501 = -1.*t3408;
  t3555 = 1. + t3501;
  t3603 = Sin(var1[4]);
  t3830 = -1.*t2066*t2483;
  t3862 = t1752*t2933;
  t3891 = t3830 + t3862;
  t4034 = t1752*t2483;
  t4061 = t2066*t2933;
  t4229 = t4034 + t4061;
  t4308 = Cos(var1[5]);
  t4428 = -1.*t4308;
  t4443 = 1. + t4428;
  t4511 = Sin(var1[5]);
  t4763 = t3603*t3891;
  t4787 = t3408*t4229;
  t4837 = t4763 + t4787;
  t5085 = t3408*t3891;
  t5113 = -1.*t3603*t4229;
  t5154 = t5085 + t5113;
  t5190 = Cos(var1[6]);
  t5202 = -1.*t5190;
  t5335 = 1. + t5202;
  t5586 = Sin(var1[6]);
  t5662 = -1.*t4511*t4837;
  t5679 = t4308*t5154;
  t5741 = t5662 + t5679;
  t6112 = t4308*t4837;
  t6116 = t4511*t5154;
  t6145 = t6112 + t6116;
  t250 = -1.*t90;
  t494 = 1. + t250;
  t602 = 0.135*t494;
  t669 = 0.049*t606;
  t751 = 0. + t602 + t669;
  t1233 = -0.049*t1166;
  t1334 = -0.09*t1294;
  t1362 = 0. + t1233 + t1334;
  t1534 = -0.09*t1166;
  t1548 = 0.049*t1294;
  t1578 = 0. + t1534 + t1548;
  t1962 = -0.049*t1944;
  t2164 = -0.21*t2066;
  t2166 = 0. + t1962 + t2164;
  t2725 = -0.21*t1944;
  t2798 = 0.049*t2066;
  t2806 = 0. + t2725 + t2798;
  t3572 = -0.2707*t3555;
  t3806 = 0.0016*t3603;
  t3813 = 0. + t3572 + t3806;
  t6642 = t1439*t913*t606;
  t6658 = -1.*t25*t1294;
  t6739 = t6642 + t6658;
  t6762 = -1.*t913*t25;
  t6775 = -1.*t1439*t606*t1294;
  t6798 = t6762 + t6775;
  t3917 = -0.0016*t3555;
  t3936 = -0.2707*t3603;
  t3989 = 0. + t3917 + t3936;
  t4507 = 0.0184*t4443;
  t4586 = -0.7055*t4511;
  t4636 = 0. + t4507 + t4586;
  t6838 = -1.*t2066*t6739;
  t6915 = t1752*t6798;
  t6955 = t6838 + t6915;
  t7002 = t1752*t6739;
  t7042 = t2066*t6798;
  t7050 = t7002 + t7042;
  t4892 = -0.7055*t4443;
  t5032 = -0.0184*t4511;
  t5040 = 0. + t4892 + t5032;
  t5373 = -1.1135*t5335;
  t5616 = 0.0216*t5586;
  t5635 = 0. + t5373 + t5616;
  t7067 = t3603*t6955;
  t7075 = t3408*t7050;
  t7084 = t7067 + t7075;
  t7097 = t3408*t6955;
  t7100 = -1.*t3603*t7050;
  t7118 = t7097 + t7100;
  t6008 = -0.0216*t5335;
  t6021 = -1.1135*t5586;
  t6030 = 0. + t6008 + t6021;
  t7138 = -1.*t4511*t7084;
  t7139 = t4308*t7118;
  t7159 = t7138 + t7139;
  t7211 = t4308*t7084;
  t7216 = t4511*t7118;
  t7219 = t7211 + t7216;
  t7400 = -1.*t90*t913*t2066;
  t7406 = -1.*t1752*t90*t1294;
  t7407 = t7400 + t7406;
  t7438 = t1752*t90*t913;
  t7439 = -1.*t90*t2066*t1294;
  t7441 = t7438 + t7439;
  t7459 = t3603*t7407;
  t7463 = t3408*t7441;
  t7477 = t7459 + t7463;
  t7522 = t3408*t7407;
  t7525 = -1.*t3603*t7441;
  t7528 = t7522 + t7525;
  t7544 = -1.*t4511*t7477;
  t7546 = t4308*t7528;
  t7556 = t7544 + t7546;
  t7562 = t4308*t7477;
  t7564 = t4511*t7528;
  t7568 = t7562 + t7564;

  p_output1(0)=0.24925 - 1.*t1439*t1578 - 1.*t2166*t2483 + 0.135*t25 - 1.*t2806*t2933 - 1.*t3813*t3891 - 1.*t3989*t4229 - 1.*t4636*t4837 - 1.*t5040*t5154 - 1.*t5635*t5741 - 1.*t1362*t25*t606 - 1.*t6030*t6145 - 0.0306*(t5586*t5741 + t5190*t6145) + 1.1312*(t5190*t5741 - 1.*t5586*t6145) - 1.*t25*t751 - 0.1305*t25*t90;
  p_output1(1)=-0.0302 + 0.135*(1. - 1.*t1439) - 1.*t1578*t25 + t1362*t1439*t606 + t2166*t6739 + t2806*t6798 + t3813*t6955 + t3989*t7050 + t4636*t7084 + t5040*t7118 + t5635*t7159 + t6030*t7219 + 0.0306*(t5586*t7159 + t5190*t7219) - 1.1312*(t5190*t7159 - 1.*t5586*t7219) + t1439*t751 + 0.1305*t1439*t90;
  p_output1(2)=-0.047 - 0.049*t494 + 0.004500000000000004*t606 + t3813*t7407 + t3989*t7441 + t4636*t7477 + t5040*t7528 + t5635*t7556 + t6030*t7568 + 0.0306*(t5586*t7556 + t5190*t7568) - 1.1312*(t5190*t7556 - 1.*t5586*t7568) + t1362*t90 - 1.*t1294*t2806*t90 + t2166*t90*t913;
}


       
void p_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
