/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:52 GMT-05:00
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
  double t4510;
  double t7267;
  double t3267;
  double t7254;
  double t7333;
  double t7398;
  double t7265;
  double t7345;
  double t7348;
  double t2995;
  double t7401;
  double t7405;
  double t7407;
  double t7413;
  double t7383;
  double t7408;
  double t7409;
  double t2991;
  double t7414;
  double t7418;
  double t7419;
  double t7422;
  double t7426;
  double t7428;
  double t7429;
  double t7430;
  double t7431;
  double t87;
  double t7479;
  double t7481;
  double t7482;
  double t7484;
  double t7485;
  double t7486;
  double t7461;
  double t7483;
  double t7487;
  double t7490;
  double t7499;
  double t7502;
  double t7503;
  double t7506;
  double t7507;
  double t7509;
  double t7527;
  double t7528;
  double t7531;
  double t7533;
  double t7534;
  double t7535;
  double t7536;
  double t7537;
  double t7538;
  double t7410;
  double t7444;
  double t7456;
  double t7464;
  double t7468;
  double t7470;
  double t7498;
  double t7510;
  double t7511;
  double t7514;
  double t7517;
  double t7520;
  double t7532;
  double t7541;
  double t7543;
  double t7554;
  double t7557;
  double t7559;
  t4510 = Cos(var1[5]);
  t7267 = Sin(var1[3]);
  t3267 = Cos(var1[3]);
  t7254 = Sin(var1[4]);
  t7333 = Sin(var1[5]);
  t7398 = Sin(var1[13]);
  t7265 = t3267*t4510*t7254;
  t7345 = t7267*t7333;
  t7348 = t7265 + t7345;
  t2995 = Cos(var1[13]);
  t7401 = -1.*t4510*t7267;
  t7405 = t3267*t7254*t7333;
  t7407 = t7401 + t7405;
  t7413 = Cos(var1[15]);
  t7383 = t2995*t7348;
  t7408 = -1.*t7398*t7407;
  t7409 = t7383 + t7408;
  t2991 = Sin(var1[15]);
  t7414 = Cos(var1[14]);
  t7418 = Cos(var1[4]);
  t7419 = t7414*t3267*t7418;
  t7422 = Sin(var1[14]);
  t7426 = t7398*t7348;
  t7428 = t2995*t7407;
  t7429 = t7426 + t7428;
  t7430 = t7422*t7429;
  t7431 = t7419 + t7430;
  t87 = Sin(var1[16]);
  t7479 = t4510*t7267*t7254;
  t7481 = -1.*t3267*t7333;
  t7482 = t7479 + t7481;
  t7484 = t3267*t4510;
  t7485 = t7267*t7254*t7333;
  t7486 = t7484 + t7485;
  t7461 = Cos(var1[16]);
  t7483 = t2995*t7482;
  t7487 = -1.*t7398*t7486;
  t7490 = t7483 + t7487;
  t7499 = t7414*t7418*t7267;
  t7502 = t7398*t7482;
  t7503 = t2995*t7486;
  t7506 = t7502 + t7503;
  t7507 = t7422*t7506;
  t7509 = t7499 + t7507;
  t7527 = t2995*t7418*t4510;
  t7528 = -1.*t7418*t7398*t7333;
  t7531 = t7527 + t7528;
  t7533 = -1.*t7414*t7254;
  t7534 = t7418*t4510*t7398;
  t7535 = t2995*t7418*t7333;
  t7536 = t7534 + t7535;
  t7537 = t7422*t7536;
  t7538 = t7533 + t7537;
  t7410 = t2991*t7409;
  t7444 = t7413*t7431;
  t7456 = t7410 + t7444;
  t7464 = t7413*t7409;
  t7468 = -1.*t2991*t7431;
  t7470 = t7464 + t7468;
  t7498 = t2991*t7490;
  t7510 = t7413*t7509;
  t7511 = t7498 + t7510;
  t7514 = t7413*t7490;
  t7517 = -1.*t2991*t7509;
  t7520 = t7514 + t7517;
  t7532 = t2991*t7531;
  t7541 = t7413*t7538;
  t7543 = t7532 + t7541;
  t7554 = t7413*t7531;
  t7557 = -1.*t2991*t7538;
  t7559 = t7554 + t7557;
  p_output1[0]=-1.*t7461*t7470 + t7456*t87;
  p_output1[1]=-1.*t7461*t7520 + t7511*t87;
  p_output1[2]=-1.*t7461*t7559 + t7543*t87;
  p_output1[3]=t7456*t7461 + t7470*t87;
  p_output1[4]=t7461*t7511 + t7520*t87;
  p_output1[5]=t7461*t7543 + t7559*t87;
  p_output1[6]=t3267*t7418*t7422 - 1.*t7414*t7429;
  p_output1[7]=t7267*t7418*t7422 - 1.*t7414*t7506;
  p_output1[8]=-1.*t7254*t7422 - 1.*t7414*t7536;
}



void R_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
