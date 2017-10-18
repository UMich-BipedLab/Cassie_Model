/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:50 GMT-04:00
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
  double t1445;
  double t1409;
  double t1449;
  double t1417;
  double t1452;
  double t1304;
  double t1427;
  double t1455;
  double t1456;
  double t1459;
  double t1463;
  double t1466;
  double t1469;
  double t1481;
  double t1513;
  double t1517;
  double t1520;
  double t1501;
  double t1503;
  double t1507;
  double t1531;
  double t1611;
  double t1612;
  double t1613;
  double t1616;
  double t1600;
  double t1607;
  double t1609;
  double t1624;
  double t1550;
  double t1562;
  double t1563;
  double t1572;
  double t1587;
  double t1591;
  double t1594;
  double t1653;
  double t1654;
  double t1655;
  double t1658;
  double t1660;
  double t1665;
  double t1669;
  double t1672;
  double t1674;
  double t1676;
  double t1686;
  double t1687;
  double t1690;
  double t1692;
  double t1694;
  double t1696;
  double t1701;
  double t1704;
  double t1706;
  double t1707;
  double t1718;
  double t1719;
  double t1720;
  double t1724;
  double t1726;
  double t1727;
  double t1731;
  double t1736;
  double t1737;
  double t1738;
  double t1744;
  double t1746;
  double t1750;
  double t1755;
  double t1756;
  double t1758;
  double t1762;
  double t1767;
  double t1768;
  double t1769;
  double t1776;
  double t1777;
  double t1778;
  double t1352;
  double t1361;
  double t1376;
  double t1379;
  double t1470;
  double t1473;
  double t1483;
  double t1485;
  double t1499;
  double t1500;
  double t1789;
  double t1790;
  double t1793;
  double t1795;
  double t1796;
  double t1797;
  double t1532;
  double t1547;
  double t1566;
  double t1579;
  double t1581;
  double t1805;
  double t1806;
  double t1807;
  double t1799;
  double t1800;
  double t1803;
  double t1615;
  double t1618;
  double t1619;
  double t1626;
  double t1628;
  double t1629;
  double t1815;
  double t1816;
  double t1817;
  double t1644;
  double t1648;
  double t1652;
  double t1668;
  double t1670;
  double t1671;
  double t1809;
  double t1810;
  double t1813;
  double t1826;
  double t1827;
  double t1828;
  double t1679;
  double t1681;
  double t1684;
  double t1699;
  double t1702;
  double t1703;
  double t1830;
  double t1831;
  double t1832;
  double t1834;
  double t1835;
  double t1836;
  double t1714;
  double t1716;
  double t1717;
  double t1728;
  double t1733;
  double t1734;
  double t1838;
  double t1839;
  double t1840;
  double t1842;
  double t1843;
  double t1844;
  double t1740;
  double t1742;
  double t1743;
  double t1759;
  double t1763;
  double t1764;
  double t1846;
  double t1847;
  double t1848;
  double t1850;
  double t1851;
  double t1852;
  double t1771;
  double t1772;
  double t1775;
  double t1854;
  double t1855;
  double t1856;
  double t1858;
  double t1859;
  double t1860;
  double t1877;
  double t1878;
  double t1879;
  double t1873;
  double t1874;
  double t1875;
  double t1885;
  double t1886;
  double t1887;
  double t1881;
  double t1882;
  double t1883;
  double t1894;
  double t1895;
  double t1896;
  double t1898;
  double t1899;
  double t1900;
  double t1902;
  double t1903;
  double t1904;
  double t1906;
  double t1907;
  double t1908;
  double t1910;
  double t1911;
  double t1912;
  double t1914;
  double t1915;
  double t1916;
  double t1918;
  double t1919;
  double t1920;
  double t1922;
  double t1923;
  double t1924;
  double t1926;
  double t1927;
  double t1928;
  t1445 = Cos(var1[3]);
  t1409 = Cos(var1[5]);
  t1449 = Sin(var1[4]);
  t1417 = Sin(var1[3]);
  t1452 = Sin(var1[5]);
  t1304 = Cos(var1[6]);
  t1427 = -1.*t1409*t1417;
  t1455 = t1445*t1449*t1452;
  t1456 = t1427 + t1455;
  t1459 = t1445*t1409*t1449;
  t1463 = t1417*t1452;
  t1466 = t1459 + t1463;
  t1469 = Sin(var1[6]);
  t1481 = Cos(var1[7]);
  t1513 = t1304*t1466;
  t1517 = -1.*t1456*t1469;
  t1520 = t1513 + t1517;
  t1501 = t1304*t1456;
  t1503 = t1466*t1469;
  t1507 = t1501 + t1503;
  t1531 = Sin(var1[7]);
  t1611 = Cos(var1[8]);
  t1612 = -1.*t1611;
  t1613 = 1. + t1612;
  t1616 = Sin(var1[8]);
  t1600 = t1481*t1507;
  t1607 = t1520*t1531;
  t1609 = t1600 + t1607;
  t1624 = Cos(var1[4]);
  t1550 = Cos(var1[9]);
  t1562 = -1.*t1550;
  t1563 = 1. + t1562;
  t1572 = Sin(var1[9]);
  t1587 = t1481*t1520;
  t1591 = -1.*t1507*t1531;
  t1594 = t1587 + t1591;
  t1653 = t1445*t1624*t1611;
  t1654 = t1609*t1616;
  t1655 = t1653 + t1654;
  t1658 = Cos(var1[10]);
  t1660 = -1.*t1658;
  t1665 = 1. + t1660;
  t1669 = Sin(var1[10]);
  t1672 = t1572*t1594;
  t1674 = t1550*t1655;
  t1676 = t1672 + t1674;
  t1686 = t1550*t1594;
  t1687 = -1.*t1572*t1655;
  t1690 = t1686 + t1687;
  t1692 = Cos(var1[11]);
  t1694 = -1.*t1692;
  t1696 = 1. + t1694;
  t1701 = Sin(var1[11]);
  t1704 = -1.*t1669*t1676;
  t1706 = t1658*t1690;
  t1707 = t1704 + t1706;
  t1718 = t1658*t1676;
  t1719 = t1669*t1690;
  t1720 = t1718 + t1719;
  t1724 = Cos(var1[12]);
  t1726 = -1.*t1724;
  t1727 = 1. + t1726;
  t1731 = Sin(var1[12]);
  t1736 = t1701*t1707;
  t1737 = t1692*t1720;
  t1738 = t1736 + t1737;
  t1744 = t1692*t1707;
  t1746 = -1.*t1701*t1720;
  t1750 = t1744 + t1746;
  t1755 = Cos(var1[13]);
  t1756 = -1.*t1755;
  t1758 = 1. + t1756;
  t1762 = Sin(var1[13]);
  t1767 = -1.*t1731*t1738;
  t1768 = t1724*t1750;
  t1769 = t1767 + t1768;
  t1776 = t1724*t1738;
  t1777 = t1731*t1750;
  t1778 = t1776 + t1777;
  t1352 = -1.*t1304;
  t1361 = 1. + t1352;
  t1376 = 0.135*t1361;
  t1379 = 0. + t1376;
  t1470 = -0.135*t1469;
  t1473 = 0. + t1470;
  t1483 = -1.*t1481;
  t1485 = 1. + t1483;
  t1499 = 0.135*t1485;
  t1500 = 0. + t1499;
  t1789 = t1445*t1409;
  t1790 = t1417*t1449*t1452;
  t1793 = t1789 + t1790;
  t1795 = t1409*t1417*t1449;
  t1796 = -1.*t1445*t1452;
  t1797 = t1795 + t1796;
  t1532 = -0.135*t1531;
  t1547 = 0. + t1532;
  t1566 = -0.09*t1563;
  t1579 = 0.049*t1572;
  t1581 = 0. + t1566 + t1579;
  t1805 = t1304*t1797;
  t1806 = -1.*t1793*t1469;
  t1807 = t1805 + t1806;
  t1799 = t1304*t1793;
  t1800 = t1797*t1469;
  t1803 = t1799 + t1800;
  t1615 = 0.135*t1613;
  t1618 = 0.049*t1616;
  t1619 = 0. + t1615 + t1618;
  t1626 = -0.049*t1613;
  t1628 = 0.135*t1616;
  t1629 = 0. + t1626 + t1628;
  t1815 = t1481*t1803;
  t1816 = t1807*t1531;
  t1817 = t1815 + t1816;
  t1644 = -0.049*t1563;
  t1648 = -0.09*t1572;
  t1652 = 0. + t1644 + t1648;
  t1668 = -0.049*t1665;
  t1670 = -0.21*t1669;
  t1671 = 0. + t1668 + t1670;
  t1809 = t1481*t1807;
  t1810 = -1.*t1803*t1531;
  t1813 = t1809 + t1810;
  t1826 = t1624*t1611*t1417;
  t1827 = t1817*t1616;
  t1828 = t1826 + t1827;
  t1679 = -0.21*t1665;
  t1681 = 0.049*t1669;
  t1684 = 0. + t1679 + t1681;
  t1699 = -0.2707*t1696;
  t1702 = 0.0016*t1701;
  t1703 = 0. + t1699 + t1702;
  t1830 = t1572*t1813;
  t1831 = t1550*t1828;
  t1832 = t1830 + t1831;
  t1834 = t1550*t1813;
  t1835 = -1.*t1572*t1828;
  t1836 = t1834 + t1835;
  t1714 = -0.0016*t1696;
  t1716 = -0.2707*t1701;
  t1717 = 0. + t1714 + t1716;
  t1728 = 0.0184*t1727;
  t1733 = -0.7055*t1731;
  t1734 = 0. + t1728 + t1733;
  t1838 = -1.*t1669*t1832;
  t1839 = t1658*t1836;
  t1840 = t1838 + t1839;
  t1842 = t1658*t1832;
  t1843 = t1669*t1836;
  t1844 = t1842 + t1843;
  t1740 = -0.7055*t1727;
  t1742 = -0.0184*t1731;
  t1743 = 0. + t1740 + t1742;
  t1759 = -1.1135*t1758;
  t1763 = 0.0216*t1762;
  t1764 = 0. + t1759 + t1763;
  t1846 = t1701*t1840;
  t1847 = t1692*t1844;
  t1848 = t1846 + t1847;
  t1850 = t1692*t1840;
  t1851 = -1.*t1701*t1844;
  t1852 = t1850 + t1851;
  t1771 = -0.0216*t1758;
  t1772 = -1.1135*t1762;
  t1775 = 0. + t1771 + t1772;
  t1854 = -1.*t1731*t1848;
  t1855 = t1724*t1852;
  t1856 = t1854 + t1855;
  t1858 = t1724*t1848;
  t1859 = t1731*t1852;
  t1860 = t1858 + t1859;
  t1877 = t1624*t1409*t1304;
  t1878 = -1.*t1624*t1452*t1469;
  t1879 = t1877 + t1878;
  t1873 = t1624*t1304*t1452;
  t1874 = t1624*t1409*t1469;
  t1875 = t1873 + t1874;
  t1885 = t1481*t1875;
  t1886 = t1879*t1531;
  t1887 = t1885 + t1886;
  t1881 = t1481*t1879;
  t1882 = -1.*t1875*t1531;
  t1883 = t1881 + t1882;
  t1894 = -1.*t1611*t1449;
  t1895 = t1887*t1616;
  t1896 = t1894 + t1895;
  t1898 = t1572*t1883;
  t1899 = t1550*t1896;
  t1900 = t1898 + t1899;
  t1902 = t1550*t1883;
  t1903 = -1.*t1572*t1896;
  t1904 = t1902 + t1903;
  t1906 = -1.*t1669*t1900;
  t1907 = t1658*t1904;
  t1908 = t1906 + t1907;
  t1910 = t1658*t1900;
  t1911 = t1669*t1904;
  t1912 = t1910 + t1911;
  t1914 = t1701*t1908;
  t1915 = t1692*t1912;
  t1916 = t1914 + t1915;
  t1918 = t1692*t1908;
  t1919 = -1.*t1701*t1912;
  t1920 = t1918 + t1919;
  t1922 = -1.*t1731*t1916;
  t1923 = t1724*t1920;
  t1924 = t1922 + t1923;
  t1926 = t1724*t1916;
  t1927 = t1731*t1920;
  t1928 = t1926 + t1927;
  p_output1[0]=0. + t1379*t1456 + t1466*t1473 + t1500*t1507 + t1520*t1547 + t1581*t1594 + t1609*t1619 + 0.1305*(t1609*t1611 - 1.*t1445*t1616*t1624) + t1445*t1624*t1629 + t1652*t1655 + t1671*t1676 + t1684*t1690 + t1703*t1707 + t1717*t1720 + t1734*t1738 + t1743*t1750 + t1764*t1769 + t1775*t1778 - 0.0216*(t1762*t1769 + t1755*t1778) - 1.193387*(t1755*t1769 - 1.*t1762*t1778) + var1[0];
  p_output1[1]=0. + t1417*t1624*t1629 + t1379*t1793 + t1473*t1797 + t1500*t1803 + t1547*t1807 + t1581*t1813 + t1619*t1817 + 0.1305*(-1.*t1417*t1616*t1624 + t1611*t1817) + t1652*t1828 + t1671*t1832 + t1684*t1836 + t1703*t1840 + t1717*t1844 + t1734*t1848 + t1743*t1852 + t1764*t1856 + t1775*t1860 - 0.0216*(t1762*t1856 + t1755*t1860) - 1.193387*(t1755*t1856 - 1.*t1762*t1860) + var1[1];
  p_output1[2]=0. + t1379*t1452*t1624 + t1409*t1473*t1624 - 1.*t1449*t1629 + t1500*t1875 + t1547*t1879 + t1581*t1883 + t1619*t1887 + 0.1305*(t1449*t1616 + t1611*t1887) + t1652*t1896 + t1671*t1900 + t1684*t1904 + t1703*t1908 + t1717*t1912 + t1734*t1916 + t1743*t1920 + t1764*t1924 + t1775*t1928 - 0.0216*(t1762*t1924 + t1755*t1928) - 1.193387*(t1755*t1924 - 1.*t1762*t1928) + var1[2];
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

#include "p_LeftToeBottomBack.hh"

namespace SymExpression
{

void p_LeftToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
