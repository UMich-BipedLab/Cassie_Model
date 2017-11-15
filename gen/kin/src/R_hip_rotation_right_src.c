/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_right_src.h"

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
  double t6956;
  double t6981;
  double t6938;
  double t6957;
  double t6982;
  double t1409;
  double t7000;
  double t7053;
  double t6975;
  double t6988;
  double t6992;
  double t7011;
  double t7012;
  double t7013;
  double t7058;
  double t7062;
  double t7025;
  double t7040;
  double t7041;
  double t7043;
  double t7045;
  double t7046;
  double t7063;
  double t7064;
  double t7067;
  double t7077;
  double t7078;
  double t7081;
  double t7086;
  double t7088;
  double t7089;
  t6956 = Cos(var1[5]);
  t6981 = Sin(var1[3]);
  t6938 = Cos(var1[3]);
  t6957 = Sin(var1[4]);
  t6982 = Sin(var1[5]);
  t1409 = Cos(var1[13]);
  t7000 = Sin(var1[13]);
  t7053 = Cos(var1[4]);
  t6975 = t6938*t6956*t6957;
  t6988 = t6981*t6982;
  t6992 = t6975 + t6988;
  t7011 = -1.*t6956*t6981;
  t7012 = t6938*t6957*t6982;
  t7013 = t7011 + t7012;
  t7058 = Cos(var1[14]);
  t7062 = Sin(var1[14]);
  t7025 = t6956*t6981*t6957;
  t7040 = -1.*t6938*t6982;
  t7041 = t7025 + t7040;
  t7043 = t6938*t6956;
  t7045 = t6981*t6957*t6982;
  t7046 = t7043 + t7045;
  t7063 = t7000*t6992;
  t7064 = t1409*t7013;
  t7067 = t7063 + t7064;
  t7077 = t7000*t7041;
  t7078 = t1409*t7046;
  t7081 = t7077 + t7078;
  t7086 = t7053*t6956*t7000;
  t7088 = t1409*t7053*t6982;
  t7089 = t7086 + t7088;
  p_output1[0]=-1.*t1409*t6992 + t7000*t7013;
  p_output1[1]=-1.*t1409*t7041 + t7000*t7046;
  p_output1[2]=-1.*t1409*t6956*t7053 + t6982*t7000*t7053;
  p_output1[3]=t6938*t7053*t7058 + t7062*t7067;
  p_output1[4]=t6981*t7053*t7058 + t7062*t7081;
  p_output1[5]=-1.*t6957*t7058 + t7062*t7089;
  p_output1[6]=t6938*t7053*t7062 - 1.*t7058*t7067;
  p_output1[7]=t6981*t7053*t7062 - 1.*t7058*t7081;
  p_output1[8]=-1.*t6957*t7062 - 1.*t7058*t7089;
}



void R_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
