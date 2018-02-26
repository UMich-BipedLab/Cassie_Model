/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:43:05 GMT-05:00
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
  double t32;
  double t403;
  double t741;
  double t1041;
  double t1223;
  double t1253;
  double t1402;
  double t1652;
  double t2103;
  double t2512;
  double t2731;
  double t3010;
  double t3158;
  double t3290;
  double t3374;
  double t3470;
  double t3619;
  double t3668;
  double t3830;
  double t3839;
  double t3916;
  double t3946;
  double t4051;
  double t4129;
  double t4166;
  double t4438;
  double t4743;
  double t4790;
  double t4858;
  double t4863;
  double t4988;
  double t5043;
  double t5226;
  double t5542;
  double t5648;
  double t6224;
  double t6566;
  double t6850;
  double t7087;
  double t7359;
  double t8367;
  double t8510;
  double t8560;
  double t8575;
  double t8579;
  double t8607;
  double t8611;
  double t8615;
  double t565;
  double t665;
  double t702;
  double t780;
  double t781;
  double t1342;
  double t1529;
  double t1531;
  double t1657;
  double t1765;
  double t1776;
  double t2749;
  double t3012;
  double t3065;
  double t3427;
  double t3432;
  double t3447;
  double t3922;
  double t3948;
  double t4050;
  double t8648;
  double t8649;
  double t8650;
  double t8652;
  double t8654;
  double t8655;
  double t4373;
  double t4398;
  double t4437;
  double t5042;
  double t5091;
  double t5177;
  double t8658;
  double t8659;
  double t8661;
  double t8664;
  double t8666;
  double t8667;
  double t5915;
  double t6174;
  double t6212;
  double t8465;
  double t8526;
  double t8534;
  double t8670;
  double t8671;
  double t8672;
  double t8674;
  double t8675;
  double t8676;
  double t8588;
  double t8600;
  double t8604;
  double t8678;
  double t8679;
  double t8680;
  double t8682;
  double t8683;
  double t8684;
  double t8709;
  double t8710;
  double t8711;
  double t8713;
  double t8714;
  double t8715;
  double t8717;
  double t8718;
  double t8719;
  double t8721;
  double t8722;
  double t8723;
  double t8725;
  double t8726;
  double t8727;
  double t8729;
  double t8730;
  double t8731;
  t32 = Sin(var1[0]);
  t403 = Cos(var1[1]);
  t741 = Sin(var1[1]);
  t1041 = Cos(var1[2]);
  t1223 = -1.*t1041;
  t1253 = 1. + t1223;
  t1402 = Sin(var1[2]);
  t1652 = Cos(var1[0]);
  t2103 = Cos(var1[3]);
  t2512 = -1.*t2103;
  t2731 = 1. + t2512;
  t3010 = Sin(var1[3]);
  t3158 = t1041*t32*t741;
  t3290 = t1652*t1402;
  t3374 = t3158 + t3290;
  t3470 = t1652*t1041;
  t3619 = -1.*t32*t741*t1402;
  t3668 = t3470 + t3619;
  t3830 = Cos(var1[4]);
  t3839 = -1.*t3830;
  t3916 = 1. + t3839;
  t3946 = Sin(var1[4]);
  t4051 = -1.*t3010*t3374;
  t4129 = t2103*t3668;
  t4166 = t4051 + t4129;
  t4438 = t2103*t3374;
  t4743 = t3010*t3668;
  t4790 = t4438 + t4743;
  t4858 = Cos(var1[5]);
  t4863 = -1.*t4858;
  t4988 = 1. + t4863;
  t5043 = Sin(var1[5]);
  t5226 = t3946*t4166;
  t5542 = t3830*t4790;
  t5648 = t5226 + t5542;
  t6224 = t3830*t4166;
  t6566 = -1.*t3946*t4790;
  t6850 = t6224 + t6566;
  t7087 = Cos(var1[6]);
  t7359 = -1.*t7087;
  t8367 = 1. + t7359;
  t8510 = Sin(var1[6]);
  t8560 = -1.*t5043*t5648;
  t8575 = t4858*t6850;
  t8579 = t8560 + t8575;
  t8607 = t4858*t5648;
  t8611 = t5043*t6850;
  t8615 = t8607 + t8611;
  t565 = -1.*t403;
  t665 = 1. + t565;
  t702 = 0.135*t665;
  t780 = 0.049*t741;
  t781 = 0. + t702 + t780;
  t1342 = -0.049*t1253;
  t1529 = -0.09*t1402;
  t1531 = 0. + t1342 + t1529;
  t1657 = -0.09*t1253;
  t1765 = 0.049*t1402;
  t1776 = 0. + t1657 + t1765;
  t2749 = -0.049*t2731;
  t3012 = -0.21*t3010;
  t3065 = 0. + t2749 + t3012;
  t3427 = -0.21*t2731;
  t3432 = 0.049*t3010;
  t3447 = 0. + t3427 + t3432;
  t3922 = -0.2707*t3916;
  t3948 = 0.0016*t3946;
  t4050 = 0. + t3922 + t3948;
  t8648 = t1652*t1041*t741;
  t8649 = -1.*t32*t1402;
  t8650 = t8648 + t8649;
  t8652 = -1.*t1041*t32;
  t8654 = -1.*t1652*t741*t1402;
  t8655 = t8652 + t8654;
  t4373 = -0.0016*t3916;
  t4398 = -0.2707*t3946;
  t4437 = 0. + t4373 + t4398;
  t5042 = 0.0184*t4988;
  t5091 = -0.7055*t5043;
  t5177 = 0. + t5042 + t5091;
  t8658 = -1.*t3010*t8650;
  t8659 = t2103*t8655;
  t8661 = t8658 + t8659;
  t8664 = t2103*t8650;
  t8666 = t3010*t8655;
  t8667 = t8664 + t8666;
  t5915 = -0.7055*t4988;
  t6174 = -0.0184*t5043;
  t6212 = 0. + t5915 + t6174;
  t8465 = -1.1135*t8367;
  t8526 = 0.0216*t8510;
  t8534 = 0. + t8465 + t8526;
  t8670 = t3946*t8661;
  t8671 = t3830*t8667;
  t8672 = t8670 + t8671;
  t8674 = t3830*t8661;
  t8675 = -1.*t3946*t8667;
  t8676 = t8674 + t8675;
  t8588 = -0.0216*t8367;
  t8600 = -1.1135*t8510;
  t8604 = 0. + t8588 + t8600;
  t8678 = -1.*t5043*t8672;
  t8679 = t4858*t8676;
  t8680 = t8678 + t8679;
  t8682 = t4858*t8672;
  t8683 = t5043*t8676;
  t8684 = t8682 + t8683;
  t8709 = -1.*t403*t1041*t3010;
  t8710 = -1.*t2103*t403*t1402;
  t8711 = t8709 + t8710;
  t8713 = t2103*t403*t1041;
  t8714 = -1.*t403*t3010*t1402;
  t8715 = t8713 + t8714;
  t8717 = t3946*t8711;
  t8718 = t3830*t8715;
  t8719 = t8717 + t8718;
  t8721 = t3830*t8711;
  t8722 = -1.*t3946*t8715;
  t8723 = t8721 + t8722;
  t8725 = -1.*t5043*t8719;
  t8726 = t4858*t8723;
  t8727 = t8725 + t8726;
  t8729 = t4858*t8719;
  t8730 = t5043*t8723;
  t8731 = t8729 + t8730;

  p_output1(0)=0.24925 - 1.*t1652*t1776 + 0.135*t32 - 1.*t3065*t3374 - 1.*t3447*t3668 - 0.1305*t32*t403 - 1.*t4050*t4166 - 1.*t4437*t4790 - 1.*t5177*t5648 - 1.*t6212*t6850 - 1.*t1531*t32*t741 - 1.*t32*t781 - 1.*t8534*t8579 - 1.*t8604*t8615 - 0.0306*(t8510*t8579 + t7087*t8615) + 1.1312*(t7087*t8579 - 1.*t8510*t8615);
  p_output1(1)=-0.0302 + 0.135*(1. - 1.*t1652) - 1.*t1776*t32 + 0.1305*t1652*t403 + t1531*t1652*t741 + t1652*t781 + t3065*t8650 + t3447*t8655 + t4050*t8661 + t4437*t8667 + t5177*t8672 + t6212*t8676 + t8534*t8680 + t8604*t8684 + 0.0306*(t8510*t8680 + t7087*t8684) - 1.1312*(t7087*t8680 - 1.*t8510*t8684);
  p_output1(2)=-0.047 + t1531*t403 + t1041*t3065*t403 - 1.*t1402*t3447*t403 - 0.049*t665 + 0.004500000000000004*t741 + t4050*t8711 + t4437*t8715 + t5177*t8719 + t6212*t8723 + t8534*t8727 + t8604*t8731 + 0.0306*(t8510*t8727 + t7087*t8731) - 1.1312*(t7087*t8727 - 1.*t8510*t8731);
}


       
void p_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
