/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_left_src.h"

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
  double t1545;
  double t1568;
  double t1580;
  double t1572;
  double t1584;
  double t1559;
  double t1607;
  double t1610;
  double t1613;
  double t1574;
  double t1593;
  double t1599;
  double t1617;
  double t1535;
  double t1633;
  double t1639;
  double t1642;
  double t1549;
  double t1552;
  double t1554;
  double t1604;
  double t1620;
  double t1621;
  double t1625;
  double t1626;
  double t1628;
  double t1644;
  double t1504;
  double t1699;
  double t1700;
  double t1701;
  double t1688;
  double t1691;
  double t1695;
  double t1664;
  double t1710;
  double t1711;
  double t1714;
  double t1684;
  double t1696;
  double t1704;
  double t1705;
  double t1706;
  double t1707;
  double t1765;
  double t1767;
  double t1768;
  double t1750;
  double t1756;
  double t1757;
  double t1758;
  double t1760;
  double t1763;
  double t1631;
  double t1650;
  double t1660;
  double t1665;
  double t1669;
  double t1673;
  double t1709;
  double t1719;
  double t1722;
  double t1725;
  double t1726;
  double t1728;
  double t1764;
  double t1769;
  double t1773;
  double t1778;
  double t1779;
  double t1780;
  double t1843;
  double t1854;
  double t1881;
  double t1882;
  double t1899;
  double t1900;
  double t1795;
  double t1797;
  double t1798;
  double t1832;
  double t1833;
  double t1834;
  double t1835;
  double t1839;
  double t1841;
  double t1856;
  double t1860;
  double t1862;
  double t1870;
  double t1871;
  double t1874;
  double t1883;
  double t1886;
  double t1887;
  double t1892;
  double t1893;
  double t1894;
  double t1901;
  double t1902;
  double t1904;
  double t1913;
  double t1917;
  double t1918;
  double t1800;
  double t1802;
  double t1807;
  double t1812;
  double t1813;
  double t1814;
  t1545 = Cos(var1[3]);
  t1568 = Cos(var1[5]);
  t1580 = Sin(var1[4]);
  t1572 = Sin(var1[3]);
  t1584 = Sin(var1[5]);
  t1559 = Cos(var1[6]);
  t1607 = t1545*t1568*t1580;
  t1610 = t1572*t1584;
  t1613 = t1607 + t1610;
  t1574 = -1.*t1568*t1572;
  t1593 = t1545*t1580*t1584;
  t1599 = t1574 + t1593;
  t1617 = Sin(var1[6]);
  t1535 = Cos(var1[8]);
  t1633 = t1559*t1613;
  t1639 = -1.*t1599*t1617;
  t1642 = t1633 + t1639;
  t1549 = Cos(var1[4]);
  t1552 = Cos(var1[7]);
  t1554 = t1545*t1549*t1552;
  t1604 = t1559*t1599;
  t1620 = t1613*t1617;
  t1621 = t1604 + t1620;
  t1625 = Sin(var1[7]);
  t1626 = t1621*t1625;
  t1628 = t1554 + t1626;
  t1644 = Sin(var1[8]);
  t1504 = Sin(var1[9]);
  t1699 = t1568*t1572*t1580;
  t1700 = -1.*t1545*t1584;
  t1701 = t1699 + t1700;
  t1688 = t1545*t1568;
  t1691 = t1572*t1580*t1584;
  t1695 = t1688 + t1691;
  t1664 = Cos(var1[9]);
  t1710 = t1559*t1701;
  t1711 = -1.*t1695*t1617;
  t1714 = t1710 + t1711;
  t1684 = t1549*t1552*t1572;
  t1696 = t1559*t1695;
  t1704 = t1701*t1617;
  t1705 = t1696 + t1704;
  t1706 = t1705*t1625;
  t1707 = t1684 + t1706;
  t1765 = t1549*t1568*t1559;
  t1767 = -1.*t1549*t1584*t1617;
  t1768 = t1765 + t1767;
  t1750 = -1.*t1552*t1580;
  t1756 = t1549*t1559*t1584;
  t1757 = t1549*t1568*t1617;
  t1758 = t1756 + t1757;
  t1760 = t1758*t1625;
  t1763 = t1750 + t1760;
  t1631 = t1535*t1628;
  t1650 = t1642*t1644;
  t1660 = t1631 + t1650;
  t1665 = t1535*t1642;
  t1669 = -1.*t1628*t1644;
  t1673 = t1665 + t1669;
  t1709 = t1535*t1707;
  t1719 = t1714*t1644;
  t1722 = t1709 + t1719;
  t1725 = t1535*t1714;
  t1726 = -1.*t1707*t1644;
  t1728 = t1725 + t1726;
  t1764 = t1535*t1763;
  t1769 = t1768*t1644;
  t1773 = t1764 + t1769;
  t1778 = t1535*t1768;
  t1779 = -1.*t1763*t1644;
  t1780 = t1778 + t1779;
  t1843 = -1.*t1552;
  t1854 = 1. + t1843;
  t1881 = -1.*t1535;
  t1882 = 1. + t1881;
  t1899 = -1.*t1664;
  t1900 = 1. + t1899;
  t1795 = t1664*t1660;
  t1797 = t1504*t1673;
  t1798 = t1795 + t1797;
  t1832 = -1.*t1559;
  t1833 = 1. + t1832;
  t1834 = 0.135*t1833;
  t1835 = 0. + t1834;
  t1839 = -0.135*t1617;
  t1841 = 0. + t1839;
  t1856 = 0.135*t1854;
  t1860 = 0.049*t1625;
  t1862 = 0. + t1856 + t1860;
  t1870 = -0.049*t1854;
  t1871 = 0.135*t1625;
  t1874 = 0. + t1870 + t1871;
  t1883 = -0.049*t1882;
  t1886 = -0.09*t1644;
  t1887 = 0. + t1883 + t1886;
  t1892 = -0.09*t1882;
  t1893 = 0.049*t1644;
  t1894 = 0. + t1892 + t1893;
  t1901 = -0.049*t1900;
  t1902 = -0.21*t1504;
  t1904 = 0. + t1901 + t1902;
  t1913 = -0.21*t1900;
  t1917 = 0.049*t1504;
  t1918 = 0. + t1913 + t1917;
  t1800 = t1664*t1722;
  t1802 = t1504*t1728;
  t1807 = t1800 + t1802;
  t1812 = t1664*t1773;
  t1813 = t1504*t1780;
  t1814 = t1812 + t1813;
  p_output1[0]=t1504*t1660 - 1.*t1664*t1673;
  p_output1[1]=t1504*t1722 - 1.*t1664*t1728;
  p_output1[2]=t1504*t1773 - 1.*t1664*t1780;
  p_output1[3]=0.;
  p_output1[4]=t1798;
  p_output1[5]=t1807;
  p_output1[6]=t1814;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1552*t1621 + t1545*t1549*t1625;
  p_output1[9]=t1549*t1572*t1625 - 1.*t1552*t1705;
  p_output1[10]=-1.*t1580*t1625 - 1.*t1552*t1758;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1552*t1621 - 1.*t1545*t1549*t1625) - 0.21*(-1.*t1504*t1660 + t1664*t1673) - 0.049*t1798 + t1599*t1835 + t1613*t1841 + t1621*t1862 + t1545*t1549*t1874 + t1628*t1887 + t1642*t1894 + t1660*t1904 + t1673*t1918 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1549*t1572*t1625 + t1552*t1705) - 0.21*(-1.*t1504*t1722 + t1664*t1728) - 0.049*t1807 + t1695*t1835 + t1701*t1841 + t1705*t1862 + t1549*t1572*t1874 + t1707*t1887 + t1714*t1894 + t1722*t1904 + t1728*t1918 + var1[1];
  p_output1[14]=0. + 0.1305*(t1580*t1625 + t1552*t1758) - 0.21*(-1.*t1504*t1773 + t1664*t1780) - 0.049*t1814 + t1549*t1584*t1835 + t1549*t1568*t1841 + t1758*t1862 - 1.*t1580*t1874 + t1763*t1887 + t1768*t1894 + t1773*t1904 + t1780*t1918 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
