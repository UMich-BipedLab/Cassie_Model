/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseIMU_to_RightToeBottom.h"

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
  double t120;
  double t258;
  double t566;
  double t646;
  double t701;
  double t730;
  double t983;
  double t1320;
  double t2225;
  double t2241;
  double t2368;
  double t2440;
  double t1661;
  double t1978;
  double t2036;
  double t2632;
  double t2637;
  double t2657;
  double t3105;
  double t3267;
  double t3273;
  double t3373;
  double t3028;
  double t3061;
  double t3072;
  double t3822;
  double t3879;
  double t4087;
  double t4591;
  double t4610;
  double t4638;
  double t4667;
  double t4432;
  double t4460;
  double t4473;
  double t4896;
  double t5011;
  double t5068;
  double t5548;
  double t5591;
  double t5614;
  double t5799;
  double t5307;
  double t5371;
  double t5526;
  double t6026;
  double t6078;
  double t6213;
  double t367;
  double t421;
  double t452;
  double t570;
  double t616;
  double t826;
  double t995;
  double t1059;
  double t1432;
  double t1482;
  double t1582;
  double t2409;
  double t2451;
  double t2551;
  double t2666;
  double t2867;
  double t2949;
  double t6880;
  double t6888;
  double t6889;
  double t6897;
  double t6939;
  double t6944;
  double t3310;
  double t3376;
  double t3721;
  double t4094;
  double t4172;
  double t4180;
  double t6992;
  double t6993;
  double t7026;
  double t7055;
  double t7074;
  double t7085;
  double t4654;
  double t4734;
  double t4786;
  double t5082;
  double t5116;
  double t5121;
  double t7116;
  double t7117;
  double t7157;
  double t7207;
  double t7218;
  double t7231;
  double t5710;
  double t5936;
  double t5973;
  double t6292;
  double t6434;
  double t6452;
  double t7241;
  double t7245;
  double t7248;
  double t7258;
  double t7264;
  double t7285;
  double t7377;
  double t7379;
  double t7400;
  double t7403;
  double t7404;
  double t7407;
  double t7410;
  double t7414;
  double t7418;
  double t7421;
  double t7428;
  double t7443;
  double t7449;
  double t7450;
  double t7454;
  double t7457;
  double t7458;
  double t7462;
  double t7463;
  double t7464;
  double t7374;
  double t7376;
  double t7387;
  double t7390;
  double t7395;
  double t7398;
  double t7399;
  double t7406;
  double t7415;
  double t7432;
  double t7452;
  double t7460;
  double t7467;
  double t7469;
  double t7471;
  double t7474;
  double t7475;
  double t7476;
  double t7488;
  double t7490;
  double t7492;
  double t7493;
  double t1313;
  double t1593;
  double t2594;
  double t2965;
  double t3768;
  double t4244;
  double t4858;
  double t5253;
  double t6020;
  double t6456;
  double t6520;
  double t6537;
  double t6561;
  double t6591;
  double t6648;
  double t6701;
  double t6744;
  double t6764;
  double t6872;
  double t6877;
  double t6892;
  double t6954;
  double t7043;
  double t7109;
  double t7203;
  double t7233;
  double t7256;
  double t7299;
  double t7304;
  double t7308;
  double t7316;
  double t7320;
  double t7322;
  double t7327;
  double t7340;
  double t7342;
  double t7553;
  double t7556;
  double t7559;
  double t7505;
  double t7537;
  double t7552;
  double t7560;
  double t7569;
  double t7570;
  double t7519;
  double t7575;
  double t7578;
  double t7581;
  double t7588;
  double t7592;
  double t7594;
  double t7610;
  double t7611;
  double t7613;
  double t7620;
  double t7630;
  double t7640;
  double t7653;
  double t7659;
  double t7661;
  double t7679;
  double t7680;
  double t7682;
  double t7695;
  double t7699;
  double t7700;
  double t7719;
  double t7720;
  double t7723;
  double t7730;
  double t7732;
  double t7734;
  double t7737;
  double t7739;
  double t7740;
  double t7747;
  double t7748;
  double t7749;
  double t7764;
  double t7766;
  double t7767;
  double t7776;
  double t7781;
  double t7796;
  double t7807;
  double t7810;
  double t7811;
  t120 = Cos(var1[7]);
  t258 = Cos(var1[8]);
  t566 = Sin(var1[8]);
  t646 = Cos(var1[9]);
  t701 = -1.*t646;
  t730 = 1. + t701;
  t983 = Sin(var1[9]);
  t1320 = Sin(var1[7]);
  t2225 = Cos(var1[10]);
  t2241 = -1.*t2225;
  t2368 = 1. + t2241;
  t2440 = Sin(var1[10]);
  t1661 = t120*t646*t566;
  t1978 = -1.*t1320*t983;
  t2036 = t1661 + t1978;
  t2632 = -1.*t646*t1320;
  t2637 = -1.*t120*t566*t983;
  t2657 = t2632 + t2637;
  t3105 = Cos(var1[11]);
  t3267 = -1.*t3105;
  t3273 = 1. + t3267;
  t3373 = Sin(var1[11]);
  t3028 = t2225*t2036;
  t3061 = t2657*t2440;
  t3072 = t3028 + t3061;
  t3822 = t2225*t2657;
  t3879 = -1.*t2036*t2440;
  t4087 = t3822 + t3879;
  t4591 = Cos(var1[12]);
  t4610 = -1.*t4591;
  t4638 = 1. + t4610;
  t4667 = Sin(var1[12]);
  t4432 = t3105*t3072;
  t4460 = t4087*t3373;
  t4473 = t4432 + t4460;
  t4896 = t3105*t4087;
  t5011 = -1.*t3072*t3373;
  t5068 = t4896 + t5011;
  t5548 = Cos(var1[13]);
  t5591 = -1.*t5548;
  t5614 = 1. + t5591;
  t5799 = Sin(var1[13]);
  t5307 = t4591*t4473;
  t5371 = t5068*t4667;
  t5526 = t5307 + t5371;
  t6026 = t4591*t5068;
  t6078 = -1.*t4473*t4667;
  t6213 = t6026 + t6078;
  t367 = -1.*t258;
  t421 = 1. + t367;
  t452 = -0.135*t421;
  t570 = 0.049*t566;
  t616 = 0. + t452 + t570;
  t826 = -0.049*t730;
  t995 = -0.09*t983;
  t1059 = 0. + t826 + t995;
  t1432 = -0.09*t730;
  t1482 = 0.049*t983;
  t1582 = 0. + t1432 + t1482;
  t2409 = -0.049*t2368;
  t2451 = -0.21*t2440;
  t2551 = 0. + t2409 + t2451;
  t2666 = -0.21*t2368;
  t2867 = 0.049*t2440;
  t2949 = 0. + t2666 + t2867;
  t6880 = t646*t1320*t566;
  t6888 = t120*t983;
  t6889 = t6880 + t6888;
  t6897 = t120*t646;
  t6939 = -1.*t1320*t566*t983;
  t6944 = t6897 + t6939;
  t3310 = -0.0016*t3273;
  t3376 = -0.2707*t3373;
  t3721 = 0. + t3310 + t3376;
  t4094 = -0.2707*t3273;
  t4172 = 0.0016*t3373;
  t4180 = 0. + t4094 + t4172;
  t6992 = t2225*t6889;
  t6993 = t6944*t2440;
  t7026 = t6992 + t6993;
  t7055 = t2225*t6944;
  t7074 = -1.*t6889*t2440;
  t7085 = t7055 + t7074;
  t4654 = 0.0184*t4638;
  t4734 = -0.7055*t4667;
  t4786 = 0. + t4654 + t4734;
  t5082 = -0.7055*t4638;
  t5116 = -0.0184*t4667;
  t5121 = 0. + t5082 + t5116;
  t7116 = t3105*t7026;
  t7117 = t7085*t3373;
  t7157 = t7116 + t7117;
  t7207 = t3105*t7085;
  t7218 = -1.*t7026*t3373;
  t7231 = t7207 + t7218;
  t5710 = -0.0216*t5614;
  t5936 = -1.1135*t5799;
  t5973 = 0. + t5710 + t5936;
  t6292 = -1.1135*t5614;
  t6434 = 0.0216*t5799;
  t6452 = 0. + t6292 + t6434;
  t7241 = t4591*t7157;
  t7245 = t7231*t4667;
  t7248 = t7241 + t7245;
  t7258 = t4591*t7231;
  t7264 = -1.*t7157*t4667;
  t7285 = t7258 + t7264;
  t7377 = -1.*t1320;
  t7379 = 0. + t7377;
  t7400 = t258*t646*t2225;
  t7403 = -1.*t258*t983*t2440;
  t7404 = t7400 + t7403;
  t7407 = -1.*t258*t2225*t983;
  t7410 = -1.*t258*t646*t2440;
  t7414 = t7407 + t7410;
  t7418 = t3105*t7404;
  t7421 = t7414*t3373;
  t7428 = t7418 + t7421;
  t7443 = t3105*t7414;
  t7449 = -1.*t7404*t3373;
  t7450 = t7443 + t7449;
  t7454 = t4591*t7428;
  t7457 = t7450*t4667;
  t7458 = t7454 + t7457;
  t7462 = t4591*t7450;
  t7463 = -1.*t7428*t4667;
  t7464 = t7462 + t7463;
  t7374 = -1.*t120;
  t7376 = 0. + t7374;
  t7387 = 0.049*t258;
  t7390 = -0.004500000000000004*t566;
  t7395 = t258*t1059;
  t7398 = t258*t646*t2551;
  t7399 = -1.*t258*t983*t2949;
  t7406 = t7404*t3721;
  t7415 = t7414*t4180;
  t7432 = t7428*t4786;
  t7452 = t7450*t5121;
  t7460 = t7458*t5973;
  t7467 = t7464*t6452;
  t7469 = t5548*t7458;
  t7471 = t7464*t5799;
  t7474 = t7469 + t7471;
  t7475 = 0.0306*t7474;
  t7476 = t5548*t7464;
  t7488 = -1.*t7458*t5799;
  t7490 = t7476 + t7488;
  t7492 = -1.1312*t7490;
  t7493 = 0. + t7387 + t7390 + t7395 + t7398 + t7399 + t7406 + t7415 + t7432 + t7452 + t7460 + t7467 + t7475 + t7492;
  t1313 = t120*t566*t1059;
  t1593 = -1.*t1320*t1582;
  t2594 = t2036*t2551;
  t2965 = t2657*t2949;
  t3768 = t3072*t3721;
  t4244 = t4087*t4180;
  t4858 = t4473*t4786;
  t5253 = t5068*t5121;
  t6020 = t5526*t5973;
  t6456 = t6213*t6452;
  t6520 = t5548*t5526;
  t6537 = t6213*t5799;
  t6561 = t6520 + t6537;
  t6591 = 0.0306*t6561;
  t6648 = t5548*t6213;
  t6701 = -1.*t5526*t5799;
  t6744 = t6648 + t6701;
  t6764 = -1.1312*t6744;
  t6872 = -1.*t1320*t566*t1059;
  t6877 = -1.*t120*t1582;
  t6892 = -1.*t6889*t2551;
  t6954 = -1.*t6944*t2949;
  t7043 = -1.*t7026*t3721;
  t7109 = -1.*t7085*t4180;
  t7203 = -1.*t7157*t4786;
  t7233 = -1.*t7231*t5121;
  t7256 = -1.*t7248*t5973;
  t7299 = -1.*t7285*t6452;
  t7304 = t5548*t7248;
  t7308 = t7285*t5799;
  t7316 = t7304 + t7308;
  t7320 = -0.0306*t7316;
  t7322 = t5548*t7285;
  t7327 = -1.*t7248*t5799;
  t7340 = t7322 + t7327;
  t7342 = 1.1312*t7340;
  t7553 = -1.*t120*t258;
  t7556 = 0. + t7553;
  t7559 = 0. + t566;
  t7505 = 0.004500000000000004*t120*t258;
  t7537 = t258*t1320;
  t7552 = 0. + t7537;
  t7560 = 0.049*t258*t646;
  t7569 = -0.09*t258*t983;
  t7570 = 0. + t7560 + t7390 + t7569 + t7398 + t7399 + t7406 + t7415 + t7432 + t7452 + t7460 + t7467 + t7475 + t7492;
  t7519 = -0.004500000000000004*t258*t1320;
  t7575 = 0.049*t2036;
  t7578 = 0.09*t2657;
  t7581 = 0. + t7505 + t7575 + t7578 + t2594 + t2965 + t3768 + t4244 + t4858 + t5253 + t6020 + t6456 + t6591 + t6764;
  t7588 = -0.049*t6889;
  t7592 = -0.09*t6944;
  t7594 = 0. + t7519 + t7588 + t7592 + t6892 + t6954 + t7043 + t7109 + t7203 + t7233 + t7256 + t7299 + t7320 + t7342;
  t7610 = 0.21*t7414;
  t7611 = 0.049*t7404;
  t7613 = 0. + t7610 + t7611 + t7406 + t7415 + t7432 + t7452 + t7460 + t7467 + t7475 + t7492;
  t7620 = 0.21*t4087;
  t7630 = 0.049*t3072;
  t7640 = 0. + t7620 + t7630 + t3768 + t4244 + t4858 + t5253 + t6020 + t6456 + t6591 + t6764;
  t7653 = -0.21*t7085;
  t7659 = -0.049*t7026;
  t7661 = 0. + t7653 + t7659 + t7043 + t7109 + t7203 + t7233 + t7256 + t7299 + t7320 + t7342;
  t7679 = 0.0016*t7428;
  t7680 = 0.2707*t7450;
  t7682 = 0. + t7679 + t7680 + t7432 + t7452 + t7460 + t7467 + t7475 + t7492;
  t7695 = 0.0016*t4473;
  t7699 = 0.2707*t5068;
  t7700 = 0. + t7695 + t7699 + t4858 + t5253 + t6020 + t6456 + t6591 + t6764;
  t7719 = -0.0016*t7157;
  t7720 = -0.2707*t7231;
  t7723 = 0. + t7719 + t7720 + t7203 + t7233 + t7256 + t7299 + t7320 + t7342;
  t7730 = 0.7055*t7464;
  t7732 = -0.0184*t7458;
  t7734 = 0. + t7730 + t7732 + t7460 + t7467 + t7475 + t7492;
  t7737 = 0.7055*t6213;
  t7739 = -0.0184*t5526;
  t7740 = 0. + t7737 + t7739 + t6020 + t6456 + t6591 + t6764;
  t7747 = -0.7055*t7285;
  t7748 = 0.0184*t7248;
  t7749 = 0. + t7747 + t7748 + t7256 + t7299 + t7320 + t7342;
  t7764 = 0.052199999999999996*t7474;
  t7766 = -0.01770000000000005*t7490;
  t7767 = 0. + t7764 + t7766;
  t7776 = 0.052199999999999996*t6561;
  t7781 = -0.01770000000000005*t6744;
  t7796 = 0. + t7776 + t7781;
  t7807 = -0.052199999999999996*t7316;
  t7810 = 0.01770000000000005*t7340;
  t7811 = 0. + t7807 + t7810;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
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
  p_output1(42)=0.;
  p_output1(43)=0.;
  p_output1(44)=1.;
  p_output1(45)=0. - 1.*(0. + 0.135*t120 + t1313 + t1593 - 0.1305*t120*t258 + t2594 + t2965 + t3768 + t4244 + t4858 + t5253 + t6020 + t120*t616 + t6456 + t6591 + t6764);
  p_output1(46)=0. - 0.135*t1320 + 0.1305*t1320*t258 - 1.*t1320*t616 + t6872 + t6877 + t6892 + t6954 + t7043 + t7109 + t7203 + t7233 + t7256 + t7299 + t7320 + t7342;
  p_output1(47)=0.;
  p_output1(48)=t7376;
  p_output1(49)=t7379;
  p_output1(50)=0.;
  p_output1(51)=0. + t7379*t7493;
  p_output1(52)=0. - 1.*t7376*t7493;
  p_output1(53)=t7376*(0. + t1313 - 0.09*t1320 + t1593 + t2594 + t2965 + t3768 + t4244 + t4858 + t5253 + 0.049*t120*t566 + t6020 + t6456 + t6591 + t6764 + t7505) - 1.*t7379*(0. - 0.09*t120 - 0.049*t1320*t566 + t6872 + t6877 + t6892 + t6954 + t7043 + t7109 + t7203 + t7233 + t7256 + t7299 + t7320 + t7342 + t7519);
  p_output1(54)=t7552;
  p_output1(55)=t7556;
  p_output1(56)=t7559;
  p_output1(57)=t7556*t7570 - 1.*t7559*t7581;
  p_output1(58)=-1.*t7552*t7570 + t7559*t7594;
  p_output1(59)=t7552*t7581 - 1.*t7556*t7594;
  p_output1(60)=t7552;
  p_output1(61)=t7556;
  p_output1(62)=t7559;
  p_output1(63)=t7556*t7613 - 1.*t7559*t7640;
  p_output1(64)=-1.*t7552*t7613 + t7559*t7661;
  p_output1(65)=t7552*t7640 - 1.*t7556*t7661;
  p_output1(66)=t7552;
  p_output1(67)=t7556;
  p_output1(68)=t7559;
  p_output1(69)=t7556*t7682 - 1.*t7559*t7700;
  p_output1(70)=-1.*t7552*t7682 + t7559*t7723;
  p_output1(71)=t7552*t7700 - 1.*t7556*t7723;
  p_output1(72)=t7552;
  p_output1(73)=t7556;
  p_output1(74)=t7559;
  p_output1(75)=t7556*t7734 - 1.*t7559*t7740;
  p_output1(76)=-1.*t7552*t7734 + t7559*t7749;
  p_output1(77)=t7552*t7740 - 1.*t7556*t7749;
  p_output1(78)=t7552;
  p_output1(79)=t7556;
  p_output1(80)=t7559;
  p_output1(81)=t7556*t7767 - 1.*t7559*t7796;
  p_output1(82)=-1.*t7552*t7767 + t7559*t7811;
  p_output1(83)=t7552*t7796 - 1.*t7556*t7811;
}


       
void J_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
