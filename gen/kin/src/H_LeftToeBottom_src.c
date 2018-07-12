/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom_src.h"

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
  double t603;
  double t302;
  double t612;
  double t424;
  double t635;
  double t105;
  double t160;
  double t760;
  double t883;
  double t887;
  double t557;
  double t641;
  double t673;
  double t694;
  double t702;
  double t715;
  double t726;
  double t775;
  double t811;
  double t1497;
  double t1608;
  double t1612;
  double t1626;
  double t1509;
  double t1567;
  double t1589;
  double t1639;
  double t1697;
  double t1603;
  double t1640;
  double t1661;
  double t1485;
  double t1709;
  double t1720;
  double t1722;
  double t1757;
  double t1663;
  double t1739;
  double t1745;
  double t1455;
  double t1769;
  double t1813;
  double t1825;
  double t1898;
  double t1746;
  double t1836;
  double t1857;
  double t1448;
  double t1904;
  double t1913;
  double t1920;
  double t1979;
  double t1873;
  double t1939;
  double t1943;
  double t1447;
  double t1980;
  double t1988;
  double t2042;
  double t970;
  double t974;
  double t984;
  double t1030;
  double t1089;
  double t1123;
  double t1138;
  double t1148;
  double t1171;
  double t2319;
  double t2323;
  double t2331;
  double t2273;
  double t2288;
  double t2294;
  double t2309;
  double t2363;
  double t2384;
  double t2445;
  double t2489;
  double t2502;
  double t2405;
  double t2522;
  double t2530;
  double t2546;
  double t2550;
  double t2552;
  double t2531;
  double t2573;
  double t2576;
  double t2612;
  double t2620;
  double t2643;
  double t2589;
  double t2665;
  double t2671;
  double t2690;
  double t2704;
  double t2760;
  double t1284;
  double t1285;
  double t1296;
  double t3024;
  double t3033;
  double t3053;
  double t2927;
  double t2973;
  double t2983;
  double t3000;
  double t3055;
  double t3064;
  double t3088;
  double t3101;
  double t3102;
  double t3087;
  double t3114;
  double t3130;
  double t3156;
  double t3217;
  double t3227;
  double t3151;
  double t3231;
  double t3232;
  double t3248;
  double t3294;
  double t3309;
  double t3246;
  double t3311;
  double t3315;
  double t3347;
  double t3353;
  double t3377;
  double t1968;
  double t2049;
  double t2071;
  double t2170;
  double t2182;
  double t2203;
  double t2681;
  double t2813;
  double t2816;
  double t2864;
  double t2907;
  double t2912;
  double t3335;
  double t3382;
  double t3390;
  double t3416;
  double t3453;
  double t3462;
  double t3798;
  double t3814;
  double t4003;
  double t4010;
  double t4076;
  double t4101;
  double t4203;
  double t4211;
  double t4354;
  double t4381;
  double t4447;
  double t4457;
  double t3698;
  double t3721;
  double t3754;
  double t3760;
  double t3783;
  double t3785;
  double t3849;
  double t3858;
  double t3886;
  double t3924;
  double t3931;
  double t3945;
  double t4029;
  double t4031;
  double t4040;
  double t4062;
  double t4067;
  double t4070;
  double t4112;
  double t4133;
  double t4141;
  double t4149;
  double t4150;
  double t4157;
  double t4246;
  double t4249;
  double t4263;
  double t4311;
  double t4317;
  double t4320;
  double t4383;
  double t4398;
  double t4404;
  double t4429;
  double t4438;
  double t4439;
  double t4462;
  double t4466;
  double t4468;
  double t4482;
  double t4485;
  double t4491;
  t603 = Cos(var1[3]);
  t302 = Cos(var1[5]);
  t612 = Sin(var1[4]);
  t424 = Sin(var1[3]);
  t635 = Sin(var1[5]);
  t105 = Cos(var1[7]);
  t160 = Cos(var1[6]);
  t760 = Sin(var1[6]);
  t883 = Cos(var1[4]);
  t887 = Sin(var1[7]);
  t557 = -1.*t302*t424;
  t641 = t603*t612*t635;
  t673 = t557 + t641;
  t694 = t160*t673;
  t702 = t603*t302*t612;
  t715 = t424*t635;
  t726 = t702 + t715;
  t775 = t726*t760;
  t811 = t694 + t775;
  t1497 = Cos(var1[8]);
  t1608 = t160*t726;
  t1612 = -1.*t673*t760;
  t1626 = t1608 + t1612;
  t1509 = t603*t883*t105;
  t1567 = t811*t887;
  t1589 = t1509 + t1567;
  t1639 = Sin(var1[8]);
  t1697 = Cos(var1[9]);
  t1603 = t1497*t1589;
  t1640 = t1626*t1639;
  t1661 = t1603 + t1640;
  t1485 = Sin(var1[9]);
  t1709 = t1497*t1626;
  t1720 = -1.*t1589*t1639;
  t1722 = t1709 + t1720;
  t1757 = Cos(var1[10]);
  t1663 = -1.*t1485*t1661;
  t1739 = t1697*t1722;
  t1745 = t1663 + t1739;
  t1455 = Sin(var1[10]);
  t1769 = t1697*t1661;
  t1813 = t1485*t1722;
  t1825 = t1769 + t1813;
  t1898 = Cos(var1[11]);
  t1746 = t1455*t1745;
  t1836 = t1757*t1825;
  t1857 = t1746 + t1836;
  t1448 = Sin(var1[11]);
  t1904 = t1757*t1745;
  t1913 = -1.*t1455*t1825;
  t1920 = t1904 + t1913;
  t1979 = Cos(var1[12]);
  t1873 = -1.*t1448*t1857;
  t1939 = t1898*t1920;
  t1943 = t1873 + t1939;
  t1447 = Sin(var1[12]);
  t1980 = t1898*t1857;
  t1988 = t1448*t1920;
  t2042 = t1980 + t1988;
  t970 = t603*t302;
  t974 = t424*t612*t635;
  t984 = t970 + t974;
  t1030 = t160*t984;
  t1089 = t302*t424*t612;
  t1123 = -1.*t603*t635;
  t1138 = t1089 + t1123;
  t1148 = t1138*t760;
  t1171 = t1030 + t1148;
  t2319 = t160*t1138;
  t2323 = -1.*t984*t760;
  t2331 = t2319 + t2323;
  t2273 = t883*t105*t424;
  t2288 = t1171*t887;
  t2294 = t2273 + t2288;
  t2309 = t1497*t2294;
  t2363 = t2331*t1639;
  t2384 = t2309 + t2363;
  t2445 = t1497*t2331;
  t2489 = -1.*t2294*t1639;
  t2502 = t2445 + t2489;
  t2405 = -1.*t1485*t2384;
  t2522 = t1697*t2502;
  t2530 = t2405 + t2522;
  t2546 = t1697*t2384;
  t2550 = t1485*t2502;
  t2552 = t2546 + t2550;
  t2531 = t1455*t2530;
  t2573 = t1757*t2552;
  t2576 = t2531 + t2573;
  t2612 = t1757*t2530;
  t2620 = -1.*t1455*t2552;
  t2643 = t2612 + t2620;
  t2589 = -1.*t1448*t2576;
  t2665 = t1898*t2643;
  t2671 = t2589 + t2665;
  t2690 = t1898*t2576;
  t2704 = t1448*t2643;
  t2760 = t2690 + t2704;
  t1284 = t883*t160*t635;
  t1285 = t883*t302*t760;
  t1296 = t1284 + t1285;
  t3024 = t883*t302*t160;
  t3033 = -1.*t883*t635*t760;
  t3053 = t3024 + t3033;
  t2927 = -1.*t105*t612;
  t2973 = t1296*t887;
  t2983 = t2927 + t2973;
  t3000 = t1497*t2983;
  t3055 = t3053*t1639;
  t3064 = t3000 + t3055;
  t3088 = t1497*t3053;
  t3101 = -1.*t2983*t1639;
  t3102 = t3088 + t3101;
  t3087 = -1.*t1485*t3064;
  t3114 = t1697*t3102;
  t3130 = t3087 + t3114;
  t3156 = t1697*t3064;
  t3217 = t1485*t3102;
  t3227 = t3156 + t3217;
  t3151 = t1455*t3130;
  t3231 = t1757*t3227;
  t3232 = t3151 + t3231;
  t3248 = t1757*t3130;
  t3294 = -1.*t1455*t3227;
  t3309 = t3248 + t3294;
  t3246 = -1.*t1448*t3232;
  t3311 = t1898*t3309;
  t3315 = t3246 + t3311;
  t3347 = t1898*t3232;
  t3353 = t1448*t3309;
  t3377 = t3347 + t3353;
  t1968 = t1447*t1943;
  t2049 = t1979*t2042;
  t2071 = t1968 + t2049;
  t2170 = t1979*t1943;
  t2182 = -1.*t1447*t2042;
  t2203 = t2170 + t2182;
  t2681 = t1447*t2671;
  t2813 = t1979*t2760;
  t2816 = t2681 + t2813;
  t2864 = t1979*t2671;
  t2907 = -1.*t1447*t2760;
  t2912 = t2864 + t2907;
  t3335 = t1447*t3315;
  t3382 = t1979*t3377;
  t3390 = t3335 + t3382;
  t3416 = t1979*t3315;
  t3453 = -1.*t1447*t3377;
  t3462 = t3416 + t3453;
  t3798 = -1.*t105;
  t3814 = 1. + t3798;
  t4003 = -1.*t1497;
  t4010 = 1. + t4003;
  t4076 = -1.*t1697;
  t4101 = 1. + t4076;
  t4203 = -1.*t1757;
  t4211 = 1. + t4203;
  t4354 = -1.*t1898;
  t4381 = 1. + t4354;
  t4447 = -1.*t1979;
  t4457 = 1. + t4447;
  t3698 = -1.*t160;
  t3721 = 1. + t3698;
  t3754 = 0.135*t3721;
  t3760 = 0. + t3754;
  t3783 = -0.135*t760;
  t3785 = 0. + t3783;
  t3849 = 0.135*t3814;
  t3858 = 0.049*t887;
  t3886 = 0. + t3849 + t3858;
  t3924 = -0.049*t3814;
  t3931 = 0.135*t887;
  t3945 = 0. + t3924 + t3931;
  t4029 = -0.049*t4010;
  t4031 = -0.09*t1639;
  t4040 = 0. + t4029 + t4031;
  t4062 = -0.09*t4010;
  t4067 = 0.049*t1639;
  t4070 = 0. + t4062 + t4067;
  t4112 = -0.049*t4101;
  t4133 = -0.21*t1485;
  t4141 = 0. + t4112 + t4133;
  t4149 = -0.21*t4101;
  t4150 = 0.049*t1485;
  t4157 = 0. + t4149 + t4150;
  t4246 = -0.2707*t4211;
  t4249 = 0.0016*t1455;
  t4263 = 0. + t4246 + t4249;
  t4311 = -0.0016*t4211;
  t4317 = -0.2707*t1455;
  t4320 = 0. + t4311 + t4317;
  t4383 = 0.0184*t4381;
  t4398 = -0.7055*t1448;
  t4404 = 0. + t4383 + t4398;
  t4429 = -0.7055*t4381;
  t4438 = -0.0184*t1448;
  t4439 = 0. + t4429 + t4438;
  t4462 = -1.1135*t4457;
  t4466 = 0.0216*t1447;
  t4468 = 0. + t4462 + t4466;
  t4482 = -0.0216*t4457;
  t4485 = -1.1135*t1447;
  t4491 = 0. + t4482 + t4485;
  p_output1[0]=-1.*t105*t811 + t603*t883*t887;
  p_output1[1]=-1.*t105*t1171 + t424*t883*t887;
  p_output1[2]=-1.*t105*t1296 - 1.*t612*t887;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2071 + 0.766044*t2203;
  p_output1[5]=0.642788*t2816 + 0.766044*t2912;
  p_output1[6]=0.642788*t3390 + 0.766044*t3462;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2071 + 0.642788*t2203;
  p_output1[9]=-0.766044*t2816 + 0.642788*t2912;
  p_output1[10]=-0.766044*t3390 + 0.642788*t3462;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2071 - 1.1312*t2203 + t1589*t4040 + t1626*t4070 + t1661*t4141 + t1722*t4157 + t1745*t4263 + t1825*t4320 + t1857*t4404 + t1920*t4439 + t1943*t4468 + t2042*t4491 + t3760*t673 + t3785*t726 + t3886*t811 + t3945*t603*t883 + 0.1305*(t105*t811 - 1.*t603*t883*t887) + var1[0];
  p_output1[13]=0. + 0.0306*t2816 - 1.1312*t2912 + t1138*t3785 + t1171*t3886 + t2294*t4040 + t2331*t4070 + t2384*t4141 + t2502*t4157 + t2530*t4263 + t2552*t4320 + t2576*t4404 + t2643*t4439 + t2671*t4468 + t2760*t4491 + t3945*t424*t883 + 0.1305*(t105*t1171 - 1.*t424*t883*t887) + t3760*t984 + var1[1];
  p_output1[14]=0. + 0.0306*t3390 - 1.1312*t3462 + t1296*t3886 + t2983*t4040 + t3053*t4070 + t3064*t4141 + t3102*t4157 + t3130*t4263 + t3227*t4320 + t3232*t4404 + t3309*t4439 + t3315*t4468 + t3377*t4491 - 1.*t3945*t612 + t302*t3785*t883 + t3760*t635*t883 + 0.1305*(t105*t1296 + t612*t887) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
