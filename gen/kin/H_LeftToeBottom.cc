/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:48 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1197;
  double t1188;
  double t1208;
  double t1191;
  double t1209;
  double t1182;
  double t1245;
  double t1246;
  double t1249;
  double t1193;
  double t1210;
  double t1228;
  double t1250;
  double t1129;
  double t1134;
  double t1319;
  double t1320;
  double t1323;
  double t1307;
  double t1311;
  double t1314;
  double t1281;
  double t1290;
  double t1291;
  double t1268;
  double t1276;
  double t1279;
  double t1238;
  double t1252;
  double t1264;
  double t1267;
  double t1284;
  double t1287;
  double t1407;
  double t1394;
  double t1395;
  double t1396;
  double t1390;
  double t1409;
  double t1410;
  double t1411;
  double t1416;
  double t1399;
  double t1412;
  double t1414;
  double t1389;
  double t1417;
  double t1418;
  double t1420;
  double t1430;
  double t1415;
  double t1423;
  double t1427;
  double t1388;
  double t1434;
  double t1436;
  double t1437;
  double t1443;
  double t1429;
  double t1438;
  double t1439;
  double t1383;
  double t1445;
  double t1446;
  double t1447;
  double t1451;
  double t1440;
  double t1448;
  double t1449;
  double t1382;
  double t1452;
  double t1453;
  double t1454;
  double t1334;
  double t1335;
  double t1336;
  double t1315;
  double t1326;
  double t1330;
  double t1332;
  double t1338;
  double t1343;
  double t1466;
  double t1467;
  double t1469;
  double t1471;
  double t1473;
  double t1474;
  double t1470;
  double t1475;
  double t1476;
  double t1479;
  double t1480;
  double t1481;
  double t1478;
  double t1482;
  double t1483;
  double t1485;
  double t1487;
  double t1488;
  double t1484;
  double t1489;
  double t1491;
  double t1494;
  double t1495;
  double t1497;
  double t1492;
  double t1498;
  double t1499;
  double t1501;
  double t1503;
  double t1504;
  double t1361;
  double t1362;
  double t1364;
  double t1354;
  double t1355;
  double t1358;
  double t1359;
  double t1366;
  double t1367;
  double t1517;
  double t1519;
  double t1520;
  double t1522;
  double t1523;
  double t1524;
  double t1521;
  double t1525;
  double t1526;
  double t1528;
  double t1529;
  double t1530;
  double t1527;
  double t1531;
  double t1532;
  double t1535;
  double t1537;
  double t1538;
  double t1534;
  double t1539;
  double t1541;
  double t1543;
  double t1544;
  double t1545;
  double t1542;
  double t1546;
  double t1547;
  double t1549;
  double t1550;
  double t1551;
  double t1450;
  double t1455;
  double t1456;
  double t1459;
  double t1461;
  double t1462;
  double t1500;
  double t1505;
  double t1507;
  double t1510;
  double t1511;
  double t1513;
  double t1548;
  double t1553;
  double t1555;
  double t1557;
  double t1559;
  double t1560;
  double t1602;
  double t1603;
  double t1596;
  double t1597;
  double t1620;
  double t1621;
  double t1630;
  double t1631;
  double t1640;
  double t1641;
  double t1650;
  double t1651;
  double t1576;
  double t1578;
  double t1579;
  double t1581;
  double t1584;
  double t1585;
  double t1588;
  double t1589;
  double t1590;
  double t1591;
  double t1593;
  double t1594;
  double t1598;
  double t1599;
  double t1600;
  double t1604;
  double t1605;
  double t1606;
  double t1608;
  double t1609;
  double t1610;
  double t1616;
  double t1617;
  double t1618;
  double t1622;
  double t1623;
  double t1624;
  double t1626;
  double t1627;
  double t1628;
  double t1632;
  double t1633;
  double t1634;
  double t1636;
  double t1637;
  double t1638;
  double t1642;
  double t1643;
  double t1644;
  double t1646;
  double t1647;
  double t1648;
  double t1652;
  double t1653;
  double t1654;
  double t1656;
  double t1657;
  double t1658;
  t1197 = Cos(var1[3]);
  t1188 = Cos(var1[5]);
  t1208 = Sin(var1[4]);
  t1191 = Sin(var1[3]);
  t1209 = Sin(var1[5]);
  t1182 = Cos(var1[6]);
  t1245 = t1197*t1188*t1208;
  t1246 = t1191*t1209;
  t1249 = t1245 + t1246;
  t1193 = -1.*t1188*t1191;
  t1210 = t1197*t1208*t1209;
  t1228 = t1193 + t1210;
  t1250 = Sin(var1[6]);
  t1129 = Cos(var1[8]);
  t1134 = Cos(var1[7]);
  t1319 = t1188*t1191*t1208;
  t1320 = -1.*t1197*t1209;
  t1323 = t1319 + t1320;
  t1307 = t1197*t1188;
  t1311 = t1191*t1208*t1209;
  t1314 = t1307 + t1311;
  t1281 = Sin(var1[7]);
  t1290 = Cos(var1[4]);
  t1291 = Sin(var1[8]);
  t1268 = t1182*t1249;
  t1276 = -1.*t1228*t1250;
  t1279 = t1268 + t1276;
  t1238 = t1182*t1228;
  t1252 = t1249*t1250;
  t1264 = t1238 + t1252;
  t1267 = t1134*t1264;
  t1284 = t1279*t1281;
  t1287 = t1267 + t1284;
  t1407 = Cos(var1[9]);
  t1394 = t1134*t1279;
  t1395 = -1.*t1264*t1281;
  t1396 = t1394 + t1395;
  t1390 = Sin(var1[9]);
  t1409 = t1197*t1290*t1129;
  t1410 = t1287*t1291;
  t1411 = t1409 + t1410;
  t1416 = Cos(var1[10]);
  t1399 = t1390*t1396;
  t1412 = t1407*t1411;
  t1414 = t1399 + t1412;
  t1389 = Sin(var1[10]);
  t1417 = t1407*t1396;
  t1418 = -1.*t1390*t1411;
  t1420 = t1417 + t1418;
  t1430 = Cos(var1[11]);
  t1415 = -1.*t1389*t1414;
  t1423 = t1416*t1420;
  t1427 = t1415 + t1423;
  t1388 = Sin(var1[11]);
  t1434 = t1416*t1414;
  t1436 = t1389*t1420;
  t1437 = t1434 + t1436;
  t1443 = Cos(var1[12]);
  t1429 = t1388*t1427;
  t1438 = t1430*t1437;
  t1439 = t1429 + t1438;
  t1383 = Sin(var1[12]);
  t1445 = t1430*t1427;
  t1446 = -1.*t1388*t1437;
  t1447 = t1445 + t1446;
  t1451 = Cos(var1[13]);
  t1440 = -1.*t1383*t1439;
  t1448 = t1443*t1447;
  t1449 = t1440 + t1448;
  t1382 = Sin(var1[13]);
  t1452 = t1443*t1439;
  t1453 = t1383*t1447;
  t1454 = t1452 + t1453;
  t1334 = t1182*t1323;
  t1335 = -1.*t1314*t1250;
  t1336 = t1334 + t1335;
  t1315 = t1182*t1314;
  t1326 = t1323*t1250;
  t1330 = t1315 + t1326;
  t1332 = t1134*t1330;
  t1338 = t1336*t1281;
  t1343 = t1332 + t1338;
  t1466 = t1134*t1336;
  t1467 = -1.*t1330*t1281;
  t1469 = t1466 + t1467;
  t1471 = t1290*t1129*t1191;
  t1473 = t1343*t1291;
  t1474 = t1471 + t1473;
  t1470 = t1390*t1469;
  t1475 = t1407*t1474;
  t1476 = t1470 + t1475;
  t1479 = t1407*t1469;
  t1480 = -1.*t1390*t1474;
  t1481 = t1479 + t1480;
  t1478 = -1.*t1389*t1476;
  t1482 = t1416*t1481;
  t1483 = t1478 + t1482;
  t1485 = t1416*t1476;
  t1487 = t1389*t1481;
  t1488 = t1485 + t1487;
  t1484 = t1388*t1483;
  t1489 = t1430*t1488;
  t1491 = t1484 + t1489;
  t1494 = t1430*t1483;
  t1495 = -1.*t1388*t1488;
  t1497 = t1494 + t1495;
  t1492 = -1.*t1383*t1491;
  t1498 = t1443*t1497;
  t1499 = t1492 + t1498;
  t1501 = t1443*t1491;
  t1503 = t1383*t1497;
  t1504 = t1501 + t1503;
  t1361 = t1290*t1188*t1182;
  t1362 = -1.*t1290*t1209*t1250;
  t1364 = t1361 + t1362;
  t1354 = t1290*t1182*t1209;
  t1355 = t1290*t1188*t1250;
  t1358 = t1354 + t1355;
  t1359 = t1134*t1358;
  t1366 = t1364*t1281;
  t1367 = t1359 + t1366;
  t1517 = t1134*t1364;
  t1519 = -1.*t1358*t1281;
  t1520 = t1517 + t1519;
  t1522 = -1.*t1129*t1208;
  t1523 = t1367*t1291;
  t1524 = t1522 + t1523;
  t1521 = t1390*t1520;
  t1525 = t1407*t1524;
  t1526 = t1521 + t1525;
  t1528 = t1407*t1520;
  t1529 = -1.*t1390*t1524;
  t1530 = t1528 + t1529;
  t1527 = -1.*t1389*t1526;
  t1531 = t1416*t1530;
  t1532 = t1527 + t1531;
  t1535 = t1416*t1526;
  t1537 = t1389*t1530;
  t1538 = t1535 + t1537;
  t1534 = t1388*t1532;
  t1539 = t1430*t1538;
  t1541 = t1534 + t1539;
  t1543 = t1430*t1532;
  t1544 = -1.*t1388*t1538;
  t1545 = t1543 + t1544;
  t1542 = -1.*t1383*t1541;
  t1546 = t1443*t1545;
  t1547 = t1542 + t1546;
  t1549 = t1443*t1541;
  t1550 = t1383*t1545;
  t1551 = t1549 + t1550;
  t1450 = t1382*t1449;
  t1455 = t1451*t1454;
  t1456 = t1450 + t1455;
  t1459 = t1451*t1449;
  t1461 = -1.*t1382*t1454;
  t1462 = t1459 + t1461;
  t1500 = t1382*t1499;
  t1505 = t1451*t1504;
  t1507 = t1500 + t1505;
  t1510 = t1451*t1499;
  t1511 = -1.*t1382*t1504;
  t1513 = t1510 + t1511;
  t1548 = t1382*t1547;
  t1553 = t1451*t1551;
  t1555 = t1548 + t1553;
  t1557 = t1451*t1547;
  t1559 = -1.*t1382*t1551;
  t1560 = t1557 + t1559;
  t1602 = -1.*t1129;
  t1603 = 1. + t1602;
  t1596 = -1.*t1407;
  t1597 = 1. + t1596;
  t1620 = -1.*t1416;
  t1621 = 1. + t1620;
  t1630 = -1.*t1430;
  t1631 = 1. + t1630;
  t1640 = -1.*t1443;
  t1641 = 1. + t1640;
  t1650 = -1.*t1451;
  t1651 = 1. + t1650;
  t1576 = -1.*t1182;
  t1578 = 1. + t1576;
  t1579 = 0.135*t1578;
  t1581 = 0. + t1579;
  t1584 = -0.135*t1250;
  t1585 = 0. + t1584;
  t1588 = -1.*t1134;
  t1589 = 1. + t1588;
  t1590 = 0.135*t1589;
  t1591 = 0. + t1590;
  t1593 = -0.135*t1281;
  t1594 = 0. + t1593;
  t1598 = -0.09*t1597;
  t1599 = 0.049*t1390;
  t1600 = 0. + t1598 + t1599;
  t1604 = 0.135*t1603;
  t1605 = 0.049*t1291;
  t1606 = 0. + t1604 + t1605;
  t1608 = -0.049*t1603;
  t1609 = 0.135*t1291;
  t1610 = 0. + t1608 + t1609;
  t1616 = -0.049*t1597;
  t1617 = -0.09*t1390;
  t1618 = 0. + t1616 + t1617;
  t1622 = -0.049*t1621;
  t1623 = -0.21*t1389;
  t1624 = 0. + t1622 + t1623;
  t1626 = -0.21*t1621;
  t1627 = 0.049*t1389;
  t1628 = 0. + t1626 + t1627;
  t1632 = -0.2707*t1631;
  t1633 = 0.0016*t1388;
  t1634 = 0. + t1632 + t1633;
  t1636 = -0.0016*t1631;
  t1637 = -0.2707*t1388;
  t1638 = 0. + t1636 + t1637;
  t1642 = 0.0184*t1641;
  t1643 = -0.7055*t1383;
  t1644 = 0. + t1642 + t1643;
  t1646 = -0.7055*t1641;
  t1647 = -0.0184*t1383;
  t1648 = 0. + t1646 + t1647;
  t1652 = -1.1135*t1651;
  t1653 = 0.0216*t1382;
  t1654 = 0. + t1652 + t1653;
  t1656 = -0.0216*t1651;
  t1657 = -1.1135*t1382;
  t1658 = 0. + t1656 + t1657;
  p_output1[0]=-1.*t1129*t1287 + t1197*t1290*t1291;
  p_output1[1]=t1191*t1290*t1291 - 1.*t1129*t1343;
  p_output1[2]=-1.*t1208*t1291 - 1.*t1129*t1367;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1456 + 0.766044*t1462;
  p_output1[5]=0.642788*t1507 + 0.766044*t1513;
  p_output1[6]=0.642788*t1555 + 0.766044*t1560;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1456 + 0.642788*t1462;
  p_output1[9]=-0.766044*t1507 + 0.642788*t1513;
  p_output1[10]=-0.766044*t1555 + 0.642788*t1560;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1129*t1287 - 1.*t1197*t1290*t1291) + 0.0306*t1456 - 1.1312*t1462 + t1228*t1581 + t1249*t1585 + t1264*t1591 + t1279*t1594 + t1396*t1600 + t1287*t1606 + t1197*t1290*t1610 + t1411*t1618 + t1414*t1624 + t1420*t1628 + t1427*t1634 + t1437*t1638 + t1439*t1644 + t1447*t1648 + t1449*t1654 + t1454*t1658 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1191*t1290*t1291 + t1129*t1343) + 0.0306*t1507 - 1.1312*t1513 + t1314*t1581 + t1323*t1585 + t1330*t1591 + t1336*t1594 + t1469*t1600 + t1343*t1606 + t1191*t1290*t1610 + t1474*t1618 + t1476*t1624 + t1481*t1628 + t1483*t1634 + t1488*t1638 + t1491*t1644 + t1497*t1648 + t1499*t1654 + t1504*t1658 + var1[1];
  p_output1[14]=0. + 0.1305*(t1208*t1291 + t1129*t1367) + 0.0306*t1555 - 1.1312*t1560 + t1209*t1290*t1581 + t1188*t1290*t1585 + t1358*t1591 + t1364*t1594 + t1520*t1600 + t1367*t1606 - 1.*t1208*t1610 + t1524*t1618 + t1526*t1624 + t1530*t1628 + t1532*t1634 + t1538*t1638 + t1541*t1644 + t1545*t1648 + t1547*t1654 + t1551*t1658 + var1[2];
  p_output1[15]=1.;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_LeftToeBottom.hh"

namespace SymExpression
{

void H_LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
