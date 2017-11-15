/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_right_src.h"

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
  double t2664;
  double t7387;
  double t904;
  double t4547;
  double t7393;
  double t7472;
  double t7341;
  double t7437;
  double t7458;
  double t828;
  double t7494;
  double t7498;
  double t7500;
  double t549;
  double t7506;
  double t7508;
  double t7509;
  double t7511;
  double t7541;
  double t7542;
  double t7543;
  double t7545;
  double t7546;
  double t7547;
  double t7467;
  double t7501;
  double t7502;
  double t7510;
  double t7514;
  double t7528;
  double t7532;
  double t7533;
  double t7537;
  double t7544;
  double t7548;
  double t7549;
  double t7553;
  double t7555;
  double t7562;
  double t7563;
  double t7564;
  double t7566;
  double t7570;
  double t7571;
  double t7572;
  double t7574;
  double t7575;
  double t7576;
  double t7577;
  double t7578;
  double t7582;
  t2664 = Cos(var1[5]);
  t7387 = Sin(var1[3]);
  t904 = Cos(var1[3]);
  t4547 = Sin(var1[4]);
  t7393 = Sin(var1[5]);
  t7472 = Sin(var1[13]);
  t7341 = t904*t2664*t4547;
  t7437 = t7387*t7393;
  t7458 = t7341 + t7437;
  t828 = Cos(var1[13]);
  t7494 = -1.*t2664*t7387;
  t7498 = t904*t4547*t7393;
  t7500 = t7494 + t7498;
  t549 = Cos(var1[15]);
  t7506 = Sin(var1[15]);
  t7508 = Cos(var1[14]);
  t7509 = Cos(var1[4]);
  t7511 = Sin(var1[14]);
  t7541 = t2664*t7387*t4547;
  t7542 = -1.*t904*t7393;
  t7543 = t7541 + t7542;
  t7545 = t904*t2664;
  t7546 = t7387*t4547*t7393;
  t7547 = t7545 + t7546;
  t7467 = t828*t7458;
  t7501 = -1.*t7472*t7500;
  t7502 = t7467 + t7501;
  t7510 = t7508*t904*t7509;
  t7514 = t7472*t7458;
  t7528 = t828*t7500;
  t7532 = t7514 + t7528;
  t7533 = t7511*t7532;
  t7537 = t7510 + t7533;
  t7544 = t828*t7543;
  t7548 = -1.*t7472*t7547;
  t7549 = t7544 + t7548;
  t7553 = t7508*t7509*t7387;
  t7555 = t7472*t7543;
  t7562 = t828*t7547;
  t7563 = t7555 + t7562;
  t7564 = t7511*t7563;
  t7566 = t7553 + t7564;
  t7570 = t828*t7509*t2664;
  t7571 = -1.*t7509*t7472*t7393;
  t7572 = t7570 + t7571;
  t7574 = -1.*t7508*t4547;
  t7575 = t7509*t2664*t7472;
  t7576 = t828*t7509*t7393;
  t7577 = t7575 + t7576;
  t7578 = t7511*t7577;
  t7582 = t7574 + t7578;
  p_output1[0]=-1.*t549*t7502 + t7506*t7537;
  p_output1[1]=-1.*t549*t7549 + t7506*t7566;
  p_output1[2]=-1.*t549*t7572 + t7506*t7582;
  p_output1[3]=t7502*t7506 + t549*t7537;
  p_output1[4]=t7506*t7549 + t549*t7566;
  p_output1[5]=t7506*t7572 + t549*t7582;
  p_output1[6]=-1.*t7508*t7532 + t7509*t7511*t904;
  p_output1[7]=t7387*t7509*t7511 - 1.*t7508*t7563;
  p_output1[8]=-1.*t4547*t7511 - 1.*t7508*t7577;
}



void R_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
