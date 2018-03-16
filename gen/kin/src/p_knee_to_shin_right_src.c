/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_right_src.h"

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
  double t99;
  double t4149;
  double t5668;
  double t4431;
  double t7053;
  double t101;
  double t150;
  double t196;
  double t1438;
  double t3585;
  double t4667;
  double t7067;
  double t7083;
  double t7106;
  double t7128;
  double t7133;
  double t7134;
  double t100;
  double t8152;
  double t8157;
  double t8158;
  double t8167;
  double t8170;
  double t8179;
  double t8184;
  double t8189;
  double t8192;
  double t8195;
  double t8220;
  double t8221;
  double t8222;
  double t8224;
  double t8225;
  double t8226;
  double t8233;
  double t8240;
  double t8241;
  double t8244;
  double t8251;
  double t8254;
  double t8260;
  double t8264;
  double t8267;
  double t8271;
  double t8278;
  double t8284;
  double t8286;
  double t8288;
  double t8293;
  double t8294;
  double t8295;
  double t576;
  double t3193;
  double t3395;
  double t3713;
  double t4147;
  double t7107;
  double t7119;
  double t7121;
  double t7127;
  double t8101;
  double t8108;
  double t8142;
  double t8313;
  double t8315;
  double t8316;
  double t8319;
  double t8320;
  double t8321;
  double t8182;
  double t8187;
  double t8188;
  double t8323;
  double t8325;
  double t8326;
  double t8214;
  double t8215;
  double t8219;
  double t8229;
  double t8238;
  double t8239;
  double t8329;
  double t8332;
  double t8334;
  double t8344;
  double t8345;
  double t8347;
  double t8246;
  double t8247;
  double t8248;
  double t8276;
  double t8281;
  double t8282;
  double t8351;
  double t8352;
  double t8355;
  double t8358;
  double t8359;
  double t8360;
  double t8290;
  double t8291;
  double t8292;
  double t8363;
  double t8364;
  double t8365;
  double t8369;
  double t8372;
  double t8374;
  double t8397;
  double t8399;
  double t8400;
  double t8404;
  double t8405;
  double t8406;
  double t8412;
  double t8414;
  double t8415;
  double t8417;
  double t8418;
  double t8419;
  double t8421;
  double t8422;
  double t8423;
  double t8425;
  double t8426;
  double t8427;
  double t8429;
  double t8430;
  double t8431;
  t99 = Cos(var1[3]);
  t4149 = Cos(var1[5]);
  t5668 = Sin(var1[3]);
  t4431 = Sin(var1[4]);
  t7053 = Sin(var1[5]);
  t101 = Cos(var1[14]);
  t150 = -1.*t101;
  t196 = 1. + t150;
  t1438 = Sin(var1[14]);
  t3585 = Sin(var1[13]);
  t4667 = t99*t4149*t4431;
  t7067 = t5668*t7053;
  t7083 = t4667 + t7067;
  t7106 = Cos(var1[13]);
  t7128 = -1.*t4149*t5668;
  t7133 = t99*t4431*t7053;
  t7134 = t7128 + t7133;
  t100 = Cos(var1[4]);
  t8152 = t3585*t7083;
  t8157 = t7106*t7134;
  t8158 = t8152 + t8157;
  t8167 = Cos(var1[15]);
  t8170 = -1.*t8167;
  t8179 = 1. + t8170;
  t8184 = Sin(var1[15]);
  t8189 = t7106*t7083;
  t8192 = -1.*t3585*t7134;
  t8195 = t8189 + t8192;
  t8220 = t101*t99*t100;
  t8221 = t1438*t8158;
  t8222 = t8220 + t8221;
  t8224 = Cos(var1[16]);
  t8225 = -1.*t8224;
  t8226 = 1. + t8225;
  t8233 = Sin(var1[16]);
  t8240 = t8184*t8195;
  t8241 = t8167*t8222;
  t8244 = t8240 + t8241;
  t8251 = t8167*t8195;
  t8254 = -1.*t8184*t8222;
  t8260 = t8251 + t8254;
  t8264 = Cos(var1[17]);
  t8267 = -1.*t8264;
  t8271 = 1. + t8267;
  t8278 = Sin(var1[17]);
  t8284 = -1.*t8233*t8244;
  t8286 = t8224*t8260;
  t8288 = t8284 + t8286;
  t8293 = t8224*t8244;
  t8294 = t8233*t8260;
  t8295 = t8293 + t8294;
  t576 = -0.049*t196;
  t3193 = -0.135*t1438;
  t3395 = 0. + t576 + t3193;
  t3713 = 0.135*t3585;
  t4147 = 0. + t3713;
  t7107 = -1.*t7106;
  t7119 = 1. + t7107;
  t7121 = -0.135*t7119;
  t7127 = 0. + t7121;
  t8101 = -0.135*t196;
  t8108 = 0.049*t1438;
  t8142 = 0. + t8101 + t8108;
  t8313 = t4149*t5668*t4431;
  t8315 = -1.*t99*t7053;
  t8316 = t8313 + t8315;
  t8319 = t99*t4149;
  t8320 = t5668*t4431*t7053;
  t8321 = t8319 + t8320;
  t8182 = -0.09*t8179;
  t8187 = 0.049*t8184;
  t8188 = 0. + t8182 + t8187;
  t8323 = t3585*t8316;
  t8325 = t7106*t8321;
  t8326 = t8323 + t8325;
  t8214 = -0.049*t8179;
  t8215 = -0.09*t8184;
  t8219 = 0. + t8214 + t8215;
  t8229 = -0.049*t8226;
  t8238 = -0.21*t8233;
  t8239 = 0. + t8229 + t8238;
  t8329 = t7106*t8316;
  t8332 = -1.*t3585*t8321;
  t8334 = t8329 + t8332;
  t8344 = t101*t100*t5668;
  t8345 = t1438*t8326;
  t8347 = t8344 + t8345;
  t8246 = -0.21*t8226;
  t8247 = 0.049*t8233;
  t8248 = 0. + t8246 + t8247;
  t8276 = -0.2707*t8271;
  t8281 = 0.0016*t8278;
  t8282 = 0. + t8276 + t8281;
  t8351 = t8184*t8334;
  t8352 = t8167*t8347;
  t8355 = t8351 + t8352;
  t8358 = t8167*t8334;
  t8359 = -1.*t8184*t8347;
  t8360 = t8358 + t8359;
  t8290 = -0.0016*t8271;
  t8291 = -0.2707*t8278;
  t8292 = 0. + t8290 + t8291;
  t8363 = -1.*t8233*t8355;
  t8364 = t8224*t8360;
  t8365 = t8363 + t8364;
  t8369 = t8224*t8355;
  t8372 = t8233*t8360;
  t8374 = t8369 + t8372;
  t8397 = t100*t4149*t3585;
  t8399 = t7106*t100*t7053;
  t8400 = t8397 + t8399;
  t8404 = t7106*t100*t4149;
  t8405 = -1.*t100*t3585*t7053;
  t8406 = t8404 + t8405;
  t8412 = -1.*t101*t4431;
  t8414 = t1438*t8400;
  t8415 = t8412 + t8414;
  t8417 = t8184*t8406;
  t8418 = t8167*t8415;
  t8419 = t8417 + t8418;
  t8421 = t8167*t8406;
  t8422 = -1.*t8184*t8415;
  t8423 = t8421 + t8422;
  t8425 = -1.*t8233*t8419;
  t8426 = t8224*t8423;
  t8427 = t8425 + t8426;
  t8429 = t8224*t8419;
  t8430 = t8233*t8423;
  t8431 = t8429 + t8430;
  p_output1[0]=0. + t4147*t7083 + t7127*t7134 + t8142*t8158 + t8188*t8195 + t8219*t8222 + t8239*t8244 + t8248*t8260 + t8282*t8288 + t8292*t8295 - 0.0016*(t8278*t8288 + t8264*t8295) - 0.2707*(t8264*t8288 - 1.*t8278*t8295) + t100*t3395*t99 - 0.1305*(t101*t8158 - 1.*t100*t1438*t99) + var1[0];
  p_output1[1]=0. + t100*t3395*t5668 + t4147*t8316 + t7127*t8321 + t8142*t8326 - 0.1305*(-1.*t100*t1438*t5668 + t101*t8326) + t8188*t8334 + t8219*t8347 + t8239*t8355 + t8248*t8360 + t8282*t8365 + t8292*t8374 - 0.0016*(t8278*t8365 + t8264*t8374) - 0.2707*(t8264*t8365 - 1.*t8278*t8374) + var1[1];
  p_output1[2]=0. + t100*t4147*t4149 - 1.*t3395*t4431 + t100*t7053*t7127 + t8142*t8400 - 0.1305*(t1438*t4431 + t101*t8400) + t8188*t8406 + t8219*t8415 + t8239*t8419 + t8248*t8423 + t8282*t8427 + t8292*t8431 - 0.0016*(t8278*t8427 + t8264*t8431) - 0.2707*(t8264*t8427 - 1.*t8278*t8431) + var1[2];
}



void p_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
