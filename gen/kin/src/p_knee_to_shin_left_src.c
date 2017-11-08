/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:08 GMT-05:00
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
  double t2349;
  double t2345;
  double t2350;
  double t2346;
  double t2351;
  double t2317;
  double t2348;
  double t2352;
  double t2359;
  double t2362;
  double t2363;
  double t2365;
  double t2366;
  double t2374;
  double t2379;
  double t2381;
  double t2383;
  double t2371;
  double t2372;
  double t2373;
  double t2388;
  double t2405;
  double t2408;
  double t2409;
  double t2411;
  double t2402;
  double t2403;
  double t2404;
  double t2415;
  double t2416;
  double t2417;
  double t2424;
  double t2425;
  double t2426;
  double t2429;
  double t2432;
  double t2433;
  double t2434;
  double t2441;
  double t2442;
  double t2443;
  double t2324;
  double t2340;
  double t2343;
  double t2344;
  double t2368;
  double t2369;
  double t2457;
  double t2458;
  double t2459;
  double t2461;
  double t2462;
  double t2463;
  double t2382;
  double t2384;
  double t2386;
  double t2389;
  double t2390;
  double t2394;
  double t2465;
  double t2466;
  double t2467;
  double t2410;
  double t2412;
  double t2413;
  double t2418;
  double t2419;
  double t2421;
  double t2427;
  double t2430;
  double t2431;
  double t2477;
  double t2478;
  double t2479;
  double t2482;
  double t2483;
  double t2486;
  double t2436;
  double t2438;
  double t2439;
  double t2488;
  double t2489;
  double t2490;
  double t2492;
  double t2493;
  double t2494;
  double t2507;
  double t2508;
  double t2509;
  double t2516;
  double t2517;
  double t2518;
  double t2520;
  double t2521;
  double t2522;
  double t2524;
  double t2525;
  double t2526;
  double t2528;
  double t2529;
  double t2530;
  t2349 = Cos(var1[3]);
  t2345 = Cos(var1[5]);
  t2350 = Sin(var1[4]);
  t2346 = Sin(var1[3]);
  t2351 = Sin(var1[5]);
  t2317 = Cos(var1[6]);
  t2348 = -1.*t2345*t2346;
  t2352 = t2349*t2350*t2351;
  t2359 = t2348 + t2352;
  t2362 = t2349*t2345*t2350;
  t2363 = t2346*t2351;
  t2365 = t2362 + t2363;
  t2366 = Sin(var1[6]);
  t2374 = Cos(var1[7]);
  t2379 = -1.*t2374;
  t2381 = 1. + t2379;
  t2383 = Sin(var1[7]);
  t2371 = t2317*t2359;
  t2372 = t2365*t2366;
  t2373 = t2371 + t2372;
  t2388 = Cos(var1[4]);
  t2405 = Cos(var1[8]);
  t2408 = -1.*t2405;
  t2409 = 1. + t2408;
  t2411 = Sin(var1[8]);
  t2402 = t2349*t2388*t2374;
  t2403 = t2373*t2383;
  t2404 = t2402 + t2403;
  t2415 = t2317*t2365;
  t2416 = -1.*t2359*t2366;
  t2417 = t2415 + t2416;
  t2424 = Cos(var1[9]);
  t2425 = -1.*t2424;
  t2426 = 1. + t2425;
  t2429 = Sin(var1[9]);
  t2432 = t2405*t2404;
  t2433 = t2417*t2411;
  t2434 = t2432 + t2433;
  t2441 = t2405*t2417;
  t2442 = -1.*t2404*t2411;
  t2443 = t2441 + t2442;
  t2324 = -1.*t2317;
  t2340 = 1. + t2324;
  t2343 = 0.135*t2340;
  t2344 = 0. + t2343;
  t2368 = -0.135*t2366;
  t2369 = 0. + t2368;
  t2457 = t2349*t2345;
  t2458 = t2346*t2350*t2351;
  t2459 = t2457 + t2458;
  t2461 = t2345*t2346*t2350;
  t2462 = -1.*t2349*t2351;
  t2463 = t2461 + t2462;
  t2382 = 0.135*t2381;
  t2384 = 0.049*t2383;
  t2386 = 0. + t2382 + t2384;
  t2389 = -0.049*t2381;
  t2390 = 0.135*t2383;
  t2394 = 0. + t2389 + t2390;
  t2465 = t2317*t2459;
  t2466 = t2463*t2366;
  t2467 = t2465 + t2466;
  t2410 = -0.049*t2409;
  t2412 = -0.09*t2411;
  t2413 = 0. + t2410 + t2412;
  t2418 = -0.09*t2409;
  t2419 = 0.049*t2411;
  t2421 = 0. + t2418 + t2419;
  t2427 = -0.049*t2426;
  t2430 = -0.21*t2429;
  t2431 = 0. + t2427 + t2430;
  t2477 = t2388*t2374*t2346;
  t2478 = t2467*t2383;
  t2479 = t2477 + t2478;
  t2482 = t2317*t2463;
  t2483 = -1.*t2459*t2366;
  t2486 = t2482 + t2483;
  t2436 = -0.21*t2426;
  t2438 = 0.049*t2429;
  t2439 = 0. + t2436 + t2438;
  t2488 = t2405*t2479;
  t2489 = t2486*t2411;
  t2490 = t2488 + t2489;
  t2492 = t2405*t2486;
  t2493 = -1.*t2479*t2411;
  t2494 = t2492 + t2493;
  t2507 = t2388*t2317*t2351;
  t2508 = t2388*t2345*t2366;
  t2509 = t2507 + t2508;
  t2516 = -1.*t2374*t2350;
  t2517 = t2509*t2383;
  t2518 = t2516 + t2517;
  t2520 = t2388*t2345*t2317;
  t2521 = -1.*t2388*t2351*t2366;
  t2522 = t2520 + t2521;
  t2524 = t2405*t2518;
  t2525 = t2522*t2411;
  t2526 = t2524 + t2525;
  t2528 = t2405*t2522;
  t2529 = -1.*t2518*t2411;
  t2530 = t2528 + t2529;
  p_output1[0]=0. + t2344*t2359 + t2365*t2369 + t2373*t2386 + 0.1305*(t2373*t2374 - 1.*t2349*t2383*t2388) + t2349*t2388*t2394 + t2404*t2413 + t2417*t2421 + t2431*t2434 + t2439*t2443 - 0.2707*(-1.*t2429*t2434 + t2424*t2443) - 0.0016*(t2424*t2434 + t2429*t2443) + var1[0];
  p_output1[1]=0. + t2346*t2388*t2394 + t2344*t2459 + t2369*t2463 + t2386*t2467 + 0.1305*(-1.*t2346*t2383*t2388 + t2374*t2467) + t2413*t2479 + t2421*t2486 + t2431*t2490 + t2439*t2494 - 0.2707*(-1.*t2429*t2490 + t2424*t2494) - 0.0016*(t2424*t2490 + t2429*t2494) + var1[1];
  p_output1[2]=0. + t2344*t2351*t2388 + t2345*t2369*t2388 - 1.*t2350*t2394 + t2386*t2509 + 0.1305*(t2350*t2383 + t2374*t2509) + t2413*t2518 + t2421*t2522 + t2431*t2526 + t2439*t2530 - 0.2707*(-1.*t2429*t2526 + t2424*t2530) - 0.0016*(t2424*t2526 + t2429*t2530) + var1[2];
}



void p_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
