/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeFront_src.h"

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
  double t64;
  double t415;
  double t528;
  double t436;
  double t560;
  double t150;
  double t222;
  double t367;
  double t386;
  double t728;
  double t465;
  double t617;
  double t677;
  double t791;
  double t801;
  double t802;
  double t719;
  double t885;
  double t899;
  double t1585;
  double t1487;
  double t1503;
  double t1564;
  double t1480;
  double t1595;
  double t1604;
  double t1638;
  double t1715;
  double t1583;
  double t1648;
  double t1684;
  double t1471;
  double t1720;
  double t1722;
  double t1765;
  double t1802;
  double t1687;
  double t1769;
  double t1771;
  double t1464;
  double t1809;
  double t1812;
  double t1887;
  double t1924;
  double t1778;
  double t1911;
  double t1919;
  double t1462;
  double t1927;
  double t1934;
  double t1970;
  double t2045;
  double t1922;
  double t1990;
  double t2037;
  double t1446;
  double t2056;
  double t2065;
  double t2075;
  double t922;
  double t985;
  double t999;
  double t1117;
  double t1125;
  double t1196;
  double t1040;
  double t1230;
  double t1240;
  double t2334;
  double t2394;
  double t2407;
  double t2451;
  double t2477;
  double t2480;
  double t2413;
  double t2502;
  double t2535;
  double t2563;
  double t2564;
  double t2576;
  double t2540;
  double t2598;
  double t2702;
  double t2713;
  double t2714;
  double t2748;
  double t2712;
  double t2768;
  double t2777;
  double t2866;
  double t2897;
  double t2912;
  double t2815;
  double t2923;
  double t2931;
  double t2946;
  double t2954;
  double t2957;
  double t1270;
  double t1327;
  double t1403;
  double t3082;
  double t3110;
  double t3116;
  double t3135;
  double t3140;
  double t3157;
  double t3126;
  double t3158;
  double t3212;
  double t3332;
  double t3348;
  double t3353;
  double t3236;
  double t3381;
  double t3405;
  double t3424;
  double t3427;
  double t3455;
  double t3422;
  double t3462;
  double t3473;
  double t3560;
  double t3561;
  double t3574;
  double t3488;
  double t3606;
  double t3607;
  double t3612;
  double t3638;
  double t3660;
  double t2044;
  double t2095;
  double t2096;
  double t2174;
  double t2204;
  double t2237;
  double t2941;
  double t2959;
  double t2978;
  double t3011;
  double t3040;
  double t3071;
  double t3609;
  double t3701;
  double t3706;
  double t3724;
  double t3767;
  double t3768;
  double t4025;
  double t4030;
  double t4339;
  double t4343;
  double t4493;
  double t4495;
  double t4674;
  double t4697;
  double t4805;
  double t4814;
  double t4924;
  double t4930;
  double t4041;
  double t4073;
  double t4082;
  double t4102;
  double t4143;
  double t4160;
  double t4211;
  double t4214;
  double t4249;
  double t4296;
  double t4313;
  double t4333;
  double t4349;
  double t4360;
  double t4376;
  double t4468;
  double t4469;
  double t4470;
  double t4503;
  double t4557;
  double t4558;
  double t4603;
  double t4616;
  double t4617;
  double t4698;
  double t4731;
  double t4741;
  double t4755;
  double t4764;
  double t4792;
  double t4819;
  double t4823;
  double t4850;
  double t4863;
  double t4881;
  double t4882;
  double t4947;
  double t4959;
  double t5015;
  double t5106;
  double t5107;
  double t5109;
  t64 = Cos(var1[3]);
  t415 = Cos(var1[5]);
  t528 = Sin(var1[3]);
  t436 = Sin(var1[4]);
  t560 = Sin(var1[5]);
  t150 = Cos(var1[4]);
  t222 = Sin(var1[14]);
  t367 = Cos(var1[14]);
  t386 = Sin(var1[13]);
  t728 = Cos(var1[13]);
  t465 = t64*t415*t436;
  t617 = t528*t560;
  t677 = t465 + t617;
  t791 = -1.*t415*t528;
  t801 = t64*t436*t560;
  t802 = t791 + t801;
  t719 = t386*t677;
  t885 = t728*t802;
  t899 = t719 + t885;
  t1585 = Cos(var1[15]);
  t1487 = t728*t677;
  t1503 = -1.*t386*t802;
  t1564 = t1487 + t1503;
  t1480 = Sin(var1[15]);
  t1595 = t367*t64*t150;
  t1604 = t222*t899;
  t1638 = t1595 + t1604;
  t1715 = Cos(var1[16]);
  t1583 = t1480*t1564;
  t1648 = t1585*t1638;
  t1684 = t1583 + t1648;
  t1471 = Sin(var1[16]);
  t1720 = t1585*t1564;
  t1722 = -1.*t1480*t1638;
  t1765 = t1720 + t1722;
  t1802 = Cos(var1[17]);
  t1687 = -1.*t1471*t1684;
  t1769 = t1715*t1765;
  t1771 = t1687 + t1769;
  t1464 = Sin(var1[17]);
  t1809 = t1715*t1684;
  t1812 = t1471*t1765;
  t1887 = t1809 + t1812;
  t1924 = Cos(var1[18]);
  t1778 = t1464*t1771;
  t1911 = t1802*t1887;
  t1919 = t1778 + t1911;
  t1462 = Sin(var1[18]);
  t1927 = t1802*t1771;
  t1934 = -1.*t1464*t1887;
  t1970 = t1927 + t1934;
  t2045 = Cos(var1[19]);
  t1922 = -1.*t1462*t1919;
  t1990 = t1924*t1970;
  t2037 = t1922 + t1990;
  t1446 = Sin(var1[19]);
  t2056 = t1924*t1919;
  t2065 = t1462*t1970;
  t2075 = t2056 + t2065;
  t922 = t415*t528*t436;
  t985 = -1.*t64*t560;
  t999 = t922 + t985;
  t1117 = t64*t415;
  t1125 = t528*t436*t560;
  t1196 = t1117 + t1125;
  t1040 = t386*t999;
  t1230 = t728*t1196;
  t1240 = t1040 + t1230;
  t2334 = t728*t999;
  t2394 = -1.*t386*t1196;
  t2407 = t2334 + t2394;
  t2451 = t367*t150*t528;
  t2477 = t222*t1240;
  t2480 = t2451 + t2477;
  t2413 = t1480*t2407;
  t2502 = t1585*t2480;
  t2535 = t2413 + t2502;
  t2563 = t1585*t2407;
  t2564 = -1.*t1480*t2480;
  t2576 = t2563 + t2564;
  t2540 = -1.*t1471*t2535;
  t2598 = t1715*t2576;
  t2702 = t2540 + t2598;
  t2713 = t1715*t2535;
  t2714 = t1471*t2576;
  t2748 = t2713 + t2714;
  t2712 = t1464*t2702;
  t2768 = t1802*t2748;
  t2777 = t2712 + t2768;
  t2866 = t1802*t2702;
  t2897 = -1.*t1464*t2748;
  t2912 = t2866 + t2897;
  t2815 = -1.*t1462*t2777;
  t2923 = t1924*t2912;
  t2931 = t2815 + t2923;
  t2946 = t1924*t2777;
  t2954 = t1462*t2912;
  t2957 = t2946 + t2954;
  t1270 = t150*t415*t386;
  t1327 = t728*t150*t560;
  t1403 = t1270 + t1327;
  t3082 = t728*t150*t415;
  t3110 = -1.*t150*t386*t560;
  t3116 = t3082 + t3110;
  t3135 = -1.*t367*t436;
  t3140 = t222*t1403;
  t3157 = t3135 + t3140;
  t3126 = t1480*t3116;
  t3158 = t1585*t3157;
  t3212 = t3126 + t3158;
  t3332 = t1585*t3116;
  t3348 = -1.*t1480*t3157;
  t3353 = t3332 + t3348;
  t3236 = -1.*t1471*t3212;
  t3381 = t1715*t3353;
  t3405 = t3236 + t3381;
  t3424 = t1715*t3212;
  t3427 = t1471*t3353;
  t3455 = t3424 + t3427;
  t3422 = t1464*t3405;
  t3462 = t1802*t3455;
  t3473 = t3422 + t3462;
  t3560 = t1802*t3405;
  t3561 = -1.*t1464*t3455;
  t3574 = t3560 + t3561;
  t3488 = -1.*t1462*t3473;
  t3606 = t1924*t3574;
  t3607 = t3488 + t3606;
  t3612 = t1924*t3473;
  t3638 = t1462*t3574;
  t3660 = t3612 + t3638;
  t2044 = t1446*t2037;
  t2095 = t2045*t2075;
  t2096 = t2044 + t2095;
  t2174 = t2045*t2037;
  t2204 = -1.*t1446*t2075;
  t2237 = t2174 + t2204;
  t2941 = t1446*t2931;
  t2959 = t2045*t2957;
  t2978 = t2941 + t2959;
  t3011 = t2045*t2931;
  t3040 = -1.*t1446*t2957;
  t3071 = t3011 + t3040;
  t3609 = t1446*t3607;
  t3701 = t2045*t3660;
  t3706 = t3609 + t3701;
  t3724 = t2045*t3607;
  t3767 = -1.*t1446*t3660;
  t3768 = t3724 + t3767;
  t4025 = -1.*t367;
  t4030 = 1. + t4025;
  t4339 = -1.*t1585;
  t4343 = 1. + t4339;
  t4493 = -1.*t1715;
  t4495 = 1. + t4493;
  t4674 = -1.*t1802;
  t4697 = 1. + t4674;
  t4805 = -1.*t1924;
  t4814 = 1. + t4805;
  t4924 = -1.*t2045;
  t4930 = 1. + t4924;
  t4041 = -0.049*t4030;
  t4073 = -0.135*t222;
  t4082 = 0. + t4041 + t4073;
  t4102 = 0.135*t386;
  t4143 = 0. + t4102;
  t4160 = -1.*t728;
  t4211 = 1. + t4160;
  t4214 = -0.135*t4211;
  t4249 = 0. + t4214;
  t4296 = -0.135*t4030;
  t4313 = 0.049*t222;
  t4333 = 0. + t4296 + t4313;
  t4349 = -0.09*t4343;
  t4360 = 0.049*t1480;
  t4376 = 0. + t4349 + t4360;
  t4468 = -0.049*t4343;
  t4469 = -0.09*t1480;
  t4470 = 0. + t4468 + t4469;
  t4503 = -0.049*t4495;
  t4557 = -0.21*t1471;
  t4558 = 0. + t4503 + t4557;
  t4603 = -0.21*t4495;
  t4616 = 0.049*t1471;
  t4617 = 0. + t4603 + t4616;
  t4698 = -0.2707*t4697;
  t4731 = 0.0016*t1464;
  t4741 = 0. + t4698 + t4731;
  t4755 = -0.0016*t4697;
  t4764 = -0.2707*t1464;
  t4792 = 0. + t4755 + t4764;
  t4819 = 0.0184*t4814;
  t4823 = -0.7055*t1462;
  t4850 = 0. + t4819 + t4823;
  t4863 = -0.7055*t4814;
  t4881 = -0.0184*t1462;
  t4882 = 0. + t4863 + t4881;
  t4947 = -1.1135*t4930;
  t4959 = 0.0216*t1446;
  t5015 = 0. + t4947 + t4959;
  t5106 = -0.0216*t4930;
  t5107 = -1.1135*t1446;
  t5109 = 0. + t5106 + t5107;
  p_output1[0]=t150*t222*t64 - 1.*t367*t899;
  p_output1[1]=-1.*t1240*t367 + t150*t222*t528;
  p_output1[2]=-1.*t1403*t367 - 1.*t222*t436;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2096 + 0.766044*t2237;
  p_output1[5]=0.642788*t2978 + 0.766044*t3071;
  p_output1[6]=0.642788*t3706 + 0.766044*t3768;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2096 + 0.642788*t2237;
  p_output1[9]=-0.766044*t2978 + 0.642788*t3071;
  p_output1[10]=-0.766044*t3706 + 0.642788*t3768;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t2096 - 1.062256*t2237 + t1564*t4376 + t1638*t4470 + t1684*t4558 + t1765*t4617 + t1771*t4741 + t1887*t4792 + t1919*t4850 + t1970*t4882 + t2037*t5015 + t2075*t5109 + t150*t4082*t64 + t4143*t677 + t4249*t802 + t4333*t899 - 0.1305*(-1.*t150*t222*t64 + t367*t899) + var1[0];
  p_output1[13]=0. + 0.088451*t2978 - 1.062256*t3071 + t1196*t4249 + t1240*t4333 + t2407*t4376 + t2480*t4470 + t2535*t4558 + t2576*t4617 + t2702*t4741 + t2748*t4792 + t2777*t4850 + t2912*t4882 + t2931*t5015 + t2957*t5109 + t150*t4082*t528 - 0.1305*(t1240*t367 - 1.*t150*t222*t528) + t4143*t999 + var1[1];
  p_output1[14]=0. + 0.088451*t3706 - 1.062256*t3768 + t150*t4143*t415 + t1403*t4333 - 1.*t4082*t436 - 0.1305*(t1403*t367 + t222*t436) + t3116*t4376 + t3157*t4470 + t3212*t4558 + t3353*t4617 + t3405*t4741 + t3455*t4792 + t3473*t4850 + t3574*t4882 + t3607*t5015 + t3660*t5109 + t150*t4249*t560 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
