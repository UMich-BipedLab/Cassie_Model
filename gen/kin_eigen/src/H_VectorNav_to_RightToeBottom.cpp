/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom.h"

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
  double t97;
  double t464;
  double t494;
  double t454;
  double t512;
  double t419;
  double t733;
  double t739;
  double t743;
  double t486;
  double t546;
  double t679;
  double t757;
  double t333;
  double t845;
  double t849;
  double t850;
  double t723;
  double t766;
  double t819;
  double t901;
  double t205;
  double t1069;
  double t1070;
  double t1105;
  double t834;
  double t984;
  double t1060;
  double t1143;
  double t67;
  double t40;
  double t170;
  double t1439;
  double t1448;
  double t1454;
  double t1363;
  double t1395;
  double t1410;
  double t1504;
  double t1569;
  double t1618;
  double t1436;
  double t1456;
  double t1458;
  double t1753;
  double t1785;
  double t1787;
  double t1497;
  double t1629;
  double t1643;
  double t1843;
  double t1874;
  double t1875;
  double t1651;
  double t1802;
  double t1828;
  double t1959;
  double t1989;
  double t2007;
  double t1917;
  double t1919;
  double t1924;
  double t2042;
  double t2056;
  double t2067;
  double t1931;
  double t2018;
  double t2024;
  double t2124;
  double t2141;
  double t2155;
  double t2026;
  double t2079;
  double t2106;
  double t2201;
  double t2202;
  double t2232;
  double t2110;
  double t2176;
  double t2193;
  double t1062;
  double t1149;
  double t1156;
  double t1291;
  double t1300;
  double t1344;
  double t1838;
  double t1888;
  double t1892;
  double t1898;
  double t1901;
  double t1902;
  double t2194;
  double t2271;
  double t2285;
  double t2309;
  double t2314;
  double t2336;
  double t2709;
  double t2715;
  double t2838;
  double t2851;
  double t2931;
  double t2938;
  double t3045;
  double t3057;
  double t2548;
  double t2558;
  double t2622;
  double t2640;
  double t2669;
  double t2703;
  double t2706;
  double t2716;
  double t2784;
  double t2792;
  double t2802;
  double t2816;
  double t2825;
  double t2852;
  double t2862;
  double t2878;
  double t2904;
  double t2907;
  double t2917;
  double t2956;
  double t2958;
  double t2973;
  double t3007;
  double t3014;
  double t3021;
  double t3065;
  double t3071;
  double t3074;
  double t3098;
  double t3099;
  double t3102;
  double t3177;
  double t3186;
  double t3221;
  double t3274;
  double t3302;
  double t3308;
  t97 = Cos(var1[8]);
  t464 = Cos(var1[10]);
  t494 = Sin(var1[9]);
  t454 = Cos(var1[9]);
  t512 = Sin(var1[10]);
  t419 = Cos(var1[11]);
  t733 = -1.*t97*t464*t494;
  t739 = -1.*t97*t454*t512;
  t743 = t733 + t739;
  t486 = t97*t454*t464;
  t546 = -1.*t97*t494*t512;
  t679 = t486 + t546;
  t757 = Sin(var1[11]);
  t333 = Cos(var1[12]);
  t845 = t419*t743;
  t849 = -1.*t679*t757;
  t850 = t845 + t849;
  t723 = t419*t679;
  t766 = t743*t757;
  t819 = t723 + t766;
  t901 = Sin(var1[12]);
  t205 = Cos(var1[13]);
  t1069 = t333*t850;
  t1070 = -1.*t819*t901;
  t1105 = t1069 + t1070;
  t834 = t333*t819;
  t984 = t850*t901;
  t1060 = t834 + t984;
  t1143 = Sin(var1[13]);
  t67 = Cos(var1[7]);
  t40 = Sin(var1[8]);
  t170 = Sin(var1[7]);
  t1439 = -1.*t454*t170;
  t1448 = -1.*t67*t40*t494;
  t1454 = t1439 + t1448;
  t1363 = t67*t454*t40;
  t1395 = -1.*t170*t494;
  t1410 = t1363 + t1395;
  t1504 = t464*t1454;
  t1569 = -1.*t1410*t512;
  t1618 = t1504 + t1569;
  t1436 = t464*t1410;
  t1456 = t1454*t512;
  t1458 = t1436 + t1456;
  t1753 = t419*t1618;
  t1785 = -1.*t1458*t757;
  t1787 = t1753 + t1785;
  t1497 = t419*t1458;
  t1629 = t1618*t757;
  t1643 = t1497 + t1629;
  t1843 = t333*t1787;
  t1874 = -1.*t1643*t901;
  t1875 = t1843 + t1874;
  t1651 = t333*t1643;
  t1802 = t1787*t901;
  t1828 = t1651 + t1802;
  t1959 = t67*t454;
  t1989 = -1.*t170*t40*t494;
  t2007 = t1959 + t1989;
  t1917 = t454*t170*t40;
  t1919 = t67*t494;
  t1924 = t1917 + t1919;
  t2042 = t464*t2007;
  t2056 = -1.*t1924*t512;
  t2067 = t2042 + t2056;
  t1931 = t464*t1924;
  t2018 = t2007*t512;
  t2024 = t1931 + t2018;
  t2124 = t419*t2067;
  t2141 = -1.*t2024*t757;
  t2155 = t2124 + t2141;
  t2026 = t419*t2024;
  t2079 = t2067*t757;
  t2106 = t2026 + t2079;
  t2201 = t333*t2155;
  t2202 = -1.*t2106*t901;
  t2232 = t2201 + t2202;
  t2110 = t333*t2106;
  t2176 = t2155*t901;
  t2193 = t2110 + t2176;
  t1062 = t205*t1060;
  t1149 = t1105*t1143;
  t1156 = t1062 + t1149;
  t1291 = t205*t1105;
  t1300 = -1.*t1060*t1143;
  t1344 = t1291 + t1300;
  t1838 = t205*t1828;
  t1888 = t1875*t1143;
  t1892 = t1838 + t1888;
  t1898 = t205*t1875;
  t1901 = -1.*t1828*t1143;
  t1902 = t1898 + t1901;
  t2194 = t205*t2193;
  t2271 = t2232*t1143;
  t2285 = t2194 + t2271;
  t2309 = t205*t2232;
  t2314 = -1.*t2193*t1143;
  t2336 = t2309 + t2314;
  t2709 = -1.*t464;
  t2715 = 1. + t2709;
  t2838 = -1.*t419;
  t2851 = 1. + t2838;
  t2931 = -1.*t333;
  t2938 = 1. + t2931;
  t3045 = -1.*t205;
  t3057 = 1. + t3045;
  t2548 = -1.*t97;
  t2558 = 1. + t2548;
  t2622 = -1.*t454;
  t2640 = 1. + t2622;
  t2669 = -0.049*t2640;
  t2703 = -0.09*t494;
  t2706 = 0. + t2669 + t2703;
  t2716 = -0.049*t2715;
  t2784 = -0.21*t512;
  t2792 = 0. + t2716 + t2784;
  t2802 = -0.21*t2715;
  t2816 = 0.049*t512;
  t2825 = 0. + t2802 + t2816;
  t2852 = -0.0016*t2851;
  t2862 = -0.2707*t757;
  t2878 = 0. + t2852 + t2862;
  t2904 = -0.2707*t2851;
  t2907 = 0.0016*t757;
  t2917 = 0. + t2904 + t2907;
  t2956 = 0.0184*t2938;
  t2958 = -0.7055*t901;
  t2973 = 0. + t2956 + t2958;
  t3007 = -0.7055*t2938;
  t3014 = -0.0184*t901;
  t3021 = 0. + t3007 + t3014;
  t3065 = -0.0216*t3057;
  t3071 = -1.1135*t1143;
  t3074 = 0. + t3065 + t3071;
  t3098 = -1.1135*t3057;
  t3099 = 0.0216*t1143;
  t3102 = 0. + t3098 + t3099;
  t3177 = -0.135*t2558;
  t3186 = 0.049*t40;
  t3221 = 0. + t3177 + t3186;
  t3274 = -0.09*t2640;
  t3302 = 0.049*t494;
  t3308 = 0. + t3274 + t3302;

  p_output1(0)=0. + t40;
  p_output1(1)=0. + t67*t97;
  p_output1(2)=0. + t170*t97;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t1156 + 0.766044*t1344;
  p_output1(5)=0. - 0.642788*t1892 - 0.766044*t1902;
  p_output1(6)=0. - 0.642788*t2285 - 0.766044*t2336;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t1156 + 0.642788*t1344;
  p_output1(9)=0. + 0.766044*t1892 - 0.642788*t1902;
  p_output1(10)=0. + 0.766044*t2285 - 0.642788*t2336;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 + 0.0306*t1156 - 1.1312*t1344 - 0.049*t2558 + t1060*t3074 + t1105*t3102 - 0.004500000000000004*t40 + t2878*t679 + t2917*t743 + t2973*t819 + t3021*t850 + t2706*t97 + t2792*t454*t97 - 1.*t2825*t494*t97;
  p_output1(13)=0. - 0.0306*t1892 + 1.1312*t1902 - 1.*t1410*t2792 - 1.*t1454*t2825 - 1.*t1458*t2878 - 1.*t1618*t2917 - 1.*t1643*t2973 - 1.*t1787*t3021 - 1.*t1828*t3074 - 1.*t1875*t3102 + t170*t3308 + 0.135*(1. - 1.*t67) - 1.*t3221*t67 - 1.*t2706*t40*t67 + 0.1305*t67*t97;
  p_output1(14)=-0.07996 - 0.135*t170 - 0.0306*t2285 + 1.1312*t2336 - 1.*t1924*t2792 - 1.*t2007*t2825 - 1.*t2024*t2878 - 1.*t2067*t2917 - 1.*t2106*t2973 - 1.*t2155*t3021 - 1.*t2193*t3074 - 1.*t2232*t3102 - 1.*t170*t3221 - 1.*t170*t2706*t40 - 1.*t3308*t67 + 0.1305*t170*t97;
  p_output1(15)=1.;
}


       
void H_VectorNav_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
