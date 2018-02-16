/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:11 GMT-05:00
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
  double t1356;
  double t1364;
  double t1365;
  double t1354;
  double t1366;
  double t1328;
  double t1363;
  double t1368;
  double t1380;
  double t1384;
  double t1385;
  double t1388;
  double t1389;
  double t1405;
  double t1414;
  double t1418;
  double t1420;
  double t1400;
  double t1402;
  double t1403;
  double t1425;
  double t1453;
  double t1456;
  double t1458;
  double t1462;
  double t1445;
  double t1447;
  double t1449;
  double t1466;
  double t1467;
  double t1468;
  double t1475;
  double t1476;
  double t1477;
  double t1480;
  double t1484;
  double t1486;
  double t1487;
  double t1498;
  double t1499;
  double t1500;
  double t1329;
  double t1339;
  double t1351;
  double t1353;
  double t1397;
  double t1398;
  double t1514;
  double t1515;
  double t1516;
  double t1518;
  double t1519;
  double t1520;
  double t1419;
  double t1421;
  double t1423;
  double t1427;
  double t1428;
  double t1433;
  double t1522;
  double t1523;
  double t1524;
  double t1459;
  double t1463;
  double t1464;
  double t1469;
  double t1470;
  double t1472;
  double t1478;
  double t1481;
  double t1482;
  double t1534;
  double t1535;
  double t1536;
  double t1539;
  double t1540;
  double t1543;
  double t1490;
  double t1492;
  double t1494;
  double t1545;
  double t1546;
  double t1547;
  double t1549;
  double t1550;
  double t1551;
  double t1564;
  double t1565;
  double t1566;
  double t1573;
  double t1574;
  double t1575;
  double t1577;
  double t1578;
  double t1579;
  double t1581;
  double t1582;
  double t1583;
  double t1585;
  double t1586;
  double t1587;
  double t1600;
  double t1601;
  double t1602;
  double t1609;
  double t1610;
  double t1611;
  double t1613;
  double t1614;
  double t1615;
  double t1617;
  double t1618;
  double t1619;
  double t1621;
  double t1622;
  double t1623;
  double t1636;
  double t1637;
  double t1638;
  double t1645;
  double t1646;
  double t1647;
  double t1649;
  double t1650;
  double t1651;
  double t1653;
  double t1654;
  double t1655;
  double t1657;
  double t1658;
  double t1659;
  double t1671;
  double t1672;
  double t1673;
  double t1675;
  double t1676;
  double t1680;
  double t1681;
  double t1682;
  double t1684;
  double t1685;
  double t1686;
  double t1688;
  double t1689;
  double t1690;
  double t1701;
  double t1702;
  double t1703;
  double t1706;
  double t1707;
  double t1708;
  double t1712;
  double t1713;
  double t1715;
  double t1716;
  double t1717;
  double t1719;
  double t1720;
  double t1721;
  double t1734;
  double t1735;
  double t1736;
  double t1740;
  double t1741;
  double t1742;
  double t1744;
  double t1745;
  double t1746;
  double t1748;
  double t1749;
  double t1750;
  double t1766;
  double t1767;
  double t1769;
  double t1770;
  double t1771;
  double t1773;
  double t1774;
  double t1775;
  double t1787;
  double t1788;
  double t1789;
  double t1791;
  double t1792;
  double t1796;
  double t1797;
  double t1799;
  double t1800;
  double t1801;
  double t1803;
  double t1804;
  double t1805;
  double t1737;
  double t1738;
  double t1739;
  double t1743;
  double t1747;
  double t1751;
  double t1752;
  double t1753;
  double t1754;
  double t1755;
  double t1756;
  double t1757;
  double t1758;
  double t1759;
  double t1527;
  double t1529;
  double t1531;
  double t1819;
  double t1820;
  double t1821;
  double t1823;
  double t1824;
  double t1843;
  double t1844;
  double t1845;
  double t1847;
  double t1848;
  double t1849;
  double t1866;
  double t1867;
  double t1868;
  double t1870;
  double t1871;
  double t1872;
  double t1896;
  double t1897;
  double t1898;
  double t1554;
  double t1889;
  double t1890;
  double t1892;
  double t1893;
  double t1894;
  double t1910;
  double t1911;
  double t1912;
  double t1914;
  double t1915;
  double t1916;
  double t1918;
  double t1919;
  double t1920;
  double t1932;
  double t1933;
  double t1934;
  double t1936;
  double t1937;
  double t1938;
  double t1940;
  double t1941;
  double t1942;
  double t1553;
  double t1555;
  double t1905;
  double t1953;
  double t1954;
  double t1955;
  double t1957;
  double t1958;
  double t1965;
  double t1966;
  double t1967;
  double t1923;
  double t1927;
  double t1977;
  double t1978;
  double t1979;
  double t1945;
  double t1949;
  t1356 = Cos(var1[5]);
  t1364 = Sin(var1[3]);
  t1365 = Sin(var1[4]);
  t1354 = Cos(var1[3]);
  t1366 = Sin(var1[5]);
  t1328 = Cos(var1[6]);
  t1363 = -1.*t1354*t1356;
  t1368 = -1.*t1364*t1365*t1366;
  t1380 = t1363 + t1368;
  t1384 = -1.*t1356*t1364*t1365;
  t1385 = t1354*t1366;
  t1388 = t1384 + t1385;
  t1389 = Sin(var1[6]);
  t1405 = Cos(var1[7]);
  t1414 = -1.*t1405;
  t1418 = 1. + t1414;
  t1420 = Sin(var1[7]);
  t1400 = t1328*t1380;
  t1402 = t1388*t1389;
  t1403 = t1400 + t1402;
  t1425 = Cos(var1[4]);
  t1453 = Cos(var1[8]);
  t1456 = -1.*t1453;
  t1458 = 1. + t1456;
  t1462 = Sin(var1[8]);
  t1445 = -1.*t1425*t1405*t1364;
  t1447 = t1403*t1420;
  t1449 = t1445 + t1447;
  t1466 = t1328*t1388;
  t1467 = -1.*t1380*t1389;
  t1468 = t1466 + t1467;
  t1475 = Cos(var1[9]);
  t1476 = -1.*t1475;
  t1477 = 1. + t1476;
  t1480 = Sin(var1[9]);
  t1484 = t1453*t1449;
  t1486 = t1468*t1462;
  t1487 = t1484 + t1486;
  t1498 = t1453*t1468;
  t1499 = -1.*t1449*t1462;
  t1500 = t1498 + t1499;
  t1329 = -1.*t1328;
  t1339 = 1. + t1329;
  t1351 = 0.135*t1339;
  t1353 = 0. + t1351;
  t1397 = -0.135*t1389;
  t1398 = 0. + t1397;
  t1514 = -1.*t1356*t1364;
  t1515 = t1354*t1365*t1366;
  t1516 = t1514 + t1515;
  t1518 = t1354*t1356*t1365;
  t1519 = t1364*t1366;
  t1520 = t1518 + t1519;
  t1419 = 0.135*t1418;
  t1421 = 0.049*t1420;
  t1423 = 0. + t1419 + t1421;
  t1427 = -0.049*t1418;
  t1428 = 0.135*t1420;
  t1433 = 0. + t1427 + t1428;
  t1522 = t1328*t1516;
  t1523 = t1520*t1389;
  t1524 = t1522 + t1523;
  t1459 = -0.049*t1458;
  t1463 = -0.09*t1462;
  t1464 = 0. + t1459 + t1463;
  t1469 = -0.09*t1458;
  t1470 = 0.049*t1462;
  t1472 = 0. + t1469 + t1470;
  t1478 = -0.049*t1477;
  t1481 = -0.21*t1480;
  t1482 = 0. + t1478 + t1481;
  t1534 = t1354*t1425*t1405;
  t1535 = t1524*t1420;
  t1536 = t1534 + t1535;
  t1539 = t1328*t1520;
  t1540 = -1.*t1516*t1389;
  t1543 = t1539 + t1540;
  t1490 = -0.21*t1477;
  t1492 = 0.049*t1480;
  t1494 = 0. + t1490 + t1492;
  t1545 = t1453*t1536;
  t1546 = t1543*t1462;
  t1547 = t1545 + t1546;
  t1549 = t1453*t1543;
  t1550 = -1.*t1536*t1462;
  t1551 = t1549 + t1550;
  t1564 = t1354*t1425*t1328*t1366;
  t1565 = t1354*t1425*t1356*t1389;
  t1566 = t1564 + t1565;
  t1573 = -1.*t1354*t1405*t1365;
  t1574 = t1566*t1420;
  t1575 = t1573 + t1574;
  t1577 = t1354*t1425*t1356*t1328;
  t1578 = -1.*t1354*t1425*t1366*t1389;
  t1579 = t1577 + t1578;
  t1581 = t1453*t1575;
  t1582 = t1579*t1462;
  t1583 = t1581 + t1582;
  t1585 = t1453*t1579;
  t1586 = -1.*t1575*t1462;
  t1587 = t1585 + t1586;
  t1600 = t1425*t1328*t1364*t1366;
  t1601 = t1425*t1356*t1364*t1389;
  t1602 = t1600 + t1601;
  t1609 = -1.*t1405*t1364*t1365;
  t1610 = t1602*t1420;
  t1611 = t1609 + t1610;
  t1613 = t1425*t1356*t1328*t1364;
  t1614 = -1.*t1425*t1364*t1366*t1389;
  t1615 = t1613 + t1614;
  t1617 = t1453*t1611;
  t1618 = t1615*t1462;
  t1619 = t1617 + t1618;
  t1621 = t1453*t1615;
  t1622 = -1.*t1611*t1462;
  t1623 = t1621 + t1622;
  t1636 = -1.*t1328*t1365*t1366;
  t1637 = -1.*t1356*t1365*t1389;
  t1638 = t1636 + t1637;
  t1645 = -1.*t1425*t1405;
  t1646 = t1638*t1420;
  t1647 = t1645 + t1646;
  t1649 = -1.*t1356*t1328*t1365;
  t1650 = t1365*t1366*t1389;
  t1651 = t1649 + t1650;
  t1653 = t1453*t1647;
  t1654 = t1651*t1462;
  t1655 = t1653 + t1654;
  t1657 = t1453*t1651;
  t1658 = -1.*t1647*t1462;
  t1659 = t1657 + t1658;
  t1671 = t1356*t1364;
  t1672 = -1.*t1354*t1365*t1366;
  t1673 = t1671 + t1672;
  t1675 = t1673*t1389;
  t1676 = t1539 + t1675;
  t1680 = t1328*t1673;
  t1681 = -1.*t1520*t1389;
  t1682 = t1680 + t1681;
  t1684 = t1453*t1676*t1420;
  t1685 = t1682*t1462;
  t1686 = t1684 + t1685;
  t1688 = t1453*t1682;
  t1689 = -1.*t1676*t1420*t1462;
  t1690 = t1688 + t1689;
  t1701 = t1356*t1364*t1365;
  t1702 = -1.*t1354*t1366;
  t1703 = t1701 + t1702;
  t1706 = t1328*t1703;
  t1707 = t1380*t1389;
  t1708 = t1706 + t1707;
  t1712 = -1.*t1703*t1389;
  t1713 = t1400 + t1712;
  t1715 = t1453*t1708*t1420;
  t1716 = t1713*t1462;
  t1717 = t1715 + t1716;
  t1719 = t1453*t1713;
  t1720 = -1.*t1708*t1420*t1462;
  t1721 = t1719 + t1720;
  t1734 = t1425*t1356*t1328;
  t1735 = -1.*t1425*t1366*t1389;
  t1736 = t1734 + t1735;
  t1740 = -1.*t1425*t1328*t1366;
  t1741 = -1.*t1425*t1356*t1389;
  t1742 = t1740 + t1741;
  t1744 = t1453*t1736*t1420;
  t1745 = t1742*t1462;
  t1746 = t1744 + t1745;
  t1748 = t1453*t1742;
  t1749 = -1.*t1736*t1420*t1462;
  t1750 = t1748 + t1749;
  t1766 = -1.*t1328*t1516;
  t1767 = t1766 + t1681;
  t1769 = t1453*t1543*t1420;
  t1770 = t1767*t1462;
  t1771 = t1769 + t1770;
  t1773 = t1453*t1767;
  t1774 = -1.*t1543*t1420*t1462;
  t1775 = t1773 + t1774;
  t1787 = t1354*t1356;
  t1788 = t1364*t1365*t1366;
  t1789 = t1787 + t1788;
  t1791 = -1.*t1789*t1389;
  t1792 = t1706 + t1791;
  t1796 = -1.*t1328*t1789;
  t1797 = t1796 + t1712;
  t1799 = t1453*t1792*t1420;
  t1800 = t1797*t1462;
  t1801 = t1799 + t1800;
  t1803 = t1453*t1797;
  t1804 = -1.*t1792*t1420*t1462;
  t1805 = t1803 + t1804;
  t1737 = 0.1305*t1405*t1736;
  t1738 = t1736*t1423;
  t1739 = t1736*t1420*t1464;
  t1743 = t1742*t1472;
  t1747 = t1482*t1746;
  t1751 = t1494*t1750;
  t1752 = -1.*t1480*t1746;
  t1753 = t1475*t1750;
  t1754 = t1752 + t1753;
  t1755 = -0.21*t1754;
  t1756 = t1475*t1746;
  t1757 = t1480*t1750;
  t1758 = t1756 + t1757;
  t1759 = -0.049*t1758;
  t1527 = t1405*t1524;
  t1529 = -1.*t1354*t1425*t1420;
  t1531 = t1527 + t1529;
  t1819 = 0.135*t1405;
  t1820 = -0.049*t1420;
  t1821 = t1819 + t1820;
  t1823 = 0.049*t1405;
  t1824 = t1823 + t1428;
  t1843 = t1328*t1789;
  t1844 = t1703*t1389;
  t1845 = t1843 + t1844;
  t1847 = t1405*t1845;
  t1848 = -1.*t1425*t1364*t1420;
  t1849 = t1847 + t1848;
  t1866 = t1425*t1328*t1366;
  t1867 = t1425*t1356*t1389;
  t1868 = t1866 + t1867;
  t1870 = t1405*t1868;
  t1871 = t1365*t1420;
  t1872 = t1870 + t1871;
  t1896 = -1.*t1453*t1536;
  t1897 = -1.*t1543*t1462;
  t1898 = t1896 + t1897;
  t1554 = t1475*t1551;
  t1889 = 0.049*t1453;
  t1890 = t1889 + t1463;
  t1892 = -0.09*t1453;
  t1893 = -0.049*t1462;
  t1894 = t1892 + t1893;
  t1910 = t1425*t1405*t1364;
  t1911 = t1845*t1420;
  t1912 = t1910 + t1911;
  t1914 = -1.*t1453*t1912;
  t1915 = -1.*t1792*t1462;
  t1916 = t1914 + t1915;
  t1918 = t1453*t1792;
  t1919 = -1.*t1912*t1462;
  t1920 = t1918 + t1919;
  t1932 = -1.*t1405*t1365;
  t1933 = t1868*t1420;
  t1934 = t1932 + t1933;
  t1936 = -1.*t1453*t1934;
  t1937 = -1.*t1736*t1462;
  t1938 = t1936 + t1937;
  t1940 = t1453*t1736;
  t1941 = -1.*t1934*t1462;
  t1942 = t1940 + t1941;
  t1553 = -1.*t1480*t1547;
  t1555 = t1553 + t1554;
  t1905 = -1.*t1480*t1551;
  t1953 = -0.21*t1475;
  t1954 = -0.049*t1480;
  t1955 = t1953 + t1954;
  t1957 = 0.049*t1475;
  t1958 = t1957 + t1481;
  t1965 = t1453*t1912;
  t1966 = t1792*t1462;
  t1967 = t1965 + t1966;
  t1923 = t1475*t1920;
  t1927 = -1.*t1480*t1920;
  t1977 = t1453*t1934;
  t1978 = t1736*t1462;
  t1979 = t1977 + t1978;
  t1945 = t1475*t1942;
  t1949 = -1.*t1480*t1942;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1353*t1380 + t1388*t1398 + t1403*t1423 + 0.1305*(t1403*t1405 + t1364*t1420*t1425) - 1.*t1364*t1425*t1433 + t1449*t1464 + t1468*t1472 + t1482*t1487 + t1494*t1500 - 0.21*(-1.*t1480*t1487 + t1475*t1500) - 0.049*(t1475*t1487 + t1480*t1500);
  p_output1[10]=t1354*t1425*t1433 + t1353*t1516 + t1398*t1520 + t1423*t1524 + 0.1305*t1531 + t1464*t1536 + t1472*t1543 + t1482*t1547 + t1494*t1551 - 0.049*(t1475*t1547 + t1480*t1551) - 0.21*t1555;
  p_output1[11]=0;
  p_output1[12]=t1353*t1354*t1366*t1425 + t1354*t1356*t1398*t1425 - 1.*t1354*t1365*t1433 + t1423*t1566 + 0.1305*(t1354*t1365*t1420 + t1405*t1566) + t1464*t1575 + t1472*t1579 + t1482*t1583 + t1494*t1587 - 0.21*(-1.*t1480*t1583 + t1475*t1587) - 0.049*(t1475*t1583 + t1480*t1587);
  p_output1[13]=t1353*t1364*t1366*t1425 + t1356*t1364*t1398*t1425 - 1.*t1364*t1365*t1433 + t1423*t1602 + 0.1305*(t1364*t1365*t1420 + t1405*t1602) + t1464*t1611 + t1472*t1615 + t1482*t1619 + t1494*t1623 - 0.21*(-1.*t1480*t1619 + t1475*t1623) - 0.049*(t1475*t1619 + t1480*t1623);
  p_output1[14]=-1.*t1353*t1365*t1366 - 1.*t1356*t1365*t1398 - 1.*t1425*t1433 + t1423*t1638 + 0.1305*(t1420*t1425 + t1405*t1638) + t1464*t1647 + t1472*t1651 + t1482*t1655 + t1494*t1659 - 0.21*(-1.*t1480*t1655 + t1475*t1659) - 0.049*(t1475*t1655 + t1480*t1659);
  p_output1[15]=t1353*t1520 + t1398*t1673 + 0.1305*t1405*t1676 + t1423*t1676 + t1420*t1464*t1676 + t1472*t1682 + t1482*t1686 + t1494*t1690 - 0.21*(-1.*t1480*t1686 + t1475*t1690) - 0.049*(t1475*t1686 + t1480*t1690);
  p_output1[16]=t1380*t1398 + t1353*t1703 + 0.1305*t1405*t1708 + t1423*t1708 + t1420*t1464*t1708 + t1472*t1713 + t1482*t1717 + t1494*t1721 - 0.21*(-1.*t1480*t1717 + t1475*t1721) - 0.049*(t1475*t1717 + t1480*t1721);
  p_output1[17]=t1353*t1356*t1425 - 1.*t1366*t1398*t1425 + t1737 + t1738 + t1739 + t1743 + t1747 + t1751 + t1755 + t1759;
  p_output1[18]=0.135*t1389*t1516 - 0.135*t1328*t1520 + 0.1305*t1405*t1543 + t1423*t1543 + t1420*t1464*t1543 + t1472*t1767 + t1482*t1771 + t1494*t1775 - 0.21*(-1.*t1480*t1771 + t1475*t1775) - 0.049*(t1475*t1771 + t1480*t1775);
  p_output1[19]=-0.135*t1328*t1703 + 0.135*t1389*t1789 + 0.1305*t1405*t1792 + t1423*t1792 + t1420*t1464*t1792 + t1472*t1797 + t1482*t1801 + t1494*t1805 - 0.21*(-1.*t1480*t1801 + t1475*t1805) - 0.049*(t1475*t1801 + t1480*t1805);
  p_output1[20]=-0.135*t1328*t1356*t1425 + 0.135*t1366*t1389*t1425 + t1737 + t1738 + t1739 + t1743 + t1747 + t1751 + t1755 + t1759;
  p_output1[21]=0.1305*(-1.*t1354*t1405*t1425 - 1.*t1420*t1524) + t1464*t1531 + t1453*t1482*t1531 - 1.*t1462*t1494*t1531 - 0.21*(-1.*t1462*t1475*t1531 - 1.*t1453*t1480*t1531) - 0.049*(t1453*t1475*t1531 - 1.*t1462*t1480*t1531) + t1354*t1425*t1821 + t1524*t1824;
  p_output1[22]=t1364*t1425*t1821 + t1824*t1845 + 0.1305*(t1445 - 1.*t1420*t1845) + t1464*t1849 + t1453*t1482*t1849 - 1.*t1462*t1494*t1849 - 0.21*(-1.*t1462*t1475*t1849 - 1.*t1453*t1480*t1849) - 0.049*(t1453*t1475*t1849 - 1.*t1462*t1480*t1849);
  p_output1[23]=-1.*t1365*t1821 + t1824*t1868 + 0.1305*(t1365*t1405 - 1.*t1420*t1868) + t1464*t1872 + t1453*t1482*t1872 - 1.*t1462*t1494*t1872 - 0.21*(-1.*t1462*t1475*t1872 - 1.*t1453*t1480*t1872) - 0.049*(t1453*t1475*t1872 - 1.*t1462*t1480*t1872);
  p_output1[24]=t1482*t1551 + t1543*t1890 + t1536*t1894 + t1494*t1898 - 0.049*(t1554 + t1480*t1898) - 0.21*(t1475*t1898 + t1905);
  p_output1[25]=t1792*t1890 + t1894*t1912 + t1494*t1916 + t1482*t1920 - 0.049*(t1480*t1916 + t1923) - 0.21*(t1475*t1916 + t1927);
  p_output1[26]=t1736*t1890 + t1894*t1934 + t1494*t1938 + t1482*t1942 - 0.049*(t1480*t1938 + t1945) - 0.21*(t1475*t1938 + t1949);
  p_output1[27]=-0.049*t1555 - 0.21*(-1.*t1475*t1547 + t1905) + t1547*t1955 + t1551*t1958;
  p_output1[28]=t1920*t1958 + t1955*t1967 - 0.21*(t1927 - 1.*t1475*t1967) - 0.049*(t1923 - 1.*t1480*t1967);
  p_output1[29]=t1942*t1958 + t1955*t1979 - 0.21*(t1949 - 1.*t1475*t1979) - 0.049*(t1945 - 1.*t1480*t1979);
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_knee_joint_left_mex.hh"

namespace SymExpression
{

void J_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
