/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom_src.h"

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
  double t293;
  double t1300;
  double t1400;
  double t1558;
  double t1622;
  double t1623;
  double t1951;
  double t2140;
  double t2144;
  double t2148;
  double t2151;
  double t2122;
  double t2123;
  double t2133;
  double t2168;
  double t2171;
  double t2175;
  double t2550;
  double t2725;
  double t2735;
  double t2769;
  double t2442;
  double t2444;
  double t2503;
  double t3098;
  double t3102;
  double t3226;
  double t3636;
  double t4149;
  double t4470;
  double t4716;
  double t3500;
  double t3520;
  double t3609;
  double t5128;
  double t5142;
  double t5247;
  double t6069;
  double t684;
  double t685;
  double t760;
  double t1316;
  double t1338;
  double t1349;
  double t1448;
  double t1452;
  double t6448;
  double t1638;
  double t2010;
  double t2066;
  double t2107;
  double t2111;
  double t2115;
  double t6589;
  double t6591;
  double t6636;
  double t6652;
  double t6690;
  double t6698;
  double t2150;
  double t2155;
  double t2159;
  double t2176;
  double t2247;
  double t2397;
  double t6738;
  double t6741;
  double t6765;
  double t6783;
  double t6787;
  double t6800;
  double t2766;
  double t2830;
  double t2871;
  double t3266;
  double t3452;
  double t3468;
  double t6804;
  double t6813;
  double t6814;
  double t6820;
  double t6826;
  double t6828;
  double t4472;
  double t4889;
  double t4993;
  double t5282;
  double t5540;
  double t5543;
  double t6839;
  double t6841;
  double t6850;
  double t6854;
  double t6869;
  double t6875;
  double t6302;
  double t6320;
  double t6347;
  double t6551;
  double t6552;
  double t6562;
  double t6957;
  double t6958;
  double t6962;
  double t6967;
  double t6972;
  double t6976;
  double t6990;
  double t6991;
  double t6994;
  double t6997;
  double t6999;
  double t7000;
  double t7004;
  double t7007;
  double t7009;
  double t7012;
  double t7015;
  double t7018;
  double t7020;
  double t7021;
  double t7023;
  double t7025;
  double t7030;
  double t7032;
  t293 = Cos(var1[8]);
  t1300 = Cos(var1[9]);
  t1400 = Sin(var1[9]);
  t1558 = Cos(var1[10]);
  t1622 = -1.*t1558;
  t1623 = 1. + t1622;
  t1951 = Sin(var1[10]);
  t2140 = Cos(var1[11]);
  t2144 = -1.*t2140;
  t2148 = 1. + t2144;
  t2151 = Sin(var1[11]);
  t2122 = t293*t1300*t1558;
  t2123 = -1.*t293*t1400*t1951;
  t2133 = t2122 + t2123;
  t2168 = -1.*t293*t1558*t1400;
  t2171 = -1.*t293*t1300*t1951;
  t2175 = t2168 + t2171;
  t2550 = Cos(var1[12]);
  t2725 = -1.*t2550;
  t2735 = 1. + t2725;
  t2769 = Sin(var1[12]);
  t2442 = t2140*t2133;
  t2444 = t2175*t2151;
  t2503 = t2442 + t2444;
  t3098 = t2140*t2175;
  t3102 = -1.*t2133*t2151;
  t3226 = t3098 + t3102;
  t3636 = Cos(var1[13]);
  t4149 = -1.*t3636;
  t4470 = 1. + t4149;
  t4716 = Sin(var1[13]);
  t3500 = t2550*t2503;
  t3520 = t3226*t2769;
  t3609 = t3500 + t3520;
  t5128 = t2550*t3226;
  t5142 = -1.*t2503*t2769;
  t5247 = t5128 + t5142;
  t6069 = Cos(var1[7]);
  t684 = -1.*t293;
  t685 = 1. + t684;
  t760 = Sin(var1[8]);
  t1316 = -1.*t1300;
  t1338 = 1. + t1316;
  t1349 = -0.049*t1338;
  t1448 = -0.09*t1400;
  t1452 = 0. + t1349 + t1448;
  t6448 = Sin(var1[7]);
  t1638 = -0.049*t1623;
  t2010 = -0.21*t1951;
  t2066 = 0. + t1638 + t2010;
  t2107 = -0.21*t1623;
  t2111 = 0.049*t1951;
  t2115 = 0. + t2107 + t2111;
  t6589 = t6069*t1300*t760;
  t6591 = -1.*t6448*t1400;
  t6636 = t6589 + t6591;
  t6652 = -1.*t1300*t6448;
  t6690 = -1.*t6069*t760*t1400;
  t6698 = t6652 + t6690;
  t2150 = -0.0016*t2148;
  t2155 = -0.2707*t2151;
  t2159 = 0. + t2150 + t2155;
  t2176 = -0.2707*t2148;
  t2247 = 0.0016*t2151;
  t2397 = 0. + t2176 + t2247;
  t6738 = t1558*t6636;
  t6741 = t6698*t1951;
  t6765 = t6738 + t6741;
  t6783 = t1558*t6698;
  t6787 = -1.*t6636*t1951;
  t6800 = t6783 + t6787;
  t2766 = 0.0184*t2735;
  t2830 = -0.7055*t2769;
  t2871 = 0. + t2766 + t2830;
  t3266 = -0.7055*t2735;
  t3452 = -0.0184*t2769;
  t3468 = 0. + t3266 + t3452;
  t6804 = t2140*t6765;
  t6813 = t6800*t2151;
  t6814 = t6804 + t6813;
  t6820 = t2140*t6800;
  t6826 = -1.*t6765*t2151;
  t6828 = t6820 + t6826;
  t4472 = -0.0216*t4470;
  t4889 = -1.1135*t4716;
  t4993 = 0. + t4472 + t4889;
  t5282 = -1.1135*t4470;
  t5540 = 0.0216*t4716;
  t5543 = 0. + t5282 + t5540;
  t6839 = t2550*t6814;
  t6841 = t6828*t2769;
  t6850 = t6839 + t6841;
  t6854 = t2550*t6828;
  t6869 = -1.*t6814*t2769;
  t6875 = t6854 + t6869;
  t6302 = -0.135*t685;
  t6320 = 0.049*t760;
  t6347 = 0. + t6302 + t6320;
  t6551 = -0.09*t1338;
  t6552 = 0.049*t1400;
  t6562 = 0. + t6551 + t6552;
  t6957 = t1300*t6448*t760;
  t6958 = t6069*t1400;
  t6962 = t6957 + t6958;
  t6967 = t6069*t1300;
  t6972 = -1.*t6448*t760*t1400;
  t6976 = t6967 + t6972;
  t6990 = t1558*t6962;
  t6991 = t6976*t1951;
  t6994 = t6990 + t6991;
  t6997 = t1558*t6976;
  t6999 = -1.*t6962*t1951;
  t7000 = t6997 + t6999;
  t7004 = t2140*t6994;
  t7007 = t7000*t2151;
  t7009 = t7004 + t7007;
  t7012 = t2140*t7000;
  t7015 = -1.*t6994*t2151;
  t7018 = t7012 + t7015;
  t7020 = t2550*t7009;
  t7021 = t7018*t2769;
  t7023 = t7020 + t7021;
  t7025 = t2550*t7018;
  t7030 = -1.*t7009*t2769;
  t7032 = t7025 + t7030;
  p_output1[0]=-0.03155 + t2133*t2159 + t2175*t2397 + t2503*t2871 + t1452*t293 + t1300*t2066*t293 - 1.*t1400*t2115*t293 + t3226*t3468 + t3609*t4993 - 1.1312*(-1.*t3609*t4716 + t3636*t5247) + 0.0306*(t3609*t3636 + t4716*t5247) + t5247*t5543 - 0.049*t685 - 0.004500000000000004*t760;
  p_output1[1]=0. + 0.135*(1. - 1.*t6069) + 0.1305*t293*t6069 - 1.*t6069*t6347 + t6448*t6562 - 1.*t2066*t6636 - 1.*t2115*t6698 - 1.*t2159*t6765 - 1.*t2397*t6800 - 1.*t2871*t6814 - 1.*t3468*t6828 - 1.*t4993*t6850 - 1.*t5543*t6875 + 1.1312*(-1.*t4716*t6850 + t3636*t6875) - 0.0306*(t3636*t6850 + t4716*t6875) - 1.*t1452*t6069*t760;
  p_output1[2]=-0.07996 - 0.135*t6448 + 0.1305*t293*t6448 - 1.*t6347*t6448 - 1.*t6069*t6562 - 1.*t2066*t6962 - 1.*t2115*t6976 - 1.*t2159*t6994 - 1.*t2397*t7000 - 1.*t2871*t7009 - 1.*t3468*t7018 - 1.*t4993*t7023 - 1.*t5543*t7032 + 1.1312*(-1.*t4716*t7023 + t3636*t7032) - 0.0306*(t3636*t7023 + t4716*t7032) - 1.*t1452*t6448*t760;
}



void p_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
