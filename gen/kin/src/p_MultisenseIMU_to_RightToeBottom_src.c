/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t73;
  double t188;
  double t786;
  double t1122;
  double t1148;
  double t1167;
  double t1216;
  double t1516;
  double t1866;
  double t1888;
  double t1907;
  double t1953;
  double t1725;
  double t1801;
  double t1815;
  double t2121;
  double t2200;
  double t2206;
  double t2567;
  double t2595;
  double t2600;
  double t2649;
  double t2484;
  double t2524;
  double t2545;
  double t2844;
  double t2920;
  double t2993;
  double t3291;
  double t3295;
  double t3412;
  double t3496;
  double t3211;
  double t3214;
  double t3282;
  double t3680;
  double t3686;
  double t3710;
  double t3925;
  double t3927;
  double t3943;
  double t3951;
  double t3872;
  double t3884;
  double t3921;
  double t4012;
  double t4018;
  double t4061;
  double t431;
  double t445;
  double t714;
  double t802;
  double t938;
  double t1175;
  double t1448;
  double t1464;
  double t1584;
  double t1611;
  double t1670;
  double t1952;
  double t1955;
  double t2042;
  double t2217;
  double t2224;
  double t2316;
  double t4344;
  double t4354;
  double t4361;
  double t4400;
  double t4464;
  double t4478;
  double t2640;
  double t2698;
  double t2723;
  double t3076;
  double t3087;
  double t3119;
  double t4526;
  double t4527;
  double t4562;
  double t4604;
  double t4633;
  double t4671;
  double t3482;
  double t3543;
  double t3577;
  double t3776;
  double t3791;
  double t3821;
  double t4728;
  double t4748;
  double t4769;
  double t4806;
  double t4865;
  double t4895;
  double t3949;
  double t3962;
  double t3966;
  double t4070;
  double t4098;
  double t4104;
  double t4912;
  double t4921;
  double t4925;
  double t4944;
  double t4946;
  double t4952;
  double t5144;
  double t5145;
  double t5161;
  double t5168;
  double t5178;
  double t5189;
  double t5227;
  double t5239;
  double t5246;
  double t5252;
  double t5254;
  double t5272;
  double t5294;
  double t5300;
  double t5301;
  double t5314;
  double t5323;
  double t5334;
  t73 = Sin(var1[7]);
  t188 = Cos(var1[8]);
  t786 = Sin(var1[8]);
  t1122 = Cos(var1[9]);
  t1148 = -1.*t1122;
  t1167 = 1. + t1148;
  t1216 = Sin(var1[9]);
  t1516 = Cos(var1[7]);
  t1866 = Cos(var1[10]);
  t1888 = -1.*t1866;
  t1907 = 1. + t1888;
  t1953 = Sin(var1[10]);
  t1725 = t1122*t73*t786;
  t1801 = t1516*t1216;
  t1815 = t1725 + t1801;
  t2121 = t1516*t1122;
  t2200 = -1.*t73*t786*t1216;
  t2206 = t2121 + t2200;
  t2567 = Cos(var1[11]);
  t2595 = -1.*t2567;
  t2600 = 1. + t2595;
  t2649 = Sin(var1[11]);
  t2484 = t1866*t1815;
  t2524 = t2206*t1953;
  t2545 = t2484 + t2524;
  t2844 = t1866*t2206;
  t2920 = -1.*t1815*t1953;
  t2993 = t2844 + t2920;
  t3291 = Cos(var1[12]);
  t3295 = -1.*t3291;
  t3412 = 1. + t3295;
  t3496 = Sin(var1[12]);
  t3211 = t2567*t2545;
  t3214 = t2993*t2649;
  t3282 = t3211 + t3214;
  t3680 = t2567*t2993;
  t3686 = -1.*t2545*t2649;
  t3710 = t3680 + t3686;
  t3925 = Cos(var1[13]);
  t3927 = -1.*t3925;
  t3943 = 1. + t3927;
  t3951 = Sin(var1[13]);
  t3872 = t3291*t3282;
  t3884 = t3710*t3496;
  t3921 = t3872 + t3884;
  t4012 = t3291*t3710;
  t4018 = -1.*t3282*t3496;
  t4061 = t4012 + t4018;
  t431 = -1.*t188;
  t445 = 1. + t431;
  t714 = -0.135*t445;
  t802 = 0.049*t786;
  t938 = 0. + t714 + t802;
  t1175 = -0.049*t1167;
  t1448 = -0.09*t1216;
  t1464 = 0. + t1175 + t1448;
  t1584 = -0.09*t1167;
  t1611 = 0.049*t1216;
  t1670 = 0. + t1584 + t1611;
  t1952 = -0.049*t1907;
  t1955 = -0.21*t1953;
  t2042 = 0. + t1952 + t1955;
  t2217 = -0.21*t1907;
  t2224 = 0.049*t1953;
  t2316 = 0. + t2217 + t2224;
  t4344 = t1516*t1122*t786;
  t4354 = -1.*t73*t1216;
  t4361 = t4344 + t4354;
  t4400 = -1.*t1122*t73;
  t4464 = -1.*t1516*t786*t1216;
  t4478 = t4400 + t4464;
  t2640 = -0.0016*t2600;
  t2698 = -0.2707*t2649;
  t2723 = 0. + t2640 + t2698;
  t3076 = -0.2707*t2600;
  t3087 = 0.0016*t2649;
  t3119 = 0. + t3076 + t3087;
  t4526 = t1866*t4361;
  t4527 = t4478*t1953;
  t4562 = t4526 + t4527;
  t4604 = t1866*t4478;
  t4633 = -1.*t4361*t1953;
  t4671 = t4604 + t4633;
  t3482 = 0.0184*t3412;
  t3543 = -0.7055*t3496;
  t3577 = 0. + t3482 + t3543;
  t3776 = -0.7055*t3412;
  t3791 = -0.0184*t3496;
  t3821 = 0. + t3776 + t3791;
  t4728 = t2567*t4562;
  t4748 = t4671*t2649;
  t4769 = t4728 + t4748;
  t4806 = t2567*t4671;
  t4865 = -1.*t4562*t2649;
  t4895 = t4806 + t4865;
  t3949 = -0.0216*t3943;
  t3962 = -1.1135*t3951;
  t3966 = 0. + t3949 + t3962;
  t4070 = -1.1135*t3943;
  t4098 = 0.0216*t3951;
  t4104 = 0. + t4070 + t4098;
  t4912 = t3291*t4769;
  t4921 = t4895*t3496;
  t4925 = t4912 + t4921;
  t4944 = t3291*t4895;
  t4946 = -1.*t4769*t3496;
  t4952 = t4944 + t4946;
  t5144 = t188*t1122*t1866;
  t5145 = -1.*t188*t1216*t1953;
  t5161 = t5144 + t5145;
  t5168 = -1.*t188*t1866*t1216;
  t5178 = -1.*t188*t1122*t1953;
  t5189 = t5168 + t5178;
  t5227 = t2567*t5161;
  t5239 = t5189*t2649;
  t5246 = t5227 + t5239;
  t5252 = t2567*t5189;
  t5254 = -1.*t5161*t2649;
  t5272 = t5252 + t5254;
  t5294 = t3291*t5246;
  t5300 = t5272*t3496;
  t5301 = t5294 + t5300;
  t5314 = t3291*t5272;
  t5323 = -1.*t5246*t3496;
  t5334 = t5314 + t5323;
  p_output1[0]=0.24925 - 1.*t1516*t1670 - 1.*t1815*t2042 - 1.*t2206*t2316 - 1.*t2545*t2723 - 1.*t2993*t3119 - 1.*t3282*t3577 - 1.*t3710*t3821 - 1.*t3921*t3966 + 1.1312*(-1.*t3921*t3951 + t3925*t4061) - 0.0306*(t3921*t3925 + t3951*t4061) - 1.*t4061*t4104 - 0.135*t73 + 0.1305*t188*t73 - 1.*t1464*t73*t786 - 1.*t73*t938;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t1516) - 0.1305*t1516*t188 + t2042*t4361 + t2316*t4478 + t2723*t4562 + t3119*t4671 + t3577*t4769 + t3821*t4895 + t3966*t4925 + t4104*t4952 - 1.1312*(-1.*t3951*t4925 + t3925*t4952) + 0.0306*(t3925*t4925 + t3951*t4952) - 1.*t1670*t73 + t1464*t1516*t786 + t1516*t938;
  p_output1[2]=-0.047 + t1464*t188 + t1122*t188*t2042 - 1.*t1216*t188*t2316 - 0.049*t445 + t2723*t5161 + t3119*t5189 + t3577*t5246 + t3821*t5272 + t3966*t5301 + t4104*t5334 - 1.1312*(-1.*t3951*t5301 + t3925*t5334) + 0.0306*(t3925*t5301 + t3951*t5334) - 0.004500000000000004*t786;
}



void p_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
