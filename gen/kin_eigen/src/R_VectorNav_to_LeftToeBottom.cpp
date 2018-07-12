/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom.h"

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
  double t559;
  double t1811;
  double t1687;
  double t1736;
  double t1916;
  double t2100;
  double t1756;
  double t1933;
  double t2036;
  double t1684;
  double t2104;
  double t2117;
  double t2169;
  double t2508;
  double t2042;
  double t2416;
  double t2485;
  double t1432;
  double t2523;
  double t2590;
  double t2629;
  double t2740;
  double t2507;
  double t2653;
  double t2663;
  double t1342;
  double t2815;
  double t2919;
  double t2942;
  double t493;
  double t180;
  double t882;
  double t3619;
  double t3620;
  double t3622;
  double t3667;
  double t3684;
  double t3754;
  double t3651;
  double t3757;
  double t3775;
  double t3815;
  double t3867;
  double t3870;
  double t3793;
  double t3899;
  double t3931;
  double t4087;
  double t4193;
  double t4224;
  double t3986;
  double t4264;
  double t4275;
  double t4336;
  double t4360;
  double t4432;
  double t4779;
  double t4792;
  double t4796;
  double t4878;
  double t4886;
  double t4897;
  double t4804;
  double t4983;
  double t4989;
  double t5024;
  double t5025;
  double t5034;
  double t5011;
  double t5067;
  double t5079;
  double t5154;
  double t5159;
  double t5168;
  double t5096;
  double t5183;
  double t5208;
  double t5232;
  double t5251;
  double t5259;
  double t2694;
  double t3023;
  double t3178;
  double t3284;
  double t3337;
  double t3414;
  double t4323;
  double t4571;
  double t4606;
  double t4655;
  double t4656;
  double t4658;
  double t5212;
  double t5297;
  double t5397;
  double t5413;
  double t5421;
  double t5423;
  t559 = Cos(var1[1]);
  t1811 = Cos(var1[3]);
  t1687 = Cos(var1[2]);
  t1736 = Sin(var1[3]);
  t1916 = Sin(var1[2]);
  t2100 = Cos(var1[4]);
  t1756 = -1.*t559*t1687*t1736;
  t1933 = -1.*t1811*t559*t1916;
  t2036 = t1756 + t1933;
  t1684 = Sin(var1[4]);
  t2104 = t1811*t559*t1687;
  t2117 = -1.*t559*t1736*t1916;
  t2169 = t2104 + t2117;
  t2508 = Cos(var1[5]);
  t2042 = t1684*t2036;
  t2416 = t2100*t2169;
  t2485 = t2042 + t2416;
  t1432 = Sin(var1[5]);
  t2523 = t2100*t2036;
  t2590 = -1.*t1684*t2169;
  t2629 = t2523 + t2590;
  t2740 = Cos(var1[6]);
  t2507 = -1.*t1432*t2485;
  t2653 = t2508*t2629;
  t2663 = t2507 + t2653;
  t1342 = Sin(var1[6]);
  t2815 = t2508*t2485;
  t2919 = t1432*t2629;
  t2942 = t2815 + t2919;
  t493 = Cos(var1[0]);
  t180 = Sin(var1[1]);
  t882 = Sin(var1[0]);
  t3619 = t493*t1687*t180;
  t3620 = -1.*t882*t1916;
  t3622 = t3619 + t3620;
  t3667 = -1.*t1687*t882;
  t3684 = -1.*t493*t180*t1916;
  t3754 = t3667 + t3684;
  t3651 = -1.*t1736*t3622;
  t3757 = t1811*t3754;
  t3775 = t3651 + t3757;
  t3815 = t1811*t3622;
  t3867 = t1736*t3754;
  t3870 = t3815 + t3867;
  t3793 = t1684*t3775;
  t3899 = t2100*t3870;
  t3931 = t3793 + t3899;
  t4087 = t2100*t3775;
  t4193 = -1.*t1684*t3870;
  t4224 = t4087 + t4193;
  t3986 = -1.*t1432*t3931;
  t4264 = t2508*t4224;
  t4275 = t3986 + t4264;
  t4336 = t2508*t3931;
  t4360 = t1432*t4224;
  t4432 = t4336 + t4360;
  t4779 = t1687*t882*t180;
  t4792 = t493*t1916;
  t4796 = t4779 + t4792;
  t4878 = t493*t1687;
  t4886 = -1.*t882*t180*t1916;
  t4897 = t4878 + t4886;
  t4804 = -1.*t1736*t4796;
  t4983 = t1811*t4897;
  t4989 = t4804 + t4983;
  t5024 = t1811*t4796;
  t5025 = t1736*t4897;
  t5034 = t5024 + t5025;
  t5011 = t1684*t4989;
  t5067 = t2100*t5034;
  t5079 = t5011 + t5067;
  t5154 = t2100*t4989;
  t5159 = -1.*t1684*t5034;
  t5168 = t5154 + t5159;
  t5096 = -1.*t1432*t5079;
  t5183 = t2508*t5168;
  t5208 = t5096 + t5183;
  t5232 = t2508*t5079;
  t5251 = t1432*t5168;
  t5259 = t5232 + t5251;
  t2694 = t1342*t2663;
  t3023 = t2740*t2942;
  t3178 = t2694 + t3023;
  t3284 = t2740*t2663;
  t3337 = -1.*t1342*t2942;
  t3414 = t3284 + t3337;
  t4323 = t1342*t4275;
  t4571 = t2740*t4432;
  t4606 = t4323 + t4571;
  t4655 = t2740*t4275;
  t4656 = -1.*t1342*t4432;
  t4658 = t4655 + t4656;
  t5212 = t1342*t5208;
  t5297 = t2740*t5259;
  t5397 = t5212 + t5297;
  t5413 = t2740*t5208;
  t5421 = -1.*t1342*t5259;
  t5423 = t5413 + t5421;

  p_output1(0)=0. + t180;
  p_output1(1)=0. - 1.*t493*t559;
  p_output1(2)=0. - 1.*t559*t882;
  p_output1(3)=0. + 0.642788*t3178 + 0.766044*t3414;
  p_output1(4)=0. + 0.642788*t4606 + 0.766044*t4658;
  p_output1(5)=0. + 0.642788*t5397 + 0.766044*t5423;
  p_output1(6)=0. - 0.766044*t3178 + 0.642788*t3414;
  p_output1(7)=0. - 0.766044*t4606 + 0.642788*t4658;
  p_output1(8)=0. - 0.766044*t5397 + 0.642788*t5423;
}


       
void R_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
