/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t253;
  double t345;
  double t785;
  double t405;
  double t1604;
  double t1774;
  double t2049;
  double t1750;
  double t1783;
  double t1871;
  double t1566;
  double t2060;
  double t2074;
  double t2132;
  double t2492;
  double t1947;
  double t2327;
  double t2422;
  double t1374;
  double t2495;
  double t2608;
  double t2631;
  double t2754;
  double t2448;
  double t2642;
  double t2691;
  double t1148;
  double t2768;
  double t2827;
  double t2840;
  double t3314;
  double t2692;
  double t2841;
  double t2955;
  double t859;
  double t3384;
  double t3414;
  double t3418;
  double t3766;
  double t3813;
  double t3845;
  double t4023;
  double t4042;
  double t4064;
  double t3921;
  double t4072;
  double t4214;
  double t4354;
  double t4391;
  double t4618;
  double t4260;
  double t4661;
  double t4736;
  double t4779;
  double t4805;
  double t4903;
  double t4768;
  double t4911;
  double t5009;
  double t5049;
  double t5052;
  double t5053;
  double t5288;
  double t5290;
  double t5307;
  double t5391;
  double t5492;
  double t5573;
  double t5371;
  double t5599;
  double t5652;
  double t5761;
  double t5772;
  double t5849;
  double t5728;
  double t5898;
  double t5923;
  double t6014;
  double t6050;
  double t6150;
  double t3312;
  double t3477;
  double t3589;
  double t3651;
  double t3653;
  double t3663;
  double t5048;
  double t5063;
  double t5068;
  double t5150;
  double t5155;
  double t5189;
  double t5985;
  double t6203;
  double t6207;
  double t6338;
  double t6427;
  double t6455;
  t253 = Cos(var1[1]);
  t345 = Sin(var1[0]);
  t785 = Sin(var1[1]);
  t405 = Cos(var1[0]);
  t1604 = Cos(var1[2]);
  t1774 = Sin(var1[2]);
  t2049 = Cos(var1[3]);
  t1750 = t1604*t345*t785;
  t1783 = t405*t1774;
  t1871 = t1750 + t1783;
  t1566 = Sin(var1[3]);
  t2060 = t405*t1604;
  t2074 = -1.*t345*t785*t1774;
  t2132 = t2060 + t2074;
  t2492 = Cos(var1[4]);
  t1947 = -1.*t1566*t1871;
  t2327 = t2049*t2132;
  t2422 = t1947 + t2327;
  t1374 = Sin(var1[4]);
  t2495 = t2049*t1871;
  t2608 = t1566*t2132;
  t2631 = t2495 + t2608;
  t2754 = Cos(var1[5]);
  t2448 = t1374*t2422;
  t2642 = t2492*t2631;
  t2691 = t2448 + t2642;
  t1148 = Sin(var1[5]);
  t2768 = t2492*t2422;
  t2827 = -1.*t1374*t2631;
  t2840 = t2768 + t2827;
  t3314 = Cos(var1[6]);
  t2692 = -1.*t1148*t2691;
  t2841 = t2754*t2840;
  t2955 = t2692 + t2841;
  t859 = Sin(var1[6]);
  t3384 = t2754*t2691;
  t3414 = t1148*t2840;
  t3418 = t3384 + t3414;
  t3766 = t405*t1604*t785;
  t3813 = -1.*t345*t1774;
  t3845 = t3766 + t3813;
  t4023 = -1.*t1604*t345;
  t4042 = -1.*t405*t785*t1774;
  t4064 = t4023 + t4042;
  t3921 = -1.*t1566*t3845;
  t4072 = t2049*t4064;
  t4214 = t3921 + t4072;
  t4354 = t2049*t3845;
  t4391 = t1566*t4064;
  t4618 = t4354 + t4391;
  t4260 = t1374*t4214;
  t4661 = t2492*t4618;
  t4736 = t4260 + t4661;
  t4779 = t2492*t4214;
  t4805 = -1.*t1374*t4618;
  t4903 = t4779 + t4805;
  t4768 = -1.*t1148*t4736;
  t4911 = t2754*t4903;
  t5009 = t4768 + t4911;
  t5049 = t2754*t4736;
  t5052 = t1148*t4903;
  t5053 = t5049 + t5052;
  t5288 = -1.*t253*t1604*t1566;
  t5290 = -1.*t2049*t253*t1774;
  t5307 = t5288 + t5290;
  t5391 = t2049*t253*t1604;
  t5492 = -1.*t253*t1566*t1774;
  t5573 = t5391 + t5492;
  t5371 = t1374*t5307;
  t5599 = t2492*t5573;
  t5652 = t5371 + t5599;
  t5761 = t2492*t5307;
  t5772 = -1.*t1374*t5573;
  t5849 = t5761 + t5772;
  t5728 = -1.*t1148*t5652;
  t5898 = t2754*t5849;
  t5923 = t5728 + t5898;
  t6014 = t2754*t5652;
  t6050 = t1148*t5849;
  t6150 = t6014 + t6050;
  t3312 = t859*t2955;
  t3477 = t3314*t3418;
  t3589 = t3312 + t3477;
  t3651 = t3314*t2955;
  t3653 = -1.*t859*t3418;
  t3663 = t3651 + t3653;
  t5048 = t859*t5009;
  t5063 = t3314*t5053;
  t5068 = t5048 + t5063;
  t5150 = t3314*t5009;
  t5155 = -1.*t859*t5053;
  t5189 = t5150 + t5155;
  t5985 = t859*t5923;
  t6203 = t3314*t6150;
  t6207 = t5985 + t6203;
  t6338 = t3314*t5923;
  t6427 = -1.*t859*t6150;
  t6455 = t6338 + t6427;

  p_output1(0)=0. + t253*t345;
  p_output1(1)=0. - 1.*t253*t405;
  p_output1(2)=0. + t785;
  p_output1(3)=0. - 0.642788*t3589 - 0.766044*t3663;
  p_output1(4)=0. + 0.642788*t5068 + 0.766044*t5189;
  p_output1(5)=0. + 0.642788*t6207 + 0.766044*t6455;
  p_output1(6)=0. + 0.766044*t3589 - 0.642788*t3663;
  p_output1(7)=0. - 0.766044*t5068 + 0.642788*t5189;
  p_output1(8)=0. - 0.766044*t6207 + 0.642788*t6455;
}


       
void R_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
