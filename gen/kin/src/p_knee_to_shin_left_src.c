/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:11 GMT-05:00
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
  double t2233;
  double t2227;
  double t2234;
  double t2229;
  double t2235;
  double t2189;
  double t2231;
  double t2236;
  double t2245;
  double t2251;
  double t2252;
  double t2255;
  double t2256;
  double t2264;
  double t2269;
  double t2271;
  double t2274;
  double t2261;
  double t2262;
  double t2263;
  double t2279;
  double t2297;
  double t2299;
  double t2300;
  double t2306;
  double t2294;
  double t2295;
  double t2296;
  double t2312;
  double t2313;
  double t2314;
  double t2320;
  double t2321;
  double t2322;
  double t2324;
  double t2327;
  double t2328;
  double t2329;
  double t2336;
  double t2337;
  double t2339;
  double t2341;
  double t2342;
  double t2343;
  double t2345;
  double t2349;
  double t2351;
  double t2352;
  double t2359;
  double t2360;
  double t2362;
  double t2193;
  double t2221;
  double t2223;
  double t2226;
  double t2258;
  double t2259;
  double t2375;
  double t2376;
  double t2377;
  double t2379;
  double t2380;
  double t2381;
  double t2273;
  double t2275;
  double t2277;
  double t2280;
  double t2281;
  double t2286;
  double t2383;
  double t2384;
  double t2385;
  double t2304;
  double t2307;
  double t2309;
  double t2315;
  double t2316;
  double t2318;
  double t2323;
  double t2325;
  double t2326;
  double t2395;
  double t2396;
  double t2397;
  double t2400;
  double t2401;
  double t2403;
  double t2332;
  double t2334;
  double t2335;
  double t2344;
  double t2346;
  double t2348;
  double t2406;
  double t2408;
  double t2409;
  double t2412;
  double t2413;
  double t2414;
  double t2354;
  double t2356;
  double t2357;
  double t2416;
  double t2417;
  double t2418;
  double t2420;
  double t2421;
  double t2422;
  double t2435;
  double t2436;
  double t2437;
  double t2444;
  double t2445;
  double t2446;
  double t2448;
  double t2449;
  double t2450;
  double t2452;
  double t2453;
  double t2454;
  double t2456;
  double t2457;
  double t2458;
  double t2460;
  double t2461;
  double t2462;
  double t2464;
  double t2465;
  double t2466;
  t2233 = Cos(var1[3]);
  t2227 = Cos(var1[5]);
  t2234 = Sin(var1[4]);
  t2229 = Sin(var1[3]);
  t2235 = Sin(var1[5]);
  t2189 = Cos(var1[6]);
  t2231 = -1.*t2227*t2229;
  t2236 = t2233*t2234*t2235;
  t2245 = t2231 + t2236;
  t2251 = t2233*t2227*t2234;
  t2252 = t2229*t2235;
  t2255 = t2251 + t2252;
  t2256 = Sin(var1[6]);
  t2264 = Cos(var1[7]);
  t2269 = -1.*t2264;
  t2271 = 1. + t2269;
  t2274 = Sin(var1[7]);
  t2261 = t2189*t2245;
  t2262 = t2255*t2256;
  t2263 = t2261 + t2262;
  t2279 = Cos(var1[4]);
  t2297 = Cos(var1[8]);
  t2299 = -1.*t2297;
  t2300 = 1. + t2299;
  t2306 = Sin(var1[8]);
  t2294 = t2233*t2279*t2264;
  t2295 = t2263*t2274;
  t2296 = t2294 + t2295;
  t2312 = t2189*t2255;
  t2313 = -1.*t2245*t2256;
  t2314 = t2312 + t2313;
  t2320 = Cos(var1[9]);
  t2321 = -1.*t2320;
  t2322 = 1. + t2321;
  t2324 = Sin(var1[9]);
  t2327 = t2297*t2296;
  t2328 = t2314*t2306;
  t2329 = t2327 + t2328;
  t2336 = t2297*t2314;
  t2337 = -1.*t2296*t2306;
  t2339 = t2336 + t2337;
  t2341 = Cos(var1[10]);
  t2342 = -1.*t2341;
  t2343 = 1. + t2342;
  t2345 = Sin(var1[10]);
  t2349 = -1.*t2324*t2329;
  t2351 = t2320*t2339;
  t2352 = t2349 + t2351;
  t2359 = t2320*t2329;
  t2360 = t2324*t2339;
  t2362 = t2359 + t2360;
  t2193 = -1.*t2189;
  t2221 = 1. + t2193;
  t2223 = 0.135*t2221;
  t2226 = 0. + t2223;
  t2258 = -0.135*t2256;
  t2259 = 0. + t2258;
  t2375 = t2233*t2227;
  t2376 = t2229*t2234*t2235;
  t2377 = t2375 + t2376;
  t2379 = t2227*t2229*t2234;
  t2380 = -1.*t2233*t2235;
  t2381 = t2379 + t2380;
  t2273 = 0.135*t2271;
  t2275 = 0.049*t2274;
  t2277 = 0. + t2273 + t2275;
  t2280 = -0.049*t2271;
  t2281 = 0.135*t2274;
  t2286 = 0. + t2280 + t2281;
  t2383 = t2189*t2377;
  t2384 = t2381*t2256;
  t2385 = t2383 + t2384;
  t2304 = -0.049*t2300;
  t2307 = -0.09*t2306;
  t2309 = 0. + t2304 + t2307;
  t2315 = -0.09*t2300;
  t2316 = 0.049*t2306;
  t2318 = 0. + t2315 + t2316;
  t2323 = -0.049*t2322;
  t2325 = -0.21*t2324;
  t2326 = 0. + t2323 + t2325;
  t2395 = t2279*t2264*t2229;
  t2396 = t2385*t2274;
  t2397 = t2395 + t2396;
  t2400 = t2189*t2381;
  t2401 = -1.*t2377*t2256;
  t2403 = t2400 + t2401;
  t2332 = -0.21*t2322;
  t2334 = 0.049*t2324;
  t2335 = 0. + t2332 + t2334;
  t2344 = -0.2707*t2343;
  t2346 = 0.0016*t2345;
  t2348 = 0. + t2344 + t2346;
  t2406 = t2297*t2397;
  t2408 = t2403*t2306;
  t2409 = t2406 + t2408;
  t2412 = t2297*t2403;
  t2413 = -1.*t2397*t2306;
  t2414 = t2412 + t2413;
  t2354 = -0.0016*t2343;
  t2356 = -0.2707*t2345;
  t2357 = 0. + t2354 + t2356;
  t2416 = -1.*t2324*t2409;
  t2417 = t2320*t2414;
  t2418 = t2416 + t2417;
  t2420 = t2320*t2409;
  t2421 = t2324*t2414;
  t2422 = t2420 + t2421;
  t2435 = t2279*t2189*t2235;
  t2436 = t2279*t2227*t2256;
  t2437 = t2435 + t2436;
  t2444 = -1.*t2264*t2234;
  t2445 = t2437*t2274;
  t2446 = t2444 + t2445;
  t2448 = t2279*t2227*t2189;
  t2449 = -1.*t2279*t2235*t2256;
  t2450 = t2448 + t2449;
  t2452 = t2297*t2446;
  t2453 = t2450*t2306;
  t2454 = t2452 + t2453;
  t2456 = t2297*t2450;
  t2457 = -1.*t2446*t2306;
  t2458 = t2456 + t2457;
  t2460 = -1.*t2324*t2454;
  t2461 = t2320*t2458;
  t2462 = t2460 + t2461;
  t2464 = t2320*t2454;
  t2465 = t2324*t2458;
  t2466 = t2464 + t2465;
  p_output1[0]=0. + t2226*t2245 + t2255*t2259 + t2263*t2277 + 0.1305*(t2263*t2264 - 1.*t2233*t2274*t2279) + t2233*t2279*t2286 + t2296*t2309 + t2314*t2318 + t2326*t2329 + t2335*t2339 + t2348*t2352 + t2357*t2362 - 0.0016*(t2345*t2352 + t2341*t2362) - 0.2707*(t2341*t2352 - 1.*t2345*t2362) + var1[0];
  p_output1[1]=0. + t2229*t2279*t2286 + t2226*t2377 + t2259*t2381 + t2277*t2385 + 0.1305*(-1.*t2229*t2274*t2279 + t2264*t2385) + t2309*t2397 + t2318*t2403 + t2326*t2409 + t2335*t2414 + t2348*t2418 + t2357*t2422 - 0.0016*(t2345*t2418 + t2341*t2422) - 0.2707*(t2341*t2418 - 1.*t2345*t2422) + var1[1];
  p_output1[2]=0. + t2226*t2235*t2279 + t2227*t2259*t2279 - 1.*t2234*t2286 + t2277*t2437 + 0.1305*(t2234*t2274 + t2264*t2437) + t2309*t2446 + t2318*t2450 + t2326*t2454 + t2335*t2458 + t2348*t2462 + t2357*t2466 - 0.0016*(t2345*t2462 + t2341*t2466) - 0.2707*(t2341*t2462 - 1.*t2345*t2466) + var1[2];
}



void p_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
