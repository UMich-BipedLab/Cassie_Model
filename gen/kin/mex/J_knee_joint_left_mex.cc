/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:07 GMT-05:00
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
  double t1392;
  double t1400;
  double t1401;
  double t1390;
  double t1402;
  double t1364;
  double t1399;
  double t1404;
  double t1416;
  double t1420;
  double t1421;
  double t1424;
  double t1425;
  double t1441;
  double t1450;
  double t1454;
  double t1456;
  double t1436;
  double t1438;
  double t1439;
  double t1461;
  double t1489;
  double t1492;
  double t1494;
  double t1498;
  double t1481;
  double t1483;
  double t1485;
  double t1502;
  double t1503;
  double t1504;
  double t1511;
  double t1512;
  double t1513;
  double t1516;
  double t1520;
  double t1522;
  double t1523;
  double t1534;
  double t1535;
  double t1536;
  double t1365;
  double t1375;
  double t1387;
  double t1389;
  double t1433;
  double t1434;
  double t1550;
  double t1551;
  double t1552;
  double t1554;
  double t1555;
  double t1556;
  double t1455;
  double t1457;
  double t1459;
  double t1463;
  double t1464;
  double t1469;
  double t1558;
  double t1559;
  double t1560;
  double t1495;
  double t1499;
  double t1500;
  double t1505;
  double t1506;
  double t1508;
  double t1514;
  double t1517;
  double t1518;
  double t1570;
  double t1571;
  double t1572;
  double t1575;
  double t1576;
  double t1579;
  double t1526;
  double t1528;
  double t1530;
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
  double t1672;
  double t1673;
  double t1674;
  double t1681;
  double t1682;
  double t1683;
  double t1685;
  double t1686;
  double t1687;
  double t1689;
  double t1690;
  double t1691;
  double t1693;
  double t1694;
  double t1695;
  double t1707;
  double t1708;
  double t1709;
  double t1711;
  double t1712;
  double t1716;
  double t1717;
  double t1718;
  double t1720;
  double t1721;
  double t1722;
  double t1724;
  double t1725;
  double t1726;
  double t1737;
  double t1738;
  double t1739;
  double t1742;
  double t1743;
  double t1744;
  double t1748;
  double t1749;
  double t1751;
  double t1752;
  double t1753;
  double t1755;
  double t1756;
  double t1757;
  double t1770;
  double t1771;
  double t1772;
  double t1776;
  double t1777;
  double t1778;
  double t1780;
  double t1781;
  double t1782;
  double t1784;
  double t1785;
  double t1786;
  double t1802;
  double t1803;
  double t1805;
  double t1806;
  double t1807;
  double t1809;
  double t1810;
  double t1811;
  double t1823;
  double t1824;
  double t1825;
  double t1827;
  double t1828;
  double t1832;
  double t1833;
  double t1835;
  double t1836;
  double t1837;
  double t1839;
  double t1840;
  double t1841;
  double t1773;
  double t1774;
  double t1775;
  double t1779;
  double t1783;
  double t1787;
  double t1788;
  double t1789;
  double t1790;
  double t1791;
  double t1792;
  double t1793;
  double t1794;
  double t1795;
  double t1563;
  double t1565;
  double t1567;
  double t1855;
  double t1856;
  double t1857;
  double t1859;
  double t1860;
  double t1879;
  double t1880;
  double t1881;
  double t1883;
  double t1884;
  double t1885;
  double t1902;
  double t1903;
  double t1904;
  double t1906;
  double t1907;
  double t1908;
  double t1932;
  double t1933;
  double t1934;
  double t1590;
  double t1925;
  double t1926;
  double t1928;
  double t1929;
  double t1930;
  double t1946;
  double t1947;
  double t1948;
  double t1950;
  double t1951;
  double t1952;
  double t1954;
  double t1955;
  double t1956;
  double t1968;
  double t1969;
  double t1970;
  double t1972;
  double t1973;
  double t1974;
  double t1976;
  double t1977;
  double t1978;
  double t1589;
  double t1591;
  double t1941;
  double t1989;
  double t1990;
  double t1991;
  double t1993;
  double t1994;
  double t2002;
  double t2003;
  double t2004;
  double t1959;
  double t1963;
  double t2014;
  double t2015;
  double t2016;
  double t1981;
  double t1985;
  t1392 = Cos(var1[5]);
  t1400 = Sin(var1[3]);
  t1401 = Sin(var1[4]);
  t1390 = Cos(var1[3]);
  t1402 = Sin(var1[5]);
  t1364 = Cos(var1[6]);
  t1399 = -1.*t1390*t1392;
  t1404 = -1.*t1400*t1401*t1402;
  t1416 = t1399 + t1404;
  t1420 = -1.*t1392*t1400*t1401;
  t1421 = t1390*t1402;
  t1424 = t1420 + t1421;
  t1425 = Sin(var1[6]);
  t1441 = Cos(var1[7]);
  t1450 = -1.*t1441;
  t1454 = 1. + t1450;
  t1456 = Sin(var1[7]);
  t1436 = t1364*t1416;
  t1438 = t1424*t1425;
  t1439 = t1436 + t1438;
  t1461 = Cos(var1[4]);
  t1489 = Cos(var1[8]);
  t1492 = -1.*t1489;
  t1494 = 1. + t1492;
  t1498 = Sin(var1[8]);
  t1481 = -1.*t1461*t1441*t1400;
  t1483 = t1439*t1456;
  t1485 = t1481 + t1483;
  t1502 = t1364*t1424;
  t1503 = -1.*t1416*t1425;
  t1504 = t1502 + t1503;
  t1511 = Cos(var1[9]);
  t1512 = -1.*t1511;
  t1513 = 1. + t1512;
  t1516 = Sin(var1[9]);
  t1520 = t1489*t1485;
  t1522 = t1504*t1498;
  t1523 = t1520 + t1522;
  t1534 = t1489*t1504;
  t1535 = -1.*t1485*t1498;
  t1536 = t1534 + t1535;
  t1365 = -1.*t1364;
  t1375 = 1. + t1365;
  t1387 = 0.135*t1375;
  t1389 = 0. + t1387;
  t1433 = -0.135*t1425;
  t1434 = 0. + t1433;
  t1550 = -1.*t1392*t1400;
  t1551 = t1390*t1401*t1402;
  t1552 = t1550 + t1551;
  t1554 = t1390*t1392*t1401;
  t1555 = t1400*t1402;
  t1556 = t1554 + t1555;
  t1455 = 0.135*t1454;
  t1457 = 0.049*t1456;
  t1459 = 0. + t1455 + t1457;
  t1463 = -0.049*t1454;
  t1464 = 0.135*t1456;
  t1469 = 0. + t1463 + t1464;
  t1558 = t1364*t1552;
  t1559 = t1556*t1425;
  t1560 = t1558 + t1559;
  t1495 = -0.049*t1494;
  t1499 = -0.09*t1498;
  t1500 = 0. + t1495 + t1499;
  t1505 = -0.09*t1494;
  t1506 = 0.049*t1498;
  t1508 = 0. + t1505 + t1506;
  t1514 = -0.049*t1513;
  t1517 = -0.21*t1516;
  t1518 = 0. + t1514 + t1517;
  t1570 = t1390*t1461*t1441;
  t1571 = t1560*t1456;
  t1572 = t1570 + t1571;
  t1575 = t1364*t1556;
  t1576 = -1.*t1552*t1425;
  t1579 = t1575 + t1576;
  t1526 = -0.21*t1513;
  t1528 = 0.049*t1516;
  t1530 = 0. + t1526 + t1528;
  t1581 = t1489*t1572;
  t1582 = t1579*t1498;
  t1583 = t1581 + t1582;
  t1585 = t1489*t1579;
  t1586 = -1.*t1572*t1498;
  t1587 = t1585 + t1586;
  t1600 = t1390*t1461*t1364*t1402;
  t1601 = t1390*t1461*t1392*t1425;
  t1602 = t1600 + t1601;
  t1609 = -1.*t1390*t1441*t1401;
  t1610 = t1602*t1456;
  t1611 = t1609 + t1610;
  t1613 = t1390*t1461*t1392*t1364;
  t1614 = -1.*t1390*t1461*t1402*t1425;
  t1615 = t1613 + t1614;
  t1617 = t1489*t1611;
  t1618 = t1615*t1498;
  t1619 = t1617 + t1618;
  t1621 = t1489*t1615;
  t1622 = -1.*t1611*t1498;
  t1623 = t1621 + t1622;
  t1636 = t1461*t1364*t1400*t1402;
  t1637 = t1461*t1392*t1400*t1425;
  t1638 = t1636 + t1637;
  t1645 = -1.*t1441*t1400*t1401;
  t1646 = t1638*t1456;
  t1647 = t1645 + t1646;
  t1649 = t1461*t1392*t1364*t1400;
  t1650 = -1.*t1461*t1400*t1402*t1425;
  t1651 = t1649 + t1650;
  t1653 = t1489*t1647;
  t1654 = t1651*t1498;
  t1655 = t1653 + t1654;
  t1657 = t1489*t1651;
  t1658 = -1.*t1647*t1498;
  t1659 = t1657 + t1658;
  t1672 = -1.*t1364*t1401*t1402;
  t1673 = -1.*t1392*t1401*t1425;
  t1674 = t1672 + t1673;
  t1681 = -1.*t1461*t1441;
  t1682 = t1674*t1456;
  t1683 = t1681 + t1682;
  t1685 = -1.*t1392*t1364*t1401;
  t1686 = t1401*t1402*t1425;
  t1687 = t1685 + t1686;
  t1689 = t1489*t1683;
  t1690 = t1687*t1498;
  t1691 = t1689 + t1690;
  t1693 = t1489*t1687;
  t1694 = -1.*t1683*t1498;
  t1695 = t1693 + t1694;
  t1707 = t1392*t1400;
  t1708 = -1.*t1390*t1401*t1402;
  t1709 = t1707 + t1708;
  t1711 = t1709*t1425;
  t1712 = t1575 + t1711;
  t1716 = t1364*t1709;
  t1717 = -1.*t1556*t1425;
  t1718 = t1716 + t1717;
  t1720 = t1489*t1712*t1456;
  t1721 = t1718*t1498;
  t1722 = t1720 + t1721;
  t1724 = t1489*t1718;
  t1725 = -1.*t1712*t1456*t1498;
  t1726 = t1724 + t1725;
  t1737 = t1392*t1400*t1401;
  t1738 = -1.*t1390*t1402;
  t1739 = t1737 + t1738;
  t1742 = t1364*t1739;
  t1743 = t1416*t1425;
  t1744 = t1742 + t1743;
  t1748 = -1.*t1739*t1425;
  t1749 = t1436 + t1748;
  t1751 = t1489*t1744*t1456;
  t1752 = t1749*t1498;
  t1753 = t1751 + t1752;
  t1755 = t1489*t1749;
  t1756 = -1.*t1744*t1456*t1498;
  t1757 = t1755 + t1756;
  t1770 = t1461*t1392*t1364;
  t1771 = -1.*t1461*t1402*t1425;
  t1772 = t1770 + t1771;
  t1776 = -1.*t1461*t1364*t1402;
  t1777 = -1.*t1461*t1392*t1425;
  t1778 = t1776 + t1777;
  t1780 = t1489*t1772*t1456;
  t1781 = t1778*t1498;
  t1782 = t1780 + t1781;
  t1784 = t1489*t1778;
  t1785 = -1.*t1772*t1456*t1498;
  t1786 = t1784 + t1785;
  t1802 = -1.*t1364*t1552;
  t1803 = t1802 + t1717;
  t1805 = t1489*t1579*t1456;
  t1806 = t1803*t1498;
  t1807 = t1805 + t1806;
  t1809 = t1489*t1803;
  t1810 = -1.*t1579*t1456*t1498;
  t1811 = t1809 + t1810;
  t1823 = t1390*t1392;
  t1824 = t1400*t1401*t1402;
  t1825 = t1823 + t1824;
  t1827 = -1.*t1825*t1425;
  t1828 = t1742 + t1827;
  t1832 = -1.*t1364*t1825;
  t1833 = t1832 + t1748;
  t1835 = t1489*t1828*t1456;
  t1836 = t1833*t1498;
  t1837 = t1835 + t1836;
  t1839 = t1489*t1833;
  t1840 = -1.*t1828*t1456*t1498;
  t1841 = t1839 + t1840;
  t1773 = 0.1305*t1441*t1772;
  t1774 = t1772*t1459;
  t1775 = t1772*t1456*t1500;
  t1779 = t1778*t1508;
  t1783 = t1518*t1782;
  t1787 = t1530*t1786;
  t1788 = -1.*t1516*t1782;
  t1789 = t1511*t1786;
  t1790 = t1788 + t1789;
  t1791 = -0.21*t1790;
  t1792 = t1511*t1782;
  t1793 = t1516*t1786;
  t1794 = t1792 + t1793;
  t1795 = -0.049*t1794;
  t1563 = t1441*t1560;
  t1565 = -1.*t1390*t1461*t1456;
  t1567 = t1563 + t1565;
  t1855 = 0.135*t1441;
  t1856 = -0.049*t1456;
  t1857 = t1855 + t1856;
  t1859 = 0.049*t1441;
  t1860 = t1859 + t1464;
  t1879 = t1364*t1825;
  t1880 = t1739*t1425;
  t1881 = t1879 + t1880;
  t1883 = t1441*t1881;
  t1884 = -1.*t1461*t1400*t1456;
  t1885 = t1883 + t1884;
  t1902 = t1461*t1364*t1402;
  t1903 = t1461*t1392*t1425;
  t1904 = t1902 + t1903;
  t1906 = t1441*t1904;
  t1907 = t1401*t1456;
  t1908 = t1906 + t1907;
  t1932 = -1.*t1489*t1572;
  t1933 = -1.*t1579*t1498;
  t1934 = t1932 + t1933;
  t1590 = t1511*t1587;
  t1925 = 0.049*t1489;
  t1926 = t1925 + t1499;
  t1928 = -0.09*t1489;
  t1929 = -0.049*t1498;
  t1930 = t1928 + t1929;
  t1946 = t1461*t1441*t1400;
  t1947 = t1881*t1456;
  t1948 = t1946 + t1947;
  t1950 = -1.*t1489*t1948;
  t1951 = -1.*t1828*t1498;
  t1952 = t1950 + t1951;
  t1954 = t1489*t1828;
  t1955 = -1.*t1948*t1498;
  t1956 = t1954 + t1955;
  t1968 = -1.*t1441*t1401;
  t1969 = t1904*t1456;
  t1970 = t1968 + t1969;
  t1972 = -1.*t1489*t1970;
  t1973 = -1.*t1772*t1498;
  t1974 = t1972 + t1973;
  t1976 = t1489*t1772;
  t1977 = -1.*t1970*t1498;
  t1978 = t1976 + t1977;
  t1589 = -1.*t1516*t1583;
  t1591 = t1589 + t1590;
  t1941 = -1.*t1516*t1587;
  t1989 = -0.21*t1511;
  t1990 = -0.049*t1516;
  t1991 = t1989 + t1990;
  t1993 = 0.049*t1511;
  t1994 = t1993 + t1517;
  t2002 = t1489*t1948;
  t2003 = t1828*t1498;
  t2004 = t2002 + t2003;
  t1959 = t1511*t1956;
  t1963 = -1.*t1516*t1956;
  t2014 = t1489*t1970;
  t2015 = t1772*t1498;
  t2016 = t2014 + t2015;
  t1981 = t1511*t1978;
  t1985 = -1.*t1516*t1978;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1389*t1416 + t1424*t1434 + t1439*t1459 + 0.1305*(t1439*t1441 + t1400*t1456*t1461) - 1.*t1400*t1461*t1469 + t1485*t1500 + t1504*t1508 + t1518*t1523 + t1530*t1536 - 0.21*(-1.*t1516*t1523 + t1511*t1536) - 0.049*(t1511*t1523 + t1516*t1536);
  p_output1[10]=t1390*t1461*t1469 + t1389*t1552 + t1434*t1556 + t1459*t1560 + 0.1305*t1567 + t1500*t1572 + t1508*t1579 + t1518*t1583 + t1530*t1587 - 0.049*(t1511*t1583 + t1516*t1587) - 0.21*t1591;
  p_output1[11]=0;
  p_output1[12]=t1389*t1390*t1402*t1461 + t1390*t1392*t1434*t1461 - 1.*t1390*t1401*t1469 + t1459*t1602 + 0.1305*(t1390*t1401*t1456 + t1441*t1602) + t1500*t1611 + t1508*t1615 + t1518*t1619 + t1530*t1623 - 0.21*(-1.*t1516*t1619 + t1511*t1623) - 0.049*(t1511*t1619 + t1516*t1623);
  p_output1[13]=t1389*t1400*t1402*t1461 + t1392*t1400*t1434*t1461 - 1.*t1400*t1401*t1469 + t1459*t1638 + 0.1305*(t1400*t1401*t1456 + t1441*t1638) + t1500*t1647 + t1508*t1651 + t1518*t1655 + t1530*t1659 - 0.21*(-1.*t1516*t1655 + t1511*t1659) - 0.049*(t1511*t1655 + t1516*t1659);
  p_output1[14]=-1.*t1389*t1401*t1402 - 1.*t1392*t1401*t1434 - 1.*t1461*t1469 + t1459*t1674 + 0.1305*(t1456*t1461 + t1441*t1674) + t1500*t1683 + t1508*t1687 + t1518*t1691 + t1530*t1695 - 0.21*(-1.*t1516*t1691 + t1511*t1695) - 0.049*(t1511*t1691 + t1516*t1695);
  p_output1[15]=t1389*t1556 + t1434*t1709 + 0.1305*t1441*t1712 + t1459*t1712 + t1456*t1500*t1712 + t1508*t1718 + t1518*t1722 + t1530*t1726 - 0.21*(-1.*t1516*t1722 + t1511*t1726) - 0.049*(t1511*t1722 + t1516*t1726);
  p_output1[16]=t1416*t1434 + t1389*t1739 + 0.1305*t1441*t1744 + t1459*t1744 + t1456*t1500*t1744 + t1508*t1749 + t1518*t1753 + t1530*t1757 - 0.21*(-1.*t1516*t1753 + t1511*t1757) - 0.049*(t1511*t1753 + t1516*t1757);
  p_output1[17]=t1389*t1392*t1461 - 1.*t1402*t1434*t1461 + t1773 + t1774 + t1775 + t1779 + t1783 + t1787 + t1791 + t1795;
  p_output1[18]=0.135*t1425*t1552 - 0.135*t1364*t1556 + 0.1305*t1441*t1579 + t1459*t1579 + t1456*t1500*t1579 + t1508*t1803 + t1518*t1807 + t1530*t1811 - 0.21*(-1.*t1516*t1807 + t1511*t1811) - 0.049*(t1511*t1807 + t1516*t1811);
  p_output1[19]=-0.135*t1364*t1739 + 0.135*t1425*t1825 + 0.1305*t1441*t1828 + t1459*t1828 + t1456*t1500*t1828 + t1508*t1833 + t1518*t1837 + t1530*t1841 - 0.21*(-1.*t1516*t1837 + t1511*t1841) - 0.049*(t1511*t1837 + t1516*t1841);
  p_output1[20]=-0.135*t1364*t1392*t1461 + 0.135*t1402*t1425*t1461 + t1773 + t1774 + t1775 + t1779 + t1783 + t1787 + t1791 + t1795;
  p_output1[21]=0.1305*(-1.*t1390*t1441*t1461 - 1.*t1456*t1560) + t1500*t1567 + t1489*t1518*t1567 - 1.*t1498*t1530*t1567 - 0.21*(-1.*t1498*t1511*t1567 - 1.*t1489*t1516*t1567) - 0.049*(t1489*t1511*t1567 - 1.*t1498*t1516*t1567) + t1390*t1461*t1857 + t1560*t1860;
  p_output1[22]=t1400*t1461*t1857 + t1860*t1881 + 0.1305*(t1481 - 1.*t1456*t1881) + t1500*t1885 + t1489*t1518*t1885 - 1.*t1498*t1530*t1885 - 0.21*(-1.*t1498*t1511*t1885 - 1.*t1489*t1516*t1885) - 0.049*(t1489*t1511*t1885 - 1.*t1498*t1516*t1885);
  p_output1[23]=-1.*t1401*t1857 + t1860*t1904 + 0.1305*(t1401*t1441 - 1.*t1456*t1904) + t1500*t1908 + t1489*t1518*t1908 - 1.*t1498*t1530*t1908 - 0.21*(-1.*t1498*t1511*t1908 - 1.*t1489*t1516*t1908) - 0.049*(t1489*t1511*t1908 - 1.*t1498*t1516*t1908);
  p_output1[24]=t1518*t1587 + t1579*t1926 + t1572*t1930 + t1530*t1934 - 0.049*(t1590 + t1516*t1934) - 0.21*(t1511*t1934 + t1941);
  p_output1[25]=t1828*t1926 + t1930*t1948 + t1530*t1952 + t1518*t1956 - 0.049*(t1516*t1952 + t1959) - 0.21*(t1511*t1952 + t1963);
  p_output1[26]=t1772*t1926 + t1930*t1970 + t1530*t1974 + t1518*t1978 - 0.049*(t1516*t1974 + t1981) - 0.21*(t1511*t1974 + t1985);
  p_output1[27]=-0.049*t1591 - 0.21*(-1.*t1511*t1583 + t1941) + t1583*t1991 + t1587*t1994;
  p_output1[28]=t1956*t1994 + t1991*t2004 - 0.21*(t1963 - 1.*t1511*t2004) - 0.049*(t1959 - 1.*t1516*t2004);
  p_output1[29]=t1978*t1994 + t1991*t2016 - 0.21*(t1985 - 1.*t1511*t2016) - 0.049*(t1981 - 1.*t1516*t2016);
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
