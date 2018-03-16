/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t1866;
  double t1934;
  double t2119;
  double t2084;
  double t2279;
  double t2295;
  double t2244;
  double t2365;
  double t2372;
  double t2383;
  double t2293;
  double t2335;
  double t2344;
  double t2387;
  double t2240;
  double t2420;
  double t2421;
  double t2426;
  double t2360;
  double t2395;
  double t2405;
  double t2439;
  double t2215;
  double t2470;
  double t2491;
  double t2493;
  double t2413;
  double t2445;
  double t2446;
  double t2496;
  double t2187;
  double t2508;
  double t2509;
  double t2512;
  double t2454;
  double t2497;
  double t2504;
  double t2514;
  double t2570;
  double t2574;
  double t2580;
  double t2549;
  double t2550;
  double t2552;
  double t2590;
  double t2592;
  double t2596;
  double t2564;
  double t2581;
  double t2584;
  double t2609;
  double t2614;
  double t2615;
  double t2587;
  double t2602;
  double t2605;
  double t2619;
  double t2620;
  double t2621;
  double t2607;
  double t2616;
  double t2617;
  double t2639;
  double t2640;
  double t2641;
  double t2635;
  double t2636;
  double t2637;
  double t2645;
  double t2646;
  double t2647;
  double t2638;
  double t2642;
  double t2643;
  double t2656;
  double t2657;
  double t2659;
  double t2644;
  double t2649;
  double t2652;
  double t2505;
  double t2518;
  double t2524;
  double t2534;
  double t2535;
  double t2540;
  double t2618;
  double t2622;
  double t2623;
  double t2627;
  double t2628;
  double t2629;
  double t2655;
  double t2660;
  double t2663;
  double t2665;
  double t2666;
  double t2667;
  t1866 = Cos(var1[8]);
  t1934 = Sin(var1[7]);
  t2119 = Sin(var1[8]);
  t2084 = Cos(var1[7]);
  t2279 = Cos(var1[9]);
  t2295 = Sin(var1[9]);
  t2244 = Cos(var1[10]);
  t2365 = t2084*t2279;
  t2372 = -1.*t1934*t2119*t2295;
  t2383 = t2365 + t2372;
  t2293 = t2279*t1934*t2119;
  t2335 = t2084*t2295;
  t2344 = t2293 + t2335;
  t2387 = Sin(var1[10]);
  t2240 = Cos(var1[11]);
  t2420 = t2244*t2383;
  t2421 = -1.*t2344*t2387;
  t2426 = t2420 + t2421;
  t2360 = t2244*t2344;
  t2395 = t2383*t2387;
  t2405 = t2360 + t2395;
  t2439 = Sin(var1[11]);
  t2215 = Cos(var1[12]);
  t2470 = t2240*t2426;
  t2491 = -1.*t2405*t2439;
  t2493 = t2470 + t2491;
  t2413 = t2240*t2405;
  t2445 = t2426*t2439;
  t2446 = t2413 + t2445;
  t2496 = Sin(var1[12]);
  t2187 = Cos(var1[13]);
  t2508 = t2215*t2493;
  t2509 = -1.*t2446*t2496;
  t2512 = t2508 + t2509;
  t2454 = t2215*t2446;
  t2497 = t2493*t2496;
  t2504 = t2454 + t2497;
  t2514 = Sin(var1[13]);
  t2570 = -1.*t2279*t1934;
  t2574 = -1.*t2084*t2119*t2295;
  t2580 = t2570 + t2574;
  t2549 = t2084*t2279*t2119;
  t2550 = -1.*t1934*t2295;
  t2552 = t2549 + t2550;
  t2590 = t2244*t2580;
  t2592 = -1.*t2552*t2387;
  t2596 = t2590 + t2592;
  t2564 = t2244*t2552;
  t2581 = t2580*t2387;
  t2584 = t2564 + t2581;
  t2609 = t2240*t2596;
  t2614 = -1.*t2584*t2439;
  t2615 = t2609 + t2614;
  t2587 = t2240*t2584;
  t2602 = t2596*t2439;
  t2605 = t2587 + t2602;
  t2619 = t2215*t2615;
  t2620 = -1.*t2605*t2496;
  t2621 = t2619 + t2620;
  t2607 = t2215*t2605;
  t2616 = t2615*t2496;
  t2617 = t2607 + t2616;
  t2639 = -1.*t1866*t2244*t2295;
  t2640 = -1.*t1866*t2279*t2387;
  t2641 = t2639 + t2640;
  t2635 = t1866*t2279*t2244;
  t2636 = -1.*t1866*t2295*t2387;
  t2637 = t2635 + t2636;
  t2645 = t2240*t2641;
  t2646 = -1.*t2637*t2439;
  t2647 = t2645 + t2646;
  t2638 = t2240*t2637;
  t2642 = t2641*t2439;
  t2643 = t2638 + t2642;
  t2656 = t2215*t2647;
  t2657 = -1.*t2643*t2496;
  t2659 = t2656 + t2657;
  t2644 = t2215*t2643;
  t2649 = t2647*t2496;
  t2652 = t2644 + t2649;
  t2505 = t2187*t2504;
  t2518 = t2512*t2514;
  t2524 = t2505 + t2518;
  t2534 = t2187*t2512;
  t2535 = -1.*t2504*t2514;
  t2540 = t2534 + t2535;
  t2618 = t2187*t2617;
  t2622 = t2621*t2514;
  t2623 = t2618 + t2622;
  t2627 = t2187*t2621;
  t2628 = -1.*t2617*t2514;
  t2629 = t2627 + t2628;
  t2655 = t2187*t2652;
  t2660 = t2659*t2514;
  t2663 = t2655 + t2660;
  t2665 = t2187*t2659;
  t2666 = -1.*t2652*t2514;
  t2667 = t2665 + t2666;
  p_output1[0]=0. + t1866*t1934;
  p_output1[1]=0. - 1.*t1866*t2084;
  p_output1[2]=0. + t2119;
  p_output1[3]=0. - 0.642788*t2524 - 0.766044*t2540;
  p_output1[4]=0. + 0.642788*t2623 + 0.766044*t2629;
  p_output1[5]=0. + 0.642788*t2663 + 0.766044*t2667;
  p_output1[6]=0. + 0.766044*t2524 - 0.642788*t2540;
  p_output1[7]=0. - 0.766044*t2623 + 0.642788*t2629;
  p_output1[8]=0. - 0.766044*t2663 + 0.642788*t2667;
}



void R_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
