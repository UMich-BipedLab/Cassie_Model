/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t190;
  double t260;
  double t694;
  double t516;
  double t1109;
  double t1529;
  double t1023;
  double t1854;
  double t1888;
  double t2131;
  double t1236;
  double t1590;
  double t1694;
  double t2222;
  double t956;
  double t2427;
  double t2574;
  double t2624;
  double t1788;
  double t2332;
  double t2349;
  double t2665;
  double t785;
  double t2919;
  double t2967;
  double t2990;
  double t2390;
  double t2764;
  double t2840;
  double t3100;
  double t749;
  double t3264;
  double t3343;
  double t3345;
  double t2901;
  double t3207;
  double t3246;
  double t3368;
  double t3744;
  double t3803;
  double t3809;
  double t3622;
  double t3666;
  double t3669;
  double t3987;
  double t4000;
  double t4049;
  double t3726;
  double t3922;
  double t3942;
  double t4191;
  double t4217;
  double t4222;
  double t3981;
  double t4125;
  double t4133;
  double t4408;
  double t4495;
  double t4500;
  double t4154;
  double t4228;
  double t4309;
  double t4856;
  double t4859;
  double t4864;
  double t4783;
  double t4793;
  double t4832;
  double t4957;
  double t4968;
  double t4975;
  double t4853;
  double t4934;
  double t4946;
  double t5053;
  double t5056;
  double t5072;
  double t4949;
  double t4983;
  double t5036;
  double t3252;
  double t3434;
  double t3509;
  double t3518;
  double t3531;
  double t3535;
  double t4400;
  double t4540;
  double t4545;
  double t4687;
  double t4688;
  double t4772;
  double t5043;
  double t5086;
  double t5087;
  double t5102;
  double t5103;
  double t5137;
  t190 = Cos(var1[8]);
  t260 = Sin(var1[7]);
  t694 = Sin(var1[8]);
  t516 = Cos(var1[7]);
  t1109 = Cos(var1[9]);
  t1529 = Sin(var1[9]);
  t1023 = Cos(var1[10]);
  t1854 = t516*t1109;
  t1888 = -1.*t260*t694*t1529;
  t2131 = t1854 + t1888;
  t1236 = t1109*t260*t694;
  t1590 = t516*t1529;
  t1694 = t1236 + t1590;
  t2222 = Sin(var1[10]);
  t956 = Cos(var1[11]);
  t2427 = t1023*t2131;
  t2574 = -1.*t1694*t2222;
  t2624 = t2427 + t2574;
  t1788 = t1023*t1694;
  t2332 = t2131*t2222;
  t2349 = t1788 + t2332;
  t2665 = Sin(var1[11]);
  t785 = Cos(var1[12]);
  t2919 = t956*t2624;
  t2967 = -1.*t2349*t2665;
  t2990 = t2919 + t2967;
  t2390 = t956*t2349;
  t2764 = t2624*t2665;
  t2840 = t2390 + t2764;
  t3100 = Sin(var1[12]);
  t749 = Cos(var1[13]);
  t3264 = t785*t2990;
  t3343 = -1.*t2840*t3100;
  t3345 = t3264 + t3343;
  t2901 = t785*t2840;
  t3207 = t2990*t3100;
  t3246 = t2901 + t3207;
  t3368 = Sin(var1[13]);
  t3744 = -1.*t1109*t260;
  t3803 = -1.*t516*t694*t1529;
  t3809 = t3744 + t3803;
  t3622 = t516*t1109*t694;
  t3666 = -1.*t260*t1529;
  t3669 = t3622 + t3666;
  t3987 = t1023*t3809;
  t4000 = -1.*t3669*t2222;
  t4049 = t3987 + t4000;
  t3726 = t1023*t3669;
  t3922 = t3809*t2222;
  t3942 = t3726 + t3922;
  t4191 = t956*t4049;
  t4217 = -1.*t3942*t2665;
  t4222 = t4191 + t4217;
  t3981 = t956*t3942;
  t4125 = t4049*t2665;
  t4133 = t3981 + t4125;
  t4408 = t785*t4222;
  t4495 = -1.*t4133*t3100;
  t4500 = t4408 + t4495;
  t4154 = t785*t4133;
  t4228 = t4222*t3100;
  t4309 = t4154 + t4228;
  t4856 = -1.*t190*t1023*t1529;
  t4859 = -1.*t190*t1109*t2222;
  t4864 = t4856 + t4859;
  t4783 = t190*t1109*t1023;
  t4793 = -1.*t190*t1529*t2222;
  t4832 = t4783 + t4793;
  t4957 = t956*t4864;
  t4968 = -1.*t4832*t2665;
  t4975 = t4957 + t4968;
  t4853 = t956*t4832;
  t4934 = t4864*t2665;
  t4946 = t4853 + t4934;
  t5053 = t785*t4975;
  t5056 = -1.*t4946*t3100;
  t5072 = t5053 + t5056;
  t4949 = t785*t4946;
  t4983 = t4975*t3100;
  t5036 = t4949 + t4983;
  t3252 = t749*t3246;
  t3434 = t3345*t3368;
  t3509 = t3252 + t3434;
  t3518 = t749*t3345;
  t3531 = -1.*t3246*t3368;
  t3535 = t3518 + t3531;
  t4400 = t749*t4309;
  t4540 = t4500*t3368;
  t4545 = t4400 + t4540;
  t4687 = t749*t4500;
  t4688 = -1.*t4309*t3368;
  t4772 = t4687 + t4688;
  t5043 = t749*t5036;
  t5086 = t5072*t3368;
  t5087 = t5043 + t5086;
  t5102 = t749*t5072;
  t5103 = -1.*t5036*t3368;
  t5137 = t5102 + t5103;
  p_output1[0]=0. + t190*t260;
  p_output1[1]=0. - 1.*t190*t516;
  p_output1[2]=0. + t694;
  p_output1[3]=0. - 0.642788*t3509 - 0.766044*t3535;
  p_output1[4]=0. + 0.642788*t4545 + 0.766044*t4772;
  p_output1[5]=0. + 0.642788*t5087 + 0.766044*t5137;
  p_output1[6]=0. + 0.766044*t3509 - 0.642788*t3535;
  p_output1[7]=0. - 0.766044*t4545 + 0.642788*t4772;
  p_output1[8]=0. - 0.766044*t5087 + 0.642788*t5137;
}



void R_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
