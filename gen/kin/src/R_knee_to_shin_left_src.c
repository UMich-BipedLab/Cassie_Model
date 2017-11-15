/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:15 GMT-05:00
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
  double t3008;
  double t3082;
  double t3105;
  double t3098;
  double t3110;
  double t3081;
  double t3124;
  double t3125;
  double t3127;
  double t3104;
  double t3112;
  double t3115;
  double t3129;
  double t2927;
  double t3144;
  double t3146;
  double t3147;
  double t3018;
  double t3025;
  double t3072;
  double t3119;
  double t3131;
  double t3134;
  double t3138;
  double t3139;
  double t3142;
  double t3148;
  double t3154;
  double t3143;
  double t3149;
  double t3151;
  double t2920;
  double t3155;
  double t3157;
  double t3161;
  double t2887;
  double t3180;
  double t3182;
  double t3188;
  double t3176;
  double t3177;
  double t3178;
  double t3200;
  double t3202;
  double t3203;
  double t3175;
  double t3179;
  double t3189;
  double t3192;
  double t3194;
  double t3196;
  double t3167;
  double t3197;
  double t3205;
  double t3206;
  double t3210;
  double t3212;
  double t3214;
  double t3239;
  double t3240;
  double t3241;
  double t3231;
  double t3232;
  double t3233;
  double t3234;
  double t3235;
  double t3236;
  double t3237;
  double t3242;
  double t3243;
  double t3245;
  double t3246;
  double t3247;
  double t3152;
  double t3162;
  double t3163;
  double t3170;
  double t3171;
  double t3172;
  double t3208;
  double t3218;
  double t3219;
  double t3223;
  double t3224;
  double t3226;
  double t3244;
  double t3249;
  double t3250;
  double t3256;
  double t3259;
  double t3260;
  t3008 = Cos(var1[3]);
  t3082 = Cos(var1[5]);
  t3105 = Sin(var1[4]);
  t3098 = Sin(var1[3]);
  t3110 = Sin(var1[5]);
  t3081 = Cos(var1[6]);
  t3124 = t3008*t3082*t3105;
  t3125 = t3098*t3110;
  t3127 = t3124 + t3125;
  t3104 = -1.*t3082*t3098;
  t3112 = t3008*t3105*t3110;
  t3115 = t3104 + t3112;
  t3129 = Sin(var1[6]);
  t2927 = Cos(var1[8]);
  t3144 = t3081*t3127;
  t3146 = -1.*t3115*t3129;
  t3147 = t3144 + t3146;
  t3018 = Cos(var1[4]);
  t3025 = Cos(var1[7]);
  t3072 = t3008*t3018*t3025;
  t3119 = t3081*t3115;
  t3131 = t3127*t3129;
  t3134 = t3119 + t3131;
  t3138 = Sin(var1[7]);
  t3139 = t3134*t3138;
  t3142 = t3072 + t3139;
  t3148 = Sin(var1[8]);
  t3154 = Cos(var1[9]);
  t3143 = t2927*t3142;
  t3149 = t3147*t3148;
  t3151 = t3143 + t3149;
  t2920 = Sin(var1[9]);
  t3155 = t2927*t3147;
  t3157 = -1.*t3142*t3148;
  t3161 = t3155 + t3157;
  t2887 = Cos(var1[10]);
  t3180 = t3082*t3098*t3105;
  t3182 = -1.*t3008*t3110;
  t3188 = t3180 + t3182;
  t3176 = t3008*t3082;
  t3177 = t3098*t3105*t3110;
  t3178 = t3176 + t3177;
  t3200 = t3081*t3188;
  t3202 = -1.*t3178*t3129;
  t3203 = t3200 + t3202;
  t3175 = t3018*t3025*t3098;
  t3179 = t3081*t3178;
  t3189 = t3188*t3129;
  t3192 = t3179 + t3189;
  t3194 = t3192*t3138;
  t3196 = t3175 + t3194;
  t3167 = Sin(var1[10]);
  t3197 = t2927*t3196;
  t3205 = t3203*t3148;
  t3206 = t3197 + t3205;
  t3210 = t2927*t3203;
  t3212 = -1.*t3196*t3148;
  t3214 = t3210 + t3212;
  t3239 = t3018*t3082*t3081;
  t3240 = -1.*t3018*t3110*t3129;
  t3241 = t3239 + t3240;
  t3231 = -1.*t3025*t3105;
  t3232 = t3018*t3081*t3110;
  t3233 = t3018*t3082*t3129;
  t3234 = t3232 + t3233;
  t3235 = t3234*t3138;
  t3236 = t3231 + t3235;
  t3237 = t2927*t3236;
  t3242 = t3241*t3148;
  t3243 = t3237 + t3242;
  t3245 = t2927*t3241;
  t3246 = -1.*t3236*t3148;
  t3247 = t3245 + t3246;
  t3152 = -1.*t2920*t3151;
  t3162 = t3154*t3161;
  t3163 = t3152 + t3162;
  t3170 = t3154*t3151;
  t3171 = t2920*t3161;
  t3172 = t3170 + t3171;
  t3208 = -1.*t2920*t3206;
  t3218 = t3154*t3214;
  t3219 = t3208 + t3218;
  t3223 = t3154*t3206;
  t3224 = t2920*t3214;
  t3226 = t3223 + t3224;
  t3244 = -1.*t2920*t3243;
  t3249 = t3154*t3247;
  t3250 = t3244 + t3249;
  t3256 = t3154*t3243;
  t3259 = t2920*t3247;
  t3260 = t3256 + t3259;
  p_output1[0]=-1.*t2887*t3163 + t3167*t3172;
  p_output1[1]=-1.*t2887*t3219 + t3167*t3226;
  p_output1[2]=-1.*t2887*t3250 + t3167*t3260;
  p_output1[3]=t3163*t3167 + t2887*t3172;
  p_output1[4]=t3167*t3219 + t2887*t3226;
  p_output1[5]=t3167*t3250 + t2887*t3260;
  p_output1[6]=-1.*t3025*t3134 + t3008*t3018*t3138;
  p_output1[7]=t3018*t3098*t3138 - 1.*t3025*t3192;
  p_output1[8]=-1.*t3105*t3138 - 1.*t3025*t3234;
}



void R_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
