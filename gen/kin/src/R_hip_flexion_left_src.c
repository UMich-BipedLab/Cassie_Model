/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:05 GMT-05:00
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
  double t1167;
  double t1193;
  double t1149;
  double t1182;
  double t1206;
  double t1145;
  double t1211;
  double t1212;
  double t1213;
  double t1183;
  double t1207;
  double t1208;
  double t1214;
  double t1101;
  double t1231;
  double t1233;
  double t1252;
  double t1253;
  double t1254;
  double t1248;
  double t1249;
  double t1250;
  double t1240;
  double t1245;
  double t1235;
  double t1237;
  double t1238;
  double t1239;
  double t1241;
  double t1242;
  double t1210;
  double t1226;
  double t1228;
  double t1260;
  double t1263;
  double t1264;
  double t1265;
  double t1268;
  double t1269;
  double t1251;
  double t1255;
  double t1256;
  double t1278;
  double t1279;
  double t1280;
  double t1281;
  double t1282;
  double t1283;
  double t1274;
  double t1275;
  double t1276;
  t1167 = Cos(var1[5]);
  t1193 = Sin(var1[3]);
  t1149 = Cos(var1[3]);
  t1182 = Sin(var1[4]);
  t1206 = Sin(var1[5]);
  t1145 = Cos(var1[6]);
  t1211 = -1.*t1167*t1193;
  t1212 = t1149*t1182*t1206;
  t1213 = t1211 + t1212;
  t1183 = t1149*t1167*t1182;
  t1207 = t1193*t1206;
  t1208 = t1183 + t1207;
  t1214 = Sin(var1[6]);
  t1101 = Cos(var1[8]);
  t1231 = Cos(var1[4]);
  t1233 = Cos(var1[7]);
  t1252 = t1149*t1167;
  t1253 = t1193*t1182*t1206;
  t1254 = t1252 + t1253;
  t1248 = t1167*t1193*t1182;
  t1249 = -1.*t1149*t1206;
  t1250 = t1248 + t1249;
  t1240 = Sin(var1[7]);
  t1245 = Sin(var1[8]);
  t1235 = t1149*t1231*t1233;
  t1237 = t1145*t1213;
  t1238 = t1208*t1214;
  t1239 = t1237 + t1238;
  t1241 = t1239*t1240;
  t1242 = t1235 + t1241;
  t1210 = t1145*t1208;
  t1226 = -1.*t1213*t1214;
  t1228 = t1210 + t1226;
  t1260 = t1231*t1233*t1193;
  t1263 = t1145*t1254;
  t1264 = t1250*t1214;
  t1265 = t1263 + t1264;
  t1268 = t1265*t1240;
  t1269 = t1260 + t1268;
  t1251 = t1145*t1250;
  t1255 = -1.*t1254*t1214;
  t1256 = t1251 + t1255;
  t1278 = -1.*t1233*t1182;
  t1279 = t1231*t1145*t1206;
  t1280 = t1231*t1167*t1214;
  t1281 = t1279 + t1280;
  t1282 = t1281*t1240;
  t1283 = t1278 + t1282;
  t1274 = t1231*t1167*t1145;
  t1275 = -1.*t1231*t1206*t1214;
  t1276 = t1274 + t1275;
  p_output1[0]=-1.*t1101*t1228 + t1242*t1245;
  p_output1[1]=-1.*t1101*t1256 + t1245*t1269;
  p_output1[2]=-1.*t1101*t1276 + t1245*t1283;
  p_output1[3]=t1101*t1242 + t1228*t1245;
  p_output1[4]=t1245*t1256 + t1101*t1269;
  p_output1[5]=t1245*t1276 + t1101*t1283;
  p_output1[6]=-1.*t1233*t1239 + t1149*t1231*t1240;
  p_output1[7]=t1193*t1231*t1240 - 1.*t1233*t1265;
  p_output1[8]=-1.*t1182*t1240 - 1.*t1233*t1281;
}



void R_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
