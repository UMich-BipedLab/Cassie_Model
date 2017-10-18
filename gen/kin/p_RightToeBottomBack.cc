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
  double t1499;
  double t1635;
  double t1656;
  double t1642;
  double t1670;
  double t1618;
  double t1648;
  double t1671;
  double t1672;
  double t1679;
  double t1707;
  double t1714;
  double t1717;
  double t1752;
  double t1739;
  double t1740;
  double t1744;
  double t1721;
  double t1770;
  double t1771;
  double t1772;
  double t1510;
  double t1513;
  double t1532;
  double t1581;
  double t1503;
  double t1809;
  double t1813;
  double t1815;
  double t1777;
  double t1780;
  double t1783;
  double t1786;
  double t1789;
  double t1790;
  double t1795;
  double t1833;
  double t1834;
  double t1837;
  double t1843;
  double t1846;
  double t1847;
  double t1850;
  double t1857;
  double t1861;
  double t1863;
  double t1870;
  double t1871;
  double t1872;
  double t1874;
  double t1876;
  double t1877;
  double t1880;
  double t1884;
  double t1885;
  double t1886;
  double t1891;
  double t1892;
  double t1897;
  double t1899;
  double t1901;
  double t1902;
  double t1908;
  double t1911;
  double t1913;
  double t1914;
  double t1927;
  double t1929;
  double t1930;
  double t1932;
  double t1933;
  double t1935;
  double t1937;
  double t1940;
  double t1941;
  double t1942;
  double t1949;
  double t1950;
  double t1951;
  double t1579;
  double t1587;
  double t1594;
  double t1628;
  double t1634;
  double t1681;
  double t1686;
  double t1702;
  double t1706;
  double t1728;
  double t1733;
  double t1736;
  double t1737;
  double t1967;
  double t1968;
  double t1969;
  double t1971;
  double t1972;
  double t1973;
  double t1759;
  double t1768;
  double t1785;
  double t1787;
  double t1788;
  double t1977;
  double t1978;
  double t1979;
  double t1981;
  double t1982;
  double t1983;
  double t1804;
  double t1805;
  double t1808;
  double t1989;
  double t1990;
  double t1991;
  double t1825;
  double t1829;
  double t1830;
  double t1849;
  double t1852;
  double t1853;
  double t1985;
  double t1986;
  double t1987;
  double t1997;
  double t1998;
  double t1999;
  double t1866;
  double t1867;
  double t1868;
  double t1879;
  double t1881;
  double t1883;
  double t2002;
  double t2003;
  double t2004;
  double t2006;
  double t2007;
  double t2008;
  double t1888;
  double t1889;
  double t1890;
  double t1904;
  double t1909;
  double t1910;
  double t2010;
  double t2011;
  double t2012;
  double t2014;
  double t2015;
  double t2016;
  double t1920;
  double t1921;
  double t1923;
  double t1936;
  double t1938;
  double t1939;
  double t2018;
  double t2019;
  double t2020;
  double t2022;
  double t2023;
  double t2024;
  double t1946;
  double t1947;
  double t1948;
  double t2026;
  double t2027;
  double t2028;
  double t2030;
  double t2031;
  double t2032;
  double t2046;
  double t2047;
  double t2048;
  double t2050;
  double t2051;
  double t2052;
  double t2058;
  double t2059;
  double t2060;
  double t2054;
  double t2055;
  double t2056;
  double t2066;
  double t2067;
  double t2068;
  double t2070;
  double t2071;
  double t2072;
  double t2074;
  double t2075;
  double t2076;
  double t2078;
  double t2079;
  double t2080;
  double t2082;
  double t2083;
  double t2084;
  double t2086;
  double t2087;
  double t2088;
  double t2090;
  double t2091;
  double t2092;
  double t2094;
  double t2095;
  double t2096;
  double t2098;
  double t2099;
  double t2100;
  t1499 = Cos(var1[3]);
  t1635 = Cos(var1[5]);
  t1656 = Sin(var1[3]);
  t1642 = Sin(var1[4]);
  t1670 = Sin(var1[5]);
  t1618 = Sin(var1[14]);
  t1648 = t1499*t1635*t1642;
  t1671 = t1656*t1670;
  t1672 = t1648 + t1671;
  t1679 = Cos(var1[14]);
  t1707 = -1.*t1635*t1656;
  t1714 = t1499*t1642*t1670;
  t1717 = t1707 + t1714;
  t1752 = Sin(var1[15]);
  t1739 = t1618*t1672;
  t1740 = t1679*t1717;
  t1744 = t1739 + t1740;
  t1721 = Cos(var1[15]);
  t1770 = t1679*t1672;
  t1771 = -1.*t1618*t1717;
  t1772 = t1770 + t1771;
  t1510 = Cos(var1[16]);
  t1513 = -1.*t1510;
  t1532 = 1. + t1513;
  t1581 = Sin(var1[16]);
  t1503 = Cos(var1[4]);
  t1809 = t1721*t1744;
  t1813 = t1752*t1772;
  t1815 = t1809 + t1813;
  t1777 = Cos(var1[17]);
  t1780 = -1.*t1777;
  t1783 = 1. + t1780;
  t1786 = Sin(var1[17]);
  t1789 = -1.*t1752*t1744;
  t1790 = t1721*t1772;
  t1795 = t1789 + t1790;
  t1833 = t1510*t1499*t1503;
  t1834 = t1581*t1815;
  t1837 = t1833 + t1834;
  t1843 = Cos(var1[18]);
  t1846 = -1.*t1843;
  t1847 = 1. + t1846;
  t1850 = Sin(var1[18]);
  t1857 = t1786*t1795;
  t1861 = t1777*t1837;
  t1863 = t1857 + t1861;
  t1870 = t1777*t1795;
  t1871 = -1.*t1786*t1837;
  t1872 = t1870 + t1871;
  t1874 = Cos(var1[19]);
  t1876 = -1.*t1874;
  t1877 = 1. + t1876;
  t1880 = Sin(var1[19]);
  t1884 = -1.*t1850*t1863;
  t1885 = t1843*t1872;
  t1886 = t1884 + t1885;
  t1891 = t1843*t1863;
  t1892 = t1850*t1872;
  t1897 = t1891 + t1892;
  t1899 = Cos(var1[20]);
  t1901 = -1.*t1899;
  t1902 = 1. + t1901;
  t1908 = Sin(var1[20]);
  t1911 = t1880*t1886;
  t1913 = t1874*t1897;
  t1914 = t1911 + t1913;
  t1927 = t1874*t1886;
  t1929 = -1.*t1880*t1897;
  t1930 = t1927 + t1929;
  t1932 = Cos(var1[21]);
  t1933 = -1.*t1932;
  t1935 = 1. + t1933;
  t1937 = Sin(var1[21]);
  t1940 = -1.*t1908*t1914;
  t1941 = t1899*t1930;
  t1942 = t1940 + t1941;
  t1949 = t1899*t1914;
  t1950 = t1908*t1930;
  t1951 = t1949 + t1950;
  t1579 = -0.049*t1532;
  t1587 = -0.135*t1581;
  t1594 = 0. + t1579 + t1587;
  t1628 = 0.135*t1618;
  t1634 = 0. + t1628;
  t1681 = -1.*t1679;
  t1686 = 1. + t1681;
  t1702 = -0.135*t1686;
  t1706 = 0. + t1702;
  t1728 = -1.*t1721;
  t1733 = 1. + t1728;
  t1736 = -0.135*t1733;
  t1737 = 0. + t1736;
  t1967 = t1635*t1656*t1642;
  t1968 = -1.*t1499*t1670;
  t1969 = t1967 + t1968;
  t1971 = t1499*t1635;
  t1972 = t1656*t1642*t1670;
  t1973 = t1971 + t1972;
  t1759 = 0.135*t1752;
  t1768 = 0. + t1759;
  t1785 = -0.09*t1783;
  t1787 = 0.049*t1786;
  t1788 = 0. + t1785 + t1787;
  t1977 = t1618*t1969;
  t1978 = t1679*t1973;
  t1979 = t1977 + t1978;
  t1981 = t1679*t1969;
  t1982 = -1.*t1618*t1973;
  t1983 = t1981 + t1982;
  t1804 = -0.135*t1532;
  t1805 = 0.049*t1581;
  t1808 = 0. + t1804 + t1805;
  t1989 = t1721*t1979;
  t1990 = t1752*t1983;
  t1991 = t1989 + t1990;
  t1825 = -0.049*t1783;
  t1829 = -0.09*t1786;
  t1830 = 0. + t1825 + t1829;
  t1849 = -0.049*t1847;
  t1852 = -0.21*t1850;
  t1853 = 0. + t1849 + t1852;
  t1985 = -1.*t1752*t1979;
  t1986 = t1721*t1983;
  t1987 = t1985 + t1986;
  t1997 = t1510*t1503*t1656;
  t1998 = t1581*t1991;
  t1999 = t1997 + t1998;
  t1866 = -0.21*t1847;
  t1867 = 0.049*t1850;
  t1868 = 0. + t1866 + t1867;
  t1879 = -0.2707*t1877;
  t1881 = 0.0016*t1880;
  t1883 = 0. + t1879 + t1881;
  t2002 = t1786*t1987;
  t2003 = t1777*t1999;
  t2004 = t2002 + t2003;
  t2006 = t1777*t1987;
  t2007 = -1.*t1786*t1999;
  t2008 = t2006 + t2007;
  t1888 = -0.0016*t1877;
  t1889 = -0.2707*t1880;
  t1890 = 0. + t1888 + t1889;
  t1904 = 0.0184*t1902;
  t1909 = -0.7055*t1908;
  t1910 = 0. + t1904 + t1909;
  t2010 = -1.*t1850*t2004;
  t2011 = t1843*t2008;
  t2012 = t2010 + t2011;
  t2014 = t1843*t2004;
  t2015 = t1850*t2008;
  t2016 = t2014 + t2015;
  t1920 = -0.7055*t1902;
  t1921 = -0.0184*t1908;
  t1923 = 0. + t1920 + t1921;
  t1936 = -1.1135*t1935;
  t1938 = 0.0216*t1937;
  t1939 = 0. + t1936 + t1938;
  t2018 = t1880*t2012;
  t2019 = t1874*t2016;
  t2020 = t2018 + t2019;
  t2022 = t1874*t2012;
  t2023 = -1.*t1880*t2016;
  t2024 = t2022 + t2023;
  t1946 = -0.0216*t1935;
  t1947 = -1.1135*t1937;
  t1948 = 0. + t1946 + t1947;
  t2026 = -1.*t1908*t2020;
  t2027 = t1899*t2024;
  t2028 = t2026 + t2027;
  t2030 = t1899*t2020;
  t2031 = t1908*t2024;
  t2032 = t2030 + t2031;
  t2046 = t1503*t1635*t1618;
  t2047 = t1679*t1503*t1670;
  t2048 = t2046 + t2047;
  t2050 = t1679*t1503*t1635;
  t2051 = -1.*t1503*t1618*t1670;
  t2052 = t2050 + t2051;
  t2058 = t1721*t2048;
  t2059 = t1752*t2052;
  t2060 = t2058 + t2059;
  t2054 = -1.*t1752*t2048;
  t2055 = t1721*t2052;
  t2056 = t2054 + t2055;
  t2066 = -1.*t1510*t1642;
  t2067 = t1581*t2060;
  t2068 = t2066 + t2067;
  t2070 = t1786*t2056;
  t2071 = t1777*t2068;
  t2072 = t2070 + t2071;
  t2074 = t1777*t2056;
  t2075 = -1.*t1786*t2068;
  t2076 = t2074 + t2075;
  t2078 = -1.*t1850*t2072;
  t2079 = t1843*t2076;
  t2080 = t2078 + t2079;
  t2082 = t1843*t2072;
  t2083 = t1850*t2076;
  t2084 = t2082 + t2083;
  t2086 = t1880*t2080;
  t2087 = t1874*t2084;
  t2088 = t2086 + t2087;
  t2090 = t1874*t2080;
  t2091 = -1.*t1880*t2084;
  t2092 = t2090 + t2091;
  t2094 = -1.*t1908*t2088;
  t2095 = t1899*t2092;
  t2096 = t2094 + t2095;
  t2098 = t1899*t2088;
  t2099 = t1908*t2092;
  t2100 = t2098 + t2099;
  p_output1[0]=0. + t1499*t1503*t1594 + t1634*t1672 + t1706*t1717 + t1737*t1744 + t1768*t1772 + t1788*t1795 + t1808*t1815 - 0.1305*(-1.*t1499*t1503*t1581 + t1510*t1815) + t1830*t1837 + t1853*t1863 + t1868*t1872 + t1883*t1886 + t1890*t1897 + t1910*t1914 + t1923*t1930 + t1939*t1942 + t1948*t1951 - 0.0216*(t1937*t1942 + t1932*t1951) - 1.193387*(t1932*t1942 - 1.*t1937*t1951) + var1[0];
  p_output1[1]=0. + t1503*t1594*t1656 + t1634*t1969 + t1706*t1973 + t1737*t1979 + t1768*t1983 + t1788*t1987 + t1808*t1991 - 0.1305*(-1.*t1503*t1581*t1656 + t1510*t1991) + t1830*t1999 + t1853*t2004 + t1868*t2008 + t1883*t2012 + t1890*t2016 + t1910*t2020 + t1923*t2024 + t1939*t2028 + t1948*t2032 - 0.0216*(t1937*t2028 + t1932*t2032) - 1.193387*(t1932*t2028 - 1.*t1937*t2032) + var1[1];
  p_output1[2]=0. + t1503*t1634*t1635 - 1.*t1594*t1642 + t1503*t1670*t1706 + t1737*t2048 + t1768*t2052 + t1788*t2056 + t1808*t2060 - 0.1305*(t1581*t1642 + t1510*t2060) + t1830*t2068 + t1853*t2072 + t1868*t2076 + t1883*t2080 + t1890*t2084 + t1910*t2088 + t1923*t2092 + t1939*t2096 + t1948*t2100 - 0.0216*(t1937*t2096 + t1932*t2100) - 1.193387*(t1932*t2096 - 1.*t1937*t2100) + var1[2];
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

#include "p_RightToeBottomBack.hh"

namespace SymExpression
{

void p_RightToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
