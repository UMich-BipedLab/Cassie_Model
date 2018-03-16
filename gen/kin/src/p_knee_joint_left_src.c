/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_left_src.h"

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
  double t1316;
  double t1312;
  double t1317;
  double t1313;
  double t1318;
  double t1284;
  double t1315;
  double t1319;
  double t1326;
  double t1329;
  double t1330;
  double t1332;
  double t1333;
  double t1341;
  double t1346;
  double t1348;
  double t1350;
  double t1338;
  double t1339;
  double t1340;
  double t1355;
  double t1372;
  double t1375;
  double t1376;
  double t1378;
  double t1369;
  double t1370;
  double t1371;
  double t1382;
  double t1383;
  double t1384;
  double t1391;
  double t1392;
  double t1393;
  double t1396;
  double t1399;
  double t1400;
  double t1401;
  double t1408;
  double t1409;
  double t1410;
  double t1291;
  double t1307;
  double t1310;
  double t1311;
  double t1335;
  double t1336;
  double t1424;
  double t1425;
  double t1426;
  double t1428;
  double t1429;
  double t1430;
  double t1349;
  double t1351;
  double t1353;
  double t1356;
  double t1357;
  double t1361;
  double t1432;
  double t1433;
  double t1434;
  double t1377;
  double t1379;
  double t1380;
  double t1385;
  double t1386;
  double t1388;
  double t1394;
  double t1397;
  double t1398;
  double t1444;
  double t1445;
  double t1446;
  double t1449;
  double t1450;
  double t1453;
  double t1403;
  double t1405;
  double t1406;
  double t1455;
  double t1456;
  double t1457;
  double t1459;
  double t1460;
  double t1461;
  double t1474;
  double t1475;
  double t1476;
  double t1483;
  double t1484;
  double t1485;
  double t1487;
  double t1488;
  double t1489;
  double t1491;
  double t1492;
  double t1493;
  double t1495;
  double t1496;
  double t1497;
  t1316 = Cos(var1[3]);
  t1312 = Cos(var1[5]);
  t1317 = Sin(var1[4]);
  t1313 = Sin(var1[3]);
  t1318 = Sin(var1[5]);
  t1284 = Cos(var1[6]);
  t1315 = -1.*t1312*t1313;
  t1319 = t1316*t1317*t1318;
  t1326 = t1315 + t1319;
  t1329 = t1316*t1312*t1317;
  t1330 = t1313*t1318;
  t1332 = t1329 + t1330;
  t1333 = Sin(var1[6]);
  t1341 = Cos(var1[7]);
  t1346 = -1.*t1341;
  t1348 = 1. + t1346;
  t1350 = Sin(var1[7]);
  t1338 = t1284*t1326;
  t1339 = t1332*t1333;
  t1340 = t1338 + t1339;
  t1355 = Cos(var1[4]);
  t1372 = Cos(var1[8]);
  t1375 = -1.*t1372;
  t1376 = 1. + t1375;
  t1378 = Sin(var1[8]);
  t1369 = t1316*t1355*t1341;
  t1370 = t1340*t1350;
  t1371 = t1369 + t1370;
  t1382 = t1284*t1332;
  t1383 = -1.*t1326*t1333;
  t1384 = t1382 + t1383;
  t1391 = Cos(var1[9]);
  t1392 = -1.*t1391;
  t1393 = 1. + t1392;
  t1396 = Sin(var1[9]);
  t1399 = t1372*t1371;
  t1400 = t1384*t1378;
  t1401 = t1399 + t1400;
  t1408 = t1372*t1384;
  t1409 = -1.*t1371*t1378;
  t1410 = t1408 + t1409;
  t1291 = -1.*t1284;
  t1307 = 1. + t1291;
  t1310 = 0.135*t1307;
  t1311 = 0. + t1310;
  t1335 = -0.135*t1333;
  t1336 = 0. + t1335;
  t1424 = t1316*t1312;
  t1425 = t1313*t1317*t1318;
  t1426 = t1424 + t1425;
  t1428 = t1312*t1313*t1317;
  t1429 = -1.*t1316*t1318;
  t1430 = t1428 + t1429;
  t1349 = 0.135*t1348;
  t1351 = 0.049*t1350;
  t1353 = 0. + t1349 + t1351;
  t1356 = -0.049*t1348;
  t1357 = 0.135*t1350;
  t1361 = 0. + t1356 + t1357;
  t1432 = t1284*t1426;
  t1433 = t1430*t1333;
  t1434 = t1432 + t1433;
  t1377 = -0.049*t1376;
  t1379 = -0.09*t1378;
  t1380 = 0. + t1377 + t1379;
  t1385 = -0.09*t1376;
  t1386 = 0.049*t1378;
  t1388 = 0. + t1385 + t1386;
  t1394 = -0.049*t1393;
  t1397 = -0.21*t1396;
  t1398 = 0. + t1394 + t1397;
  t1444 = t1355*t1341*t1313;
  t1445 = t1434*t1350;
  t1446 = t1444 + t1445;
  t1449 = t1284*t1430;
  t1450 = -1.*t1426*t1333;
  t1453 = t1449 + t1450;
  t1403 = -0.21*t1393;
  t1405 = 0.049*t1396;
  t1406 = 0. + t1403 + t1405;
  t1455 = t1372*t1446;
  t1456 = t1453*t1378;
  t1457 = t1455 + t1456;
  t1459 = t1372*t1453;
  t1460 = -1.*t1446*t1378;
  t1461 = t1459 + t1460;
  t1474 = t1355*t1284*t1318;
  t1475 = t1355*t1312*t1333;
  t1476 = t1474 + t1475;
  t1483 = -1.*t1341*t1317;
  t1484 = t1476*t1350;
  t1485 = t1483 + t1484;
  t1487 = t1355*t1312*t1284;
  t1488 = -1.*t1355*t1318*t1333;
  t1489 = t1487 + t1488;
  t1491 = t1372*t1485;
  t1492 = t1489*t1378;
  t1493 = t1491 + t1492;
  t1495 = t1372*t1489;
  t1496 = -1.*t1485*t1378;
  t1497 = t1495 + t1496;
  p_output1[0]=0. + t1311*t1326 + t1332*t1336 + t1340*t1353 + 0.1305*(t1340*t1341 - 1.*t1316*t1350*t1355) + t1316*t1355*t1361 + t1371*t1380 + t1384*t1388 + t1398*t1401 + t1406*t1410 - 0.21*(-1.*t1396*t1401 + t1391*t1410) - 0.049*(t1391*t1401 + t1396*t1410) + var1[0];
  p_output1[1]=0. + t1313*t1355*t1361 + t1311*t1426 + t1336*t1430 + t1353*t1434 + 0.1305*(-1.*t1313*t1350*t1355 + t1341*t1434) + t1380*t1446 + t1388*t1453 + t1398*t1457 + t1406*t1461 - 0.21*(-1.*t1396*t1457 + t1391*t1461) - 0.049*(t1391*t1457 + t1396*t1461) + var1[1];
  p_output1[2]=0. + t1311*t1318*t1355 + t1312*t1336*t1355 - 1.*t1317*t1361 + t1353*t1476 + 0.1305*(t1317*t1350 + t1341*t1476) + t1380*t1485 + t1388*t1489 + t1398*t1493 + t1406*t1497 - 0.21*(-1.*t1396*t1493 + t1391*t1497) - 0.049*(t1391*t1493 + t1396*t1497) + var1[2];
}



void p_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
