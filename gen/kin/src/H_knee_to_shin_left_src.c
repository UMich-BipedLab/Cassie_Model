/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:14 GMT-05:00
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
  double t2497;
  double t2541;
  double t2547;
  double t2543;
  double t2561;
  double t2537;
  double t2580;
  double t2587;
  double t2593;
  double t2545;
  double t2566;
  double t2568;
  double t2596;
  double t2496;
  double t2615;
  double t2618;
  double t2621;
  double t2498;
  double t2505;
  double t2520;
  double t2575;
  double t2601;
  double t2602;
  double t2604;
  double t2606;
  double t2607;
  double t2622;
  double t2638;
  double t2613;
  double t2624;
  double t2626;
  double t2490;
  double t2639;
  double t2647;
  double t2648;
  double t2463;
  double t2705;
  double t2707;
  double t2710;
  double t2692;
  double t2695;
  double t2696;
  double t2719;
  double t2720;
  double t2722;
  double t2683;
  double t2704;
  double t2711;
  double t2713;
  double t2714;
  double t2717;
  double t2667;
  double t2718;
  double t2724;
  double t2727;
  double t2734;
  double t2735;
  double t2737;
  double t2791;
  double t2792;
  double t2794;
  double t2775;
  double t2777;
  double t2778;
  double t2785;
  double t2787;
  double t2789;
  double t2790;
  double t2796;
  double t2797;
  double t2801;
  double t2807;
  double t2810;
  double t2632;
  double t2654;
  double t2659;
  double t2668;
  double t2671;
  double t2675;
  double t2728;
  double t2739;
  double t2741;
  double t2748;
  double t2749;
  double t2755;
  double t2799;
  double t2814;
  double t2815;
  double t2819;
  double t2821;
  double t2822;
  double t2892;
  double t2893;
  double t2940;
  double t2944;
  double t2958;
  double t2961;
  double t2980;
  double t2982;
  double t2837;
  double t2840;
  double t2842;
  double t2875;
  double t2876;
  double t2877;
  double t2885;
  double t2889;
  double t2890;
  double t2895;
  double t2896;
  double t2912;
  double t2920;
  double t2924;
  double t2926;
  double t2945;
  double t2948;
  double t2949;
  double t2952;
  double t2953;
  double t2955;
  double t2963;
  double t2967;
  double t2968;
  double t2973;
  double t2976;
  double t2977;
  double t2983;
  double t2985;
  double t2988;
  double t2995;
  double t3000;
  double t3002;
  double t2843;
  double t2847;
  double t2848;
  double t2854;
  double t2855;
  double t2857;
  t2497 = Cos(var1[3]);
  t2541 = Cos(var1[5]);
  t2547 = Sin(var1[4]);
  t2543 = Sin(var1[3]);
  t2561 = Sin(var1[5]);
  t2537 = Cos(var1[6]);
  t2580 = t2497*t2541*t2547;
  t2587 = t2543*t2561;
  t2593 = t2580 + t2587;
  t2545 = -1.*t2541*t2543;
  t2566 = t2497*t2547*t2561;
  t2568 = t2545 + t2566;
  t2596 = Sin(var1[6]);
  t2496 = Cos(var1[8]);
  t2615 = t2537*t2593;
  t2618 = -1.*t2568*t2596;
  t2621 = t2615 + t2618;
  t2498 = Cos(var1[4]);
  t2505 = Cos(var1[7]);
  t2520 = t2497*t2498*t2505;
  t2575 = t2537*t2568;
  t2601 = t2593*t2596;
  t2602 = t2575 + t2601;
  t2604 = Sin(var1[7]);
  t2606 = t2602*t2604;
  t2607 = t2520 + t2606;
  t2622 = Sin(var1[8]);
  t2638 = Cos(var1[9]);
  t2613 = t2496*t2607;
  t2624 = t2621*t2622;
  t2626 = t2613 + t2624;
  t2490 = Sin(var1[9]);
  t2639 = t2496*t2621;
  t2647 = -1.*t2607*t2622;
  t2648 = t2639 + t2647;
  t2463 = Cos(var1[10]);
  t2705 = t2541*t2543*t2547;
  t2707 = -1.*t2497*t2561;
  t2710 = t2705 + t2707;
  t2692 = t2497*t2541;
  t2695 = t2543*t2547*t2561;
  t2696 = t2692 + t2695;
  t2719 = t2537*t2710;
  t2720 = -1.*t2696*t2596;
  t2722 = t2719 + t2720;
  t2683 = t2498*t2505*t2543;
  t2704 = t2537*t2696;
  t2711 = t2710*t2596;
  t2713 = t2704 + t2711;
  t2714 = t2713*t2604;
  t2717 = t2683 + t2714;
  t2667 = Sin(var1[10]);
  t2718 = t2496*t2717;
  t2724 = t2722*t2622;
  t2727 = t2718 + t2724;
  t2734 = t2496*t2722;
  t2735 = -1.*t2717*t2622;
  t2737 = t2734 + t2735;
  t2791 = t2498*t2541*t2537;
  t2792 = -1.*t2498*t2561*t2596;
  t2794 = t2791 + t2792;
  t2775 = -1.*t2505*t2547;
  t2777 = t2498*t2537*t2561;
  t2778 = t2498*t2541*t2596;
  t2785 = t2777 + t2778;
  t2787 = t2785*t2604;
  t2789 = t2775 + t2787;
  t2790 = t2496*t2789;
  t2796 = t2794*t2622;
  t2797 = t2790 + t2796;
  t2801 = t2496*t2794;
  t2807 = -1.*t2789*t2622;
  t2810 = t2801 + t2807;
  t2632 = -1.*t2490*t2626;
  t2654 = t2638*t2648;
  t2659 = t2632 + t2654;
  t2668 = t2638*t2626;
  t2671 = t2490*t2648;
  t2675 = t2668 + t2671;
  t2728 = -1.*t2490*t2727;
  t2739 = t2638*t2737;
  t2741 = t2728 + t2739;
  t2748 = t2638*t2727;
  t2749 = t2490*t2737;
  t2755 = t2748 + t2749;
  t2799 = -1.*t2490*t2797;
  t2814 = t2638*t2810;
  t2815 = t2799 + t2814;
  t2819 = t2638*t2797;
  t2821 = t2490*t2810;
  t2822 = t2819 + t2821;
  t2892 = -1.*t2505;
  t2893 = 1. + t2892;
  t2940 = -1.*t2496;
  t2944 = 1. + t2940;
  t2958 = -1.*t2638;
  t2961 = 1. + t2958;
  t2980 = -1.*t2463;
  t2982 = 1. + t2980;
  t2837 = t2667*t2659;
  t2840 = t2463*t2675;
  t2842 = t2837 + t2840;
  t2875 = -1.*t2537;
  t2876 = 1. + t2875;
  t2877 = 0.135*t2876;
  t2885 = 0. + t2877;
  t2889 = -0.135*t2596;
  t2890 = 0. + t2889;
  t2895 = 0.135*t2893;
  t2896 = 0.049*t2604;
  t2912 = 0. + t2895 + t2896;
  t2920 = -0.049*t2893;
  t2924 = 0.135*t2604;
  t2926 = 0. + t2920 + t2924;
  t2945 = -0.049*t2944;
  t2948 = -0.09*t2622;
  t2949 = 0. + t2945 + t2948;
  t2952 = -0.09*t2944;
  t2953 = 0.049*t2622;
  t2955 = 0. + t2952 + t2953;
  t2963 = -0.049*t2961;
  t2967 = -0.21*t2490;
  t2968 = 0. + t2963 + t2967;
  t2973 = -0.21*t2961;
  t2976 = 0.049*t2490;
  t2977 = 0. + t2973 + t2976;
  t2983 = -0.2707*t2982;
  t2985 = 0.0016*t2667;
  t2988 = 0. + t2983 + t2985;
  t2995 = -0.0016*t2982;
  t3000 = -0.2707*t2667;
  t3002 = 0. + t2995 + t3000;
  t2843 = t2667*t2741;
  t2847 = t2463*t2755;
  t2848 = t2843 + t2847;
  t2854 = t2667*t2815;
  t2855 = t2463*t2822;
  t2857 = t2854 + t2855;
  p_output1[0]=-1.*t2463*t2659 + t2667*t2675;
  p_output1[1]=-1.*t2463*t2741 + t2667*t2755;
  p_output1[2]=-1.*t2463*t2815 + t2667*t2822;
  p_output1[3]=0.;
  p_output1[4]=t2842;
  p_output1[5]=t2848;
  p_output1[6]=t2857;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2505*t2602 + t2497*t2498*t2604;
  p_output1[9]=t2498*t2543*t2604 - 1.*t2505*t2713;
  p_output1[10]=-1.*t2547*t2604 - 1.*t2505*t2785;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t2505*t2602 - 1.*t2497*t2498*t2604) - 0.2707*(t2463*t2659 - 1.*t2667*t2675) - 0.0016*t2842 + t2568*t2885 + t2593*t2890 + t2602*t2912 + t2497*t2498*t2926 + t2607*t2949 + t2621*t2955 + t2626*t2968 + t2648*t2977 + t2659*t2988 + t2675*t3002 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t2498*t2543*t2604 + t2505*t2713) - 0.2707*(t2463*t2741 - 1.*t2667*t2755) - 0.0016*t2848 + t2696*t2885 + t2710*t2890 + t2713*t2912 + t2498*t2543*t2926 + t2717*t2949 + t2722*t2955 + t2727*t2968 + t2737*t2977 + t2741*t2988 + t2755*t3002 + var1[1];
  p_output1[14]=0. + 0.1305*(t2547*t2604 + t2505*t2785) - 0.2707*(t2463*t2815 - 1.*t2667*t2822) - 0.0016*t2857 + t2498*t2561*t2885 + t2498*t2541*t2890 + t2785*t2912 - 1.*t2547*t2926 + t2789*t2949 + t2794*t2955 + t2797*t2968 + t2810*t2977 + t2815*t2988 + t2822*t3002 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
