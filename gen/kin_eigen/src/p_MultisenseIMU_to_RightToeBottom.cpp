/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_RightToeBottom.h"

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
  double t9;
  double t339;
  double t478;
  double t1116;
  double t1195;
  double t1292;
  double t1354;
  double t1574;
  double t2153;
  double t2185;
  double t2209;
  double t2337;
  double t2036;
  double t2072;
  double t2098;
  double t2637;
  double t2921;
  double t3011;
  double t3679;
  double t3787;
  double t3950;
  double t4002;
  double t3373;
  double t3556;
  double t3661;
  double t4638;
  double t4644;
  double t4760;
  double t5521;
  double t5721;
  double t5797;
  double t5860;
  double t5307;
  double t5416;
  double t5497;
  double t5975;
  double t5997;
  double t6012;
  double t6356;
  double t6367;
  double t6380;
  double t6443;
  double t6252;
  double t6292;
  double t6355;
  double t6561;
  double t6573;
  double t6586;
  double t360;
  double t372;
  double t418;
  double t570;
  double t746;
  double t1320;
  double t1368;
  double t1441;
  double t1635;
  double t1766;
  double t1916;
  double t2241;
  double t2367;
  double t2434;
  double t3072;
  double t3105;
  double t3298;
  double t6944;
  double t6953;
  double t6970;
  double t6979;
  double t6984;
  double t6992;
  double t3983;
  double t4172;
  double t4185;
  double t4890;
  double t4918;
  double t4926;
  double t7037;
  double t7039;
  double t7042;
  double t7055;
  double t7058;
  double t7063;
  double t5799;
  double t5936;
  double t5964;
  double t6079;
  double t6137;
  double t6183;
  double t7082;
  double t7096;
  double t7103;
  double t7109;
  double t7111;
  double t7117;
  double t6382;
  double t6456;
  double t6499;
  double t6648;
  double t6680;
  double t6705;
  double t7149;
  double t7157;
  double t7181;
  double t7184;
  double t7185;
  double t7198;
  double t7258;
  double t7261;
  double t7262;
  double t7271;
  double t7272;
  double t7280;
  double t7292;
  double t7299;
  double t7302;
  double t7308;
  double t7310;
  double t7316;
  double t7321;
  double t7322;
  double t7324;
  double t7338;
  double t7357;
  double t7359;
  t9 = Sin(var1[7]);
  t339 = Cos(var1[8]);
  t478 = Sin(var1[8]);
  t1116 = Cos(var1[9]);
  t1195 = -1.*t1116;
  t1292 = 1. + t1195;
  t1354 = Sin(var1[9]);
  t1574 = Cos(var1[7]);
  t2153 = Cos(var1[10]);
  t2185 = -1.*t2153;
  t2209 = 1. + t2185;
  t2337 = Sin(var1[10]);
  t2036 = t1116*t9*t478;
  t2072 = t1574*t1354;
  t2098 = t2036 + t2072;
  t2637 = t1574*t1116;
  t2921 = -1.*t9*t478*t1354;
  t3011 = t2637 + t2921;
  t3679 = Cos(var1[11]);
  t3787 = -1.*t3679;
  t3950 = 1. + t3787;
  t4002 = Sin(var1[11]);
  t3373 = t2153*t2098;
  t3556 = t3011*t2337;
  t3661 = t3373 + t3556;
  t4638 = t2153*t3011;
  t4644 = -1.*t2098*t2337;
  t4760 = t4638 + t4644;
  t5521 = Cos(var1[12]);
  t5721 = -1.*t5521;
  t5797 = 1. + t5721;
  t5860 = Sin(var1[12]);
  t5307 = t3679*t3661;
  t5416 = t4760*t4002;
  t5497 = t5307 + t5416;
  t5975 = t3679*t4760;
  t5997 = -1.*t3661*t4002;
  t6012 = t5975 + t5997;
  t6356 = Cos(var1[13]);
  t6367 = -1.*t6356;
  t6380 = 1. + t6367;
  t6443 = Sin(var1[13]);
  t6252 = t5521*t5497;
  t6292 = t6012*t5860;
  t6355 = t6252 + t6292;
  t6561 = t5521*t6012;
  t6573 = -1.*t5497*t5860;
  t6586 = t6561 + t6573;
  t360 = -1.*t339;
  t372 = 1. + t360;
  t418 = -0.135*t372;
  t570 = 0.049*t478;
  t746 = 0. + t418 + t570;
  t1320 = -0.049*t1292;
  t1368 = -0.09*t1354;
  t1441 = 0. + t1320 + t1368;
  t1635 = -0.09*t1292;
  t1766 = 0.049*t1354;
  t1916 = 0. + t1635 + t1766;
  t2241 = -0.049*t2209;
  t2367 = -0.21*t2337;
  t2434 = 0. + t2241 + t2367;
  t3072 = -0.21*t2209;
  t3105 = 0.049*t2337;
  t3298 = 0. + t3072 + t3105;
  t6944 = t1574*t1116*t478;
  t6953 = -1.*t9*t1354;
  t6970 = t6944 + t6953;
  t6979 = -1.*t1116*t9;
  t6984 = -1.*t1574*t478*t1354;
  t6992 = t6979 + t6984;
  t3983 = -0.0016*t3950;
  t4172 = -0.2707*t4002;
  t4185 = 0. + t3983 + t4172;
  t4890 = -0.2707*t3950;
  t4918 = 0.0016*t4002;
  t4926 = 0. + t4890 + t4918;
  t7037 = t2153*t6970;
  t7039 = t6992*t2337;
  t7042 = t7037 + t7039;
  t7055 = t2153*t6992;
  t7058 = -1.*t6970*t2337;
  t7063 = t7055 + t7058;
  t5799 = 0.0184*t5797;
  t5936 = -0.7055*t5860;
  t5964 = 0. + t5799 + t5936;
  t6079 = -0.7055*t5797;
  t6137 = -0.0184*t5860;
  t6183 = 0. + t6079 + t6137;
  t7082 = t3679*t7042;
  t7096 = t7063*t4002;
  t7103 = t7082 + t7096;
  t7109 = t3679*t7063;
  t7111 = -1.*t7042*t4002;
  t7117 = t7109 + t7111;
  t6382 = -0.0216*t6380;
  t6456 = -1.1135*t6443;
  t6499 = 0. + t6382 + t6456;
  t6648 = -1.1135*t6380;
  t6680 = 0.0216*t6443;
  t6705 = 0. + t6648 + t6680;
  t7149 = t5521*t7103;
  t7157 = t7117*t5860;
  t7181 = t7149 + t7157;
  t7184 = t5521*t7117;
  t7185 = -1.*t7103*t5860;
  t7198 = t7184 + t7185;
  t7258 = t339*t1116*t2153;
  t7261 = -1.*t339*t1354*t2337;
  t7262 = t7258 + t7261;
  t7271 = -1.*t339*t2153*t1354;
  t7272 = -1.*t339*t1116*t2337;
  t7280 = t7271 + t7272;
  t7292 = t3679*t7262;
  t7299 = t7280*t4002;
  t7302 = t7292 + t7299;
  t7308 = t3679*t7280;
  t7310 = -1.*t7262*t4002;
  t7316 = t7308 + t7310;
  t7321 = t5521*t7302;
  t7322 = t7316*t5860;
  t7324 = t7321 + t7322;
  t7338 = t5521*t7316;
  t7357 = -1.*t7302*t5860;
  t7359 = t7338 + t7357;

  p_output1(0)=0.24925 - 1.*t1574*t1916 - 1.*t2098*t2434 - 1.*t3011*t3298 - 1.*t3661*t4185 - 1.*t4760*t4926 - 1.*t5497*t5964 - 1.*t6012*t6183 - 1.*t6355*t6499 + 1.1312*(-1.*t6355*t6443 + t6356*t6586) - 0.0306*(t6355*t6356 + t6443*t6586) - 1.*t6586*t6705 - 0.135*t9 + 0.1305*t339*t9 - 1.*t1441*t478*t9 - 1.*t746*t9;
  p_output1(1)=-0.0302 - 0.135*(1. - 1.*t1574) - 0.1305*t1574*t339 + t1441*t1574*t478 + t2434*t6970 + t3298*t6992 + t4185*t7042 + t4926*t7063 + t5964*t7103 + t6183*t7117 + t6499*t7181 + t6705*t7198 - 1.1312*(-1.*t6443*t7181 + t6356*t7198) + 0.0306*(t6356*t7181 + t6443*t7198) + t1574*t746 - 1.*t1916*t9;
  p_output1(2)=-0.047 + t1441*t339 + t1116*t2434*t339 - 1.*t1354*t3298*t339 - 0.049*t372 - 0.004500000000000004*t478 + t4185*t7262 + t4926*t7280 + t5964*t7302 + t6183*t7316 + t6499*t7324 + t6705*t7359 - 1.1312*(-1.*t6443*t7324 + t6356*t7359) + 0.0306*(t6356*t7324 + t6443*t7359);
}


       
void p_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
