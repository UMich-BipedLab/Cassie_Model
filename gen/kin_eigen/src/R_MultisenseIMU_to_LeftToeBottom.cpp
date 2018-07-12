/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:36 GMT-04:00
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
  double t146;
  double t195;
  double t697;
  double t390;
  double t1709;
  double t1940;
  double t2029;
  double t1830;
  double t1962;
  double t2009;
  double t1508;
  double t2058;
  double t2208;
  double t2240;
  double t2632;
  double t2013;
  double t2250;
  double t2383;
  double t1290;
  double t2666;
  double t2725;
  double t2728;
  double t2798;
  double t2404;
  double t2763;
  double t2768;
  double t1107;
  double t2887;
  double t2989;
  double t3260;
  double t3553;
  double t2774;
  double t3290;
  double t3480;
  double t1097;
  double t3603;
  double t3719;
  double t3777;
  double t4061;
  double t4070;
  double t4097;
  double t4179;
  double t4192;
  double t4281;
  double t4142;
  double t4308;
  double t4586;
  double t4773;
  double t4787;
  double t4831;
  double t4770;
  double t4864;
  double t4896;
  double t5040;
  double t5082;
  double t5139;
  double t4965;
  double t5154;
  double t5157;
  double t5212;
  double t5234;
  double t5236;
  double t5729;
  double t5736;
  double t5741;
  double t5814;
  double t5832;
  double t5873;
  double t5800;
  double t5957;
  double t6004;
  double t6021;
  double t6044;
  double t6074;
  double t6013;
  double t6086;
  double t6092;
  double t6115;
  double t6116;
  double t6123;
  double t3501;
  double t3813;
  double t3862;
  double t3917;
  double t3927;
  double t3973;
  double t5190;
  double t5335;
  double t5366;
  double t5426;
  double t5503;
  double t5586;
  double t6112;
  double t6135;
  double t6143;
  double t6172;
  double t6185;
  double t6215;
  t146 = Cos(var1[1]);
  t195 = Sin(var1[0]);
  t697 = Sin(var1[1]);
  t390 = Cos(var1[0]);
  t1709 = Cos(var1[2]);
  t1940 = Sin(var1[2]);
  t2029 = Cos(var1[3]);
  t1830 = t1709*t195*t697;
  t1962 = t390*t1940;
  t2009 = t1830 + t1962;
  t1508 = Sin(var1[3]);
  t2058 = t390*t1709;
  t2208 = -1.*t195*t697*t1940;
  t2240 = t2058 + t2208;
  t2632 = Cos(var1[4]);
  t2013 = -1.*t1508*t2009;
  t2250 = t2029*t2240;
  t2383 = t2013 + t2250;
  t1290 = Sin(var1[4]);
  t2666 = t2029*t2009;
  t2725 = t1508*t2240;
  t2728 = t2666 + t2725;
  t2798 = Cos(var1[5]);
  t2404 = t1290*t2383;
  t2763 = t2632*t2728;
  t2768 = t2404 + t2763;
  t1107 = Sin(var1[5]);
  t2887 = t2632*t2383;
  t2989 = -1.*t1290*t2728;
  t3260 = t2887 + t2989;
  t3553 = Cos(var1[6]);
  t2774 = -1.*t1107*t2768;
  t3290 = t2798*t3260;
  t3480 = t2774 + t3290;
  t1097 = Sin(var1[6]);
  t3603 = t2798*t2768;
  t3719 = t1107*t3260;
  t3777 = t3603 + t3719;
  t4061 = t390*t1709*t697;
  t4070 = -1.*t195*t1940;
  t4097 = t4061 + t4070;
  t4179 = -1.*t1709*t195;
  t4192 = -1.*t390*t697*t1940;
  t4281 = t4179 + t4192;
  t4142 = -1.*t1508*t4097;
  t4308 = t2029*t4281;
  t4586 = t4142 + t4308;
  t4773 = t2029*t4097;
  t4787 = t1508*t4281;
  t4831 = t4773 + t4787;
  t4770 = t1290*t4586;
  t4864 = t2632*t4831;
  t4896 = t4770 + t4864;
  t5040 = t2632*t4586;
  t5082 = -1.*t1290*t4831;
  t5139 = t5040 + t5082;
  t4965 = -1.*t1107*t4896;
  t5154 = t2798*t5139;
  t5157 = t4965 + t5154;
  t5212 = t2798*t4896;
  t5234 = t1107*t5139;
  t5236 = t5212 + t5234;
  t5729 = -1.*t146*t1709*t1508;
  t5736 = -1.*t2029*t146*t1940;
  t5741 = t5729 + t5736;
  t5814 = t2029*t146*t1709;
  t5832 = -1.*t146*t1508*t1940;
  t5873 = t5814 + t5832;
  t5800 = t1290*t5741;
  t5957 = t2632*t5873;
  t6004 = t5800 + t5957;
  t6021 = t2632*t5741;
  t6044 = -1.*t1290*t5873;
  t6074 = t6021 + t6044;
  t6013 = -1.*t1107*t6004;
  t6086 = t2798*t6074;
  t6092 = t6013 + t6086;
  t6115 = t2798*t6004;
  t6116 = t1107*t6074;
  t6123 = t6115 + t6116;
  t3501 = t1097*t3480;
  t3813 = t3553*t3777;
  t3862 = t3501 + t3813;
  t3917 = t3553*t3480;
  t3927 = -1.*t1097*t3777;
  t3973 = t3917 + t3927;
  t5190 = t1097*t5157;
  t5335 = t3553*t5236;
  t5366 = t5190 + t5335;
  t5426 = t3553*t5157;
  t5503 = -1.*t1097*t5236;
  t5586 = t5426 + t5503;
  t6112 = t1097*t6092;
  t6135 = t3553*t6123;
  t6143 = t6112 + t6135;
  t6172 = t3553*t6092;
  t6185 = -1.*t1097*t6123;
  t6215 = t6172 + t6185;

  p_output1(0)=0. + t146*t195;
  p_output1(1)=0. - 1.*t146*t390;
  p_output1(2)=0. + t697;
  p_output1(3)=0. - 0.642788*t3862 - 0.766044*t3973;
  p_output1(4)=0. + 0.642788*t5366 + 0.766044*t5586;
  p_output1(5)=0. + 0.642788*t6143 + 0.766044*t6215;
  p_output1(6)=0. + 0.766044*t3862 - 0.642788*t3973;
  p_output1(7)=0. - 0.766044*t5366 + 0.642788*t5586;
  p_output1(8)=0. - 0.766044*t6143 + 0.642788*t6215;
}


       
void R_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
