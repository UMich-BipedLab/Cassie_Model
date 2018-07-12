/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:26 GMT-04:00
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
  double t826;
  double t526;
  double t1949;
  double t1470;
  double t2394;
  double t3052;
  double t2178;
  double t3716;
  double t2440;
  double t3119;
  double t3308;
  double t4600;
  double t5343;
  double t5363;
  double t5525;
  double t5942;
  double t6013;
  double t6182;
  double t6307;
  double t6369;
  double t3522;
  double t5415;
  double t5484;
  double t6843;
  double t6848;
  double t6867;
  double t6869;
  double t6872;
  double t6885;
  double t6058;
  double t6406;
  double t6636;
  double t6661;
  double t6671;
  double t6705;
  t826 = Cos(var1[4]);
  t526 = Cos(var1[3]);
  t1949 = Sin(var1[4]);
  t1470 = Sin(var1[3]);
  t2394 = Cos(var1[5]);
  t3052 = Sin(var1[5]);
  t2178 = Sin(var1[13]);
  t3716 = Cos(var1[13]);
  t2440 = t526*t2394*t1949;
  t3119 = t1470*t3052;
  t3308 = t2440 + t3119;
  t4600 = -1.*t2394*t1470;
  t5343 = t526*t1949*t3052;
  t5363 = t4600 + t5343;
  t5525 = t2394*t1470*t1949;
  t5942 = -1.*t526*t3052;
  t6013 = t5525 + t5942;
  t6182 = t526*t2394;
  t6307 = t1470*t1949*t3052;
  t6369 = t6182 + t6307;
  t3522 = t2178*t3308;
  t5415 = t3716*t5363;
  t5484 = t3522 + t5415;
  t6843 = 0.135*t2178;
  t6848 = 0. + t6843;
  t6867 = -1.*t3716;
  t6869 = 1. + t6867;
  t6872 = -0.135*t6869;
  t6885 = 0. + t6872;
  t6058 = t2178*t6013;
  t6406 = t3716*t6369;
  t6636 = t6058 + t6406;
  t6661 = t826*t2394*t2178;
  t6671 = t3716*t826*t3052;
  t6705 = t6661 + t6671;
  p_output1[0]=t526*t826;
  p_output1[1]=t1470*t826;
  p_output1[2]=-1.*t1949;
  p_output1[3]=0.;
  p_output1[4]=t5484;
  p_output1[5]=t6636;
  p_output1[6]=t6705;
  p_output1[7]=0.;
  p_output1[8]=t3308*t3716 - 1.*t2178*t5363;
  p_output1[9]=t3716*t6013 - 1.*t2178*t6369;
  p_output1[10]=-1.*t2178*t3052*t826 + t2394*t3716*t826;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*t5484 + t3308*t6848 + t5363*t6885 - 0.049*t526*t826 + var1[0];
  p_output1[13]=0. - 0.135*t6636 + t6013*t6848 + t6369*t6885 - 0.049*t1470*t826 + var1[1];
  p_output1[14]=0. + 0.049*t1949 - 0.135*t6705 + t2394*t6848*t826 + t3052*t6885*t826 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
