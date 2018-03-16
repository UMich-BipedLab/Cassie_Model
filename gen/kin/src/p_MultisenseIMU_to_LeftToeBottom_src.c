/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t2982;
  double t3084;
  double t3164;
  double t3186;
  double t3190;
  double t3192;
  double t3207;
  double t3221;
  double t3235;
  double t3238;
  double t3240;
  double t3248;
  double t3257;
  double t3258;
  double t3261;
  double t3272;
  double t3274;
  double t3277;
  double t3280;
  double t3281;
  double t3283;
  double t3286;
  double t3289;
  double t3290;
  double t3291;
  double t3296;
  double t3297;
  double t3298;
  double t3300;
  double t3301;
  double t3302;
  double t3306;
  double t3312;
  double t3313;
  double t3314;
  double t3320;
  double t3322;
  double t3323;
  double t3326;
  double t3328;
  double t3330;
  double t3332;
  double t3336;
  double t3337;
  double t3338;
  double t3343;
  double t3344;
  double t3345;
  double t3119;
  double t3124;
  double t3138;
  double t3167;
  double t3168;
  double t3194;
  double t3209;
  double t3210;
  double t3225;
  double t3228;
  double t3231;
  double t3243;
  double t3252;
  double t3255;
  double t3263;
  double t3265;
  double t3268;
  double t3284;
  double t3287;
  double t3288;
  double t3372;
  double t3373;
  double t3374;
  double t3376;
  double t3377;
  double t3378;
  double t3293;
  double t3294;
  double t3295;
  double t3303;
  double t3309;
  double t3310;
  double t3380;
  double t3381;
  double t3382;
  double t3384;
  double t3385;
  double t3386;
  double t3316;
  double t3318;
  double t3319;
  double t3331;
  double t3334;
  double t3335;
  double t3388;
  double t3389;
  double t3390;
  double t3392;
  double t3393;
  double t3394;
  double t3340;
  double t3341;
  double t3342;
  double t3396;
  double t3397;
  double t3398;
  double t3400;
  double t3401;
  double t3402;
  double t3418;
  double t3419;
  double t3420;
  double t3422;
  double t3423;
  double t3424;
  double t3426;
  double t3427;
  double t3428;
  double t3430;
  double t3431;
  double t3432;
  double t3434;
  double t3435;
  double t3436;
  double t3438;
  double t3439;
  double t3440;
  t2982 = Sin(var1[0]);
  t3084 = Cos(var1[1]);
  t3164 = Sin(var1[1]);
  t3186 = Cos(var1[2]);
  t3190 = -1.*t3186;
  t3192 = 1. + t3190;
  t3207 = Sin(var1[2]);
  t3221 = Cos(var1[0]);
  t3235 = Cos(var1[3]);
  t3238 = -1.*t3235;
  t3240 = 1. + t3238;
  t3248 = Sin(var1[3]);
  t3257 = t3186*t2982*t3164;
  t3258 = t3221*t3207;
  t3261 = t3257 + t3258;
  t3272 = t3221*t3186;
  t3274 = -1.*t2982*t3164*t3207;
  t3277 = t3272 + t3274;
  t3280 = Cos(var1[4]);
  t3281 = -1.*t3280;
  t3283 = 1. + t3281;
  t3286 = Sin(var1[4]);
  t3289 = -1.*t3248*t3261;
  t3290 = t3235*t3277;
  t3291 = t3289 + t3290;
  t3296 = t3235*t3261;
  t3297 = t3248*t3277;
  t3298 = t3296 + t3297;
  t3300 = Cos(var1[5]);
  t3301 = -1.*t3300;
  t3302 = 1. + t3301;
  t3306 = Sin(var1[5]);
  t3312 = t3286*t3291;
  t3313 = t3280*t3298;
  t3314 = t3312 + t3313;
  t3320 = t3280*t3291;
  t3322 = -1.*t3286*t3298;
  t3323 = t3320 + t3322;
  t3326 = Cos(var1[6]);
  t3328 = -1.*t3326;
  t3330 = 1. + t3328;
  t3332 = Sin(var1[6]);
  t3336 = -1.*t3306*t3314;
  t3337 = t3300*t3323;
  t3338 = t3336 + t3337;
  t3343 = t3300*t3314;
  t3344 = t3306*t3323;
  t3345 = t3343 + t3344;
  t3119 = -1.*t3084;
  t3124 = 1. + t3119;
  t3138 = 0.135*t3124;
  t3167 = 0.049*t3164;
  t3168 = 0. + t3138 + t3167;
  t3194 = -0.049*t3192;
  t3209 = -0.09*t3207;
  t3210 = 0. + t3194 + t3209;
  t3225 = -0.09*t3192;
  t3228 = 0.049*t3207;
  t3231 = 0. + t3225 + t3228;
  t3243 = -0.049*t3240;
  t3252 = -0.21*t3248;
  t3255 = 0. + t3243 + t3252;
  t3263 = -0.21*t3240;
  t3265 = 0.049*t3248;
  t3268 = 0. + t3263 + t3265;
  t3284 = -0.2707*t3283;
  t3287 = 0.0016*t3286;
  t3288 = 0. + t3284 + t3287;
  t3372 = t3221*t3186*t3164;
  t3373 = -1.*t2982*t3207;
  t3374 = t3372 + t3373;
  t3376 = -1.*t3186*t2982;
  t3377 = -1.*t3221*t3164*t3207;
  t3378 = t3376 + t3377;
  t3293 = -0.0016*t3283;
  t3294 = -0.2707*t3286;
  t3295 = 0. + t3293 + t3294;
  t3303 = 0.0184*t3302;
  t3309 = -0.7055*t3306;
  t3310 = 0. + t3303 + t3309;
  t3380 = -1.*t3248*t3374;
  t3381 = t3235*t3378;
  t3382 = t3380 + t3381;
  t3384 = t3235*t3374;
  t3385 = t3248*t3378;
  t3386 = t3384 + t3385;
  t3316 = -0.7055*t3302;
  t3318 = -0.0184*t3306;
  t3319 = 0. + t3316 + t3318;
  t3331 = -1.1135*t3330;
  t3334 = 0.0216*t3332;
  t3335 = 0. + t3331 + t3334;
  t3388 = t3286*t3382;
  t3389 = t3280*t3386;
  t3390 = t3388 + t3389;
  t3392 = t3280*t3382;
  t3393 = -1.*t3286*t3386;
  t3394 = t3392 + t3393;
  t3340 = -0.0216*t3330;
  t3341 = -1.1135*t3332;
  t3342 = 0. + t3340 + t3341;
  t3396 = -1.*t3306*t3390;
  t3397 = t3300*t3394;
  t3398 = t3396 + t3397;
  t3400 = t3300*t3390;
  t3401 = t3306*t3394;
  t3402 = t3400 + t3401;
  t3418 = -1.*t3084*t3186*t3248;
  t3419 = -1.*t3235*t3084*t3207;
  t3420 = t3418 + t3419;
  t3422 = t3235*t3084*t3186;
  t3423 = -1.*t3084*t3248*t3207;
  t3424 = t3422 + t3423;
  t3426 = t3286*t3420;
  t3427 = t3280*t3424;
  t3428 = t3426 + t3427;
  t3430 = t3280*t3420;
  t3431 = -1.*t3286*t3424;
  t3432 = t3430 + t3431;
  t3434 = -1.*t3306*t3428;
  t3435 = t3300*t3432;
  t3436 = t3434 + t3435;
  t3438 = t3300*t3428;
  t3439 = t3306*t3432;
  t3440 = t3438 + t3439;
  p_output1[0]=0.24925 + 0.135*t2982 - 0.1305*t2982*t3084 - 1.*t2982*t3168 - 1.*t2982*t3164*t3210 - 1.*t3221*t3231 - 1.*t3255*t3261 - 1.*t3268*t3277 - 1.*t3288*t3291 - 1.*t3295*t3298 - 1.*t3310*t3314 - 1.*t3319*t3323 - 1.*t3335*t3338 - 1.*t3342*t3345 - 0.0306*(t3332*t3338 + t3326*t3345) + 1.1312*(t3326*t3338 - 1.*t3332*t3345);
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t3221) + 0.1305*t3084*t3221 + t3168*t3221 + t3164*t3210*t3221 - 1.*t2982*t3231 + t3255*t3374 + t3268*t3378 + t3288*t3382 + t3295*t3386 + t3310*t3390 + t3319*t3394 + t3335*t3398 + t3342*t3402 + 0.0306*(t3332*t3398 + t3326*t3402) - 1.1312*(t3326*t3398 - 1.*t3332*t3402);
  p_output1[2]=-0.047 - 0.049*t3124 + 0.004500000000000004*t3164 + t3084*t3210 + t3084*t3186*t3255 - 1.*t3084*t3207*t3268 + t3288*t3420 + t3295*t3424 + t3310*t3428 + t3319*t3432 + t3335*t3436 + t3342*t3440 + 0.0306*(t3332*t3436 + t3326*t3440) - 1.1312*(t3326*t3436 - 1.*t3332*t3440);
}



void p_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
