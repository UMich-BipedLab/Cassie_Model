/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:06 GMT-05:00
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
  double t1352;
  double t1348;
  double t1353;
  double t1349;
  double t1354;
  double t1320;
  double t1351;
  double t1355;
  double t1362;
  double t1365;
  double t1366;
  double t1368;
  double t1369;
  double t1377;
  double t1382;
  double t1384;
  double t1386;
  double t1374;
  double t1375;
  double t1376;
  double t1391;
  double t1408;
  double t1411;
  double t1412;
  double t1414;
  double t1405;
  double t1406;
  double t1407;
  double t1418;
  double t1419;
  double t1420;
  double t1427;
  double t1428;
  double t1429;
  double t1432;
  double t1435;
  double t1436;
  double t1437;
  double t1444;
  double t1445;
  double t1446;
  double t1327;
  double t1343;
  double t1346;
  double t1347;
  double t1371;
  double t1372;
  double t1460;
  double t1461;
  double t1462;
  double t1464;
  double t1465;
  double t1466;
  double t1385;
  double t1387;
  double t1389;
  double t1392;
  double t1393;
  double t1397;
  double t1468;
  double t1469;
  double t1470;
  double t1413;
  double t1415;
  double t1416;
  double t1421;
  double t1422;
  double t1424;
  double t1430;
  double t1433;
  double t1434;
  double t1480;
  double t1481;
  double t1482;
  double t1485;
  double t1486;
  double t1489;
  double t1439;
  double t1441;
  double t1442;
  double t1491;
  double t1492;
  double t1493;
  double t1495;
  double t1496;
  double t1497;
  double t1510;
  double t1511;
  double t1512;
  double t1519;
  double t1520;
  double t1521;
  double t1523;
  double t1524;
  double t1525;
  double t1527;
  double t1528;
  double t1529;
  double t1531;
  double t1532;
  double t1533;
  t1352 = Cos(var1[3]);
  t1348 = Cos(var1[5]);
  t1353 = Sin(var1[4]);
  t1349 = Sin(var1[3]);
  t1354 = Sin(var1[5]);
  t1320 = Cos(var1[6]);
  t1351 = -1.*t1348*t1349;
  t1355 = t1352*t1353*t1354;
  t1362 = t1351 + t1355;
  t1365 = t1352*t1348*t1353;
  t1366 = t1349*t1354;
  t1368 = t1365 + t1366;
  t1369 = Sin(var1[6]);
  t1377 = Cos(var1[7]);
  t1382 = -1.*t1377;
  t1384 = 1. + t1382;
  t1386 = Sin(var1[7]);
  t1374 = t1320*t1362;
  t1375 = t1368*t1369;
  t1376 = t1374 + t1375;
  t1391 = Cos(var1[4]);
  t1408 = Cos(var1[8]);
  t1411 = -1.*t1408;
  t1412 = 1. + t1411;
  t1414 = Sin(var1[8]);
  t1405 = t1352*t1391*t1377;
  t1406 = t1376*t1386;
  t1407 = t1405 + t1406;
  t1418 = t1320*t1368;
  t1419 = -1.*t1362*t1369;
  t1420 = t1418 + t1419;
  t1427 = Cos(var1[9]);
  t1428 = -1.*t1427;
  t1429 = 1. + t1428;
  t1432 = Sin(var1[9]);
  t1435 = t1408*t1407;
  t1436 = t1420*t1414;
  t1437 = t1435 + t1436;
  t1444 = t1408*t1420;
  t1445 = -1.*t1407*t1414;
  t1446 = t1444 + t1445;
  t1327 = -1.*t1320;
  t1343 = 1. + t1327;
  t1346 = 0.135*t1343;
  t1347 = 0. + t1346;
  t1371 = -0.135*t1369;
  t1372 = 0. + t1371;
  t1460 = t1352*t1348;
  t1461 = t1349*t1353*t1354;
  t1462 = t1460 + t1461;
  t1464 = t1348*t1349*t1353;
  t1465 = -1.*t1352*t1354;
  t1466 = t1464 + t1465;
  t1385 = 0.135*t1384;
  t1387 = 0.049*t1386;
  t1389 = 0. + t1385 + t1387;
  t1392 = -0.049*t1384;
  t1393 = 0.135*t1386;
  t1397 = 0. + t1392 + t1393;
  t1468 = t1320*t1462;
  t1469 = t1466*t1369;
  t1470 = t1468 + t1469;
  t1413 = -0.049*t1412;
  t1415 = -0.09*t1414;
  t1416 = 0. + t1413 + t1415;
  t1421 = -0.09*t1412;
  t1422 = 0.049*t1414;
  t1424 = 0. + t1421 + t1422;
  t1430 = -0.049*t1429;
  t1433 = -0.21*t1432;
  t1434 = 0. + t1430 + t1433;
  t1480 = t1391*t1377*t1349;
  t1481 = t1470*t1386;
  t1482 = t1480 + t1481;
  t1485 = t1320*t1466;
  t1486 = -1.*t1462*t1369;
  t1489 = t1485 + t1486;
  t1439 = -0.21*t1429;
  t1441 = 0.049*t1432;
  t1442 = 0. + t1439 + t1441;
  t1491 = t1408*t1482;
  t1492 = t1489*t1414;
  t1493 = t1491 + t1492;
  t1495 = t1408*t1489;
  t1496 = -1.*t1482*t1414;
  t1497 = t1495 + t1496;
  t1510 = t1391*t1320*t1354;
  t1511 = t1391*t1348*t1369;
  t1512 = t1510 + t1511;
  t1519 = -1.*t1377*t1353;
  t1520 = t1512*t1386;
  t1521 = t1519 + t1520;
  t1523 = t1391*t1348*t1320;
  t1524 = -1.*t1391*t1354*t1369;
  t1525 = t1523 + t1524;
  t1527 = t1408*t1521;
  t1528 = t1525*t1414;
  t1529 = t1527 + t1528;
  t1531 = t1408*t1525;
  t1532 = -1.*t1521*t1414;
  t1533 = t1531 + t1532;
  p_output1[0]=0. + t1347*t1362 + t1368*t1372 + t1376*t1389 + 0.1305*(t1376*t1377 - 1.*t1352*t1386*t1391) + t1352*t1391*t1397 + t1407*t1416 + t1420*t1424 + t1434*t1437 + t1442*t1446 - 0.21*(-1.*t1432*t1437 + t1427*t1446) - 0.049*(t1427*t1437 + t1432*t1446) + var1[0];
  p_output1[1]=0. + t1349*t1391*t1397 + t1347*t1462 + t1372*t1466 + t1389*t1470 + 0.1305*(-1.*t1349*t1386*t1391 + t1377*t1470) + t1416*t1482 + t1424*t1489 + t1434*t1493 + t1442*t1497 - 0.21*(-1.*t1432*t1493 + t1427*t1497) - 0.049*(t1427*t1493 + t1432*t1497) + var1[1];
  p_output1[2]=0. + t1347*t1354*t1391 + t1348*t1372*t1391 - 1.*t1353*t1397 + t1389*t1512 + 0.1305*(t1353*t1386 + t1377*t1512) + t1416*t1521 + t1424*t1525 + t1434*t1529 + t1442*t1533 - 0.21*(-1.*t1432*t1529 + t1427*t1533) - 0.049*(t1427*t1529 + t1432*t1533) + var1[2];
}



void p_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
