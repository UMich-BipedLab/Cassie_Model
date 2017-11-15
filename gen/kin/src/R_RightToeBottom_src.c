/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_src.h"

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
  double t123;
  double t505;
  double t784;
  double t541;
  double t880;
  double t257;
  double t270;
  double t281;
  double t478;
  double t987;
  double t706;
  double t924;
  double t927;
  double t995;
  double t1010;
  double t1080;
  double t948;
  double t1103;
  double t1114;
  double t1936;
  double t1752;
  double t1764;
  double t1789;
  double t1729;
  double t1959;
  double t2033;
  double t2041;
  double t2192;
  double t1870;
  double t2057;
  double t2058;
  double t1721;
  double t2243;
  double t2272;
  double t2309;
  double t2403;
  double t2188;
  double t2326;
  double t2364;
  double t1666;
  double t2433;
  double t2449;
  double t2454;
  double t2594;
  double t2369;
  double t2519;
  double t2553;
  double t1650;
  double t2636;
  double t2692;
  double t2729;
  double t2805;
  double t2585;
  double t2774;
  double t2777;
  double t1637;
  double t2822;
  double t2828;
  double t2839;
  double t1270;
  double t1340;
  double t1360;
  double t1376;
  double t1388;
  double t1395;
  double t1365;
  double t1426;
  double t1473;
  double t2964;
  double t2987;
  double t2992;
  double t3001;
  double t3004;
  double t3007;
  double t2999;
  double t3008;
  double t3013;
  double t3038;
  double t3070;
  double t3098;
  double t3025;
  double t3105;
  double t3109;
  double t3130;
  double t3131;
  double t3141;
  double t3123;
  double t3151;
  double t3176;
  double t3188;
  double t3219;
  double t3221;
  double t3187;
  double t3230;
  double t3236;
  double t3242;
  double t3245;
  double t3246;
  double t1594;
  double t1602;
  double t1614;
  double t3436;
  double t3481;
  double t3493;
  double t3505;
  double t3510;
  double t3588;
  double t3495;
  double t3594;
  double t3618;
  double t3621;
  double t3625;
  double t3634;
  double t3619;
  double t3642;
  double t3655;
  double t3684;
  double t3687;
  double t3695;
  double t3679;
  double t3700;
  double t3736;
  double t3765;
  double t3773;
  double t3777;
  double t3759;
  double t3789;
  double t3800;
  double t3845;
  double t3850;
  double t3855;
  double t2802;
  double t2846;
  double t2850;
  double t2888;
  double t2900;
  double t2921;
  double t3239;
  double t3283;
  double t3362;
  double t3380;
  double t3384;
  double t3389;
  double t3810;
  double t3864;
  double t3874;
  double t3927;
  double t3933;
  double t3948;
  t123 = Cos(var1[3]);
  t505 = Cos(var1[5]);
  t784 = Sin(var1[3]);
  t541 = Sin(var1[4]);
  t880 = Sin(var1[5]);
  t257 = Cos(var1[4]);
  t270 = Sin(var1[14]);
  t281 = Cos(var1[14]);
  t478 = Sin(var1[13]);
  t987 = Cos(var1[13]);
  t706 = t123*t505*t541;
  t924 = t784*t880;
  t927 = t706 + t924;
  t995 = -1.*t505*t784;
  t1010 = t123*t541*t880;
  t1080 = t995 + t1010;
  t948 = t478*t927;
  t1103 = t987*t1080;
  t1114 = t948 + t1103;
  t1936 = Cos(var1[15]);
  t1752 = t987*t927;
  t1764 = -1.*t478*t1080;
  t1789 = t1752 + t1764;
  t1729 = Sin(var1[15]);
  t1959 = t281*t123*t257;
  t2033 = t270*t1114;
  t2041 = t1959 + t2033;
  t2192 = Cos(var1[16]);
  t1870 = t1729*t1789;
  t2057 = t1936*t2041;
  t2058 = t1870 + t2057;
  t1721 = Sin(var1[16]);
  t2243 = t1936*t1789;
  t2272 = -1.*t1729*t2041;
  t2309 = t2243 + t2272;
  t2403 = Cos(var1[17]);
  t2188 = -1.*t1721*t2058;
  t2326 = t2192*t2309;
  t2364 = t2188 + t2326;
  t1666 = Sin(var1[17]);
  t2433 = t2192*t2058;
  t2449 = t1721*t2309;
  t2454 = t2433 + t2449;
  t2594 = Cos(var1[18]);
  t2369 = t1666*t2364;
  t2519 = t2403*t2454;
  t2553 = t2369 + t2519;
  t1650 = Sin(var1[18]);
  t2636 = t2403*t2364;
  t2692 = -1.*t1666*t2454;
  t2729 = t2636 + t2692;
  t2805 = Cos(var1[19]);
  t2585 = -1.*t1650*t2553;
  t2774 = t2594*t2729;
  t2777 = t2585 + t2774;
  t1637 = Sin(var1[19]);
  t2822 = t2594*t2553;
  t2828 = t1650*t2729;
  t2839 = t2822 + t2828;
  t1270 = t505*t784*t541;
  t1340 = -1.*t123*t880;
  t1360 = t1270 + t1340;
  t1376 = t123*t505;
  t1388 = t784*t541*t880;
  t1395 = t1376 + t1388;
  t1365 = t478*t1360;
  t1426 = t987*t1395;
  t1473 = t1365 + t1426;
  t2964 = t987*t1360;
  t2987 = -1.*t478*t1395;
  t2992 = t2964 + t2987;
  t3001 = t281*t257*t784;
  t3004 = t270*t1473;
  t3007 = t3001 + t3004;
  t2999 = t1729*t2992;
  t3008 = t1936*t3007;
  t3013 = t2999 + t3008;
  t3038 = t1936*t2992;
  t3070 = -1.*t1729*t3007;
  t3098 = t3038 + t3070;
  t3025 = -1.*t1721*t3013;
  t3105 = t2192*t3098;
  t3109 = t3025 + t3105;
  t3130 = t2192*t3013;
  t3131 = t1721*t3098;
  t3141 = t3130 + t3131;
  t3123 = t1666*t3109;
  t3151 = t2403*t3141;
  t3176 = t3123 + t3151;
  t3188 = t2403*t3109;
  t3219 = -1.*t1666*t3141;
  t3221 = t3188 + t3219;
  t3187 = -1.*t1650*t3176;
  t3230 = t2594*t3221;
  t3236 = t3187 + t3230;
  t3242 = t2594*t3176;
  t3245 = t1650*t3221;
  t3246 = t3242 + t3245;
  t1594 = t257*t505*t478;
  t1602 = t987*t257*t880;
  t1614 = t1594 + t1602;
  t3436 = t987*t257*t505;
  t3481 = -1.*t257*t478*t880;
  t3493 = t3436 + t3481;
  t3505 = -1.*t281*t541;
  t3510 = t270*t1614;
  t3588 = t3505 + t3510;
  t3495 = t1729*t3493;
  t3594 = t1936*t3588;
  t3618 = t3495 + t3594;
  t3621 = t1936*t3493;
  t3625 = -1.*t1729*t3588;
  t3634 = t3621 + t3625;
  t3619 = -1.*t1721*t3618;
  t3642 = t2192*t3634;
  t3655 = t3619 + t3642;
  t3684 = t2192*t3618;
  t3687 = t1721*t3634;
  t3695 = t3684 + t3687;
  t3679 = t1666*t3655;
  t3700 = t2403*t3695;
  t3736 = t3679 + t3700;
  t3765 = t2403*t3655;
  t3773 = -1.*t1666*t3695;
  t3777 = t3765 + t3773;
  t3759 = -1.*t1650*t3736;
  t3789 = t2594*t3777;
  t3800 = t3759 + t3789;
  t3845 = t2594*t3736;
  t3850 = t1650*t3777;
  t3855 = t3845 + t3850;
  t2802 = t1637*t2777;
  t2846 = t2805*t2839;
  t2850 = t2802 + t2846;
  t2888 = t2805*t2777;
  t2900 = -1.*t1637*t2839;
  t2921 = t2888 + t2900;
  t3239 = t1637*t3236;
  t3283 = t2805*t3246;
  t3362 = t3239 + t3283;
  t3380 = t2805*t3236;
  t3384 = -1.*t1637*t3246;
  t3389 = t3380 + t3384;
  t3810 = t1637*t3800;
  t3864 = t2805*t3855;
  t3874 = t3810 + t3864;
  t3927 = t2805*t3800;
  t3933 = -1.*t1637*t3855;
  t3948 = t3927 + t3933;
  p_output1[0]=t123*t257*t270 - 1.*t1114*t281;
  p_output1[1]=-1.*t1473*t281 + t257*t270*t784;
  p_output1[2]=-1.*t1614*t281 - 1.*t270*t541;
  p_output1[3]=0.642788*t2850 + 0.766044*t2921;
  p_output1[4]=0.642788*t3362 + 0.766044*t3389;
  p_output1[5]=0.642788*t3874 + 0.766044*t3948;
  p_output1[6]=-0.766044*t2850 + 0.642788*t2921;
  p_output1[7]=-0.766044*t3362 + 0.642788*t3389;
  p_output1[8]=-0.766044*t3874 + 0.642788*t3948;
}



void R_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
