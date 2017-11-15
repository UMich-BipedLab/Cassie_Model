/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_right_src.h"

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
  double t145;
  double t413;
  double t102;
  double t379;
  double t529;
  double t914;
  double t401;
  double t657;
  double t706;
  double t100;
  double t1007;
  double t1010;
  double t1019;
  double t1271;
  double t784;
  double t1090;
  double t1194;
  double t98;
  double t1295;
  double t1296;
  double t1297;
  double t1303;
  double t1324;
  double t1340;
  double t1356;
  double t1395;
  double t1474;
  double t1552;
  double t1225;
  double t1478;
  double t1526;
  double t96;
  double t1581;
  double t1588;
  double t1602;
  double t1657;
  double t1551;
  double t1614;
  double t1629;
  double t95;
  double t1681;
  double t1686;
  double t1696;
  double t1741;
  double t1650;
  double t1709;
  double t1719;
  double t91;
  double t1764;
  double t1769;
  double t1778;
  double t87;
  double t1987;
  double t2007;
  double t2041;
  double t2105;
  double t2112;
  double t2118;
  double t2058;
  double t2163;
  double t2188;
  double t2243;
  double t2245;
  double t2292;
  double t2308;
  double t2326;
  double t2352;
  double t2192;
  double t2417;
  double t2435;
  double t2454;
  double t2456;
  double t2460;
  double t2445;
  double t2486;
  double t2508;
  double t2544;
  double t2585;
  double t2589;
  double t1831;
  double t2527;
  double t2594;
  double t2625;
  double t2636;
  double t2674;
  double t2692;
  double t2839;
  double t2856;
  double t2866;
  double t2875;
  double t2878;
  double t2888;
  double t2906;
  double t2920;
  double t2960;
  double t2869;
  double t2964;
  double t2969;
  double t3008;
  double t3014;
  double t3067;
  double t2980;
  double t3070;
  double t3076;
  double t3098;
  double t3110;
  double t3115;
  double t3081;
  double t3119;
  double t3120;
  double t3131;
  double t3138;
  double t3139;
  double t1727;
  double t1789;
  double t1793;
  double t1853;
  double t1905;
  double t1934;
  double t2634;
  double t2724;
  double t2728;
  double t2754;
  double t2784;
  double t2798;
  double t3127;
  double t3141;
  double t3143;
  double t3148;
  double t3151;
  double t3152;
  double t3259;
  double t3260;
  double t3646;
  double t3678;
  double t3815;
  double t3826;
  double t3918;
  double t3926;
  double t4087;
  double t4115;
  double t4225;
  double t4266;
  double t3167;
  double t3176;
  double t3188;
  double t3283;
  double t3295;
  double t3353;
  double t3379;
  double t3389;
  double t3408;
  double t3409;
  double t3558;
  double t3594;
  double t3621;
  double t3625;
  double t3634;
  double t3679;
  double t3684;
  double t3688;
  double t3789;
  double t3791;
  double t3800;
  double t3835;
  double t3848;
  double t3876;
  double t3890;
  double t3894;
  double t3897;
  double t3979;
  double t3986;
  double t4002;
  double t4012;
  double t4034;
  double t4036;
  double t4118;
  double t4131;
  double t4150;
  double t4157;
  double t4169;
  double t4209;
  double t4281;
  double t4306;
  double t4328;
  double t4363;
  double t4372;
  double t4379;
  double t3189;
  double t3194;
  double t3196;
  double t3197;
  double t3203;
  double t3210;
  t145 = Cos(var1[5]);
  t413 = Sin(var1[3]);
  t102 = Cos(var1[3]);
  t379 = Sin(var1[4]);
  t529 = Sin(var1[5]);
  t914 = Sin(var1[13]);
  t401 = t102*t145*t379;
  t657 = t413*t529;
  t706 = t401 + t657;
  t100 = Cos(var1[13]);
  t1007 = -1.*t145*t413;
  t1010 = t102*t379*t529;
  t1019 = t1007 + t1010;
  t1271 = Cos(var1[15]);
  t784 = t100*t706;
  t1090 = -1.*t914*t1019;
  t1194 = t784 + t1090;
  t98 = Sin(var1[15]);
  t1295 = Cos(var1[14]);
  t1296 = Cos(var1[4]);
  t1297 = t1295*t102*t1296;
  t1303 = Sin(var1[14]);
  t1324 = t914*t706;
  t1340 = t100*t1019;
  t1356 = t1324 + t1340;
  t1395 = t1303*t1356;
  t1474 = t1297 + t1395;
  t1552 = Cos(var1[16]);
  t1225 = t98*t1194;
  t1478 = t1271*t1474;
  t1526 = t1225 + t1478;
  t96 = Sin(var1[16]);
  t1581 = t1271*t1194;
  t1588 = -1.*t98*t1474;
  t1602 = t1581 + t1588;
  t1657 = Cos(var1[17]);
  t1551 = -1.*t96*t1526;
  t1614 = t1552*t1602;
  t1629 = t1551 + t1614;
  t95 = Sin(var1[17]);
  t1681 = t1552*t1526;
  t1686 = t96*t1602;
  t1696 = t1681 + t1686;
  t1741 = Cos(var1[18]);
  t1650 = t95*t1629;
  t1709 = t1657*t1696;
  t1719 = t1650 + t1709;
  t91 = Sin(var1[18]);
  t1764 = t1657*t1629;
  t1769 = -1.*t95*t1696;
  t1778 = t1764 + t1769;
  t87 = Cos(var1[19]);
  t1987 = t145*t413*t379;
  t2007 = -1.*t102*t529;
  t2041 = t1987 + t2007;
  t2105 = t102*t145;
  t2112 = t413*t379*t529;
  t2118 = t2105 + t2112;
  t2058 = t100*t2041;
  t2163 = -1.*t914*t2118;
  t2188 = t2058 + t2163;
  t2243 = t1295*t1296*t413;
  t2245 = t914*t2041;
  t2292 = t100*t2118;
  t2308 = t2245 + t2292;
  t2326 = t1303*t2308;
  t2352 = t2243 + t2326;
  t2192 = t98*t2188;
  t2417 = t1271*t2352;
  t2435 = t2192 + t2417;
  t2454 = t1271*t2188;
  t2456 = -1.*t98*t2352;
  t2460 = t2454 + t2456;
  t2445 = -1.*t96*t2435;
  t2486 = t1552*t2460;
  t2508 = t2445 + t2486;
  t2544 = t1552*t2435;
  t2585 = t96*t2460;
  t2589 = t2544 + t2585;
  t1831 = Sin(var1[19]);
  t2527 = t95*t2508;
  t2594 = t1657*t2589;
  t2625 = t2527 + t2594;
  t2636 = t1657*t2508;
  t2674 = -1.*t95*t2589;
  t2692 = t2636 + t2674;
  t2839 = t100*t1296*t145;
  t2856 = -1.*t1296*t914*t529;
  t2866 = t2839 + t2856;
  t2875 = -1.*t1295*t379;
  t2878 = t1296*t145*t914;
  t2888 = t100*t1296*t529;
  t2906 = t2878 + t2888;
  t2920 = t1303*t2906;
  t2960 = t2875 + t2920;
  t2869 = t98*t2866;
  t2964 = t1271*t2960;
  t2969 = t2869 + t2964;
  t3008 = t1271*t2866;
  t3014 = -1.*t98*t2960;
  t3067 = t3008 + t3014;
  t2980 = -1.*t96*t2969;
  t3070 = t1552*t3067;
  t3076 = t2980 + t3070;
  t3098 = t1552*t2969;
  t3110 = t96*t3067;
  t3115 = t3098 + t3110;
  t3081 = t95*t3076;
  t3119 = t1657*t3115;
  t3120 = t3081 + t3119;
  t3131 = t1657*t3076;
  t3138 = -1.*t95*t3115;
  t3139 = t3131 + t3138;
  t1727 = -1.*t91*t1719;
  t1789 = t1741*t1778;
  t1793 = t1727 + t1789;
  t1853 = t1741*t1719;
  t1905 = t91*t1778;
  t1934 = t1853 + t1905;
  t2634 = -1.*t91*t2625;
  t2724 = t1741*t2692;
  t2728 = t2634 + t2724;
  t2754 = t1741*t2625;
  t2784 = t91*t2692;
  t2798 = t2754 + t2784;
  t3127 = -1.*t91*t3120;
  t3141 = t1741*t3139;
  t3143 = t3127 + t3141;
  t3148 = t1741*t3120;
  t3151 = t91*t3139;
  t3152 = t3148 + t3151;
  t3259 = -1.*t1295;
  t3260 = 1. + t3259;
  t3646 = -1.*t1271;
  t3678 = 1. + t3646;
  t3815 = -1.*t1552;
  t3826 = 1. + t3815;
  t3918 = -1.*t1657;
  t3926 = 1. + t3918;
  t4087 = -1.*t1741;
  t4115 = 1. + t4087;
  t4225 = -1.*t87;
  t4266 = 1. + t4225;
  t3167 = t1831*t1793;
  t3176 = t87*t1934;
  t3188 = t3167 + t3176;
  t3283 = -0.049*t3260;
  t3295 = -0.135*t1303;
  t3353 = 0. + t3283 + t3295;
  t3379 = 0.135*t914;
  t3389 = 0. + t3379;
  t3408 = -1.*t100;
  t3409 = 1. + t3408;
  t3558 = -0.135*t3409;
  t3594 = 0. + t3558;
  t3621 = -0.135*t3260;
  t3625 = 0.049*t1303;
  t3634 = 0. + t3621 + t3625;
  t3679 = -0.09*t3678;
  t3684 = 0.049*t98;
  t3688 = 0. + t3679 + t3684;
  t3789 = -0.049*t3678;
  t3791 = -0.09*t98;
  t3800 = 0. + t3789 + t3791;
  t3835 = -0.049*t3826;
  t3848 = -0.21*t96;
  t3876 = 0. + t3835 + t3848;
  t3890 = -0.21*t3826;
  t3894 = 0.049*t96;
  t3897 = 0. + t3890 + t3894;
  t3979 = -0.2707*t3926;
  t3986 = 0.0016*t95;
  t4002 = 0. + t3979 + t3986;
  t4012 = -0.0016*t3926;
  t4034 = -0.2707*t95;
  t4036 = 0. + t4012 + t4034;
  t4118 = 0.0184*t4115;
  t4131 = -0.7055*t91;
  t4150 = 0. + t4118 + t4131;
  t4157 = -0.7055*t4115;
  t4169 = -0.0184*t91;
  t4209 = 0. + t4157 + t4169;
  t4281 = -1.1135*t4266;
  t4306 = 0.0216*t1831;
  t4328 = 0. + t4281 + t4306;
  t4363 = -0.0216*t4266;
  t4372 = -1.1135*t1831;
  t4379 = 0. + t4363 + t4372;
  t3189 = t1831*t2728;
  t3194 = t87*t2798;
  t3196 = t3189 + t3194;
  t3197 = t1831*t3143;
  t3203 = t87*t3152;
  t3210 = t3197 + t3203;
  p_output1[0]=t1831*t1934 - 1.*t1793*t87;
  p_output1[1]=t1831*t2798 - 1.*t2728*t87;
  p_output1[2]=t1831*t3152 - 1.*t3143*t87;
  p_output1[3]=0.;
  p_output1[4]=t3188;
  p_output1[5]=t3196;
  p_output1[6]=t3210;
  p_output1[7]=0.;
  p_output1[8]=t102*t1296*t1303 - 1.*t1295*t1356;
  p_output1[9]=-1.*t1295*t2308 + t1296*t1303*t413;
  p_output1[10]=-1.*t1295*t2906 - 1.*t1303*t379;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t102*t1296*t1303 + t1295*t1356) - 0.0216*t3188 + t102*t1296*t3353 + t1019*t3594 + t1356*t3634 + t1194*t3688 + t1474*t3800 + t1526*t3876 + t1602*t3897 + t1629*t4002 + t1696*t4036 + t1719*t4150 + t1778*t4209 + t1793*t4328 + t1934*t4379 + t3389*t706 - 1.1135*(-1.*t1831*t1934 + t1793*t87) + var1[0];
  p_output1[13]=0. - 0.0216*t3196 + t2041*t3389 + t2118*t3594 + t2308*t3634 + t2188*t3688 + t2352*t3800 + t2435*t3876 + t2460*t3897 + t2508*t4002 + t2589*t4036 + t1296*t3353*t413 - 0.1305*(t1295*t2308 - 1.*t1296*t1303*t413) + t2625*t4150 + t2692*t4209 + t2728*t4328 + t2798*t4379 - 1.1135*(-1.*t1831*t2798 + t2728*t87) + var1[1];
  p_output1[14]=0. - 0.0216*t3210 + t1296*t145*t3389 + t2906*t3634 + t2866*t3688 - 1.*t3353*t379 - 0.1305*(t1295*t2906 + t1303*t379) + t2960*t3800 + t2969*t3876 + t3067*t3897 + t3076*t4002 + t3115*t4036 + t3120*t4150 + t3139*t4209 + t3143*t4328 + t3152*t4379 + t1296*t3594*t529 - 1.1135*(-1.*t1831*t3152 + t3143*t87) + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
