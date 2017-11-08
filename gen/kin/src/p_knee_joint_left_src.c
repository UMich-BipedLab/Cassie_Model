/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:03 GMT-05:00
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
  double t1692;
  double t1684;
  double t1694;
  double t1689;
  double t1695;
  double t1649;
  double t1691;
  double t1696;
  double t1704;
  double t1707;
  double t1708;
  double t1710;
  double t1711;
  double t1723;
  double t1731;
  double t1733;
  double t1735;
  double t1717;
  double t1719;
  double t1720;
  double t1741;
  double t1760;
  double t1762;
  double t1763;
  double t1766;
  double t1755;
  double t1756;
  double t1759;
  double t1771;
  double t1772;
  double t1773;
  double t1657;
  double t1677;
  double t1682;
  double t1683;
  double t1713;
  double t1714;
  double t1795;
  double t1797;
  double t1798;
  double t1801;
  double t1802;
  double t1804;
  double t1734;
  double t1736;
  double t1739;
  double t1742;
  double t1743;
  double t1745;
  double t1806;
  double t1807;
  double t1808;
  double t1765;
  double t1767;
  double t1768;
  double t1774;
  double t1775;
  double t1776;
  double t1825;
  double t1826;
  double t1827;
  double t1829;
  double t1830;
  double t1831;
  double t1845;
  double t1846;
  double t1847;
  double t1854;
  double t1856;
  double t1857;
  double t1859;
  double t1860;
  double t1861;
  t1692 = Cos(var1[3]);
  t1684 = Cos(var1[5]);
  t1694 = Sin(var1[4]);
  t1689 = Sin(var1[3]);
  t1695 = Sin(var1[5]);
  t1649 = Cos(var1[6]);
  t1691 = -1.*t1684*t1689;
  t1696 = t1692*t1694*t1695;
  t1704 = t1691 + t1696;
  t1707 = t1692*t1684*t1694;
  t1708 = t1689*t1695;
  t1710 = t1707 + t1708;
  t1711 = Sin(var1[6]);
  t1723 = Cos(var1[7]);
  t1731 = -1.*t1723;
  t1733 = 1. + t1731;
  t1735 = Sin(var1[7]);
  t1717 = t1649*t1704;
  t1719 = t1710*t1711;
  t1720 = t1717 + t1719;
  t1741 = Cos(var1[4]);
  t1760 = Cos(var1[8]);
  t1762 = -1.*t1760;
  t1763 = 1. + t1762;
  t1766 = Sin(var1[8]);
  t1755 = t1692*t1741*t1723;
  t1756 = t1720*t1735;
  t1759 = t1755 + t1756;
  t1771 = t1649*t1710;
  t1772 = -1.*t1704*t1711;
  t1773 = t1771 + t1772;
  t1657 = -1.*t1649;
  t1677 = 1. + t1657;
  t1682 = 0.135*t1677;
  t1683 = 0. + t1682;
  t1713 = -0.135*t1711;
  t1714 = 0. + t1713;
  t1795 = t1692*t1684;
  t1797 = t1689*t1694*t1695;
  t1798 = t1795 + t1797;
  t1801 = t1684*t1689*t1694;
  t1802 = -1.*t1692*t1695;
  t1804 = t1801 + t1802;
  t1734 = 0.135*t1733;
  t1736 = 0.049*t1735;
  t1739 = 0. + t1734 + t1736;
  t1742 = -0.049*t1733;
  t1743 = 0.135*t1735;
  t1745 = 0. + t1742 + t1743;
  t1806 = t1649*t1798;
  t1807 = t1804*t1711;
  t1808 = t1806 + t1807;
  t1765 = -0.049*t1763;
  t1767 = -0.09*t1766;
  t1768 = 0. + t1765 + t1767;
  t1774 = -0.09*t1763;
  t1775 = 0.049*t1766;
  t1776 = 0. + t1774 + t1775;
  t1825 = t1741*t1723*t1689;
  t1826 = t1808*t1735;
  t1827 = t1825 + t1826;
  t1829 = t1649*t1804;
  t1830 = -1.*t1798*t1711;
  t1831 = t1829 + t1830;
  t1845 = t1741*t1649*t1695;
  t1846 = t1741*t1684*t1711;
  t1847 = t1845 + t1846;
  t1854 = -1.*t1723*t1694;
  t1856 = t1847*t1735;
  t1857 = t1854 + t1856;
  t1859 = t1741*t1684*t1649;
  t1860 = -1.*t1741*t1695*t1711;
  t1861 = t1859 + t1860;
  p_output1[0]=0. + t1683*t1704 + t1710*t1714 + t1720*t1739 + 0.1305*(t1720*t1723 - 1.*t1692*t1735*t1741) + t1692*t1741*t1745 + t1759*t1768 - 0.21*(-1.*t1759*t1766 + t1760*t1773) - 0.049*(t1759*t1760 + t1766*t1773) + t1773*t1776 + var1[0];
  p_output1[1]=0. + t1689*t1741*t1745 + t1683*t1798 + t1714*t1804 + t1739*t1808 + 0.1305*(-1.*t1689*t1735*t1741 + t1723*t1808) + t1768*t1827 + t1776*t1831 - 0.21*(-1.*t1766*t1827 + t1760*t1831) - 0.049*(t1760*t1827 + t1766*t1831) + var1[1];
  p_output1[2]=0. + t1683*t1695*t1741 + t1684*t1714*t1741 - 1.*t1694*t1745 + t1739*t1847 + 0.1305*(t1694*t1735 + t1723*t1847) + t1768*t1857 + t1776*t1861 - 0.21*(-1.*t1766*t1857 + t1760*t1861) - 0.049*(t1760*t1857 + t1766*t1861) + var1[2];
}



void p_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
