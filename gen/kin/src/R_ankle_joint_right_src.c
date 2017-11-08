/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_right_src.h"

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
  double t2305;
  double t2449;
  double t2174;
  double t2378;
  double t2488;
  double t4044;
  double t2445;
  double t3162;
  double t3790;
  double t554;
  double t4233;
  double t4402;
  double t4459;
  double t4945;
  double t4028;
  double t4878;
  double t4938;
  double t546;
  double t4983;
  double t4993;
  double t5046;
  double t5100;
  double t5179;
  double t5404;
  double t5530;
  double t5671;
  double t5979;
  double t7719;
  double t4944;
  double t6033;
  double t6049;
  double t157;
  double t7728;
  double t7741;
  double t7762;
  double t116;
  double t7843;
  double t7864;
  double t7873;
  double t7882;
  double t7889;
  double t7893;
  double t7878;
  double t7900;
  double t7901;
  double t7911;
  double t7915;
  double t7920;
  double t7925;
  double t7929;
  double t7930;
  double t7821;
  double t7905;
  double t7932;
  double t7934;
  double t7938;
  double t7939;
  double t7940;
  double t7956;
  double t7962;
  double t7967;
  double t7973;
  double t7974;
  double t7976;
  double t7981;
  double t7983;
  double t7986;
  double t7970;
  double t7987;
  double t7990;
  double t7994;
  double t7995;
  double t7999;
  double t6488;
  double t7772;
  double t7782;
  double t7822;
  double t7826;
  double t7829;
  double t7936;
  double t7942;
  double t7943;
  double t7948;
  double t7951;
  double t7952;
  double t7992;
  double t8001;
  double t8002;
  double t8007;
  double t8008;
  double t8010;
  t2305 = Cos(var1[5]);
  t2449 = Sin(var1[3]);
  t2174 = Cos(var1[3]);
  t2378 = Sin(var1[4]);
  t2488 = Sin(var1[5]);
  t4044 = Sin(var1[13]);
  t2445 = t2174*t2305*t2378;
  t3162 = t2449*t2488;
  t3790 = t2445 + t3162;
  t554 = Cos(var1[13]);
  t4233 = -1.*t2305*t2449;
  t4402 = t2174*t2378*t2488;
  t4459 = t4233 + t4402;
  t4945 = Cos(var1[15]);
  t4028 = t554*t3790;
  t4878 = -1.*t4044*t4459;
  t4938 = t4028 + t4878;
  t546 = Sin(var1[15]);
  t4983 = Cos(var1[14]);
  t4993 = Cos(var1[4]);
  t5046 = t4983*t2174*t4993;
  t5100 = Sin(var1[14]);
  t5179 = t4044*t3790;
  t5404 = t554*t4459;
  t5530 = t5179 + t5404;
  t5671 = t5100*t5530;
  t5979 = t5046 + t5671;
  t7719 = Cos(var1[16]);
  t4944 = t546*t4938;
  t6033 = t4945*t5979;
  t6049 = t4944 + t6033;
  t157 = Sin(var1[16]);
  t7728 = t4945*t4938;
  t7741 = -1.*t546*t5979;
  t7762 = t7728 + t7741;
  t116 = Cos(var1[17]);
  t7843 = t2305*t2449*t2378;
  t7864 = -1.*t2174*t2488;
  t7873 = t7843 + t7864;
  t7882 = t2174*t2305;
  t7889 = t2449*t2378*t2488;
  t7893 = t7882 + t7889;
  t7878 = t554*t7873;
  t7900 = -1.*t4044*t7893;
  t7901 = t7878 + t7900;
  t7911 = t4983*t4993*t2449;
  t7915 = t4044*t7873;
  t7920 = t554*t7893;
  t7925 = t7915 + t7920;
  t7929 = t5100*t7925;
  t7930 = t7911 + t7929;
  t7821 = Sin(var1[17]);
  t7905 = t546*t7901;
  t7932 = t4945*t7930;
  t7934 = t7905 + t7932;
  t7938 = t4945*t7901;
  t7939 = -1.*t546*t7930;
  t7940 = t7938 + t7939;
  t7956 = t554*t4993*t2305;
  t7962 = -1.*t4993*t4044*t2488;
  t7967 = t7956 + t7962;
  t7973 = -1.*t4983*t2378;
  t7974 = t4993*t2305*t4044;
  t7976 = t554*t4993*t2488;
  t7981 = t7974 + t7976;
  t7983 = t5100*t7981;
  t7986 = t7973 + t7983;
  t7970 = t546*t7967;
  t7987 = t4945*t7986;
  t7990 = t7970 + t7987;
  t7994 = t4945*t7967;
  t7995 = -1.*t546*t7986;
  t7999 = t7994 + t7995;
  t6488 = -1.*t157*t6049;
  t7772 = t7719*t7762;
  t7782 = t6488 + t7772;
  t7822 = t7719*t6049;
  t7826 = t157*t7762;
  t7829 = t7822 + t7826;
  t7936 = -1.*t157*t7934;
  t7942 = t7719*t7940;
  t7943 = t7936 + t7942;
  t7948 = t7719*t7934;
  t7951 = t157*t7940;
  t7952 = t7948 + t7951;
  t7992 = -1.*t157*t7990;
  t8001 = t7719*t7999;
  t8002 = t7992 + t8001;
  t8007 = t7719*t7990;
  t8008 = t157*t7999;
  t8010 = t8007 + t8008;
  p_output1[0]=-1.*t116*t7782 + t7821*t7829;
  p_output1[1]=-1.*t116*t7943 + t7821*t7952;
  p_output1[2]=-1.*t116*t8002 + t7821*t8010;
  p_output1[3]=t7782*t7821 + t116*t7829;
  p_output1[4]=t7821*t7943 + t116*t7952;
  p_output1[5]=t7821*t8002 + t116*t8010;
  p_output1[6]=t2174*t4993*t5100 - 1.*t4983*t5530;
  p_output1[7]=t2449*t4993*t5100 - 1.*t4983*t7925;
  p_output1[8]=-1.*t2378*t5100 - 1.*t4983*t7981;
}



void R_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
