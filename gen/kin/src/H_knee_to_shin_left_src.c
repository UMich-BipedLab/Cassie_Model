/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:03 GMT-04:00
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
  double t2461;
  double t2505;
  double t2511;
  double t2507;
  double t2525;
  double t2501;
  double t2544;
  double t2551;
  double t2557;
  double t2509;
  double t2530;
  double t2532;
  double t2560;
  double t2460;
  double t2579;
  double t2582;
  double t2585;
  double t2462;
  double t2469;
  double t2484;
  double t2539;
  double t2565;
  double t2566;
  double t2568;
  double t2570;
  double t2571;
  double t2586;
  double t2602;
  double t2577;
  double t2588;
  double t2590;
  double t2454;
  double t2603;
  double t2611;
  double t2612;
  double t2427;
  double t2669;
  double t2671;
  double t2674;
  double t2656;
  double t2659;
  double t2660;
  double t2683;
  double t2684;
  double t2686;
  double t2647;
  double t2668;
  double t2675;
  double t2677;
  double t2678;
  double t2681;
  double t2631;
  double t2682;
  double t2688;
  double t2691;
  double t2698;
  double t2699;
  double t2701;
  double t2755;
  double t2756;
  double t2758;
  double t2739;
  double t2741;
  double t2742;
  double t2749;
  double t2751;
  double t2753;
  double t2754;
  double t2760;
  double t2761;
  double t2765;
  double t2771;
  double t2774;
  double t2596;
  double t2618;
  double t2623;
  double t2632;
  double t2635;
  double t2639;
  double t2692;
  double t2703;
  double t2705;
  double t2712;
  double t2713;
  double t2719;
  double t2763;
  double t2778;
  double t2779;
  double t2783;
  double t2785;
  double t2786;
  double t2856;
  double t2857;
  double t2904;
  double t2908;
  double t2922;
  double t2925;
  double t2944;
  double t2946;
  double t2801;
  double t2804;
  double t2806;
  double t2839;
  double t2840;
  double t2841;
  double t2849;
  double t2853;
  double t2854;
  double t2859;
  double t2860;
  double t2876;
  double t2884;
  double t2888;
  double t2890;
  double t2909;
  double t2912;
  double t2913;
  double t2916;
  double t2917;
  double t2919;
  double t2927;
  double t2931;
  double t2932;
  double t2937;
  double t2940;
  double t2941;
  double t2947;
  double t2949;
  double t2952;
  double t2959;
  double t2964;
  double t2966;
  double t2807;
  double t2811;
  double t2812;
  double t2818;
  double t2819;
  double t2821;
  t2461 = Cos(var1[3]);
  t2505 = Cos(var1[5]);
  t2511 = Sin(var1[4]);
  t2507 = Sin(var1[3]);
  t2525 = Sin(var1[5]);
  t2501 = Cos(var1[6]);
  t2544 = t2461*t2505*t2511;
  t2551 = t2507*t2525;
  t2557 = t2544 + t2551;
  t2509 = -1.*t2505*t2507;
  t2530 = t2461*t2511*t2525;
  t2532 = t2509 + t2530;
  t2560 = Sin(var1[6]);
  t2460 = Cos(var1[8]);
  t2579 = t2501*t2557;
  t2582 = -1.*t2532*t2560;
  t2585 = t2579 + t2582;
  t2462 = Cos(var1[4]);
  t2469 = Cos(var1[7]);
  t2484 = t2461*t2462*t2469;
  t2539 = t2501*t2532;
  t2565 = t2557*t2560;
  t2566 = t2539 + t2565;
  t2568 = Sin(var1[7]);
  t2570 = t2566*t2568;
  t2571 = t2484 + t2570;
  t2586 = Sin(var1[8]);
  t2602 = Cos(var1[9]);
  t2577 = t2460*t2571;
  t2588 = t2585*t2586;
  t2590 = t2577 + t2588;
  t2454 = Sin(var1[9]);
  t2603 = t2460*t2585;
  t2611 = -1.*t2571*t2586;
  t2612 = t2603 + t2611;
  t2427 = Cos(var1[10]);
  t2669 = t2505*t2507*t2511;
  t2671 = -1.*t2461*t2525;
  t2674 = t2669 + t2671;
  t2656 = t2461*t2505;
  t2659 = t2507*t2511*t2525;
  t2660 = t2656 + t2659;
  t2683 = t2501*t2674;
  t2684 = -1.*t2660*t2560;
  t2686 = t2683 + t2684;
  t2647 = t2462*t2469*t2507;
  t2668 = t2501*t2660;
  t2675 = t2674*t2560;
  t2677 = t2668 + t2675;
  t2678 = t2677*t2568;
  t2681 = t2647 + t2678;
  t2631 = Sin(var1[10]);
  t2682 = t2460*t2681;
  t2688 = t2686*t2586;
  t2691 = t2682 + t2688;
  t2698 = t2460*t2686;
  t2699 = -1.*t2681*t2586;
  t2701 = t2698 + t2699;
  t2755 = t2462*t2505*t2501;
  t2756 = -1.*t2462*t2525*t2560;
  t2758 = t2755 + t2756;
  t2739 = -1.*t2469*t2511;
  t2741 = t2462*t2501*t2525;
  t2742 = t2462*t2505*t2560;
  t2749 = t2741 + t2742;
  t2751 = t2749*t2568;
  t2753 = t2739 + t2751;
  t2754 = t2460*t2753;
  t2760 = t2758*t2586;
  t2761 = t2754 + t2760;
  t2765 = t2460*t2758;
  t2771 = -1.*t2753*t2586;
  t2774 = t2765 + t2771;
  t2596 = -1.*t2454*t2590;
  t2618 = t2602*t2612;
  t2623 = t2596 + t2618;
  t2632 = t2602*t2590;
  t2635 = t2454*t2612;
  t2639 = t2632 + t2635;
  t2692 = -1.*t2454*t2691;
  t2703 = t2602*t2701;
  t2705 = t2692 + t2703;
  t2712 = t2602*t2691;
  t2713 = t2454*t2701;
  t2719 = t2712 + t2713;
  t2763 = -1.*t2454*t2761;
  t2778 = t2602*t2774;
  t2779 = t2763 + t2778;
  t2783 = t2602*t2761;
  t2785 = t2454*t2774;
  t2786 = t2783 + t2785;
  t2856 = -1.*t2469;
  t2857 = 1. + t2856;
  t2904 = -1.*t2460;
  t2908 = 1. + t2904;
  t2922 = -1.*t2602;
  t2925 = 1. + t2922;
  t2944 = -1.*t2427;
  t2946 = 1. + t2944;
  t2801 = t2631*t2623;
  t2804 = t2427*t2639;
  t2806 = t2801 + t2804;
  t2839 = -1.*t2501;
  t2840 = 1. + t2839;
  t2841 = 0.135*t2840;
  t2849 = 0. + t2841;
  t2853 = -0.135*t2560;
  t2854 = 0. + t2853;
  t2859 = 0.135*t2857;
  t2860 = 0.049*t2568;
  t2876 = 0. + t2859 + t2860;
  t2884 = -0.049*t2857;
  t2888 = 0.135*t2568;
  t2890 = 0. + t2884 + t2888;
  t2909 = -0.049*t2908;
  t2912 = -0.09*t2586;
  t2913 = 0. + t2909 + t2912;
  t2916 = -0.09*t2908;
  t2917 = 0.049*t2586;
  t2919 = 0. + t2916 + t2917;
  t2927 = -0.049*t2925;
  t2931 = -0.21*t2454;
  t2932 = 0. + t2927 + t2931;
  t2937 = -0.21*t2925;
  t2940 = 0.049*t2454;
  t2941 = 0. + t2937 + t2940;
  t2947 = -0.2707*t2946;
  t2949 = 0.0016*t2631;
  t2952 = 0. + t2947 + t2949;
  t2959 = -0.0016*t2946;
  t2964 = -0.2707*t2631;
  t2966 = 0. + t2959 + t2964;
  t2807 = t2631*t2705;
  t2811 = t2427*t2719;
  t2812 = t2807 + t2811;
  t2818 = t2631*t2779;
  t2819 = t2427*t2786;
  t2821 = t2818 + t2819;
  p_output1[0]=-1.*t2427*t2623 + t2631*t2639;
  p_output1[1]=-1.*t2427*t2705 + t2631*t2719;
  p_output1[2]=-1.*t2427*t2779 + t2631*t2786;
  p_output1[3]=0.;
  p_output1[4]=t2806;
  p_output1[5]=t2812;
  p_output1[6]=t2821;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2469*t2566 + t2461*t2462*t2568;
  p_output1[9]=t2462*t2507*t2568 - 1.*t2469*t2677;
  p_output1[10]=-1.*t2511*t2568 - 1.*t2469*t2749;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t2469*t2566 - 1.*t2461*t2462*t2568) - 0.2707*(t2427*t2623 - 1.*t2631*t2639) - 0.0016*t2806 + t2532*t2849 + t2557*t2854 + t2566*t2876 + t2461*t2462*t2890 + t2571*t2913 + t2585*t2919 + t2590*t2932 + t2612*t2941 + t2623*t2952 + t2639*t2966 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t2462*t2507*t2568 + t2469*t2677) - 0.2707*(t2427*t2705 - 1.*t2631*t2719) - 0.0016*t2812 + t2660*t2849 + t2674*t2854 + t2677*t2876 + t2462*t2507*t2890 + t2681*t2913 + t2686*t2919 + t2691*t2932 + t2701*t2941 + t2705*t2952 + t2719*t2966 + var1[1];
  p_output1[14]=0. + 0.1305*(t2511*t2568 + t2469*t2749) - 0.2707*(t2427*t2779 - 1.*t2631*t2786) - 0.0016*t2821 + t2462*t2525*t2849 + t2462*t2505*t2854 + t2749*t2876 - 1.*t2511*t2890 + t2753*t2913 + t2758*t2919 + t2761*t2932 + t2774*t2941 + t2779*t2952 + t2786*t2966 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
