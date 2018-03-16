/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:56 GMT-04:00
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
  double t875;
  double t891;
  double t873;
  double t877;
  double t902;
  double t862;
  double t917;
  double t918;
  double t922;
  double t885;
  double t905;
  double t908;
  double t924;
  double t849;
  double t935;
  double t936;
  double t981;
  double t984;
  double t985;
  double t971;
  double t973;
  double t976;
  double t954;
  double t963;
  double t937;
  double t944;
  double t950;
  double t952;
  double t959;
  double t962;
  double t916;
  double t925;
  double t928;
  double t989;
  double t992;
  double t993;
  double t994;
  double t995;
  double t997;
  double t980;
  double t986;
  double t987;
  double t1026;
  double t1028;
  double t1030;
  double t1034;
  double t1035;
  double t1036;
  double t1006;
  double t1013;
  double t1022;
  double t1094;
  double t1104;
  double t1126;
  double t1127;
  double t1041;
  double t1044;
  double t1045;
  double t1083;
  double t1084;
  double t1085;
  double t1086;
  double t1088;
  double t1089;
  double t1107;
  double t1109;
  double t1111;
  double t1115;
  double t1116;
  double t1117;
  double t1128;
  double t1130;
  double t1131;
  double t1133;
  double t1138;
  double t1141;
  double t1047;
  double t1048;
  double t1050;
  double t1063;
  double t1064;
  double t1065;
  t875 = Cos(var1[5]);
  t891 = Sin(var1[3]);
  t873 = Cos(var1[3]);
  t877 = Sin(var1[4]);
  t902 = Sin(var1[5]);
  t862 = Cos(var1[6]);
  t917 = -1.*t875*t891;
  t918 = t873*t877*t902;
  t922 = t917 + t918;
  t885 = t873*t875*t877;
  t905 = t891*t902;
  t908 = t885 + t905;
  t924 = Sin(var1[6]);
  t849 = Cos(var1[8]);
  t935 = Cos(var1[4]);
  t936 = Cos(var1[7]);
  t981 = t873*t875;
  t984 = t891*t877*t902;
  t985 = t981 + t984;
  t971 = t875*t891*t877;
  t973 = -1.*t873*t902;
  t976 = t971 + t973;
  t954 = Sin(var1[7]);
  t963 = Sin(var1[8]);
  t937 = t873*t935*t936;
  t944 = t862*t922;
  t950 = t908*t924;
  t952 = t944 + t950;
  t959 = t952*t954;
  t962 = t937 + t959;
  t916 = t862*t908;
  t925 = -1.*t922*t924;
  t928 = t916 + t925;
  t989 = t935*t936*t891;
  t992 = t862*t985;
  t993 = t976*t924;
  t994 = t992 + t993;
  t995 = t994*t954;
  t997 = t989 + t995;
  t980 = t862*t976;
  t986 = -1.*t985*t924;
  t987 = t980 + t986;
  t1026 = -1.*t936*t877;
  t1028 = t935*t862*t902;
  t1030 = t935*t875*t924;
  t1034 = t1028 + t1030;
  t1035 = t1034*t954;
  t1036 = t1026 + t1035;
  t1006 = t935*t875*t862;
  t1013 = -1.*t935*t902*t924;
  t1022 = t1006 + t1013;
  t1094 = -1.*t936;
  t1104 = 1. + t1094;
  t1126 = -1.*t849;
  t1127 = 1. + t1126;
  t1041 = t849*t962;
  t1044 = t928*t963;
  t1045 = t1041 + t1044;
  t1083 = -1.*t862;
  t1084 = 1. + t1083;
  t1085 = 0.135*t1084;
  t1086 = 0. + t1085;
  t1088 = -0.135*t924;
  t1089 = 0. + t1088;
  t1107 = 0.135*t1104;
  t1109 = 0.049*t954;
  t1111 = 0. + t1107 + t1109;
  t1115 = -0.049*t1104;
  t1116 = 0.135*t954;
  t1117 = 0. + t1115 + t1116;
  t1128 = -0.049*t1127;
  t1130 = -0.09*t963;
  t1131 = 0. + t1128 + t1130;
  t1133 = -0.09*t1127;
  t1138 = 0.049*t963;
  t1141 = 0. + t1133 + t1138;
  t1047 = t849*t997;
  t1048 = t987*t963;
  t1050 = t1047 + t1048;
  t1063 = t849*t1036;
  t1064 = t1022*t963;
  t1065 = t1063 + t1064;
  p_output1[0]=-1.*t849*t928 + t962*t963;
  p_output1[1]=-1.*t849*t987 + t963*t997;
  p_output1[2]=-1.*t1022*t849 + t1036*t963;
  p_output1[3]=0.;
  p_output1[4]=t1045;
  p_output1[5]=t1050;
  p_output1[6]=t1065;
  p_output1[7]=0.;
  p_output1[8]=-1.*t936*t952 + t873*t935*t954;
  p_output1[9]=t891*t935*t954 - 1.*t936*t994;
  p_output1[10]=-1.*t1034*t936 - 1.*t877*t954;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t1045 + t1089*t908 + t1086*t922 + t1141*t928 + t1117*t873*t935 + t1111*t952 + 0.135*(t936*t952 - 1.*t873*t935*t954) + t1131*t962 - 0.09*(t849*t928 - 1.*t962*t963) + var1[0];
  p_output1[13]=0. - 0.049*t1050 + t1117*t891*t935 + t1089*t976 + t1086*t985 + t1141*t987 + t1111*t994 + 0.135*(-1.*t891*t935*t954 + t936*t994) + t1131*t997 - 0.09*(t849*t987 - 1.*t963*t997) + var1[1];
  p_output1[14]=0. - 0.049*t1065 + t1034*t1111 + t1036*t1131 + t1022*t1141 - 1.*t1117*t877 + t1089*t875*t935 + t1086*t902*t935 + 0.135*(t1034*t936 + t877*t954) - 0.09*(t1022*t849 - 1.*t1036*t963) + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
