/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t376;
  double t380;
  double t665;
  double t480;
  double t1246;
  double t1305;
  double t1993;
  double t1290;
  double t1376;
  double t1409;
  double t1221;
  double t2029;
  double t2069;
  double t2187;
  double t2532;
  double t1855;
  double t2305;
  double t2325;
  double t1219;
  double t2632;
  double t2666;
  double t2667;
  double t2784;
  double t2404;
  double t2728;
  double t2735;
  double t1207;
  double t2887;
  double t2939;
  double t3191;
  double t3334;
  double t2742;
  double t3281;
  double t3283;
  double t774;
  double t3501;
  double t3603;
  double t3738;
  double t4194;
  double t4261;
  double t4267;
  double t4425;
  double t4449;
  double t4555;
  double t4285;
  double t4689;
  double t4770;
  double t4787;
  double t4831;
  double t4891;
  double t4773;
  double t4965;
  double t4987;
  double t5040;
  double t5134;
  double t5154;
  double t5017;
  double t5212;
  double t5234;
  double t5256;
  double t5332;
  double t5342;
  double t5525;
  double t5529;
  double t5558;
  double t5616;
  double t5623;
  double t5658;
  double t5586;
  double t5679;
  double t5688;
  double t5729;
  double t5735;
  double t5736;
  double t5689;
  double t5741;
  double t5748;
  double t5814;
  double t5832;
  double t5874;
  double t3290;
  double t3777;
  double t3927;
  double t4006;
  double t4014;
  double t4097;
  double t5236;
  double t5373;
  double t5395;
  double t5426;
  double t5435;
  double t5486;
  double t5800;
  double t5957;
  double t5965;
  double t6074;
  double t6081;
  double t6086;
  double t6376;
  double t6396;
  double t6535;
  double t6546;
  double t6686;
  double t6759;
  double t6868;
  double t6884;
  double t7004;
  double t7038;
  double t6333;
  double t6337;
  double t6347;
  double t6368;
  double t6370;
  double t6441;
  double t6458;
  double t6462;
  double t6479;
  double t6488;
  double t6512;
  double t6549;
  double t6564;
  double t6612;
  double t6631;
  double t6642;
  double t6653;
  double t6762;
  double t6775;
  double t6789;
  double t6815;
  double t6838;
  double t6840;
  double t6888;
  double t6918;
  double t6946;
  double t6968;
  double t6979;
  double t6981;
  double t7042;
  double t7050;
  double t7051;
  double t7092;
  double t7097;
  double t7099;
  t376 = Cos(var1[1]);
  t380 = Sin(var1[0]);
  t665 = Sin(var1[1]);
  t480 = Cos(var1[0]);
  t1246 = Cos(var1[2]);
  t1305 = Sin(var1[2]);
  t1993 = Cos(var1[3]);
  t1290 = t1246*t380*t665;
  t1376 = t480*t1305;
  t1409 = t1290 + t1376;
  t1221 = Sin(var1[3]);
  t2029 = t480*t1246;
  t2069 = -1.*t380*t665*t1305;
  t2187 = t2029 + t2069;
  t2532 = Cos(var1[4]);
  t1855 = -1.*t1221*t1409;
  t2305 = t1993*t2187;
  t2325 = t1855 + t2305;
  t1219 = Sin(var1[4]);
  t2632 = t1993*t1409;
  t2666 = t1221*t2187;
  t2667 = t2632 + t2666;
  t2784 = Cos(var1[5]);
  t2404 = t1219*t2325;
  t2728 = t2532*t2667;
  t2735 = t2404 + t2728;
  t1207 = Sin(var1[5]);
  t2887 = t2532*t2325;
  t2939 = -1.*t1219*t2667;
  t3191 = t2887 + t2939;
  t3334 = Cos(var1[6]);
  t2742 = -1.*t1207*t2735;
  t3281 = t2784*t3191;
  t3283 = t2742 + t3281;
  t774 = Sin(var1[6]);
  t3501 = t2784*t2735;
  t3603 = t1207*t3191;
  t3738 = t3501 + t3603;
  t4194 = t480*t1246*t665;
  t4261 = -1.*t380*t1305;
  t4267 = t4194 + t4261;
  t4425 = -1.*t1246*t380;
  t4449 = -1.*t480*t665*t1305;
  t4555 = t4425 + t4449;
  t4285 = -1.*t1221*t4267;
  t4689 = t1993*t4555;
  t4770 = t4285 + t4689;
  t4787 = t1993*t4267;
  t4831 = t1221*t4555;
  t4891 = t4787 + t4831;
  t4773 = t1219*t4770;
  t4965 = t2532*t4891;
  t4987 = t4773 + t4965;
  t5040 = t2532*t4770;
  t5134 = -1.*t1219*t4891;
  t5154 = t5040 + t5134;
  t5017 = -1.*t1207*t4987;
  t5212 = t2784*t5154;
  t5234 = t5017 + t5212;
  t5256 = t2784*t4987;
  t5332 = t1207*t5154;
  t5342 = t5256 + t5332;
  t5525 = -1.*t376*t1246*t1221;
  t5529 = -1.*t1993*t376*t1305;
  t5558 = t5525 + t5529;
  t5616 = t1993*t376*t1246;
  t5623 = -1.*t376*t1221*t1305;
  t5658 = t5616 + t5623;
  t5586 = t1219*t5558;
  t5679 = t2532*t5658;
  t5688 = t5586 + t5679;
  t5729 = t2532*t5558;
  t5735 = -1.*t1219*t5658;
  t5736 = t5729 + t5735;
  t5689 = -1.*t1207*t5688;
  t5741 = t2784*t5736;
  t5748 = t5689 + t5741;
  t5814 = t2784*t5688;
  t5832 = t1207*t5736;
  t5874 = t5814 + t5832;
  t3290 = t774*t3283;
  t3777 = t3334*t3738;
  t3927 = t3290 + t3777;
  t4006 = t3334*t3283;
  t4014 = -1.*t774*t3738;
  t4097 = t4006 + t4014;
  t5236 = t774*t5234;
  t5373 = t3334*t5342;
  t5395 = t5236 + t5373;
  t5426 = t3334*t5234;
  t5435 = -1.*t774*t5342;
  t5486 = t5426 + t5435;
  t5800 = t774*t5748;
  t5957 = t3334*t5874;
  t5965 = t5800 + t5957;
  t6074 = t3334*t5748;
  t6081 = -1.*t774*t5874;
  t6086 = t6074 + t6081;
  t6376 = -1.*t1246;
  t6396 = 1. + t6376;
  t6535 = -1.*t1993;
  t6546 = 1. + t6535;
  t6686 = -1.*t2532;
  t6759 = 1. + t6686;
  t6868 = -1.*t2784;
  t6884 = 1. + t6868;
  t7004 = -1.*t3334;
  t7038 = 1. + t7004;
  t6333 = -1.*t376;
  t6337 = 1. + t6333;
  t6347 = 0.135*t6337;
  t6368 = 0.049*t665;
  t6370 = 0. + t6347 + t6368;
  t6441 = -0.049*t6396;
  t6458 = -0.09*t1305;
  t6462 = 0. + t6441 + t6458;
  t6479 = -0.09*t6396;
  t6488 = 0.049*t1305;
  t6512 = 0. + t6479 + t6488;
  t6549 = -0.049*t6546;
  t6564 = -0.21*t1221;
  t6612 = 0. + t6549 + t6564;
  t6631 = -0.21*t6546;
  t6642 = 0.049*t1221;
  t6653 = 0. + t6631 + t6642;
  t6762 = -0.2707*t6759;
  t6775 = 0.0016*t1219;
  t6789 = 0. + t6762 + t6775;
  t6815 = -0.0016*t6759;
  t6838 = -0.2707*t1219;
  t6840 = 0. + t6815 + t6838;
  t6888 = 0.0184*t6884;
  t6918 = -0.7055*t1207;
  t6946 = 0. + t6888 + t6918;
  t6968 = -0.7055*t6884;
  t6979 = -0.0184*t1207;
  t6981 = 0. + t6968 + t6979;
  t7042 = -1.1135*t7038;
  t7050 = 0.0216*t774;
  t7051 = 0. + t7042 + t7050;
  t7092 = -0.0216*t7038;
  t7097 = -1.1135*t774;
  t7099 = 0. + t7092 + t7097;

  p_output1(0)=0. + t376*t380;
  p_output1(1)=0. - 1.*t376*t480;
  p_output1(2)=0. + t665;
  p_output1(3)=0.;
  p_output1(4)=0. - 0.642788*t3927 - 0.766044*t4097;
  p_output1(5)=0. + 0.642788*t5395 + 0.766044*t5486;
  p_output1(6)=0. + 0.642788*t5965 + 0.766044*t6086;
  p_output1(7)=0.;
  p_output1(8)=0. + 0.766044*t3927 - 0.642788*t4097;
  p_output1(9)=0. - 0.766044*t5395 + 0.642788*t5486;
  p_output1(10)=0. - 0.766044*t5965 + 0.642788*t6086;
  p_output1(11)=0.;
  p_output1(12)=0.24925 + 0.135*t380 - 0.1305*t376*t380 - 0.0306*t3927 + 1.1312*t4097 - 1.*t380*t6370 - 1.*t480*t6512 - 1.*t1409*t6612 - 1.*t380*t6462*t665 - 1.*t2187*t6653 - 1.*t2325*t6789 - 1.*t2667*t6840 - 1.*t2735*t6946 - 1.*t3191*t6981 - 1.*t3283*t7051 - 1.*t3738*t7099;
  p_output1(13)=-0.0302 + 0.135*(1. - 1.*t480) + 0.1305*t376*t480 + 0.0306*t5395 - 1.1312*t5486 + t480*t6370 - 1.*t380*t6512 + t4267*t6612 + t480*t6462*t665 + t4555*t6653 + t4770*t6789 + t4891*t6840 + t4987*t6946 + t5154*t6981 + t5234*t7051 + t5342*t7099;
  p_output1(14)=-0.047 + 0.0306*t5965 - 1.1312*t6086 - 0.049*t6337 + t376*t6462 + t1246*t376*t6612 + 0.004500000000000004*t665 - 1.*t1305*t376*t6653 + t5558*t6789 + t5658*t6840 + t5688*t6946 + t5736*t6981 + t5748*t7051 + t5874*t7099;
  p_output1(15)=1.;
}


       
void H_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
