/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:04 GMT-04:00
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
  double t2972;
  double t3046;
  double t3069;
  double t3062;
  double t3074;
  double t3045;
  double t3088;
  double t3089;
  double t3091;
  double t3068;
  double t3076;
  double t3079;
  double t3093;
  double t2891;
  double t3108;
  double t3110;
  double t3111;
  double t2982;
  double t2989;
  double t3036;
  double t3083;
  double t3095;
  double t3098;
  double t3102;
  double t3103;
  double t3106;
  double t3112;
  double t3118;
  double t3107;
  double t3113;
  double t3115;
  double t2884;
  double t3119;
  double t3121;
  double t3125;
  double t2851;
  double t3144;
  double t3146;
  double t3152;
  double t3140;
  double t3141;
  double t3142;
  double t3164;
  double t3166;
  double t3167;
  double t3139;
  double t3143;
  double t3153;
  double t3156;
  double t3158;
  double t3160;
  double t3131;
  double t3161;
  double t3169;
  double t3170;
  double t3174;
  double t3176;
  double t3178;
  double t3203;
  double t3204;
  double t3205;
  double t3195;
  double t3196;
  double t3197;
  double t3198;
  double t3199;
  double t3200;
  double t3201;
  double t3206;
  double t3207;
  double t3209;
  double t3210;
  double t3211;
  double t3116;
  double t3126;
  double t3127;
  double t3134;
  double t3135;
  double t3136;
  double t3172;
  double t3182;
  double t3183;
  double t3187;
  double t3188;
  double t3190;
  double t3208;
  double t3213;
  double t3214;
  double t3220;
  double t3223;
  double t3224;
  t2972 = Cos(var1[3]);
  t3046 = Cos(var1[5]);
  t3069 = Sin(var1[4]);
  t3062 = Sin(var1[3]);
  t3074 = Sin(var1[5]);
  t3045 = Cos(var1[6]);
  t3088 = t2972*t3046*t3069;
  t3089 = t3062*t3074;
  t3091 = t3088 + t3089;
  t3068 = -1.*t3046*t3062;
  t3076 = t2972*t3069*t3074;
  t3079 = t3068 + t3076;
  t3093 = Sin(var1[6]);
  t2891 = Cos(var1[8]);
  t3108 = t3045*t3091;
  t3110 = -1.*t3079*t3093;
  t3111 = t3108 + t3110;
  t2982 = Cos(var1[4]);
  t2989 = Cos(var1[7]);
  t3036 = t2972*t2982*t2989;
  t3083 = t3045*t3079;
  t3095 = t3091*t3093;
  t3098 = t3083 + t3095;
  t3102 = Sin(var1[7]);
  t3103 = t3098*t3102;
  t3106 = t3036 + t3103;
  t3112 = Sin(var1[8]);
  t3118 = Cos(var1[9]);
  t3107 = t2891*t3106;
  t3113 = t3111*t3112;
  t3115 = t3107 + t3113;
  t2884 = Sin(var1[9]);
  t3119 = t2891*t3111;
  t3121 = -1.*t3106*t3112;
  t3125 = t3119 + t3121;
  t2851 = Cos(var1[10]);
  t3144 = t3046*t3062*t3069;
  t3146 = -1.*t2972*t3074;
  t3152 = t3144 + t3146;
  t3140 = t2972*t3046;
  t3141 = t3062*t3069*t3074;
  t3142 = t3140 + t3141;
  t3164 = t3045*t3152;
  t3166 = -1.*t3142*t3093;
  t3167 = t3164 + t3166;
  t3139 = t2982*t2989*t3062;
  t3143 = t3045*t3142;
  t3153 = t3152*t3093;
  t3156 = t3143 + t3153;
  t3158 = t3156*t3102;
  t3160 = t3139 + t3158;
  t3131 = Sin(var1[10]);
  t3161 = t2891*t3160;
  t3169 = t3167*t3112;
  t3170 = t3161 + t3169;
  t3174 = t2891*t3167;
  t3176 = -1.*t3160*t3112;
  t3178 = t3174 + t3176;
  t3203 = t2982*t3046*t3045;
  t3204 = -1.*t2982*t3074*t3093;
  t3205 = t3203 + t3204;
  t3195 = -1.*t2989*t3069;
  t3196 = t2982*t3045*t3074;
  t3197 = t2982*t3046*t3093;
  t3198 = t3196 + t3197;
  t3199 = t3198*t3102;
  t3200 = t3195 + t3199;
  t3201 = t2891*t3200;
  t3206 = t3205*t3112;
  t3207 = t3201 + t3206;
  t3209 = t2891*t3205;
  t3210 = -1.*t3200*t3112;
  t3211 = t3209 + t3210;
  t3116 = -1.*t2884*t3115;
  t3126 = t3118*t3125;
  t3127 = t3116 + t3126;
  t3134 = t3118*t3115;
  t3135 = t2884*t3125;
  t3136 = t3134 + t3135;
  t3172 = -1.*t2884*t3170;
  t3182 = t3118*t3178;
  t3183 = t3172 + t3182;
  t3187 = t3118*t3170;
  t3188 = t2884*t3178;
  t3190 = t3187 + t3188;
  t3208 = -1.*t2884*t3207;
  t3213 = t3118*t3211;
  t3214 = t3208 + t3213;
  t3220 = t3118*t3207;
  t3223 = t2884*t3211;
  t3224 = t3220 + t3223;
  p_output1[0]=-1.*t2851*t3127 + t3131*t3136;
  p_output1[1]=-1.*t2851*t3183 + t3131*t3190;
  p_output1[2]=-1.*t2851*t3214 + t3131*t3224;
  p_output1[3]=t3127*t3131 + t2851*t3136;
  p_output1[4]=t3131*t3183 + t2851*t3190;
  p_output1[5]=t3131*t3214 + t2851*t3224;
  p_output1[6]=-1.*t2989*t3098 + t2972*t2982*t3102;
  p_output1[7]=t2982*t3062*t3102 - 1.*t2989*t3156;
  p_output1[8]=-1.*t3069*t3102 - 1.*t2989*t3198;
}



void R_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
