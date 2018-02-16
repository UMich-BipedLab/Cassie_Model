/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_left_src.h"

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
  double t1131;
  double t1157;
  double t1113;
  double t1146;
  double t1170;
  double t1109;
  double t1175;
  double t1176;
  double t1177;
  double t1147;
  double t1171;
  double t1172;
  double t1178;
  double t1065;
  double t1195;
  double t1197;
  double t1216;
  double t1217;
  double t1218;
  double t1212;
  double t1213;
  double t1214;
  double t1204;
  double t1209;
  double t1199;
  double t1201;
  double t1202;
  double t1203;
  double t1205;
  double t1206;
  double t1174;
  double t1190;
  double t1192;
  double t1224;
  double t1227;
  double t1228;
  double t1229;
  double t1232;
  double t1233;
  double t1215;
  double t1219;
  double t1220;
  double t1242;
  double t1243;
  double t1244;
  double t1245;
  double t1246;
  double t1247;
  double t1238;
  double t1239;
  double t1240;
  t1131 = Cos(var1[5]);
  t1157 = Sin(var1[3]);
  t1113 = Cos(var1[3]);
  t1146 = Sin(var1[4]);
  t1170 = Sin(var1[5]);
  t1109 = Cos(var1[6]);
  t1175 = -1.*t1131*t1157;
  t1176 = t1113*t1146*t1170;
  t1177 = t1175 + t1176;
  t1147 = t1113*t1131*t1146;
  t1171 = t1157*t1170;
  t1172 = t1147 + t1171;
  t1178 = Sin(var1[6]);
  t1065 = Cos(var1[8]);
  t1195 = Cos(var1[4]);
  t1197 = Cos(var1[7]);
  t1216 = t1113*t1131;
  t1217 = t1157*t1146*t1170;
  t1218 = t1216 + t1217;
  t1212 = t1131*t1157*t1146;
  t1213 = -1.*t1113*t1170;
  t1214 = t1212 + t1213;
  t1204 = Sin(var1[7]);
  t1209 = Sin(var1[8]);
  t1199 = t1113*t1195*t1197;
  t1201 = t1109*t1177;
  t1202 = t1172*t1178;
  t1203 = t1201 + t1202;
  t1205 = t1203*t1204;
  t1206 = t1199 + t1205;
  t1174 = t1109*t1172;
  t1190 = -1.*t1177*t1178;
  t1192 = t1174 + t1190;
  t1224 = t1195*t1197*t1157;
  t1227 = t1109*t1218;
  t1228 = t1214*t1178;
  t1229 = t1227 + t1228;
  t1232 = t1229*t1204;
  t1233 = t1224 + t1232;
  t1215 = t1109*t1214;
  t1219 = -1.*t1218*t1178;
  t1220 = t1215 + t1219;
  t1242 = -1.*t1197*t1146;
  t1243 = t1195*t1109*t1170;
  t1244 = t1195*t1131*t1178;
  t1245 = t1243 + t1244;
  t1246 = t1245*t1204;
  t1247 = t1242 + t1246;
  t1238 = t1195*t1131*t1109;
  t1239 = -1.*t1195*t1170*t1178;
  t1240 = t1238 + t1239;
  p_output1[0]=-1.*t1065*t1192 + t1206*t1209;
  p_output1[1]=-1.*t1065*t1220 + t1209*t1233;
  p_output1[2]=-1.*t1065*t1240 + t1209*t1247;
  p_output1[3]=t1065*t1206 + t1192*t1209;
  p_output1[4]=t1209*t1220 + t1065*t1233;
  p_output1[5]=t1209*t1240 + t1065*t1247;
  p_output1[6]=-1.*t1197*t1203 + t1113*t1195*t1204;
  p_output1[7]=t1157*t1195*t1204 - 1.*t1197*t1229;
  p_output1[8]=-1.*t1146*t1204 - 1.*t1197*t1245;
}



void R_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
