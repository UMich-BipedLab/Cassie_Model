/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_left_src.h"

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
  double t3227;
  double t3222;
  double t3229;
  double t3223;
  double t3230;
  double t3184;
  double t3226;
  double t3231;
  double t3240;
  double t3245;
  double t3247;
  double t3249;
  double t3251;
  double t3259;
  double t3264;
  double t3266;
  double t3269;
  double t3256;
  double t3257;
  double t3258;
  double t3274;
  double t3292;
  double t3294;
  double t3295;
  double t3301;
  double t3289;
  double t3290;
  double t3291;
  double t3307;
  double t3308;
  double t3309;
  double t3315;
  double t3316;
  double t3317;
  double t3319;
  double t3322;
  double t3323;
  double t3324;
  double t3331;
  double t3332;
  double t3334;
  double t3336;
  double t3337;
  double t3338;
  double t3340;
  double t3344;
  double t3346;
  double t3347;
  double t3354;
  double t3355;
  double t3357;
  double t3188;
  double t3214;
  double t3218;
  double t3219;
  double t3253;
  double t3254;
  double t3370;
  double t3371;
  double t3372;
  double t3374;
  double t3375;
  double t3376;
  double t3267;
  double t3270;
  double t3272;
  double t3275;
  double t3276;
  double t3281;
  double t3378;
  double t3379;
  double t3380;
  double t3299;
  double t3302;
  double t3304;
  double t3310;
  double t3311;
  double t3313;
  double t3318;
  double t3320;
  double t3321;
  double t3390;
  double t3391;
  double t3392;
  double t3395;
  double t3396;
  double t3398;
  double t3327;
  double t3329;
  double t3330;
  double t3339;
  double t3341;
  double t3343;
  double t3401;
  double t3403;
  double t3404;
  double t3407;
  double t3408;
  double t3409;
  double t3349;
  double t3351;
  double t3352;
  double t3411;
  double t3412;
  double t3413;
  double t3415;
  double t3416;
  double t3417;
  double t3430;
  double t3431;
  double t3432;
  double t3439;
  double t3440;
  double t3441;
  double t3443;
  double t3444;
  double t3445;
  double t3447;
  double t3448;
  double t3449;
  double t3451;
  double t3452;
  double t3453;
  double t3455;
  double t3456;
  double t3457;
  double t3459;
  double t3460;
  double t3461;
  t3227 = Cos(var1[3]);
  t3222 = Cos(var1[5]);
  t3229 = Sin(var1[4]);
  t3223 = Sin(var1[3]);
  t3230 = Sin(var1[5]);
  t3184 = Cos(var1[6]);
  t3226 = -1.*t3222*t3223;
  t3231 = t3227*t3229*t3230;
  t3240 = t3226 + t3231;
  t3245 = t3227*t3222*t3229;
  t3247 = t3223*t3230;
  t3249 = t3245 + t3247;
  t3251 = Sin(var1[6]);
  t3259 = Cos(var1[7]);
  t3264 = -1.*t3259;
  t3266 = 1. + t3264;
  t3269 = Sin(var1[7]);
  t3256 = t3184*t3240;
  t3257 = t3249*t3251;
  t3258 = t3256 + t3257;
  t3274 = Cos(var1[4]);
  t3292 = Cos(var1[8]);
  t3294 = -1.*t3292;
  t3295 = 1. + t3294;
  t3301 = Sin(var1[8]);
  t3289 = t3227*t3274*t3259;
  t3290 = t3258*t3269;
  t3291 = t3289 + t3290;
  t3307 = t3184*t3249;
  t3308 = -1.*t3240*t3251;
  t3309 = t3307 + t3308;
  t3315 = Cos(var1[9]);
  t3316 = -1.*t3315;
  t3317 = 1. + t3316;
  t3319 = Sin(var1[9]);
  t3322 = t3292*t3291;
  t3323 = t3309*t3301;
  t3324 = t3322 + t3323;
  t3331 = t3292*t3309;
  t3332 = -1.*t3291*t3301;
  t3334 = t3331 + t3332;
  t3336 = Cos(var1[10]);
  t3337 = -1.*t3336;
  t3338 = 1. + t3337;
  t3340 = Sin(var1[10]);
  t3344 = -1.*t3319*t3324;
  t3346 = t3315*t3334;
  t3347 = t3344 + t3346;
  t3354 = t3315*t3324;
  t3355 = t3319*t3334;
  t3357 = t3354 + t3355;
  t3188 = -1.*t3184;
  t3214 = 1. + t3188;
  t3218 = 0.135*t3214;
  t3219 = 0. + t3218;
  t3253 = -0.135*t3251;
  t3254 = 0. + t3253;
  t3370 = t3227*t3222;
  t3371 = t3223*t3229*t3230;
  t3372 = t3370 + t3371;
  t3374 = t3222*t3223*t3229;
  t3375 = -1.*t3227*t3230;
  t3376 = t3374 + t3375;
  t3267 = 0.135*t3266;
  t3270 = 0.049*t3269;
  t3272 = 0. + t3267 + t3270;
  t3275 = -0.049*t3266;
  t3276 = 0.135*t3269;
  t3281 = 0. + t3275 + t3276;
  t3378 = t3184*t3372;
  t3379 = t3376*t3251;
  t3380 = t3378 + t3379;
  t3299 = -0.049*t3295;
  t3302 = -0.09*t3301;
  t3304 = 0. + t3299 + t3302;
  t3310 = -0.09*t3295;
  t3311 = 0.049*t3301;
  t3313 = 0. + t3310 + t3311;
  t3318 = -0.049*t3317;
  t3320 = -0.21*t3319;
  t3321 = 0. + t3318 + t3320;
  t3390 = t3274*t3259*t3223;
  t3391 = t3380*t3269;
  t3392 = t3390 + t3391;
  t3395 = t3184*t3376;
  t3396 = -1.*t3372*t3251;
  t3398 = t3395 + t3396;
  t3327 = -0.21*t3317;
  t3329 = 0.049*t3319;
  t3330 = 0. + t3327 + t3329;
  t3339 = -0.2707*t3338;
  t3341 = 0.0016*t3340;
  t3343 = 0. + t3339 + t3341;
  t3401 = t3292*t3392;
  t3403 = t3398*t3301;
  t3404 = t3401 + t3403;
  t3407 = t3292*t3398;
  t3408 = -1.*t3392*t3301;
  t3409 = t3407 + t3408;
  t3349 = -0.0016*t3338;
  t3351 = -0.2707*t3340;
  t3352 = 0. + t3349 + t3351;
  t3411 = -1.*t3319*t3404;
  t3412 = t3315*t3409;
  t3413 = t3411 + t3412;
  t3415 = t3315*t3404;
  t3416 = t3319*t3409;
  t3417 = t3415 + t3416;
  t3430 = t3274*t3184*t3230;
  t3431 = t3274*t3222*t3251;
  t3432 = t3430 + t3431;
  t3439 = -1.*t3259*t3229;
  t3440 = t3432*t3269;
  t3441 = t3439 + t3440;
  t3443 = t3274*t3222*t3184;
  t3444 = -1.*t3274*t3230*t3251;
  t3445 = t3443 + t3444;
  t3447 = t3292*t3441;
  t3448 = t3445*t3301;
  t3449 = t3447 + t3448;
  t3451 = t3292*t3445;
  t3452 = -1.*t3441*t3301;
  t3453 = t3451 + t3452;
  t3455 = -1.*t3319*t3449;
  t3456 = t3315*t3453;
  t3457 = t3455 + t3456;
  t3459 = t3315*t3449;
  t3460 = t3319*t3453;
  t3461 = t3459 + t3460;
  p_output1[0]=0. + t3219*t3240 + t3249*t3254 + t3258*t3272 + 0.1305*(t3258*t3259 - 1.*t3227*t3269*t3274) + t3227*t3274*t3281 + t3291*t3304 + t3309*t3313 + t3321*t3324 + t3330*t3334 + t3343*t3347 + t3352*t3357 + 0.0184*(t3340*t3347 + t3336*t3357) - 0.7055*(t3336*t3347 - 1.*t3340*t3357) + var1[0];
  p_output1[1]=0. + t3223*t3274*t3281 + t3219*t3372 + t3254*t3376 + t3272*t3380 + 0.1305*(-1.*t3223*t3269*t3274 + t3259*t3380) + t3304*t3392 + t3313*t3398 + t3321*t3404 + t3330*t3409 + t3343*t3413 + t3352*t3417 + 0.0184*(t3340*t3413 + t3336*t3417) - 0.7055*(t3336*t3413 - 1.*t3340*t3417) + var1[1];
  p_output1[2]=0. + t3219*t3230*t3274 + t3222*t3254*t3274 - 1.*t3229*t3281 + t3272*t3432 + 0.1305*(t3229*t3269 + t3259*t3432) + t3304*t3441 + t3313*t3445 + t3321*t3449 + t3330*t3453 + t3343*t3457 + t3352*t3461 + 0.0184*(t3340*t3457 + t3336*t3461) - 0.7055*(t3336*t3457 - 1.*t3340*t3461) + var1[2];
}



void p_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
