/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:45 GMT-05:00
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
  double t1257;
  double t1286;
  double t1247;
  double t1272;
  double t1287;
  double t1293;
  double t1284;
  double t1288;
  double t1289;
  double t1246;
  double t1298;
  double t1299;
  double t1300;
  double t1310;
  double t1290;
  double t1302;
  double t1305;
  double t553;
  double t1311;
  double t1312;
  double t1313;
  double t1314;
  double t1315;
  double t1317;
  double t1318;
  double t1321;
  double t1322;
  double t531;
  double t5128;
  double t5913;
  double t7722;
  double t7911;
  double t7922;
  double t7923;
  double t1330;
  double t7742;
  double t7955;
  double t7965;
  double t7977;
  double t7978;
  double t7980;
  double t7982;
  double t7983;
  double t7984;
  double t8006;
  double t8007;
  double t8009;
  double t8021;
  double t8022;
  double t8024;
  double t8025;
  double t8030;
  double t8031;
  double t1306;
  double t1323;
  double t1325;
  double t1334;
  double t1335;
  double t1336;
  double t7976;
  double t7990;
  double t7991;
  double t7997;
  double t7998;
  double t8001;
  double t8011;
  double t8035;
  double t8037;
  double t8039;
  double t8042;
  double t8043;
  t1257 = Cos(var1[5]);
  t1286 = Sin(var1[3]);
  t1247 = Cos(var1[3]);
  t1272 = Sin(var1[4]);
  t1287 = Sin(var1[5]);
  t1293 = Sin(var1[13]);
  t1284 = t1247*t1257*t1272;
  t1288 = t1286*t1287;
  t1289 = t1284 + t1288;
  t1246 = Cos(var1[13]);
  t1298 = -1.*t1257*t1286;
  t1299 = t1247*t1272*t1287;
  t1300 = t1298 + t1299;
  t1310 = Cos(var1[15]);
  t1290 = t1246*t1289;
  t1302 = -1.*t1293*t1300;
  t1305 = t1290 + t1302;
  t553 = Sin(var1[15]);
  t1311 = Cos(var1[14]);
  t1312 = Cos(var1[4]);
  t1313 = t1311*t1247*t1312;
  t1314 = Sin(var1[14]);
  t1315 = t1293*t1289;
  t1317 = t1246*t1300;
  t1318 = t1315 + t1317;
  t1321 = t1314*t1318;
  t1322 = t1313 + t1321;
  t531 = Sin(var1[16]);
  t5128 = t1257*t1286*t1272;
  t5913 = -1.*t1247*t1287;
  t7722 = t5128 + t5913;
  t7911 = t1247*t1257;
  t7922 = t1286*t1272*t1287;
  t7923 = t7911 + t7922;
  t1330 = Cos(var1[16]);
  t7742 = t1246*t7722;
  t7955 = -1.*t1293*t7923;
  t7965 = t7742 + t7955;
  t7977 = t1311*t1312*t1286;
  t7978 = t1293*t7722;
  t7980 = t1246*t7923;
  t7982 = t7978 + t7980;
  t7983 = t1314*t7982;
  t7984 = t7977 + t7983;
  t8006 = t1246*t1312*t1257;
  t8007 = -1.*t1312*t1293*t1287;
  t8009 = t8006 + t8007;
  t8021 = -1.*t1311*t1272;
  t8022 = t1312*t1257*t1293;
  t8024 = t1246*t1312*t1287;
  t8025 = t8022 + t8024;
  t8030 = t1314*t8025;
  t8031 = t8021 + t8030;
  t1306 = t553*t1305;
  t1323 = t1310*t1322;
  t1325 = t1306 + t1323;
  t1334 = t1310*t1305;
  t1335 = -1.*t553*t1322;
  t1336 = t1334 + t1335;
  t7976 = t553*t7965;
  t7990 = t1310*t7984;
  t7991 = t7976 + t7990;
  t7997 = t1310*t7965;
  t7998 = -1.*t553*t7984;
  t8001 = t7997 + t7998;
  t8011 = t553*t8009;
  t8035 = t1310*t8031;
  t8037 = t8011 + t8035;
  t8039 = t1310*t8009;
  t8042 = -1.*t553*t8031;
  t8043 = t8039 + t8042;
  p_output1[0]=-1.*t1330*t1336 + t1325*t531;
  p_output1[1]=t531*t7991 - 1.*t1330*t8001;
  p_output1[2]=t531*t8037 - 1.*t1330*t8043;
  p_output1[3]=t1325*t1330 + t1336*t531;
  p_output1[4]=t1330*t7991 + t531*t8001;
  p_output1[5]=t1330*t8037 + t531*t8043;
  p_output1[6]=t1247*t1312*t1314 - 1.*t1311*t1318;
  p_output1[7]=t1286*t1312*t1314 - 1.*t1311*t7982;
  p_output1[8]=-1.*t1272*t1314 - 1.*t1311*t8025;
}



void R_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
