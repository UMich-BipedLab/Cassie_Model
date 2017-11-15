/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom_src.h"

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
  double t451;
  double t897;
  double t804;
  double t815;
  double t944;
  double t969;
  double t872;
  double t949;
  double t952;
  double t795;
  double t1025;
  double t1041;
  double t1042;
  double t1068;
  double t955;
  double t1047;
  double t1052;
  double t755;
  double t1165;
  double t1187;
  double t1218;
  double t1281;
  double t1065;
  double t1235;
  double t1247;
  double t730;
  double t1287;
  double t1289;
  double t1290;
  double t376;
  double t198;
  double t697;
  double t1317;
  double t1318;
  double t1323;
  double t1336;
  double t1354;
  double t1357;
  double t1334;
  double t1369;
  double t1424;
  double t1513;
  double t1524;
  double t1543;
  double t1478;
  double t1546;
  double t1587;
  double t1589;
  double t1605;
  double t1622;
  double t1588;
  double t1623;
  double t1674;
  double t1741;
  double t1783;
  double t1819;
  double t2091;
  double t2232;
  double t2317;
  double t2354;
  double t2405;
  double t2456;
  double t2348;
  double t2483;
  double t2528;
  double t2571;
  double t2577;
  double t2603;
  double t2538;
  double t2623;
  double t2702;
  double t2745;
  double t2878;
  double t3019;
  double t2709;
  double t3021;
  double t3057;
  double t3124;
  double t3144;
  double t3193;
  double t1272;
  double t1293;
  double t1299;
  double t1302;
  double t1305;
  double t1310;
  double t1697;
  double t1821;
  double t1838;
  double t1921;
  double t1925;
  double t1937;
  double t3115;
  double t3201;
  double t3210;
  double t3297;
  double t3369;
  double t3388;
  double t3578;
  double t3690;
  double t3950;
  double t3959;
  double t4041;
  double t4045;
  double t4161;
  double t4168;
  double t3520;
  double t3524;
  double t3852;
  double t3853;
  double t3890;
  double t3893;
  double t3894;
  double t3698;
  double t3708;
  double t3748;
  double t3905;
  double t3907;
  double t3928;
  double t3965;
  double t3974;
  double t3990;
  double t4021;
  double t4032;
  double t4036;
  double t4046;
  double t4079;
  double t4095;
  double t4102;
  double t4125;
  double t4131;
  double t4175;
  double t4176;
  double t4181;
  double t4190;
  double t4197;
  double t4199;
  double t4266;
  double t4275;
  double t4300;
  double t4309;
  double t4322;
  double t4330;
  t451 = Cos(var1[1]);
  t897 = Cos(var1[3]);
  t804 = Cos(var1[2]);
  t815 = Sin(var1[3]);
  t944 = Sin(var1[2]);
  t969 = Cos(var1[4]);
  t872 = -1.*t451*t804*t815;
  t949 = -1.*t897*t451*t944;
  t952 = t872 + t949;
  t795 = Sin(var1[4]);
  t1025 = t897*t451*t804;
  t1041 = -1.*t451*t815*t944;
  t1042 = t1025 + t1041;
  t1068 = Cos(var1[5]);
  t955 = t795*t952;
  t1047 = t969*t1042;
  t1052 = t955 + t1047;
  t755 = Sin(var1[5]);
  t1165 = t969*t952;
  t1187 = -1.*t795*t1042;
  t1218 = t1165 + t1187;
  t1281 = Cos(var1[6]);
  t1065 = -1.*t755*t1052;
  t1235 = t1068*t1218;
  t1247 = t1065 + t1235;
  t730 = Sin(var1[6]);
  t1287 = t1068*t1052;
  t1289 = t755*t1218;
  t1290 = t1287 + t1289;
  t376 = Cos(var1[0]);
  t198 = Sin(var1[1]);
  t697 = Sin(var1[0]);
  t1317 = t376*t804*t198;
  t1318 = -1.*t697*t944;
  t1323 = t1317 + t1318;
  t1336 = -1.*t804*t697;
  t1354 = -1.*t376*t198*t944;
  t1357 = t1336 + t1354;
  t1334 = -1.*t815*t1323;
  t1369 = t897*t1357;
  t1424 = t1334 + t1369;
  t1513 = t897*t1323;
  t1524 = t815*t1357;
  t1543 = t1513 + t1524;
  t1478 = t795*t1424;
  t1546 = t969*t1543;
  t1587 = t1478 + t1546;
  t1589 = t969*t1424;
  t1605 = -1.*t795*t1543;
  t1622 = t1589 + t1605;
  t1588 = -1.*t755*t1587;
  t1623 = t1068*t1622;
  t1674 = t1588 + t1623;
  t1741 = t1068*t1587;
  t1783 = t755*t1622;
  t1819 = t1741 + t1783;
  t2091 = t804*t697*t198;
  t2232 = t376*t944;
  t2317 = t2091 + t2232;
  t2354 = t376*t804;
  t2405 = -1.*t697*t198*t944;
  t2456 = t2354 + t2405;
  t2348 = -1.*t815*t2317;
  t2483 = t897*t2456;
  t2528 = t2348 + t2483;
  t2571 = t897*t2317;
  t2577 = t815*t2456;
  t2603 = t2571 + t2577;
  t2538 = t795*t2528;
  t2623 = t969*t2603;
  t2702 = t2538 + t2623;
  t2745 = t969*t2528;
  t2878 = -1.*t795*t2603;
  t3019 = t2745 + t2878;
  t2709 = -1.*t755*t2702;
  t3021 = t1068*t3019;
  t3057 = t2709 + t3021;
  t3124 = t1068*t2702;
  t3144 = t755*t3019;
  t3193 = t3124 + t3144;
  t1272 = t730*t1247;
  t1293 = t1281*t1290;
  t1299 = t1272 + t1293;
  t1302 = t1281*t1247;
  t1305 = -1.*t730*t1290;
  t1310 = t1302 + t1305;
  t1697 = t730*t1674;
  t1821 = t1281*t1819;
  t1838 = t1697 + t1821;
  t1921 = t1281*t1674;
  t1925 = -1.*t730*t1819;
  t1937 = t1921 + t1925;
  t3115 = t730*t3057;
  t3201 = t1281*t3193;
  t3210 = t3115 + t3201;
  t3297 = t1281*t3057;
  t3369 = -1.*t730*t3193;
  t3388 = t3297 + t3369;
  t3578 = -1.*t897;
  t3690 = 1. + t3578;
  t3950 = -1.*t969;
  t3959 = 1. + t3950;
  t4041 = -1.*t1068;
  t4045 = 1. + t4041;
  t4161 = -1.*t1281;
  t4168 = 1. + t4161;
  t3520 = -1.*t451;
  t3524 = 1. + t3520;
  t3852 = -1.*t804;
  t3853 = 1. + t3852;
  t3890 = -0.049*t3853;
  t3893 = -0.09*t944;
  t3894 = 0. + t3890 + t3893;
  t3698 = -0.049*t3690;
  t3708 = -0.21*t815;
  t3748 = 0. + t3698 + t3708;
  t3905 = -0.21*t3690;
  t3907 = 0.049*t815;
  t3928 = 0. + t3905 + t3907;
  t3965 = -0.2707*t3959;
  t3974 = 0.0016*t795;
  t3990 = 0. + t3965 + t3974;
  t4021 = -0.0016*t3959;
  t4032 = -0.2707*t795;
  t4036 = 0. + t4021 + t4032;
  t4046 = 0.0184*t4045;
  t4079 = -0.7055*t755;
  t4095 = 0. + t4046 + t4079;
  t4102 = -0.7055*t4045;
  t4125 = -0.0184*t755;
  t4131 = 0. + t4102 + t4125;
  t4175 = -1.1135*t4168;
  t4176 = 0.0216*t730;
  t4181 = 0. + t4175 + t4176;
  t4190 = -0.0216*t4168;
  t4197 = -1.1135*t730;
  t4199 = 0. + t4190 + t4197;
  t4266 = 0.135*t3524;
  t4275 = 0.049*t198;
  t4300 = 0. + t4266 + t4275;
  t4309 = -0.09*t3853;
  t4322 = 0.049*t944;
  t4330 = 0. + t4309 + t4322;
  p_output1[0]=0. + t198;
  p_output1[1]=0. + t376*t451;
  p_output1[2]=0. + t451*t697;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t1299 + 0.766044*t1310;
  p_output1[5]=0. - 0.642788*t1838 - 0.766044*t1937;
  p_output1[6]=0. - 0.642788*t3210 - 0.766044*t3388;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t1299 + 0.642788*t1310;
  p_output1[9]=0. + 0.766044*t1838 - 0.642788*t1937;
  p_output1[10]=0. + 0.766044*t3210 - 0.642788*t3388;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.0306*t1299 - 1.1312*t1310 + 0.004500000000000004*t198 - 0.049*t3524 + t1042*t4036 + t1052*t4095 + t1218*t4131 + t1247*t4181 + t1290*t4199 + t3894*t451 + t3748*t451*t804 - 1.*t3928*t451*t944 + t3990*t952;
  p_output1[13]=0. - 0.0306*t1838 + 1.1312*t1937 - 1.*t1323*t3748 - 0.135*(1. - 1.*t376) - 1.*t198*t376*t3894 - 1.*t1357*t3928 - 1.*t1424*t3990 - 1.*t1543*t4036 - 1.*t1587*t4095 - 1.*t1622*t4131 - 1.*t1674*t4181 - 1.*t1819*t4199 - 1.*t376*t4300 - 0.1305*t376*t451 + t4330*t697;
  p_output1[14]=-0.07996 - 0.0306*t3210 + 1.1312*t3388 - 1.*t2317*t3748 - 1.*t2456*t3928 - 1.*t2528*t3990 - 1.*t2603*t4036 - 1.*t2702*t4095 - 1.*t3019*t4131 - 1.*t3057*t4181 - 1.*t3193*t4199 - 1.*t376*t4330 + 0.135*t697 - 1.*t198*t3894*t697 - 1.*t4300*t697 - 0.1305*t451*t697;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
