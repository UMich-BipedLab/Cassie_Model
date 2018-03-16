/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_right_src.h"

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
  double t357;
  double t4096;
  double t331;
  double t361;
  double t4097;
  double t4402;
  double t3609;
  double t4391;
  double t4392;
  double t330;
  double t4411;
  double t4417;
  double t4424;
  double t4450;
  double t4393;
  double t4436;
  double t4441;
  double t202;
  double t4456;
  double t5388;
  double t5981;
  double t7800;
  double t7820;
  double t7821;
  double t7854;
  double t7873;
  double t7875;
  double t124;
  double t7899;
  double t7903;
  double t7905;
  double t7912;
  double t7915;
  double t7916;
  double t7883;
  double t7906;
  double t7917;
  double t7919;
  double t7927;
  double t7928;
  double t7930;
  double t7937;
  double t7940;
  double t7941;
  double t7958;
  double t7959;
  double t7961;
  double t7964;
  double t7965;
  double t7968;
  double t7973;
  double t7974;
  double t7977;
  double t4445;
  double t7876;
  double t7877;
  double t7885;
  double t7893;
  double t7894;
  double t7920;
  double t7942;
  double t7943;
  double t7945;
  double t7946;
  double t7949;
  double t7962;
  double t7979;
  double t7980;
  double t7987;
  double t7993;
  double t7994;
  t357 = Cos(var1[5]);
  t4096 = Sin(var1[3]);
  t331 = Cos(var1[3]);
  t361 = Sin(var1[4]);
  t4097 = Sin(var1[5]);
  t4402 = Sin(var1[13]);
  t3609 = t331*t357*t361;
  t4391 = t4096*t4097;
  t4392 = t3609 + t4391;
  t330 = Cos(var1[13]);
  t4411 = -1.*t357*t4096;
  t4417 = t331*t361*t4097;
  t4424 = t4411 + t4417;
  t4450 = Cos(var1[15]);
  t4393 = t330*t4392;
  t4436 = -1.*t4402*t4424;
  t4441 = t4393 + t4436;
  t202 = Sin(var1[15]);
  t4456 = Cos(var1[14]);
  t5388 = Cos(var1[4]);
  t5981 = t4456*t331*t5388;
  t7800 = Sin(var1[14]);
  t7820 = t4402*t4392;
  t7821 = t330*t4424;
  t7854 = t7820 + t7821;
  t7873 = t7800*t7854;
  t7875 = t5981 + t7873;
  t124 = Sin(var1[16]);
  t7899 = t357*t4096*t361;
  t7903 = -1.*t331*t4097;
  t7905 = t7899 + t7903;
  t7912 = t331*t357;
  t7915 = t4096*t361*t4097;
  t7916 = t7912 + t7915;
  t7883 = Cos(var1[16]);
  t7906 = t330*t7905;
  t7917 = -1.*t4402*t7916;
  t7919 = t7906 + t7917;
  t7927 = t4456*t5388*t4096;
  t7928 = t4402*t7905;
  t7930 = t330*t7916;
  t7937 = t7928 + t7930;
  t7940 = t7800*t7937;
  t7941 = t7927 + t7940;
  t7958 = t330*t5388*t357;
  t7959 = -1.*t5388*t4402*t4097;
  t7961 = t7958 + t7959;
  t7964 = -1.*t4456*t361;
  t7965 = t5388*t357*t4402;
  t7968 = t330*t5388*t4097;
  t7973 = t7965 + t7968;
  t7974 = t7800*t7973;
  t7977 = t7964 + t7974;
  t4445 = t202*t4441;
  t7876 = t4450*t7875;
  t7877 = t4445 + t7876;
  t7885 = t4450*t4441;
  t7893 = -1.*t202*t7875;
  t7894 = t7885 + t7893;
  t7920 = t202*t7919;
  t7942 = t4450*t7941;
  t7943 = t7920 + t7942;
  t7945 = t4450*t7919;
  t7946 = -1.*t202*t7941;
  t7949 = t7945 + t7946;
  t7962 = t202*t7961;
  t7979 = t4450*t7977;
  t7980 = t7962 + t7979;
  t7987 = t4450*t7961;
  t7993 = -1.*t202*t7977;
  t7994 = t7987 + t7993;
  p_output1[0]=t124*t7877 - 1.*t7883*t7894;
  p_output1[1]=t124*t7943 - 1.*t7883*t7949;
  p_output1[2]=t124*t7980 - 1.*t7883*t7994;
  p_output1[3]=t7877*t7883 + t124*t7894;
  p_output1[4]=t7883*t7943 + t124*t7949;
  p_output1[5]=t7883*t7980 + t124*t7994;
  p_output1[6]=t331*t5388*t7800 - 1.*t4456*t7854;
  p_output1[7]=t4096*t5388*t7800 - 1.*t4456*t7937;
  p_output1[8]=-1.*t361*t7800 - 1.*t4456*t7973;
}



void R_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
