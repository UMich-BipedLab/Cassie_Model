/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_right_src.h"

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
  double t1027;
  double t2593;
  double t1023;
  double t1031;
  double t2595;
  double t3750;
  double t2088;
  double t3148;
  double t3460;
  double t1019;
  double t3774;
  double t3797;
  double t4929;
  double t6271;
  double t3706;
  double t4972;
  double t5120;
  double t1018;
  double t8245;
  double t8350;
  double t8358;
  double t8369;
  double t8372;
  double t8389;
  double t8391;
  double t8394;
  double t8397;
  double t8417;
  double t5324;
  double t8399;
  double t8404;
  double t1017;
  double t8421;
  double t8428;
  double t8433;
  double t730;
  double t8475;
  double t8476;
  double t8477;
  double t8479;
  double t8480;
  double t8481;
  double t8478;
  double t8485;
  double t8486;
  double t8488;
  double t8489;
  double t8491;
  double t8493;
  double t8494;
  double t8498;
  double t8444;
  double t8487;
  double t8500;
  double t8501;
  double t8505;
  double t8507;
  double t8511;
  double t8531;
  double t8532;
  double t8533;
  double t8538;
  double t8539;
  double t8541;
  double t8542;
  double t8547;
  double t8549;
  double t8537;
  double t8551;
  double t8553;
  double t8555;
  double t8556;
  double t8557;
  double t8406;
  double t8435;
  double t8437;
  double t8447;
  double t8454;
  double t8460;
  double t8503;
  double t8514;
  double t8515;
  double t8520;
  double t8522;
  double t8524;
  double t8554;
  double t8562;
  double t8563;
  double t8569;
  double t8572;
  double t8573;
  t1027 = Cos(var1[5]);
  t2593 = Sin(var1[3]);
  t1023 = Cos(var1[3]);
  t1031 = Sin(var1[4]);
  t2595 = Sin(var1[5]);
  t3750 = Sin(var1[13]);
  t2088 = t1023*t1027*t1031;
  t3148 = t2593*t2595;
  t3460 = t2088 + t3148;
  t1019 = Cos(var1[13]);
  t3774 = -1.*t1027*t2593;
  t3797 = t1023*t1031*t2595;
  t4929 = t3774 + t3797;
  t6271 = Cos(var1[15]);
  t3706 = t1019*t3460;
  t4972 = -1.*t3750*t4929;
  t5120 = t3706 + t4972;
  t1018 = Sin(var1[15]);
  t8245 = Cos(var1[14]);
  t8350 = Cos(var1[4]);
  t8358 = t8245*t1023*t8350;
  t8369 = Sin(var1[14]);
  t8372 = t3750*t3460;
  t8389 = t1019*t4929;
  t8391 = t8372 + t8389;
  t8394 = t8369*t8391;
  t8397 = t8358 + t8394;
  t8417 = Cos(var1[16]);
  t5324 = t1018*t5120;
  t8399 = t6271*t8397;
  t8404 = t5324 + t8399;
  t1017 = Sin(var1[16]);
  t8421 = t6271*t5120;
  t8428 = -1.*t1018*t8397;
  t8433 = t8421 + t8428;
  t730 = Cos(var1[17]);
  t8475 = t1027*t2593*t1031;
  t8476 = -1.*t1023*t2595;
  t8477 = t8475 + t8476;
  t8479 = t1023*t1027;
  t8480 = t2593*t1031*t2595;
  t8481 = t8479 + t8480;
  t8478 = t1019*t8477;
  t8485 = -1.*t3750*t8481;
  t8486 = t8478 + t8485;
  t8488 = t8245*t8350*t2593;
  t8489 = t3750*t8477;
  t8491 = t1019*t8481;
  t8493 = t8489 + t8491;
  t8494 = t8369*t8493;
  t8498 = t8488 + t8494;
  t8444 = Sin(var1[17]);
  t8487 = t1018*t8486;
  t8500 = t6271*t8498;
  t8501 = t8487 + t8500;
  t8505 = t6271*t8486;
  t8507 = -1.*t1018*t8498;
  t8511 = t8505 + t8507;
  t8531 = t1019*t8350*t1027;
  t8532 = -1.*t8350*t3750*t2595;
  t8533 = t8531 + t8532;
  t8538 = -1.*t8245*t1031;
  t8539 = t8350*t1027*t3750;
  t8541 = t1019*t8350*t2595;
  t8542 = t8539 + t8541;
  t8547 = t8369*t8542;
  t8549 = t8538 + t8547;
  t8537 = t1018*t8533;
  t8551 = t6271*t8549;
  t8553 = t8537 + t8551;
  t8555 = t6271*t8533;
  t8556 = -1.*t1018*t8549;
  t8557 = t8555 + t8556;
  t8406 = -1.*t1017*t8404;
  t8435 = t8417*t8433;
  t8437 = t8406 + t8435;
  t8447 = t8417*t8404;
  t8454 = t1017*t8433;
  t8460 = t8447 + t8454;
  t8503 = -1.*t1017*t8501;
  t8514 = t8417*t8511;
  t8515 = t8503 + t8514;
  t8520 = t8417*t8501;
  t8522 = t1017*t8511;
  t8524 = t8520 + t8522;
  t8554 = -1.*t1017*t8553;
  t8562 = t8417*t8557;
  t8563 = t8554 + t8562;
  t8569 = t8417*t8553;
  t8572 = t1017*t8557;
  t8573 = t8569 + t8572;
  p_output1[0]=-1.*t730*t8437 + t8444*t8460;
  p_output1[1]=-1.*t730*t8515 + t8444*t8524;
  p_output1[2]=-1.*t730*t8563 + t8444*t8573;
  p_output1[3]=t8437*t8444 + t730*t8460;
  p_output1[4]=t8444*t8515 + t730*t8524;
  p_output1[5]=t8444*t8563 + t730*t8573;
  p_output1[6]=t1023*t8350*t8369 - 1.*t8245*t8391;
  p_output1[7]=t2593*t8350*t8369 - 1.*t8245*t8493;
  p_output1[8]=-1.*t1031*t8369 - 1.*t8245*t8542;
}



void R_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
