/*
 * Automatically Generated from Mathematica.
 * Thu 9 Nov 2017 12:27:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "PotentialEnergy_src.h"

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
  double t23;
  double t44;
  double t83;
  double t106;
  double t157;
  double t204;
  double t108;
  double t119;
  double t123;
  double t164;
  double t181;
  double t198;
  double t199;
  double t207;
  double t269;
  double t272;
  double t273;
  double t315;
  double t211;
  double t212;
  double t236;
  double t249;
  double t258;
  double t259;
  double t277;
  double t334;
  double t340;
  double t342;
  double t372;
  double t379;
  double t401;
  double t402;
  double t420;
  double t423;
  double t424;
  double t481;
  double t494;
  double t508;
  double t532;
  double t436;
  double t439;
  double t441;
  double t513;
  double t536;
  double t538;
  double t548;
  double t584;
  double t593;
  double t597;
  double t604;
  double t605;
  double t606;
  double t612;
  double t722;
  double t723;
  double t727;
  double t747;
  double t636;
  double t642;
  double t646;
  double t740;
  double t754;
  double t773;
  double t792;
  double t796;
  double t804;
  double t808;
  double t814;
  double t817;
  double t818;
  double t852;
  double t911;
  double t912;
  double t913;
  double t940;
  double t879;
  double t881;
  double t884;
  double t927;
  double t941;
  double t948;
  double t974;
  double t989;
  double t1001;
  double t1006;
  double t1009;
  double t1011;
  double t1034;
  double t1040;
  double t1096;
  double t1100;
  double t1126;
  double t1143;
  double t1042;
  double t1056;
  double t1075;
  double t1131;
  double t1148;
  double t1154;
  double t1156;
  double t1164;
  double t1168;
  double t1172;
  double t1182;
  double t1186;
  double t1194;
  double t1195;
  double t1272;
  double t1278;
  double t1288;
  double t1316;
  double t1205;
  double t1212;
  double t1227;
  double t152;
  double t1517;
  double t1558;
  double t1521;
  double t1523;
  double t1530;
  double t1532;
  double t1544;
  double t1584;
  double t1585;
  double t1596;
  double t1634;
  double t1644;
  double t1645;
  double t1599;
  double t1609;
  double t1618;
  double t1676;
  double t1678;
  double t1734;
  double t1740;
  double t1737;
  double t1746;
  double t1754;
  double t1762;
  double t1771;
  double t1772;
  double t1773;
  double t1774;
  double t1801;
  double t1807;
  double t1820;
  double t1839;
  double t1847;
  double t1849;
  double t1947;
  double t1961;
  double t1971;
  double t1991;
  double t1972;
  double t2008;
  double t2013;
  double t2014;
  double t2047;
  double t2062;
  double t2069;
  double t2079;
  double t2122;
  double t2139;
  double t2142;
  double t2206;
  double t2227;
  double t2256;
  double t2273;
  double t2157;
  double t2160;
  double t2166;
  double t2270;
  double t2282;
  double t2285;
  double t2288;
  double t2289;
  double t2298;
  double t2307;
  double t2308;
  double t2311;
  double t2314;
  double t2322;
  double t2371;
  double t2376;
  double t2377;
  double t2405;
  double t2333;
  double t2340;
  double t2345;
  double t2402;
  double t2407;
  double t2414;
  double t2433;
  double t2435;
  double t2454;
  double t2457;
  double t2458;
  double t2459;
  double t2461;
  double t2462;
  double t2487;
  double t2489;
  double t2496;
  double t2509;
  double t2467;
  double t2469;
  double t2471;
  double t2497;
  double t2517;
  double t2524;
  double t2525;
  double t2529;
  double t2532;
  double t2536;
  double t2537;
  double t2539;
  double t2552;
  double t2559;
  double t2611;
  double t2613;
  double t2614;
  double t2622;
  double t2566;
  double t2575;
  double t2579;
  t23 = Cos(var1[4]);
  t44 = Cos(var1[5]);
  t83 = Sin(var1[4]);
  t106 = Sin(var1[13]);
  t157 = Cos(var1[13]);
  t204 = Sin(var1[5]);
  t108 = 0.135*t106;
  t119 = 0. + t108;
  t123 = t23*t44*t119;
  t164 = -1.*t157;
  t181 = 1. + t164;
  t198 = -0.135*t181;
  t199 = 0. + t198;
  t207 = t199*t23*t204;
  t269 = Cos(var1[14]);
  t272 = -1.*t269;
  t273 = 1. + t272;
  t315 = Sin(var1[14]);
  t211 = t23*t44*t106;
  t212 = t157*t23*t204;
  t236 = t211 + t212;
  t249 = t157*t23*t44;
  t258 = -1.*t23*t106*t204;
  t259 = t249 + t258;
  t277 = -0.049*t273;
  t334 = -0.135*t315;
  t340 = 0. + t277 + t334;
  t342 = -1.*t340*t83;
  t372 = -0.135*t273;
  t379 = 0.049*t315;
  t401 = 0. + t372 + t379;
  t402 = t401*t236;
  t420 = t315*t83;
  t423 = t269*t236;
  t424 = t420 + t423;
  t481 = Cos(var1[15]);
  t494 = -1.*t481;
  t508 = 1. + t494;
  t532 = Sin(var1[15]);
  t436 = -1.*t269*t83;
  t439 = t315*t236;
  t441 = t436 + t439;
  t513 = -0.09*t508;
  t536 = 0.049*t532;
  t538 = 0. + t513 + t536;
  t548 = t538*t259;
  t584 = -0.049*t508;
  t593 = -0.09*t532;
  t597 = 0. + t584 + t593;
  t604 = t597*t441;
  t605 = t532*t259;
  t606 = t481*t441;
  t612 = t605 + t606;
  t722 = Cos(var1[16]);
  t723 = -1.*t722;
  t727 = 1. + t723;
  t747 = Sin(var1[16]);
  t636 = t481*t259;
  t642 = -1.*t532*t441;
  t646 = t636 + t642;
  t740 = -0.049*t727;
  t754 = -0.21*t747;
  t773 = 0. + t740 + t754;
  t792 = t773*t612;
  t796 = -0.21*t727;
  t804 = 0.049*t747;
  t808 = 0. + t796 + t804;
  t814 = t808*t646;
  t817 = -1.*t747*t612;
  t818 = t722*t646;
  t852 = t817 + t818;
  t911 = Cos(var1[17]);
  t912 = -1.*t911;
  t913 = 1. + t912;
  t940 = Sin(var1[17]);
  t879 = t722*t612;
  t881 = t747*t646;
  t884 = t879 + t881;
  t927 = -0.2707*t913;
  t941 = 0.0016*t940;
  t948 = 0. + t927 + t941;
  t974 = t948*t852;
  t989 = -0.0016*t913;
  t1001 = -0.2707*t940;
  t1006 = 0. + t989 + t1001;
  t1009 = t1006*t884;
  t1011 = t940*t852;
  t1034 = t911*t884;
  t1040 = t1011 + t1034;
  t1096 = Cos(var1[18]);
  t1100 = -1.*t1096;
  t1126 = 1. + t1100;
  t1143 = Sin(var1[18]);
  t1042 = t911*t852;
  t1056 = -1.*t940*t884;
  t1075 = t1042 + t1056;
  t1131 = 0.0184*t1126;
  t1148 = -0.7055*t1143;
  t1154 = 0. + t1131 + t1148;
  t1156 = t1154*t1040;
  t1164 = -0.7055*t1126;
  t1168 = -0.0184*t1143;
  t1172 = 0. + t1164 + t1168;
  t1182 = t1172*t1075;
  t1186 = -1.*t1143*t1040;
  t1194 = t1096*t1075;
  t1195 = t1186 + t1194;
  t1272 = Cos(var1[19]);
  t1278 = -1.*t1272;
  t1288 = 1. + t1278;
  t1316 = Sin(var1[19]);
  t1205 = t1096*t1040;
  t1212 = t1143*t1075;
  t1227 = t1205 + t1212;
  t152 = 0.0233*t83;
  t1517 = Cos(var1[6]);
  t1558 = Sin(var1[6]);
  t1521 = -1.*t1517;
  t1523 = 1. + t1521;
  t1530 = 0.135*t1523;
  t1532 = 0. + t1530;
  t1544 = t23*t1532*t204;
  t1584 = -0.135*t1558;
  t1585 = 0. + t1584;
  t1596 = t23*t44*t1585;
  t1634 = t23*t44*t1517;
  t1644 = -1.*t23*t204*t1558;
  t1645 = t1634 + t1644;
  t1599 = t23*t1517*t204;
  t1609 = t23*t44*t1558;
  t1618 = t1599 + t1609;
  t1676 = Cos(var1[7]);
  t1678 = -1.*t1676;
  t1734 = 1. + t1678;
  t1740 = Sin(var1[7]);
  t1737 = 0.135*t1734;
  t1746 = 0.049*t1740;
  t1754 = 0. + t1737 + t1746;
  t1762 = t1618*t1754;
  t1771 = -0.049*t1734;
  t1772 = 0.135*t1740;
  t1773 = 0. + t1771 + t1772;
  t1774 = -1.*t83*t1773;
  t1801 = t1676*t1618;
  t1807 = t83*t1740;
  t1820 = t1801 + t1807;
  t1839 = -1.*t1676*t83;
  t1847 = t1618*t1740;
  t1849 = t1839 + t1847;
  t1947 = Cos(var1[8]);
  t1961 = -1.*t1947;
  t1971 = 1. + t1961;
  t1991 = Sin(var1[8]);
  t1972 = -0.049*t1971;
  t2008 = -0.09*t1991;
  t2013 = 0. + t1972 + t2008;
  t2014 = t1849*t2013;
  t2047 = -0.09*t1971;
  t2062 = 0.049*t1991;
  t2069 = 0. + t2047 + t2062;
  t2079 = t1645*t2069;
  t2122 = t1947*t1849;
  t2139 = t1645*t1991;
  t2142 = t2122 + t2139;
  t2206 = Cos(var1[9]);
  t2227 = -1.*t2206;
  t2256 = 1. + t2227;
  t2273 = Sin(var1[9]);
  t2157 = t1947*t1645;
  t2160 = -1.*t1849*t1991;
  t2166 = t2157 + t2160;
  t2270 = -0.049*t2256;
  t2282 = -0.21*t2273;
  t2285 = 0. + t2270 + t2282;
  t2288 = t2285*t2142;
  t2289 = -0.21*t2256;
  t2298 = 0.049*t2273;
  t2307 = 0. + t2289 + t2298;
  t2308 = t2307*t2166;
  t2311 = -1.*t2273*t2142;
  t2314 = t2206*t2166;
  t2322 = t2311 + t2314;
  t2371 = Cos(var1[10]);
  t2376 = -1.*t2371;
  t2377 = 1. + t2376;
  t2405 = Sin(var1[10]);
  t2333 = t2206*t2142;
  t2340 = t2273*t2166;
  t2345 = t2333 + t2340;
  t2402 = -0.2707*t2377;
  t2407 = 0.0016*t2405;
  t2414 = 0. + t2402 + t2407;
  t2433 = t2414*t2322;
  t2435 = -0.0016*t2377;
  t2454 = -0.2707*t2405;
  t2457 = 0. + t2435 + t2454;
  t2458 = t2457*t2345;
  t2459 = t2405*t2322;
  t2461 = t2371*t2345;
  t2462 = t2459 + t2461;
  t2487 = Cos(var1[11]);
  t2489 = -1.*t2487;
  t2496 = 1. + t2489;
  t2509 = Sin(var1[11]);
  t2467 = t2371*t2322;
  t2469 = -1.*t2405*t2345;
  t2471 = t2467 + t2469;
  t2497 = 0.0184*t2496;
  t2517 = -0.7055*t2509;
  t2524 = 0. + t2497 + t2517;
  t2525 = t2524*t2462;
  t2529 = -0.7055*t2496;
  t2532 = -0.0184*t2509;
  t2536 = 0. + t2529 + t2532;
  t2537 = t2536*t2471;
  t2539 = -1.*t2509*t2462;
  t2552 = t2487*t2471;
  t2559 = t2539 + t2552;
  t2611 = Cos(var1[12]);
  t2613 = -1.*t2611;
  t2614 = 1. + t2613;
  t2622 = Sin(var1[12]);
  t2566 = t2487*t2462;
  t2575 = t2509*t2471;
  t2579 = t2566 + t2575;
  p_output1[0]=17.8542*(0. + t152 + t1544 + t1596 + 0.1351*t1618 + 0.0179*t1645 + var1[2]) + 11.4777*(0. + t1544 + t1596 - 0.0343*t1645 + t1762 + t1774 + 0.135*t1820 - 0.049*t1849 + var1[2]) + 54.1512*(0. + t1544 + t1596 + t1762 + t1774 + 0.1708*t1820 + t2014 + t2079 - 0.0489*t2142 - 0.1498*t2166 + var1[2]) + 7.43598*(0. + t1544 + t1596 + t1762 + t1774 + 0.1327*t1820 + t2014 + t2079 + t2288 + t2308 - 0.233*t2322 - 0.0169*t2345 + var1[2]) + 5.66037*(0. + t1544 + t1596 + t1762 + t1774 + 0.1303*t1820 + t2014 + t2079 + t2288 + t2308 + t2433 + t2458 - 0.0004*t2462 - 0.4541*t2471 + var1[2]) + 7.67142*(0. + t1544 + t1596 + t1762 + t1774 + 0.1318*t1820 + t2014 + t2079 + t2288 + t2308 + t2433 + t2458 + t2525 + t2537 - 0.816*t2559 - 0.0122*t2579 + var1[2]) + 17.8542*(0. + t123 + t152 + t207 - 0.1351*t236 + 0.0179*t259 + var1[2]) + 1.4715*(0. + t1544 + t1596 + t1762 + t1774 + 0.1306*t1820 + t2014 + t2079 + t2288 + t2308 + t2433 + t2458 + t2525 + t2537 + t2579*(0. - 0.0216*t2614 - 1.1135*t2622) + t2559*(0. - 1.1135*t2614 + 0.0216*t2622) + 0.0059*(t2579*t2611 + t2559*t2622) - 1.1182*(t2559*t2611 - 1.*t2579*t2622) + var1[2]) + 11.4777*(0. + t123 + t207 - 0.0343*t259 + t342 + t402 - 0.135*t424 - 0.049*t441 + var1[2]) + 54.1512*(0. + t123 + t207 + t342 + t402 - 0.1708*t424 + t548 + t604 - 0.0489*t612 - 0.1498*t646 + var1[2]) + 101.3373*(0.0284*t23*t44 - 0.0507*t83 + var1[2]) + 7.43598*(0. + t123 + t207 + t342 + t402 - 0.1327*t424 + t548 + t604 + t792 + t814 - 0.233*t852 - 0.0169*t884 + var1[2]) + 7.67142*(0. + t1009 + t1156 + t1182 - 0.816*t1195 - 0.0122*t1227 + t123 + t207 + t342 + t402 - 0.1318*t424 + t548 + t604 + t792 + t814 + t974 + var1[2]) + 1.4715*(0. + t1009 + t1156 + t1182 + t123 + t1227*(0. - 0.0216*t1288 - 1.1135*t1316) + t1195*(0. - 1.1135*t1288 + 0.0216*t1316) + 0.0059*(t1227*t1272 + t1195*t1316) - 1.1182*(t1195*t1272 - 1.*t1227*t1316) + t207 + t342 + t402 - 0.1306*t424 + t548 + t604 + t792 + t814 + t974 + var1[2]) + 5.66037*(0. + t1009 - 0.0004*t1040 - 0.4541*t1075 + t123 + t207 + t342 + t402 - 0.1303*t424 + t548 + t604 + t792 + t814 + t974 + var1[2]);
}



void PotentialEnergy_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
