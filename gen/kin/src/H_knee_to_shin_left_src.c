/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_left_src.h"

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
  double t283;
  double t784;
  double t877;
  double t789;
  double t912;
  double t780;
  double t1102;
  double t1149;
  double t1198;
  double t814;
  double t1004;
  double t1026;
  double t1237;
  double t205;
  double t1347;
  double t1358;
  double t1368;
  double t678;
  double t746;
  double t762;
  double t1074;
  double t1242;
  double t1274;
  double t1286;
  double t1308;
  double t1321;
  double t1416;
  double t1504;
  double t1345;
  double t1439;
  double t1448;
  double t159;
  double t1515;
  double t1516;
  double t1544;
  double t149;
  double t1970;
  double t1972;
  double t2008;
  double t1907;
  double t1913;
  double t1939;
  double t2217;
  double t2222;
  double t2243;
  double t1875;
  double t1957;
  double t2016;
  double t2048;
  double t2144;
  double t2160;
  double t1645;
  double t2169;
  double t2276;
  double t2284;
  double t2302;
  double t2388;
  double t2401;
  double t2860;
  double t2869;
  double t2870;
  double t2612;
  double t2715;
  double t2768;
  double t2796;
  double t2817;
  double t2828;
  double t2838;
  double t2875;
  double t2887;
  double t2931;
  double t2953;
  double t2979;
  double t1463;
  double t1563;
  double t1568;
  double t1680;
  double t1687;
  double t1811;
  double t2297;
  double t2403;
  double t2435;
  double t2452;
  double t2500;
  double t2511;
  double t2918;
  double t3028;
  double t3070;
  double t3180;
  double t3186;
  double t3192;
  double t3820;
  double t3826;
  double t4033;
  double t4035;
  double t4166;
  double t4207;
  double t4325;
  double t4329;
  double t3279;
  double t3354;
  double t3366;
  double t3694;
  double t3722;
  double t3745;
  double t3750;
  double t3774;
  double t3775;
  double t3833;
  double t3835;
  double t3873;
  double t3919;
  double t3936;
  double t3937;
  double t4049;
  double t4077;
  double t4089;
  double t4130;
  double t4138;
  double t4159;
  double t4208;
  double t4219;
  double t4223;
  double t4258;
  double t4274;
  double t4294;
  double t4373;
  double t4384;
  double t4396;
  double t4407;
  double t4441;
  double t4446;
  double t3370;
  double t3384;
  double t3404;
  double t3430;
  double t3455;
  double t3491;
  t283 = Cos(var1[3]);
  t784 = Cos(var1[5]);
  t877 = Sin(var1[4]);
  t789 = Sin(var1[3]);
  t912 = Sin(var1[5]);
  t780 = Cos(var1[6]);
  t1102 = t283*t784*t877;
  t1149 = t789*t912;
  t1198 = t1102 + t1149;
  t814 = -1.*t784*t789;
  t1004 = t283*t877*t912;
  t1026 = t814 + t1004;
  t1237 = Sin(var1[6]);
  t205 = Cos(var1[8]);
  t1347 = t780*t1198;
  t1358 = -1.*t1026*t1237;
  t1368 = t1347 + t1358;
  t678 = Cos(var1[4]);
  t746 = Cos(var1[7]);
  t762 = t283*t678*t746;
  t1074 = t780*t1026;
  t1242 = t1198*t1237;
  t1274 = t1074 + t1242;
  t1286 = Sin(var1[7]);
  t1308 = t1274*t1286;
  t1321 = t762 + t1308;
  t1416 = Sin(var1[8]);
  t1504 = Cos(var1[9]);
  t1345 = t205*t1321;
  t1439 = t1368*t1416;
  t1448 = t1345 + t1439;
  t159 = Sin(var1[9]);
  t1515 = t205*t1368;
  t1516 = -1.*t1321*t1416;
  t1544 = t1515 + t1516;
  t149 = Cos(var1[10]);
  t1970 = t784*t789*t877;
  t1972 = -1.*t283*t912;
  t2008 = t1970 + t1972;
  t1907 = t283*t784;
  t1913 = t789*t877*t912;
  t1939 = t1907 + t1913;
  t2217 = t780*t2008;
  t2222 = -1.*t1939*t1237;
  t2243 = t2217 + t2222;
  t1875 = t678*t746*t789;
  t1957 = t780*t1939;
  t2016 = t2008*t1237;
  t2048 = t1957 + t2016;
  t2144 = t2048*t1286;
  t2160 = t1875 + t2144;
  t1645 = Sin(var1[10]);
  t2169 = t205*t2160;
  t2276 = t2243*t1416;
  t2284 = t2169 + t2276;
  t2302 = t205*t2243;
  t2388 = -1.*t2160*t1416;
  t2401 = t2302 + t2388;
  t2860 = t678*t784*t780;
  t2869 = -1.*t678*t912*t1237;
  t2870 = t2860 + t2869;
  t2612 = -1.*t746*t877;
  t2715 = t678*t780*t912;
  t2768 = t678*t784*t1237;
  t2796 = t2715 + t2768;
  t2817 = t2796*t1286;
  t2828 = t2612 + t2817;
  t2838 = t205*t2828;
  t2875 = t2870*t1416;
  t2887 = t2838 + t2875;
  t2931 = t205*t2870;
  t2953 = -1.*t2828*t1416;
  t2979 = t2931 + t2953;
  t1463 = -1.*t159*t1448;
  t1563 = t1504*t1544;
  t1568 = t1463 + t1563;
  t1680 = t1504*t1448;
  t1687 = t159*t1544;
  t1811 = t1680 + t1687;
  t2297 = -1.*t159*t2284;
  t2403 = t1504*t2401;
  t2435 = t2297 + t2403;
  t2452 = t1504*t2284;
  t2500 = t159*t2401;
  t2511 = t2452 + t2500;
  t2918 = -1.*t159*t2887;
  t3028 = t1504*t2979;
  t3070 = t2918 + t3028;
  t3180 = t1504*t2887;
  t3186 = t159*t2979;
  t3192 = t3180 + t3186;
  t3820 = -1.*t746;
  t3826 = 1. + t3820;
  t4033 = -1.*t205;
  t4035 = 1. + t4033;
  t4166 = -1.*t1504;
  t4207 = 1. + t4166;
  t4325 = -1.*t149;
  t4329 = 1. + t4325;
  t3279 = t1645*t1568;
  t3354 = t149*t1811;
  t3366 = t3279 + t3354;
  t3694 = -1.*t780;
  t3722 = 1. + t3694;
  t3745 = 0.135*t3722;
  t3750 = 0. + t3745;
  t3774 = -0.135*t1237;
  t3775 = 0. + t3774;
  t3833 = 0.135*t3826;
  t3835 = 0.049*t1286;
  t3873 = 0. + t3833 + t3835;
  t3919 = -0.049*t3826;
  t3936 = 0.135*t1286;
  t3937 = 0. + t3919 + t3936;
  t4049 = -0.049*t4035;
  t4077 = -0.09*t1416;
  t4089 = 0. + t4049 + t4077;
  t4130 = -0.09*t4035;
  t4138 = 0.049*t1416;
  t4159 = 0. + t4130 + t4138;
  t4208 = -0.049*t4207;
  t4219 = -0.21*t159;
  t4223 = 0. + t4208 + t4219;
  t4258 = -0.21*t4207;
  t4274 = 0.049*t159;
  t4294 = 0. + t4258 + t4274;
  t4373 = -0.2707*t4329;
  t4384 = 0.0016*t1645;
  t4396 = 0. + t4373 + t4384;
  t4407 = -0.0016*t4329;
  t4441 = -0.2707*t1645;
  t4446 = 0. + t4407 + t4441;
  t3370 = t1645*t2435;
  t3384 = t149*t2511;
  t3404 = t3370 + t3384;
  t3430 = t1645*t3070;
  t3455 = t149*t3192;
  t3491 = t3430 + t3455;
  p_output1[0]=-1.*t149*t1568 + t1645*t1811;
  p_output1[1]=-1.*t149*t2435 + t1645*t2511;
  p_output1[2]=-1.*t149*t3070 + t1645*t3192;
  p_output1[3]=0.;
  p_output1[4]=t3366;
  p_output1[5]=t3404;
  p_output1[6]=t3491;
  p_output1[7]=0.;
  p_output1[8]=t1286*t283*t678 - 1.*t1274*t746;
  p_output1[9]=-1.*t2048*t746 + t1286*t678*t789;
  p_output1[10]=-1.*t2796*t746 - 1.*t1286*t877;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(t149*t1568 - 1.*t1645*t1811) - 0.0016*t3366 + t1026*t3750 + t1198*t3775 + t1274*t3873 + t1321*t4089 + t1368*t4159 + t1448*t4223 + t1544*t4294 + t1568*t4396 + t1811*t4446 + t283*t3937*t678 + 0.1305*(-1.*t1286*t283*t678 + t1274*t746) + var1[0];
  p_output1[13]=0. - 0.2707*(t149*t2435 - 1.*t1645*t2511) - 0.0016*t3404 + t1939*t3750 + t2008*t3775 + t2048*t3873 + t2160*t4089 + t2243*t4159 + t2284*t4223 + t2401*t4294 + t2435*t4396 + t2511*t4446 + t3937*t678*t789 + 0.1305*(t2048*t746 - 1.*t1286*t678*t789) + var1[1];
  p_output1[14]=0. - 0.2707*(t149*t3070 - 1.*t1645*t3192) - 0.0016*t3491 + t2796*t3873 + t2828*t4089 + t2870*t4159 + t2887*t4223 + t2979*t4294 + t3070*t4396 + t3192*t4446 + t3775*t678*t784 - 1.*t3937*t877 + 0.1305*(t2796*t746 + t1286*t877) + t3750*t678*t912 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
