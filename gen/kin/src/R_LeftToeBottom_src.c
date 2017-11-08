/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_src.h"

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
  double t864;
  double t545;
  double t873;
  double t669;
  double t874;
  double t498;
  double t507;
  double t1288;
  double t1438;
  double t1455;
  double t756;
  double t880;
  double t1055;
  double t1076;
  double t1097;
  double t1178;
  double t1232;
  double t1309;
  double t1351;
  double t1626;
  double t1644;
  double t1645;
  double t1701;
  double t1632;
  double t1634;
  double t1636;
  double t1764;
  double t1999;
  double t1643;
  double t1820;
  double t1858;
  double t1624;
  double t2053;
  double t2057;
  double t2096;
  double t2376;
  double t1923;
  double t2100;
  double t2103;
  double t1621;
  double t2377;
  double t2409;
  double t2440;
  double t2698;
  double t2333;
  double t2494;
  double t2584;
  double t1617;
  double t2716;
  double t2767;
  double t2776;
  double t2811;
  double t2609;
  double t2784;
  double t2788;
  double t1609;
  double t2822;
  double t2836;
  double t2881;
  double t1465;
  double t1475;
  double t1517;
  double t1521;
  double t1530;
  double t1545;
  double t1562;
  double t1563;
  double t1566;
  double t3258;
  double t3326;
  double t3423;
  double t3223;
  double t3226;
  double t3247;
  double t3253;
  double t3440;
  double t3459;
  double t3478;
  double t3570;
  double t3577;
  double t3466;
  double t3594;
  double t3611;
  double t3678;
  double t3681;
  double t3715;
  double t3648;
  double t3718;
  double t3732;
  double t3782;
  double t3797;
  double t3815;
  double t3776;
  double t3840;
  double t3870;
  double t3883;
  double t3885;
  double t3890;
  double t1592;
  double t1594;
  double t1595;
  double t3996;
  double t4015;
  double t4020;
  double t3971;
  double t3975;
  double t3977;
  double t3988;
  double t4033;
  double t4043;
  double t4050;
  double t4051;
  double t4115;
  double t4045;
  double t4133;
  double t4152;
  double t4180;
  double t4191;
  double t4198;
  double t4155;
  double t4204;
  double t4240;
  double t4246;
  double t4255;
  double t4284;
  double t4243;
  double t4298;
  double t4308;
  double t4312;
  double t4319;
  double t4331;
  double t2790;
  double t2937;
  double t2938;
  double t3010;
  double t3099;
  double t3209;
  double t3879;
  double t3896;
  double t3929;
  double t3933;
  double t3939;
  double t3952;
  double t4310;
  double t4339;
  double t4342;
  double t4351;
  double t4352;
  double t4369;
  t864 = Cos(var1[3]);
  t545 = Cos(var1[5]);
  t873 = Sin(var1[4]);
  t669 = Sin(var1[3]);
  t874 = Sin(var1[5]);
  t498 = Cos(var1[7]);
  t507 = Cos(var1[6]);
  t1288 = Sin(var1[6]);
  t1438 = Cos(var1[4]);
  t1455 = Sin(var1[7]);
  t756 = -1.*t545*t669;
  t880 = t864*t873*t874;
  t1055 = t756 + t880;
  t1076 = t507*t1055;
  t1097 = t864*t545*t873;
  t1178 = t669*t874;
  t1232 = t1097 + t1178;
  t1309 = t1232*t1288;
  t1351 = t1076 + t1309;
  t1626 = Cos(var1[8]);
  t1644 = t507*t1232;
  t1645 = -1.*t1055*t1288;
  t1701 = t1644 + t1645;
  t1632 = t864*t1438*t498;
  t1634 = t1351*t1455;
  t1636 = t1632 + t1634;
  t1764 = Sin(var1[8]);
  t1999 = Cos(var1[9]);
  t1643 = t1626*t1636;
  t1820 = t1701*t1764;
  t1858 = t1643 + t1820;
  t1624 = Sin(var1[9]);
  t2053 = t1626*t1701;
  t2057 = -1.*t1636*t1764;
  t2096 = t2053 + t2057;
  t2376 = Cos(var1[10]);
  t1923 = -1.*t1624*t1858;
  t2100 = t1999*t2096;
  t2103 = t1923 + t2100;
  t1621 = Sin(var1[10]);
  t2377 = t1999*t1858;
  t2409 = t1624*t2096;
  t2440 = t2377 + t2409;
  t2698 = Cos(var1[11]);
  t2333 = t1621*t2103;
  t2494 = t2376*t2440;
  t2584 = t2333 + t2494;
  t1617 = Sin(var1[11]);
  t2716 = t2376*t2103;
  t2767 = -1.*t1621*t2440;
  t2776 = t2716 + t2767;
  t2811 = Cos(var1[12]);
  t2609 = -1.*t1617*t2584;
  t2784 = t2698*t2776;
  t2788 = t2609 + t2784;
  t1609 = Sin(var1[12]);
  t2822 = t2698*t2584;
  t2836 = t1617*t2776;
  t2881 = t2822 + t2836;
  t1465 = t864*t545;
  t1475 = t669*t873*t874;
  t1517 = t1465 + t1475;
  t1521 = t507*t1517;
  t1530 = t545*t669*t873;
  t1545 = -1.*t864*t874;
  t1562 = t1530 + t1545;
  t1563 = t1562*t1288;
  t1566 = t1521 + t1563;
  t3258 = t507*t1562;
  t3326 = -1.*t1517*t1288;
  t3423 = t3258 + t3326;
  t3223 = t1438*t498*t669;
  t3226 = t1566*t1455;
  t3247 = t3223 + t3226;
  t3253 = t1626*t3247;
  t3440 = t3423*t1764;
  t3459 = t3253 + t3440;
  t3478 = t1626*t3423;
  t3570 = -1.*t3247*t1764;
  t3577 = t3478 + t3570;
  t3466 = -1.*t1624*t3459;
  t3594 = t1999*t3577;
  t3611 = t3466 + t3594;
  t3678 = t1999*t3459;
  t3681 = t1624*t3577;
  t3715 = t3678 + t3681;
  t3648 = t1621*t3611;
  t3718 = t2376*t3715;
  t3732 = t3648 + t3718;
  t3782 = t2376*t3611;
  t3797 = -1.*t1621*t3715;
  t3815 = t3782 + t3797;
  t3776 = -1.*t1617*t3732;
  t3840 = t2698*t3815;
  t3870 = t3776 + t3840;
  t3883 = t2698*t3732;
  t3885 = t1617*t3815;
  t3890 = t3883 + t3885;
  t1592 = t1438*t507*t874;
  t1594 = t1438*t545*t1288;
  t1595 = t1592 + t1594;
  t3996 = t1438*t545*t507;
  t4015 = -1.*t1438*t874*t1288;
  t4020 = t3996 + t4015;
  t3971 = -1.*t498*t873;
  t3975 = t1595*t1455;
  t3977 = t3971 + t3975;
  t3988 = t1626*t3977;
  t4033 = t4020*t1764;
  t4043 = t3988 + t4033;
  t4050 = t1626*t4020;
  t4051 = -1.*t3977*t1764;
  t4115 = t4050 + t4051;
  t4045 = -1.*t1624*t4043;
  t4133 = t1999*t4115;
  t4152 = t4045 + t4133;
  t4180 = t1999*t4043;
  t4191 = t1624*t4115;
  t4198 = t4180 + t4191;
  t4155 = t1621*t4152;
  t4204 = t2376*t4198;
  t4240 = t4155 + t4204;
  t4246 = t2376*t4152;
  t4255 = -1.*t1621*t4198;
  t4284 = t4246 + t4255;
  t4243 = -1.*t1617*t4240;
  t4298 = t2698*t4284;
  t4308 = t4243 + t4298;
  t4312 = t2698*t4240;
  t4319 = t1617*t4284;
  t4331 = t4312 + t4319;
  t2790 = t1609*t2788;
  t2937 = t2811*t2881;
  t2938 = t2790 + t2937;
  t3010 = t2811*t2788;
  t3099 = -1.*t1609*t2881;
  t3209 = t3010 + t3099;
  t3879 = t1609*t3870;
  t3896 = t2811*t3890;
  t3929 = t3879 + t3896;
  t3933 = t2811*t3870;
  t3939 = -1.*t1609*t3890;
  t3952 = t3933 + t3939;
  t4310 = t1609*t4308;
  t4339 = t2811*t4331;
  t4342 = t4310 + t4339;
  t4351 = t2811*t4308;
  t4352 = -1.*t1609*t4331;
  t4369 = t4351 + t4352;
  p_output1[0]=-1.*t1351*t498 + t1438*t1455*t864;
  p_output1[1]=-1.*t1566*t498 + t1438*t1455*t669;
  p_output1[2]=-1.*t1595*t498 - 1.*t1455*t873;
  p_output1[3]=0.642788*t2938 + 0.766044*t3209;
  p_output1[4]=0.642788*t3929 + 0.766044*t3952;
  p_output1[5]=0.642788*t4342 + 0.766044*t4369;
  p_output1[6]=-0.766044*t2938 + 0.642788*t3209;
  p_output1[7]=-0.766044*t3929 + 0.642788*t3952;
  p_output1[8]=-0.766044*t4342 + 0.642788*t4369;
}



void R_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
