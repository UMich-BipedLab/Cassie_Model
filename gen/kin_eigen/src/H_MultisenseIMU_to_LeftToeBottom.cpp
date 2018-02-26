/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:43:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_LeftToeBottom.h"

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
  double t23;
  double t301;
  double t731;
  double t676;
  double t1336;
  double t1376;
  double t1680;
  double t1343;
  double t1418;
  double t1421;
  double t1292;
  double t1709;
  double t1833;
  double t1852;
  double t2367;
  double t1504;
  double t1882;
  double t1944;
  double t1218;
  double t2369;
  double t2522;
  double t2562;
  double t2761;
  double t2189;
  double t2629;
  double t2686;
  double t970;
  double t2818;
  double t2984;
  double t2985;
  double t3046;
  double t2732;
  double t2989;
  double t3022;
  double t918;
  double t3102;
  double t3200;
  double t3236;
  double t3964;
  double t3985;
  double t4186;
  double t4260;
  double t4415;
  double t4432;
  double t4242;
  double t4453;
  double t4454;
  double t4524;
  double t4582;
  double t4699;
  double t4480;
  double t4863;
  double t5039;
  double t5288;
  double t5295;
  double t5316;
  double t5243;
  double t5348;
  double t5349;
  double t5511;
  double t5648;
  double t5798;
  double t7354;
  double t8350;
  double t8367;
  double t8465;
  double t8472;
  double t8477;
  double t8384;
  double t8486;
  double t8491;
  double t8494;
  double t8495;
  double t8496;
  double t8493;
  double t8497;
  double t8498;
  double t8505;
  double t8506;
  double t8507;
  double t3031;
  double t3365;
  double t3457;
  double t3505;
  double t3588;
  double t3644;
  double t5447;
  double t5856;
  double t6118;
  double t6224;
  double t6486;
  double t6546;
  double t8502;
  double t8510;
  double t8511;
  double t8519;
  double t8521;
  double t8522;
  double t8571;
  double t8572;
  double t8597;
  double t8598;
  double t8612;
  double t8614;
  double t8623;
  double t8624;
  double t8633;
  double t8634;
  double t8557;
  double t8559;
  double t8560;
  double t8562;
  double t8568;
  double t8575;
  double t8579;
  double t8583;
  double t8587;
  double t8588;
  double t8589;
  double t8600;
  double t8601;
  double t8602;
  double t8607;
  double t8608;
  double t8610;
  double t8615;
  double t8616;
  double t8617;
  double t8619;
  double t8620;
  double t8621;
  double t8625;
  double t8626;
  double t8627;
  double t8629;
  double t8630;
  double t8631;
  double t8635;
  double t8636;
  double t8637;
  double t8639;
  double t8640;
  double t8641;
  t23 = Cos(var1[1]);
  t301 = Sin(var1[0]);
  t731 = Sin(var1[1]);
  t676 = Cos(var1[0]);
  t1336 = Cos(var1[2]);
  t1376 = Sin(var1[2]);
  t1680 = Cos(var1[3]);
  t1343 = t1336*t301*t731;
  t1418 = t676*t1376;
  t1421 = t1343 + t1418;
  t1292 = Sin(var1[3]);
  t1709 = t676*t1336;
  t1833 = -1.*t301*t731*t1376;
  t1852 = t1709 + t1833;
  t2367 = Cos(var1[4]);
  t1504 = -1.*t1292*t1421;
  t1882 = t1680*t1852;
  t1944 = t1504 + t1882;
  t1218 = Sin(var1[4]);
  t2369 = t1680*t1421;
  t2522 = t1292*t1852;
  t2562 = t2369 + t2522;
  t2761 = Cos(var1[5]);
  t2189 = t1218*t1944;
  t2629 = t2367*t2562;
  t2686 = t2189 + t2629;
  t970 = Sin(var1[5]);
  t2818 = t2367*t1944;
  t2984 = -1.*t1218*t2562;
  t2985 = t2818 + t2984;
  t3046 = Cos(var1[6]);
  t2732 = -1.*t970*t2686;
  t2989 = t2761*t2985;
  t3022 = t2732 + t2989;
  t918 = Sin(var1[6]);
  t3102 = t2761*t2686;
  t3200 = t970*t2985;
  t3236 = t3102 + t3200;
  t3964 = t676*t1336*t731;
  t3985 = -1.*t301*t1376;
  t4186 = t3964 + t3985;
  t4260 = -1.*t1336*t301;
  t4415 = -1.*t676*t731*t1376;
  t4432 = t4260 + t4415;
  t4242 = -1.*t1292*t4186;
  t4453 = t1680*t4432;
  t4454 = t4242 + t4453;
  t4524 = t1680*t4186;
  t4582 = t1292*t4432;
  t4699 = t4524 + t4582;
  t4480 = t1218*t4454;
  t4863 = t2367*t4699;
  t5039 = t4480 + t4863;
  t5288 = t2367*t4454;
  t5295 = -1.*t1218*t4699;
  t5316 = t5288 + t5295;
  t5243 = -1.*t970*t5039;
  t5348 = t2761*t5316;
  t5349 = t5243 + t5348;
  t5511 = t2761*t5039;
  t5648 = t970*t5316;
  t5798 = t5511 + t5648;
  t7354 = -1.*t23*t1336*t1292;
  t8350 = -1.*t1680*t23*t1376;
  t8367 = t7354 + t8350;
  t8465 = t1680*t23*t1336;
  t8472 = -1.*t23*t1292*t1376;
  t8477 = t8465 + t8472;
  t8384 = t1218*t8367;
  t8486 = t2367*t8477;
  t8491 = t8384 + t8486;
  t8494 = t2367*t8367;
  t8495 = -1.*t1218*t8477;
  t8496 = t8494 + t8495;
  t8493 = -1.*t970*t8491;
  t8497 = t2761*t8496;
  t8498 = t8493 + t8497;
  t8505 = t2761*t8491;
  t8506 = t970*t8496;
  t8507 = t8505 + t8506;
  t3031 = t918*t3022;
  t3365 = t3046*t3236;
  t3457 = t3031 + t3365;
  t3505 = t3046*t3022;
  t3588 = -1.*t918*t3236;
  t3644 = t3505 + t3588;
  t5447 = t918*t5349;
  t5856 = t3046*t5798;
  t6118 = t5447 + t5856;
  t6224 = t3046*t5349;
  t6486 = -1.*t918*t5798;
  t6546 = t6224 + t6486;
  t8502 = t918*t8498;
  t8510 = t3046*t8507;
  t8511 = t8502 + t8510;
  t8519 = t3046*t8498;
  t8521 = -1.*t918*t8507;
  t8522 = t8519 + t8521;
  t8571 = -1.*t1336;
  t8572 = 1. + t8571;
  t8597 = -1.*t1680;
  t8598 = 1. + t8597;
  t8612 = -1.*t2367;
  t8614 = 1. + t8612;
  t8623 = -1.*t2761;
  t8624 = 1. + t8623;
  t8633 = -1.*t3046;
  t8634 = 1. + t8633;
  t8557 = -1.*t23;
  t8559 = 1. + t8557;
  t8560 = 0.135*t8559;
  t8562 = 0.049*t731;
  t8568 = 0. + t8560 + t8562;
  t8575 = -0.049*t8572;
  t8579 = -0.09*t1376;
  t8583 = 0. + t8575 + t8579;
  t8587 = -0.09*t8572;
  t8588 = 0.049*t1376;
  t8589 = 0. + t8587 + t8588;
  t8600 = -0.049*t8598;
  t8601 = -0.21*t1292;
  t8602 = 0. + t8600 + t8601;
  t8607 = -0.21*t8598;
  t8608 = 0.049*t1292;
  t8610 = 0. + t8607 + t8608;
  t8615 = -0.2707*t8614;
  t8616 = 0.0016*t1218;
  t8617 = 0. + t8615 + t8616;
  t8619 = -0.0016*t8614;
  t8620 = -0.2707*t1218;
  t8621 = 0. + t8619 + t8620;
  t8625 = 0.0184*t8624;
  t8626 = -0.7055*t970;
  t8627 = 0. + t8625 + t8626;
  t8629 = -0.7055*t8624;
  t8630 = -0.0184*t970;
  t8631 = 0. + t8629 + t8630;
  t8635 = -1.1135*t8634;
  t8636 = 0.0216*t918;
  t8637 = 0. + t8635 + t8636;
  t8639 = -0.0216*t8634;
  t8640 = -1.1135*t918;
  t8641 = 0. + t8639 + t8640;

  p_output1(0)=0. + t23*t301;
  p_output1(1)=0. - 1.*t23*t676;
  p_output1(2)=0. + t731;
  p_output1(3)=0.;
  p_output1(4)=0. - 0.642788*t3457 - 0.766044*t3644;
  p_output1(5)=0. + 0.642788*t6118 + 0.766044*t6546;
  p_output1(6)=0. + 0.642788*t8511 + 0.766044*t8522;
  p_output1(7)=0.;
  p_output1(8)=0. + 0.766044*t3457 - 0.642788*t3644;
  p_output1(9)=0. - 0.766044*t6118 + 0.642788*t6546;
  p_output1(10)=0. - 0.766044*t8511 + 0.642788*t8522;
  p_output1(11)=0.;
  p_output1(12)=0.24925 + 0.135*t301 - 0.1305*t23*t301 - 0.0306*t3457 + 1.1312*t3644 - 1.*t301*t8568 - 1.*t301*t731*t8583 - 1.*t676*t8589 - 1.*t1421*t8602 - 1.*t1852*t8610 - 1.*t1944*t8617 - 1.*t2562*t8621 - 1.*t2686*t8627 - 1.*t2985*t8631 - 1.*t3022*t8637 - 1.*t3236*t8641;
  p_output1(13)=-0.0302 + 0.0306*t6118 - 1.1312*t6546 + 0.135*(1. - 1.*t676) + 0.1305*t23*t676 + t676*t8568 + t676*t731*t8583 - 1.*t301*t8589 + t4186*t8602 + t4432*t8610 + t4454*t8617 + t4699*t8621 + t5039*t8627 + t5316*t8631 + t5349*t8637 + t5798*t8641;
  p_output1(14)=-0.047 + 0.004500000000000004*t731 + 0.0306*t8511 - 1.1312*t8522 - 0.049*t8559 + t23*t8583 + t1336*t23*t8602 - 1.*t1376*t23*t8610 + t8367*t8617 + t8477*t8621 + t8491*t8627 + t8496*t8631 + t8498*t8637 + t8507*t8641;
  p_output1(15)=1.;
}


       
void H_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
