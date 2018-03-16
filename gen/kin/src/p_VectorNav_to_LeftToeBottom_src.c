/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom_src.h"

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
  double t1265;
  double t1433;
  double t1454;
  double t1458;
  double t1464;
  double t1472;
  double t1527;
  double t1558;
  double t1562;
  double t1564;
  double t1572;
  double t1581;
  double t1582;
  double t1584;
  double t1590;
  double t1591;
  double t1592;
  double t1594;
  double t1596;
  double t1597;
  double t1600;
  double t1603;
  double t1604;
  double t1606;
  double t1613;
  double t1616;
  double t1620;
  double t1624;
  double t1625;
  double t1626;
  double t1629;
  double t1633;
  double t1636;
  double t1638;
  double t1645;
  double t1646;
  double t1647;
  double t1658;
  double t1376;
  double t1420;
  double t1509;
  double t1513;
  double t1515;
  double t1521;
  double t1533;
  double t1535;
  double t1467;
  double t1475;
  double t1492;
  double t1674;
  double t1544;
  double t1546;
  double t1547;
  double t1570;
  double t1578;
  double t1580;
  double t1682;
  double t1684;
  double t1686;
  double t1688;
  double t1690;
  double t1691;
  double t1587;
  double t1588;
  double t1589;
  double t1599;
  double t1601;
  double t1602;
  double t1693;
  double t1694;
  double t1695;
  double t1697;
  double t1698;
  double t1699;
  double t1609;
  double t1610;
  double t1612;
  double t1628;
  double t1630;
  double t1632;
  double t1701;
  double t1702;
  double t1703;
  double t1705;
  double t1706;
  double t1707;
  double t1641;
  double t1642;
  double t1644;
  double t1709;
  double t1710;
  double t1711;
  double t1713;
  double t1714;
  double t1715;
  double t1666;
  double t1668;
  double t1670;
  double t1675;
  double t1676;
  double t1678;
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
  double t1759;
  double t1760;
  double t1761;
  t1265 = Cos(var1[1]);
  t1433 = Cos(var1[2]);
  t1454 = Cos(var1[3]);
  t1458 = -1.*t1454;
  t1464 = 1. + t1458;
  t1472 = Sin(var1[3]);
  t1527 = Sin(var1[2]);
  t1558 = Cos(var1[4]);
  t1562 = -1.*t1558;
  t1564 = 1. + t1562;
  t1572 = Sin(var1[4]);
  t1581 = -1.*t1265*t1433*t1472;
  t1582 = -1.*t1454*t1265*t1527;
  t1584 = t1581 + t1582;
  t1590 = t1454*t1265*t1433;
  t1591 = -1.*t1265*t1472*t1527;
  t1592 = t1590 + t1591;
  t1594 = Cos(var1[5]);
  t1596 = -1.*t1594;
  t1597 = 1. + t1596;
  t1600 = Sin(var1[5]);
  t1603 = t1572*t1584;
  t1604 = t1558*t1592;
  t1606 = t1603 + t1604;
  t1613 = t1558*t1584;
  t1616 = -1.*t1572*t1592;
  t1620 = t1613 + t1616;
  t1624 = Cos(var1[6]);
  t1625 = -1.*t1624;
  t1626 = 1. + t1625;
  t1629 = Sin(var1[6]);
  t1633 = -1.*t1600*t1606;
  t1636 = t1594*t1620;
  t1638 = t1633 + t1636;
  t1645 = t1594*t1606;
  t1646 = t1600*t1620;
  t1647 = t1645 + t1646;
  t1658 = Cos(var1[0]);
  t1376 = -1.*t1265;
  t1420 = 1. + t1376;
  t1509 = Sin(var1[1]);
  t1513 = -1.*t1433;
  t1515 = 1. + t1513;
  t1521 = -0.049*t1515;
  t1533 = -0.09*t1527;
  t1535 = 0. + t1521 + t1533;
  t1467 = -0.049*t1464;
  t1475 = -0.21*t1472;
  t1492 = 0. + t1467 + t1475;
  t1674 = Sin(var1[0]);
  t1544 = -0.21*t1464;
  t1546 = 0.049*t1472;
  t1547 = 0. + t1544 + t1546;
  t1570 = -0.2707*t1564;
  t1578 = 0.0016*t1572;
  t1580 = 0. + t1570 + t1578;
  t1682 = t1658*t1433*t1509;
  t1684 = -1.*t1674*t1527;
  t1686 = t1682 + t1684;
  t1688 = -1.*t1433*t1674;
  t1690 = -1.*t1658*t1509*t1527;
  t1691 = t1688 + t1690;
  t1587 = -0.0016*t1564;
  t1588 = -0.2707*t1572;
  t1589 = 0. + t1587 + t1588;
  t1599 = 0.0184*t1597;
  t1601 = -0.7055*t1600;
  t1602 = 0. + t1599 + t1601;
  t1693 = -1.*t1472*t1686;
  t1694 = t1454*t1691;
  t1695 = t1693 + t1694;
  t1697 = t1454*t1686;
  t1698 = t1472*t1691;
  t1699 = t1697 + t1698;
  t1609 = -0.7055*t1597;
  t1610 = -0.0184*t1600;
  t1612 = 0. + t1609 + t1610;
  t1628 = -1.1135*t1626;
  t1630 = 0.0216*t1629;
  t1632 = 0. + t1628 + t1630;
  t1701 = t1572*t1695;
  t1702 = t1558*t1699;
  t1703 = t1701 + t1702;
  t1705 = t1558*t1695;
  t1706 = -1.*t1572*t1699;
  t1707 = t1705 + t1706;
  t1641 = -0.0216*t1626;
  t1642 = -1.1135*t1629;
  t1644 = 0. + t1641 + t1642;
  t1709 = -1.*t1600*t1703;
  t1710 = t1594*t1707;
  t1711 = t1709 + t1710;
  t1713 = t1594*t1703;
  t1714 = t1600*t1707;
  t1715 = t1713 + t1714;
  t1666 = 0.135*t1420;
  t1668 = 0.049*t1509;
  t1670 = 0. + t1666 + t1668;
  t1675 = -0.09*t1515;
  t1676 = 0.049*t1527;
  t1678 = 0. + t1675 + t1676;
  t1731 = t1433*t1674*t1509;
  t1732 = t1658*t1527;
  t1733 = t1731 + t1732;
  t1735 = t1658*t1433;
  t1736 = -1.*t1674*t1509*t1527;
  t1737 = t1735 + t1736;
  t1739 = -1.*t1472*t1733;
  t1740 = t1454*t1737;
  t1741 = t1739 + t1740;
  t1743 = t1454*t1733;
  t1744 = t1472*t1737;
  t1745 = t1743 + t1744;
  t1747 = t1572*t1741;
  t1748 = t1558*t1745;
  t1749 = t1747 + t1748;
  t1751 = t1558*t1741;
  t1752 = -1.*t1572*t1745;
  t1753 = t1751 + t1752;
  t1755 = -1.*t1600*t1749;
  t1756 = t1594*t1753;
  t1757 = t1755 + t1756;
  t1759 = t1594*t1749;
  t1760 = t1600*t1753;
  t1761 = t1759 + t1760;
  p_output1[0]=-0.03155 - 0.049*t1420 + t1265*t1433*t1492 + 0.004500000000000004*t1509 + t1265*t1535 - 1.*t1265*t1527*t1547 + t1580*t1584 + t1589*t1592 + t1602*t1606 + t1612*t1620 + t1632*t1638 + t1644*t1647 + 0.0306*(t1629*t1638 + t1624*t1647) - 1.1312*(t1624*t1638 - 1.*t1629*t1647);
  p_output1[1]=0. - 0.135*(1. - 1.*t1658) - 0.1305*t1265*t1658 - 1.*t1509*t1535*t1658 - 1.*t1658*t1670 + t1674*t1678 - 1.*t1492*t1686 - 1.*t1547*t1691 - 1.*t1580*t1695 - 1.*t1589*t1699 - 1.*t1602*t1703 - 1.*t1612*t1707 - 1.*t1632*t1711 - 1.*t1644*t1715 - 0.0306*(t1629*t1711 + t1624*t1715) + 1.1312*(t1624*t1711 - 1.*t1629*t1715);
  p_output1[2]=-0.07996 + 0.135*t1674 - 0.1305*t1265*t1674 - 1.*t1509*t1535*t1674 - 1.*t1670*t1674 - 1.*t1658*t1678 - 1.*t1492*t1733 - 1.*t1547*t1737 - 1.*t1580*t1741 - 1.*t1589*t1745 - 1.*t1602*t1749 - 1.*t1612*t1753 - 1.*t1632*t1757 - 1.*t1644*t1761 - 0.0306*(t1629*t1757 + t1624*t1761) + 1.1312*(t1624*t1757 - 1.*t1629*t1761);
}



void p_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
