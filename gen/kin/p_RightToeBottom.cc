/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:49 GMT-04:00
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
  double t1210;
  double t1307;
  double t1319;
  double t1311;
  double t1323;
  double t1289;
  double t1315;
  double t1326;
  double t1332;
  double t1336;
  double t1354;
  double t1355;
  double t1359;
  double t1410;
  double t1394;
  double t1396;
  double t1399;
  double t1364;
  double t1420;
  double t1423;
  double t1427;
  double t1245;
  double t1246;
  double t1249;
  double t1267;
  double t1238;
  double t1462;
  double t1463;
  double t1464;
  double t1434;
  double t1436;
  double t1438;
  double t1447;
  double t1450;
  double t1452;
  double t1453;
  double t1482;
  double t1483;
  double t1484;
  double t1487;
  double t1489;
  double t1494;
  double t1498;
  double t1501;
  double t1503;
  double t1505;
  double t1515;
  double t1516;
  double t1517;
  double t1521;
  double t1523;
  double t1525;
  double t1530;
  double t1534;
  double t1535;
  double t1537;
  double t1547;
  double t1548;
  double t1549;
  double t1553;
  double t1555;
  double t1556;
  double t1560;
  double t1565;
  double t1566;
  double t1567;
  double t1573;
  double t1575;
  double t1579;
  double t1583;
  double t1584;
  double t1585;
  double t1590;
  double t1593;
  double t1594;
  double t1595;
  double t1604;
  double t1605;
  double t1606;
  double t1252;
  double t1268;
  double t1279;
  double t1304;
  double t1306;
  double t1338;
  double t1350;
  double t1352;
  double t1353;
  double t1366;
  double t1371;
  double t1376;
  double t1379;
  double t1619;
  double t1622;
  double t1623;
  double t1625;
  double t1626;
  double t1627;
  double t1412;
  double t1417;
  double t1445;
  double t1448;
  double t1449;
  double t1629;
  double t1632;
  double t1633;
  double t1635;
  double t1636;
  double t1637;
  double t1456;
  double t1458;
  double t1459;
  double t1645;
  double t1646;
  double t1647;
  double t1475;
  double t1479;
  double t1481;
  double t1497;
  double t1499;
  double t1500;
  double t1639;
  double t1642;
  double t1643;
  double t1655;
  double t1656;
  double t1657;
  double t1508;
  double t1510;
  double t1513;
  double t1528;
  double t1531;
  double t1532;
  double t1659;
  double t1660;
  double t1661;
  double t1663;
  double t1664;
  double t1665;
  double t1543;
  double t1545;
  double t1546;
  double t1557;
  double t1562;
  double t1563;
  double t1667;
  double t1668;
  double t1669;
  double t1671;
  double t1672;
  double t1673;
  double t1569;
  double t1571;
  double t1572;
  double t1587;
  double t1591;
  double t1592;
  double t1675;
  double t1676;
  double t1677;
  double t1679;
  double t1680;
  double t1681;
  double t1599;
  double t1600;
  double t1601;
  double t1683;
  double t1684;
  double t1685;
  double t1687;
  double t1688;
  double t1689;
  double t1703;
  double t1704;
  double t1705;
  double t1707;
  double t1708;
  double t1709;
  double t1715;
  double t1716;
  double t1717;
  double t1711;
  double t1712;
  double t1713;
  double t1723;
  double t1724;
  double t1725;
  double t1727;
  double t1728;
  double t1729;
  double t1731;
  double t1732;
  double t1733;
  double t1735;
  double t1736;
  double t1737;
  double t1739;
  double t1740;
  double t1741;
  double t1743;
  double t1744;
  double t1745;
  double t1747;
  double t1748;
  double t1749;
  double t1751;
  double t1752;
  double t1753;
  double t1755;
  double t1756;
  double t1757;
  t1210 = Cos(var1[3]);
  t1307 = Cos(var1[5]);
  t1319 = Sin(var1[3]);
  t1311 = Sin(var1[4]);
  t1323 = Sin(var1[5]);
  t1289 = Sin(var1[14]);
  t1315 = t1210*t1307*t1311;
  t1326 = t1319*t1323;
  t1332 = t1315 + t1326;
  t1336 = Cos(var1[14]);
  t1354 = -1.*t1307*t1319;
  t1355 = t1210*t1311*t1323;
  t1359 = t1354 + t1355;
  t1410 = Sin(var1[15]);
  t1394 = t1289*t1332;
  t1396 = t1336*t1359;
  t1399 = t1394 + t1396;
  t1364 = Cos(var1[15]);
  t1420 = t1336*t1332;
  t1423 = -1.*t1289*t1359;
  t1427 = t1420 + t1423;
  t1245 = Cos(var1[16]);
  t1246 = -1.*t1245;
  t1249 = 1. + t1246;
  t1267 = Sin(var1[16]);
  t1238 = Cos(var1[4]);
  t1462 = t1364*t1399;
  t1463 = t1410*t1427;
  t1464 = t1462 + t1463;
  t1434 = Cos(var1[17]);
  t1436 = -1.*t1434;
  t1438 = 1. + t1436;
  t1447 = Sin(var1[17]);
  t1450 = -1.*t1410*t1399;
  t1452 = t1364*t1427;
  t1453 = t1450 + t1452;
  t1482 = t1245*t1210*t1238;
  t1483 = t1267*t1464;
  t1484 = t1482 + t1483;
  t1487 = Cos(var1[18]);
  t1489 = -1.*t1487;
  t1494 = 1. + t1489;
  t1498 = Sin(var1[18]);
  t1501 = t1447*t1453;
  t1503 = t1434*t1484;
  t1505 = t1501 + t1503;
  t1515 = t1434*t1453;
  t1516 = -1.*t1447*t1484;
  t1517 = t1515 + t1516;
  t1521 = Cos(var1[19]);
  t1523 = -1.*t1521;
  t1525 = 1. + t1523;
  t1530 = Sin(var1[19]);
  t1534 = -1.*t1498*t1505;
  t1535 = t1487*t1517;
  t1537 = t1534 + t1535;
  t1547 = t1487*t1505;
  t1548 = t1498*t1517;
  t1549 = t1547 + t1548;
  t1553 = Cos(var1[20]);
  t1555 = -1.*t1553;
  t1556 = 1. + t1555;
  t1560 = Sin(var1[20]);
  t1565 = t1530*t1537;
  t1566 = t1521*t1549;
  t1567 = t1565 + t1566;
  t1573 = t1521*t1537;
  t1575 = -1.*t1530*t1549;
  t1579 = t1573 + t1575;
  t1583 = Cos(var1[21]);
  t1584 = -1.*t1583;
  t1585 = 1. + t1584;
  t1590 = Sin(var1[21]);
  t1593 = -1.*t1560*t1567;
  t1594 = t1553*t1579;
  t1595 = t1593 + t1594;
  t1604 = t1553*t1567;
  t1605 = t1560*t1579;
  t1606 = t1604 + t1605;
  t1252 = -0.049*t1249;
  t1268 = -0.135*t1267;
  t1279 = 0. + t1252 + t1268;
  t1304 = 0.135*t1289;
  t1306 = 0. + t1304;
  t1338 = -1.*t1336;
  t1350 = 1. + t1338;
  t1352 = -0.135*t1350;
  t1353 = 0. + t1352;
  t1366 = -1.*t1364;
  t1371 = 1. + t1366;
  t1376 = -0.135*t1371;
  t1379 = 0. + t1376;
  t1619 = t1307*t1319*t1311;
  t1622 = -1.*t1210*t1323;
  t1623 = t1619 + t1622;
  t1625 = t1210*t1307;
  t1626 = t1319*t1311*t1323;
  t1627 = t1625 + t1626;
  t1412 = 0.135*t1410;
  t1417 = 0. + t1412;
  t1445 = -0.09*t1438;
  t1448 = 0.049*t1447;
  t1449 = 0. + t1445 + t1448;
  t1629 = t1289*t1623;
  t1632 = t1336*t1627;
  t1633 = t1629 + t1632;
  t1635 = t1336*t1623;
  t1636 = -1.*t1289*t1627;
  t1637 = t1635 + t1636;
  t1456 = -0.135*t1249;
  t1458 = 0.049*t1267;
  t1459 = 0. + t1456 + t1458;
  t1645 = t1364*t1633;
  t1646 = t1410*t1637;
  t1647 = t1645 + t1646;
  t1475 = -0.049*t1438;
  t1479 = -0.09*t1447;
  t1481 = 0. + t1475 + t1479;
  t1497 = -0.049*t1494;
  t1499 = -0.21*t1498;
  t1500 = 0. + t1497 + t1499;
  t1639 = -1.*t1410*t1633;
  t1642 = t1364*t1637;
  t1643 = t1639 + t1642;
  t1655 = t1245*t1238*t1319;
  t1656 = t1267*t1647;
  t1657 = t1655 + t1656;
  t1508 = -0.21*t1494;
  t1510 = 0.049*t1498;
  t1513 = 0. + t1508 + t1510;
  t1528 = -0.2707*t1525;
  t1531 = 0.0016*t1530;
  t1532 = 0. + t1528 + t1531;
  t1659 = t1447*t1643;
  t1660 = t1434*t1657;
  t1661 = t1659 + t1660;
  t1663 = t1434*t1643;
  t1664 = -1.*t1447*t1657;
  t1665 = t1663 + t1664;
  t1543 = -0.0016*t1525;
  t1545 = -0.2707*t1530;
  t1546 = 0. + t1543 + t1545;
  t1557 = 0.0184*t1556;
  t1562 = -0.7055*t1560;
  t1563 = 0. + t1557 + t1562;
  t1667 = -1.*t1498*t1661;
  t1668 = t1487*t1665;
  t1669 = t1667 + t1668;
  t1671 = t1487*t1661;
  t1672 = t1498*t1665;
  t1673 = t1671 + t1672;
  t1569 = -0.7055*t1556;
  t1571 = -0.0184*t1560;
  t1572 = 0. + t1569 + t1571;
  t1587 = -1.1135*t1585;
  t1591 = 0.0216*t1590;
  t1592 = 0. + t1587 + t1591;
  t1675 = t1530*t1669;
  t1676 = t1521*t1673;
  t1677 = t1675 + t1676;
  t1679 = t1521*t1669;
  t1680 = -1.*t1530*t1673;
  t1681 = t1679 + t1680;
  t1599 = -0.0216*t1585;
  t1600 = -1.1135*t1590;
  t1601 = 0. + t1599 + t1600;
  t1683 = -1.*t1560*t1677;
  t1684 = t1553*t1681;
  t1685 = t1683 + t1684;
  t1687 = t1553*t1677;
  t1688 = t1560*t1681;
  t1689 = t1687 + t1688;
  t1703 = t1238*t1307*t1289;
  t1704 = t1336*t1238*t1323;
  t1705 = t1703 + t1704;
  t1707 = t1336*t1238*t1307;
  t1708 = -1.*t1238*t1289*t1323;
  t1709 = t1707 + t1708;
  t1715 = t1364*t1705;
  t1716 = t1410*t1709;
  t1717 = t1715 + t1716;
  t1711 = -1.*t1410*t1705;
  t1712 = t1364*t1709;
  t1713 = t1711 + t1712;
  t1723 = -1.*t1245*t1311;
  t1724 = t1267*t1717;
  t1725 = t1723 + t1724;
  t1727 = t1447*t1713;
  t1728 = t1434*t1725;
  t1729 = t1727 + t1728;
  t1731 = t1434*t1713;
  t1732 = -1.*t1447*t1725;
  t1733 = t1731 + t1732;
  t1735 = -1.*t1498*t1729;
  t1736 = t1487*t1733;
  t1737 = t1735 + t1736;
  t1739 = t1487*t1729;
  t1740 = t1498*t1733;
  t1741 = t1739 + t1740;
  t1743 = t1530*t1737;
  t1744 = t1521*t1741;
  t1745 = t1743 + t1744;
  t1747 = t1521*t1737;
  t1748 = -1.*t1530*t1741;
  t1749 = t1747 + t1748;
  t1751 = -1.*t1560*t1745;
  t1752 = t1553*t1749;
  t1753 = t1751 + t1752;
  t1755 = t1553*t1745;
  t1756 = t1560*t1749;
  t1757 = t1755 + t1756;
  p_output1[0]=0. + t1210*t1238*t1279 + t1306*t1332 + t1353*t1359 + t1379*t1399 + t1417*t1427 + t1449*t1453 + t1459*t1464 - 0.1305*(-1.*t1210*t1238*t1267 + t1245*t1464) + t1481*t1484 + t1500*t1505 + t1513*t1517 + t1532*t1537 + t1546*t1549 + t1563*t1567 + t1572*t1579 + t1592*t1595 + t1601*t1606 + 0.0306*(t1590*t1595 + t1583*t1606) - 1.1312*(t1583*t1595 - 1.*t1590*t1606) + var1[0];
  p_output1[1]=0. + t1238*t1279*t1319 + t1306*t1623 + t1353*t1627 + t1379*t1633 + t1417*t1637 + t1449*t1643 + t1459*t1647 - 0.1305*(-1.*t1238*t1267*t1319 + t1245*t1647) + t1481*t1657 + t1500*t1661 + t1513*t1665 + t1532*t1669 + t1546*t1673 + t1563*t1677 + t1572*t1681 + t1592*t1685 + t1601*t1689 + 0.0306*(t1590*t1685 + t1583*t1689) - 1.1312*(t1583*t1685 - 1.*t1590*t1689) + var1[1];
  p_output1[2]=0. + t1238*t1306*t1307 - 1.*t1279*t1311 + t1238*t1323*t1353 + t1379*t1705 + t1417*t1709 + t1449*t1713 + t1459*t1717 - 0.1305*(t1267*t1311 + t1245*t1717) + t1481*t1725 + t1500*t1729 + t1513*t1733 + t1532*t1737 + t1546*t1741 + t1563*t1745 + t1572*t1749 + t1592*t1753 + t1601*t1757 + 0.0306*(t1590*t1753 + t1583*t1757) - 1.1312*(t1583*t1753 - 1.*t1590*t1757) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_RightToeBottom.hh"

namespace SymExpression
{

void p_RightToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
