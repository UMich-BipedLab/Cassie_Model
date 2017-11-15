/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t357;
  double t417;
  double t1412;
  double t738;
  double t1883;
  double t1912;
  double t2058;
  double t1898;
  double t1934;
  double t2002;
  double t1877;
  double t2070;
  double t2081;
  double t2096;
  double t2255;
  double t2046;
  double t2134;
  double t2186;
  double t1806;
  double t2298;
  double t2306;
  double t2329;
  double t2462;
  double t2188;
  double t2339;
  double t2446;
  double t1727;
  double t2463;
  double t2466;
  double t2485;
  double t2554;
  double t2457;
  double t2523;
  double t2537;
  double t1719;
  double t2555;
  double t2563;
  double t2784;
  double t3042;
  double t3070;
  double t3076;
  double t3149;
  double t3171;
  double t3207;
  double t3097;
  double t3314;
  double t3350;
  double t3374;
  double t3405;
  double t3427;
  double t3356;
  double t3445;
  double t3456;
  double t3480;
  double t3499;
  double t3519;
  double t3463;
  double t3633;
  double t3667;
  double t3756;
  double t3762;
  double t3766;
  double t4000;
  double t4015;
  double t4048;
  double t4056;
  double t4058;
  double t4064;
  double t4052;
  double t4140;
  double t4141;
  double t4152;
  double t4157;
  double t4179;
  double t4149;
  double t4241;
  double t4269;
  double t4302;
  double t4346;
  double t4368;
  double t2540;
  double t2795;
  double t2798;
  double t2819;
  double t2883;
  double t2973;
  double t3713;
  double t3784;
  double t3790;
  double t3813;
  double t3824;
  double t3903;
  double t4292;
  double t4422;
  double t4423;
  double t4460;
  double t4567;
  double t4583;
  t357 = Cos(var1[1]);
  t417 = Sin(var1[0]);
  t1412 = Sin(var1[1]);
  t738 = Cos(var1[0]);
  t1883 = Cos(var1[2]);
  t1912 = Sin(var1[2]);
  t2058 = Cos(var1[3]);
  t1898 = t1883*t417*t1412;
  t1934 = t738*t1912;
  t2002 = t1898 + t1934;
  t1877 = Sin(var1[3]);
  t2070 = t738*t1883;
  t2081 = -1.*t417*t1412*t1912;
  t2096 = t2070 + t2081;
  t2255 = Cos(var1[4]);
  t2046 = -1.*t1877*t2002;
  t2134 = t2058*t2096;
  t2186 = t2046 + t2134;
  t1806 = Sin(var1[4]);
  t2298 = t2058*t2002;
  t2306 = t1877*t2096;
  t2329 = t2298 + t2306;
  t2462 = Cos(var1[5]);
  t2188 = t1806*t2186;
  t2339 = t2255*t2329;
  t2446 = t2188 + t2339;
  t1727 = Sin(var1[5]);
  t2463 = t2255*t2186;
  t2466 = -1.*t1806*t2329;
  t2485 = t2463 + t2466;
  t2554 = Cos(var1[6]);
  t2457 = -1.*t1727*t2446;
  t2523 = t2462*t2485;
  t2537 = t2457 + t2523;
  t1719 = Sin(var1[6]);
  t2555 = t2462*t2446;
  t2563 = t1727*t2485;
  t2784 = t2555 + t2563;
  t3042 = t738*t1883*t1412;
  t3070 = -1.*t417*t1912;
  t3076 = t3042 + t3070;
  t3149 = -1.*t1883*t417;
  t3171 = -1.*t738*t1412*t1912;
  t3207 = t3149 + t3171;
  t3097 = -1.*t1877*t3076;
  t3314 = t2058*t3207;
  t3350 = t3097 + t3314;
  t3374 = t2058*t3076;
  t3405 = t1877*t3207;
  t3427 = t3374 + t3405;
  t3356 = t1806*t3350;
  t3445 = t2255*t3427;
  t3456 = t3356 + t3445;
  t3480 = t2255*t3350;
  t3499 = -1.*t1806*t3427;
  t3519 = t3480 + t3499;
  t3463 = -1.*t1727*t3456;
  t3633 = t2462*t3519;
  t3667 = t3463 + t3633;
  t3756 = t2462*t3456;
  t3762 = t1727*t3519;
  t3766 = t3756 + t3762;
  t4000 = -1.*t357*t1883*t1877;
  t4015 = -1.*t2058*t357*t1912;
  t4048 = t4000 + t4015;
  t4056 = t2058*t357*t1883;
  t4058 = -1.*t357*t1877*t1912;
  t4064 = t4056 + t4058;
  t4052 = t1806*t4048;
  t4140 = t2255*t4064;
  t4141 = t4052 + t4140;
  t4152 = t2255*t4048;
  t4157 = -1.*t1806*t4064;
  t4179 = t4152 + t4157;
  t4149 = -1.*t1727*t4141;
  t4241 = t2462*t4179;
  t4269 = t4149 + t4241;
  t4302 = t2462*t4141;
  t4346 = t1727*t4179;
  t4368 = t4302 + t4346;
  t2540 = t1719*t2537;
  t2795 = t2554*t2784;
  t2798 = t2540 + t2795;
  t2819 = t2554*t2537;
  t2883 = -1.*t1719*t2784;
  t2973 = t2819 + t2883;
  t3713 = t1719*t3667;
  t3784 = t2554*t3766;
  t3790 = t3713 + t3784;
  t3813 = t2554*t3667;
  t3824 = -1.*t1719*t3766;
  t3903 = t3813 + t3824;
  t4292 = t1719*t4269;
  t4422 = t2554*t4368;
  t4423 = t4292 + t4422;
  t4460 = t2554*t4269;
  t4567 = -1.*t1719*t4368;
  t4583 = t4460 + t4567;
  p_output1[0]=0. + t357*t417;
  p_output1[1]=0. - 1.*t357*t738;
  p_output1[2]=0. + t1412;
  p_output1[3]=0. - 0.642788*t2798 - 0.766044*t2973;
  p_output1[4]=0. + 0.642788*t3790 + 0.766044*t3903;
  p_output1[5]=0. + 0.642788*t4423 + 0.766044*t4583;
  p_output1[6]=0. + 0.766044*t2798 - 0.642788*t2973;
  p_output1[7]=0. - 0.766044*t3790 + 0.642788*t3903;
  p_output1[8]=0. - 0.766044*t4423 + 0.642788*t4583;
}



void R_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
