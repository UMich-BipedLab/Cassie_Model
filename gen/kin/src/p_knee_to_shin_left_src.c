/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_left_src.h"

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
  double t1965;
  double t1891;
  double t2374;
  double t1929;
  double t2568;
  double t239;
  double t1933;
  double t2606;
  double t2774;
  double t3320;
  double t3404;
  double t3420;
  double t3599;
  double t4239;
  double t4262;
  double t4291;
  double t4512;
  double t3750;
  double t3884;
  double t3918;
  double t4973;
  double t5519;
  double t5539;
  double t5547;
  double t5581;
  double t5393;
  double t5491;
  double t5500;
  double t5599;
  double t5604;
  double t5618;
  double t5720;
  double t5723;
  double t5739;
  double t5756;
  double t5786;
  double t5799;
  double t5838;
  double t5918;
  double t5924;
  double t5937;
  double t5944;
  double t5997;
  double t6002;
  double t6039;
  double t6126;
  double t6143;
  double t6151;
  double t6178;
  double t6190;
  double t6204;
  double t288;
  double t707;
  double t1685;
  double t1801;
  double t3625;
  double t3628;
  double t6287;
  double t6292;
  double t6302;
  double t6308;
  double t6311;
  double t6360;
  double t4441;
  double t4763;
  double t4845;
  double t5048;
  double t5064;
  double t5116;
  double t6399;
  double t6401;
  double t6405;
  double t5572;
  double t5590;
  double t5595;
  double t5620;
  double t5701;
  double t5715;
  double t5754;
  double t5763;
  double t5775;
  double t6450;
  double t6457;
  double t6458;
  double t6496;
  double t6514;
  double t6521;
  double t5905;
  double t5910;
  double t5911;
  double t6020;
  double t6044;
  double t6101;
  double t6571;
  double t6576;
  double t6577;
  double t6583;
  double t6616;
  double t6617;
  double t6161;
  double t6166;
  double t6175;
  double t6619;
  double t6627;
  double t6628;
  double t6633;
  double t6634;
  double t6640;
  double t6772;
  double t6773;
  double t6776;
  double t6833;
  double t6837;
  double t6839;
  double t6859;
  double t6865;
  double t6866;
  double t6882;
  double t6893;
  double t6905;
  double t6921;
  double t6926;
  double t6927;
  double t6939;
  double t6940;
  double t6942;
  double t6946;
  double t6949;
  double t6950;
  t1965 = Cos(var1[3]);
  t1891 = Cos(var1[5]);
  t2374 = Sin(var1[4]);
  t1929 = Sin(var1[3]);
  t2568 = Sin(var1[5]);
  t239 = Cos(var1[6]);
  t1933 = -1.*t1891*t1929;
  t2606 = t1965*t2374*t2568;
  t2774 = t1933 + t2606;
  t3320 = t1965*t1891*t2374;
  t3404 = t1929*t2568;
  t3420 = t3320 + t3404;
  t3599 = Sin(var1[6]);
  t4239 = Cos(var1[7]);
  t4262 = -1.*t4239;
  t4291 = 1. + t4262;
  t4512 = Sin(var1[7]);
  t3750 = t239*t2774;
  t3884 = t3420*t3599;
  t3918 = t3750 + t3884;
  t4973 = Cos(var1[4]);
  t5519 = Cos(var1[8]);
  t5539 = -1.*t5519;
  t5547 = 1. + t5539;
  t5581 = Sin(var1[8]);
  t5393 = t1965*t4973*t4239;
  t5491 = t3918*t4512;
  t5500 = t5393 + t5491;
  t5599 = t239*t3420;
  t5604 = -1.*t2774*t3599;
  t5618 = t5599 + t5604;
  t5720 = Cos(var1[9]);
  t5723 = -1.*t5720;
  t5739 = 1. + t5723;
  t5756 = Sin(var1[9]);
  t5786 = t5519*t5500;
  t5799 = t5618*t5581;
  t5838 = t5786 + t5799;
  t5918 = t5519*t5618;
  t5924 = -1.*t5500*t5581;
  t5937 = t5918 + t5924;
  t5944 = Cos(var1[10]);
  t5997 = -1.*t5944;
  t6002 = 1. + t5997;
  t6039 = Sin(var1[10]);
  t6126 = -1.*t5756*t5838;
  t6143 = t5720*t5937;
  t6151 = t6126 + t6143;
  t6178 = t5720*t5838;
  t6190 = t5756*t5937;
  t6204 = t6178 + t6190;
  t288 = -1.*t239;
  t707 = 1. + t288;
  t1685 = 0.135*t707;
  t1801 = 0. + t1685;
  t3625 = -0.135*t3599;
  t3628 = 0. + t3625;
  t6287 = t1965*t1891;
  t6292 = t1929*t2374*t2568;
  t6302 = t6287 + t6292;
  t6308 = t1891*t1929*t2374;
  t6311 = -1.*t1965*t2568;
  t6360 = t6308 + t6311;
  t4441 = 0.135*t4291;
  t4763 = 0.049*t4512;
  t4845 = 0. + t4441 + t4763;
  t5048 = -0.049*t4291;
  t5064 = 0.135*t4512;
  t5116 = 0. + t5048 + t5064;
  t6399 = t239*t6302;
  t6401 = t6360*t3599;
  t6405 = t6399 + t6401;
  t5572 = -0.049*t5547;
  t5590 = -0.09*t5581;
  t5595 = 0. + t5572 + t5590;
  t5620 = -0.09*t5547;
  t5701 = 0.049*t5581;
  t5715 = 0. + t5620 + t5701;
  t5754 = -0.049*t5739;
  t5763 = -0.21*t5756;
  t5775 = 0. + t5754 + t5763;
  t6450 = t4973*t4239*t1929;
  t6457 = t6405*t4512;
  t6458 = t6450 + t6457;
  t6496 = t239*t6360;
  t6514 = -1.*t6302*t3599;
  t6521 = t6496 + t6514;
  t5905 = -0.21*t5739;
  t5910 = 0.049*t5756;
  t5911 = 0. + t5905 + t5910;
  t6020 = -0.2707*t6002;
  t6044 = 0.0016*t6039;
  t6101 = 0. + t6020 + t6044;
  t6571 = t5519*t6458;
  t6576 = t6521*t5581;
  t6577 = t6571 + t6576;
  t6583 = t5519*t6521;
  t6616 = -1.*t6458*t5581;
  t6617 = t6583 + t6616;
  t6161 = -0.0016*t6002;
  t6166 = -0.2707*t6039;
  t6175 = 0. + t6161 + t6166;
  t6619 = -1.*t5756*t6577;
  t6627 = t5720*t6617;
  t6628 = t6619 + t6627;
  t6633 = t5720*t6577;
  t6634 = t5756*t6617;
  t6640 = t6633 + t6634;
  t6772 = t4973*t239*t2568;
  t6773 = t4973*t1891*t3599;
  t6776 = t6772 + t6773;
  t6833 = -1.*t4239*t2374;
  t6837 = t6776*t4512;
  t6839 = t6833 + t6837;
  t6859 = t4973*t1891*t239;
  t6865 = -1.*t4973*t2568*t3599;
  t6866 = t6859 + t6865;
  t6882 = t5519*t6839;
  t6893 = t6866*t5581;
  t6905 = t6882 + t6893;
  t6921 = t5519*t6866;
  t6926 = -1.*t6839*t5581;
  t6927 = t6921 + t6926;
  t6939 = -1.*t5756*t6905;
  t6940 = t5720*t6927;
  t6942 = t6939 + t6940;
  t6946 = t5720*t6905;
  t6949 = t5756*t6927;
  t6950 = t6946 + t6949;
  p_output1[0]=0. + t1801*t2774 + t3420*t3628 + t3918*t4845 + 0.1305*(t3918*t4239 - 1.*t1965*t4512*t4973) + t1965*t4973*t5116 + t5500*t5595 + t5618*t5715 + t5775*t5838 + t5911*t5937 + t6101*t6151 + t6175*t6204 - 0.0016*(t6039*t6151 + t5944*t6204) - 0.2707*(t5944*t6151 - 1.*t6039*t6204) + var1[0];
  p_output1[1]=0. + t1929*t4973*t5116 + t1801*t6302 + t3628*t6360 + t4845*t6405 + 0.1305*(-1.*t1929*t4512*t4973 + t4239*t6405) + t5595*t6458 + t5715*t6521 + t5775*t6577 + t5911*t6617 + t6101*t6628 + t6175*t6640 - 0.0016*(t6039*t6628 + t5944*t6640) - 0.2707*(t5944*t6628 - 1.*t6039*t6640) + var1[1];
  p_output1[2]=0. + t1801*t2568*t4973 + t1891*t3628*t4973 - 1.*t2374*t5116 + t4845*t6776 + 0.1305*(t2374*t4512 + t4239*t6776) + t5595*t6839 + t5715*t6866 + t5775*t6905 + t5911*t6927 + t6101*t6942 + t6175*t6950 - 0.0016*(t6039*t6942 + t5944*t6950) - 0.2707*(t5944*t6942 - 1.*t6039*t6950) + var1[2];
}



void p_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
