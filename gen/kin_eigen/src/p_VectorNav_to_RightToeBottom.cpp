/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom.h"

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
  double t449;
  double t811;
  double t1130;
  double t1349;
  double t1516;
  double t1632;
  double t1846;
  double t2188;
  double t2201;
  double t2250;
  double t2313;
  double t2120;
  double t2160;
  double t2173;
  double t2467;
  double t2513;
  double t2546;
  double t2784;
  double t2861;
  double t2891;
  double t2900;
  double t2703;
  double t2762;
  double t2774;
  double t2956;
  double t2958;
  double t2991;
  double t3085;
  double t3098;
  double t3109;
  double t3116;
  double t3065;
  double t3071;
  double t3084;
  double t3163;
  double t3166;
  double t3177;
  double t3492;
  double t486;
  double t612;
  double t691;
  double t834;
  double t869;
  double t994;
  double t1237;
  double t1291;
  double t3655;
  double t1802;
  double t1858;
  double t1888;
  double t1902;
  double t1917;
  double t2026;
  double t3718;
  double t3727;
  double t3730;
  double t3759;
  double t3767;
  double t3779;
  double t2261;
  double t2345;
  double t2382;
  double t2580;
  double t2621;
  double t2669;
  double t3788;
  double t3795;
  double t3798;
  double t3813;
  double t3816;
  double t3837;
  double t2898;
  double t2903;
  double t2904;
  double t2998;
  double t3007;
  double t3014;
  double t3840;
  double t3848;
  double t3856;
  double t3864;
  double t3873;
  double t3881;
  double t3111;
  double t3136;
  double t3146;
  double t3186;
  double t3260;
  double t3274;
  double t3900;
  double t3904;
  double t3905;
  double t3940;
  double t3955;
  double t3969;
  double t3565;
  double t3569;
  double t3592;
  double t3666;
  double t3683;
  double t3691;
  double t4077;
  double t4080;
  double t4081;
  double t4099;
  double t4105;
  double t4108;
  double t4114;
  double t4117;
  double t4128;
  double t4134;
  double t4141;
  double t4147;
  double t4168;
  double t4173;
  double t4174;
  double t4181;
  double t4182;
  double t4183;
  double t4191;
  double t4192;
  double t4196;
  double t4199;
  double t4201;
  double t4202;
  t449 = Cos(var1[8]);
  t811 = Cos(var1[9]);
  t1130 = Sin(var1[9]);
  t1349 = Cos(var1[10]);
  t1516 = -1.*t1349;
  t1632 = 1. + t1516;
  t1846 = Sin(var1[10]);
  t2188 = Cos(var1[11]);
  t2201 = -1.*t2188;
  t2250 = 1. + t2201;
  t2313 = Sin(var1[11]);
  t2120 = t449*t811*t1349;
  t2160 = -1.*t449*t1130*t1846;
  t2173 = t2120 + t2160;
  t2467 = -1.*t449*t1349*t1130;
  t2513 = -1.*t449*t811*t1846;
  t2546 = t2467 + t2513;
  t2784 = Cos(var1[12]);
  t2861 = -1.*t2784;
  t2891 = 1. + t2861;
  t2900 = Sin(var1[12]);
  t2703 = t2188*t2173;
  t2762 = t2546*t2313;
  t2774 = t2703 + t2762;
  t2956 = t2188*t2546;
  t2958 = -1.*t2173*t2313;
  t2991 = t2956 + t2958;
  t3085 = Cos(var1[13]);
  t3098 = -1.*t3085;
  t3109 = 1. + t3098;
  t3116 = Sin(var1[13]);
  t3065 = t2784*t2774;
  t3071 = t2991*t2900;
  t3084 = t3065 + t3071;
  t3163 = t2784*t2991;
  t3166 = -1.*t2774*t2900;
  t3177 = t3163 + t3166;
  t3492 = Cos(var1[7]);
  t486 = -1.*t449;
  t612 = 1. + t486;
  t691 = Sin(var1[8]);
  t834 = -1.*t811;
  t869 = 1. + t834;
  t994 = -0.049*t869;
  t1237 = -0.09*t1130;
  t1291 = 0. + t994 + t1237;
  t3655 = Sin(var1[7]);
  t1802 = -0.049*t1632;
  t1858 = -0.21*t1846;
  t1888 = 0. + t1802 + t1858;
  t1902 = -0.21*t1632;
  t1917 = 0.049*t1846;
  t2026 = 0. + t1902 + t1917;
  t3718 = t3492*t811*t691;
  t3727 = -1.*t3655*t1130;
  t3730 = t3718 + t3727;
  t3759 = -1.*t811*t3655;
  t3767 = -1.*t3492*t691*t1130;
  t3779 = t3759 + t3767;
  t2261 = -0.0016*t2250;
  t2345 = -0.2707*t2313;
  t2382 = 0. + t2261 + t2345;
  t2580 = -0.2707*t2250;
  t2621 = 0.0016*t2313;
  t2669 = 0. + t2580 + t2621;
  t3788 = t1349*t3730;
  t3795 = t3779*t1846;
  t3798 = t3788 + t3795;
  t3813 = t1349*t3779;
  t3816 = -1.*t3730*t1846;
  t3837 = t3813 + t3816;
  t2898 = 0.0184*t2891;
  t2903 = -0.7055*t2900;
  t2904 = 0. + t2898 + t2903;
  t2998 = -0.7055*t2891;
  t3007 = -0.0184*t2900;
  t3014 = 0. + t2998 + t3007;
  t3840 = t2188*t3798;
  t3848 = t3837*t2313;
  t3856 = t3840 + t3848;
  t3864 = t2188*t3837;
  t3873 = -1.*t3798*t2313;
  t3881 = t3864 + t3873;
  t3111 = -0.0216*t3109;
  t3136 = -1.1135*t3116;
  t3146 = 0. + t3111 + t3136;
  t3186 = -1.1135*t3109;
  t3260 = 0.0216*t3116;
  t3274 = 0. + t3186 + t3260;
  t3900 = t2784*t3856;
  t3904 = t3881*t2900;
  t3905 = t3900 + t3904;
  t3940 = t2784*t3881;
  t3955 = -1.*t3856*t2900;
  t3969 = t3940 + t3955;
  t3565 = -0.135*t612;
  t3569 = 0.049*t691;
  t3592 = 0. + t3565 + t3569;
  t3666 = -0.09*t869;
  t3683 = 0.049*t1130;
  t3691 = 0. + t3666 + t3683;
  t4077 = t811*t3655*t691;
  t4080 = t3492*t1130;
  t4081 = t4077 + t4080;
  t4099 = t3492*t811;
  t4105 = -1.*t3655*t691*t1130;
  t4108 = t4099 + t4105;
  t4114 = t1349*t4081;
  t4117 = t4108*t1846;
  t4128 = t4114 + t4117;
  t4134 = t1349*t4108;
  t4141 = -1.*t4081*t1846;
  t4147 = t4134 + t4141;
  t4168 = t2188*t4128;
  t4173 = t4147*t2313;
  t4174 = t4168 + t4173;
  t4181 = t2188*t4147;
  t4182 = -1.*t4128*t2313;
  t4183 = t4181 + t4182;
  t4191 = t2784*t4174;
  t4192 = t4183*t2900;
  t4196 = t4191 + t4192;
  t4199 = t2784*t4183;
  t4201 = -1.*t4174*t2900;
  t4202 = t4199 + t4201;

  p_output1(0)=-0.03155 + t2173*t2382 + t2546*t2669 + t2774*t2904 + t2991*t3014 + t3084*t3146 - 1.1312*(-1.*t3084*t3116 + t3085*t3177) + 0.0306*(t3084*t3085 + t3116*t3177) + t3177*t3274 + t1291*t449 - 1.*t1130*t2026*t449 - 0.049*t612 - 0.004500000000000004*t691 + t1888*t449*t811;
  p_output1(1)=0. + 0.135*(1. - 1.*t3492) - 1.*t3492*t3592 + t3655*t3691 - 1.*t1888*t3730 - 1.*t2026*t3779 - 1.*t2382*t3798 - 1.*t2669*t3837 - 1.*t2904*t3856 - 1.*t3014*t3881 - 1.*t3146*t3905 - 1.*t3274*t3969 + 1.1312*(-1.*t3116*t3905 + t3085*t3969) - 0.0306*(t3085*t3905 + t3116*t3969) + 0.1305*t3492*t449 - 1.*t1291*t3492*t691;
  p_output1(2)=-0.07996 - 0.135*t3655 - 1.*t3592*t3655 - 1.*t3492*t3691 - 1.*t1888*t4081 - 1.*t2026*t4108 - 1.*t2382*t4128 - 1.*t2669*t4147 - 1.*t2904*t4174 - 1.*t3014*t4183 - 1.*t3146*t4196 - 1.*t3274*t4202 + 1.1312*(-1.*t3116*t4196 + t3085*t4202) - 0.0306*(t3085*t4196 + t3116*t4202) + 0.1305*t3655*t449 - 1.*t1291*t3655*t691;
}


       
void p_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
