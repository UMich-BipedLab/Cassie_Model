/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom.h"

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
  double t17;
  double t395;
  double t535;
  double t597;
  double t992;
  double t1124;
  double t2042;
  double t2653;
  double t2694;
  double t2705;
  double t2919;
  double t3047;
  double t3169;
  double t3174;
  double t3521;
  double t3567;
  double t3619;
  double t3757;
  double t3867;
  double t3944;
  double t4087;
  double t4275;
  double t4336;
  double t4360;
  double t4573;
  double t4606;
  double t4648;
  double t4756;
  double t4758;
  double t4761;
  double t4844;
  double t5011;
  double t5015;
  double t5024;
  double t5208;
  double t5212;
  double t5232;
  double t5442;
  double t22;
  double t144;
  double t1429;
  double t1639;
  double t1734;
  double t1759;
  double t2104;
  double t2112;
  double t1014;
  double t1187;
  double t1191;
  double t5606;
  double t2508;
  double t2523;
  double t2589;
  double t2866;
  double t2978;
  double t3007;
  double t5741;
  double t5775;
  double t5779;
  double t5845;
  double t5855;
  double t5897;
  double t3292;
  double t3414;
  double t3485;
  double t4029;
  double t4224;
  double t4264;
  double t5916;
  double t5929;
  double t5953;
  double t5980;
  double t6023;
  double t6062;
  double t4510;
  double t4522;
  double t4529;
  double t4792;
  double t4878;
  double t4983;
  double t6088;
  double t6100;
  double t6113;
  double t6135;
  double t6147;
  double t6150;
  double t5067;
  double t5154;
  double t5168;
  double t6159;
  double t6162;
  double t6171;
  double t6200;
  double t6204;
  double t6211;
  double t5526;
  double t5533;
  double t5558;
  double t5623;
  double t5625;
  double t5638;
  double t6404;
  double t6458;
  double t6474;
  double t6517;
  double t6520;
  double t6522;
  double t6544;
  double t6546;
  double t6574;
  double t6612;
  double t6638;
  double t6650;
  double t6678;
  double t6681;
  double t6683;
  double t6690;
  double t6706;
  double t6724;
  double t6746;
  double t6749;
  double t6755;
  double t6775;
  double t6782;
  double t6787;
  t17 = Cos(var1[1]);
  t395 = Cos(var1[2]);
  t535 = Cos(var1[3]);
  t597 = -1.*t535;
  t992 = 1. + t597;
  t1124 = Sin(var1[3]);
  t2042 = Sin(var1[2]);
  t2653 = Cos(var1[4]);
  t2694 = -1.*t2653;
  t2705 = 1. + t2694;
  t2919 = Sin(var1[4]);
  t3047 = -1.*t17*t395*t1124;
  t3169 = -1.*t535*t17*t2042;
  t3174 = t3047 + t3169;
  t3521 = t535*t17*t395;
  t3567 = -1.*t17*t1124*t2042;
  t3619 = t3521 + t3567;
  t3757 = Cos(var1[5]);
  t3867 = -1.*t3757;
  t3944 = 1. + t3867;
  t4087 = Sin(var1[5]);
  t4275 = t2919*t3174;
  t4336 = t2653*t3619;
  t4360 = t4275 + t4336;
  t4573 = t2653*t3174;
  t4606 = -1.*t2919*t3619;
  t4648 = t4573 + t4606;
  t4756 = Cos(var1[6]);
  t4758 = -1.*t4756;
  t4761 = 1. + t4758;
  t4844 = Sin(var1[6]);
  t5011 = -1.*t4087*t4360;
  t5015 = t3757*t4648;
  t5024 = t5011 + t5015;
  t5208 = t3757*t4360;
  t5212 = t4087*t4648;
  t5232 = t5208 + t5212;
  t5442 = Cos(var1[0]);
  t22 = -1.*t17;
  t144 = 1. + t22;
  t1429 = Sin(var1[1]);
  t1639 = -1.*t395;
  t1734 = 1. + t1639;
  t1759 = -0.049*t1734;
  t2104 = -0.09*t2042;
  t2112 = 0. + t1759 + t2104;
  t1014 = -0.049*t992;
  t1187 = -0.21*t1124;
  t1191 = 0. + t1014 + t1187;
  t5606 = Sin(var1[0]);
  t2508 = -0.21*t992;
  t2523 = 0.049*t1124;
  t2589 = 0. + t2508 + t2523;
  t2866 = -0.2707*t2705;
  t2978 = 0.0016*t2919;
  t3007 = 0. + t2866 + t2978;
  t5741 = t5442*t395*t1429;
  t5775 = -1.*t5606*t2042;
  t5779 = t5741 + t5775;
  t5845 = -1.*t395*t5606;
  t5855 = -1.*t5442*t1429*t2042;
  t5897 = t5845 + t5855;
  t3292 = -0.0016*t2705;
  t3414 = -0.2707*t2919;
  t3485 = 0. + t3292 + t3414;
  t4029 = 0.0184*t3944;
  t4224 = -0.7055*t4087;
  t4264 = 0. + t4029 + t4224;
  t5916 = -1.*t1124*t5779;
  t5929 = t535*t5897;
  t5953 = t5916 + t5929;
  t5980 = t535*t5779;
  t6023 = t1124*t5897;
  t6062 = t5980 + t6023;
  t4510 = -0.7055*t3944;
  t4522 = -0.0184*t4087;
  t4529 = 0. + t4510 + t4522;
  t4792 = -1.1135*t4761;
  t4878 = 0.0216*t4844;
  t4983 = 0. + t4792 + t4878;
  t6088 = t2919*t5953;
  t6100 = t2653*t6062;
  t6113 = t6088 + t6100;
  t6135 = t2653*t5953;
  t6147 = -1.*t2919*t6062;
  t6150 = t6135 + t6147;
  t5067 = -0.0216*t4761;
  t5154 = -1.1135*t4844;
  t5168 = 0. + t5067 + t5154;
  t6159 = -1.*t4087*t6113;
  t6162 = t3757*t6150;
  t6171 = t6159 + t6162;
  t6200 = t3757*t6113;
  t6204 = t4087*t6150;
  t6211 = t6200 + t6204;
  t5526 = 0.135*t144;
  t5533 = 0.049*t1429;
  t5558 = 0. + t5526 + t5533;
  t5623 = -0.09*t1734;
  t5625 = 0.049*t2042;
  t5638 = 0. + t5623 + t5625;
  t6404 = t395*t5606*t1429;
  t6458 = t5442*t2042;
  t6474 = t6404 + t6458;
  t6517 = t5442*t395;
  t6520 = -1.*t5606*t1429*t2042;
  t6522 = t6517 + t6520;
  t6544 = -1.*t1124*t6474;
  t6546 = t535*t6522;
  t6574 = t6544 + t6546;
  t6612 = t535*t6474;
  t6638 = t1124*t6522;
  t6650 = t6612 + t6638;
  t6678 = t2919*t6574;
  t6681 = t2653*t6650;
  t6683 = t6678 + t6681;
  t6690 = t2653*t6574;
  t6706 = -1.*t2919*t6650;
  t6724 = t6690 + t6706;
  t6746 = -1.*t4087*t6683;
  t6749 = t3757*t6724;
  t6755 = t6746 + t6749;
  t6775 = t3757*t6683;
  t6782 = t4087*t6724;
  t6787 = t6775 + t6782;

  p_output1(0)=-0.03155 + 0.004500000000000004*t1429 - 0.049*t144 + t17*t2112 - 1.*t17*t2042*t2589 + t3007*t3174 + t3485*t3619 + t1191*t17*t395 + t4264*t4360 + t4529*t4648 + t4983*t5024 + t5168*t5232 + 0.0306*(t4844*t5024 + t4756*t5232) - 1.1312*(t4756*t5024 - 1.*t4844*t5232);
  p_output1(1)=0. + 0.135*(1. - 1.*t5442) + 0.1305*t17*t5442 + t1429*t2112*t5442 + t5442*t5558 - 1.*t5606*t5638 + t1191*t5779 + t2589*t5897 + t3007*t5953 + t3485*t6062 + t4264*t6113 + t4529*t6150 + t4983*t6171 + t5168*t6211 + 0.0306*(t4844*t6171 + t4756*t6211) - 1.1312*(t4756*t6171 - 1.*t4844*t6211);
  p_output1(2)=0.07996 - 0.135*t5606 + 0.1305*t17*t5606 + t1429*t2112*t5606 + t5558*t5606 + t5442*t5638 + t1191*t6474 + t2589*t6522 + t3007*t6574 + t3485*t6650 + t4264*t6683 + t4529*t6724 + t4983*t6755 + t5168*t6787 + 0.0306*(t4844*t6755 + t4756*t6787) - 1.1312*(t4756*t6755 - 1.*t4844*t6787);
}


       
void p_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
