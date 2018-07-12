/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_left_src.h"

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
  double t2807;
  double t2779;
  double t2819;
  double t2788;
  double t2821;
  double t180;
  double t2839;
  double t2852;
  double t2853;
  double t2804;
  double t2826;
  double t2829;
  double t2856;
  double t2985;
  double t3008;
  double t3017;
  double t3034;
  double t2965;
  double t2975;
  double t2977;
  double t3064;
  double t1740;
  double t2498;
  double t2676;
  double t2703;
  double t2902;
  double t2915;
  double t3196;
  double t3199;
  double t3211;
  double t3185;
  double t3187;
  double t3191;
  double t3018;
  double t3048;
  double t3050;
  double t3066;
  double t3085;
  double t3092;
  double t3262;
  double t3283;
  double t3302;
  double t3486;
  double t3492;
  double t3501;
  t2807 = Cos(var1[3]);
  t2779 = Cos(var1[5]);
  t2819 = Sin(var1[4]);
  t2788 = Sin(var1[3]);
  t2821 = Sin(var1[5]);
  t180 = Cos(var1[6]);
  t2839 = t2807*t2779*t2819;
  t2852 = t2788*t2821;
  t2853 = t2839 + t2852;
  t2804 = -1.*t2779*t2788;
  t2826 = t2807*t2819*t2821;
  t2829 = t2804 + t2826;
  t2856 = Sin(var1[6]);
  t2985 = Cos(var1[7]);
  t3008 = -1.*t2985;
  t3017 = 1. + t3008;
  t3034 = Sin(var1[7]);
  t2965 = t180*t2829;
  t2975 = t2853*t2856;
  t2977 = t2965 + t2975;
  t3064 = Cos(var1[4]);
  t1740 = -1.*t180;
  t2498 = 1. + t1740;
  t2676 = 0.135*t2498;
  t2703 = 0. + t2676;
  t2902 = -0.135*t2856;
  t2915 = 0. + t2902;
  t3196 = t2779*t2788*t2819;
  t3199 = -1.*t2807*t2821;
  t3211 = t3196 + t3199;
  t3185 = t2807*t2779;
  t3187 = t2788*t2819*t2821;
  t3191 = t3185 + t3187;
  t3018 = 0.135*t3017;
  t3048 = 0.049*t3034;
  t3050 = 0. + t3018 + t3048;
  t3066 = -0.049*t3017;
  t3085 = 0.135*t3034;
  t3092 = 0. + t3066 + t3085;
  t3262 = t180*t3191;
  t3283 = t3211*t2856;
  t3302 = t3262 + t3283;
  t3486 = t3064*t180*t2821;
  t3492 = t3064*t2779*t2856;
  t3501 = t3486 + t3492;
  p_output1[0]=0. + t2703*t2829 - 0.09*(t180*t2853 - 1.*t2829*t2856) + t2853*t2915 + t2977*t3050 - 0.049*(t2977*t3034 + t2807*t2985*t3064) + 0.135*(t2977*t2985 - 1.*t2807*t3034*t3064) + t2807*t3064*t3092 + var1[0];
  p_output1[1]=0. + t2788*t3064*t3092 + t2703*t3191 + t2915*t3211 - 0.09*(-1.*t2856*t3191 + t180*t3211) + t3050*t3302 + 0.135*(-1.*t2788*t3034*t3064 + t2985*t3302) - 0.049*(t2788*t2985*t3064 + t3034*t3302) + var1[1];
  p_output1[2]=0. + t2703*t2821*t3064 + t2779*t2915*t3064 - 0.09*(t180*t2779*t3064 - 1.*t2821*t2856*t3064) - 1.*t2819*t3092 + t3050*t3501 + 0.135*(t2819*t3034 + t2985*t3501) - 0.049*(-1.*t2819*t2985 + t3034*t3501) + var1[2];
}



void p_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
