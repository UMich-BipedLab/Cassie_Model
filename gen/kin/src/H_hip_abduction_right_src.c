/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_right_src.h"

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
  double t5804;
  double t5813;
  double t5795;
  double t5821;
  double t5824;
  double t5826;
  double t5825;
  double t5827;
  double t5828;
  double t5829;
  double t5830;
  double t5831;
  t5804 = Cos(var1[4]);
  t5813 = Sin(var1[3]);
  t5795 = Cos(var1[3]);
  t5821 = Sin(var1[4]);
  t5824 = Cos(var1[5]);
  t5826 = Sin(var1[5]);
  t5825 = -1.*t5824*t5813;
  t5827 = t5795*t5821*t5826;
  t5828 = t5825 + t5827;
  t5829 = t5795*t5824;
  t5830 = t5813*t5821*t5826;
  t5831 = t5829 + t5830;
  p_output1[0]=t5795*t5804;
  p_output1[1]=t5804*t5813;
  p_output1[2]=-1.*t5821;
  p_output1[3]=0;
  p_output1[4]=t5828;
  p_output1[5]=t5831;
  p_output1[6]=t5804*t5826;
  p_output1[7]=0;
  p_output1[8]=t5795*t5821*t5824 + t5813*t5826;
  p_output1[9]=t5813*t5821*t5824 - 1.*t5795*t5826;
  p_output1[10]=t5804*t5824;
  p_output1[11]=0;
  p_output1[12]=-0.049*t5795*t5804 - 0.135*t5828 + var1[0];
  p_output1[13]=-0.049*t5804*t5813 - 0.135*t5831 + var1[1];
  p_output1[14]=0.049*t5821 - 0.135*t5804*t5826 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
