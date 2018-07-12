/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_right_src.h"

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
  double t232;
  double t367;
  double t221;
  double t316;
  double t420;
  double t744;
  double t339;
  double t512;
  double t559;
  double t206;
  double t751;
  double t773;
  double t820;
  double t1116;
  double t677;
  double t875;
  double t1008;
  double t148;
  double t1117;
  double t1146;
  double t1152;
  double t1188;
  double t1207;
  double t1211;
  double t1237;
  double t1258;
  double t1287;
  double t1321;
  double t1038;
  double t1289;
  double t1291;
  double t110;
  double t1339;
  double t1351;
  double t1381;
  double t1495;
  double t1300;
  double t1392;
  double t1426;
  double t89;
  double t1516;
  double t1553;
  double t1593;
  double t6;
  double t1774;
  double t1803;
  double t1804;
  double t1869;
  double t1903;
  double t1922;
  double t1824;
  double t1934;
  double t1960;
  double t1991;
  double t2019;
  double t2050;
  double t2075;
  double t2077;
  double t2117;
  double t1981;
  double t2134;
  double t2142;
  double t2149;
  double t2199;
  double t2219;
  double t1620;
  double t2145;
  double t2227;
  double t2236;
  double t2308;
  double t2329;
  double t2342;
  double t2439;
  double t2450;
  double t2478;
  double t2493;
  double t2494;
  double t2496;
  double t2501;
  double t2506;
  double t2556;
  double t2492;
  double t2569;
  double t2614;
  double t2621;
  double t2629;
  double t2633;
  double t2615;
  double t2644;
  double t2700;
  double t2745;
  double t2757;
  double t2765;
  double t1456;
  double t1597;
  double t1613;
  double t1659;
  double t1667;
  double t1685;
  double t2263;
  double t2358;
  double t2360;
  double t2372;
  double t2391;
  double t2392;
  double t2701;
  double t2780;
  double t2784;
  double t2821;
  double t2869;
  double t2882;
  double t3342;
  double t3364;
  double t3695;
  double t3698;
  double t3908;
  double t3960;
  double t4146;
  double t4188;
  double t4394;
  double t4414;
  double t2918;
  double t2937;
  double t2949;
  double t3376;
  double t3380;
  double t3392;
  double t3414;
  double t3426;
  double t3470;
  double t3532;
  double t3539;
  double t3561;
  double t3577;
  double t3605;
  double t3680;
  double t3714;
  double t3756;
  double t3766;
  double t3891;
  double t3892;
  double t3905;
  double t3961;
  double t3967;
  double t3968;
  double t4071;
  double t4104;
  double t4121;
  double t4251;
  double t4257;
  double t4262;
  double t4290;
  double t4294;
  double t4366;
  double t4450;
  double t4489;
  double t4515;
  double t4565;
  double t4596;
  double t4613;
  double t2978;
  double t2991;
  double t3006;
  double t3036;
  double t3069;
  double t3152;
  t232 = Cos(var1[5]);
  t367 = Sin(var1[3]);
  t221 = Cos(var1[3]);
  t316 = Sin(var1[4]);
  t420 = Sin(var1[5]);
  t744 = Sin(var1[13]);
  t339 = t221*t232*t316;
  t512 = t367*t420;
  t559 = t339 + t512;
  t206 = Cos(var1[13]);
  t751 = -1.*t232*t367;
  t773 = t221*t316*t420;
  t820 = t751 + t773;
  t1116 = Cos(var1[15]);
  t677 = t206*t559;
  t875 = -1.*t744*t820;
  t1008 = t677 + t875;
  t148 = Sin(var1[15]);
  t1117 = Cos(var1[14]);
  t1146 = Cos(var1[4]);
  t1152 = t1117*t221*t1146;
  t1188 = Sin(var1[14]);
  t1207 = t744*t559;
  t1211 = t206*t820;
  t1237 = t1207 + t1211;
  t1258 = t1188*t1237;
  t1287 = t1152 + t1258;
  t1321 = Cos(var1[16]);
  t1038 = t148*t1008;
  t1289 = t1116*t1287;
  t1291 = t1038 + t1289;
  t110 = Sin(var1[16]);
  t1339 = t1116*t1008;
  t1351 = -1.*t148*t1287;
  t1381 = t1339 + t1351;
  t1495 = Cos(var1[17]);
  t1300 = -1.*t110*t1291;
  t1392 = t1321*t1381;
  t1426 = t1300 + t1392;
  t89 = Sin(var1[17]);
  t1516 = t1321*t1291;
  t1553 = t110*t1381;
  t1593 = t1516 + t1553;
  t6 = Sin(var1[18]);
  t1774 = t232*t367*t316;
  t1803 = -1.*t221*t420;
  t1804 = t1774 + t1803;
  t1869 = t221*t232;
  t1903 = t367*t316*t420;
  t1922 = t1869 + t1903;
  t1824 = t206*t1804;
  t1934 = -1.*t744*t1922;
  t1960 = t1824 + t1934;
  t1991 = t1117*t1146*t367;
  t2019 = t744*t1804;
  t2050 = t206*t1922;
  t2075 = t2019 + t2050;
  t2077 = t1188*t2075;
  t2117 = t1991 + t2077;
  t1981 = t148*t1960;
  t2134 = t1116*t2117;
  t2142 = t1981 + t2134;
  t2149 = t1116*t1960;
  t2199 = -1.*t148*t2117;
  t2219 = t2149 + t2199;
  t1620 = Cos(var1[18]);
  t2145 = -1.*t110*t2142;
  t2227 = t1321*t2219;
  t2236 = t2145 + t2227;
  t2308 = t1321*t2142;
  t2329 = t110*t2219;
  t2342 = t2308 + t2329;
  t2439 = t206*t1146*t232;
  t2450 = -1.*t1146*t744*t420;
  t2478 = t2439 + t2450;
  t2493 = -1.*t1117*t316;
  t2494 = t1146*t232*t744;
  t2496 = t206*t1146*t420;
  t2501 = t2494 + t2496;
  t2506 = t1188*t2501;
  t2556 = t2493 + t2506;
  t2492 = t148*t2478;
  t2569 = t1116*t2556;
  t2614 = t2492 + t2569;
  t2621 = t1116*t2478;
  t2629 = -1.*t148*t2556;
  t2633 = t2621 + t2629;
  t2615 = -1.*t110*t2614;
  t2644 = t1321*t2633;
  t2700 = t2615 + t2644;
  t2745 = t1321*t2614;
  t2757 = t110*t2633;
  t2765 = t2745 + t2757;
  t1456 = t89*t1426;
  t1597 = t1495*t1593;
  t1613 = t1456 + t1597;
  t1659 = t1495*t1426;
  t1667 = -1.*t89*t1593;
  t1685 = t1659 + t1667;
  t2263 = t89*t2236;
  t2358 = t1495*t2342;
  t2360 = t2263 + t2358;
  t2372 = t1495*t2236;
  t2391 = -1.*t89*t2342;
  t2392 = t2372 + t2391;
  t2701 = t89*t2700;
  t2780 = t1495*t2765;
  t2784 = t2701 + t2780;
  t2821 = t1495*t2700;
  t2869 = -1.*t89*t2765;
  t2882 = t2821 + t2869;
  t3342 = -1.*t1117;
  t3364 = 1. + t3342;
  t3695 = -1.*t1116;
  t3698 = 1. + t3695;
  t3908 = -1.*t1321;
  t3960 = 1. + t3908;
  t4146 = -1.*t1495;
  t4188 = 1. + t4146;
  t4394 = -1.*t1620;
  t4414 = 1. + t4394;
  t2918 = t1620*t1613;
  t2937 = t6*t1685;
  t2949 = t2918 + t2937;
  t3376 = -0.049*t3364;
  t3380 = -0.135*t1188;
  t3392 = 0. + t3376 + t3380;
  t3414 = 0.135*t744;
  t3426 = 0. + t3414;
  t3470 = -1.*t206;
  t3532 = 1. + t3470;
  t3539 = -0.135*t3532;
  t3561 = 0. + t3539;
  t3577 = -0.135*t3364;
  t3605 = 0.049*t1188;
  t3680 = 0. + t3577 + t3605;
  t3714 = -0.09*t3698;
  t3756 = 0.049*t148;
  t3766 = 0. + t3714 + t3756;
  t3891 = -0.049*t3698;
  t3892 = -0.09*t148;
  t3905 = 0. + t3891 + t3892;
  t3961 = -0.049*t3960;
  t3967 = -0.21*t110;
  t3968 = 0. + t3961 + t3967;
  t4071 = -0.21*t3960;
  t4104 = 0.049*t110;
  t4121 = 0. + t4071 + t4104;
  t4251 = -0.2707*t4188;
  t4257 = 0.0016*t89;
  t4262 = 0. + t4251 + t4257;
  t4290 = -0.0016*t4188;
  t4294 = -0.2707*t89;
  t4366 = 0. + t4290 + t4294;
  t4450 = 0.0184*t4414;
  t4489 = -0.7055*t6;
  t4515 = 0. + t4450 + t4489;
  t4565 = -0.7055*t4414;
  t4596 = -0.0184*t6;
  t4613 = 0. + t4565 + t4596;
  t2978 = t1620*t2360;
  t2991 = t6*t2392;
  t3006 = t2978 + t2991;
  t3036 = t1620*t2784;
  t3069 = t6*t2882;
  t3152 = t3036 + t3069;
  p_output1[0]=-1.*t1620*t1685 + t1613*t6;
  p_output1[1]=-1.*t1620*t2392 + t2360*t6;
  p_output1[2]=-1.*t1620*t2882 + t2784*t6;
  p_output1[3]=0.;
  p_output1[4]=t2949;
  p_output1[5]=t3006;
  p_output1[6]=t3152;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1117*t1237 + t1146*t1188*t221;
  p_output1[9]=-1.*t1117*t2075 + t1146*t1188*t367;
  p_output1[10]=-1.*t1117*t2501 - 1.*t1188*t316;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(t1117*t1237 - 1.*t1146*t1188*t221) + 0.0184*t2949 + t1146*t221*t3392 + t1237*t3680 + t1008*t3766 + t1287*t3905 + t1291*t3968 + t1381*t4121 + t1426*t4262 + t1593*t4366 + t1613*t4515 + t1685*t4613 + t3426*t559 - 0.7055*(t1620*t1685 - 1.*t1613*t6) + t3561*t820 + var1[0];
  p_output1[13]=0. + 0.0184*t3006 + t1804*t3426 + t1922*t3561 + t1146*t3392*t367 - 0.1305*(t1117*t2075 - 1.*t1146*t1188*t367) + t2075*t3680 + t1960*t3766 + t2117*t3905 + t2142*t3968 + t2219*t4121 + t2236*t4262 + t2342*t4366 + t2360*t4515 + t2392*t4613 - 0.7055*(t1620*t2392 - 1.*t2360*t6) + var1[1];
  p_output1[14]=0. + 0.0184*t3152 - 0.1305*(t1117*t2501 + t1188*t316) - 1.*t316*t3392 + t1146*t232*t3426 + t2501*t3680 + t2478*t3766 + t2556*t3905 + t2614*t3968 + t2633*t4121 + t1146*t3561*t420 + t2700*t4262 + t2765*t4366 + t2784*t4515 + t2882*t4613 - 0.7055*(t1620*t2882 - 1.*t2784*t6) + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
