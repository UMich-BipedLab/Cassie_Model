/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom_src.h"

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
  double t1018;
  double t2516;
  double t2642;
  double t2334;
  double t2726;
  double t2193;
  double t3088;
  double t3418;
  double t3420;
  double t2518;
  double t2732;
  double t2877;
  double t3527;
  double t2189;
  double t3584;
  double t3769;
  double t3961;
  double t3033;
  double t3538;
  double t3574;
  double t3967;
  double t1704;
  double t4196;
  double t4200;
  double t4305;
  double t3576;
  double t3976;
  double t4173;
  double t4325;
  double t763;
  double t225;
  double t1346;
  double t5428;
  double t5559;
  double t5578;
  double t5065;
  double t5336;
  double t5342;
  double t5603;
  double t5610;
  double t5612;
  double t5405;
  double t5590;
  double t5596;
  double t5627;
  double t5628;
  double t5631;
  double t5600;
  double t5617;
  double t5620;
  double t5637;
  double t5638;
  double t5642;
  double t5624;
  double t5632;
  double t5635;
  double t5718;
  double t5720;
  double t5721;
  double t5697;
  double t5705;
  double t5710;
  double t5736;
  double t5738;
  double t5744;
  double t5711;
  double t5726;
  double t5727;
  double t5760;
  double t5766;
  double t5778;
  double t5731;
  double t5747;
  double t5749;
  double t5799;
  double t5801;
  double t5802;
  double t5755;
  double t5782;
  double t5785;
  double t4191;
  double t4343;
  double t4360;
  double t4557;
  double t4793;
  double t5022;
  double t5636;
  double t5649;
  double t5653;
  double t5663;
  double t5671;
  double t5673;
  double t5797;
  double t5804;
  double t5806;
  double t5814;
  double t5815;
  double t5819;
  double t5898;
  double t5902;
  double t5944;
  double t5950;
  double t5967;
  double t5969;
  double t5988;
  double t5989;
  double t5855;
  double t5856;
  double t5867;
  double t5873;
  double t5882;
  double t5885;
  double t5887;
  double t5907;
  double t5909;
  double t5915;
  double t5922;
  double t5933;
  double t5937;
  double t5951;
  double t5954;
  double t5958;
  double t5960;
  double t5962;
  double t5963;
  double t5970;
  double t5975;
  double t5977;
  double t5980;
  double t5984;
  double t5986;
  double t5990;
  double t5992;
  double t5994;
  double t5997;
  double t5998;
  double t5999;
  double t6013;
  double t6015;
  double t6016;
  double t6020;
  double t6023;
  double t6024;
  t1018 = Cos(var1[8]);
  t2516 = Cos(var1[10]);
  t2642 = Sin(var1[9]);
  t2334 = Cos(var1[9]);
  t2726 = Sin(var1[10]);
  t2193 = Cos(var1[11]);
  t3088 = -1.*t1018*t2516*t2642;
  t3418 = -1.*t1018*t2334*t2726;
  t3420 = t3088 + t3418;
  t2518 = t1018*t2334*t2516;
  t2732 = -1.*t1018*t2642*t2726;
  t2877 = t2518 + t2732;
  t3527 = Sin(var1[11]);
  t2189 = Cos(var1[12]);
  t3584 = t2193*t3420;
  t3769 = -1.*t2877*t3527;
  t3961 = t3584 + t3769;
  t3033 = t2193*t2877;
  t3538 = t3420*t3527;
  t3574 = t3033 + t3538;
  t3967 = Sin(var1[12]);
  t1704 = Cos(var1[13]);
  t4196 = t2189*t3961;
  t4200 = -1.*t3574*t3967;
  t4305 = t4196 + t4200;
  t3576 = t2189*t3574;
  t3976 = t3961*t3967;
  t4173 = t3576 + t3976;
  t4325 = Sin(var1[13]);
  t763 = Cos(var1[7]);
  t225 = Sin(var1[8]);
  t1346 = Sin(var1[7]);
  t5428 = -1.*t2334*t1346;
  t5559 = -1.*t763*t225*t2642;
  t5578 = t5428 + t5559;
  t5065 = t763*t2334*t225;
  t5336 = -1.*t1346*t2642;
  t5342 = t5065 + t5336;
  t5603 = t2516*t5578;
  t5610 = -1.*t5342*t2726;
  t5612 = t5603 + t5610;
  t5405 = t2516*t5342;
  t5590 = t5578*t2726;
  t5596 = t5405 + t5590;
  t5627 = t2193*t5612;
  t5628 = -1.*t5596*t3527;
  t5631 = t5627 + t5628;
  t5600 = t2193*t5596;
  t5617 = t5612*t3527;
  t5620 = t5600 + t5617;
  t5637 = t2189*t5631;
  t5638 = -1.*t5620*t3967;
  t5642 = t5637 + t5638;
  t5624 = t2189*t5620;
  t5632 = t5631*t3967;
  t5635 = t5624 + t5632;
  t5718 = t763*t2334;
  t5720 = -1.*t1346*t225*t2642;
  t5721 = t5718 + t5720;
  t5697 = t2334*t1346*t225;
  t5705 = t763*t2642;
  t5710 = t5697 + t5705;
  t5736 = t2516*t5721;
  t5738 = -1.*t5710*t2726;
  t5744 = t5736 + t5738;
  t5711 = t2516*t5710;
  t5726 = t5721*t2726;
  t5727 = t5711 + t5726;
  t5760 = t2193*t5744;
  t5766 = -1.*t5727*t3527;
  t5778 = t5760 + t5766;
  t5731 = t2193*t5727;
  t5747 = t5744*t3527;
  t5749 = t5731 + t5747;
  t5799 = t2189*t5778;
  t5801 = -1.*t5749*t3967;
  t5802 = t5799 + t5801;
  t5755 = t2189*t5749;
  t5782 = t5778*t3967;
  t5785 = t5755 + t5782;
  t4191 = t1704*t4173;
  t4343 = t4305*t4325;
  t4360 = t4191 + t4343;
  t4557 = t1704*t4305;
  t4793 = -1.*t4173*t4325;
  t5022 = t4557 + t4793;
  t5636 = t1704*t5635;
  t5649 = t5642*t4325;
  t5653 = t5636 + t5649;
  t5663 = t1704*t5642;
  t5671 = -1.*t5635*t4325;
  t5673 = t5663 + t5671;
  t5797 = t1704*t5785;
  t5804 = t5802*t4325;
  t5806 = t5797 + t5804;
  t5814 = t1704*t5802;
  t5815 = -1.*t5785*t4325;
  t5819 = t5814 + t5815;
  t5898 = -1.*t2516;
  t5902 = 1. + t5898;
  t5944 = -1.*t2193;
  t5950 = 1. + t5944;
  t5967 = -1.*t2189;
  t5969 = 1. + t5967;
  t5988 = -1.*t1704;
  t5989 = 1. + t5988;
  t5855 = -1.*t1018;
  t5856 = 1. + t5855;
  t5867 = -1.*t2334;
  t5873 = 1. + t5867;
  t5882 = -0.049*t5873;
  t5885 = -0.09*t2642;
  t5887 = 0. + t5882 + t5885;
  t5907 = -0.049*t5902;
  t5909 = -0.21*t2726;
  t5915 = 0. + t5907 + t5909;
  t5922 = -0.21*t5902;
  t5933 = 0.049*t2726;
  t5937 = 0. + t5922 + t5933;
  t5951 = -0.0016*t5950;
  t5954 = -0.2707*t3527;
  t5958 = 0. + t5951 + t5954;
  t5960 = -0.2707*t5950;
  t5962 = 0.0016*t3527;
  t5963 = 0. + t5960 + t5962;
  t5970 = 0.0184*t5969;
  t5975 = -0.7055*t3967;
  t5977 = 0. + t5970 + t5975;
  t5980 = -0.7055*t5969;
  t5984 = -0.0184*t3967;
  t5986 = 0. + t5980 + t5984;
  t5990 = -0.0216*t5989;
  t5992 = -1.1135*t4325;
  t5994 = 0. + t5990 + t5992;
  t5997 = -1.1135*t5989;
  t5998 = 0.0216*t4325;
  t5999 = 0. + t5997 + t5998;
  t6013 = -0.135*t5856;
  t6015 = 0.049*t225;
  t6016 = 0. + t6013 + t6015;
  t6020 = -0.09*t5873;
  t6023 = 0.049*t2642;
  t6024 = 0. + t6020 + t6023;
  p_output1[0]=0. + t225;
  p_output1[1]=0. + t1018*t763;
  p_output1[2]=0. + t1018*t1346;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t4360 + 0.766044*t5022;
  p_output1[5]=0. - 0.642788*t5653 - 0.766044*t5673;
  p_output1[6]=0. - 0.642788*t5806 - 0.766044*t5819;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t4360 + 0.642788*t5022;
  p_output1[9]=0. + 0.766044*t5653 - 0.642788*t5673;
  p_output1[10]=0. + 0.766044*t5806 - 0.642788*t5819;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t225 + 0.0306*t4360 - 1.1312*t5022 - 0.049*t5856 + t1018*t5887 + t1018*t2334*t5915 - 1.*t1018*t2642*t5937 + t2877*t5958 + t3420*t5963 + t3574*t5977 + t3961*t5986 + t4173*t5994 + t4305*t5999;
  p_output1[13]=0. - 0.0306*t5653 + 1.1312*t5673 - 1.*t5342*t5915 - 1.*t5578*t5937 - 1.*t5596*t5958 - 1.*t5612*t5963 - 1.*t5620*t5977 - 1.*t5631*t5986 - 1.*t5635*t5994 - 1.*t5642*t5999 + t1346*t6024 + 0.135*(1. - 1.*t763) + 0.1305*t1018*t763 - 1.*t225*t5887*t763 - 1.*t6016*t763;
  p_output1[14]=-0.07996 - 0.135*t1346 + 0.1305*t1018*t1346 - 0.0306*t5806 + 1.1312*t5819 - 1.*t1346*t225*t5887 - 1.*t5710*t5915 - 1.*t5721*t5937 - 1.*t5727*t5958 - 1.*t5744*t5963 - 1.*t5749*t5977 - 1.*t5778*t5986 - 1.*t5785*t5994 - 1.*t5802*t5999 - 1.*t1346*t6016 - 1.*t6024*t763;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
