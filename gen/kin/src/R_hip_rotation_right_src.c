/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:35 GMT-05:00
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
  double t6031;
  double t6059;
  double t1540;
  double t6046;
  double t6065;
  double t296;
  double t6075;
  double t6104;
  double t6047;
  double t6069;
  double t6072;
  double t6076;
  double t6077;
  double t6079;
  double t6087;
  double t6091;
  double t6092;
  double t6094;
  double t6097;
  double t6098;
  t6031 = Cos(var1[5]);
  t6059 = Sin(var1[3]);
  t1540 = Cos(var1[3]);
  t6046 = Sin(var1[4]);
  t6065 = Sin(var1[5]);
  t296 = Cos(var1[13]);
  t6075 = Sin(var1[13]);
  t6104 = Cos(var1[4]);
  t6047 = t1540*t6031*t6046;
  t6069 = t6059*t6065;
  t6072 = t6047 + t6069;
  t6076 = -1.*t6031*t6059;
  t6077 = t1540*t6046*t6065;
  t6079 = t6076 + t6077;
  t6087 = t6031*t6059*t6046;
  t6091 = -1.*t1540*t6065;
  t6092 = t6087 + t6091;
  t6094 = t1540*t6031;
  t6097 = t6059*t6046*t6065;
  t6098 = t6094 + t6097;
  p_output1[0]=-1.*t296*t6072 + t6075*t6079;
  p_output1[1]=-1.*t296*t6092 + t6075*t6098;
  p_output1[2]=-1.*t296*t6031*t6104 + t6065*t6075*t6104;
  p_output1[3]=t1540*t6104;
  p_output1[4]=t6059*t6104;
  p_output1[5]=-1.*t6046;
  p_output1[6]=-1.*t6072*t6075 - 1.*t296*t6079;
  p_output1[7]=-1.*t6075*t6092 - 1.*t296*t6098;
  p_output1[8]=-1.*t296*t6065*t6104 - 1.*t6031*t6075*t6104;
}



void R_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
