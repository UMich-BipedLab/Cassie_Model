/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t904;
  double t2508;
  double t2782;
  double t2703;
  double t2832;
  double t2856;
  double t2875;
  double t2850;
  double t2861;
  double t2870;
  double t2828;
  double t2878;
  double t2879;
  double t2881;
  double t2888;
  double t2872;
  double t2883;
  double t2884;
  double t2826;
  double t2897;
  double t2899;
  double t2900;
  double t2910;
  double t2885;
  double t2901;
  double t2902;
  double t2820;
  double t2915;
  double t2918;
  double t2919;
  double t2924;
  double t2904;
  double t2921;
  double t2922;
  double t2814;
  double t2927;
  double t2929;
  double t2930;
  double t2949;
  double t2951;
  double t2952;
  double t2956;
  double t2959;
  double t2960;
  double t2953;
  double t2962;
  double t2964;
  double t2967;
  double t2969;
  double t2970;
  double t2965;
  double t2972;
  double t2973;
  double t2977;
  double t2978;
  double t2979;
  double t2976;
  double t2980;
  double t2981;
  double t2983;
  double t2984;
  double t2985;
  double t3001;
  double t3004;
  double t3005;
  double t3008;
  double t3009;
  double t3011;
  double t3007;
  double t3014;
  double t3015;
  double t3018;
  double t3019;
  double t3021;
  double t3017;
  double t3024;
  double t3025;
  double t3028;
  double t3029;
  double t3031;
  double t2923;
  double t2931;
  double t2934;
  double t2938;
  double t2941;
  double t2942;
  double t2982;
  double t2988;
  double t2989;
  double t2994;
  double t2995;
  double t2997;
  double t3027;
  double t3034;
  double t3035;
  double t3038;
  double t3039;
  double t3041;
  double t3061;
  double t3062;
  double t3071;
  double t3072;
  double t3081;
  double t3082;
  double t3091;
  double t3092;
  double t3101;
  double t3102;
  double t3055;
  double t3056;
  double t3057;
  double t3058;
  double t3059;
  double t3063;
  double t3064;
  double t3065;
  double t3067;
  double t3068;
  double t3069;
  double t3073;
  double t3074;
  double t3075;
  double t3077;
  double t3078;
  double t3079;
  double t3083;
  double t3084;
  double t3085;
  double t3087;
  double t3088;
  double t3089;
  double t3093;
  double t3094;
  double t3095;
  double t3097;
  double t3098;
  double t3099;
  double t3103;
  double t3104;
  double t3105;
  double t3107;
  double t3108;
  double t3109;
  t904 = Cos(var1[1]);
  t2508 = Sin(var1[0]);
  t2782 = Sin(var1[1]);
  t2703 = Cos(var1[0]);
  t2832 = Cos(var1[2]);
  t2856 = Sin(var1[2]);
  t2875 = Cos(var1[3]);
  t2850 = t2832*t2508*t2782;
  t2861 = t2703*t2856;
  t2870 = t2850 + t2861;
  t2828 = Sin(var1[3]);
  t2878 = t2703*t2832;
  t2879 = -1.*t2508*t2782*t2856;
  t2881 = t2878 + t2879;
  t2888 = Cos(var1[4]);
  t2872 = -1.*t2828*t2870;
  t2883 = t2875*t2881;
  t2884 = t2872 + t2883;
  t2826 = Sin(var1[4]);
  t2897 = t2875*t2870;
  t2899 = t2828*t2881;
  t2900 = t2897 + t2899;
  t2910 = Cos(var1[5]);
  t2885 = t2826*t2884;
  t2901 = t2888*t2900;
  t2902 = t2885 + t2901;
  t2820 = Sin(var1[5]);
  t2915 = t2888*t2884;
  t2918 = -1.*t2826*t2900;
  t2919 = t2915 + t2918;
  t2924 = Cos(var1[6]);
  t2904 = -1.*t2820*t2902;
  t2921 = t2910*t2919;
  t2922 = t2904 + t2921;
  t2814 = Sin(var1[6]);
  t2927 = t2910*t2902;
  t2929 = t2820*t2919;
  t2930 = t2927 + t2929;
  t2949 = t2703*t2832*t2782;
  t2951 = -1.*t2508*t2856;
  t2952 = t2949 + t2951;
  t2956 = -1.*t2832*t2508;
  t2959 = -1.*t2703*t2782*t2856;
  t2960 = t2956 + t2959;
  t2953 = -1.*t2828*t2952;
  t2962 = t2875*t2960;
  t2964 = t2953 + t2962;
  t2967 = t2875*t2952;
  t2969 = t2828*t2960;
  t2970 = t2967 + t2969;
  t2965 = t2826*t2964;
  t2972 = t2888*t2970;
  t2973 = t2965 + t2972;
  t2977 = t2888*t2964;
  t2978 = -1.*t2826*t2970;
  t2979 = t2977 + t2978;
  t2976 = -1.*t2820*t2973;
  t2980 = t2910*t2979;
  t2981 = t2976 + t2980;
  t2983 = t2910*t2973;
  t2984 = t2820*t2979;
  t2985 = t2983 + t2984;
  t3001 = -1.*t904*t2832*t2828;
  t3004 = -1.*t2875*t904*t2856;
  t3005 = t3001 + t3004;
  t3008 = t2875*t904*t2832;
  t3009 = -1.*t904*t2828*t2856;
  t3011 = t3008 + t3009;
  t3007 = t2826*t3005;
  t3014 = t2888*t3011;
  t3015 = t3007 + t3014;
  t3018 = t2888*t3005;
  t3019 = -1.*t2826*t3011;
  t3021 = t3018 + t3019;
  t3017 = -1.*t2820*t3015;
  t3024 = t2910*t3021;
  t3025 = t3017 + t3024;
  t3028 = t2910*t3015;
  t3029 = t2820*t3021;
  t3031 = t3028 + t3029;
  t2923 = t2814*t2922;
  t2931 = t2924*t2930;
  t2934 = t2923 + t2931;
  t2938 = t2924*t2922;
  t2941 = -1.*t2814*t2930;
  t2942 = t2938 + t2941;
  t2982 = t2814*t2981;
  t2988 = t2924*t2985;
  t2989 = t2982 + t2988;
  t2994 = t2924*t2981;
  t2995 = -1.*t2814*t2985;
  t2997 = t2994 + t2995;
  t3027 = t2814*t3025;
  t3034 = t2924*t3031;
  t3035 = t3027 + t3034;
  t3038 = t2924*t3025;
  t3039 = -1.*t2814*t3031;
  t3041 = t3038 + t3039;
  t3061 = -1.*t2832;
  t3062 = 1. + t3061;
  t3071 = -1.*t2875;
  t3072 = 1. + t3071;
  t3081 = -1.*t2888;
  t3082 = 1. + t3081;
  t3091 = -1.*t2910;
  t3092 = 1. + t3091;
  t3101 = -1.*t2924;
  t3102 = 1. + t3101;
  t3055 = -1.*t904;
  t3056 = 1. + t3055;
  t3057 = 0.135*t3056;
  t3058 = 0.049*t2782;
  t3059 = 0. + t3057 + t3058;
  t3063 = -0.049*t3062;
  t3064 = -0.09*t2856;
  t3065 = 0. + t3063 + t3064;
  t3067 = -0.09*t3062;
  t3068 = 0.049*t2856;
  t3069 = 0. + t3067 + t3068;
  t3073 = -0.049*t3072;
  t3074 = -0.21*t2828;
  t3075 = 0. + t3073 + t3074;
  t3077 = -0.21*t3072;
  t3078 = 0.049*t2828;
  t3079 = 0. + t3077 + t3078;
  t3083 = -0.2707*t3082;
  t3084 = 0.0016*t2826;
  t3085 = 0. + t3083 + t3084;
  t3087 = -0.0016*t3082;
  t3088 = -0.2707*t2826;
  t3089 = 0. + t3087 + t3088;
  t3093 = 0.0184*t3092;
  t3094 = -0.7055*t2820;
  t3095 = 0. + t3093 + t3094;
  t3097 = -0.7055*t3092;
  t3098 = -0.0184*t2820;
  t3099 = 0. + t3097 + t3098;
  t3103 = -1.1135*t3102;
  t3104 = 0.0216*t2814;
  t3105 = 0. + t3103 + t3104;
  t3107 = -0.0216*t3102;
  t3108 = -1.1135*t2814;
  t3109 = 0. + t3107 + t3108;
  p_output1[0]=0. + t2508*t904;
  p_output1[1]=0. - 1.*t2703*t904;
  p_output1[2]=0. + t2782;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t2934 - 0.766044*t2942;
  p_output1[5]=0. + 0.642788*t2989 + 0.766044*t2997;
  p_output1[6]=0. + 0.642788*t3035 + 0.766044*t3041;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t2934 - 0.642788*t2942;
  p_output1[9]=0. - 0.766044*t2989 + 0.642788*t2997;
  p_output1[10]=0. - 0.766044*t3035 + 0.642788*t3041;
  p_output1[11]=0.;
  p_output1[12]=0.24925 + 0.135*t2508 - 0.0306*t2934 + 1.1312*t2942 - 1.*t2508*t3059 - 1.*t2508*t2782*t3065 - 1.*t2703*t3069 - 1.*t2870*t3075 - 1.*t2881*t3079 - 1.*t2884*t3085 - 1.*t2900*t3089 - 1.*t2902*t3095 - 1.*t2919*t3099 - 1.*t2922*t3105 - 1.*t2930*t3109 - 0.1305*t2508*t904;
  p_output1[13]=-0.0302 + 0.135*(1. - 1.*t2703) + 0.0306*t2989 - 1.1312*t2997 + t2703*t3059 + t2703*t2782*t3065 - 1.*t2508*t3069 + t2952*t3075 + t2960*t3079 + t2964*t3085 + t2970*t3089 + t2973*t3095 + t2979*t3099 + t2981*t3105 + t2985*t3109 + 0.1305*t2703*t904;
  p_output1[14]=-0.047 + 0.004500000000000004*t2782 + 0.0306*t3035 - 1.1312*t3041 - 0.049*t3056 + t3005*t3085 + t3011*t3089 + t3015*t3095 + t3021*t3099 + t3025*t3105 + t3031*t3109 + t3065*t904 + t2832*t3075*t904 - 1.*t2856*t3079*t904;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
