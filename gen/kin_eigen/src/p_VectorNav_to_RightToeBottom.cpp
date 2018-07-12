/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:22 GMT-04:00
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
  double t65;
  double t989;
  double t1351;
  double t1767;
  double t1770;
  double t1779;
  double t2085;
  double t3134;
  double t3180;
  double t3230;
  double t3288;
  double t2982;
  double t2986;
  double t3106;
  double t3735;
  double t3739;
  double t3790;
  double t4143;
  double t4184;
  double t4195;
  double t4255;
  double t4025;
  double t4030;
  double t4104;
  double t4658;
  double t4664;
  double t4677;
  double t5124;
  double t5126;
  double t5128;
  double t5162;
  double t4881;
  double t5025;
  double t5041;
  double t5488;
  double t5521;
  double t5546;
  double t6067;
  double t99;
  double t107;
  double t801;
  double t1196;
  double t1208;
  double t1295;
  double t1664;
  double t1670;
  double t6163;
  double t1804;
  double t2090;
  double t2370;
  double t2573;
  double t2651;
  double t2779;
  double t6215;
  double t6222;
  double t6231;
  double t6254;
  double t6278;
  double t6282;
  double t3287;
  double t3313;
  double t3605;
  double t3805;
  double t3815;
  double t3885;
  double t6302;
  double t6309;
  double t6310;
  double t6331;
  double t6338;
  double t6348;
  double t4204;
  double t4344;
  double t4544;
  double t4775;
  double t4779;
  double t4792;
  double t6404;
  double t6427;
  double t6438;
  double t6472;
  double t6494;
  double t6515;
  double t5156;
  double t5297;
  double t5364;
  double t5561;
  double t5566;
  double t5606;
  double t6612;
  double t6620;
  double t6627;
  double t6658;
  double t6661;
  double t6667;
  double t6128;
  double t6142;
  double t6147;
  double t6171;
  double t6172;
  double t6188;
  double t6816;
  double t6825;
  double t6856;
  double t6884;
  double t6906;
  double t6909;
  double t6979;
  double t6981;
  double t7010;
  double t7026;
  double t7033;
  double t7115;
  double t7166;
  double t7168;
  double t7170;
  double t7176;
  double t7177;
  double t7181;
  double t7235;
  double t7253;
  double t7266;
  double t7290;
  double t7296;
  double t7297;
  t65 = Cos(var1[8]);
  t989 = Cos(var1[9]);
  t1351 = Sin(var1[9]);
  t1767 = Cos(var1[10]);
  t1770 = -1.*t1767;
  t1779 = 1. + t1770;
  t2085 = Sin(var1[10]);
  t3134 = Cos(var1[11]);
  t3180 = -1.*t3134;
  t3230 = 1. + t3180;
  t3288 = Sin(var1[11]);
  t2982 = t65*t989*t1767;
  t2986 = -1.*t65*t1351*t2085;
  t3106 = t2982 + t2986;
  t3735 = -1.*t65*t1767*t1351;
  t3739 = -1.*t65*t989*t2085;
  t3790 = t3735 + t3739;
  t4143 = Cos(var1[12]);
  t4184 = -1.*t4143;
  t4195 = 1. + t4184;
  t4255 = Sin(var1[12]);
  t4025 = t3134*t3106;
  t4030 = t3790*t3288;
  t4104 = t4025 + t4030;
  t4658 = t3134*t3790;
  t4664 = -1.*t3106*t3288;
  t4677 = t4658 + t4664;
  t5124 = Cos(var1[13]);
  t5126 = -1.*t5124;
  t5128 = 1. + t5126;
  t5162 = Sin(var1[13]);
  t4881 = t4143*t4104;
  t5025 = t4677*t4255;
  t5041 = t4881 + t5025;
  t5488 = t4143*t4677;
  t5521 = -1.*t4104*t4255;
  t5546 = t5488 + t5521;
  t6067 = Cos(var1[7]);
  t99 = -1.*t65;
  t107 = 1. + t99;
  t801 = Sin(var1[8]);
  t1196 = -1.*t989;
  t1208 = 1. + t1196;
  t1295 = -0.049*t1208;
  t1664 = -0.09*t1351;
  t1670 = 0. + t1295 + t1664;
  t6163 = Sin(var1[7]);
  t1804 = -0.049*t1779;
  t2090 = -0.21*t2085;
  t2370 = 0. + t1804 + t2090;
  t2573 = -0.21*t1779;
  t2651 = 0.049*t2085;
  t2779 = 0. + t2573 + t2651;
  t6215 = t6067*t989*t801;
  t6222 = -1.*t6163*t1351;
  t6231 = t6215 + t6222;
  t6254 = -1.*t989*t6163;
  t6278 = -1.*t6067*t801*t1351;
  t6282 = t6254 + t6278;
  t3287 = -0.0016*t3230;
  t3313 = -0.2707*t3288;
  t3605 = 0. + t3287 + t3313;
  t3805 = -0.2707*t3230;
  t3815 = 0.0016*t3288;
  t3885 = 0. + t3805 + t3815;
  t6302 = t1767*t6231;
  t6309 = t6282*t2085;
  t6310 = t6302 + t6309;
  t6331 = t1767*t6282;
  t6338 = -1.*t6231*t2085;
  t6348 = t6331 + t6338;
  t4204 = 0.0184*t4195;
  t4344 = -0.7055*t4255;
  t4544 = 0. + t4204 + t4344;
  t4775 = -0.7055*t4195;
  t4779 = -0.0184*t4255;
  t4792 = 0. + t4775 + t4779;
  t6404 = t3134*t6310;
  t6427 = t6348*t3288;
  t6438 = t6404 + t6427;
  t6472 = t3134*t6348;
  t6494 = -1.*t6310*t3288;
  t6515 = t6472 + t6494;
  t5156 = -0.0216*t5128;
  t5297 = -1.1135*t5162;
  t5364 = 0. + t5156 + t5297;
  t5561 = -1.1135*t5128;
  t5566 = 0.0216*t5162;
  t5606 = 0. + t5561 + t5566;
  t6612 = t4143*t6438;
  t6620 = t6515*t4255;
  t6627 = t6612 + t6620;
  t6658 = t4143*t6515;
  t6661 = -1.*t6438*t4255;
  t6667 = t6658 + t6661;
  t6128 = -0.135*t107;
  t6142 = 0.049*t801;
  t6147 = 0. + t6128 + t6142;
  t6171 = -0.09*t1208;
  t6172 = 0.049*t1351;
  t6188 = 0. + t6171 + t6172;
  t6816 = t989*t6163*t801;
  t6825 = t6067*t1351;
  t6856 = t6816 + t6825;
  t6884 = t6067*t989;
  t6906 = -1.*t6163*t801*t1351;
  t6909 = t6884 + t6906;
  t6979 = t1767*t6856;
  t6981 = t6909*t2085;
  t7010 = t6979 + t6981;
  t7026 = t1767*t6909;
  t7033 = -1.*t6856*t2085;
  t7115 = t7026 + t7033;
  t7166 = t3134*t7010;
  t7168 = t7115*t3288;
  t7170 = t7166 + t7168;
  t7176 = t3134*t7115;
  t7177 = -1.*t7010*t3288;
  t7181 = t7176 + t7177;
  t7235 = t4143*t7170;
  t7253 = t7181*t4255;
  t7266 = t7235 + t7253;
  t7290 = t4143*t7181;
  t7296 = -1.*t7170*t4255;
  t7297 = t7290 + t7296;

  p_output1(0)=-0.03155 - 0.049*t107 + t3106*t3605 + t3790*t3885 + t4104*t4544 + t4677*t4792 + t5041*t5364 - 1.1312*(-1.*t5041*t5162 + t5124*t5546) + 0.0306*(t5041*t5124 + t5162*t5546) + t5546*t5606 + t1670*t65 - 1.*t1351*t2779*t65 - 0.004500000000000004*t801 + t2370*t65*t989;
  p_output1(1)=0. - 0.135*(1. - 1.*t6067) + t6067*t6147 - 1.*t6163*t6188 + t2370*t6231 + t2779*t6282 + t3605*t6310 + t3885*t6348 + t4544*t6438 - 0.1305*t6067*t65 + t4792*t6515 + t5364*t6627 + t5606*t6667 - 1.1312*(-1.*t5162*t6627 + t5124*t6667) + 0.0306*(t5124*t6627 + t5162*t6667) + t1670*t6067*t801;
  p_output1(2)=0.07996 + 0.135*t6163 + t6147*t6163 + t6067*t6188 - 0.1305*t6163*t65 + t2370*t6856 + t2779*t6909 + t3605*t7010 + t3885*t7115 + t4544*t7170 + t4792*t7181 + t5364*t7266 + t5606*t7297 - 1.1312*(-1.*t5162*t7266 + t5124*t7297) + 0.0306*(t5124*t7266 + t5162*t7297) + t1670*t6163*t801;
}


       
void p_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
