/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_right_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t750;
  double t857;
  double t744;
  double t820;
  double t892;
  double t923;
  double t847;
  double t904;
  double t905;
  double t508;
  double t971;
  double t974;
  double t975;
  double t1195;
  double t916;
  double t1025;
  double t1090;
  double t457;
  double t1241;
  double t1390;
  double t1396;
  double t1451;
  double t1520;
  double t1534;
  double t1535;
  double t1603;
  double t1663;
  double t1681;
  double t1142;
  double t1672;
  double t1674;
  double t431;
  double t1698;
  double t1702;
  double t1703;
  double t427;
  double t2125;
  double t2128;
  double t2141;
  double t2305;
  double t2414;
  double t2426;
  double t2167;
  double t2512;
  double t2526;
  double t2602;
  double t2610;
  double t2669;
  double t2741;
  double t2815;
  double t2854;
  double t1814;
  double t2586;
  double t2864;
  double t2902;
  double t2951;
  double t3031;
  double t3064;
  double t3335;
  double t3342;
  double t3343;
  double t3358;
  double t3446;
  double t3450;
  double t3472;
  double t3490;
  double t3501;
  double t3353;
  double t3629;
  double t3655;
  double t3677;
  double t3704;
  double t3932;
  double t1678;
  double t1713;
  double t1724;
  double t1827;
  double t1831;
  double t1930;
  double t2915;
  double t3083;
  double t3087;
  double t3095;
  double t3242;
  double t3292;
  double t3656;
  double t3943;
  double t3973;
  double t4011;
  double t4028;
  double t4073;
  double t4222;
  double t4225;
  double t5244;
  double t5314;
  double t7809;
  double t7815;
  double t7847;
  double t7855;
  double t4107;
  double t4110;
  double t4125;
  double t4226;
  double t4233;
  double t4238;
  double t4279;
  double t4299;
  double t4389;
  double t4491;
  double t4878;
  double t4945;
  double t5046;
  double t5100;
  double t5115;
  double t5404;
  double t5530;
  double t5979;
  double t7772;
  double t7782;
  double t7784;
  double t7820;
  double t7821;
  double t7822;
  double t7829;
  double t7831;
  double t7836;
  double t7858;
  double t7859;
  double t7864;
  double t7878;
  double t7882;
  double t7889;
  double t4126;
  double t4138;
  double t4139;
  double t4151;
  double t4156;
  double t4158;
  t750 = Cos(var1[5]);
  t857 = Sin(var1[3]);
  t744 = Cos(var1[3]);
  t820 = Sin(var1[4]);
  t892 = Sin(var1[5]);
  t923 = Sin(var1[13]);
  t847 = t744*t750*t820;
  t904 = t857*t892;
  t905 = t847 + t904;
  t508 = Cos(var1[13]);
  t971 = -1.*t750*t857;
  t974 = t744*t820*t892;
  t975 = t971 + t974;
  t1195 = Cos(var1[15]);
  t916 = t508*t905;
  t1025 = -1.*t923*t975;
  t1090 = t916 + t1025;
  t457 = Sin(var1[15]);
  t1241 = Cos(var1[14]);
  t1390 = Cos(var1[4]);
  t1396 = t1241*t744*t1390;
  t1451 = Sin(var1[14]);
  t1520 = t923*t905;
  t1534 = t508*t975;
  t1535 = t1520 + t1534;
  t1603 = t1451*t1535;
  t1663 = t1396 + t1603;
  t1681 = Cos(var1[16]);
  t1142 = t457*t1090;
  t1672 = t1195*t1663;
  t1674 = t1142 + t1672;
  t431 = Sin(var1[16]);
  t1698 = t1195*t1090;
  t1702 = -1.*t457*t1663;
  t1703 = t1698 + t1702;
  t427 = Cos(var1[17]);
  t2125 = t750*t857*t820;
  t2128 = -1.*t744*t892;
  t2141 = t2125 + t2128;
  t2305 = t744*t750;
  t2414 = t857*t820*t892;
  t2426 = t2305 + t2414;
  t2167 = t508*t2141;
  t2512 = -1.*t923*t2426;
  t2526 = t2167 + t2512;
  t2602 = t1241*t1390*t857;
  t2610 = t923*t2141;
  t2669 = t508*t2426;
  t2741 = t2610 + t2669;
  t2815 = t1451*t2741;
  t2854 = t2602 + t2815;
  t1814 = Sin(var1[17]);
  t2586 = t457*t2526;
  t2864 = t1195*t2854;
  t2902 = t2586 + t2864;
  t2951 = t1195*t2526;
  t3031 = -1.*t457*t2854;
  t3064 = t2951 + t3031;
  t3335 = t508*t1390*t750;
  t3342 = -1.*t1390*t923*t892;
  t3343 = t3335 + t3342;
  t3358 = -1.*t1241*t820;
  t3446 = t1390*t750*t923;
  t3450 = t508*t1390*t892;
  t3472 = t3446 + t3450;
  t3490 = t1451*t3472;
  t3501 = t3358 + t3490;
  t3353 = t457*t3343;
  t3629 = t1195*t3501;
  t3655 = t3353 + t3629;
  t3677 = t1195*t3343;
  t3704 = -1.*t457*t3501;
  t3932 = t3677 + t3704;
  t1678 = -1.*t431*t1674;
  t1713 = t1681*t1703;
  t1724 = t1678 + t1713;
  t1827 = t1681*t1674;
  t1831 = t431*t1703;
  t1930 = t1827 + t1831;
  t2915 = -1.*t431*t2902;
  t3083 = t1681*t3064;
  t3087 = t2915 + t3083;
  t3095 = t1681*t2902;
  t3242 = t431*t3064;
  t3292 = t3095 + t3242;
  t3656 = -1.*t431*t3655;
  t3943 = t1681*t3932;
  t3973 = t3656 + t3943;
  t4011 = t1681*t3655;
  t4028 = t431*t3932;
  t4073 = t4011 + t4028;
  t4222 = -1.*t1241;
  t4225 = 1. + t4222;
  t5244 = -1.*t1195;
  t5314 = 1. + t5244;
  t7809 = -1.*t1681;
  t7815 = 1. + t7809;
  t7847 = -1.*t427;
  t7855 = 1. + t7847;
  t4107 = t1814*t1724;
  t4110 = t427*t1930;
  t4125 = t4107 + t4110;
  t4226 = -0.049*t4225;
  t4233 = -0.135*t1451;
  t4238 = 0. + t4226 + t4233;
  t4279 = 0.135*t923;
  t4299 = 0. + t4279;
  t4389 = -1.*t508;
  t4491 = 1. + t4389;
  t4878 = -0.135*t4491;
  t4945 = 0. + t4878;
  t5046 = -0.135*t4225;
  t5100 = 0.049*t1451;
  t5115 = 0. + t5046 + t5100;
  t5404 = -0.09*t5314;
  t5530 = 0.049*t457;
  t5979 = 0. + t5404 + t5530;
  t7772 = -0.049*t5314;
  t7782 = -0.09*t457;
  t7784 = 0. + t7772 + t7782;
  t7820 = -0.049*t7815;
  t7821 = -0.21*t431;
  t7822 = 0. + t7820 + t7821;
  t7829 = -0.21*t7815;
  t7831 = 0.049*t431;
  t7836 = 0. + t7829 + t7831;
  t7858 = -0.2707*t7855;
  t7859 = 0.0016*t1814;
  t7864 = 0. + t7858 + t7859;
  t7878 = -0.0016*t7855;
  t7882 = -0.2707*t1814;
  t7889 = 0. + t7878 + t7882;
  t4126 = t1814*t3087;
  t4138 = t427*t3292;
  t4139 = t4126 + t4138;
  t4151 = t1814*t3973;
  t4156 = t427*t4073;
  t4158 = t4151 + t4156;
  p_output1[0]=t1814*t1930 - 1.*t1724*t427;
  p_output1[1]=t1814*t3292 - 1.*t3087*t427;
  p_output1[2]=t1814*t4073 - 1.*t3973*t427;
  p_output1[3]=0.;
  p_output1[4]=t4125;
  p_output1[5]=t4139;
  p_output1[6]=t4158;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1241*t1535 + t1390*t1451*t744;
  p_output1[9]=-1.*t1241*t2741 + t1390*t1451*t857;
  p_output1[10]=-1.*t1241*t3472 - 1.*t1451*t820;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t4125 - 0.7055*(-1.*t1814*t1930 + t1724*t427) + t1535*t5115 + t1090*t5979 + t1390*t4238*t744 - 0.1305*(t1241*t1535 - 1.*t1390*t1451*t744) + t1663*t7784 + t1674*t7822 + t1703*t7836 + t1724*t7864 + t1930*t7889 + t4299*t905 + t4945*t975 + var1[0];
  p_output1[13]=0. + 0.0184*t4139 - 0.7055*(-1.*t1814*t3292 + t3087*t427) + t2141*t4299 + t2426*t4945 + t2741*t5115 + t2526*t5979 + t2854*t7784 + t2902*t7822 + t3064*t7836 + t3087*t7864 + t3292*t7889 + t1390*t4238*t857 - 0.1305*(t1241*t2741 - 1.*t1390*t1451*t857) + var1[1];
  p_output1[14]=0. + 0.0184*t4158 - 0.7055*(-1.*t1814*t4073 + t3973*t427) + t3472*t5115 + t3343*t5979 + t1390*t4299*t750 + t3501*t7784 + t3655*t7822 + t3932*t7836 + t3973*t7864 + t4073*t7889 - 1.*t4238*t820 - 0.1305*(t1241*t3472 + t1451*t820) + t1390*t4945*t892 + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
