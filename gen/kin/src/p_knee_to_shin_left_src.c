/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_left_src.h"

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
  double t2197;
  double t2191;
  double t2198;
  double t2193;
  double t2199;
  double t2153;
  double t2195;
  double t2200;
  double t2209;
  double t2215;
  double t2216;
  double t2219;
  double t2220;
  double t2228;
  double t2233;
  double t2235;
  double t2238;
  double t2225;
  double t2226;
  double t2227;
  double t2243;
  double t2261;
  double t2263;
  double t2264;
  double t2270;
  double t2258;
  double t2259;
  double t2260;
  double t2276;
  double t2277;
  double t2278;
  double t2284;
  double t2285;
  double t2286;
  double t2288;
  double t2291;
  double t2292;
  double t2293;
  double t2300;
  double t2301;
  double t2303;
  double t2305;
  double t2306;
  double t2307;
  double t2309;
  double t2313;
  double t2315;
  double t2316;
  double t2323;
  double t2324;
  double t2326;
  double t2157;
  double t2185;
  double t2187;
  double t2190;
  double t2222;
  double t2223;
  double t2339;
  double t2340;
  double t2341;
  double t2343;
  double t2344;
  double t2345;
  double t2237;
  double t2239;
  double t2241;
  double t2244;
  double t2245;
  double t2250;
  double t2347;
  double t2348;
  double t2349;
  double t2268;
  double t2271;
  double t2273;
  double t2279;
  double t2280;
  double t2282;
  double t2287;
  double t2289;
  double t2290;
  double t2359;
  double t2360;
  double t2361;
  double t2364;
  double t2365;
  double t2367;
  double t2296;
  double t2298;
  double t2299;
  double t2308;
  double t2310;
  double t2312;
  double t2370;
  double t2372;
  double t2373;
  double t2376;
  double t2377;
  double t2378;
  double t2318;
  double t2320;
  double t2321;
  double t2380;
  double t2381;
  double t2382;
  double t2384;
  double t2385;
  double t2386;
  double t2399;
  double t2400;
  double t2401;
  double t2408;
  double t2409;
  double t2410;
  double t2412;
  double t2413;
  double t2414;
  double t2416;
  double t2417;
  double t2418;
  double t2420;
  double t2421;
  double t2422;
  double t2424;
  double t2425;
  double t2426;
  double t2428;
  double t2429;
  double t2430;
  t2197 = Cos(var1[3]);
  t2191 = Cos(var1[5]);
  t2198 = Sin(var1[4]);
  t2193 = Sin(var1[3]);
  t2199 = Sin(var1[5]);
  t2153 = Cos(var1[6]);
  t2195 = -1.*t2191*t2193;
  t2200 = t2197*t2198*t2199;
  t2209 = t2195 + t2200;
  t2215 = t2197*t2191*t2198;
  t2216 = t2193*t2199;
  t2219 = t2215 + t2216;
  t2220 = Sin(var1[6]);
  t2228 = Cos(var1[7]);
  t2233 = -1.*t2228;
  t2235 = 1. + t2233;
  t2238 = Sin(var1[7]);
  t2225 = t2153*t2209;
  t2226 = t2219*t2220;
  t2227 = t2225 + t2226;
  t2243 = Cos(var1[4]);
  t2261 = Cos(var1[8]);
  t2263 = -1.*t2261;
  t2264 = 1. + t2263;
  t2270 = Sin(var1[8]);
  t2258 = t2197*t2243*t2228;
  t2259 = t2227*t2238;
  t2260 = t2258 + t2259;
  t2276 = t2153*t2219;
  t2277 = -1.*t2209*t2220;
  t2278 = t2276 + t2277;
  t2284 = Cos(var1[9]);
  t2285 = -1.*t2284;
  t2286 = 1. + t2285;
  t2288 = Sin(var1[9]);
  t2291 = t2261*t2260;
  t2292 = t2278*t2270;
  t2293 = t2291 + t2292;
  t2300 = t2261*t2278;
  t2301 = -1.*t2260*t2270;
  t2303 = t2300 + t2301;
  t2305 = Cos(var1[10]);
  t2306 = -1.*t2305;
  t2307 = 1. + t2306;
  t2309 = Sin(var1[10]);
  t2313 = -1.*t2288*t2293;
  t2315 = t2284*t2303;
  t2316 = t2313 + t2315;
  t2323 = t2284*t2293;
  t2324 = t2288*t2303;
  t2326 = t2323 + t2324;
  t2157 = -1.*t2153;
  t2185 = 1. + t2157;
  t2187 = 0.135*t2185;
  t2190 = 0. + t2187;
  t2222 = -0.135*t2220;
  t2223 = 0. + t2222;
  t2339 = t2197*t2191;
  t2340 = t2193*t2198*t2199;
  t2341 = t2339 + t2340;
  t2343 = t2191*t2193*t2198;
  t2344 = -1.*t2197*t2199;
  t2345 = t2343 + t2344;
  t2237 = 0.135*t2235;
  t2239 = 0.049*t2238;
  t2241 = 0. + t2237 + t2239;
  t2244 = -0.049*t2235;
  t2245 = 0.135*t2238;
  t2250 = 0. + t2244 + t2245;
  t2347 = t2153*t2341;
  t2348 = t2345*t2220;
  t2349 = t2347 + t2348;
  t2268 = -0.049*t2264;
  t2271 = -0.09*t2270;
  t2273 = 0. + t2268 + t2271;
  t2279 = -0.09*t2264;
  t2280 = 0.049*t2270;
  t2282 = 0. + t2279 + t2280;
  t2287 = -0.049*t2286;
  t2289 = -0.21*t2288;
  t2290 = 0. + t2287 + t2289;
  t2359 = t2243*t2228*t2193;
  t2360 = t2349*t2238;
  t2361 = t2359 + t2360;
  t2364 = t2153*t2345;
  t2365 = -1.*t2341*t2220;
  t2367 = t2364 + t2365;
  t2296 = -0.21*t2286;
  t2298 = 0.049*t2288;
  t2299 = 0. + t2296 + t2298;
  t2308 = -0.2707*t2307;
  t2310 = 0.0016*t2309;
  t2312 = 0. + t2308 + t2310;
  t2370 = t2261*t2361;
  t2372 = t2367*t2270;
  t2373 = t2370 + t2372;
  t2376 = t2261*t2367;
  t2377 = -1.*t2361*t2270;
  t2378 = t2376 + t2377;
  t2318 = -0.0016*t2307;
  t2320 = -0.2707*t2309;
  t2321 = 0. + t2318 + t2320;
  t2380 = -1.*t2288*t2373;
  t2381 = t2284*t2378;
  t2382 = t2380 + t2381;
  t2384 = t2284*t2373;
  t2385 = t2288*t2378;
  t2386 = t2384 + t2385;
  t2399 = t2243*t2153*t2199;
  t2400 = t2243*t2191*t2220;
  t2401 = t2399 + t2400;
  t2408 = -1.*t2228*t2198;
  t2409 = t2401*t2238;
  t2410 = t2408 + t2409;
  t2412 = t2243*t2191*t2153;
  t2413 = -1.*t2243*t2199*t2220;
  t2414 = t2412 + t2413;
  t2416 = t2261*t2410;
  t2417 = t2414*t2270;
  t2418 = t2416 + t2417;
  t2420 = t2261*t2414;
  t2421 = -1.*t2410*t2270;
  t2422 = t2420 + t2421;
  t2424 = -1.*t2288*t2418;
  t2425 = t2284*t2422;
  t2426 = t2424 + t2425;
  t2428 = t2284*t2418;
  t2429 = t2288*t2422;
  t2430 = t2428 + t2429;
  p_output1[0]=0. + t2190*t2209 + t2219*t2223 + t2227*t2241 + 0.1305*(t2227*t2228 - 1.*t2197*t2238*t2243) + t2197*t2243*t2250 + t2260*t2273 + t2278*t2282 + t2290*t2293 + t2299*t2303 + t2312*t2316 + t2321*t2326 - 0.0016*(t2309*t2316 + t2305*t2326) - 0.2707*(t2305*t2316 - 1.*t2309*t2326) + var1[0];
  p_output1[1]=0. + t2193*t2243*t2250 + t2190*t2341 + t2223*t2345 + t2241*t2349 + 0.1305*(-1.*t2193*t2238*t2243 + t2228*t2349) + t2273*t2361 + t2282*t2367 + t2290*t2373 + t2299*t2378 + t2312*t2382 + t2321*t2386 - 0.0016*(t2309*t2382 + t2305*t2386) - 0.2707*(t2305*t2382 - 1.*t2309*t2386) + var1[1];
  p_output1[2]=0. + t2190*t2199*t2243 + t2191*t2223*t2243 - 1.*t2198*t2250 + t2241*t2401 + 0.1305*(t2198*t2238 + t2228*t2401) + t2273*t2410 + t2282*t2414 + t2290*t2418 + t2299*t2422 + t2312*t2426 + t2321*t2430 - 0.0016*(t2309*t2426 + t2305*t2430) - 0.2707*(t2305*t2426 - 1.*t2309*t2430) + var1[2];
}



void p_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
