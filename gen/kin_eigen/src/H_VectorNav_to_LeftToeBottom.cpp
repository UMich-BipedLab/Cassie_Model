/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom.h"

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
  double t393;
  double t1083;
  double t1036;
  double t1065;
  double t1115;
  double t1306;
  double t1081;
  double t1199;
  double t1200;
  double t934;
  double t1337;
  double t1345;
  double t1394;
  double t1609;
  double t1226;
  double t1416;
  double t1466;
  double t892;
  double t1614;
  double t1668;
  double t1684;
  double t1768;
  double t1482;
  double t1687;
  double t1736;
  double t890;
  double t1799;
  double t1814;
  double t1827;
  double t326;
  double t157;
  double t533;
  double t2169;
  double t2214;
  double t2298;
  double t2310;
  double t2379;
  double t2416;
  double t2306;
  double t2477;
  double t2485;
  double t2523;
  double t2528;
  double t2555;
  double t2508;
  double t2590;
  double t2651;
  double t2740;
  double t2751;
  double t2842;
  double t2679;
  double t2845;
  double t2900;
  double t2932;
  double t2942;
  double t3017;
  double t3420;
  double t3425;
  double t3445;
  double t3485;
  double t3489;
  double t3504;
  double t3484;
  double t3521;
  double t3619;
  double t3622;
  double t3651;
  double t3663;
  double t3620;
  double t3710;
  double t3730;
  double t3775;
  double t3805;
  double t3815;
  double t3749;
  double t3849;
  double t3867;
  double t3931;
  double t3986;
  double t3990;
  double t1756;
  double t1862;
  double t1933;
  double t2042;
  double t2055;
  double t2100;
  double t2909;
  double t3023;
  double t3178;
  double t3284;
  double t3335;
  double t3337;
  double t3870;
  double t4054;
  double t4080;
  double t4152;
  double t4181;
  double t4193;
  double t4584;
  double t4600;
  double t4918;
  double t4976;
  double t5131;
  double t5142;
  double t5304;
  double t5352;
  double t4504;
  double t4561;
  double t4660;
  double t4701;
  double t4734;
  double t4779;
  double t4792;
  double t4606;
  double t4648;
  double t4655;
  double t4804;
  double t4805;
  double t4838;
  double t4983;
  double t4989;
  double t5011;
  double t5025;
  double t5034;
  double t5079;
  double t5154;
  double t5159;
  double t5168;
  double t5212;
  double t5232;
  double t5259;
  double t5397;
  double t5411;
  double t5413;
  double t5426;
  double t5442;
  double t5457;
  double t5613;
  double t5623;
  double t5625;
  double t5741;
  double t5747;
  double t5750;
  t393 = Cos(var1[1]);
  t1083 = Cos(var1[3]);
  t1036 = Cos(var1[2]);
  t1065 = Sin(var1[3]);
  t1115 = Sin(var1[2]);
  t1306 = Cos(var1[4]);
  t1081 = -1.*t393*t1036*t1065;
  t1199 = -1.*t1083*t393*t1115;
  t1200 = t1081 + t1199;
  t934 = Sin(var1[4]);
  t1337 = t1083*t393*t1036;
  t1345 = -1.*t393*t1065*t1115;
  t1394 = t1337 + t1345;
  t1609 = Cos(var1[5]);
  t1226 = t934*t1200;
  t1416 = t1306*t1394;
  t1466 = t1226 + t1416;
  t892 = Sin(var1[5]);
  t1614 = t1306*t1200;
  t1668 = -1.*t934*t1394;
  t1684 = t1614 + t1668;
  t1768 = Cos(var1[6]);
  t1482 = -1.*t892*t1466;
  t1687 = t1609*t1684;
  t1736 = t1482 + t1687;
  t890 = Sin(var1[6]);
  t1799 = t1609*t1466;
  t1814 = t892*t1684;
  t1827 = t1799 + t1814;
  t326 = Cos(var1[0]);
  t157 = Sin(var1[1]);
  t533 = Sin(var1[0]);
  t2169 = t326*t1036*t157;
  t2214 = -1.*t533*t1115;
  t2298 = t2169 + t2214;
  t2310 = -1.*t1036*t533;
  t2379 = -1.*t326*t157*t1115;
  t2416 = t2310 + t2379;
  t2306 = -1.*t1065*t2298;
  t2477 = t1083*t2416;
  t2485 = t2306 + t2477;
  t2523 = t1083*t2298;
  t2528 = t1065*t2416;
  t2555 = t2523 + t2528;
  t2508 = t934*t2485;
  t2590 = t1306*t2555;
  t2651 = t2508 + t2590;
  t2740 = t1306*t2485;
  t2751 = -1.*t934*t2555;
  t2842 = t2740 + t2751;
  t2679 = -1.*t892*t2651;
  t2845 = t1609*t2842;
  t2900 = t2679 + t2845;
  t2932 = t1609*t2651;
  t2942 = t892*t2842;
  t3017 = t2932 + t2942;
  t3420 = t1036*t533*t157;
  t3425 = t326*t1115;
  t3445 = t3420 + t3425;
  t3485 = t326*t1036;
  t3489 = -1.*t533*t157*t1115;
  t3504 = t3485 + t3489;
  t3484 = -1.*t1065*t3445;
  t3521 = t1083*t3504;
  t3619 = t3484 + t3521;
  t3622 = t1083*t3445;
  t3651 = t1065*t3504;
  t3663 = t3622 + t3651;
  t3620 = t934*t3619;
  t3710 = t1306*t3663;
  t3730 = t3620 + t3710;
  t3775 = t1306*t3619;
  t3805 = -1.*t934*t3663;
  t3815 = t3775 + t3805;
  t3749 = -1.*t892*t3730;
  t3849 = t1609*t3815;
  t3867 = t3749 + t3849;
  t3931 = t1609*t3730;
  t3986 = t892*t3815;
  t3990 = t3931 + t3986;
  t1756 = t890*t1736;
  t1862 = t1768*t1827;
  t1933 = t1756 + t1862;
  t2042 = t1768*t1736;
  t2055 = -1.*t890*t1827;
  t2100 = t2042 + t2055;
  t2909 = t890*t2900;
  t3023 = t1768*t3017;
  t3178 = t2909 + t3023;
  t3284 = t1768*t2900;
  t3335 = -1.*t890*t3017;
  t3337 = t3284 + t3335;
  t3870 = t890*t3867;
  t4054 = t1768*t3990;
  t4080 = t3870 + t4054;
  t4152 = t1768*t3867;
  t4181 = -1.*t890*t3990;
  t4193 = t4152 + t4181;
  t4584 = -1.*t1083;
  t4600 = 1. + t4584;
  t4918 = -1.*t1306;
  t4976 = 1. + t4918;
  t5131 = -1.*t1609;
  t5142 = 1. + t5131;
  t5304 = -1.*t1768;
  t5352 = 1. + t5304;
  t4504 = -1.*t393;
  t4561 = 1. + t4504;
  t4660 = -1.*t1036;
  t4701 = 1. + t4660;
  t4734 = -0.049*t4701;
  t4779 = -0.09*t1115;
  t4792 = 0. + t4734 + t4779;
  t4606 = -0.049*t4600;
  t4648 = -0.21*t1065;
  t4655 = 0. + t4606 + t4648;
  t4804 = -0.21*t4600;
  t4805 = 0.049*t1065;
  t4838 = 0. + t4804 + t4805;
  t4983 = -0.2707*t4976;
  t4989 = 0.0016*t934;
  t5011 = 0. + t4983 + t4989;
  t5025 = -0.0016*t4976;
  t5034 = -0.2707*t934;
  t5079 = 0. + t5025 + t5034;
  t5154 = 0.0184*t5142;
  t5159 = -0.7055*t892;
  t5168 = 0. + t5154 + t5159;
  t5212 = -0.7055*t5142;
  t5232 = -0.0184*t892;
  t5259 = 0. + t5212 + t5232;
  t5397 = -1.1135*t5352;
  t5411 = 0.0216*t890;
  t5413 = 0. + t5397 + t5411;
  t5426 = -0.0216*t5352;
  t5442 = -1.1135*t890;
  t5457 = 0. + t5426 + t5442;
  t5613 = 0.135*t4561;
  t5623 = 0.049*t157;
  t5625 = 0. + t5613 + t5623;
  t5741 = -0.09*t4701;
  t5747 = 0.049*t1115;
  t5750 = 0. + t5741 + t5747;

  p_output1(0)=0. + t157;
  p_output1(1)=0. - 1.*t326*t393;
  p_output1(2)=0. - 1.*t393*t533;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t1933 + 0.766044*t2100;
  p_output1(5)=0. + 0.642788*t3178 + 0.766044*t3337;
  p_output1(6)=0. + 0.642788*t4080 + 0.766044*t4193;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t1933 + 0.642788*t2100;
  p_output1(9)=0. - 0.766044*t3178 + 0.642788*t3337;
  p_output1(10)=0. - 0.766044*t4080 + 0.642788*t4193;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 + 0.004500000000000004*t157 + 0.0306*t1933 - 1.1312*t2100 - 0.049*t4561 + t1036*t393*t4655 + t393*t4792 - 1.*t1115*t393*t4838 + t1200*t5011 + t1394*t5079 + t1466*t5168 + t1684*t5259 + t1736*t5413 + t1827*t5457;
  p_output1(13)=0. + 0.0306*t3178 + 0.135*(1. - 1.*t326) - 1.1312*t3337 + 0.1305*t326*t393 + t2298*t4655 + t157*t326*t4792 + t2416*t4838 + t2485*t5011 + t2555*t5079 + t2651*t5168 + t2842*t5259 + t2900*t5413 + t3017*t5457 + t326*t5625 - 1.*t533*t5750;
  p_output1(14)=0.07996 + 0.0306*t4080 - 1.1312*t4193 + t3445*t4655 + t3504*t4838 + t3619*t5011 + t3663*t5079 + t3730*t5168 + t3815*t5259 - 0.135*t533 + 0.1305*t393*t533 + t157*t4792*t533 + t3867*t5413 + t3990*t5457 + t533*t5625 + t326*t5750;
  p_output1(15)=1.;
}


       
void H_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
