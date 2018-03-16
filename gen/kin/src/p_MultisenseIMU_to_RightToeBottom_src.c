/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t420;
  double t2187;
  double t2524;
  double t2602;
  double t2607;
  double t2615;
  double t2629;
  double t2659;
  double t2694;
  double t2697;
  double t2700;
  double t2706;
  double t2679;
  double t2685;
  double t2687;
  double t2725;
  double t2729;
  double t2730;
  double t2750;
  double t2751;
  double t2753;
  double t2755;
  double t2744;
  double t2746;
  double t2747;
  double t2760;
  double t2761;
  double t2762;
  double t2770;
  double t2771;
  double t2774;
  double t2778;
  double t2767;
  double t2768;
  double t2769;
  double t2783;
  double t2785;
  double t2786;
  double t2796;
  double t2798;
  double t2799;
  double t2803;
  double t2793;
  double t2794;
  double t2795;
  double t2807;
  double t2808;
  double t2809;
  double t2365;
  double t2426;
  double t2508;
  double t2545;
  double t2564;
  double t2624;
  double t2638;
  double t2644;
  double t2664;
  double t2665;
  double t2668;
  double t2703;
  double t2713;
  double t2716;
  double t2732;
  double t2734;
  double t2735;
  double t2837;
  double t2840;
  double t2841;
  double t2843;
  double t2844;
  double t2845;
  double t2754;
  double t2756;
  double t2757;
  double t2763;
  double t2764;
  double t2765;
  double t2847;
  double t2848;
  double t2849;
  double t2851;
  double t2852;
  double t2853;
  double t2777;
  double t2779;
  double t2780;
  double t2787;
  double t2788;
  double t2790;
  double t2855;
  double t2856;
  double t2857;
  double t2859;
  double t2860;
  double t2861;
  double t2802;
  double t2804;
  double t2805;
  double t2810;
  double t2811;
  double t2812;
  double t2863;
  double t2864;
  double t2865;
  double t2867;
  double t2868;
  double t2869;
  double t2885;
  double t2886;
  double t2887;
  double t2889;
  double t2890;
  double t2891;
  double t2893;
  double t2894;
  double t2895;
  double t2897;
  double t2898;
  double t2899;
  double t2901;
  double t2902;
  double t2903;
  double t2905;
  double t2906;
  double t2907;
  t420 = Sin(var1[7]);
  t2187 = Cos(var1[8]);
  t2524 = Sin(var1[8]);
  t2602 = Cos(var1[9]);
  t2607 = -1.*t2602;
  t2615 = 1. + t2607;
  t2629 = Sin(var1[9]);
  t2659 = Cos(var1[7]);
  t2694 = Cos(var1[10]);
  t2697 = -1.*t2694;
  t2700 = 1. + t2697;
  t2706 = Sin(var1[10]);
  t2679 = t2602*t420*t2524;
  t2685 = t2659*t2629;
  t2687 = t2679 + t2685;
  t2725 = t2659*t2602;
  t2729 = -1.*t420*t2524*t2629;
  t2730 = t2725 + t2729;
  t2750 = Cos(var1[11]);
  t2751 = -1.*t2750;
  t2753 = 1. + t2751;
  t2755 = Sin(var1[11]);
  t2744 = t2694*t2687;
  t2746 = t2730*t2706;
  t2747 = t2744 + t2746;
  t2760 = t2694*t2730;
  t2761 = -1.*t2687*t2706;
  t2762 = t2760 + t2761;
  t2770 = Cos(var1[12]);
  t2771 = -1.*t2770;
  t2774 = 1. + t2771;
  t2778 = Sin(var1[12]);
  t2767 = t2750*t2747;
  t2768 = t2762*t2755;
  t2769 = t2767 + t2768;
  t2783 = t2750*t2762;
  t2785 = -1.*t2747*t2755;
  t2786 = t2783 + t2785;
  t2796 = Cos(var1[13]);
  t2798 = -1.*t2796;
  t2799 = 1. + t2798;
  t2803 = Sin(var1[13]);
  t2793 = t2770*t2769;
  t2794 = t2786*t2778;
  t2795 = t2793 + t2794;
  t2807 = t2770*t2786;
  t2808 = -1.*t2769*t2778;
  t2809 = t2807 + t2808;
  t2365 = -1.*t2187;
  t2426 = 1. + t2365;
  t2508 = -0.135*t2426;
  t2545 = 0.049*t2524;
  t2564 = 0. + t2508 + t2545;
  t2624 = -0.049*t2615;
  t2638 = -0.09*t2629;
  t2644 = 0. + t2624 + t2638;
  t2664 = -0.09*t2615;
  t2665 = 0.049*t2629;
  t2668 = 0. + t2664 + t2665;
  t2703 = -0.049*t2700;
  t2713 = -0.21*t2706;
  t2716 = 0. + t2703 + t2713;
  t2732 = -0.21*t2700;
  t2734 = 0.049*t2706;
  t2735 = 0. + t2732 + t2734;
  t2837 = t2659*t2602*t2524;
  t2840 = -1.*t420*t2629;
  t2841 = t2837 + t2840;
  t2843 = -1.*t2602*t420;
  t2844 = -1.*t2659*t2524*t2629;
  t2845 = t2843 + t2844;
  t2754 = -0.0016*t2753;
  t2756 = -0.2707*t2755;
  t2757 = 0. + t2754 + t2756;
  t2763 = -0.2707*t2753;
  t2764 = 0.0016*t2755;
  t2765 = 0. + t2763 + t2764;
  t2847 = t2694*t2841;
  t2848 = t2845*t2706;
  t2849 = t2847 + t2848;
  t2851 = t2694*t2845;
  t2852 = -1.*t2841*t2706;
  t2853 = t2851 + t2852;
  t2777 = 0.0184*t2774;
  t2779 = -0.7055*t2778;
  t2780 = 0. + t2777 + t2779;
  t2787 = -0.7055*t2774;
  t2788 = -0.0184*t2778;
  t2790 = 0. + t2787 + t2788;
  t2855 = t2750*t2849;
  t2856 = t2853*t2755;
  t2857 = t2855 + t2856;
  t2859 = t2750*t2853;
  t2860 = -1.*t2849*t2755;
  t2861 = t2859 + t2860;
  t2802 = -0.0216*t2799;
  t2804 = -1.1135*t2803;
  t2805 = 0. + t2802 + t2804;
  t2810 = -1.1135*t2799;
  t2811 = 0.0216*t2803;
  t2812 = 0. + t2810 + t2811;
  t2863 = t2770*t2857;
  t2864 = t2861*t2778;
  t2865 = t2863 + t2864;
  t2867 = t2770*t2861;
  t2868 = -1.*t2857*t2778;
  t2869 = t2867 + t2868;
  t2885 = t2187*t2602*t2694;
  t2886 = -1.*t2187*t2629*t2706;
  t2887 = t2885 + t2886;
  t2889 = -1.*t2187*t2694*t2629;
  t2890 = -1.*t2187*t2602*t2706;
  t2891 = t2889 + t2890;
  t2893 = t2750*t2887;
  t2894 = t2891*t2755;
  t2895 = t2893 + t2894;
  t2897 = t2750*t2891;
  t2898 = -1.*t2887*t2755;
  t2899 = t2897 + t2898;
  t2901 = t2770*t2895;
  t2902 = t2899*t2778;
  t2903 = t2901 + t2902;
  t2905 = t2770*t2899;
  t2906 = -1.*t2895*t2778;
  t2907 = t2905 + t2906;
  p_output1[0]=0.24925 - 1.*t2659*t2668 - 1.*t2687*t2716 - 1.*t2730*t2735 - 1.*t2747*t2757 - 1.*t2762*t2765 - 1.*t2769*t2780 - 1.*t2786*t2790 - 1.*t2795*t2805 + 1.1312*(-1.*t2795*t2803 + t2796*t2809) - 0.0306*(t2795*t2796 + t2803*t2809) - 1.*t2809*t2812 - 0.135*t420 + 0.1305*t2187*t420 - 1.*t2564*t420 - 1.*t2524*t2644*t420;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t2659) - 0.1305*t2187*t2659 + t2564*t2659 + t2524*t2644*t2659 + t2716*t2841 + t2735*t2845 + t2757*t2849 + t2765*t2853 + t2780*t2857 + t2790*t2861 + t2805*t2865 + t2812*t2869 - 1.1312*(-1.*t2803*t2865 + t2796*t2869) + 0.0306*(t2796*t2865 + t2803*t2869) - 1.*t2668*t420;
  p_output1[2]=-0.047 - 0.049*t2426 - 0.004500000000000004*t2524 + t2187*t2644 + t2187*t2602*t2716 - 1.*t2187*t2629*t2735 + t2757*t2887 + t2765*t2891 + t2780*t2895 + t2790*t2899 + t2805*t2903 + t2812*t2907 - 1.1312*(-1.*t2803*t2903 + t2796*t2907) + 0.0306*(t2796*t2903 + t2803*t2907);
}



void p_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
