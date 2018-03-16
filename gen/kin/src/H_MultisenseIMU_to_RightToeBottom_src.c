/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t1718;
  double t1731;
  double t1879;
  double t1815;
  double t1933;
  double t1954;
  double t1926;
  double t1980;
  double t1983;
  double t1984;
  double t1934;
  double t1963;
  double t1967;
  double t1987;
  double t1904;
  double t1997;
  double t2009;
  double t2010;
  double t1975;
  double t1988;
  double t1990;
  double t2017;
  double t1902;
  double t2044;
  double t2050;
  double t2056;
  double t1991;
  double t2026;
  double t2033;
  double t2057;
  double t1898;
  double t2076;
  double t2077;
  double t2080;
  double t2035;
  double t2069;
  double t2072;
  double t2081;
  double t2134;
  double t2138;
  double t2142;
  double t2119;
  double t2123;
  double t2126;
  double t2158;
  double t2161;
  double t2165;
  double t2131;
  double t2144;
  double t2145;
  double t2177;
  double t2179;
  double t2182;
  double t2151;
  double t2166;
  double t2170;
  double t2190;
  double t2191;
  double t2207;
  double t2171;
  double t2183;
  double t2185;
  double t2262;
  double t2267;
  double t2279;
  double t2252;
  double t2253;
  double t2260;
  double t2295;
  double t2302;
  double t2308;
  double t2261;
  double t2282;
  double t2292;
  double t2323;
  double t2328;
  double t2333;
  double t2293;
  double t2310;
  double t2316;
  double t2074;
  double t2084;
  double t2089;
  double t2092;
  double t2104;
  double t2108;
  double t2187;
  double t2215;
  double t2219;
  double t2236;
  double t2239;
  double t2240;
  double t2319;
  double t2335;
  double t2339;
  double t2344;
  double t2351;
  double t2352;
  double t2406;
  double t2408;
  double t2427;
  double t2428;
  double t2443;
  double t2444;
  double t2463;
  double t2465;
  double t2486;
  double t2487;
  double t2391;
  double t2392;
  double t2395;
  double t2398;
  double t2401;
  double t2412;
  double t2413;
  double t2416;
  double t2420;
  double t2421;
  double t2422;
  double t2431;
  double t2434;
  double t2437;
  double t2439;
  double t2440;
  double t2441;
  double t2445;
  double t2446;
  double t2448;
  double t2454;
  double t2455;
  double t2459;
  double t2468;
  double t2470;
  double t2472;
  double t2475;
  double t2478;
  double t2479;
  double t2491;
  double t2493;
  double t2494;
  double t2496;
  double t2497;
  double t2498;
  t1718 = Cos(var1[8]);
  t1731 = Sin(var1[7]);
  t1879 = Sin(var1[8]);
  t1815 = Cos(var1[7]);
  t1933 = Cos(var1[9]);
  t1954 = Sin(var1[9]);
  t1926 = Cos(var1[10]);
  t1980 = t1815*t1933;
  t1983 = -1.*t1731*t1879*t1954;
  t1984 = t1980 + t1983;
  t1934 = t1933*t1731*t1879;
  t1963 = t1815*t1954;
  t1967 = t1934 + t1963;
  t1987 = Sin(var1[10]);
  t1904 = Cos(var1[11]);
  t1997 = t1926*t1984;
  t2009 = -1.*t1967*t1987;
  t2010 = t1997 + t2009;
  t1975 = t1926*t1967;
  t1988 = t1984*t1987;
  t1990 = t1975 + t1988;
  t2017 = Sin(var1[11]);
  t1902 = Cos(var1[12]);
  t2044 = t1904*t2010;
  t2050 = -1.*t1990*t2017;
  t2056 = t2044 + t2050;
  t1991 = t1904*t1990;
  t2026 = t2010*t2017;
  t2033 = t1991 + t2026;
  t2057 = Sin(var1[12]);
  t1898 = Cos(var1[13]);
  t2076 = t1902*t2056;
  t2077 = -1.*t2033*t2057;
  t2080 = t2076 + t2077;
  t2035 = t1902*t2033;
  t2069 = t2056*t2057;
  t2072 = t2035 + t2069;
  t2081 = Sin(var1[13]);
  t2134 = -1.*t1933*t1731;
  t2138 = -1.*t1815*t1879*t1954;
  t2142 = t2134 + t2138;
  t2119 = t1815*t1933*t1879;
  t2123 = -1.*t1731*t1954;
  t2126 = t2119 + t2123;
  t2158 = t1926*t2142;
  t2161 = -1.*t2126*t1987;
  t2165 = t2158 + t2161;
  t2131 = t1926*t2126;
  t2144 = t2142*t1987;
  t2145 = t2131 + t2144;
  t2177 = t1904*t2165;
  t2179 = -1.*t2145*t2017;
  t2182 = t2177 + t2179;
  t2151 = t1904*t2145;
  t2166 = t2165*t2017;
  t2170 = t2151 + t2166;
  t2190 = t1902*t2182;
  t2191 = -1.*t2170*t2057;
  t2207 = t2190 + t2191;
  t2171 = t1902*t2170;
  t2183 = t2182*t2057;
  t2185 = t2171 + t2183;
  t2262 = -1.*t1718*t1926*t1954;
  t2267 = -1.*t1718*t1933*t1987;
  t2279 = t2262 + t2267;
  t2252 = t1718*t1933*t1926;
  t2253 = -1.*t1718*t1954*t1987;
  t2260 = t2252 + t2253;
  t2295 = t1904*t2279;
  t2302 = -1.*t2260*t2017;
  t2308 = t2295 + t2302;
  t2261 = t1904*t2260;
  t2282 = t2279*t2017;
  t2292 = t2261 + t2282;
  t2323 = t1902*t2308;
  t2328 = -1.*t2292*t2057;
  t2333 = t2323 + t2328;
  t2293 = t1902*t2292;
  t2310 = t2308*t2057;
  t2316 = t2293 + t2310;
  t2074 = t1898*t2072;
  t2084 = t2080*t2081;
  t2089 = t2074 + t2084;
  t2092 = t1898*t2080;
  t2104 = -1.*t2072*t2081;
  t2108 = t2092 + t2104;
  t2187 = t1898*t2185;
  t2215 = t2207*t2081;
  t2219 = t2187 + t2215;
  t2236 = t1898*t2207;
  t2239 = -1.*t2185*t2081;
  t2240 = t2236 + t2239;
  t2319 = t1898*t2316;
  t2335 = t2333*t2081;
  t2339 = t2319 + t2335;
  t2344 = t1898*t2333;
  t2351 = -1.*t2316*t2081;
  t2352 = t2344 + t2351;
  t2406 = -1.*t1933;
  t2408 = 1. + t2406;
  t2427 = -1.*t1926;
  t2428 = 1. + t2427;
  t2443 = -1.*t1904;
  t2444 = 1. + t2443;
  t2463 = -1.*t1902;
  t2465 = 1. + t2463;
  t2486 = -1.*t1898;
  t2487 = 1. + t2486;
  t2391 = -1.*t1718;
  t2392 = 1. + t2391;
  t2395 = -0.135*t2392;
  t2398 = 0.049*t1879;
  t2401 = 0. + t2395 + t2398;
  t2412 = -0.049*t2408;
  t2413 = -0.09*t1954;
  t2416 = 0. + t2412 + t2413;
  t2420 = -0.09*t2408;
  t2421 = 0.049*t1954;
  t2422 = 0. + t2420 + t2421;
  t2431 = -0.049*t2428;
  t2434 = -0.21*t1987;
  t2437 = 0. + t2431 + t2434;
  t2439 = -0.21*t2428;
  t2440 = 0.049*t1987;
  t2441 = 0. + t2439 + t2440;
  t2445 = -0.0016*t2444;
  t2446 = -0.2707*t2017;
  t2448 = 0. + t2445 + t2446;
  t2454 = -0.2707*t2444;
  t2455 = 0.0016*t2017;
  t2459 = 0. + t2454 + t2455;
  t2468 = 0.0184*t2465;
  t2470 = -0.7055*t2057;
  t2472 = 0. + t2468 + t2470;
  t2475 = -0.7055*t2465;
  t2478 = -0.0184*t2057;
  t2479 = 0. + t2475 + t2478;
  t2491 = -0.0216*t2487;
  t2493 = -1.1135*t2081;
  t2494 = 0. + t2491 + t2493;
  t2496 = -1.1135*t2487;
  t2497 = 0.0216*t2081;
  t2498 = 0. + t2496 + t2497;
  p_output1[0]=0. + t1718*t1731;
  p_output1[1]=0. - 1.*t1718*t1815;
  p_output1[2]=0. + t1879;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t2089 - 0.766044*t2108;
  p_output1[5]=0. + 0.642788*t2219 + 0.766044*t2240;
  p_output1[6]=0. + 0.642788*t2339 + 0.766044*t2352;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t2089 - 0.642788*t2108;
  p_output1[9]=0. - 0.766044*t2219 + 0.642788*t2240;
  p_output1[10]=0. - 0.766044*t2339 + 0.642788*t2352;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.135*t1731 + 0.1305*t1718*t1731 - 0.0306*t2089 + 1.1312*t2108 - 1.*t1731*t2401 - 1.*t1731*t1879*t2416 - 1.*t1815*t2422 - 1.*t1967*t2437 - 1.*t1984*t2441 - 1.*t1990*t2448 - 1.*t2010*t2459 - 1.*t2033*t2472 - 1.*t2056*t2479 - 1.*t2072*t2494 - 1.*t2080*t2498;
  p_output1[13]=-0.0302 - 0.135*(1. - 1.*t1815) - 0.1305*t1718*t1815 + 0.0306*t2219 - 1.1312*t2240 + t1815*t2401 + t1815*t1879*t2416 - 1.*t1731*t2422 + t2126*t2437 + t2142*t2441 + t2145*t2448 + t2165*t2459 + t2170*t2472 + t2182*t2479 + t2185*t2494 + t2207*t2498;
  p_output1[14]=-0.047 - 0.004500000000000004*t1879 + 0.0306*t2339 - 1.1312*t2352 - 0.049*t2392 + t1718*t2416 + t1718*t1933*t2437 - 1.*t1718*t1954*t2441 + t2260*t2448 + t2279*t2459 + t2292*t2472 + t2308*t2479 + t2316*t2494 + t2333*t2498;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
