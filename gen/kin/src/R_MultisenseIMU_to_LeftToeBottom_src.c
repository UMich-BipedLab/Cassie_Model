/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:03 GMT-04:00
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
  double t29;
  double t79;
  double t1056;
  double t438;
  double t1922;
  double t1978;
  double t2527;
  double t1966;
  double t2301;
  double t2384;
  double t1920;
  double t2756;
  double t2781;
  double t2971;
  double t3277;
  double t2387;
  double t3146;
  double t3208;
  double t1919;
  double t3306;
  double t3318;
  double t3359;
  double t3544;
  double t3249;
  double t3367;
  double t3448;
  double t1791;
  double t3580;
  double t3658;
  double t3675;
  double t3848;
  double t3495;
  double t3797;
  double t3822;
  double t1569;
  double t4138;
  double t4241;
  double t4278;
  double t5055;
  double t5057;
  double t5072;
  double t5171;
  double t5281;
  double t5284;
  double t5077;
  double t5307;
  double t5313;
  double t5537;
  double t5543;
  double t5557;
  double t5404;
  double t5683;
  double t5744;
  double t5834;
  double t5868;
  double t5944;
  double t5745;
  double t6039;
  double t6052;
  double t6061;
  double t6077;
  double t6103;
  double t6200;
  double t6213;
  double t6235;
  double t6314;
  double t6317;
  double t6396;
  double t6273;
  double t6401;
  double t6476;
  double t6564;
  double t6574;
  double t6576;
  double t6558;
  double t6597;
  double t6680;
  double t6713;
  double t6723;
  double t6807;
  double t3838;
  double t4297;
  double t4325;
  double t4718;
  double t4814;
  double t4998;
  double t6059;
  double t6104;
  double t6141;
  double t6161;
  double t6167;
  double t6169;
  double t6681;
  double t6809;
  double t6844;
  double t6859;
  double t6875;
  double t6901;
  t29 = Cos(var1[1]);
  t79 = Sin(var1[0]);
  t1056 = Sin(var1[1]);
  t438 = Cos(var1[0]);
  t1922 = Cos(var1[2]);
  t1978 = Sin(var1[2]);
  t2527 = Cos(var1[3]);
  t1966 = t1922*t79*t1056;
  t2301 = t438*t1978;
  t2384 = t1966 + t2301;
  t1920 = Sin(var1[3]);
  t2756 = t438*t1922;
  t2781 = -1.*t79*t1056*t1978;
  t2971 = t2756 + t2781;
  t3277 = Cos(var1[4]);
  t2387 = -1.*t1920*t2384;
  t3146 = t2527*t2971;
  t3208 = t2387 + t3146;
  t1919 = Sin(var1[4]);
  t3306 = t2527*t2384;
  t3318 = t1920*t2971;
  t3359 = t3306 + t3318;
  t3544 = Cos(var1[5]);
  t3249 = t1919*t3208;
  t3367 = t3277*t3359;
  t3448 = t3249 + t3367;
  t1791 = Sin(var1[5]);
  t3580 = t3277*t3208;
  t3658 = -1.*t1919*t3359;
  t3675 = t3580 + t3658;
  t3848 = Cos(var1[6]);
  t3495 = -1.*t1791*t3448;
  t3797 = t3544*t3675;
  t3822 = t3495 + t3797;
  t1569 = Sin(var1[6]);
  t4138 = t3544*t3448;
  t4241 = t1791*t3675;
  t4278 = t4138 + t4241;
  t5055 = t438*t1922*t1056;
  t5057 = -1.*t79*t1978;
  t5072 = t5055 + t5057;
  t5171 = -1.*t1922*t79;
  t5281 = -1.*t438*t1056*t1978;
  t5284 = t5171 + t5281;
  t5077 = -1.*t1920*t5072;
  t5307 = t2527*t5284;
  t5313 = t5077 + t5307;
  t5537 = t2527*t5072;
  t5543 = t1920*t5284;
  t5557 = t5537 + t5543;
  t5404 = t1919*t5313;
  t5683 = t3277*t5557;
  t5744 = t5404 + t5683;
  t5834 = t3277*t5313;
  t5868 = -1.*t1919*t5557;
  t5944 = t5834 + t5868;
  t5745 = -1.*t1791*t5744;
  t6039 = t3544*t5944;
  t6052 = t5745 + t6039;
  t6061 = t3544*t5744;
  t6077 = t1791*t5944;
  t6103 = t6061 + t6077;
  t6200 = -1.*t29*t1922*t1920;
  t6213 = -1.*t2527*t29*t1978;
  t6235 = t6200 + t6213;
  t6314 = t2527*t29*t1922;
  t6317 = -1.*t29*t1920*t1978;
  t6396 = t6314 + t6317;
  t6273 = t1919*t6235;
  t6401 = t3277*t6396;
  t6476 = t6273 + t6401;
  t6564 = t3277*t6235;
  t6574 = -1.*t1919*t6396;
  t6576 = t6564 + t6574;
  t6558 = -1.*t1791*t6476;
  t6597 = t3544*t6576;
  t6680 = t6558 + t6597;
  t6713 = t3544*t6476;
  t6723 = t1791*t6576;
  t6807 = t6713 + t6723;
  t3838 = t1569*t3822;
  t4297 = t3848*t4278;
  t4325 = t3838 + t4297;
  t4718 = t3848*t3822;
  t4814 = -1.*t1569*t4278;
  t4998 = t4718 + t4814;
  t6059 = t1569*t6052;
  t6104 = t3848*t6103;
  t6141 = t6059 + t6104;
  t6161 = t3848*t6052;
  t6167 = -1.*t1569*t6103;
  t6169 = t6161 + t6167;
  t6681 = t1569*t6680;
  t6809 = t3848*t6807;
  t6844 = t6681 + t6809;
  t6859 = t3848*t6680;
  t6875 = -1.*t1569*t6807;
  t6901 = t6859 + t6875;
  p_output1[0]=0. + t29*t79;
  p_output1[1]=0. - 1.*t29*t438;
  p_output1[2]=0. + t1056;
  p_output1[3]=0. - 0.642788*t4325 - 0.766044*t4998;
  p_output1[4]=0. + 0.642788*t6141 + 0.766044*t6169;
  p_output1[5]=0. + 0.642788*t6844 + 0.766044*t6901;
  p_output1[6]=0. + 0.766044*t4325 - 0.642788*t4998;
  p_output1[7]=0. - 0.766044*t6141 + 0.642788*t6169;
  p_output1[8]=0. - 0.766044*t6844 + 0.642788*t6901;
}



void R_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
