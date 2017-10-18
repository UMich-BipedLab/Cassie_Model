/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:51 GMT-04:00
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
  double t1473;
  double t1500;
  double t1470;
  double t1479;
  double t1501;
  double t1466;
  double t1520;
  double t1532;
  double t1547;
  double t1499;
  double t1503;
  double t1510;
  double t1548;
  double t1463;
  double t1587;
  double t1594;
  double t1598;
  double t1513;
  double t1566;
  double t1579;
  double t1600;
  double t1619;
  double t1581;
  double t1607;
  double t1615;
  double t1459;
  double t1623;
  double t1626;
  double t1628;
  double t1634;
  double t1635;
  double t1637;
  double t1638;
  double t1642;
  double t1644;
  double t1654;
  double t1618;
  double t1648;
  double t1652;
  double t1458;
  double t1656;
  double t1668;
  double t1670;
  double t1678;
  double t1653;
  double t1671;
  double t1672;
  double t1455;
  double t1679;
  double t1681;
  double t1684;
  double t1699;
  double t1674;
  double t1686;
  double t1690;
  double t1379;
  double t1702;
  double t1703;
  double t1706;
  double t1376;
  double t1739;
  double t1740;
  double t1742;
  double t1733;
  double t1734;
  double t1736;
  double t1752;
  double t1759;
  double t1763;
  double t1737;
  double t1743;
  double t1744;
  double t1750;
  double t1764;
  double t1768;
  double t1771;
  double t1772;
  double t1775;
  double t1776;
  double t1777;
  double t1779;
  double t1770;
  double t1780;
  double t1781;
  double t1783;
  double t1784;
  double t1785;
  double t1782;
  double t1786;
  double t1787;
  double t1789;
  double t1790;
  double t1794;
  double t1716;
  double t1788;
  double t1795;
  double t1797;
  double t1799;
  double t1800;
  double t1804;
  double t1824;
  double t1825;
  double t1826;
  double t1818;
  double t1819;
  double t1820;
  double t1823;
  double t1827;
  double t1829;
  double t1831;
  double t1833;
  double t1834;
  double t1836;
  double t1837;
  double t1839;
  double t1830;
  double t1840;
  double t1841;
  double t1843;
  double t1845;
  double t1846;
  double t1842;
  double t1847;
  double t1849;
  double t1852;
  double t1853;
  double t1855;
  double t1850;
  double t1857;
  double t1858;
  double t1861;
  double t1862;
  double t1863;
  double t1691;
  double t1707;
  double t1710;
  double t1717;
  double t1718;
  double t1719;
  double t1798;
  double t1805;
  double t1807;
  double t1809;
  double t1813;
  double t1814;
  double t1859;
  double t1864;
  double t1865;
  double t1867;
  double t1868;
  double t1869;
  double t1925;
  double t1926;
  double t1915;
  double t1917;
  double t1944;
  double t1945;
  double t1954;
  double t1955;
  double t1964;
  double t1965;
  double t1974;
  double t1975;
  double t1714;
  double t1721;
  double t1728;
  double t1893;
  double t1895;
  double t1897;
  double t1898;
  double t1901;
  double t1902;
  double t1905;
  double t1907;
  double t1908;
  double t1909;
  double t1911;
  double t1913;
  double t1918;
  double t1920;
  double t1921;
  double t1927;
  double t1929;
  double t1930;
  double t1932;
  double t1933;
  double t1934;
  double t1940;
  double t1941;
  double t1942;
  double t1946;
  double t1947;
  double t1948;
  double t1950;
  double t1951;
  double t1952;
  double t1956;
  double t1957;
  double t1958;
  double t1960;
  double t1961;
  double t1962;
  double t1966;
  double t1967;
  double t1968;
  double t1970;
  double t1971;
  double t1972;
  double t1976;
  double t1977;
  double t1978;
  double t1980;
  double t1981;
  double t1982;
  double t1808;
  double t1815;
  double t1816;
  double t1866;
  double t1870;
  double t1871;
  t1473 = Cos(var1[5]);
  t1500 = Sin(var1[3]);
  t1470 = Cos(var1[3]);
  t1479 = Sin(var1[4]);
  t1501 = Sin(var1[5]);
  t1466 = Cos(var1[6]);
  t1520 = -1.*t1473*t1500;
  t1532 = t1470*t1479*t1501;
  t1547 = t1520 + t1532;
  t1499 = t1470*t1473*t1479;
  t1503 = t1500*t1501;
  t1510 = t1499 + t1503;
  t1548 = Sin(var1[6]);
  t1463 = Cos(var1[7]);
  t1587 = t1466*t1547;
  t1594 = t1510*t1548;
  t1598 = t1587 + t1594;
  t1513 = t1466*t1510;
  t1566 = -1.*t1547*t1548;
  t1579 = t1513 + t1566;
  t1600 = Sin(var1[7]);
  t1619 = Cos(var1[9]);
  t1581 = t1463*t1579;
  t1607 = -1.*t1598*t1600;
  t1615 = t1581 + t1607;
  t1459 = Sin(var1[9]);
  t1623 = Cos(var1[4]);
  t1626 = Cos(var1[8]);
  t1628 = t1470*t1623*t1626;
  t1634 = t1463*t1598;
  t1635 = t1579*t1600;
  t1637 = t1634 + t1635;
  t1638 = Sin(var1[8]);
  t1642 = t1637*t1638;
  t1644 = t1628 + t1642;
  t1654 = Cos(var1[10]);
  t1618 = t1459*t1615;
  t1648 = t1619*t1644;
  t1652 = t1618 + t1648;
  t1458 = Sin(var1[10]);
  t1656 = t1619*t1615;
  t1668 = -1.*t1459*t1644;
  t1670 = t1656 + t1668;
  t1678 = Cos(var1[11]);
  t1653 = -1.*t1458*t1652;
  t1671 = t1654*t1670;
  t1672 = t1653 + t1671;
  t1455 = Sin(var1[11]);
  t1679 = t1654*t1652;
  t1681 = t1458*t1670;
  t1684 = t1679 + t1681;
  t1699 = Cos(var1[12]);
  t1674 = t1455*t1672;
  t1686 = t1678*t1684;
  t1690 = t1674 + t1686;
  t1379 = Sin(var1[12]);
  t1702 = t1678*t1672;
  t1703 = -1.*t1455*t1684;
  t1706 = t1702 + t1703;
  t1376 = Sin(var1[13]);
  t1739 = t1470*t1473;
  t1740 = t1500*t1479*t1501;
  t1742 = t1739 + t1740;
  t1733 = t1473*t1500*t1479;
  t1734 = -1.*t1470*t1501;
  t1736 = t1733 + t1734;
  t1752 = t1466*t1742;
  t1759 = t1736*t1548;
  t1763 = t1752 + t1759;
  t1737 = t1466*t1736;
  t1743 = -1.*t1742*t1548;
  t1744 = t1737 + t1743;
  t1750 = t1463*t1744;
  t1764 = -1.*t1763*t1600;
  t1768 = t1750 + t1764;
  t1771 = t1623*t1626*t1500;
  t1772 = t1463*t1763;
  t1775 = t1744*t1600;
  t1776 = t1772 + t1775;
  t1777 = t1776*t1638;
  t1779 = t1771 + t1777;
  t1770 = t1459*t1768;
  t1780 = t1619*t1779;
  t1781 = t1770 + t1780;
  t1783 = t1619*t1768;
  t1784 = -1.*t1459*t1779;
  t1785 = t1783 + t1784;
  t1782 = -1.*t1458*t1781;
  t1786 = t1654*t1785;
  t1787 = t1782 + t1786;
  t1789 = t1654*t1781;
  t1790 = t1458*t1785;
  t1794 = t1789 + t1790;
  t1716 = Cos(var1[13]);
  t1788 = t1455*t1787;
  t1795 = t1678*t1794;
  t1797 = t1788 + t1795;
  t1799 = t1678*t1787;
  t1800 = -1.*t1455*t1794;
  t1804 = t1799 + t1800;
  t1824 = t1623*t1466*t1501;
  t1825 = t1623*t1473*t1548;
  t1826 = t1824 + t1825;
  t1818 = t1623*t1473*t1466;
  t1819 = -1.*t1623*t1501*t1548;
  t1820 = t1818 + t1819;
  t1823 = t1463*t1820;
  t1827 = -1.*t1826*t1600;
  t1829 = t1823 + t1827;
  t1831 = -1.*t1626*t1479;
  t1833 = t1463*t1826;
  t1834 = t1820*t1600;
  t1836 = t1833 + t1834;
  t1837 = t1836*t1638;
  t1839 = t1831 + t1837;
  t1830 = t1459*t1829;
  t1840 = t1619*t1839;
  t1841 = t1830 + t1840;
  t1843 = t1619*t1829;
  t1845 = -1.*t1459*t1839;
  t1846 = t1843 + t1845;
  t1842 = -1.*t1458*t1841;
  t1847 = t1654*t1846;
  t1849 = t1842 + t1847;
  t1852 = t1654*t1841;
  t1853 = t1458*t1846;
  t1855 = t1852 + t1853;
  t1850 = t1455*t1849;
  t1857 = t1678*t1855;
  t1858 = t1850 + t1857;
  t1861 = t1678*t1849;
  t1862 = -1.*t1455*t1855;
  t1863 = t1861 + t1862;
  t1691 = -1.*t1379*t1690;
  t1707 = t1699*t1706;
  t1710 = t1691 + t1707;
  t1717 = t1699*t1690;
  t1718 = t1379*t1706;
  t1719 = t1717 + t1718;
  t1798 = -1.*t1379*t1797;
  t1805 = t1699*t1804;
  t1807 = t1798 + t1805;
  t1809 = t1699*t1797;
  t1813 = t1379*t1804;
  t1814 = t1809 + t1813;
  t1859 = -1.*t1379*t1858;
  t1864 = t1699*t1863;
  t1865 = t1859 + t1864;
  t1867 = t1699*t1858;
  t1868 = t1379*t1863;
  t1869 = t1867 + t1868;
  t1925 = -1.*t1626;
  t1926 = 1. + t1925;
  t1915 = -1.*t1619;
  t1917 = 1. + t1915;
  t1944 = -1.*t1654;
  t1945 = 1. + t1944;
  t1954 = -1.*t1678;
  t1955 = 1. + t1954;
  t1964 = -1.*t1699;
  t1965 = 1. + t1964;
  t1974 = -1.*t1716;
  t1975 = 1. + t1974;
  t1714 = t1376*t1710;
  t1721 = t1716*t1719;
  t1728 = t1714 + t1721;
  t1893 = -1.*t1466;
  t1895 = 1. + t1893;
  t1897 = 0.135*t1895;
  t1898 = 0. + t1897;
  t1901 = -0.135*t1548;
  t1902 = 0. + t1901;
  t1905 = -1.*t1463;
  t1907 = 1. + t1905;
  t1908 = 0.135*t1907;
  t1909 = 0. + t1908;
  t1911 = -0.135*t1600;
  t1913 = 0. + t1911;
  t1918 = -0.09*t1917;
  t1920 = 0.049*t1459;
  t1921 = 0. + t1918 + t1920;
  t1927 = 0.135*t1926;
  t1929 = 0.049*t1638;
  t1930 = 0. + t1927 + t1929;
  t1932 = -0.049*t1926;
  t1933 = 0.135*t1638;
  t1934 = 0. + t1932 + t1933;
  t1940 = -0.049*t1917;
  t1941 = -0.09*t1459;
  t1942 = 0. + t1940 + t1941;
  t1946 = -0.049*t1945;
  t1947 = -0.21*t1458;
  t1948 = 0. + t1946 + t1947;
  t1950 = -0.21*t1945;
  t1951 = 0.049*t1458;
  t1952 = 0. + t1950 + t1951;
  t1956 = -0.2707*t1955;
  t1957 = 0.0016*t1455;
  t1958 = 0. + t1956 + t1957;
  t1960 = -0.0016*t1955;
  t1961 = -0.2707*t1455;
  t1962 = 0. + t1960 + t1961;
  t1966 = 0.0184*t1965;
  t1967 = -0.7055*t1379;
  t1968 = 0. + t1966 + t1967;
  t1970 = -0.7055*t1965;
  t1971 = -0.0184*t1379;
  t1972 = 0. + t1970 + t1971;
  t1976 = -1.1135*t1975;
  t1977 = 0.0216*t1376;
  t1978 = 0. + t1976 + t1977;
  t1980 = -0.0216*t1975;
  t1981 = -1.1135*t1376;
  t1982 = 0. + t1980 + t1981;
  t1808 = t1376*t1807;
  t1815 = t1716*t1814;
  t1816 = t1808 + t1815;
  t1866 = t1376*t1865;
  t1870 = t1716*t1869;
  t1871 = t1866 + t1870;
  p_output1[0]=t1728;
  p_output1[1]=t1816;
  p_output1[2]=t1871;
  p_output1[3]=0.;
  p_output1[4]=-1.*t1626*t1637 + t1470*t1623*t1638;
  p_output1[5]=t1500*t1623*t1638 - 1.*t1626*t1776;
  p_output1[6]=-1.*t1479*t1638 - 1.*t1626*t1836;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1710*t1716 + t1376*t1719;
  p_output1[9]=-1.*t1716*t1807 + t1376*t1814;
  p_output1[10]=-1.*t1716*t1865 + t1376*t1869;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1626*t1637 - 1.*t1470*t1623*t1638) - 1.193387*(t1710*t1716 - 1.*t1376*t1719) - 0.0216*t1728 + t1547*t1898 + t1510*t1902 + t1598*t1909 + t1579*t1913 + t1615*t1921 + t1637*t1930 + t1470*t1623*t1934 + t1644*t1942 + t1652*t1948 + t1670*t1952 + t1672*t1958 + t1684*t1962 + t1690*t1968 + t1706*t1972 + t1710*t1978 + t1719*t1982 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1500*t1623*t1638 + t1626*t1776) - 1.193387*(t1716*t1807 - 1.*t1376*t1814) - 0.0216*t1816 + t1742*t1898 + t1736*t1902 + t1763*t1909 + t1744*t1913 + t1768*t1921 + t1776*t1930 + t1500*t1623*t1934 + t1779*t1942 + t1781*t1948 + t1785*t1952 + t1787*t1958 + t1794*t1962 + t1797*t1968 + t1804*t1972 + t1807*t1978 + t1814*t1982 + var1[1];
  p_output1[14]=0. + 0.1305*(t1479*t1638 + t1626*t1836) - 1.193387*(t1716*t1865 - 1.*t1376*t1869) - 0.0216*t1871 + t1501*t1623*t1898 + t1473*t1623*t1902 + t1826*t1909 + t1820*t1913 + t1829*t1921 + t1836*t1930 - 1.*t1479*t1934 + t1839*t1942 + t1841*t1948 + t1846*t1952 + t1849*t1958 + t1855*t1962 + t1858*t1968 + t1863*t1972 + t1865*t1978 + t1869*t1982 + var1[2];
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

#include "H_LeftToeBottomBack.hh"

namespace SymExpression
{

void H_LeftToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
