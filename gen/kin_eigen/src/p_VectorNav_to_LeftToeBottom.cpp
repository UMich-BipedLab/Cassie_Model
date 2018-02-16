/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:53 GMT-05:00
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
  double t152;
  double t442;
  double t483;
  double t681;
  double t706;
  double t954;
  double t1653;
  double t1909;
  double t1972;
  double t1993;
  double t2062;
  double t2398;
  double t2465;
  double t2555;
  double t2732;
  double t2787;
  double t2807;
  double t2982;
  double t3199;
  double t3342;
  double t3432;
  double t3491;
  double t3505;
  double t3520;
  double t3807;
  double t3899;
  double t3996;
  double t4104;
  double t4109;
  double t4120;
  double t4273;
  double t4394;
  double t4429;
  double t4464;
  double t4730;
  double t4895;
  double t4910;
  double t5251;
  double t189;
  double t287;
  double t1120;
  double t1586;
  double t1614;
  double t1647;
  double t1707;
  double t1730;
  double t798;
  double t969;
  double t988;
  double t5427;
  double t1794;
  double t1816;
  double t1818;
  double t1995;
  double t2184;
  double t2397;
  double t5514;
  double t5522;
  double t5545;
  double t5588;
  double t5627;
  double t5660;
  double t2660;
  double t2674;
  double t2688;
  double t3344;
  double t3447;
  double t3450;
  double t5755;
  double t5779;
  double t5785;
  double t5807;
  double t5825;
  double t5843;
  double t3563;
  double t3716;
  double t3732;
  double t4142;
  double t4312;
  double t4375;
  double t5869;
  double t5873;
  double t5900;
  double t5932;
  double t5936;
  double t5937;
  double t4537;
  double t4553;
  double t4692;
  double t5959;
  double t5960;
  double t5961;
  double t5981;
  double t5982;
  double t5987;
  double t5365;
  double t5369;
  double t5382;
  double t5428;
  double t5457;
  double t5480;
  double t6112;
  double t6113;
  double t6125;
  double t6138;
  double t6142;
  double t6143;
  double t6167;
  double t6173;
  double t6175;
  double t6193;
  double t6197;
  double t6199;
  double t6214;
  double t6219;
  double t6220;
  double t6223;
  double t6224;
  double t6226;
  double t6246;
  double t6247;
  double t6260;
  double t6267;
  double t6268;
  double t6280;
  t152 = Cos(var1[1]);
  t442 = Cos(var1[2]);
  t483 = Cos(var1[3]);
  t681 = -1.*t483;
  t706 = 1. + t681;
  t954 = Sin(var1[3]);
  t1653 = Sin(var1[2]);
  t1909 = Cos(var1[4]);
  t1972 = -1.*t1909;
  t1993 = 1. + t1972;
  t2062 = Sin(var1[4]);
  t2398 = -1.*t152*t442*t954;
  t2465 = -1.*t483*t152*t1653;
  t2555 = t2398 + t2465;
  t2732 = t483*t152*t442;
  t2787 = -1.*t152*t954*t1653;
  t2807 = t2732 + t2787;
  t2982 = Cos(var1[5]);
  t3199 = -1.*t2982;
  t3342 = 1. + t3199;
  t3432 = Sin(var1[5]);
  t3491 = t2062*t2555;
  t3505 = t1909*t2807;
  t3520 = t3491 + t3505;
  t3807 = t1909*t2555;
  t3899 = -1.*t2062*t2807;
  t3996 = t3807 + t3899;
  t4104 = Cos(var1[6]);
  t4109 = -1.*t4104;
  t4120 = 1. + t4109;
  t4273 = Sin(var1[6]);
  t4394 = -1.*t3432*t3520;
  t4429 = t2982*t3996;
  t4464 = t4394 + t4429;
  t4730 = t2982*t3520;
  t4895 = t3432*t3996;
  t4910 = t4730 + t4895;
  t5251 = Cos(var1[0]);
  t189 = -1.*t152;
  t287 = 1. + t189;
  t1120 = Sin(var1[1]);
  t1586 = -1.*t442;
  t1614 = 1. + t1586;
  t1647 = -0.049*t1614;
  t1707 = -0.09*t1653;
  t1730 = 0. + t1647 + t1707;
  t798 = -0.049*t706;
  t969 = -0.21*t954;
  t988 = 0. + t798 + t969;
  t5427 = Sin(var1[0]);
  t1794 = -0.21*t706;
  t1816 = 0.049*t954;
  t1818 = 0. + t1794 + t1816;
  t1995 = -0.2707*t1993;
  t2184 = 0.0016*t2062;
  t2397 = 0. + t1995 + t2184;
  t5514 = t5251*t442*t1120;
  t5522 = -1.*t5427*t1653;
  t5545 = t5514 + t5522;
  t5588 = -1.*t442*t5427;
  t5627 = -1.*t5251*t1120*t1653;
  t5660 = t5588 + t5627;
  t2660 = -0.0016*t1993;
  t2674 = -0.2707*t2062;
  t2688 = 0. + t2660 + t2674;
  t3344 = 0.0184*t3342;
  t3447 = -0.7055*t3432;
  t3450 = 0. + t3344 + t3447;
  t5755 = -1.*t954*t5545;
  t5779 = t483*t5660;
  t5785 = t5755 + t5779;
  t5807 = t483*t5545;
  t5825 = t954*t5660;
  t5843 = t5807 + t5825;
  t3563 = -0.7055*t3342;
  t3716 = -0.0184*t3432;
  t3732 = 0. + t3563 + t3716;
  t4142 = -1.1135*t4120;
  t4312 = 0.0216*t4273;
  t4375 = 0. + t4142 + t4312;
  t5869 = t2062*t5785;
  t5873 = t1909*t5843;
  t5900 = t5869 + t5873;
  t5932 = t1909*t5785;
  t5936 = -1.*t2062*t5843;
  t5937 = t5932 + t5936;
  t4537 = -0.0216*t4120;
  t4553 = -1.1135*t4273;
  t4692 = 0. + t4537 + t4553;
  t5959 = -1.*t3432*t5900;
  t5960 = t2982*t5937;
  t5961 = t5959 + t5960;
  t5981 = t2982*t5900;
  t5982 = t3432*t5937;
  t5987 = t5981 + t5982;
  t5365 = 0.135*t287;
  t5369 = 0.049*t1120;
  t5382 = 0. + t5365 + t5369;
  t5428 = -0.09*t1614;
  t5457 = 0.049*t1653;
  t5480 = 0. + t5428 + t5457;
  t6112 = t442*t5427*t1120;
  t6113 = t5251*t1653;
  t6125 = t6112 + t6113;
  t6138 = t5251*t442;
  t6142 = -1.*t5427*t1120*t1653;
  t6143 = t6138 + t6142;
  t6167 = -1.*t954*t6125;
  t6173 = t483*t6143;
  t6175 = t6167 + t6173;
  t6193 = t483*t6125;
  t6197 = t954*t6143;
  t6199 = t6193 + t6197;
  t6214 = t2062*t6175;
  t6219 = t1909*t6199;
  t6220 = t6214 + t6219;
  t6223 = t1909*t6175;
  t6224 = -1.*t2062*t6199;
  t6226 = t6223 + t6224;
  t6246 = -1.*t3432*t6220;
  t6247 = t2982*t6226;
  t6260 = t6246 + t6247;
  t6267 = t2982*t6220;
  t6268 = t3432*t6226;
  t6280 = t6267 + t6268;

  p_output1(0)=-0.03155 + 0.004500000000000004*t1120 + t152*t1730 - 1.*t152*t1653*t1818 + t2397*t2555 + t2688*t2807 - 0.049*t287 + t3450*t3520 + t3732*t3996 + t4375*t4464 + t4692*t4910 + 0.0306*(t4273*t4464 + t4104*t4910) - 1.1312*(t4104*t4464 - 1.*t4273*t4910) + t152*t442*t988;
  p_output1(1)=0. - 0.135*(1. - 1.*t5251) - 0.1305*t152*t5251 - 1.*t1120*t1730*t5251 - 1.*t5251*t5382 + t5427*t5480 - 1.*t1818*t5660 - 1.*t2397*t5785 - 1.*t2688*t5843 - 1.*t3450*t5900 - 1.*t3732*t5937 - 1.*t4375*t5961 - 1.*t4692*t5987 - 0.0306*(t4273*t5961 + t4104*t5987) + 1.1312*(t4104*t5961 - 1.*t4273*t5987) - 1.*t5545*t988;
  p_output1(2)=-0.07996 + 0.135*t5427 - 0.1305*t152*t5427 - 1.*t1120*t1730*t5427 - 1.*t5382*t5427 - 1.*t5251*t5480 - 1.*t1818*t6143 - 1.*t2397*t6175 - 1.*t2688*t6199 - 1.*t3450*t6220 - 1.*t3732*t6226 - 1.*t4375*t6260 - 1.*t4692*t6280 - 0.0306*(t4273*t6260 + t4104*t6280) + 1.1312*(t4104*t6260 - 1.*t4273*t6280) - 1.*t6125*t988;
}


       
void p_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
