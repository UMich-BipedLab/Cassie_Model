/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:04 GMT-05:00
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
  double t1742;
  double t1748;
  double t1751;
  double t1740;
  double t1752;
  double t1706;
  double t1747;
  double t1753;
  double t1768;
  double t1774;
  double t1775;
  double t1778;
  double t1781;
  double t1792;
  double t1804;
  double t1806;
  double t1809;
  double t1788;
  double t1789;
  double t1791;
  double t1825;
  double t1840;
  double t1842;
  double t1844;
  double t1847;
  double t1837;
  double t1838;
  double t1839;
  double t1852;
  double t1853;
  double t1856;
  double t1707;
  double t1719;
  double t1736;
  double t1739;
  double t1785;
  double t1786;
  double t1876;
  double t1877;
  double t1878;
  double t1880;
  double t1881;
  double t1882;
  double t1807;
  double t1811;
  double t1820;
  double t1826;
  double t1828;
  double t1829;
  double t1884;
  double t1885;
  double t1886;
  double t1846;
  double t1848;
  double t1849;
  double t1858;
  double t1859;
  double t1862;
  double t1897;
  double t1898;
  double t1899;
  double t1901;
  double t1902;
  double t1903;
  double t1916;
  double t1917;
  double t1918;
  double t1925;
  double t1926;
  double t1927;
  double t1929;
  double t1930;
  double t1931;
  double t1944;
  double t1945;
  double t1946;
  double t1953;
  double t1954;
  double t1955;
  double t1957;
  double t1958;
  double t1959;
  double t1972;
  double t1973;
  double t1974;
  double t1981;
  double t1982;
  double t1983;
  double t1985;
  double t1986;
  double t1987;
  double t1999;
  double t2001;
  double t2002;
  double t2004;
  double t2005;
  double t2009;
  double t2010;
  double t2011;
  double t2022;
  double t2023;
  double t2024;
  double t2027;
  double t2028;
  double t2029;
  double t2033;
  double t2034;
  double t2047;
  double t2048;
  double t2049;
  double t2053;
  double t2054;
  double t2055;
  double t2071;
  double t2072;
  double t2084;
  double t2085;
  double t2086;
  double t2088;
  double t2089;
  double t2093;
  double t2094;
  double t2050;
  double t2051;
  double t2052;
  double t2056;
  double t2057;
  double t2058;
  double t2059;
  double t2060;
  double t2061;
  double t2062;
  double t2063;
  double t2064;
  double t1889;
  double t1891;
  double t1893;
  double t2108;
  double t2109;
  double t2110;
  double t2112;
  double t2113;
  double t2124;
  double t2125;
  double t2126;
  double t2128;
  double t2129;
  double t2130;
  double t2139;
  double t2140;
  double t2141;
  double t2143;
  double t2144;
  double t2145;
  double t1909;
  double t1910;
  double t1911;
  double t2154;
  double t2155;
  double t2157;
  double t2158;
  double t2159;
  double t2168;
  double t2169;
  double t2170;
  double t2182;
  double t2183;
  double t2184;
  t1742 = Cos(var1[5]);
  t1748 = Sin(var1[3]);
  t1751 = Sin(var1[4]);
  t1740 = Cos(var1[3]);
  t1752 = Sin(var1[5]);
  t1706 = Cos(var1[6]);
  t1747 = -1.*t1740*t1742;
  t1753 = -1.*t1748*t1751*t1752;
  t1768 = t1747 + t1753;
  t1774 = -1.*t1742*t1748*t1751;
  t1775 = t1740*t1752;
  t1778 = t1774 + t1775;
  t1781 = Sin(var1[6]);
  t1792 = Cos(var1[7]);
  t1804 = -1.*t1792;
  t1806 = 1. + t1804;
  t1809 = Sin(var1[7]);
  t1788 = t1706*t1768;
  t1789 = t1778*t1781;
  t1791 = t1788 + t1789;
  t1825 = Cos(var1[4]);
  t1840 = Cos(var1[8]);
  t1842 = -1.*t1840;
  t1844 = 1. + t1842;
  t1847 = Sin(var1[8]);
  t1837 = -1.*t1825*t1792*t1748;
  t1838 = t1791*t1809;
  t1839 = t1837 + t1838;
  t1852 = t1706*t1778;
  t1853 = -1.*t1768*t1781;
  t1856 = t1852 + t1853;
  t1707 = -1.*t1706;
  t1719 = 1. + t1707;
  t1736 = 0.135*t1719;
  t1739 = 0. + t1736;
  t1785 = -0.135*t1781;
  t1786 = 0. + t1785;
  t1876 = -1.*t1742*t1748;
  t1877 = t1740*t1751*t1752;
  t1878 = t1876 + t1877;
  t1880 = t1740*t1742*t1751;
  t1881 = t1748*t1752;
  t1882 = t1880 + t1881;
  t1807 = 0.135*t1806;
  t1811 = 0.049*t1809;
  t1820 = 0. + t1807 + t1811;
  t1826 = -0.049*t1806;
  t1828 = 0.135*t1809;
  t1829 = 0. + t1826 + t1828;
  t1884 = t1706*t1878;
  t1885 = t1882*t1781;
  t1886 = t1884 + t1885;
  t1846 = -0.049*t1844;
  t1848 = -0.09*t1847;
  t1849 = 0. + t1846 + t1848;
  t1858 = -0.09*t1844;
  t1859 = 0.049*t1847;
  t1862 = 0. + t1858 + t1859;
  t1897 = t1740*t1825*t1792;
  t1898 = t1886*t1809;
  t1899 = t1897 + t1898;
  t1901 = t1706*t1882;
  t1902 = -1.*t1878*t1781;
  t1903 = t1901 + t1902;
  t1916 = t1740*t1825*t1706*t1752;
  t1917 = t1740*t1825*t1742*t1781;
  t1918 = t1916 + t1917;
  t1925 = -1.*t1740*t1792*t1751;
  t1926 = t1918*t1809;
  t1927 = t1925 + t1926;
  t1929 = t1740*t1825*t1742*t1706;
  t1930 = -1.*t1740*t1825*t1752*t1781;
  t1931 = t1929 + t1930;
  t1944 = t1825*t1706*t1748*t1752;
  t1945 = t1825*t1742*t1748*t1781;
  t1946 = t1944 + t1945;
  t1953 = -1.*t1792*t1748*t1751;
  t1954 = t1946*t1809;
  t1955 = t1953 + t1954;
  t1957 = t1825*t1742*t1706*t1748;
  t1958 = -1.*t1825*t1748*t1752*t1781;
  t1959 = t1957 + t1958;
  t1972 = -1.*t1706*t1751*t1752;
  t1973 = -1.*t1742*t1751*t1781;
  t1974 = t1972 + t1973;
  t1981 = -1.*t1825*t1792;
  t1982 = t1974*t1809;
  t1983 = t1981 + t1982;
  t1985 = -1.*t1742*t1706*t1751;
  t1986 = t1751*t1752*t1781;
  t1987 = t1985 + t1986;
  t1999 = t1742*t1748;
  t2001 = -1.*t1740*t1751*t1752;
  t2002 = t1999 + t2001;
  t2004 = t2002*t1781;
  t2005 = t1901 + t2004;
  t2009 = t1706*t2002;
  t2010 = -1.*t1882*t1781;
  t2011 = t2009 + t2010;
  t2022 = t1742*t1748*t1751;
  t2023 = -1.*t1740*t1752;
  t2024 = t2022 + t2023;
  t2027 = t1706*t2024;
  t2028 = t1768*t1781;
  t2029 = t2027 + t2028;
  t2033 = -1.*t2024*t1781;
  t2034 = t1788 + t2033;
  t2047 = t1825*t1742*t1706;
  t2048 = -1.*t1825*t1752*t1781;
  t2049 = t2047 + t2048;
  t2053 = -1.*t1825*t1706*t1752;
  t2054 = -1.*t1825*t1742*t1781;
  t2055 = t2053 + t2054;
  t2071 = -1.*t1706*t1878;
  t2072 = t2071 + t2010;
  t2084 = t1740*t1742;
  t2085 = t1748*t1751*t1752;
  t2086 = t2084 + t2085;
  t2088 = -1.*t2086*t1781;
  t2089 = t2027 + t2088;
  t2093 = -1.*t1706*t2086;
  t2094 = t2093 + t2033;
  t2050 = 0.1305*t1792*t2049;
  t2051 = t2049*t1820;
  t2052 = t2049*t1809*t1849;
  t2056 = t2055*t1862;
  t2057 = t1840*t2049*t1809;
  t2058 = t2055*t1847;
  t2059 = t2057 + t2058;
  t2060 = -0.049*t2059;
  t2061 = t1840*t2055;
  t2062 = -1.*t2049*t1809*t1847;
  t2063 = t2061 + t2062;
  t2064 = -0.21*t2063;
  t1889 = t1792*t1886;
  t1891 = -1.*t1740*t1825*t1809;
  t1893 = t1889 + t1891;
  t2108 = 0.135*t1792;
  t2109 = -0.049*t1809;
  t2110 = t2108 + t2109;
  t2112 = 0.049*t1792;
  t2113 = t2112 + t1828;
  t2124 = t1706*t2086;
  t2125 = t2024*t1781;
  t2126 = t2124 + t2125;
  t2128 = t1792*t2126;
  t2129 = -1.*t1825*t1748*t1809;
  t2130 = t2128 + t2129;
  t2139 = t1825*t1706*t1752;
  t2140 = t1825*t1742*t1781;
  t2141 = t2139 + t2140;
  t2143 = t1792*t2141;
  t2144 = t1751*t1809;
  t2145 = t2143 + t2144;
  t1909 = t1840*t1903;
  t1910 = -1.*t1899*t1847;
  t1911 = t1909 + t1910;
  t2154 = 0.049*t1840;
  t2155 = t2154 + t1848;
  t2157 = -0.09*t1840;
  t2158 = -0.049*t1847;
  t2159 = t2157 + t2158;
  t2168 = t1825*t1792*t1748;
  t2169 = t2126*t1809;
  t2170 = t2168 + t2169;
  t2182 = -1.*t1792*t1751;
  t2183 = t2141*t1809;
  t2184 = t2182 + t2183;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1739*t1768 + t1778*t1786 + t1791*t1820 + 0.1305*(t1791*t1792 + t1748*t1809*t1825) - 1.*t1748*t1825*t1829 + t1839*t1849 - 0.21*(-1.*t1839*t1847 + t1840*t1856) - 0.049*(t1839*t1840 + t1847*t1856) + t1856*t1862;
  p_output1[10]=t1740*t1825*t1829 + t1739*t1878 + t1786*t1882 + t1820*t1886 + 0.1305*t1893 + t1849*t1899 + t1862*t1903 - 0.049*(t1840*t1899 + t1847*t1903) - 0.21*t1911;
  p_output1[11]=0;
  p_output1[12]=t1739*t1740*t1752*t1825 + t1740*t1742*t1786*t1825 - 1.*t1740*t1751*t1829 + t1820*t1918 + 0.1305*(t1740*t1751*t1809 + t1792*t1918) + t1849*t1927 + t1862*t1931 - 0.21*(-1.*t1847*t1927 + t1840*t1931) - 0.049*(t1840*t1927 + t1847*t1931);
  p_output1[13]=t1739*t1748*t1752*t1825 + t1742*t1748*t1786*t1825 - 1.*t1748*t1751*t1829 + t1820*t1946 + 0.1305*(t1748*t1751*t1809 + t1792*t1946) + t1849*t1955 + t1862*t1959 - 0.21*(-1.*t1847*t1955 + t1840*t1959) - 0.049*(t1840*t1955 + t1847*t1959);
  p_output1[14]=-1.*t1739*t1751*t1752 - 1.*t1742*t1751*t1786 - 1.*t1825*t1829 + t1820*t1974 + 0.1305*(t1809*t1825 + t1792*t1974) + t1849*t1983 + t1862*t1987 - 0.21*(-1.*t1847*t1983 + t1840*t1987) - 0.049*(t1840*t1983 + t1847*t1987);
  p_output1[15]=t1739*t1882 + t1786*t2002 + 0.1305*t1792*t2005 + t1820*t2005 + t1809*t1849*t2005 + t1862*t2011 - 0.21*(-1.*t1809*t1847*t2005 + t1840*t2011) - 0.049*(t1809*t1840*t2005 + t1847*t2011);
  p_output1[16]=t1768*t1786 + t1739*t2024 + 0.1305*t1792*t2029 + t1820*t2029 + t1809*t1849*t2029 + t1862*t2034 - 0.21*(-1.*t1809*t1847*t2029 + t1840*t2034) - 0.049*(t1809*t1840*t2029 + t1847*t2034);
  p_output1[17]=t1739*t1742*t1825 - 1.*t1752*t1786*t1825 + t2050 + t2051 + t2052 + t2056 + t2060 + t2064;
  p_output1[18]=0.135*t1781*t1878 - 0.135*t1706*t1882 + 0.1305*t1792*t1903 + t1820*t1903 + t1809*t1849*t1903 + t1862*t2072 - 0.21*(-1.*t1809*t1847*t1903 + t1840*t2072) - 0.049*(t1809*t1840*t1903 + t1847*t2072);
  p_output1[19]=-0.135*t1706*t2024 + 0.135*t1781*t2086 + 0.1305*t1792*t2089 + t1820*t2089 + t1809*t1849*t2089 + t1862*t2094 - 0.21*(-1.*t1809*t1847*t2089 + t1840*t2094) - 0.049*(t1809*t1840*t2089 + t1847*t2094);
  p_output1[20]=-0.135*t1706*t1742*t1825 + 0.135*t1752*t1781*t1825 + t2050 + t2051 + t2052 + t2056 + t2060 + t2064;
  p_output1[21]=0.1305*(-1.*t1740*t1792*t1825 - 1.*t1809*t1886) - 0.049*t1840*t1893 + 0.21*t1847*t1893 + t1849*t1893 + t1740*t1825*t2110 + t1886*t2113;
  p_output1[22]=t1748*t1825*t2110 + t2113*t2126 + 0.1305*(t1837 - 1.*t1809*t2126) - 0.049*t1840*t2130 + 0.21*t1847*t2130 + t1849*t2130;
  p_output1[23]=-1.*t1751*t2110 + t2113*t2141 + 0.1305*(t1751*t1792 - 1.*t1809*t2141) - 0.049*t1840*t2145 + 0.21*t1847*t2145 + t1849*t2145;
  p_output1[24]=-0.21*(-1.*t1840*t1899 - 1.*t1847*t1903) - 0.049*t1911 + t1903*t2155 + t1899*t2159;
  p_output1[25]=t2089*t2155 + t2159*t2170 - 0.21*(-1.*t1847*t2089 - 1.*t1840*t2170) - 0.049*(t1840*t2089 - 1.*t1847*t2170);
  p_output1[26]=t2049*t2155 + t2159*t2184 - 0.21*(-1.*t1847*t2049 - 1.*t1840*t2184) - 0.049*(t1840*t2049 - 1.*t1847*t2184);
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
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
