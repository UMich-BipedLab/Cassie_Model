/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseLeftCameraFrame_src.h"

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
  double t2351;
  double t3761;
  double t2334;
  double t3982;
  double t4570;
  double t4591;
  double t4657;
  double t4663;
  double t4688;
  double t4573;
  double t4601;
  double t4616;
  double t4708;
  double t4709;
  double t4715;
  double t4624;
  double t4633;
  double t4648;
  t2351 = Cos(var1[4]);
  t3761 = Sin(var1[3]);
  t2334 = Cos(var1[3]);
  t3982 = Sin(var1[4]);
  t4570 = Cos(var1[5]);
  t4591 = Sin(var1[5]);
  t4657 = t2334*t4570*t3982;
  t4663 = t3761*t4591;
  t4688 = t4657 + t4663;
  t4573 = -1.*t4570*t3761;
  t4601 = t2334*t3982*t4591;
  t4616 = t4573 + t4601;
  t4708 = t4570*t3761*t3982;
  t4709 = -1.*t2334*t4591;
  t4715 = t4708 + t4709;
  t4624 = t2334*t4570;
  t4633 = t3761*t3982*t4591;
  t4648 = t4624 + t4633;
  p_output1[0]=t2334*t2351;
  p_output1[1]=t2351*t3761;
  p_output1[2]=-1.*t3982;
  p_output1[3]=0;
  p_output1[4]=t4616;
  p_output1[5]=t4648;
  p_output1[6]=t2351*t4591;
  p_output1[7]=0;
  p_output1[8]=t4688;
  p_output1[9]=t4715;
  p_output1[10]=t2351*t4570;
  p_output1[11]=0;
  p_output1[12]=0.052*t2334*t2351 + 0.035*t4616 + 0.25*t4688 + var1[0];
  p_output1[13]=0.052*t2351*t3761 + 0.035*t4648 + 0.25*t4715 + var1[1];
  p_output1[14]=-0.052*t3982 + 0.25*t2351*t4570 + 0.035*t2351*t4591 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseLeftCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
