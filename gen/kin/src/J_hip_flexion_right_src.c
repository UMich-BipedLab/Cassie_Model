/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:38 GMT-05:00
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
  double t6185;
  double t6216;
  double t6213;
  double t6214;
  double t6219;
  double t1356;
  double t1518;
  double t2402;
  double t3901;
  double t6199;
  double t6215;
  double t6220;
  double t6221;
  double t6224;
  double t6231;
  double t6232;
  double t6233;
  double t357;
  double t6239;
  double t6240;
  double t6241;
  double t2838;
  double t6166;
  double t6175;
  double t6203;
  double t6208;
  double t6226;
  double t6228;
  double t6229;
  double t6230;
  double t6236;
  double t6237;
  double t6238;
  double t6264;
  double t6265;
  double t6266;
  double t6268;
  double t6269;
  double t6270;
  double t6273;
  double t6274;
  double t6275;
  double t6294;
  double t6295;
  double t6296;
  double t6317;
  double t6318;
  double t6319;
  double t6339;
  double t6340;
  double t6341;
  double t6364;
  double t6368;
  double t6369;
  double t6277;
  double t6375;
  double t6376;
  double t6382;
  double t6383;
  double t6384;
  double t6391;
  double t6392;
  double t6393;
  double t6405;
  double t6406;
  double t6407;
  double t6371;
  double t6278;
  double t6279;
  double t6388;
  double t6423;
  double t6425;
  double t6426;
  double t6431;
  double t6432;
  double t6401;
  double t6402;
  double t6403;
  double t6404;
  double t6408;
  double t6409;
  double t6410;
  double t6281;
  double t6282;
  double t6283;
  double t6440;
  double t6441;
  double t6442;
  double t6444;
  double t6445;
  double t6454;
  double t6455;
  double t6456;
  double t6258;
  double t6467;
  double t6468;
  double t6469;
  t6185 = Sin(var1[3]);
  t6216 = Cos(var1[3]);
  t6213 = Cos(var1[5]);
  t6214 = Sin(var1[4]);
  t6219 = Sin(var1[5]);
  t1356 = Cos(var1[14]);
  t1518 = -1.*t1356;
  t2402 = 1. + t1518;
  t3901 = Sin(var1[14]);
  t6199 = Sin(var1[13]);
  t6215 = -1.*t6213*t6185*t6214;
  t6220 = t6216*t6219;
  t6221 = t6215 + t6220;
  t6224 = Cos(var1[13]);
  t6231 = -1.*t6216*t6213;
  t6232 = -1.*t6185*t6214*t6219;
  t6233 = t6231 + t6232;
  t357 = Cos(var1[4]);
  t6239 = t6199*t6221;
  t6240 = t6224*t6233;
  t6241 = t6239 + t6240;
  t2838 = -0.049*t2402;
  t6166 = -0.135*t3901;
  t6175 = 0. + t2838 + t6166;
  t6203 = 0.135*t6199;
  t6208 = 0. + t6203;
  t6226 = -1.*t6224;
  t6228 = 1. + t6226;
  t6229 = -0.135*t6228;
  t6230 = 0. + t6229;
  t6236 = -0.135*t2402;
  t6237 = 0.049*t3901;
  t6238 = 0. + t6236 + t6237;
  t6264 = t6216*t6213*t6214;
  t6265 = t6185*t6219;
  t6266 = t6264 + t6265;
  t6268 = -1.*t6213*t6185;
  t6269 = t6216*t6214*t6219;
  t6270 = t6268 + t6269;
  t6273 = t6199*t6266;
  t6274 = t6224*t6270;
  t6275 = t6273 + t6274;
  t6294 = t6216*t357*t6213*t6199;
  t6295 = t6224*t6216*t357*t6219;
  t6296 = t6294 + t6295;
  t6317 = t357*t6213*t6199*t6185;
  t6318 = t6224*t357*t6185*t6219;
  t6319 = t6317 + t6318;
  t6339 = -1.*t6213*t6199*t6214;
  t6340 = -1.*t6224*t6214*t6219;
  t6341 = t6339 + t6340;
  t6364 = t6213*t6185;
  t6368 = -1.*t6216*t6214*t6219;
  t6369 = t6364 + t6368;
  t6277 = t6224*t6266;
  t6375 = t6199*t6369;
  t6376 = t6277 + t6375;
  t6382 = t6213*t6185*t6214;
  t6383 = -1.*t6216*t6219;
  t6384 = t6382 + t6383;
  t6391 = t6224*t6384;
  t6392 = t6199*t6233;
  t6393 = t6391 + t6392;
  t6405 = t6224*t357*t6213;
  t6406 = -1.*t357*t6199*t6219;
  t6407 = t6405 + t6406;
  t6371 = -1.*t6199*t6266;
  t6278 = -1.*t6199*t6270;
  t6279 = t6277 + t6278;
  t6388 = -1.*t6199*t6384;
  t6423 = t6216*t6213;
  t6425 = t6185*t6214*t6219;
  t6426 = t6423 + t6425;
  t6431 = -1.*t6199*t6426;
  t6432 = t6391 + t6431;
  t6401 = -1.*t357*t6213*t6199;
  t6402 = -1.*t6224*t357*t6219;
  t6403 = t6401 + t6402;
  t6404 = -0.09*t6403;
  t6408 = -0.135*t1356*t6407;
  t6409 = t6238*t6407;
  t6410 = -0.049*t3901*t6407;
  t6281 = -1.*t6216*t357*t3901;
  t6282 = t1356*t6275;
  t6283 = t6281 + t6282;
  t6440 = -0.135*t1356;
  t6441 = -0.049*t3901;
  t6442 = t6440 + t6441;
  t6444 = 0.049*t1356;
  t6445 = t6444 + t6166;
  t6454 = t6199*t6384;
  t6455 = t6224*t6426;
  t6456 = t6454 + t6455;
  t6258 = -1.*t1356*t357*t6185;
  t6467 = t357*t6213*t6199;
  t6468 = t6224*t357*t6219;
  t6469 = t6467 + t6468;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t357*t6175*t6185 + t6208*t6221 + t6230*t6233 - 0.09*(t6221*t6224 - 1.*t6199*t6233) + t6238*t6241 - 0.135*(t357*t3901*t6185 + t1356*t6241) - 0.049*(t3901*t6241 + t6258);
  p_output1[10]=t357*t6175*t6216 + t6208*t6266 + t6230*t6270 + t6238*t6275 - 0.049*(t1356*t357*t6216 + t3901*t6275) - 0.09*t6279 - 0.135*t6283;
  p_output1[11]=0;
  p_output1[12]=t357*t6208*t6213*t6216 - 1.*t6175*t6214*t6216 - 0.09*(-1.*t357*t6199*t6216*t6219 + t357*t6213*t6216*t6224) + t357*t6216*t6219*t6230 + t6238*t6296 - 0.135*(t3901*t6214*t6216 + t1356*t6296) - 0.049*(-1.*t1356*t6214*t6216 + t3901*t6296);
  p_output1[13]=t357*t6185*t6208*t6213 - 1.*t6175*t6185*t6214 - 0.09*(-1.*t357*t6185*t6199*t6219 + t357*t6185*t6213*t6224) + t357*t6185*t6219*t6230 + t6238*t6319 - 0.135*(t3901*t6185*t6214 + t1356*t6319) - 0.049*(-1.*t1356*t6185*t6214 + t3901*t6319);
  p_output1[14]=-1.*t357*t6175 - 1.*t6208*t6213*t6214 - 0.09*(t6199*t6214*t6219 - 1.*t6213*t6214*t6224) - 1.*t6214*t6219*t6230 + t6238*t6341 - 0.135*(t357*t3901 + t1356*t6341) - 0.049*(-1.*t1356*t357 + t3901*t6341);
  p_output1[15]=t6230*t6266 + t6208*t6369 - 0.09*(t6224*t6369 + t6371) - 0.135*t1356*t6376 - 0.049*t3901*t6376 + t6238*t6376;
  p_output1[16]=t6208*t6233 + t6230*t6384 - 0.09*(t6240 + t6388) - 0.135*t1356*t6393 - 0.049*t3901*t6393 + t6238*t6393;
  p_output1[17]=-1.*t357*t6208*t6219 + t357*t6213*t6230 + t6404 + t6408 + t6409 + t6410;
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
  p_output1[39]=0.135*t6224*t6266 - 0.135*t6199*t6270 - 0.135*t1356*t6279 - 0.049*t3901*t6279 + t6238*t6279 - 0.09*(-1.*t6224*t6270 + t6371);
  p_output1[40]=0.135*t6224*t6384 - 0.135*t6199*t6426 - 0.09*(t6388 - 1.*t6224*t6426) - 0.135*t1356*t6432 - 0.049*t3901*t6432 + t6238*t6432;
  p_output1[41]=-0.135*t357*t6199*t6219 + 0.135*t357*t6213*t6224 + t6404 + t6408 + t6409 + t6410;
  p_output1[42]=-0.135*(-1.*t1356*t357*t6216 - 1.*t3901*t6275) - 0.049*t6283 + t357*t6216*t6442 + t6275*t6445;
  p_output1[43]=t357*t6185*t6442 + t6445*t6456 - 0.049*(-1.*t357*t3901*t6185 + t1356*t6456) - 0.135*(t6258 - 1.*t3901*t6456);
  p_output1[44]=-1.*t6214*t6442 + t6445*t6469 - 0.049*(t3901*t6214 + t1356*t6469) - 0.135*(t1356*t6214 - 1.*t3901*t6469);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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
