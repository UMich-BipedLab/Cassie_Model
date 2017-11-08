/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_left_src.h"

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
  double t2903;
  double t3005;
  double t3008;
  double t3006;
  double t3009;
  double t2998;
  double t3032;
  double t3033;
  double t3036;
  double t3007;
  double t3021;
  double t3023;
  double t3037;
  double t2895;
  double t3046;
  double t3048;
  double t3049;
  double t2954;
  double t2963;
  double t2968;
  double t3024;
  double t3038;
  double t3041;
  double t3042;
  double t3043;
  double t3044;
  double t3050;
  double t2867;
  double t3070;
  double t3071;
  double t3074;
  double t3066;
  double t3067;
  double t3068;
  double t3057;
  double t3088;
  double t3089;
  double t3092;
  double t3065;
  double t3069;
  double t3077;
  double t3078;
  double t3080;
  double t3084;
  double t3119;
  double t3121;
  double t3122;
  double t3110;
  double t3111;
  double t3113;
  double t3114;
  double t3115;
  double t3117;
  double t3045;
  double t3051;
  double t3053;
  double t3058;
  double t3059;
  double t3060;
  double t3085;
  double t3093;
  double t3097;
  double t3100;
  double t3102;
  double t3105;
  double t3118;
  double t3123;
  double t3124;
  double t3126;
  double t3127;
  double t3128;
  t2903 = Cos(var1[3]);
  t3005 = Cos(var1[5]);
  t3008 = Sin(var1[4]);
  t3006 = Sin(var1[3]);
  t3009 = Sin(var1[5]);
  t2998 = Cos(var1[6]);
  t3032 = t2903*t3005*t3008;
  t3033 = t3006*t3009;
  t3036 = t3032 + t3033;
  t3007 = -1.*t3005*t3006;
  t3021 = t2903*t3008*t3009;
  t3023 = t3007 + t3021;
  t3037 = Sin(var1[6]);
  t2895 = Cos(var1[8]);
  t3046 = t2998*t3036;
  t3048 = -1.*t3023*t3037;
  t3049 = t3046 + t3048;
  t2954 = Cos(var1[4]);
  t2963 = Cos(var1[7]);
  t2968 = t2903*t2954*t2963;
  t3024 = t2998*t3023;
  t3038 = t3036*t3037;
  t3041 = t3024 + t3038;
  t3042 = Sin(var1[7]);
  t3043 = t3041*t3042;
  t3044 = t2968 + t3043;
  t3050 = Sin(var1[8]);
  t2867 = Sin(var1[9]);
  t3070 = t3005*t3006*t3008;
  t3071 = -1.*t2903*t3009;
  t3074 = t3070 + t3071;
  t3066 = t2903*t3005;
  t3067 = t3006*t3008*t3009;
  t3068 = t3066 + t3067;
  t3057 = Cos(var1[9]);
  t3088 = t2998*t3074;
  t3089 = -1.*t3068*t3037;
  t3092 = t3088 + t3089;
  t3065 = t2954*t2963*t3006;
  t3069 = t2998*t3068;
  t3077 = t3074*t3037;
  t3078 = t3069 + t3077;
  t3080 = t3078*t3042;
  t3084 = t3065 + t3080;
  t3119 = t2954*t3005*t2998;
  t3121 = -1.*t2954*t3009*t3037;
  t3122 = t3119 + t3121;
  t3110 = -1.*t2963*t3008;
  t3111 = t2954*t2998*t3009;
  t3113 = t2954*t3005*t3037;
  t3114 = t3111 + t3113;
  t3115 = t3114*t3042;
  t3117 = t3110 + t3115;
  t3045 = t2895*t3044;
  t3051 = t3049*t3050;
  t3053 = t3045 + t3051;
  t3058 = t2895*t3049;
  t3059 = -1.*t3044*t3050;
  t3060 = t3058 + t3059;
  t3085 = t2895*t3084;
  t3093 = t3092*t3050;
  t3097 = t3085 + t3093;
  t3100 = t2895*t3092;
  t3102 = -1.*t3084*t3050;
  t3105 = t3100 + t3102;
  t3118 = t2895*t3117;
  t3123 = t3122*t3050;
  t3124 = t3118 + t3123;
  t3126 = t2895*t3122;
  t3127 = -1.*t3117*t3050;
  t3128 = t3126 + t3127;
  p_output1[0]=t2867*t3053 - 1.*t3057*t3060;
  p_output1[1]=t2867*t3097 - 1.*t3057*t3105;
  p_output1[2]=t2867*t3124 - 1.*t3057*t3128;
  p_output1[3]=t3053*t3057 + t2867*t3060;
  p_output1[4]=t3057*t3097 + t2867*t3105;
  p_output1[5]=t3057*t3124 + t2867*t3128;
  p_output1[6]=-1.*t2963*t3041 + t2903*t2954*t3042;
  p_output1[7]=t2954*t3006*t3042 - 1.*t2963*t3078;
  p_output1[8]=-1.*t3008*t3042 - 1.*t2963*t3114;
}



void R_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
