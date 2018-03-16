/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_flexion_right_src.h"

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
  double t2325;
  double t3076;
  double t2945;
  double t3036;
  double t3083;
  double t574;
  double t579;
  double t580;
  double t1150;
  double t2887;
  double t3045;
  double t3088;
  double t3089;
  double t3095;
  double t3113;
  double t3118;
  double t3119;
  double t513;
  double t3139;
  double t3140;
  double t3141;
  double t3144;
  double t3152;
  double t3153;
  double t3161;
  double t3167;
  double t3169;
  double t3174;
  double t3201;
  double t3203;
  double t3204;
  double t581;
  double t1152;
  double t1841;
  double t2891;
  double t2895;
  double t3103;
  double t3107;
  double t3108;
  double t3111;
  double t3126;
  double t3134;
  double t3135;
  double t7199;
  double t7200;
  double t7212;
  double t7222;
  double t7224;
  double t7225;
  double t3158;
  double t3164;
  double t3166;
  double t7227;
  double t7229;
  double t7230;
  double t3196;
  double t3197;
  double t3199;
  double t7244;
  double t7245;
  double t7246;
  double t7256;
  double t7257;
  double t7259;
  double t7283;
  double t7285;
  double t7287;
  double t7290;
  double t7291;
  double t7293;
  double t7305;
  double t7307;
  double t7309;
  double t7324;
  double t7325;
  double t7326;
  double t7330;
  double t7331;
  double t7332;
  double t7340;
  double t7341;
  double t7342;
  double t7358;
  double t7359;
  double t7360;
  double t7363;
  double t7365;
  double t7366;
  double t7372;
  double t7373;
  double t7374;
  double t7391;
  double t7393;
  double t7394;
  double t7400;
  double t7401;
  double t7396;
  double t7397;
  double t7398;
  double t7418;
  double t7419;
  double t7420;
  double t7426;
  double t7429;
  double t7430;
  double t7423;
  double t7424;
  double t7455;
  double t7461;
  double t7462;
  double t7448;
  double t7449;
  double t7450;
  double t7482;
  double t7483;
  double t7503;
  double t7504;
  double t7505;
  double t7510;
  double t7511;
  double t7507;
  double t7508;
  double t7453;
  double t7463;
  double t7465;
  double t7467;
  double t7469;
  double t7470;
  double t7471;
  double t7474;
  double t7475;
  double t7476;
  double t7477;
  double t7478;
  double t7251;
  double t7252;
  double t7254;
  double t7528;
  double t7529;
  double t7531;
  double t7534;
  double t7535;
  double t7547;
  double t7548;
  double t7549;
  double t7551;
  double t7552;
  double t7553;
  double t7562;
  double t7563;
  double t7564;
  double t7566;
  double t7567;
  double t7568;
  double t7272;
  double t7273;
  double t7275;
  double t7578;
  double t7579;
  double t7581;
  double t7582;
  double t7583;
  double t7594;
  double t7595;
  double t7596;
  double t7608;
  double t7609;
  double t7610;
  t2325 = Sin(var1[3]);
  t3076 = Cos(var1[3]);
  t2945 = Cos(var1[5]);
  t3036 = Sin(var1[4]);
  t3083 = Sin(var1[5]);
  t574 = Cos(var1[14]);
  t579 = -1.*t574;
  t580 = 1. + t579;
  t1150 = Sin(var1[14]);
  t2887 = Sin(var1[13]);
  t3045 = -1.*t2945*t2325*t3036;
  t3088 = t3076*t3083;
  t3089 = t3045 + t3088;
  t3095 = Cos(var1[13]);
  t3113 = -1.*t3076*t2945;
  t3118 = -1.*t2325*t3036*t3083;
  t3119 = t3113 + t3118;
  t513 = Cos(var1[4]);
  t3139 = t2887*t3089;
  t3140 = t3095*t3119;
  t3141 = t3139 + t3140;
  t3144 = Cos(var1[15]);
  t3152 = -1.*t3144;
  t3153 = 1. + t3152;
  t3161 = Sin(var1[15]);
  t3167 = t3095*t3089;
  t3169 = -1.*t2887*t3119;
  t3174 = t3167 + t3169;
  t3201 = -1.*t574*t513*t2325;
  t3203 = t1150*t3141;
  t3204 = t3201 + t3203;
  t581 = -0.049*t580;
  t1152 = -0.135*t1150;
  t1841 = 0. + t581 + t1152;
  t2891 = 0.135*t2887;
  t2895 = 0. + t2891;
  t3103 = -1.*t3095;
  t3107 = 1. + t3103;
  t3108 = -0.135*t3107;
  t3111 = 0. + t3108;
  t3126 = -0.135*t580;
  t3134 = 0.049*t1150;
  t3135 = 0. + t3126 + t3134;
  t7199 = t3076*t2945*t3036;
  t7200 = t2325*t3083;
  t7212 = t7199 + t7200;
  t7222 = -1.*t2945*t2325;
  t7224 = t3076*t3036*t3083;
  t7225 = t7222 + t7224;
  t3158 = -0.09*t3153;
  t3164 = 0.049*t3161;
  t3166 = 0. + t3158 + t3164;
  t7227 = t2887*t7212;
  t7229 = t3095*t7225;
  t7230 = t7227 + t7229;
  t3196 = -0.049*t3153;
  t3197 = -0.09*t3161;
  t3199 = 0. + t3196 + t3197;
  t7244 = t3095*t7212;
  t7245 = -1.*t2887*t7225;
  t7246 = t7244 + t7245;
  t7256 = t574*t3076*t513;
  t7257 = t1150*t7230;
  t7259 = t7256 + t7257;
  t7283 = t3076*t513*t2945*t2887;
  t7285 = t3095*t3076*t513*t3083;
  t7287 = t7283 + t7285;
  t7290 = t3095*t3076*t513*t2945;
  t7291 = -1.*t3076*t513*t2887*t3083;
  t7293 = t7290 + t7291;
  t7305 = -1.*t574*t3076*t3036;
  t7307 = t1150*t7287;
  t7309 = t7305 + t7307;
  t7324 = t513*t2945*t2887*t2325;
  t7325 = t3095*t513*t2325*t3083;
  t7326 = t7324 + t7325;
  t7330 = t3095*t513*t2945*t2325;
  t7331 = -1.*t513*t2887*t2325*t3083;
  t7332 = t7330 + t7331;
  t7340 = -1.*t574*t2325*t3036;
  t7341 = t1150*t7326;
  t7342 = t7340 + t7341;
  t7358 = -1.*t2945*t2887*t3036;
  t7359 = -1.*t3095*t3036*t3083;
  t7360 = t7358 + t7359;
  t7363 = -1.*t3095*t2945*t3036;
  t7365 = t2887*t3036*t3083;
  t7366 = t7363 + t7365;
  t7372 = -1.*t574*t513;
  t7373 = t1150*t7360;
  t7374 = t7372 + t7373;
  t7391 = t2945*t2325;
  t7393 = -1.*t3076*t3036*t3083;
  t7394 = t7391 + t7393;
  t7400 = t2887*t7394;
  t7401 = t7244 + t7400;
  t7396 = -1.*t2887*t7212;
  t7397 = t3095*t7394;
  t7398 = t7396 + t7397;
  t7418 = t2945*t2325*t3036;
  t7419 = -1.*t3076*t3083;
  t7420 = t7418 + t7419;
  t7426 = t3095*t7420;
  t7429 = t2887*t3119;
  t7430 = t7426 + t7429;
  t7423 = -1.*t2887*t7420;
  t7424 = t7423 + t3140;
  t7455 = t3095*t513*t2945;
  t7461 = -1.*t513*t2887*t3083;
  t7462 = t7455 + t7461;
  t7448 = -1.*t513*t2945*t2887;
  t7449 = -1.*t3095*t513*t3083;
  t7450 = t7448 + t7449;
  t7482 = -1.*t3095*t7225;
  t7483 = t7396 + t7482;
  t7503 = t3076*t2945;
  t7504 = t2325*t3036*t3083;
  t7505 = t7503 + t7504;
  t7510 = -1.*t2887*t7505;
  t7511 = t7426 + t7510;
  t7507 = -1.*t3095*t7505;
  t7508 = t7423 + t7507;
  t7453 = t3166*t7450;
  t7463 = -0.135*t574*t7462;
  t7465 = t3135*t7462;
  t7467 = t1150*t3199*t7462;
  t7469 = t3161*t7450;
  t7470 = t3144*t1150*t7462;
  t7471 = t7469 + t7470;
  t7474 = -0.049*t7471;
  t7475 = t3144*t7450;
  t7476 = -1.*t1150*t3161*t7462;
  t7477 = t7475 + t7476;
  t7478 = -0.09*t7477;
  t7251 = -1.*t3076*t513*t1150;
  t7252 = t574*t7230;
  t7254 = t7251 + t7252;
  t7528 = -0.135*t574;
  t7529 = -0.049*t1150;
  t7531 = t7528 + t7529;
  t7534 = 0.049*t574;
  t7535 = t7534 + t1152;
  t7547 = t2887*t7420;
  t7548 = t3095*t7505;
  t7549 = t7547 + t7548;
  t7551 = -1.*t513*t1150*t2325;
  t7552 = t574*t7549;
  t7553 = t7551 + t7552;
  t7562 = t513*t2945*t2887;
  t7563 = t3095*t513*t3083;
  t7564 = t7562 + t7563;
  t7566 = t1150*t3036;
  t7567 = t574*t7564;
  t7568 = t7566 + t7567;
  t7272 = t3144*t7246;
  t7273 = -1.*t3161*t7259;
  t7275 = t7272 + t7273;
  t7578 = 0.049*t3144;
  t7579 = t7578 + t3197;
  t7581 = -0.09*t3144;
  t7582 = -0.049*t3161;
  t7583 = t7581 + t7582;
  t7594 = t574*t513*t2325;
  t7595 = t1150*t7549;
  t7596 = t7594 + t7595;
  t7608 = -1.*t574*t3036;
  t7609 = t1150*t7564;
  t7610 = t7608 + t7609;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2895*t3089 + t3111*t3119 + t3135*t3141 + t3166*t3174 + t3199*t3204 - 0.049*(t3161*t3174 + t3144*t3204) - 0.09*(t3144*t3174 - 1.*t3161*t3204) - 1.*t1841*t2325*t513 - 0.135*(t1150*t2325*t513 + t3141*t574);
  p_output1[10]=t1841*t3076*t513 + t2895*t7212 + t3111*t7225 + t3135*t7230 + t3166*t7246 - 0.135*t7254 + t3199*t7259 - 0.049*(t3161*t7246 + t3144*t7259) - 0.09*t7275;
  p_output1[11]=0;
  p_output1[12]=-1.*t1841*t3036*t3076 + t2895*t2945*t3076*t513 + t3076*t3083*t3111*t513 + t3135*t7287 - 0.135*(t1150*t3036*t3076 + t574*t7287) + t3166*t7293 + t3199*t7309 - 0.049*(t3161*t7293 + t3144*t7309) - 0.09*(t3144*t7293 - 1.*t3161*t7309);
  p_output1[13]=-1.*t1841*t2325*t3036 + t2325*t2895*t2945*t513 + t2325*t3083*t3111*t513 + t3135*t7326 - 0.135*(t1150*t2325*t3036 + t574*t7326) + t3166*t7332 + t3199*t7342 - 0.049*(t3161*t7332 + t3144*t7342) - 0.09*(t3144*t7332 - 1.*t3161*t7342);
  p_output1[14]=-1.*t2895*t2945*t3036 - 1.*t3036*t3083*t3111 - 1.*t1841*t513 + t3135*t7360 - 0.135*(t1150*t513 + t574*t7360) + t3166*t7366 + t3199*t7374 - 0.049*(t3161*t7366 + t3144*t7374) - 0.09*(t3144*t7366 - 1.*t3161*t7374);
  p_output1[15]=t3111*t7212 + t2895*t7394 + t3166*t7398 + t3135*t7401 + t1150*t3199*t7401 - 0.135*t574*t7401 - 0.049*(t3161*t7398 + t1150*t3144*t7401) - 0.09*(t3144*t7398 - 1.*t1150*t3161*t7401);
  p_output1[16]=t2895*t3119 + t3111*t7420 + t3166*t7424 + t3135*t7430 + t1150*t3199*t7430 - 0.135*t574*t7430 - 0.049*(t3161*t7424 + t1150*t3144*t7430) - 0.09*(t3144*t7424 - 1.*t1150*t3161*t7430);
  p_output1[17]=-1.*t2895*t3083*t513 + t2945*t3111*t513 + t7453 + t7463 + t7465 + t7467 + t7474 + t7478;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t3095*t7212 - 0.135*t2887*t7225 + t3135*t7246 + t1150*t3199*t7246 - 0.135*t574*t7246 + t3166*t7483 - 0.09*(-1.*t1150*t3161*t7246 + t3144*t7483) - 0.049*(t1150*t3144*t7246 + t3161*t7483);
  p_output1[40]=0.135*t3095*t7420 - 0.135*t2887*t7505 + t3166*t7508 + t3135*t7511 + t1150*t3199*t7511 - 0.135*t574*t7511 - 0.049*(t3161*t7508 + t1150*t3144*t7511) - 0.09*(t3144*t7508 - 1.*t1150*t3161*t7511);
  p_output1[41]=-0.135*t2887*t3083*t513 + 0.135*t2945*t3095*t513 + t7453 + t7463 + t7465 + t7467 + t7474 + t7478;
  p_output1[42]=-0.135*(-1.*t3076*t513*t574 - 1.*t1150*t7230) - 0.049*t3144*t7254 + 0.09*t3161*t7254 + t3199*t7254 + t3076*t513*t7531 + t7230*t7535;
  p_output1[43]=t2325*t513*t7531 + t7535*t7549 - 0.135*(t3201 - 1.*t1150*t7549) - 0.049*t3144*t7553 + 0.09*t3161*t7553 + t3199*t7553;
  p_output1[44]=-1.*t3036*t7531 + t7535*t7564 - 0.135*(t3036*t574 - 1.*t1150*t7564) - 0.049*t3144*t7568 + 0.09*t3161*t7568 + t3199*t7568;
  p_output1[45]=-0.09*(-1.*t3161*t7246 - 1.*t3144*t7259) - 0.049*t7275 + t7246*t7579 + t7259*t7583;
  p_output1[46]=t7511*t7579 + t7583*t7596 - 0.09*(-1.*t3161*t7511 - 1.*t3144*t7596) - 0.049*(t3144*t7511 - 1.*t3161*t7596);
  p_output1[47]=t7462*t7579 + t7583*t7610 - 0.09*(-1.*t3161*t7462 - 1.*t3144*t7610) - 0.049*(t3144*t7462 - 1.*t3161*t7610);
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
