/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:11 GMT-05:00
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
  double t2578;
  double t2601;
  double t2613;
  double t2605;
  double t2617;
  double t2592;
  double t2640;
  double t2643;
  double t2646;
  double t2607;
  double t2626;
  double t2632;
  double t2650;
  double t2568;
  double t2666;
  double t2672;
  double t2675;
  double t2582;
  double t2585;
  double t2587;
  double t2637;
  double t2653;
  double t2654;
  double t2658;
  double t2659;
  double t2661;
  double t2677;
  double t2537;
  double t2732;
  double t2733;
  double t2734;
  double t2721;
  double t2724;
  double t2728;
  double t2697;
  double t2743;
  double t2744;
  double t2747;
  double t2717;
  double t2729;
  double t2737;
  double t2738;
  double t2739;
  double t2740;
  double t2798;
  double t2800;
  double t2801;
  double t2783;
  double t2789;
  double t2790;
  double t2791;
  double t2793;
  double t2796;
  double t2664;
  double t2683;
  double t2693;
  double t2698;
  double t2702;
  double t2706;
  double t2742;
  double t2752;
  double t2755;
  double t2758;
  double t2759;
  double t2761;
  double t2797;
  double t2802;
  double t2806;
  double t2811;
  double t2812;
  double t2813;
  double t2876;
  double t2887;
  double t2914;
  double t2915;
  double t2932;
  double t2933;
  double t2828;
  double t2830;
  double t2831;
  double t2865;
  double t2866;
  double t2867;
  double t2868;
  double t2872;
  double t2874;
  double t2889;
  double t2893;
  double t2895;
  double t2903;
  double t2904;
  double t2907;
  double t2916;
  double t2919;
  double t2920;
  double t2925;
  double t2926;
  double t2927;
  double t2934;
  double t2935;
  double t2937;
  double t2946;
  double t2950;
  double t2951;
  double t2833;
  double t2835;
  double t2840;
  double t2845;
  double t2846;
  double t2847;
  t2578 = Cos(var1[3]);
  t2601 = Cos(var1[5]);
  t2613 = Sin(var1[4]);
  t2605 = Sin(var1[3]);
  t2617 = Sin(var1[5]);
  t2592 = Cos(var1[6]);
  t2640 = t2578*t2601*t2613;
  t2643 = t2605*t2617;
  t2646 = t2640 + t2643;
  t2607 = -1.*t2601*t2605;
  t2626 = t2578*t2613*t2617;
  t2632 = t2607 + t2626;
  t2650 = Sin(var1[6]);
  t2568 = Cos(var1[8]);
  t2666 = t2592*t2646;
  t2672 = -1.*t2632*t2650;
  t2675 = t2666 + t2672;
  t2582 = Cos(var1[4]);
  t2585 = Cos(var1[7]);
  t2587 = t2578*t2582*t2585;
  t2637 = t2592*t2632;
  t2653 = t2646*t2650;
  t2654 = t2637 + t2653;
  t2658 = Sin(var1[7]);
  t2659 = t2654*t2658;
  t2661 = t2587 + t2659;
  t2677 = Sin(var1[8]);
  t2537 = Sin(var1[9]);
  t2732 = t2601*t2605*t2613;
  t2733 = -1.*t2578*t2617;
  t2734 = t2732 + t2733;
  t2721 = t2578*t2601;
  t2724 = t2605*t2613*t2617;
  t2728 = t2721 + t2724;
  t2697 = Cos(var1[9]);
  t2743 = t2592*t2734;
  t2744 = -1.*t2728*t2650;
  t2747 = t2743 + t2744;
  t2717 = t2582*t2585*t2605;
  t2729 = t2592*t2728;
  t2737 = t2734*t2650;
  t2738 = t2729 + t2737;
  t2739 = t2738*t2658;
  t2740 = t2717 + t2739;
  t2798 = t2582*t2601*t2592;
  t2800 = -1.*t2582*t2617*t2650;
  t2801 = t2798 + t2800;
  t2783 = -1.*t2585*t2613;
  t2789 = t2582*t2592*t2617;
  t2790 = t2582*t2601*t2650;
  t2791 = t2789 + t2790;
  t2793 = t2791*t2658;
  t2796 = t2783 + t2793;
  t2664 = t2568*t2661;
  t2683 = t2675*t2677;
  t2693 = t2664 + t2683;
  t2698 = t2568*t2675;
  t2702 = -1.*t2661*t2677;
  t2706 = t2698 + t2702;
  t2742 = t2568*t2740;
  t2752 = t2747*t2677;
  t2755 = t2742 + t2752;
  t2758 = t2568*t2747;
  t2759 = -1.*t2740*t2677;
  t2761 = t2758 + t2759;
  t2797 = t2568*t2796;
  t2802 = t2801*t2677;
  t2806 = t2797 + t2802;
  t2811 = t2568*t2801;
  t2812 = -1.*t2796*t2677;
  t2813 = t2811 + t2812;
  t2876 = -1.*t2585;
  t2887 = 1. + t2876;
  t2914 = -1.*t2568;
  t2915 = 1. + t2914;
  t2932 = -1.*t2697;
  t2933 = 1. + t2932;
  t2828 = t2697*t2693;
  t2830 = t2537*t2706;
  t2831 = t2828 + t2830;
  t2865 = -1.*t2592;
  t2866 = 1. + t2865;
  t2867 = 0.135*t2866;
  t2868 = 0. + t2867;
  t2872 = -0.135*t2650;
  t2874 = 0. + t2872;
  t2889 = 0.135*t2887;
  t2893 = 0.049*t2658;
  t2895 = 0. + t2889 + t2893;
  t2903 = -0.049*t2887;
  t2904 = 0.135*t2658;
  t2907 = 0. + t2903 + t2904;
  t2916 = -0.049*t2915;
  t2919 = -0.09*t2677;
  t2920 = 0. + t2916 + t2919;
  t2925 = -0.09*t2915;
  t2926 = 0.049*t2677;
  t2927 = 0. + t2925 + t2926;
  t2934 = -0.049*t2933;
  t2935 = -0.21*t2537;
  t2937 = 0. + t2934 + t2935;
  t2946 = -0.21*t2933;
  t2950 = 0.049*t2537;
  t2951 = 0. + t2946 + t2950;
  t2833 = t2697*t2755;
  t2835 = t2537*t2761;
  t2840 = t2833 + t2835;
  t2845 = t2697*t2806;
  t2846 = t2537*t2813;
  t2847 = t2845 + t2846;
  p_output1[0]=t2537*t2693 - 1.*t2697*t2706;
  p_output1[1]=t2537*t2755 - 1.*t2697*t2761;
  p_output1[2]=t2537*t2806 - 1.*t2697*t2813;
  p_output1[3]=0.;
  p_output1[4]=t2831;
  p_output1[5]=t2840;
  p_output1[6]=t2847;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2585*t2654 + t2578*t2582*t2658;
  p_output1[9]=t2582*t2605*t2658 - 1.*t2585*t2738;
  p_output1[10]=-1.*t2613*t2658 - 1.*t2585*t2791;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t2585*t2654 - 1.*t2578*t2582*t2658) - 0.2707*(-1.*t2537*t2693 + t2697*t2706) - 0.0016*t2831 + t2632*t2868 + t2646*t2874 + t2654*t2895 + t2578*t2582*t2907 + t2661*t2920 + t2675*t2927 + t2693*t2937 + t2706*t2951 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t2582*t2605*t2658 + t2585*t2738) - 0.2707*(-1.*t2537*t2755 + t2697*t2761) - 0.0016*t2840 + t2728*t2868 + t2734*t2874 + t2738*t2895 + t2582*t2605*t2907 + t2740*t2920 + t2747*t2927 + t2755*t2937 + t2761*t2951 + var1[1];
  p_output1[14]=0. + 0.1305*(t2613*t2658 + t2585*t2791) - 0.2707*(-1.*t2537*t2806 + t2697*t2813) - 0.0016*t2847 + t2582*t2617*t2868 + t2582*t2601*t2874 + t2791*t2895 - 1.*t2613*t2907 + t2796*t2920 + t2801*t2927 + t2806*t2937 + t2813*t2951 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
