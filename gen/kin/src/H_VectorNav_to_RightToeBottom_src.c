/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom_src.h"

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
  double t333;
  double t1687;
  double t1805;
  double t1624;
  double t1898;
  double t1389;
  double t2401;
  double t2471;
  double t2650;
  double t1735;
  double t1988;
  double t2083;
  double t2693;
  double t1264;
  double t3755;
  double t3869;
  double t4097;
  double t2260;
  double t2753;
  double t2897;
  double t4122;
  double t1104;
  double t5142;
  double t5515;
  double t5531;
  double t3609;
  double t4441;
  double t4689;
  double t5646;
  double t329;
  double t239;
  double t370;
  double t5918;
  double t5919;
  double t5923;
  double t5896;
  double t5907;
  double t5910;
  double t5944;
  double t5946;
  double t5953;
  double t5912;
  double t5930;
  double t5939;
  double t5985;
  double t5988;
  double t5999;
  double t5940;
  double t5957;
  double t5962;
  double t6052;
  double t6053;
  double t6063;
  double t5976;
  double t6024;
  double t6033;
  double t6157;
  double t6174;
  double t6188;
  double t6113;
  double t6127;
  double t6144;
  double t6242;
  double t6275;
  double t6277;
  double t6150;
  double t6208;
  double t6225;
  double t6292;
  double t6297;
  double t6300;
  double t6238;
  double t6278;
  double t6286;
  double t6315;
  double t6328;
  double t6332;
  double t6290;
  double t6302;
  double t6305;
  double t5039;
  double t5649;
  double t5725;
  double t5736;
  double t5843;
  double t5868;
  double t6045;
  double t6066;
  double t6068;
  double t6075;
  double t6093;
  double t6097;
  double t6309;
  double t6333;
  double t6336;
  double t6347;
  double t6376;
  double t6380;
  double t6531;
  double t6536;
  double t6580;
  double t6584;
  double t6631;
  double t6632;
  double t6653;
  double t6656;
  double t6482;
  double t6489;
  double t6496;
  double t6501;
  double t6502;
  double t6505;
  double t6516;
  double t6552;
  double t6553;
  double t6558;
  double t6565;
  double t6566;
  double t6573;
  double t6588;
  double t6591;
  double t6597;
  double t6607;
  double t6610;
  double t6618;
  double t6636;
  double t6637;
  double t6639;
  double t6647;
  double t6649;
  double t6650;
  double t6660;
  double t6664;
  double t6666;
  double t6675;
  double t6677;
  double t6686;
  double t6726;
  double t6728;
  double t6731;
  double t6738;
  double t6741;
  double t6751;
  t333 = Cos(var1[8]);
  t1687 = Cos(var1[10]);
  t1805 = Sin(var1[9]);
  t1624 = Cos(var1[9]);
  t1898 = Sin(var1[10]);
  t1389 = Cos(var1[11]);
  t2401 = -1.*t333*t1687*t1805;
  t2471 = -1.*t333*t1624*t1898;
  t2650 = t2401 + t2471;
  t1735 = t333*t1624*t1687;
  t1988 = -1.*t333*t1805*t1898;
  t2083 = t1735 + t1988;
  t2693 = Sin(var1[11]);
  t1264 = Cos(var1[12]);
  t3755 = t1389*t2650;
  t3869 = -1.*t2083*t2693;
  t4097 = t3755 + t3869;
  t2260 = t1389*t2083;
  t2753 = t2650*t2693;
  t2897 = t2260 + t2753;
  t4122 = Sin(var1[12]);
  t1104 = Cos(var1[13]);
  t5142 = t1264*t4097;
  t5515 = -1.*t2897*t4122;
  t5531 = t5142 + t5515;
  t3609 = t1264*t2897;
  t4441 = t4097*t4122;
  t4689 = t3609 + t4441;
  t5646 = Sin(var1[13]);
  t329 = Cos(var1[7]);
  t239 = Sin(var1[8]);
  t370 = Sin(var1[7]);
  t5918 = -1.*t1624*t370;
  t5919 = -1.*t329*t239*t1805;
  t5923 = t5918 + t5919;
  t5896 = t329*t1624*t239;
  t5907 = -1.*t370*t1805;
  t5910 = t5896 + t5907;
  t5944 = t1687*t5923;
  t5946 = -1.*t5910*t1898;
  t5953 = t5944 + t5946;
  t5912 = t1687*t5910;
  t5930 = t5923*t1898;
  t5939 = t5912 + t5930;
  t5985 = t1389*t5953;
  t5988 = -1.*t5939*t2693;
  t5999 = t5985 + t5988;
  t5940 = t1389*t5939;
  t5957 = t5953*t2693;
  t5962 = t5940 + t5957;
  t6052 = t1264*t5999;
  t6053 = -1.*t5962*t4122;
  t6063 = t6052 + t6053;
  t5976 = t1264*t5962;
  t6024 = t5999*t4122;
  t6033 = t5976 + t6024;
  t6157 = t329*t1624;
  t6174 = -1.*t370*t239*t1805;
  t6188 = t6157 + t6174;
  t6113 = t1624*t370*t239;
  t6127 = t329*t1805;
  t6144 = t6113 + t6127;
  t6242 = t1687*t6188;
  t6275 = -1.*t6144*t1898;
  t6277 = t6242 + t6275;
  t6150 = t1687*t6144;
  t6208 = t6188*t1898;
  t6225 = t6150 + t6208;
  t6292 = t1389*t6277;
  t6297 = -1.*t6225*t2693;
  t6300 = t6292 + t6297;
  t6238 = t1389*t6225;
  t6278 = t6277*t2693;
  t6286 = t6238 + t6278;
  t6315 = t1264*t6300;
  t6328 = -1.*t6286*t4122;
  t6332 = t6315 + t6328;
  t6290 = t1264*t6286;
  t6302 = t6300*t4122;
  t6305 = t6290 + t6302;
  t5039 = t1104*t4689;
  t5649 = t5531*t5646;
  t5725 = t5039 + t5649;
  t5736 = t1104*t5531;
  t5843 = -1.*t4689*t5646;
  t5868 = t5736 + t5843;
  t6045 = t1104*t6033;
  t6066 = t6063*t5646;
  t6068 = t6045 + t6066;
  t6075 = t1104*t6063;
  t6093 = -1.*t6033*t5646;
  t6097 = t6075 + t6093;
  t6309 = t1104*t6305;
  t6333 = t6332*t5646;
  t6336 = t6309 + t6333;
  t6347 = t1104*t6332;
  t6376 = -1.*t6305*t5646;
  t6380 = t6347 + t6376;
  t6531 = -1.*t1687;
  t6536 = 1. + t6531;
  t6580 = -1.*t1389;
  t6584 = 1. + t6580;
  t6631 = -1.*t1264;
  t6632 = 1. + t6631;
  t6653 = -1.*t1104;
  t6656 = 1. + t6653;
  t6482 = -1.*t333;
  t6489 = 1. + t6482;
  t6496 = -1.*t1624;
  t6501 = 1. + t6496;
  t6502 = -0.049*t6501;
  t6505 = -0.09*t1805;
  t6516 = 0. + t6502 + t6505;
  t6552 = -0.049*t6536;
  t6553 = -0.21*t1898;
  t6558 = 0. + t6552 + t6553;
  t6565 = -0.21*t6536;
  t6566 = 0.049*t1898;
  t6573 = 0. + t6565 + t6566;
  t6588 = -0.0016*t6584;
  t6591 = -0.2707*t2693;
  t6597 = 0. + t6588 + t6591;
  t6607 = -0.2707*t6584;
  t6610 = 0.0016*t2693;
  t6618 = 0. + t6607 + t6610;
  t6636 = 0.0184*t6632;
  t6637 = -0.7055*t4122;
  t6639 = 0. + t6636 + t6637;
  t6647 = -0.7055*t6632;
  t6649 = -0.0184*t4122;
  t6650 = 0. + t6647 + t6649;
  t6660 = -0.0216*t6656;
  t6664 = -1.1135*t5646;
  t6666 = 0. + t6660 + t6664;
  t6675 = -1.1135*t6656;
  t6677 = 0.0216*t5646;
  t6686 = 0. + t6675 + t6677;
  t6726 = -0.135*t6489;
  t6728 = 0.049*t239;
  t6731 = 0. + t6726 + t6728;
  t6738 = -0.09*t6501;
  t6741 = 0.049*t1805;
  t6751 = 0. + t6738 + t6741;
  p_output1[0]=0. + t239;
  p_output1[1]=0. + t329*t333;
  p_output1[2]=0. + t333*t370;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t5725 + 0.766044*t5868;
  p_output1[5]=0. - 0.642788*t6068 - 0.766044*t6097;
  p_output1[6]=0. - 0.642788*t6336 - 0.766044*t6380;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t5725 + 0.642788*t5868;
  p_output1[9]=0. + 0.766044*t6068 - 0.642788*t6097;
  p_output1[10]=0. + 0.766044*t6336 - 0.642788*t6380;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t239 + 0.0306*t5725 - 1.1312*t5868 - 0.049*t6489 + t333*t6516 + t1624*t333*t6558 - 1.*t1805*t333*t6573 + t2083*t6597 + t2650*t6618 + t2897*t6639 + t4097*t6650 + t4689*t6666 + t5531*t6686;
  p_output1[13]=0. + 0.135*(1. - 1.*t329) + 0.1305*t329*t333 - 0.0306*t6068 + 1.1312*t6097 - 1.*t239*t329*t6516 - 1.*t5910*t6558 - 1.*t5923*t6573 - 1.*t5939*t6597 - 1.*t5953*t6618 - 1.*t5962*t6639 - 1.*t5999*t6650 - 1.*t6033*t6666 - 1.*t6063*t6686 - 1.*t329*t6731 + t370*t6751;
  p_output1[14]=-0.07996 - 0.135*t370 + 0.1305*t333*t370 - 0.0306*t6336 + 1.1312*t6380 - 1.*t239*t370*t6516 - 1.*t6144*t6558 - 1.*t6188*t6573 - 1.*t6225*t6597 - 1.*t6277*t6618 - 1.*t6286*t6639 - 1.*t6300*t6650 - 1.*t6305*t6666 - 1.*t6332*t6686 - 1.*t370*t6731 - 1.*t329*t6751;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
