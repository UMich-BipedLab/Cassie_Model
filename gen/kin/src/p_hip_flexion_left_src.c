/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_left_src.h"

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
  double t1040;
  double t1022;
  double t1042;
  double t1035;
  double t1044;
  double t966;
  double t1055;
  double t1066;
  double t1071;
  double t1038;
  double t1049;
  double t1051;
  double t1072;
  double t1103;
  double t1104;
  double t1105;
  double t1108;
  double t1096;
  double t1097;
  double t1099;
  double t1128;
  double t973;
  double t1012;
  double t1016;
  double t1017;
  double t1075;
  double t1078;
  double t1160;
  double t1161;
  double t1170;
  double t1154;
  double t1157;
  double t1158;
  double t1107;
  double t1111;
  double t1115;
  double t1131;
  double t1133;
  double t1134;
  double t1189;
  double t1192;
  double t1194;
  double t1228;
  double t1231;
  double t1232;
  t1040 = Cos(var1[3]);
  t1022 = Cos(var1[5]);
  t1042 = Sin(var1[4]);
  t1035 = Sin(var1[3]);
  t1044 = Sin(var1[5]);
  t966 = Cos(var1[6]);
  t1055 = t1040*t1022*t1042;
  t1066 = t1035*t1044;
  t1071 = t1055 + t1066;
  t1038 = -1.*t1022*t1035;
  t1049 = t1040*t1042*t1044;
  t1051 = t1038 + t1049;
  t1072 = Sin(var1[6]);
  t1103 = Cos(var1[7]);
  t1104 = -1.*t1103;
  t1105 = 1. + t1104;
  t1108 = Sin(var1[7]);
  t1096 = t966*t1051;
  t1097 = t1071*t1072;
  t1099 = t1096 + t1097;
  t1128 = Cos(var1[4]);
  t973 = -1.*t966;
  t1012 = 1. + t973;
  t1016 = 0.135*t1012;
  t1017 = 0. + t1016;
  t1075 = -0.135*t1072;
  t1078 = 0. + t1075;
  t1160 = t1022*t1035*t1042;
  t1161 = -1.*t1040*t1044;
  t1170 = t1160 + t1161;
  t1154 = t1040*t1022;
  t1157 = t1035*t1042*t1044;
  t1158 = t1154 + t1157;
  t1107 = 0.135*t1105;
  t1111 = 0.049*t1108;
  t1115 = 0. + t1107 + t1111;
  t1131 = -0.049*t1105;
  t1133 = 0.135*t1108;
  t1134 = 0. + t1131 + t1133;
  t1189 = t966*t1158;
  t1192 = t1170*t1072;
  t1194 = t1189 + t1192;
  t1228 = t1128*t966*t1044;
  t1231 = t1128*t1022*t1072;
  t1232 = t1228 + t1231;
  p_output1[0]=0. + t1017*t1051 + t1071*t1078 + t1099*t1115 - 0.049*(t1099*t1108 + t1040*t1103*t1128) + 0.135*(t1099*t1103 - 1.*t1040*t1108*t1128) + t1040*t1128*t1134 - 0.09*(-1.*t1051*t1072 + t1071*t966) + var1[0];
  p_output1[1]=0. + t1035*t1128*t1134 + t1017*t1158 + t1078*t1170 + t1115*t1194 + 0.135*(-1.*t1035*t1108*t1128 + t1103*t1194) - 0.049*(t1035*t1103*t1128 + t1108*t1194) - 0.09*(-1.*t1072*t1158 + t1170*t966) + var1[1];
  p_output1[2]=0. + t1017*t1044*t1128 + t1022*t1078*t1128 - 1.*t1042*t1134 + t1115*t1232 + 0.135*(t1042*t1108 + t1103*t1232) - 0.049*(-1.*t1042*t1103 + t1108*t1232) - 0.09*(-1.*t1044*t1072*t1128 + t1022*t1128*t966) + var1[2];
}



void p_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
