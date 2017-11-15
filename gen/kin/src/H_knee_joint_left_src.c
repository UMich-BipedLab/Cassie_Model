/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:09 GMT-05:00
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
  double t1581;
  double t1604;
  double t1616;
  double t1608;
  double t1620;
  double t1595;
  double t1643;
  double t1646;
  double t1649;
  double t1610;
  double t1629;
  double t1635;
  double t1653;
  double t1571;
  double t1669;
  double t1675;
  double t1678;
  double t1585;
  double t1588;
  double t1590;
  double t1640;
  double t1656;
  double t1657;
  double t1661;
  double t1662;
  double t1664;
  double t1680;
  double t1540;
  double t1735;
  double t1736;
  double t1737;
  double t1724;
  double t1727;
  double t1731;
  double t1700;
  double t1746;
  double t1747;
  double t1750;
  double t1720;
  double t1732;
  double t1740;
  double t1741;
  double t1742;
  double t1743;
  double t1801;
  double t1803;
  double t1804;
  double t1786;
  double t1792;
  double t1793;
  double t1794;
  double t1796;
  double t1799;
  double t1667;
  double t1686;
  double t1696;
  double t1701;
  double t1705;
  double t1709;
  double t1745;
  double t1755;
  double t1758;
  double t1761;
  double t1762;
  double t1764;
  double t1800;
  double t1805;
  double t1809;
  double t1814;
  double t1815;
  double t1816;
  double t1879;
  double t1890;
  double t1917;
  double t1918;
  double t1935;
  double t1936;
  double t1831;
  double t1833;
  double t1834;
  double t1868;
  double t1869;
  double t1870;
  double t1871;
  double t1875;
  double t1877;
  double t1892;
  double t1896;
  double t1898;
  double t1906;
  double t1907;
  double t1910;
  double t1919;
  double t1922;
  double t1923;
  double t1928;
  double t1929;
  double t1930;
  double t1937;
  double t1938;
  double t1940;
  double t1949;
  double t1953;
  double t1954;
  double t1836;
  double t1838;
  double t1843;
  double t1848;
  double t1849;
  double t1850;
  t1581 = Cos(var1[3]);
  t1604 = Cos(var1[5]);
  t1616 = Sin(var1[4]);
  t1608 = Sin(var1[3]);
  t1620 = Sin(var1[5]);
  t1595 = Cos(var1[6]);
  t1643 = t1581*t1604*t1616;
  t1646 = t1608*t1620;
  t1649 = t1643 + t1646;
  t1610 = -1.*t1604*t1608;
  t1629 = t1581*t1616*t1620;
  t1635 = t1610 + t1629;
  t1653 = Sin(var1[6]);
  t1571 = Cos(var1[8]);
  t1669 = t1595*t1649;
  t1675 = -1.*t1635*t1653;
  t1678 = t1669 + t1675;
  t1585 = Cos(var1[4]);
  t1588 = Cos(var1[7]);
  t1590 = t1581*t1585*t1588;
  t1640 = t1595*t1635;
  t1656 = t1649*t1653;
  t1657 = t1640 + t1656;
  t1661 = Sin(var1[7]);
  t1662 = t1657*t1661;
  t1664 = t1590 + t1662;
  t1680 = Sin(var1[8]);
  t1540 = Sin(var1[9]);
  t1735 = t1604*t1608*t1616;
  t1736 = -1.*t1581*t1620;
  t1737 = t1735 + t1736;
  t1724 = t1581*t1604;
  t1727 = t1608*t1616*t1620;
  t1731 = t1724 + t1727;
  t1700 = Cos(var1[9]);
  t1746 = t1595*t1737;
  t1747 = -1.*t1731*t1653;
  t1750 = t1746 + t1747;
  t1720 = t1585*t1588*t1608;
  t1732 = t1595*t1731;
  t1740 = t1737*t1653;
  t1741 = t1732 + t1740;
  t1742 = t1741*t1661;
  t1743 = t1720 + t1742;
  t1801 = t1585*t1604*t1595;
  t1803 = -1.*t1585*t1620*t1653;
  t1804 = t1801 + t1803;
  t1786 = -1.*t1588*t1616;
  t1792 = t1585*t1595*t1620;
  t1793 = t1585*t1604*t1653;
  t1794 = t1792 + t1793;
  t1796 = t1794*t1661;
  t1799 = t1786 + t1796;
  t1667 = t1571*t1664;
  t1686 = t1678*t1680;
  t1696 = t1667 + t1686;
  t1701 = t1571*t1678;
  t1705 = -1.*t1664*t1680;
  t1709 = t1701 + t1705;
  t1745 = t1571*t1743;
  t1755 = t1750*t1680;
  t1758 = t1745 + t1755;
  t1761 = t1571*t1750;
  t1762 = -1.*t1743*t1680;
  t1764 = t1761 + t1762;
  t1800 = t1571*t1799;
  t1805 = t1804*t1680;
  t1809 = t1800 + t1805;
  t1814 = t1571*t1804;
  t1815 = -1.*t1799*t1680;
  t1816 = t1814 + t1815;
  t1879 = -1.*t1588;
  t1890 = 1. + t1879;
  t1917 = -1.*t1571;
  t1918 = 1. + t1917;
  t1935 = -1.*t1700;
  t1936 = 1. + t1935;
  t1831 = t1700*t1696;
  t1833 = t1540*t1709;
  t1834 = t1831 + t1833;
  t1868 = -1.*t1595;
  t1869 = 1. + t1868;
  t1870 = 0.135*t1869;
  t1871 = 0. + t1870;
  t1875 = -0.135*t1653;
  t1877 = 0. + t1875;
  t1892 = 0.135*t1890;
  t1896 = 0.049*t1661;
  t1898 = 0. + t1892 + t1896;
  t1906 = -0.049*t1890;
  t1907 = 0.135*t1661;
  t1910 = 0. + t1906 + t1907;
  t1919 = -0.049*t1918;
  t1922 = -0.09*t1680;
  t1923 = 0. + t1919 + t1922;
  t1928 = -0.09*t1918;
  t1929 = 0.049*t1680;
  t1930 = 0. + t1928 + t1929;
  t1937 = -0.049*t1936;
  t1938 = -0.21*t1540;
  t1940 = 0. + t1937 + t1938;
  t1949 = -0.21*t1936;
  t1953 = 0.049*t1540;
  t1954 = 0. + t1949 + t1953;
  t1836 = t1700*t1758;
  t1838 = t1540*t1764;
  t1843 = t1836 + t1838;
  t1848 = t1700*t1809;
  t1849 = t1540*t1816;
  t1850 = t1848 + t1849;
  p_output1[0]=t1540*t1696 - 1.*t1700*t1709;
  p_output1[1]=t1540*t1758 - 1.*t1700*t1764;
  p_output1[2]=t1540*t1809 - 1.*t1700*t1816;
  p_output1[3]=0.;
  p_output1[4]=t1834;
  p_output1[5]=t1843;
  p_output1[6]=t1850;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1588*t1657 + t1581*t1585*t1661;
  p_output1[9]=t1585*t1608*t1661 - 1.*t1588*t1741;
  p_output1[10]=-1.*t1616*t1661 - 1.*t1588*t1794;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1588*t1657 - 1.*t1581*t1585*t1661) - 0.21*(-1.*t1540*t1696 + t1700*t1709) - 0.049*t1834 + t1635*t1871 + t1649*t1877 + t1657*t1898 + t1581*t1585*t1910 + t1664*t1923 + t1678*t1930 + t1696*t1940 + t1709*t1954 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1585*t1608*t1661 + t1588*t1741) - 0.21*(-1.*t1540*t1758 + t1700*t1764) - 0.049*t1843 + t1731*t1871 + t1737*t1877 + t1741*t1898 + t1585*t1608*t1910 + t1743*t1923 + t1750*t1930 + t1758*t1940 + t1764*t1954 + var1[1];
  p_output1[14]=0. + 0.1305*(t1616*t1661 + t1588*t1794) - 0.21*(-1.*t1540*t1809 + t1700*t1816) - 0.049*t1850 + t1585*t1620*t1871 + t1585*t1604*t1877 + t1794*t1898 - 1.*t1616*t1910 + t1799*t1923 + t1804*t1930 + t1809*t1940 + t1816*t1954 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
