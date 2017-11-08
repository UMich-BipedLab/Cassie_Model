/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_right_src.h"

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
  double t2094;
  double t5866;
  double t5875;
  double t5869;
  double t5876;
  double t5862;
  double t5871;
  double t5878;
  double t5881;
  double t5884;
  double t5891;
  double t5892;
  double t5893;
  double t2415;
  double t5863;
  double t5865;
  double t5886;
  double t5887;
  double t5889;
  double t5890;
  double t5914;
  double t5915;
  double t5917;
  double t5919;
  double t5920;
  double t5921;
  t2094 = Cos(var1[3]);
  t5866 = Cos(var1[5]);
  t5875 = Sin(var1[3]);
  t5869 = Sin(var1[4]);
  t5876 = Sin(var1[5]);
  t5862 = Sin(var1[13]);
  t5871 = t2094*t5866*t5869;
  t5878 = t5875*t5876;
  t5881 = t5871 + t5878;
  t5884 = Cos(var1[13]);
  t5891 = -1.*t5866*t5875;
  t5892 = t2094*t5869*t5876;
  t5893 = t5891 + t5892;
  t2415 = Cos(var1[4]);
  t5863 = 0.135*t5862;
  t5865 = 0. + t5863;
  t5886 = -1.*t5884;
  t5887 = 1. + t5886;
  t5889 = -0.135*t5887;
  t5890 = 0. + t5889;
  t5914 = t5866*t5875*t5869;
  t5915 = -1.*t2094*t5876;
  t5917 = t5914 + t5915;
  t5919 = t2094*t5866;
  t5920 = t5875*t5869*t5876;
  t5921 = t5919 + t5920;
  p_output1[0]=0. - 0.049*t2094*t2415 + t5865*t5881 + t5890*t5893 - 0.09*(t5881*t5884 - 1.*t5862*t5893) - 0.135*(t5862*t5881 + t5884*t5893) + var1[0];
  p_output1[1]=0. - 0.049*t2415*t5875 + t5865*t5917 + t5890*t5921 - 0.09*(t5884*t5917 - 1.*t5862*t5921) - 0.135*(t5862*t5917 + t5884*t5921) + var1[1];
  p_output1[2]=0. + t2415*t5865*t5866 + 0.049*t5869 - 0.09*(-1.*t2415*t5862*t5876 + t2415*t5866*t5884) - 0.135*(t2415*t5862*t5866 + t2415*t5876*t5884) + t2415*t5876*t5890 + var1[2];
}



void p_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
