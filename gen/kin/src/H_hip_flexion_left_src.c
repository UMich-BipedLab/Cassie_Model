/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_left_src.h"

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
  double t911;
  double t927;
  double t909;
  double t913;
  double t938;
  double t898;
  double t953;
  double t954;
  double t958;
  double t921;
  double t941;
  double t944;
  double t960;
  double t885;
  double t971;
  double t972;
  double t1017;
  double t1020;
  double t1021;
  double t1007;
  double t1009;
  double t1012;
  double t990;
  double t999;
  double t973;
  double t980;
  double t986;
  double t988;
  double t995;
  double t998;
  double t952;
  double t961;
  double t964;
  double t1025;
  double t1028;
  double t1029;
  double t1030;
  double t1031;
  double t1033;
  double t1016;
  double t1022;
  double t1023;
  double t1062;
  double t1064;
  double t1066;
  double t1070;
  double t1071;
  double t1072;
  double t1042;
  double t1049;
  double t1058;
  double t1130;
  double t1140;
  double t1162;
  double t1163;
  double t1077;
  double t1080;
  double t1081;
  double t1119;
  double t1120;
  double t1121;
  double t1122;
  double t1124;
  double t1125;
  double t1143;
  double t1145;
  double t1147;
  double t1151;
  double t1152;
  double t1153;
  double t1164;
  double t1166;
  double t1167;
  double t1169;
  double t1174;
  double t1177;
  double t1083;
  double t1084;
  double t1086;
  double t1099;
  double t1100;
  double t1101;
  t911 = Cos(var1[5]);
  t927 = Sin(var1[3]);
  t909 = Cos(var1[3]);
  t913 = Sin(var1[4]);
  t938 = Sin(var1[5]);
  t898 = Cos(var1[6]);
  t953 = -1.*t911*t927;
  t954 = t909*t913*t938;
  t958 = t953 + t954;
  t921 = t909*t911*t913;
  t941 = t927*t938;
  t944 = t921 + t941;
  t960 = Sin(var1[6]);
  t885 = Cos(var1[8]);
  t971 = Cos(var1[4]);
  t972 = Cos(var1[7]);
  t1017 = t909*t911;
  t1020 = t927*t913*t938;
  t1021 = t1017 + t1020;
  t1007 = t911*t927*t913;
  t1009 = -1.*t909*t938;
  t1012 = t1007 + t1009;
  t990 = Sin(var1[7]);
  t999 = Sin(var1[8]);
  t973 = t909*t971*t972;
  t980 = t898*t958;
  t986 = t944*t960;
  t988 = t980 + t986;
  t995 = t988*t990;
  t998 = t973 + t995;
  t952 = t898*t944;
  t961 = -1.*t958*t960;
  t964 = t952 + t961;
  t1025 = t971*t972*t927;
  t1028 = t898*t1021;
  t1029 = t1012*t960;
  t1030 = t1028 + t1029;
  t1031 = t1030*t990;
  t1033 = t1025 + t1031;
  t1016 = t898*t1012;
  t1022 = -1.*t1021*t960;
  t1023 = t1016 + t1022;
  t1062 = -1.*t972*t913;
  t1064 = t971*t898*t938;
  t1066 = t971*t911*t960;
  t1070 = t1064 + t1066;
  t1071 = t1070*t990;
  t1072 = t1062 + t1071;
  t1042 = t971*t911*t898;
  t1049 = -1.*t971*t938*t960;
  t1058 = t1042 + t1049;
  t1130 = -1.*t972;
  t1140 = 1. + t1130;
  t1162 = -1.*t885;
  t1163 = 1. + t1162;
  t1077 = t885*t998;
  t1080 = t964*t999;
  t1081 = t1077 + t1080;
  t1119 = -1.*t898;
  t1120 = 1. + t1119;
  t1121 = 0.135*t1120;
  t1122 = 0. + t1121;
  t1124 = -0.135*t960;
  t1125 = 0. + t1124;
  t1143 = 0.135*t1140;
  t1145 = 0.049*t990;
  t1147 = 0. + t1143 + t1145;
  t1151 = -0.049*t1140;
  t1152 = 0.135*t990;
  t1153 = 0. + t1151 + t1152;
  t1164 = -0.049*t1163;
  t1166 = -0.09*t999;
  t1167 = 0. + t1164 + t1166;
  t1169 = -0.09*t1163;
  t1174 = 0.049*t999;
  t1177 = 0. + t1169 + t1174;
  t1083 = t885*t1033;
  t1084 = t1023*t999;
  t1086 = t1083 + t1084;
  t1099 = t885*t1072;
  t1100 = t1058*t999;
  t1101 = t1099 + t1100;
  p_output1[0]=-1.*t885*t964 + t998*t999;
  p_output1[1]=-1.*t1023*t885 + t1033*t999;
  p_output1[2]=-1.*t1058*t885 + t1072*t999;
  p_output1[3]=0.;
  p_output1[4]=t1081;
  p_output1[5]=t1086;
  p_output1[6]=t1101;
  p_output1[7]=0.;
  p_output1[8]=-1.*t972*t988 + t909*t971*t990;
  p_output1[9]=-1.*t1030*t972 + t927*t971*t990;
  p_output1[10]=-1.*t1070*t972 - 1.*t913*t990;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t1081 + t1125*t944 + t1122*t958 + t1177*t964 + t1153*t909*t971 + t1147*t988 + 0.135*(t972*t988 - 1.*t909*t971*t990) + t1167*t998 - 0.09*(t885*t964 - 1.*t998*t999) + var1[0];
  p_output1[13]=0. - 0.049*t1086 + t1021*t1122 + t1012*t1125 + t1030*t1147 + t1033*t1167 + t1023*t1177 + t1153*t927*t971 + 0.135*(t1030*t972 - 1.*t927*t971*t990) - 0.09*(t1023*t885 - 1.*t1033*t999) + var1[1];
  p_output1[14]=0. - 0.049*t1101 + t1070*t1147 + t1072*t1167 + t1058*t1177 - 1.*t1153*t913 + t1125*t911*t971 + t1122*t938*t971 + 0.135*(t1070*t972 + t913*t990) - 0.09*(t1058*t885 - 1.*t1072*t999) + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
