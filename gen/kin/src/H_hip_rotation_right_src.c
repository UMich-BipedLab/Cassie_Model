/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_right_src.h"

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
  double t825;
  double t1719;
  double t42;
  double t1077;
  double t2623;
  double t41;
  double t2780;
  double t6922;
  double t1158;
  double t2759;
  double t2768;
  double t2784;
  double t3287;
  double t4282;
  double t6929;
  double t6936;
  double t6856;
  double t6902;
  double t6904;
  double t6909;
  double t6914;
  double t6915;
  double t6938;
  double t6940;
  double t6943;
  double t6950;
  double t6952;
  double t6953;
  double t6963;
  double t6965;
  double t6966;
  double t6985;
  double t6986;
  double t6933;
  double t6946;
  double t6948;
  double t6987;
  double t6988;
  double t6989;
  double t6992;
  double t6993;
  double t6996;
  double t6997;
  double t6998;
  double t7000;
  double t7002;
  double t7008;
  double t7010;
  double t6949;
  double t6956;
  double t6957;
  double t6962;
  double t6967;
  double t6968;
  t825 = Cos(var1[5]);
  t1719 = Sin(var1[3]);
  t42 = Cos(var1[3]);
  t1077 = Sin(var1[4]);
  t2623 = Sin(var1[5]);
  t41 = Cos(var1[13]);
  t2780 = Sin(var1[13]);
  t6922 = Cos(var1[4]);
  t1158 = t42*t825*t1077;
  t2759 = t1719*t2623;
  t2768 = t1158 + t2759;
  t2784 = -1.*t825*t1719;
  t3287 = t42*t1077*t2623;
  t4282 = t2784 + t3287;
  t6929 = Cos(var1[14]);
  t6936 = Sin(var1[14]);
  t6856 = t825*t1719*t1077;
  t6902 = -1.*t42*t2623;
  t6904 = t6856 + t6902;
  t6909 = t42*t825;
  t6914 = t1719*t1077*t2623;
  t6915 = t6909 + t6914;
  t6938 = t2780*t2768;
  t6940 = t41*t4282;
  t6943 = t6938 + t6940;
  t6950 = t2780*t6904;
  t6952 = t41*t6915;
  t6953 = t6950 + t6952;
  t6963 = t6922*t825*t2780;
  t6965 = t41*t6922*t2623;
  t6966 = t6963 + t6965;
  t6985 = -1.*t6929;
  t6986 = 1. + t6985;
  t6933 = t6929*t42*t6922;
  t6946 = t6936*t6943;
  t6948 = t6933 + t6946;
  t6987 = -0.049*t6986;
  t6988 = -0.135*t6936;
  t6989 = 0. + t6987 + t6988;
  t6992 = 0.135*t2780;
  t6993 = 0. + t6992;
  t6996 = -1.*t41;
  t6997 = 1. + t6996;
  t6998 = -0.135*t6997;
  t7000 = 0. + t6998;
  t7002 = -0.135*t6986;
  t7008 = 0.049*t6936;
  t7010 = 0. + t7002 + t7008;
  t6949 = t6929*t6922*t1719;
  t6956 = t6936*t6953;
  t6957 = t6949 + t6956;
  t6962 = -1.*t6929*t1077;
  t6967 = t6936*t6966;
  t6968 = t6962 + t6967;
  p_output1[0]=-1.*t2768*t41 + t2780*t4282;
  p_output1[1]=-1.*t41*t6904 + t2780*t6915;
  p_output1[2]=t2623*t2780*t6922 - 1.*t41*t6922*t825;
  p_output1[3]=0.;
  p_output1[4]=t6948;
  p_output1[5]=t6957;
  p_output1[6]=t6968;
  p_output1[7]=0.;
  p_output1[8]=t42*t6922*t6936 - 1.*t6929*t6943;
  p_output1[9]=t1719*t6922*t6936 - 1.*t6929*t6953;
  p_output1[10]=-1.*t1077*t6936 - 1.*t6929*t6966;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t2768*t41 - 1.*t2780*t4282) - 0.135*(-1.*t42*t6922*t6936 + t6929*t6943) - 0.049*t6948 + t42*t6922*t6989 + t2768*t6993 + t4282*t7000 + t6943*t7010 + var1[0];
  p_output1[13]=0. - 0.09*(t41*t6904 - 1.*t2780*t6915) - 0.135*(-1.*t1719*t6922*t6936 + t6929*t6953) - 0.049*t6957 + t1719*t6922*t6989 + t6904*t6993 + t6915*t7000 + t6953*t7010 + var1[1];
  p_output1[14]=0. - 0.135*(t1077*t6936 + t6929*t6966) - 0.049*t6968 - 1.*t1077*t6989 + t2623*t6922*t7000 + t6966*t7010 + t6922*t6993*t825 - 0.09*(-1.*t2623*t2780*t6922 + t41*t6922*t825) + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
