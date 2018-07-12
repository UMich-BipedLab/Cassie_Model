/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_left_src.h"

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
  double t1506;
  double t2075;
  double t998;
  double t2411;
  double t2478;
  double t2493;
  double t2459;
  double t2574;
  double t2551;
  double t2556;
  double t2569;
  double t2492;
  double t2494;
  double t2496;
  double t2633;
  double t2636;
  double t2638;
  double t2614;
  double t2621;
  double t2622;
  t1506 = Cos(var1[4]);
  t2075 = Sin(var1[3]);
  t998 = Cos(var1[3]);
  t2411 = Sin(var1[4]);
  t2478 = Cos(var1[5]);
  t2493 = Sin(var1[5]);
  t2459 = Cos(var1[6]);
  t2574 = Sin(var1[6]);
  t2551 = t998*t2478*t2411;
  t2556 = t2075*t2493;
  t2569 = t2551 + t2556;
  t2492 = -1.*t2478*t2075;
  t2494 = t998*t2411*t2493;
  t2496 = t2492 + t2494;
  t2633 = t2478*t2075*t2411;
  t2636 = -1.*t998*t2493;
  t2638 = t2633 + t2636;
  t2614 = t998*t2478;
  t2621 = t2075*t2411*t2493;
  t2622 = t2614 + t2621;
  p_output1[0]=t1506*t998;
  p_output1[1]=t1506*t2075;
  p_output1[2]=-1.*t2411;
  p_output1[3]=t2459*t2496 + t2569*t2574;
  p_output1[4]=t2459*t2622 + t2574*t2638;
  p_output1[5]=t1506*t2459*t2493 + t1506*t2478*t2574;
  p_output1[6]=t2459*t2569 - 1.*t2496*t2574;
  p_output1[7]=-1.*t2574*t2622 + t2459*t2638;
  p_output1[8]=t1506*t2459*t2478 - 1.*t1506*t2493*t2574;
}



void R_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
