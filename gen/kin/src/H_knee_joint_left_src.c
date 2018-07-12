/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_left_src.h"

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
  double t236;
  double t512;
  double t653;
  double t553;
  double t658;
  double t472;
  double t1036;
  double t1100;
  double t1118;
  double t615;
  double t714;
  double t778;
  double t1126;
  double t204;
  double t1299;
  double t1329;
  double t1426;
  double t274;
  double t275;
  double t292;
  double t913;
  double t1137;
  double t1170;
  double t1208;
  double t1225;
  double t1261;
  double t1443;
  double t103;
  double t1958;
  double t1974;
  double t2059;
  double t1805;
  double t1890;
  double t1918;
  double t1522;
  double t2265;
  double t2268;
  double t2341;
  double t1773;
  double t1923;
  double t2068;
  double t2130;
  double t2133;
  double t2190;
  double t2650;
  double t2652;
  double t2689;
  double t2555;
  double t2565;
  double t2577;
  double t2590;
  double t2617;
  double t2627;
  double t1298;
  double t1467;
  double t1495;
  double t1536;
  double t1552;
  double t1613;
  double t2216;
  double t2351;
  double t2366;
  double t2380;
  double t2441;
  double t2483;
  double t2648;
  double t2702;
  double t2727;
  double t2733;
  double t2750;
  double t2753;
  double t3631;
  double t3649;
  double t3930;
  double t3942;
  double t4101;
  double t4112;
  double t2898;
  double t2899;
  double t2937;
  double t3375;
  double t3417;
  double t3441;
  double t3477;
  double t3513;
  double t3519;
  double t3650;
  double t3666;
  double t3684;
  double t3762;
  double t3771;
  double t3782;
  double t3945;
  double t3960;
  double t3988;
  double t4003;
  double t4012;
  double t4023;
  double t4175;
  double t4264;
  double t4278;
  double t4297;
  double t4302;
  double t4318;
  double t2963;
  double t2982;
  double t2990;
  double t3061;
  double t3065;
  double t3074;
  t236 = Cos(var1[3]);
  t512 = Cos(var1[5]);
  t653 = Sin(var1[4]);
  t553 = Sin(var1[3]);
  t658 = Sin(var1[5]);
  t472 = Cos(var1[6]);
  t1036 = t236*t512*t653;
  t1100 = t553*t658;
  t1118 = t1036 + t1100;
  t615 = -1.*t512*t553;
  t714 = t236*t653*t658;
  t778 = t615 + t714;
  t1126 = Sin(var1[6]);
  t204 = Cos(var1[8]);
  t1299 = t472*t1118;
  t1329 = -1.*t778*t1126;
  t1426 = t1299 + t1329;
  t274 = Cos(var1[4]);
  t275 = Cos(var1[7]);
  t292 = t236*t274*t275;
  t913 = t472*t778;
  t1137 = t1118*t1126;
  t1170 = t913 + t1137;
  t1208 = Sin(var1[7]);
  t1225 = t1170*t1208;
  t1261 = t292 + t1225;
  t1443 = Sin(var1[8]);
  t103 = Sin(var1[9]);
  t1958 = t512*t553*t653;
  t1974 = -1.*t236*t658;
  t2059 = t1958 + t1974;
  t1805 = t236*t512;
  t1890 = t553*t653*t658;
  t1918 = t1805 + t1890;
  t1522 = Cos(var1[9]);
  t2265 = t472*t2059;
  t2268 = -1.*t1918*t1126;
  t2341 = t2265 + t2268;
  t1773 = t274*t275*t553;
  t1923 = t472*t1918;
  t2068 = t2059*t1126;
  t2130 = t1923 + t2068;
  t2133 = t2130*t1208;
  t2190 = t1773 + t2133;
  t2650 = t274*t512*t472;
  t2652 = -1.*t274*t658*t1126;
  t2689 = t2650 + t2652;
  t2555 = -1.*t275*t653;
  t2565 = t274*t472*t658;
  t2577 = t274*t512*t1126;
  t2590 = t2565 + t2577;
  t2617 = t2590*t1208;
  t2627 = t2555 + t2617;
  t1298 = t204*t1261;
  t1467 = t1426*t1443;
  t1495 = t1298 + t1467;
  t1536 = t204*t1426;
  t1552 = -1.*t1261*t1443;
  t1613 = t1536 + t1552;
  t2216 = t204*t2190;
  t2351 = t2341*t1443;
  t2366 = t2216 + t2351;
  t2380 = t204*t2341;
  t2441 = -1.*t2190*t1443;
  t2483 = t2380 + t2441;
  t2648 = t204*t2627;
  t2702 = t2689*t1443;
  t2727 = t2648 + t2702;
  t2733 = t204*t2689;
  t2750 = -1.*t2627*t1443;
  t2753 = t2733 + t2750;
  t3631 = -1.*t275;
  t3649 = 1. + t3631;
  t3930 = -1.*t204;
  t3942 = 1. + t3930;
  t4101 = -1.*t1522;
  t4112 = 1. + t4101;
  t2898 = t1522*t1495;
  t2899 = t103*t1613;
  t2937 = t2898 + t2899;
  t3375 = -1.*t472;
  t3417 = 1. + t3375;
  t3441 = 0.135*t3417;
  t3477 = 0. + t3441;
  t3513 = -0.135*t1126;
  t3519 = 0. + t3513;
  t3650 = 0.135*t3649;
  t3666 = 0.049*t1208;
  t3684 = 0. + t3650 + t3666;
  t3762 = -0.049*t3649;
  t3771 = 0.135*t1208;
  t3782 = 0. + t3762 + t3771;
  t3945 = -0.049*t3942;
  t3960 = -0.09*t1443;
  t3988 = 0. + t3945 + t3960;
  t4003 = -0.09*t3942;
  t4012 = 0.049*t1443;
  t4023 = 0. + t4003 + t4012;
  t4175 = -0.049*t4112;
  t4264 = -0.21*t103;
  t4278 = 0. + t4175 + t4264;
  t4297 = -0.21*t4112;
  t4302 = 0.049*t103;
  t4318 = 0. + t4297 + t4302;
  t2963 = t1522*t2366;
  t2982 = t103*t2483;
  t2990 = t2963 + t2982;
  t3061 = t1522*t2727;
  t3065 = t103*t2753;
  t3074 = t3061 + t3065;
  p_output1[0]=t103*t1495 - 1.*t1522*t1613;
  p_output1[1]=t103*t2366 - 1.*t1522*t2483;
  p_output1[2]=t103*t2727 - 1.*t1522*t2753;
  p_output1[3]=0.;
  p_output1[4]=t2937;
  p_output1[5]=t2990;
  p_output1[6]=t3074;
  p_output1[7]=0.;
  p_output1[8]=t1208*t236*t274 - 1.*t1170*t275;
  p_output1[9]=-1.*t2130*t275 + t1208*t274*t553;
  p_output1[10]=-1.*t2590*t275 - 1.*t1208*t653;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(-1.*t103*t1495 + t1522*t1613) + 0.1305*(-1.*t1208*t236*t274 + t1170*t275) - 0.049*t2937 + t1118*t3519 + t1170*t3684 + t236*t274*t3782 + t1261*t3988 + t1426*t4023 + t1495*t4278 + t1613*t4318 + t3477*t778 + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t103*t2366 + t1522*t2483) - 0.049*t2990 + t1918*t3477 + t2059*t3519 + t2130*t3684 + t2190*t3988 + t2341*t4023 + t2366*t4278 + t2483*t4318 + t274*t3782*t553 + 0.1305*(t2130*t275 - 1.*t1208*t274*t553) + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t103*t2727 + t1522*t2753) - 0.049*t3074 + t2590*t3684 + t2627*t3988 + t2689*t4023 + t2727*t4278 + t2753*t4318 + t274*t3519*t512 - 1.*t3782*t653 + 0.1305*(t2590*t275 + t1208*t653) + t274*t3477*t658 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
