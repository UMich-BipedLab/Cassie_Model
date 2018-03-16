/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom_src.h"

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
  double t927;
  double t1230;
  double t1222;
  double t1224;
  double t1244;
  double t1265;
  double t1227;
  double t1248;
  double t1252;
  double t1203;
  double t1269;
  double t1270;
  double t1280;
  double t1334;
  double t1262;
  double t1289;
  double t1298;
  double t1188;
  double t1337;
  double t1340;
  double t1341;
  double t1362;
  double t1301;
  double t1343;
  double t1344;
  double t1177;
  double t1365;
  double t1369;
  double t1370;
  double t914;
  double t733;
  double t1081;
  double t1400;
  double t1401;
  double t1402;
  double t1416;
  double t1418;
  double t1420;
  double t1405;
  double t1423;
  double t1424;
  double t1428;
  double t1433;
  double t1443;
  double t1426;
  double t1446;
  double t1450;
  double t1452;
  double t1453;
  double t1454;
  double t1451;
  double t1456;
  double t1457;
  double t1459;
  double t1464;
  double t1465;
  double t1478;
  double t1479;
  double t1480;
  double t1482;
  double t1483;
  double t1485;
  double t1481;
  double t1488;
  double t1491;
  double t1493;
  double t1495;
  double t1496;
  double t1492;
  double t1499;
  double t1500;
  double t1502;
  double t1503;
  double t1504;
  double t1501;
  double t1505;
  double t1506;
  double t1508;
  double t1509;
  double t1511;
  double t1350;
  double t1372;
  double t1375;
  double t1384;
  double t1385;
  double t1387;
  double t1458;
  double t1467;
  double t1471;
  double t1473;
  double t1474;
  double t1475;
  double t1507;
  double t1512;
  double t1513;
  double t1516;
  double t1518;
  double t1521;
  t927 = Cos(var1[1]);
  t1230 = Cos(var1[3]);
  t1222 = Cos(var1[2]);
  t1224 = Sin(var1[3]);
  t1244 = Sin(var1[2]);
  t1265 = Cos(var1[4]);
  t1227 = -1.*t927*t1222*t1224;
  t1248 = -1.*t1230*t927*t1244;
  t1252 = t1227 + t1248;
  t1203 = Sin(var1[4]);
  t1269 = t1230*t927*t1222;
  t1270 = -1.*t927*t1224*t1244;
  t1280 = t1269 + t1270;
  t1334 = Cos(var1[5]);
  t1262 = t1203*t1252;
  t1289 = t1265*t1280;
  t1298 = t1262 + t1289;
  t1188 = Sin(var1[5]);
  t1337 = t1265*t1252;
  t1340 = -1.*t1203*t1280;
  t1341 = t1337 + t1340;
  t1362 = Cos(var1[6]);
  t1301 = -1.*t1188*t1298;
  t1343 = t1334*t1341;
  t1344 = t1301 + t1343;
  t1177 = Sin(var1[6]);
  t1365 = t1334*t1298;
  t1369 = t1188*t1341;
  t1370 = t1365 + t1369;
  t914 = Cos(var1[0]);
  t733 = Sin(var1[1]);
  t1081 = Sin(var1[0]);
  t1400 = t914*t1222*t733;
  t1401 = -1.*t1081*t1244;
  t1402 = t1400 + t1401;
  t1416 = -1.*t1222*t1081;
  t1418 = -1.*t914*t733*t1244;
  t1420 = t1416 + t1418;
  t1405 = -1.*t1224*t1402;
  t1423 = t1230*t1420;
  t1424 = t1405 + t1423;
  t1428 = t1230*t1402;
  t1433 = t1224*t1420;
  t1443 = t1428 + t1433;
  t1426 = t1203*t1424;
  t1446 = t1265*t1443;
  t1450 = t1426 + t1446;
  t1452 = t1265*t1424;
  t1453 = -1.*t1203*t1443;
  t1454 = t1452 + t1453;
  t1451 = -1.*t1188*t1450;
  t1456 = t1334*t1454;
  t1457 = t1451 + t1456;
  t1459 = t1334*t1450;
  t1464 = t1188*t1454;
  t1465 = t1459 + t1464;
  t1478 = t1222*t1081*t733;
  t1479 = t914*t1244;
  t1480 = t1478 + t1479;
  t1482 = t914*t1222;
  t1483 = -1.*t1081*t733*t1244;
  t1485 = t1482 + t1483;
  t1481 = -1.*t1224*t1480;
  t1488 = t1230*t1485;
  t1491 = t1481 + t1488;
  t1493 = t1230*t1480;
  t1495 = t1224*t1485;
  t1496 = t1493 + t1495;
  t1492 = t1203*t1491;
  t1499 = t1265*t1496;
  t1500 = t1492 + t1499;
  t1502 = t1265*t1491;
  t1503 = -1.*t1203*t1496;
  t1504 = t1502 + t1503;
  t1501 = -1.*t1188*t1500;
  t1505 = t1334*t1504;
  t1506 = t1501 + t1505;
  t1508 = t1334*t1500;
  t1509 = t1188*t1504;
  t1511 = t1508 + t1509;
  t1350 = t1177*t1344;
  t1372 = t1362*t1370;
  t1375 = t1350 + t1372;
  t1384 = t1362*t1344;
  t1385 = -1.*t1177*t1370;
  t1387 = t1384 + t1385;
  t1458 = t1177*t1457;
  t1467 = t1362*t1465;
  t1471 = t1458 + t1467;
  t1473 = t1362*t1457;
  t1474 = -1.*t1177*t1465;
  t1475 = t1473 + t1474;
  t1507 = t1177*t1506;
  t1512 = t1362*t1511;
  t1513 = t1507 + t1512;
  t1516 = t1362*t1506;
  t1518 = -1.*t1177*t1511;
  t1521 = t1516 + t1518;
  p_output1[0]=0. + t733;
  p_output1[1]=0. + t914*t927;
  p_output1[2]=0. + t1081*t927;
  p_output1[3]=0. + 0.642788*t1375 + 0.766044*t1387;
  p_output1[4]=0. - 0.642788*t1471 - 0.766044*t1475;
  p_output1[5]=0. - 0.642788*t1513 - 0.766044*t1521;
  p_output1[6]=0. - 0.766044*t1375 + 0.642788*t1387;
  p_output1[7]=0. + 0.766044*t1471 - 0.642788*t1475;
  p_output1[8]=0. + 0.766044*t1513 - 0.642788*t1521;
}



void R_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
