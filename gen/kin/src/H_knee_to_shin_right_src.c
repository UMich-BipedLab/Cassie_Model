/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_right_src.h"

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
  double t337;
  double t441;
  double t319;
  double t360;
  double t477;
  double t564;
  double t388;
  double t484;
  double t505;
  double t193;
  double t630;
  double t631;
  double t668;
  double t892;
  double t508;
  double t748;
  double t753;
  double t170;
  double t911;
  double t921;
  double t949;
  double t1000;
  double t1051;
  double t1094;
  double t1149;
  double t1401;
  double t1410;
  double t1557;
  double t758;
  double t1484;
  double t1507;
  double t106;
  double t1560;
  double t1562;
  double t1583;
  double t94;
  double t1970;
  double t2113;
  double t2132;
  double t2249;
  double t2250;
  double t2416;
  double t2192;
  double t2425;
  double t2432;
  double t2495;
  double t2504;
  double t2527;
  double t2559;
  double t2572;
  double t2576;
  double t1683;
  double t2440;
  double t2587;
  double t2662;
  double t2750;
  double t2761;
  double t2763;
  double t3326;
  double t3403;
  double t3446;
  double t3525;
  double t3545;
  double t3552;
  double t3688;
  double t3706;
  double t3713;
  double t3502;
  double t3714;
  double t3727;
  double t3774;
  double t3792;
  double t3799;
  double t1518;
  double t1615;
  double t1650;
  double t1714;
  double t1742;
  double t1840;
  double t2714;
  double t2893;
  double t2981;
  double t3067;
  double t3176;
  double t3185;
  double t3745;
  double t3821;
  double t3853;
  double t3909;
  double t3922;
  double t3956;
  double t4717;
  double t4729;
  double t6646;
  double t7083;
  double t8320;
  double t8322;
  double t8387;
  double t8388;
  double t4000;
  double t4060;
  double t4072;
  double t4833;
  double t4848;
  double t4897;
  double t5313;
  double t5324;
  double t5534;
  double t5609;
  double t5635;
  double t5641;
  double t5729;
  double t5901;
  double t6348;
  double t8101;
  double t8108;
  double t8152;
  double t8281;
  double t8303;
  double t8309;
  double t8329;
  double t8335;
  double t8350;
  double t8369;
  double t8372;
  double t8380;
  double t8389;
  double t8391;
  double t8394;
  double t8399;
  double t8404;
  double t8406;
  double t4137;
  double t4139;
  double t4143;
  double t4165;
  double t4171;
  double t4293;
  t337 = Cos(var1[5]);
  t441 = Sin(var1[3]);
  t319 = Cos(var1[3]);
  t360 = Sin(var1[4]);
  t477 = Sin(var1[5]);
  t564 = Sin(var1[13]);
  t388 = t319*t337*t360;
  t484 = t441*t477;
  t505 = t388 + t484;
  t193 = Cos(var1[13]);
  t630 = -1.*t337*t441;
  t631 = t319*t360*t477;
  t668 = t630 + t631;
  t892 = Cos(var1[15]);
  t508 = t193*t505;
  t748 = -1.*t564*t668;
  t753 = t508 + t748;
  t170 = Sin(var1[15]);
  t911 = Cos(var1[14]);
  t921 = Cos(var1[4]);
  t949 = t911*t319*t921;
  t1000 = Sin(var1[14]);
  t1051 = t564*t505;
  t1094 = t193*t668;
  t1149 = t1051 + t1094;
  t1401 = t1000*t1149;
  t1410 = t949 + t1401;
  t1557 = Cos(var1[16]);
  t758 = t170*t753;
  t1484 = t892*t1410;
  t1507 = t758 + t1484;
  t106 = Sin(var1[16]);
  t1560 = t892*t753;
  t1562 = -1.*t170*t1410;
  t1583 = t1560 + t1562;
  t94 = Cos(var1[17]);
  t1970 = t337*t441*t360;
  t2113 = -1.*t319*t477;
  t2132 = t1970 + t2113;
  t2249 = t319*t337;
  t2250 = t441*t360*t477;
  t2416 = t2249 + t2250;
  t2192 = t193*t2132;
  t2425 = -1.*t564*t2416;
  t2432 = t2192 + t2425;
  t2495 = t911*t921*t441;
  t2504 = t564*t2132;
  t2527 = t193*t2416;
  t2559 = t2504 + t2527;
  t2572 = t1000*t2559;
  t2576 = t2495 + t2572;
  t1683 = Sin(var1[17]);
  t2440 = t170*t2432;
  t2587 = t892*t2576;
  t2662 = t2440 + t2587;
  t2750 = t892*t2432;
  t2761 = -1.*t170*t2576;
  t2763 = t2750 + t2761;
  t3326 = t193*t921*t337;
  t3403 = -1.*t921*t564*t477;
  t3446 = t3326 + t3403;
  t3525 = -1.*t911*t360;
  t3545 = t921*t337*t564;
  t3552 = t193*t921*t477;
  t3688 = t3545 + t3552;
  t3706 = t1000*t3688;
  t3713 = t3525 + t3706;
  t3502 = t170*t3446;
  t3714 = t892*t3713;
  t3727 = t3502 + t3714;
  t3774 = t892*t3446;
  t3792 = -1.*t170*t3713;
  t3799 = t3774 + t3792;
  t1518 = -1.*t106*t1507;
  t1615 = t1557*t1583;
  t1650 = t1518 + t1615;
  t1714 = t1557*t1507;
  t1742 = t106*t1583;
  t1840 = t1714 + t1742;
  t2714 = -1.*t106*t2662;
  t2893 = t1557*t2763;
  t2981 = t2714 + t2893;
  t3067 = t1557*t2662;
  t3176 = t106*t2763;
  t3185 = t3067 + t3176;
  t3745 = -1.*t106*t3727;
  t3821 = t1557*t3799;
  t3853 = t3745 + t3821;
  t3909 = t1557*t3727;
  t3922 = t106*t3799;
  t3956 = t3909 + t3922;
  t4717 = -1.*t911;
  t4729 = 1. + t4717;
  t6646 = -1.*t892;
  t7083 = 1. + t6646;
  t8320 = -1.*t1557;
  t8322 = 1. + t8320;
  t8387 = -1.*t94;
  t8388 = 1. + t8387;
  t4000 = t1683*t1650;
  t4060 = t94*t1840;
  t4072 = t4000 + t4060;
  t4833 = -0.049*t4729;
  t4848 = -0.135*t1000;
  t4897 = 0. + t4833 + t4848;
  t5313 = 0.135*t564;
  t5324 = 0. + t5313;
  t5534 = -1.*t193;
  t5609 = 1. + t5534;
  t5635 = -0.135*t5609;
  t5641 = 0. + t5635;
  t5729 = -0.135*t4729;
  t5901 = 0.049*t1000;
  t6348 = 0. + t5729 + t5901;
  t8101 = -0.09*t7083;
  t8108 = 0.049*t170;
  t8152 = 0. + t8101 + t8108;
  t8281 = -0.049*t7083;
  t8303 = -0.09*t170;
  t8309 = 0. + t8281 + t8303;
  t8329 = -0.049*t8322;
  t8335 = -0.21*t106;
  t8350 = 0. + t8329 + t8335;
  t8369 = -0.21*t8322;
  t8372 = 0.049*t106;
  t8380 = 0. + t8369 + t8372;
  t8389 = -0.2707*t8388;
  t8391 = 0.0016*t1683;
  t8394 = 0. + t8389 + t8391;
  t8399 = -0.0016*t8388;
  t8404 = -0.2707*t1683;
  t8406 = 0. + t8399 + t8404;
  t4137 = t1683*t2981;
  t4139 = t94*t3185;
  t4143 = t4137 + t4139;
  t4165 = t1683*t3853;
  t4171 = t94*t3956;
  t4293 = t4165 + t4171;
  p_output1[0]=t1683*t1840 - 1.*t1650*t94;
  p_output1[1]=t1683*t3185 - 1.*t2981*t94;
  p_output1[2]=t1683*t3956 - 1.*t3853*t94;
  p_output1[3]=0.;
  p_output1[4]=t4072;
  p_output1[5]=t4143;
  p_output1[6]=t4293;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1149*t911 + t1000*t319*t921;
  p_output1[9]=-1.*t2559*t911 + t1000*t441*t921;
  p_output1[10]=-1.*t1000*t360 - 1.*t3688*t911;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0016*t4072 + t505*t5324 + t1149*t6348 + t5641*t668 + t753*t8152 + t1410*t8309 + t1507*t8350 + t1583*t8380 + t1650*t8394 + t1840*t8406 + t319*t4897*t921 - 0.1305*(t1149*t911 - 1.*t1000*t319*t921) - 0.2707*(-1.*t1683*t1840 + t1650*t94) + var1[0];
  p_output1[13]=0. - 0.0016*t4143 + t2132*t5324 + t2416*t5641 + t2559*t6348 + t2432*t8152 + t2576*t8309 + t2662*t8350 + t2763*t8380 + t2981*t8394 + t3185*t8406 + t441*t4897*t921 - 0.1305*(t2559*t911 - 1.*t1000*t441*t921) - 0.2707*(-1.*t1683*t3185 + t2981*t94) + var1[1];
  p_output1[14]=0. - 0.0016*t4293 - 1.*t360*t4897 + t3688*t6348 + t3446*t8152 + t3713*t8309 + t3727*t8350 + t3799*t8380 + t3853*t8394 + t3956*t8406 - 0.1305*(t1000*t360 + t3688*t911) + t337*t5324*t921 + t477*t5641*t921 - 0.2707*(-1.*t1683*t3956 + t3853*t94) + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
