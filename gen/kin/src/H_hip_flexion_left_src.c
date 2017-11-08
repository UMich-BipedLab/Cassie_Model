/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:00 GMT-05:00
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
  double t1296;
  double t1327;
  double t1294;
  double t1300;
  double t1331;
  double t1290;
  double t1358;
  double t1400;
  double t1351;
  double t1352;
  double t1355;
  double t1326;
  double t1340;
  double t1343;
  double t1414;
  double t1386;
  double t1389;
  double t1391;
  double t1369;
  double t1370;
  double t1380;
  double t1421;
  double t1418;
  double t1419;
  double t1420;
  double t1438;
  double t1447;
  double t1448;
  double t1457;
  double t1461;
  double t1467;
  double t1534;
  double t1540;
  double t1417;
  double t1425;
  double t1426;
  double t1506;
  double t1507;
  double t1511;
  double t1513;
  double t1517;
  double t1521;
  double t1545;
  double t1550;
  double t1552;
  double t1555;
  double t1556;
  double t1557;
  double t1431;
  double t1449;
  double t1450;
  double t1454;
  double t1468;
  double t1471;
  t1296 = Cos(var1[5]);
  t1327 = Sin(var1[3]);
  t1294 = Cos(var1[3]);
  t1300 = Sin(var1[4]);
  t1331 = Sin(var1[5]);
  t1290 = Cos(var1[6]);
  t1358 = Sin(var1[6]);
  t1400 = Cos(var1[4]);
  t1351 = -1.*t1296*t1327;
  t1352 = t1294*t1300*t1331;
  t1355 = t1351 + t1352;
  t1326 = t1294*t1296*t1300;
  t1340 = t1327*t1331;
  t1343 = t1326 + t1340;
  t1414 = Cos(var1[7]);
  t1386 = t1294*t1296;
  t1389 = t1327*t1300*t1331;
  t1391 = t1386 + t1389;
  t1369 = t1296*t1327*t1300;
  t1370 = -1.*t1294*t1331;
  t1380 = t1369 + t1370;
  t1421 = Sin(var1[7]);
  t1418 = t1290*t1355;
  t1419 = t1343*t1358;
  t1420 = t1418 + t1419;
  t1438 = t1290*t1391;
  t1447 = t1380*t1358;
  t1448 = t1438 + t1447;
  t1457 = t1400*t1290*t1331;
  t1461 = t1400*t1296*t1358;
  t1467 = t1457 + t1461;
  t1534 = -1.*t1414;
  t1540 = 1. + t1534;
  t1417 = t1294*t1400*t1414;
  t1425 = t1420*t1421;
  t1426 = t1417 + t1425;
  t1506 = -1.*t1290;
  t1507 = 1. + t1506;
  t1511 = 0.135*t1507;
  t1513 = 0. + t1511;
  t1517 = -0.135*t1358;
  t1521 = 0. + t1517;
  t1545 = 0.135*t1540;
  t1550 = 0.049*t1421;
  t1552 = 0. + t1545 + t1550;
  t1555 = -0.049*t1540;
  t1556 = 0.135*t1421;
  t1557 = 0. + t1555 + t1556;
  t1431 = t1400*t1414*t1327;
  t1449 = t1448*t1421;
  t1450 = t1431 + t1449;
  t1454 = -1.*t1414*t1300;
  t1468 = t1467*t1421;
  t1471 = t1454 + t1468;
  p_output1[0]=-1.*t1290*t1343 + t1355*t1358;
  p_output1[1]=-1.*t1290*t1380 + t1358*t1391;
  p_output1[2]=-1.*t1290*t1296*t1400 + t1331*t1358*t1400;
  p_output1[3]=0.;
  p_output1[4]=t1426;
  p_output1[5]=t1450;
  p_output1[6]=t1471;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1414*t1420 + t1294*t1400*t1421;
  p_output1[9]=t1327*t1400*t1421 - 1.*t1414*t1448;
  p_output1[10]=-1.*t1300*t1421 - 1.*t1414*t1467;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t1290*t1343 - 1.*t1355*t1358) + 0.135*(t1414*t1420 - 1.*t1294*t1400*t1421) - 0.049*t1426 + t1355*t1513 + t1343*t1521 + t1420*t1552 + t1294*t1400*t1557 + var1[0];
  p_output1[13]=0. - 0.09*(t1290*t1380 - 1.*t1358*t1391) + 0.135*(-1.*t1327*t1400*t1421 + t1414*t1448) - 0.049*t1450 + t1391*t1513 + t1380*t1521 + t1448*t1552 + t1327*t1400*t1557 + var1[1];
  p_output1[14]=0. - 0.09*(t1290*t1296*t1400 - 1.*t1331*t1358*t1400) + 0.135*(t1300*t1421 + t1414*t1467) - 0.049*t1471 + t1331*t1400*t1513 + t1296*t1400*t1521 + t1467*t1552 - 1.*t1300*t1557 + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
