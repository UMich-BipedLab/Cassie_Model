/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:02 GMT-04:00
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
  double t1113;
  double t929;
  double t1120;
  double t933;
  double t1138;
  double t227;
  double t639;
  double t1454;
  double t1626;
  double t1640;
  double t974;
  double t1144;
  double t1160;
  double t1247;
  double t1318;
  double t1412;
  double t1428;
  double t1566;
  double t1567;
  double t2690;
  double t2827;
  double t2922;
  double t2930;
  double t2704;
  double t2805;
  double t2813;
  double t2961;
  double t3053;
  double t2815;
  double t2975;
  double t3040;
  double t2681;
  double t3055;
  double t3086;
  double t3088;
  double t3189;
  double t3048;
  double t3090;
  double t3102;
  double t2643;
  double t3217;
  double t3248;
  double t3278;
  double t3335;
  double t3130;
  double t3309;
  double t3311;
  double t2612;
  double t3353;
  double t3390;
  double t3410;
  double t3541;
  double t3315;
  double t3441;
  double t3472;
  double t2546;
  double t3592;
  double t3754;
  double t3778;
  double t1813;
  double t1815;
  double t1872;
  double t1891;
  double t1904;
  double t1939;
  double t1945;
  double t1968;
  double t2049;
  double t4040;
  double t4062;
  double t4067;
  double t3988;
  double t4016;
  double t4024;
  double t4029;
  double t4069;
  double t4073;
  double t4112;
  double t4120;
  double t4138;
  double t4100;
  double t4143;
  double t4149;
  double t4157;
  double t4246;
  double t4311;
  double t4152;
  double t4317;
  double t4320;
  double t4383;
  double t4398;
  double t4438;
  double t4351;
  double t4462;
  double t4475;
  double t4485;
  double t4491;
  double t4497;
  double t2238;
  double t2244;
  double t2288;
  double t4657;
  double t4670;
  double t4673;
  double t4638;
  double t4646;
  double t4650;
  double t4652;
  double t4681;
  double t4705;
  double t4722;
  double t4723;
  double t4726;
  double t4715;
  double t4727;
  double t4729;
  double t4756;
  double t4758;
  double t4759;
  double t4734;
  double t4760;
  double t4762;
  double t4773;
  double t4775;
  double t4781;
  double t4766;
  double t4793;
  double t4794;
  double t4796;
  double t4801;
  double t4802;
  double t3505;
  double t3783;
  double t3785;
  double t3858;
  double t3949;
  double t3954;
  double t4482;
  double t4537;
  double t4540;
  double t4566;
  double t4569;
  double t4574;
  double t4795;
  double t4803;
  double t4804;
  double t4847;
  double t4850;
  double t4854;
  t1113 = Cos(var1[3]);
  t929 = Cos(var1[5]);
  t1120 = Sin(var1[4]);
  t933 = Sin(var1[3]);
  t1138 = Sin(var1[5]);
  t227 = Cos(var1[7]);
  t639 = Cos(var1[6]);
  t1454 = Sin(var1[6]);
  t1626 = Cos(var1[4]);
  t1640 = Sin(var1[7]);
  t974 = -1.*t929*t933;
  t1144 = t1113*t1120*t1138;
  t1160 = t974 + t1144;
  t1247 = t639*t1160;
  t1318 = t1113*t929*t1120;
  t1412 = t933*t1138;
  t1428 = t1318 + t1412;
  t1566 = t1428*t1454;
  t1567 = t1247 + t1566;
  t2690 = Cos(var1[8]);
  t2827 = t639*t1428;
  t2922 = -1.*t1160*t1454;
  t2930 = t2827 + t2922;
  t2704 = t1113*t1626*t227;
  t2805 = t1567*t1640;
  t2813 = t2704 + t2805;
  t2961 = Sin(var1[8]);
  t3053 = Cos(var1[9]);
  t2815 = t2690*t2813;
  t2975 = t2930*t2961;
  t3040 = t2815 + t2975;
  t2681 = Sin(var1[9]);
  t3055 = t2690*t2930;
  t3086 = -1.*t2813*t2961;
  t3088 = t3055 + t3086;
  t3189 = Cos(var1[10]);
  t3048 = -1.*t2681*t3040;
  t3090 = t3053*t3088;
  t3102 = t3048 + t3090;
  t2643 = Sin(var1[10]);
  t3217 = t3053*t3040;
  t3248 = t2681*t3088;
  t3278 = t3217 + t3248;
  t3335 = Cos(var1[11]);
  t3130 = t2643*t3102;
  t3309 = t3189*t3278;
  t3311 = t3130 + t3309;
  t2612 = Sin(var1[11]);
  t3353 = t3189*t3102;
  t3390 = -1.*t2643*t3278;
  t3410 = t3353 + t3390;
  t3541 = Cos(var1[12]);
  t3315 = -1.*t2612*t3311;
  t3441 = t3335*t3410;
  t3472 = t3315 + t3441;
  t2546 = Sin(var1[12]);
  t3592 = t3335*t3311;
  t3754 = t2612*t3410;
  t3778 = t3592 + t3754;
  t1813 = t1113*t929;
  t1815 = t933*t1120*t1138;
  t1872 = t1813 + t1815;
  t1891 = t639*t1872;
  t1904 = t929*t933*t1120;
  t1939 = -1.*t1113*t1138;
  t1945 = t1904 + t1939;
  t1968 = t1945*t1454;
  t2049 = t1891 + t1968;
  t4040 = t639*t1945;
  t4062 = -1.*t1872*t1454;
  t4067 = t4040 + t4062;
  t3988 = t1626*t227*t933;
  t4016 = t2049*t1640;
  t4024 = t3988 + t4016;
  t4029 = t2690*t4024;
  t4069 = t4067*t2961;
  t4073 = t4029 + t4069;
  t4112 = t2690*t4067;
  t4120 = -1.*t4024*t2961;
  t4138 = t4112 + t4120;
  t4100 = -1.*t2681*t4073;
  t4143 = t3053*t4138;
  t4149 = t4100 + t4143;
  t4157 = t3053*t4073;
  t4246 = t2681*t4138;
  t4311 = t4157 + t4246;
  t4152 = t2643*t4149;
  t4317 = t3189*t4311;
  t4320 = t4152 + t4317;
  t4383 = t3189*t4149;
  t4398 = -1.*t2643*t4311;
  t4438 = t4383 + t4398;
  t4351 = -1.*t2612*t4320;
  t4462 = t3335*t4438;
  t4475 = t4351 + t4462;
  t4485 = t3335*t4320;
  t4491 = t2612*t4438;
  t4497 = t4485 + t4491;
  t2238 = t1626*t639*t1138;
  t2244 = t1626*t929*t1454;
  t2288 = t2238 + t2244;
  t4657 = t1626*t929*t639;
  t4670 = -1.*t1626*t1138*t1454;
  t4673 = t4657 + t4670;
  t4638 = -1.*t227*t1120;
  t4646 = t2288*t1640;
  t4650 = t4638 + t4646;
  t4652 = t2690*t4650;
  t4681 = t4673*t2961;
  t4705 = t4652 + t4681;
  t4722 = t2690*t4673;
  t4723 = -1.*t4650*t2961;
  t4726 = t4722 + t4723;
  t4715 = -1.*t2681*t4705;
  t4727 = t3053*t4726;
  t4729 = t4715 + t4727;
  t4756 = t3053*t4705;
  t4758 = t2681*t4726;
  t4759 = t4756 + t4758;
  t4734 = t2643*t4729;
  t4760 = t3189*t4759;
  t4762 = t4734 + t4760;
  t4773 = t3189*t4729;
  t4775 = -1.*t2643*t4759;
  t4781 = t4773 + t4775;
  t4766 = -1.*t2612*t4762;
  t4793 = t3335*t4781;
  t4794 = t4766 + t4793;
  t4796 = t3335*t4762;
  t4801 = t2612*t4781;
  t4802 = t4796 + t4801;
  t3505 = t2546*t3472;
  t3783 = t3541*t3778;
  t3785 = t3505 + t3783;
  t3858 = t3541*t3472;
  t3949 = -1.*t2546*t3778;
  t3954 = t3858 + t3949;
  t4482 = t2546*t4475;
  t4537 = t3541*t4497;
  t4540 = t4482 + t4537;
  t4566 = t3541*t4475;
  t4569 = -1.*t2546*t4497;
  t4574 = t4566 + t4569;
  t4795 = t2546*t4794;
  t4803 = t3541*t4802;
  t4804 = t4795 + t4803;
  t4847 = t3541*t4794;
  t4850 = -1.*t2546*t4802;
  t4854 = t4847 + t4850;
  p_output1[0]=t1113*t1626*t1640 - 1.*t1567*t227;
  p_output1[1]=-1.*t2049*t227 + t1626*t1640*t933;
  p_output1[2]=-1.*t1120*t1640 - 1.*t227*t2288;
  p_output1[3]=0.642788*t3785 + 0.766044*t3954;
  p_output1[4]=0.642788*t4540 + 0.766044*t4574;
  p_output1[5]=0.642788*t4804 + 0.766044*t4854;
  p_output1[6]=-0.766044*t3785 + 0.642788*t3954;
  p_output1[7]=-0.766044*t4540 + 0.642788*t4574;
  p_output1[8]=-0.766044*t4804 + 0.642788*t4854;
}



void R_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
