/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:59 GMT-04:00
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
  double t1716;
  double t2501;
  double t1069;
  double t1870;
  double t2784;
  double t751;
  double t3459;
  double t3768;
  double t3233;
  double t3262;
  double t3364;
  double t2391;
  double t3049;
  double t3109;
  double t3817;
  double t3698;
  double t3714;
  double t3717;
  double t3553;
  double t3556;
  double t3648;
  double t3868;
  double t3831;
  double t3857;
  double t3863;
  double t3892;
  double t3907;
  double t3908;
  double t3961;
  double t3968;
  double t3971;
  t1716 = Cos(var1[5]);
  t2501 = Sin(var1[3]);
  t1069 = Cos(var1[3]);
  t1870 = Sin(var1[4]);
  t2784 = Sin(var1[5]);
  t751 = Cos(var1[6]);
  t3459 = Sin(var1[6]);
  t3768 = Cos(var1[4]);
  t3233 = -1.*t1716*t2501;
  t3262 = t1069*t1870*t2784;
  t3364 = t3233 + t3262;
  t2391 = t1069*t1716*t1870;
  t3049 = t2501*t2784;
  t3109 = t2391 + t3049;
  t3817 = Cos(var1[7]);
  t3698 = t1069*t1716;
  t3714 = t2501*t1870*t2784;
  t3717 = t3698 + t3714;
  t3553 = t1716*t2501*t1870;
  t3556 = -1.*t1069*t2784;
  t3648 = t3553 + t3556;
  t3868 = Sin(var1[7]);
  t3831 = t751*t3364;
  t3857 = t3109*t3459;
  t3863 = t3831 + t3857;
  t3892 = t751*t3717;
  t3907 = t3648*t3459;
  t3908 = t3892 + t3907;
  t3961 = t3768*t751*t2784;
  t3968 = t3768*t1716*t3459;
  t3971 = t3961 + t3968;
  p_output1[0]=t3364*t3459 - 1.*t3109*t751;
  p_output1[1]=t3459*t3717 - 1.*t3648*t751;
  p_output1[2]=t2784*t3459*t3768 - 1.*t1716*t3768*t751;
  p_output1[3]=t1069*t3768*t3817 + t3863*t3868;
  p_output1[4]=t2501*t3768*t3817 + t3868*t3908;
  p_output1[5]=-1.*t1870*t3817 + t3868*t3971;
  p_output1[6]=-1.*t3817*t3863 + t1069*t3768*t3868;
  p_output1[7]=t2501*t3768*t3868 - 1.*t3817*t3908;
  p_output1[8]=-1.*t1870*t3868 - 1.*t3817*t3971;
}



void R_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
