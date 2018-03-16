/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t2850;
  double t2861;
  double t2999;
  double t2943;
  double t3035;
  double t3041;
  double t3052;
  double t3037;
  double t3047;
  double t3049;
  double t3034;
  double t3053;
  double t3054;
  double t3058;
  double t3068;
  double t3051;
  double t3060;
  double t3063;
  double t3021;
  double t3070;
  double t3076;
  double t3078;
  double t3104;
  double t3067;
  double t3084;
  double t3088;
  double t3018;
  double t3106;
  double t3107;
  double t3108;
  double t3117;
  double t3093;
  double t3111;
  double t3112;
  double t3014;
  double t3119;
  double t3120;
  double t3121;
  double t3138;
  double t3140;
  double t3146;
  double t3148;
  double t3154;
  double t3158;
  double t3147;
  double t3163;
  double t3164;
  double t3167;
  double t3168;
  double t3170;
  double t3166;
  double t3174;
  double t3176;
  double t3178;
  double t3181;
  double t3182;
  double t3177;
  double t3183;
  double t3184;
  double t3186;
  double t3187;
  double t3188;
  double t3197;
  double t3198;
  double t3199;
  double t3201;
  double t3202;
  double t3203;
  double t3200;
  double t3204;
  double t3205;
  double t3207;
  double t3208;
  double t3209;
  double t3206;
  double t3210;
  double t3211;
  double t3213;
  double t3214;
  double t3215;
  double t3114;
  double t3122;
  double t3123;
  double t3128;
  double t3130;
  double t3133;
  double t3185;
  double t3189;
  double t3190;
  double t3192;
  double t3193;
  double t3194;
  double t3212;
  double t3216;
  double t3217;
  double t3219;
  double t3220;
  double t3221;
  t2850 = Cos(var1[1]);
  t2861 = Sin(var1[0]);
  t2999 = Sin(var1[1]);
  t2943 = Cos(var1[0]);
  t3035 = Cos(var1[2]);
  t3041 = Sin(var1[2]);
  t3052 = Cos(var1[3]);
  t3037 = t3035*t2861*t2999;
  t3047 = t2943*t3041;
  t3049 = t3037 + t3047;
  t3034 = Sin(var1[3]);
  t3053 = t2943*t3035;
  t3054 = -1.*t2861*t2999*t3041;
  t3058 = t3053 + t3054;
  t3068 = Cos(var1[4]);
  t3051 = -1.*t3034*t3049;
  t3060 = t3052*t3058;
  t3063 = t3051 + t3060;
  t3021 = Sin(var1[4]);
  t3070 = t3052*t3049;
  t3076 = t3034*t3058;
  t3078 = t3070 + t3076;
  t3104 = Cos(var1[5]);
  t3067 = t3021*t3063;
  t3084 = t3068*t3078;
  t3088 = t3067 + t3084;
  t3018 = Sin(var1[5]);
  t3106 = t3068*t3063;
  t3107 = -1.*t3021*t3078;
  t3108 = t3106 + t3107;
  t3117 = Cos(var1[6]);
  t3093 = -1.*t3018*t3088;
  t3111 = t3104*t3108;
  t3112 = t3093 + t3111;
  t3014 = Sin(var1[6]);
  t3119 = t3104*t3088;
  t3120 = t3018*t3108;
  t3121 = t3119 + t3120;
  t3138 = t2943*t3035*t2999;
  t3140 = -1.*t2861*t3041;
  t3146 = t3138 + t3140;
  t3148 = -1.*t3035*t2861;
  t3154 = -1.*t2943*t2999*t3041;
  t3158 = t3148 + t3154;
  t3147 = -1.*t3034*t3146;
  t3163 = t3052*t3158;
  t3164 = t3147 + t3163;
  t3167 = t3052*t3146;
  t3168 = t3034*t3158;
  t3170 = t3167 + t3168;
  t3166 = t3021*t3164;
  t3174 = t3068*t3170;
  t3176 = t3166 + t3174;
  t3178 = t3068*t3164;
  t3181 = -1.*t3021*t3170;
  t3182 = t3178 + t3181;
  t3177 = -1.*t3018*t3176;
  t3183 = t3104*t3182;
  t3184 = t3177 + t3183;
  t3186 = t3104*t3176;
  t3187 = t3018*t3182;
  t3188 = t3186 + t3187;
  t3197 = -1.*t2850*t3035*t3034;
  t3198 = -1.*t3052*t2850*t3041;
  t3199 = t3197 + t3198;
  t3201 = t3052*t2850*t3035;
  t3202 = -1.*t2850*t3034*t3041;
  t3203 = t3201 + t3202;
  t3200 = t3021*t3199;
  t3204 = t3068*t3203;
  t3205 = t3200 + t3204;
  t3207 = t3068*t3199;
  t3208 = -1.*t3021*t3203;
  t3209 = t3207 + t3208;
  t3206 = -1.*t3018*t3205;
  t3210 = t3104*t3209;
  t3211 = t3206 + t3210;
  t3213 = t3104*t3205;
  t3214 = t3018*t3209;
  t3215 = t3213 + t3214;
  t3114 = t3014*t3112;
  t3122 = t3117*t3121;
  t3123 = t3114 + t3122;
  t3128 = t3117*t3112;
  t3130 = -1.*t3014*t3121;
  t3133 = t3128 + t3130;
  t3185 = t3014*t3184;
  t3189 = t3117*t3188;
  t3190 = t3185 + t3189;
  t3192 = t3117*t3184;
  t3193 = -1.*t3014*t3188;
  t3194 = t3192 + t3193;
  t3212 = t3014*t3211;
  t3216 = t3117*t3215;
  t3217 = t3212 + t3216;
  t3219 = t3117*t3211;
  t3220 = -1.*t3014*t3215;
  t3221 = t3219 + t3220;
  p_output1[0]=0. + t2850*t2861;
  p_output1[1]=0. - 1.*t2850*t2943;
  p_output1[2]=0. + t2999;
  p_output1[3]=0. - 0.642788*t3123 - 0.766044*t3133;
  p_output1[4]=0. + 0.642788*t3190 + 0.766044*t3194;
  p_output1[5]=0. + 0.642788*t3217 + 0.766044*t3221;
  p_output1[6]=0. + 0.766044*t3123 - 0.642788*t3133;
  p_output1[7]=0. - 0.766044*t3190 + 0.642788*t3194;
  p_output1[8]=0. - 0.766044*t3217 + 0.642788*t3221;
}



void R_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
