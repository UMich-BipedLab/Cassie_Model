/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:34 GMT-05:00
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
  double t1063;
  double t3100;
  double t1050;
  double t1207;
  double t6804;
  double t898;
  double t6910;
  double t6943;
  double t2794;
  double t6877;
  double t6900;
  double t6911;
  double t6915;
  double t6917;
  double t6951;
  double t6959;
  double t6924;
  double t6927;
  double t6928;
  double t6933;
  double t6935;
  double t6936;
  double t6961;
  double t6962;
  double t6963;
  double t6968;
  double t6969;
  double t6970;
  double t6979;
  double t6981;
  double t6982;
  double t7003;
  double t7004;
  double t6954;
  double t6964;
  double t6965;
  double t7007;
  double t7009;
  double t7011;
  double t7017;
  double t7018;
  double t7021;
  double t7022;
  double t7023;
  double t7024;
  double t7026;
  double t7027;
  double t7035;
  double t6966;
  double t6971;
  double t6972;
  double t6977;
  double t6983;
  double t6984;
  t1063 = Cos(var1[5]);
  t3100 = Sin(var1[3]);
  t1050 = Cos(var1[3]);
  t1207 = Sin(var1[4]);
  t6804 = Sin(var1[5]);
  t898 = Cos(var1[13]);
  t6910 = Sin(var1[13]);
  t6943 = Cos(var1[4]);
  t2794 = t1050*t1063*t1207;
  t6877 = t3100*t6804;
  t6900 = t2794 + t6877;
  t6911 = -1.*t1063*t3100;
  t6915 = t1050*t1207*t6804;
  t6917 = t6911 + t6915;
  t6951 = Cos(var1[14]);
  t6959 = Sin(var1[14]);
  t6924 = t1063*t3100*t1207;
  t6927 = -1.*t1050*t6804;
  t6928 = t6924 + t6927;
  t6933 = t1050*t1063;
  t6935 = t3100*t1207*t6804;
  t6936 = t6933 + t6935;
  t6961 = t6910*t6900;
  t6962 = t898*t6917;
  t6963 = t6961 + t6962;
  t6968 = t6910*t6928;
  t6969 = t898*t6936;
  t6970 = t6968 + t6969;
  t6979 = t6943*t1063*t6910;
  t6981 = t898*t6943*t6804;
  t6982 = t6979 + t6981;
  t7003 = -1.*t6951;
  t7004 = 1. + t7003;
  t6954 = t6951*t1050*t6943;
  t6964 = t6959*t6963;
  t6965 = t6954 + t6964;
  t7007 = -0.049*t7004;
  t7009 = -0.135*t6959;
  t7011 = 0. + t7007 + t7009;
  t7017 = 0.135*t6910;
  t7018 = 0. + t7017;
  t7021 = -1.*t898;
  t7022 = 1. + t7021;
  t7023 = -0.135*t7022;
  t7024 = 0. + t7023;
  t7026 = -0.135*t7004;
  t7027 = 0.049*t6959;
  t7035 = 0. + t7026 + t7027;
  t6966 = t6951*t6943*t3100;
  t6971 = t6959*t6970;
  t6972 = t6966 + t6971;
  t6977 = -1.*t6951*t1207;
  t6983 = t6959*t6982;
  t6984 = t6977 + t6983;
  p_output1[0]=t6910*t6917 - 1.*t6900*t898;
  p_output1[1]=t6910*t6936 - 1.*t6928*t898;
  p_output1[2]=t6804*t6910*t6943 - 1.*t1063*t6943*t898;
  p_output1[3]=0.;
  p_output1[4]=t6965;
  p_output1[5]=t6972;
  p_output1[6]=t6984;
  p_output1[7]=0.;
  p_output1[8]=t1050*t6943*t6959 - 1.*t6951*t6963;
  p_output1[9]=t3100*t6943*t6959 - 1.*t6951*t6970;
  p_output1[10]=-1.*t1207*t6959 - 1.*t6951*t6982;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(-1.*t1050*t6943*t6959 + t6951*t6963) - 0.049*t6965 + t1050*t6943*t7011 + t6900*t7018 + t6917*t7024 + t6963*t7035 - 0.09*(-1.*t6910*t6917 + t6900*t898) + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t3100*t6943*t6959 + t6951*t6970) - 0.049*t6972 + t3100*t6943*t7011 + t6928*t7018 + t6936*t7024 + t6970*t7035 - 0.09*(-1.*t6910*t6936 + t6928*t898) + var1[1];
  p_output1[14]=0. - 0.135*(t1207*t6959 + t6951*t6982) - 0.049*t6984 - 1.*t1207*t7011 + t1063*t6943*t7018 + t6804*t6943*t7024 + t6982*t7035 - 0.09*(-1.*t6804*t6910*t6943 + t1063*t6943*t898) + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
