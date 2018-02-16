/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_LeftToeBottom_to_RightToeBottom.h"

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
  double t456;
  double t620;
  double t495;
  double t570;
  double t623;
  double t667;
  double t583;
  double t629;
  double t640;
  double t453;
  double t699;
  double t712;
  double t731;
  double t835;
  double t641;
  double t781;
  double t817;
  double t425;
  double t878;
  double t883;
  double t931;
  double t971;
  double t829;
  double t933;
  double t938;
  double t422;
  double t973;
  double t975;
  double t999;
  double t968;
  double t1017;
  double t1021;
  double t1037;
  double t1068;
  double t1081;
  double t1308;
  double t1336;
  double t1340;
  double t1353;
  double t49;
  double t1474;
  double t1487;
  double t1501;
  double t1514;
  double t1563;
  double t1603;
  double t1506;
  double t1627;
  double t1679;
  double t1692;
  double t1700;
  double t1761;
  double t1691;
  double t1778;
  double t1797;
  double t1835;
  double t1899;
  double t1935;
  double t1804;
  double t1983;
  double t2002;
  double t2071;
  double t2080;
  double t2095;
  double t1424;
  double t2251;
  double t2253;
  double t2282;
  double t2294;
  double t2301;
  double t2309;
  double t2283;
  double t2324;
  double t2334;
  double t2355;
  double t2394;
  double t2402;
  double t2346;
  double t2403;
  double t2437;
  double t2544;
  double t2571;
  double t2573;
  double t2461;
  double t2595;
  double t2606;
  double t2629;
  double t2638;
  double t2643;
  double t2045;
  double t2103;
  double t2109;
  double t2151;
  double t2170;
  double t2177;
  double t2610;
  double t2679;
  double t2680;
  double t2699;
  double t2716;
  double t2718;
  double t1319;
  double t1325;
  double t1437;
  double t1443;
  double t63;
  double t3011;
  double t3033;
  double t1022;
  double t1102;
  double t1111;
  double t2916;
  double t2923;
  double t2130;
  double t2197;
  double t2212;
  double t2996;
  double t3000;
  double t2685;
  double t2736;
  double t2744;
  double t1188;
  double t1196;
  double t1206;
  double t2793;
  double t2803;
  double t2815;
  double t2843;
  double t2867;
  double t2873;
  double t2970;
  double t3008;
  double t3045;
  double t3057;
  double t3068;
  double t3140;
  double t3156;
  double t3164;
  double t3217;
  double t3248;
  double t3252;
  double t3256;
  double t3323;
  double t3326;
  double t3336;
  double t3424;
  double t3431;
  double t3663;
  double t3817;
  double t3824;
  double t3670;
  double t3674;
  double t3746;
  double t3778;
  double t3739;
  double t3784;
  double t3828;
  double t3833;
  double t3846;
  double t3854;
  double t3857;
  double t3858;
  double t3861;
  double t3864;
  double t3867;
  double t3873;
  t456 = Cos(var1[1]);
  t620 = Cos(var1[3]);
  t495 = Cos(var1[2]);
  t570 = Sin(var1[3]);
  t623 = Sin(var1[2]);
  t667 = Cos(var1[4]);
  t583 = -1.*t456*t495*t570;
  t629 = -1.*t620*t456*t623;
  t640 = t583 + t629;
  t453 = Sin(var1[4]);
  t699 = t620*t456*t495;
  t712 = -1.*t456*t570*t623;
  t731 = t699 + t712;
  t835 = Cos(var1[5]);
  t641 = t453*t640;
  t781 = t667*t731;
  t817 = t641 + t781;
  t425 = Sin(var1[5]);
  t878 = t667*t640;
  t883 = -1.*t453*t731;
  t931 = t878 + t883;
  t971 = Cos(var1[6]);
  t829 = -1.*t425*t817;
  t933 = t835*t931;
  t938 = t829 + t933;
  t422 = Sin(var1[6]);
  t973 = t835*t817;
  t975 = t425*t931;
  t999 = t973 + t975;
  t968 = t422*t938;
  t1017 = t971*t999;
  t1021 = t968 + t1017;
  t1037 = t971*t938;
  t1068 = -1.*t422*t999;
  t1081 = t1037 + t1068;
  t1308 = Cos(var1[0]);
  t1336 = Sin(var1[0]);
  t1340 = -1.*t1336;
  t1353 = 0. + t1340;
  t49 = Sin(var1[1]);
  t1474 = t1308*t495*t49;
  t1487 = -1.*t1336*t623;
  t1501 = t1474 + t1487;
  t1514 = -1.*t495*t1336;
  t1563 = -1.*t1308*t49*t623;
  t1603 = t1514 + t1563;
  t1506 = -1.*t570*t1501;
  t1627 = t620*t1603;
  t1679 = t1506 + t1627;
  t1692 = t620*t1501;
  t1700 = t570*t1603;
  t1761 = t1692 + t1700;
  t1691 = t453*t1679;
  t1778 = t667*t1761;
  t1797 = t1691 + t1778;
  t1835 = t667*t1679;
  t1899 = -1.*t453*t1761;
  t1935 = t1835 + t1899;
  t1804 = -1.*t425*t1797;
  t1983 = t835*t1935;
  t2002 = t1804 + t1983;
  t2071 = t835*t1797;
  t2080 = t425*t1935;
  t2095 = t2071 + t2080;
  t1424 = 0. + t1308;
  t2251 = t495*t1336*t49;
  t2253 = t1308*t623;
  t2282 = t2251 + t2253;
  t2294 = t1308*t495;
  t2301 = -1.*t1336*t49*t623;
  t2309 = t2294 + t2301;
  t2283 = -1.*t570*t2282;
  t2324 = t620*t2309;
  t2334 = t2283 + t2324;
  t2355 = t620*t2282;
  t2394 = t570*t2309;
  t2402 = t2355 + t2394;
  t2346 = t453*t2334;
  t2403 = t667*t2402;
  t2437 = t2346 + t2403;
  t2544 = t667*t2334;
  t2571 = -1.*t453*t2402;
  t2573 = t2544 + t2571;
  t2461 = -1.*t425*t2437;
  t2595 = t835*t2573;
  t2606 = t2461 + t2595;
  t2629 = t835*t2437;
  t2638 = t425*t2573;
  t2643 = t2629 + t2638;
  t2045 = t422*t2002;
  t2103 = t971*t2095;
  t2109 = t2045 + t2103;
  t2151 = t971*t2002;
  t2170 = -1.*t422*t2095;
  t2177 = t2151 + t2170;
  t2610 = t422*t2606;
  t2679 = t971*t2643;
  t2680 = t2610 + t2679;
  t2699 = t971*t2606;
  t2716 = -1.*t422*t2643;
  t2718 = t2699 + t2716;
  t1319 = t1308*t456;
  t1325 = 0. + t1319;
  t1437 = t456*t1336;
  t1443 = 0. + t1437;
  t63 = 0. + t49;
  t3011 = -1.*t49;
  t3033 = 0. + t3011;
  t1022 = 0.642788*t1021;
  t1102 = 0.766044*t1081;
  t1111 = 0. + t1022 + t1102;
  t2916 = -1.*t1308*t456;
  t2923 = 0. + t2916;
  t2130 = -0.642788*t2109;
  t2197 = -0.766044*t2177;
  t2212 = 0. + t2130 + t2197;
  t2996 = -1.*t456*t1336;
  t3000 = 0. + t2996;
  t2685 = -0.642788*t2680;
  t2736 = -0.766044*t2718;
  t2744 = 0. + t2685 + t2736;
  t1188 = -0.766044*t1021;
  t1196 = 0.642788*t1081;
  t1206 = 0. + t1188 + t1196;
  t2793 = 0.766044*t2109;
  t2803 = -0.642788*t2177;
  t2815 = 0. + t2793 + t2803;
  t2843 = 0.766044*t2680;
  t2867 = -0.642788*t2718;
  t2873 = 0. + t2843 + t2867;
  t2970 = t2923*t1325;
  t3008 = t3000*t1443;
  t3045 = t3033*t63;
  t3057 = t2970 + t3008 + t3045;
  t3068 = t3033*t1111;
  t3140 = t2923*t2212;
  t3156 = t3000*t2744;
  t3164 = t3068 + t3140 + t3156;
  t3217 = t3033*t1206;
  t3248 = t2923*t2815;
  t3252 = t3000*t2873;
  t3256 = t3217 + t3248 + t3252;
  t3323 = Sin(var1[7]);
  t3326 = 0. + t3323;
  t3336 = Cos(var1[7]);
  t3424 = -1.*t3336;
  t3431 = 0. + t3424;
  t3663 = Cos(var1[8]);
  t3817 = Sin(var1[8]);
  t3824 = 0. + t3817;
  t3670 = t3336*t3663;
  t3674 = 0. + t3670;
  t3746 = t3663*t3323;
  t3778 = 0. + t3746;
  t3739 = t3674*t1325;
  t3784 = t3778*t1443;
  t3828 = t3824*t63;
  t3833 = t3739 + t3784 + t3828;
  t3846 = t3824*t1111;
  t3854 = t3674*t2212;
  t3857 = t3778*t2744;
  t3858 = t3846 + t3854 + t3857;
  t3861 = t3824*t1206;
  t3864 = t3674*t2815;
  t3867 = t3778*t2873;
  t3873 = t3861 + t3864 + t3867;

  p_output1(0)=0. - 1.*t63;
  p_output1(1)=0. - 1.*t1111;
  p_output1(2)=0. - 1.*t1206;
  p_output1(3)=0. + t1325*t1353 + t1424*t1443;
  p_output1(4)=0. + t1353*t2212 + t1424*t2744;
  p_output1(5)=0. + t1353*t2815 + t1424*t2873;
  p_output1(6)=t3057;
  p_output1(7)=t3164;
  p_output1(8)=t3256;
  p_output1(9)=t3057;
  p_output1(10)=t3164;
  p_output1(11)=t3256;
  p_output1(12)=t3057;
  p_output1(13)=t3164;
  p_output1(14)=t3256;
  p_output1(15)=t3057;
  p_output1(16)=t3164;
  p_output1(17)=t3256;
  p_output1(18)=t3057;
  p_output1(19)=t3164;
  p_output1(20)=t3256;
  p_output1(21)=t63;
  p_output1(22)=t1111;
  p_output1(23)=t1206;
  p_output1(24)=0. + t1325*t3326 + t1443*t3431;
  p_output1(25)=0. + t2212*t3326 + t2744*t3431;
  p_output1(26)=0. + t2815*t3326 + t2873*t3431;
  p_output1(27)=t3833;
  p_output1(28)=t3858;
  p_output1(29)=t3873;
  p_output1(30)=t3833;
  p_output1(31)=t3858;
  p_output1(32)=t3873;
  p_output1(33)=t3833;
  p_output1(34)=t3858;
  p_output1(35)=t3873;
  p_output1(36)=t3833;
  p_output1(37)=t3858;
  p_output1(38)=t3873;
  p_output1(39)=t3833;
  p_output1(40)=t3858;
  p_output1(41)=t3873;
}


       
void Jw_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
