/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:12:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_right_src.h"

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
  double t659;
  double t794;
  double t522;
  double t707;
  double t799;
  double t838;
  double t777;
  double t811;
  double t818;
  double t479;
  double t843;
  double t846;
  double t854;
  double t978;
  double t832;
  double t882;
  double t891;
  double t374;
  double t986;
  double t995;
  double t998;
  double t1002;
  double t1005;
  double t1014;
  double t1023;
  double t1029;
  double t1036;
  double t1258;
  double t927;
  double t1048;
  double t1119;
  double t338;
  double t1271;
  double t1294;
  double t1298;
  double t1447;
  double t1251;
  double t1372;
  double t1387;
  double t249;
  double t1467;
  double t1483;
  double t1489;
  double t142;
  double t1891;
  double t1895;
  double t1907;
  double t1952;
  double t1970;
  double t2005;
  double t1943;
  double t2048;
  double t2066;
  double t2081;
  double t2082;
  double t2110;
  double t2122;
  double t2124;
  double t2144;
  double t2070;
  double t2178;
  double t2212;
  double t2405;
  double t2455;
  double t2462;
  double t1620;
  double t2313;
  double t2465;
  double t2468;
  double t2535;
  double t2554;
  double t2581;
  double t2783;
  double t2829;
  double t2831;
  double t2924;
  double t2957;
  double t3019;
  double t3086;
  double t3104;
  double t3116;
  double t2840;
  double t3146;
  double t3218;
  double t3263;
  double t3271;
  double t3320;
  double t3219;
  double t3364;
  double t3373;
  double t3470;
  double t3480;
  double t3494;
  double t1401;
  double t1514;
  double t1575;
  double t1684;
  double t1727;
  double t1808;
  double t2515;
  double t2591;
  double t2606;
  double t2701;
  double t2710;
  double t2722;
  double t3394;
  double t3504;
  double t3537;
  double t3542;
  double t3543;
  double t3563;
  double t3930;
  double t4244;
  double t4693;
  double t4707;
  double t4971;
  double t4980;
  double t5125;
  double t5152;
  double t5293;
  double t5434;
  double t3609;
  double t3654;
  double t3660;
  double t4289;
  double t4293;
  double t4434;
  double t4454;
  double t4456;
  double t4503;
  double t4508;
  double t4514;
  double t4564;
  double t4599;
  double t4619;
  double t4633;
  double t4708;
  double t4720;
  double t4734;
  double t4860;
  double t4899;
  double t4950;
  double t4982;
  double t5001;
  double t5026;
  double t5066;
  double t5071;
  double t5077;
  double t5163;
  double t5205;
  double t5263;
  double t5270;
  double t5275;
  double t5276;
  double t5449;
  double t5453;
  double t5463;
  double t5641;
  double t5661;
  double t5666;
  double t3664;
  double t3672;
  double t3674;
  double t3694;
  double t3730;
  double t3773;
  t659 = Cos(var1[5]);
  t794 = Sin(var1[3]);
  t522 = Cos(var1[3]);
  t707 = Sin(var1[4]);
  t799 = Sin(var1[5]);
  t838 = Sin(var1[13]);
  t777 = t522*t659*t707;
  t811 = t794*t799;
  t818 = t777 + t811;
  t479 = Cos(var1[13]);
  t843 = -1.*t659*t794;
  t846 = t522*t707*t799;
  t854 = t843 + t846;
  t978 = Cos(var1[15]);
  t832 = t479*t818;
  t882 = -1.*t838*t854;
  t891 = t832 + t882;
  t374 = Sin(var1[15]);
  t986 = Cos(var1[14]);
  t995 = Cos(var1[4]);
  t998 = t986*t522*t995;
  t1002 = Sin(var1[14]);
  t1005 = t838*t818;
  t1014 = t479*t854;
  t1023 = t1005 + t1014;
  t1029 = t1002*t1023;
  t1036 = t998 + t1029;
  t1258 = Cos(var1[16]);
  t927 = t374*t891;
  t1048 = t978*t1036;
  t1119 = t927 + t1048;
  t338 = Sin(var1[16]);
  t1271 = t978*t891;
  t1294 = -1.*t374*t1036;
  t1298 = t1271 + t1294;
  t1447 = Cos(var1[17]);
  t1251 = -1.*t338*t1119;
  t1372 = t1258*t1298;
  t1387 = t1251 + t1372;
  t249 = Sin(var1[17]);
  t1467 = t1258*t1119;
  t1483 = t338*t1298;
  t1489 = t1467 + t1483;
  t142 = Sin(var1[18]);
  t1891 = t659*t794*t707;
  t1895 = -1.*t522*t799;
  t1907 = t1891 + t1895;
  t1952 = t522*t659;
  t1970 = t794*t707*t799;
  t2005 = t1952 + t1970;
  t1943 = t479*t1907;
  t2048 = -1.*t838*t2005;
  t2066 = t1943 + t2048;
  t2081 = t986*t995*t794;
  t2082 = t838*t1907;
  t2110 = t479*t2005;
  t2122 = t2082 + t2110;
  t2124 = t1002*t2122;
  t2144 = t2081 + t2124;
  t2070 = t374*t2066;
  t2178 = t978*t2144;
  t2212 = t2070 + t2178;
  t2405 = t978*t2066;
  t2455 = -1.*t374*t2144;
  t2462 = t2405 + t2455;
  t1620 = Cos(var1[18]);
  t2313 = -1.*t338*t2212;
  t2465 = t1258*t2462;
  t2468 = t2313 + t2465;
  t2535 = t1258*t2212;
  t2554 = t338*t2462;
  t2581 = t2535 + t2554;
  t2783 = t479*t995*t659;
  t2829 = -1.*t995*t838*t799;
  t2831 = t2783 + t2829;
  t2924 = -1.*t986*t707;
  t2957 = t995*t659*t838;
  t3019 = t479*t995*t799;
  t3086 = t2957 + t3019;
  t3104 = t1002*t3086;
  t3116 = t2924 + t3104;
  t2840 = t374*t2831;
  t3146 = t978*t3116;
  t3218 = t2840 + t3146;
  t3263 = t978*t2831;
  t3271 = -1.*t374*t3116;
  t3320 = t3263 + t3271;
  t3219 = -1.*t338*t3218;
  t3364 = t1258*t3320;
  t3373 = t3219 + t3364;
  t3470 = t1258*t3218;
  t3480 = t338*t3320;
  t3494 = t3470 + t3480;
  t1401 = t249*t1387;
  t1514 = t1447*t1489;
  t1575 = t1401 + t1514;
  t1684 = t1447*t1387;
  t1727 = -1.*t249*t1489;
  t1808 = t1684 + t1727;
  t2515 = t249*t2468;
  t2591 = t1447*t2581;
  t2606 = t2515 + t2591;
  t2701 = t1447*t2468;
  t2710 = -1.*t249*t2581;
  t2722 = t2701 + t2710;
  t3394 = t249*t3373;
  t3504 = t1447*t3494;
  t3537 = t3394 + t3504;
  t3542 = t1447*t3373;
  t3543 = -1.*t249*t3494;
  t3563 = t3542 + t3543;
  t3930 = -1.*t986;
  t4244 = 1. + t3930;
  t4693 = -1.*t978;
  t4707 = 1. + t4693;
  t4971 = -1.*t1258;
  t4980 = 1. + t4971;
  t5125 = -1.*t1447;
  t5152 = 1. + t5125;
  t5293 = -1.*t1620;
  t5434 = 1. + t5293;
  t3609 = t1620*t1575;
  t3654 = t142*t1808;
  t3660 = t3609 + t3654;
  t4289 = -0.049*t4244;
  t4293 = -0.135*t1002;
  t4434 = 0. + t4289 + t4293;
  t4454 = 0.135*t838;
  t4456 = 0. + t4454;
  t4503 = -1.*t479;
  t4508 = 1. + t4503;
  t4514 = -0.135*t4508;
  t4564 = 0. + t4514;
  t4599 = -0.135*t4244;
  t4619 = 0.049*t1002;
  t4633 = 0. + t4599 + t4619;
  t4708 = -0.09*t4707;
  t4720 = 0.049*t374;
  t4734 = 0. + t4708 + t4720;
  t4860 = -0.049*t4707;
  t4899 = -0.09*t374;
  t4950 = 0. + t4860 + t4899;
  t4982 = -0.049*t4980;
  t5001 = -0.21*t338;
  t5026 = 0. + t4982 + t5001;
  t5066 = -0.21*t4980;
  t5071 = 0.049*t338;
  t5077 = 0. + t5066 + t5071;
  t5163 = -0.2707*t5152;
  t5205 = 0.0016*t249;
  t5263 = 0. + t5163 + t5205;
  t5270 = -0.0016*t5152;
  t5275 = -0.2707*t249;
  t5276 = 0. + t5270 + t5275;
  t5449 = 0.0184*t5434;
  t5453 = -0.7055*t142;
  t5463 = 0. + t5449 + t5453;
  t5641 = -0.7055*t5434;
  t5661 = -0.0184*t142;
  t5666 = 0. + t5641 + t5661;
  t3664 = t1620*t2606;
  t3672 = t142*t2722;
  t3674 = t3664 + t3672;
  t3694 = t1620*t3537;
  t3730 = t142*t3563;
  t3773 = t3694 + t3730;
  p_output1[0]=t142*t1575 - 1.*t1620*t1808;
  p_output1[1]=t142*t2606 - 1.*t1620*t2722;
  p_output1[2]=t142*t3537 - 1.*t1620*t3563;
  p_output1[3]=0.;
  p_output1[4]=t3660;
  p_output1[5]=t3674;
  p_output1[6]=t3773;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1023*t986 + t1002*t522*t995;
  p_output1[9]=-1.*t2122*t986 + t1002*t794*t995;
  p_output1[10]=-1.*t1002*t707 - 1.*t3086*t986;
  p_output1[11]=0.;
  p_output1[12]=0. - 1.1135*(-1.*t142*t1575 + t1620*t1808) - 0.0216*t3660 + t1023*t4633 + t1036*t4950 + t1119*t5026 + t1298*t5077 + t1387*t5263 + t1489*t5276 + t1575*t5463 + t1808*t5666 + t4456*t818 + t4564*t854 + t4734*t891 + t4434*t522*t995 - 0.1305*(t1023*t986 - 1.*t1002*t522*t995) + var1[0];
  p_output1[13]=0. - 1.1135*(-1.*t142*t2606 + t1620*t2722) - 0.0216*t3674 + t1907*t4456 + t2005*t4564 + t2122*t4633 + t2066*t4734 + t2144*t4950 + t2212*t5026 + t2462*t5077 + t2468*t5263 + t2581*t5276 + t2606*t5463 + t2722*t5666 + t4434*t794*t995 - 0.1305*(t2122*t986 - 1.*t1002*t794*t995) + var1[1];
  p_output1[14]=0. - 1.1135*(-1.*t142*t3537 + t1620*t3563) - 0.0216*t3773 + t3086*t4633 + t2831*t4734 + t3116*t4950 + t3218*t5026 + t3320*t5077 + t3373*t5263 + t3494*t5276 + t3537*t5463 + t3563*t5666 - 1.*t4434*t707 - 0.1305*(t1002*t707 + t3086*t986) + t4456*t659*t995 + t4564*t799*t995 + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
