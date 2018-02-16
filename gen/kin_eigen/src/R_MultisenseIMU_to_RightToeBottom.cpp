/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_RightToeBottom.h"

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
  double t117;
  double t119;
  double t791;
  double t403;
  double t1129;
  double t1268;
  double t1072;
  double t1574;
  double t1583;
  double t1800;
  double t1151;
  double t1292;
  double t1392;
  double t1865;
  double t1049;
  double t2490;
  double t2610;
  double t2921;
  double t1527;
  double t2113;
  double t2175;
  double t3059;
  double t995;
  double t3353;
  double t3364;
  double t3537;
  double t2209;
  double t3072;
  double t3237;
  double t3642;
  double t899;
  double t3787;
  double t3928;
  double t3930;
  double t3301;
  double t3657;
  double t3671;
  double t3982;
  double t4970;
  double t5043;
  double t5110;
  double t4760;
  double t4787;
  double t4814;
  double t5307;
  double t5311;
  double t5336;
  double t4965;
  double t5142;
  double t5157;
  double t5521;
  double t5595;
  double t5612;
  double t5241;
  double t5416;
  double t5470;
  double t5797;
  double t5891;
  double t5899;
  double t5472;
  double t5620;
  double t5655;
  double t6332;
  double t6344;
  double t6355;
  double t6252;
  double t6263;
  double t6284;
  double t6462;
  double t6489;
  double t6499;
  double t6322;
  double t6367;
  double t6422;
  double t6561;
  double t6569;
  double t6573;
  double t6430;
  double t6520;
  double t6543;
  double t3734;
  double t4002;
  double t4172;
  double t4400;
  double t4406;
  double t4460;
  double t5721;
  double t5936;
  double t5997;
  double t6027;
  double t6133;
  double t6146;
  double t6548;
  double t6586;
  double t6592;
  double t6641;
  double t6652;
  double t6674;
  t117 = Cos(var1[8]);
  t119 = Sin(var1[7]);
  t791 = Sin(var1[8]);
  t403 = Cos(var1[7]);
  t1129 = Cos(var1[9]);
  t1268 = Sin(var1[9]);
  t1072 = Cos(var1[10]);
  t1574 = t403*t1129;
  t1583 = -1.*t119*t791*t1268;
  t1800 = t1574 + t1583;
  t1151 = t1129*t119*t791;
  t1292 = t403*t1268;
  t1392 = t1151 + t1292;
  t1865 = Sin(var1[10]);
  t1049 = Cos(var1[11]);
  t2490 = t1072*t1800;
  t2610 = -1.*t1392*t1865;
  t2921 = t2490 + t2610;
  t1527 = t1072*t1392;
  t2113 = t1800*t1865;
  t2175 = t1527 + t2113;
  t3059 = Sin(var1[11]);
  t995 = Cos(var1[12]);
  t3353 = t1049*t2921;
  t3364 = -1.*t2175*t3059;
  t3537 = t3353 + t3364;
  t2209 = t1049*t2175;
  t3072 = t2921*t3059;
  t3237 = t2209 + t3072;
  t3642 = Sin(var1[12]);
  t899 = Cos(var1[13]);
  t3787 = t995*t3537;
  t3928 = -1.*t3237*t3642;
  t3930 = t3787 + t3928;
  t3301 = t995*t3237;
  t3657 = t3537*t3642;
  t3671 = t3301 + t3657;
  t3982 = Sin(var1[13]);
  t4970 = -1.*t1129*t119;
  t5043 = -1.*t403*t791*t1268;
  t5110 = t4970 + t5043;
  t4760 = t403*t1129*t791;
  t4787 = -1.*t119*t1268;
  t4814 = t4760 + t4787;
  t5307 = t1072*t5110;
  t5311 = -1.*t4814*t1865;
  t5336 = t5307 + t5311;
  t4965 = t1072*t4814;
  t5142 = t5110*t1865;
  t5157 = t4965 + t5142;
  t5521 = t1049*t5336;
  t5595 = -1.*t5157*t3059;
  t5612 = t5521 + t5595;
  t5241 = t1049*t5157;
  t5416 = t5336*t3059;
  t5470 = t5241 + t5416;
  t5797 = t995*t5612;
  t5891 = -1.*t5470*t3642;
  t5899 = t5797 + t5891;
  t5472 = t995*t5470;
  t5620 = t5612*t3642;
  t5655 = t5472 + t5620;
  t6332 = -1.*t117*t1072*t1268;
  t6344 = -1.*t117*t1129*t1865;
  t6355 = t6332 + t6344;
  t6252 = t117*t1129*t1072;
  t6263 = -1.*t117*t1268*t1865;
  t6284 = t6252 + t6263;
  t6462 = t1049*t6355;
  t6489 = -1.*t6284*t3059;
  t6499 = t6462 + t6489;
  t6322 = t1049*t6284;
  t6367 = t6355*t3059;
  t6422 = t6322 + t6367;
  t6561 = t995*t6499;
  t6569 = -1.*t6422*t3642;
  t6573 = t6561 + t6569;
  t6430 = t995*t6422;
  t6520 = t6499*t3642;
  t6543 = t6430 + t6520;
  t3734 = t899*t3671;
  t4002 = t3930*t3982;
  t4172 = t3734 + t4002;
  t4400 = t899*t3930;
  t4406 = -1.*t3671*t3982;
  t4460 = t4400 + t4406;
  t5721 = t899*t5655;
  t5936 = t5899*t3982;
  t5997 = t5721 + t5936;
  t6027 = t899*t5899;
  t6133 = -1.*t5655*t3982;
  t6146 = t6027 + t6133;
  t6548 = t899*t6543;
  t6586 = t6573*t3982;
  t6592 = t6548 + t6586;
  t6641 = t899*t6573;
  t6652 = -1.*t6543*t3982;
  t6674 = t6641 + t6652;

  p_output1(0)=0. + t117*t119;
  p_output1(1)=0. - 1.*t117*t403;
  p_output1(2)=0. + t791;
  p_output1(3)=0. - 0.642788*t4172 - 0.766044*t4460;
  p_output1(4)=0. + 0.642788*t5997 + 0.766044*t6146;
  p_output1(5)=0. + 0.642788*t6592 + 0.766044*t6674;
  p_output1(6)=0. + 0.766044*t4172 - 0.642788*t4460;
  p_output1(7)=0. - 0.766044*t5997 + 0.642788*t6146;
  p_output1(8)=0. - 0.766044*t6592 + 0.642788*t6674;
}


       
void R_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
