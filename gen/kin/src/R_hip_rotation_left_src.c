/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_left_src.h"

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
  double t826;
  double t860;
  double t820;
  double t833;
  double t866;
  double t791;
  double t899;
  double t933;
  double t885;
  double t892;
  double t895;
  double t857;
  double t867;
  double t875;
  double t921;
  double t924;
  double t928;
  double t904;
  double t905;
  double t907;
  t826 = Cos(var1[5]);
  t860 = Sin(var1[3]);
  t820 = Cos(var1[3]);
  t833 = Sin(var1[4]);
  t866 = Sin(var1[5]);
  t791 = Cos(var1[6]);
  t899 = Sin(var1[6]);
  t933 = Cos(var1[4]);
  t885 = -1.*t826*t860;
  t892 = t820*t833*t866;
  t895 = t885 + t892;
  t857 = t820*t826*t833;
  t867 = t860*t866;
  t875 = t857 + t867;
  t921 = t820*t826;
  t924 = t860*t833*t866;
  t928 = t921 + t924;
  t904 = t826*t860*t833;
  t905 = -1.*t820*t866;
  t907 = t904 + t905;
  p_output1[0]=-1.*t791*t875 + t895*t899;
  p_output1[1]=-1.*t791*t907 + t899*t928;
  p_output1[2]=-1.*t791*t826*t933 + t866*t899*t933;
  p_output1[3]=t820*t933;
  p_output1[4]=t860*t933;
  p_output1[5]=-1.*t833;
  p_output1[6]=-1.*t791*t895 - 1.*t875*t899;
  p_output1[7]=-1.*t899*t907 - 1.*t791*t928;
  p_output1[8]=-1.*t791*t866*t933 - 1.*t826*t899*t933;
}



void R_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
