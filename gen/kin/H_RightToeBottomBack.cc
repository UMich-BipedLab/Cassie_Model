/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:52 GMT-04:00
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
  double t1674;
  double t1714;
  double t1672;
  double t1702;
  double t1718;
  double t1740;
  double t1706;
  double t1736;
  double t1737;
  double t1671;
  double t1750;
  double t1759;
  double t1768;
  double t1785;
  double t1739;
  double t1770;
  double t1772;
  double t1648;
  double t1787;
  double t1788;
  double t1790;
  double t1805;
  double t1775;
  double t1795;
  double t1799;
  double t1634;
  double t1808;
  double t1809;
  double t1813;
  double t1816;
  double t1818;
  double t1820;
  double t1823;
  double t1824;
  double t1825;
  double t1834;
  double t1804;
  double t1829;
  double t1830;
  double t1628;
  double t1840;
  double t1849;
  double t1852;
  double t1864;
  double t1833;
  double t1853;
  double t1857;
  double t1615;
  double t1866;
  double t1867;
  double t1868;
  double t1879;
  double t1861;
  double t1870;
  double t1872;
  double t1587;
  double t1881;
  double t1883;
  double t1885;
  double t1579;
  double t1909;
  double t1910;
  double t1911;
  double t1918;
  double t1920;
  double t1921;
  double t1913;
  double t1923;
  double t1927;
  double t1931;
  double t1936;
  double t1938;
  double t1930;
  double t1939;
  double t1941;
  double t1946;
  double t1947;
  double t1948;
  double t1949;
  double t1950;
  double t1952;
  double t1943;
  double t1953;
  double t1956;
  double t1958;
  double t1959;
  double t1960;
  double t1957;
  double t1961;
  double t1962;
  double t1966;
  double t1967;
  double t1969;
  double t1889;
  double t1963;
  double t1970;
  double t1971;
  double t1976;
  double t1977;
  double t1978;
  double t1990;
  double t1992;
  double t1993;
  double t1995;
  double t1996;
  double t1997;
  double t1994;
  double t1998;
  double t2001;
  double t2003;
  double t2005;
  double t2006;
  double t2008;
  double t2009;
  double t2011;
  double t2002;
  double t2012;
  double t2013;
  double t2015;
  double t2017;
  double t2018;
  double t2014;
  double t2019;
  double t2021;
  double t2024;
  double t2025;
  double t2027;
  double t2022;
  double t2029;
  double t2030;
  double t2033;
  double t2034;
  double t2035;
  double t1873;
  double t1886;
  double t1887;
  double t1890;
  double t1891;
  double t1892;
  double t1972;
  double t1980;
  double t1981;
  double t1984;
  double t1986;
  double t1987;
  double t2031;
  double t2036;
  double t2037;
  double t2039;
  double t2040;
  double t2041;
  double t2065;
  double t2067;
  double t2097;
  double t2098;
  double t2116;
  double t2117;
  double t2126;
  double t2127;
  double t2136;
  double t2137;
  double t2146;
  double t2147;
  double t1888;
  double t1898;
  double t1904;
  double t2069;
  double t2070;
  double t2071;
  double t2074;
  double t2076;
  double t2079;
  double t2080;
  double t2081;
  double t2082;
  double t2085;
  double t2086;
  double t2087;
  double t2089;
  double t2092;
  double t2093;
  double t2099;
  double t2101;
  double t2102;
  double t2104;
  double t2105;
  double t2106;
  double t2112;
  double t2113;
  double t2114;
  double t2118;
  double t2119;
  double t2120;
  double t2122;
  double t2123;
  double t2124;
  double t2128;
  double t2129;
  double t2130;
  double t2132;
  double t2133;
  double t2134;
  double t2138;
  double t2139;
  double t2140;
  double t2142;
  double t2143;
  double t2144;
  double t2148;
  double t2149;
  double t2150;
  double t2152;
  double t2153;
  double t2154;
  double t1983;
  double t1988;
  double t1989;
  double t2038;
  double t2042;
  double t2043;
  t1674 = Cos(var1[5]);
  t1714 = Sin(var1[3]);
  t1672 = Cos(var1[3]);
  t1702 = Sin(var1[4]);
  t1718 = Sin(var1[5]);
  t1740 = Cos(var1[14]);
  t1706 = t1672*t1674*t1702;
  t1736 = t1714*t1718;
  t1737 = t1706 + t1736;
  t1671 = Sin(var1[14]);
  t1750 = -1.*t1674*t1714;
  t1759 = t1672*t1702*t1718;
  t1768 = t1750 + t1759;
  t1785 = Cos(var1[15]);
  t1739 = t1671*t1737;
  t1770 = t1740*t1768;
  t1772 = t1739 + t1770;
  t1648 = Sin(var1[15]);
  t1787 = t1740*t1737;
  t1788 = -1.*t1671*t1768;
  t1790 = t1787 + t1788;
  t1805 = Cos(var1[17]);
  t1775 = -1.*t1648*t1772;
  t1795 = t1785*t1790;
  t1799 = t1775 + t1795;
  t1634 = Sin(var1[17]);
  t1808 = Cos(var1[16]);
  t1809 = Cos(var1[4]);
  t1813 = t1808*t1672*t1809;
  t1816 = Sin(var1[16]);
  t1818 = t1785*t1772;
  t1820 = t1648*t1790;
  t1823 = t1818 + t1820;
  t1824 = t1816*t1823;
  t1825 = t1813 + t1824;
  t1834 = Cos(var1[18]);
  t1804 = t1634*t1799;
  t1829 = t1805*t1825;
  t1830 = t1804 + t1829;
  t1628 = Sin(var1[18]);
  t1840 = t1805*t1799;
  t1849 = -1.*t1634*t1825;
  t1852 = t1840 + t1849;
  t1864 = Cos(var1[19]);
  t1833 = -1.*t1628*t1830;
  t1853 = t1834*t1852;
  t1857 = t1833 + t1853;
  t1615 = Sin(var1[19]);
  t1866 = t1834*t1830;
  t1867 = t1628*t1852;
  t1868 = t1866 + t1867;
  t1879 = Cos(var1[20]);
  t1861 = t1615*t1857;
  t1870 = t1864*t1868;
  t1872 = t1861 + t1870;
  t1587 = Sin(var1[20]);
  t1881 = t1864*t1857;
  t1883 = -1.*t1615*t1868;
  t1885 = t1881 + t1883;
  t1579 = Sin(var1[21]);
  t1909 = t1674*t1714*t1702;
  t1910 = -1.*t1672*t1718;
  t1911 = t1909 + t1910;
  t1918 = t1672*t1674;
  t1920 = t1714*t1702*t1718;
  t1921 = t1918 + t1920;
  t1913 = t1671*t1911;
  t1923 = t1740*t1921;
  t1927 = t1913 + t1923;
  t1931 = t1740*t1911;
  t1936 = -1.*t1671*t1921;
  t1938 = t1931 + t1936;
  t1930 = -1.*t1648*t1927;
  t1939 = t1785*t1938;
  t1941 = t1930 + t1939;
  t1946 = t1808*t1809*t1714;
  t1947 = t1785*t1927;
  t1948 = t1648*t1938;
  t1949 = t1947 + t1948;
  t1950 = t1816*t1949;
  t1952 = t1946 + t1950;
  t1943 = t1634*t1941;
  t1953 = t1805*t1952;
  t1956 = t1943 + t1953;
  t1958 = t1805*t1941;
  t1959 = -1.*t1634*t1952;
  t1960 = t1958 + t1959;
  t1957 = -1.*t1628*t1956;
  t1961 = t1834*t1960;
  t1962 = t1957 + t1961;
  t1966 = t1834*t1956;
  t1967 = t1628*t1960;
  t1969 = t1966 + t1967;
  t1889 = Cos(var1[21]);
  t1963 = t1615*t1962;
  t1970 = t1864*t1969;
  t1971 = t1963 + t1970;
  t1976 = t1864*t1962;
  t1977 = -1.*t1615*t1969;
  t1978 = t1976 + t1977;
  t1990 = t1809*t1674*t1671;
  t1992 = t1740*t1809*t1718;
  t1993 = t1990 + t1992;
  t1995 = t1740*t1809*t1674;
  t1996 = -1.*t1809*t1671*t1718;
  t1997 = t1995 + t1996;
  t1994 = -1.*t1648*t1993;
  t1998 = t1785*t1997;
  t2001 = t1994 + t1998;
  t2003 = -1.*t1808*t1702;
  t2005 = t1785*t1993;
  t2006 = t1648*t1997;
  t2008 = t2005 + t2006;
  t2009 = t1816*t2008;
  t2011 = t2003 + t2009;
  t2002 = t1634*t2001;
  t2012 = t1805*t2011;
  t2013 = t2002 + t2012;
  t2015 = t1805*t2001;
  t2017 = -1.*t1634*t2011;
  t2018 = t2015 + t2017;
  t2014 = -1.*t1628*t2013;
  t2019 = t1834*t2018;
  t2021 = t2014 + t2019;
  t2024 = t1834*t2013;
  t2025 = t1628*t2018;
  t2027 = t2024 + t2025;
  t2022 = t1615*t2021;
  t2029 = t1864*t2027;
  t2030 = t2022 + t2029;
  t2033 = t1864*t2021;
  t2034 = -1.*t1615*t2027;
  t2035 = t2033 + t2034;
  t1873 = -1.*t1587*t1872;
  t1886 = t1879*t1885;
  t1887 = t1873 + t1886;
  t1890 = t1879*t1872;
  t1891 = t1587*t1885;
  t1892 = t1890 + t1891;
  t1972 = -1.*t1587*t1971;
  t1980 = t1879*t1978;
  t1981 = t1972 + t1980;
  t1984 = t1879*t1971;
  t1986 = t1587*t1978;
  t1987 = t1984 + t1986;
  t2031 = -1.*t1587*t2030;
  t2036 = t1879*t2035;
  t2037 = t2031 + t2036;
  t2039 = t1879*t2030;
  t2040 = t1587*t2035;
  t2041 = t2039 + t2040;
  t2065 = -1.*t1808;
  t2067 = 1. + t2065;
  t2097 = -1.*t1805;
  t2098 = 1. + t2097;
  t2116 = -1.*t1834;
  t2117 = 1. + t2116;
  t2126 = -1.*t1864;
  t2127 = 1. + t2126;
  t2136 = -1.*t1879;
  t2137 = 1. + t2136;
  t2146 = -1.*t1889;
  t2147 = 1. + t2146;
  t1888 = t1579*t1887;
  t1898 = t1889*t1892;
  t1904 = t1888 + t1898;
  t2069 = -0.049*t2067;
  t2070 = -0.135*t1816;
  t2071 = 0. + t2069 + t2070;
  t2074 = 0.135*t1671;
  t2076 = 0. + t2074;
  t2079 = -1.*t1740;
  t2080 = 1. + t2079;
  t2081 = -0.135*t2080;
  t2082 = 0. + t2081;
  t2085 = -1.*t1785;
  t2086 = 1. + t2085;
  t2087 = -0.135*t2086;
  t2089 = 0. + t2087;
  t2092 = 0.135*t1648;
  t2093 = 0. + t2092;
  t2099 = -0.09*t2098;
  t2101 = 0.049*t1634;
  t2102 = 0. + t2099 + t2101;
  t2104 = -0.135*t2067;
  t2105 = 0.049*t1816;
  t2106 = 0. + t2104 + t2105;
  t2112 = -0.049*t2098;
  t2113 = -0.09*t1634;
  t2114 = 0. + t2112 + t2113;
  t2118 = -0.049*t2117;
  t2119 = -0.21*t1628;
  t2120 = 0. + t2118 + t2119;
  t2122 = -0.21*t2117;
  t2123 = 0.049*t1628;
  t2124 = 0. + t2122 + t2123;
  t2128 = -0.2707*t2127;
  t2129 = 0.0016*t1615;
  t2130 = 0. + t2128 + t2129;
  t2132 = -0.0016*t2127;
  t2133 = -0.2707*t1615;
  t2134 = 0. + t2132 + t2133;
  t2138 = 0.0184*t2137;
  t2139 = -0.7055*t1587;
  t2140 = 0. + t2138 + t2139;
  t2142 = -0.7055*t2137;
  t2143 = -0.0184*t1587;
  t2144 = 0. + t2142 + t2143;
  t2148 = -1.1135*t2147;
  t2149 = 0.0216*t1579;
  t2150 = 0. + t2148 + t2149;
  t2152 = -0.0216*t2147;
  t2153 = -1.1135*t1579;
  t2154 = 0. + t2152 + t2153;
  t1983 = t1579*t1981;
  t1988 = t1889*t1987;
  t1989 = t1983 + t1988;
  t2038 = t1579*t2037;
  t2042 = t1889*t2041;
  t2043 = t2038 + t2042;
  p_output1[0]=t1904;
  p_output1[1]=t1989;
  p_output1[2]=t2043;
  p_output1[3]=0.;
  p_output1[4]=t1672*t1809*t1816 - 1.*t1808*t1823;
  p_output1[5]=t1714*t1809*t1816 - 1.*t1808*t1949;
  p_output1[6]=-1.*t1702*t1816 - 1.*t1808*t2008;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1887*t1889 + t1579*t1892;
  p_output1[9]=-1.*t1889*t1981 + t1579*t1987;
  p_output1[10]=-1.*t1889*t2037 + t1579*t2041;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t1672*t1809*t1816 + t1808*t1823) - 1.193387*(t1887*t1889 - 1.*t1579*t1892) - 0.0216*t1904 + t1672*t1809*t2071 + t1737*t2076 + t1768*t2082 + t1772*t2089 + t1790*t2093 + t1799*t2102 + t1823*t2106 + t1825*t2114 + t1830*t2120 + t1852*t2124 + t1857*t2130 + t1868*t2134 + t1872*t2140 + t1885*t2144 + t1887*t2150 + t1892*t2154 + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t1714*t1809*t1816 + t1808*t1949) - 1.193387*(t1889*t1981 - 1.*t1579*t1987) - 0.0216*t1989 + t1714*t1809*t2071 + t1911*t2076 + t1921*t2082 + t1927*t2089 + t1938*t2093 + t1941*t2102 + t1949*t2106 + t1952*t2114 + t1956*t2120 + t1960*t2124 + t1962*t2130 + t1969*t2134 + t1971*t2140 + t1978*t2144 + t1981*t2150 + t1987*t2154 + var1[1];
  p_output1[14]=0. - 0.1305*(t1702*t1816 + t1808*t2008) - 1.193387*(t1889*t2037 - 1.*t1579*t2041) - 0.0216*t2043 - 1.*t1702*t2071 + t1674*t1809*t2076 + t1718*t1809*t2082 + t1993*t2089 + t1997*t2093 + t2001*t2102 + t2008*t2106 + t2011*t2114 + t2013*t2120 + t2018*t2124 + t2021*t2130 + t2027*t2134 + t2030*t2140 + t2035*t2144 + t2037*t2150 + t2041*t2154 + var1[2];
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

#include "H_RightToeBottomBack.hh"

namespace SymExpression
{

void H_RightToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
