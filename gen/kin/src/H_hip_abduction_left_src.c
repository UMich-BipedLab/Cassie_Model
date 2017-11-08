/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_left_src.h"

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
  double t295;
  double t312;
  double t280;
  double t320;
  double t323;
  double t326;
  double t325;
  double t328;
  double t330;
  double t332;
  double t334;
  double t335;
  t295 = Cos(var1[4]);
  t312 = Sin(var1[3]);
  t280 = Cos(var1[3]);
  t320 = Sin(var1[4]);
  t323 = Cos(var1[5]);
  t326 = Sin(var1[5]);
  t325 = -1.*t323*t312;
  t328 = t280*t320*t326;
  t330 = t325 + t328;
  t332 = t280*t323;
  t334 = t312*t320*t326;
  t335 = t332 + t334;
  p_output1[0]=t280*t295;
  p_output1[1]=t295*t312;
  p_output1[2]=-1.*t320;
  p_output1[3]=0;
  p_output1[4]=t330;
  p_output1[5]=t335;
  p_output1[6]=t295*t326;
  p_output1[7]=0;
  p_output1[8]=t280*t320*t323 + t312*t326;
  p_output1[9]=t312*t320*t323 - 1.*t280*t326;
  p_output1[10]=t295*t323;
  p_output1[11]=0;
  p_output1[12]=-0.049*t280*t295 + 0.135*t330 + var1[0];
  p_output1[13]=-0.049*t295*t312 + 0.135*t335 + var1[1];
  p_output1[14]=0.049*t320 + 0.135*t295*t326 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
