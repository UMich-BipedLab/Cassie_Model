/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:53 GMT-04:00
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
  double t1795;
  double t1770;
  double t1799;
  double t1787;
  double t1804;
  double t1706;
  double t1790;
  double t1813;
  double t1818;
  double t1824;
  double t1829;
  double t1840;
  double t1852;
  double t1866;
  double t1898;
  double t1904;
  double t1909;
  double t1886;
  double t1888;
  double t1890;
  double t1911;
  double t1962;
  double t1963;
  double t1966;
  double t1970;
  double t1958;
  double t1960;
  double t1961;
  double t1983;
  double t1923;
  double t1931;
  double t1938;
  double t1941;
  double t1947;
  double t1948;
  double t1950;
  double t2005;
  double t2006;
  double t2009;
  double t2015;
  double t2018;
  double t2019;
  double t2022;
  double t2029;
  double t2033;
  double t2035;
  double t2042;
  double t2043;
  double t2044;
  double t2046;
  double t2047;
  double t2049;
  double t2052;
  double t2056;
  double t2057;
  double t2058;
  double t2063;
  double t2064;
  double t2069;
  double t2073;
  double t2074;
  double t2076;
  double t2081;
  double t2087;
  double t2089;
  double t2090;
  double t2101;
  double t2102;
  double t2103;
  double t2105;
  double t2106;
  double t2107;
  double t2109;
  double t2112;
  double t2113;
  double t2114;
  double t2121;
  double t2122;
  double t2123;
  double t1736;
  double t1737;
  double t1739;
  double t1759;
  double t1853;
  double t1857;
  double t1867;
  double t1870;
  double t1881;
  double t1885;
  double t2138;
  double t2139;
  double t2140;
  double t2142;
  double t2143;
  double t2144;
  double t1913;
  double t1918;
  double t1939;
  double t1943;
  double t1946;
  double t2152;
  double t2153;
  double t2154;
  double t2148;
  double t2149;
  double t2150;
  double t1967;
  double t1976;
  double t1978;
  double t1984;
  double t1986;
  double t1988;
  double t2160;
  double t2161;
  double t2162;
  double t1998;
  double t2001;
  double t2002;
  double t2021;
  double t2024;
  double t2025;
  double t2156;
  double t2157;
  double t2158;
  double t2169;
  double t2170;
  double t2171;
  double t2038;
  double t2039;
  double t2040;
  double t2050;
  double t2053;
  double t2055;
  double t2173;
  double t2174;
  double t2175;
  double t2177;
  double t2178;
  double t2179;
  double t2060;
  double t2061;
  double t2062;
  double t2077;
  double t2082;
  double t2083;
  double t2181;
  double t2182;
  double t2183;
  double t2185;
  double t2186;
  double t2187;
  double t2093;
  double t2095;
  double t2099;
  double t2108;
  double t2110;
  double t2111;
  double t2189;
  double t2190;
  double t2191;
  double t2193;
  double t2194;
  double t2195;
  double t2118;
  double t2119;
  double t2120;
  double t2197;
  double t2198;
  double t2199;
  double t2201;
  double t2202;
  double t2203;
  double t2220;
  double t2221;
  double t2222;
  double t2216;
  double t2217;
  double t2218;
  double t2228;
  double t2229;
  double t2230;
  double t2224;
  double t2225;
  double t2226;
  double t2237;
  double t2238;
  double t2239;
  double t2241;
  double t2242;
  double t2243;
  double t2245;
  double t2246;
  double t2247;
  double t2249;
  double t2250;
  double t2251;
  double t2253;
  double t2254;
  double t2255;
  double t2257;
  double t2258;
  double t2259;
  double t2261;
  double t2262;
  double t2263;
  double t2265;
  double t2266;
  double t2267;
  double t2269;
  double t2270;
  double t2271;
  t1795 = Cos(var1[3]);
  t1770 = Cos(var1[5]);
  t1799 = Sin(var1[4]);
  t1787 = Sin(var1[3]);
  t1804 = Sin(var1[5]);
  t1706 = Cos(var1[6]);
  t1790 = -1.*t1770*t1787;
  t1813 = t1795*t1799*t1804;
  t1818 = t1790 + t1813;
  t1824 = t1795*t1770*t1799;
  t1829 = t1787*t1804;
  t1840 = t1824 + t1829;
  t1852 = Sin(var1[6]);
  t1866 = Cos(var1[7]);
  t1898 = t1706*t1840;
  t1904 = -1.*t1818*t1852;
  t1909 = t1898 + t1904;
  t1886 = t1706*t1818;
  t1888 = t1840*t1852;
  t1890 = t1886 + t1888;
  t1911 = Sin(var1[7]);
  t1962 = Cos(var1[8]);
  t1963 = -1.*t1962;
  t1966 = 1. + t1963;
  t1970 = Sin(var1[8]);
  t1958 = t1866*t1890;
  t1960 = t1909*t1911;
  t1961 = t1958 + t1960;
  t1983 = Cos(var1[4]);
  t1923 = Cos(var1[9]);
  t1931 = -1.*t1923;
  t1938 = 1. + t1931;
  t1941 = Sin(var1[9]);
  t1947 = t1866*t1909;
  t1948 = -1.*t1890*t1911;
  t1950 = t1947 + t1948;
  t2005 = t1795*t1983*t1962;
  t2006 = t1961*t1970;
  t2009 = t2005 + t2006;
  t2015 = Cos(var1[10]);
  t2018 = -1.*t2015;
  t2019 = 1. + t2018;
  t2022 = Sin(var1[10]);
  t2029 = t1941*t1950;
  t2033 = t1923*t2009;
  t2035 = t2029 + t2033;
  t2042 = t1923*t1950;
  t2043 = -1.*t1941*t2009;
  t2044 = t2042 + t2043;
  t2046 = Cos(var1[11]);
  t2047 = -1.*t2046;
  t2049 = 1. + t2047;
  t2052 = Sin(var1[11]);
  t2056 = -1.*t2022*t2035;
  t2057 = t2015*t2044;
  t2058 = t2056 + t2057;
  t2063 = t2015*t2035;
  t2064 = t2022*t2044;
  t2069 = t2063 + t2064;
  t2073 = Cos(var1[12]);
  t2074 = -1.*t2073;
  t2076 = 1. + t2074;
  t2081 = Sin(var1[12]);
  t2087 = t2052*t2058;
  t2089 = t2046*t2069;
  t2090 = t2087 + t2089;
  t2101 = t2046*t2058;
  t2102 = -1.*t2052*t2069;
  t2103 = t2101 + t2102;
  t2105 = Cos(var1[13]);
  t2106 = -1.*t2105;
  t2107 = 1. + t2106;
  t2109 = Sin(var1[13]);
  t2112 = -1.*t2081*t2090;
  t2113 = t2073*t2103;
  t2114 = t2112 + t2113;
  t2121 = t2073*t2090;
  t2122 = t2081*t2103;
  t2123 = t2121 + t2122;
  t1736 = -1.*t1706;
  t1737 = 1. + t1736;
  t1739 = 0.135*t1737;
  t1759 = 0. + t1739;
  t1853 = -0.135*t1852;
  t1857 = 0. + t1853;
  t1867 = -1.*t1866;
  t1870 = 1. + t1867;
  t1881 = 0.135*t1870;
  t1885 = 0. + t1881;
  t2138 = t1795*t1770;
  t2139 = t1787*t1799*t1804;
  t2140 = t2138 + t2139;
  t2142 = t1770*t1787*t1799;
  t2143 = -1.*t1795*t1804;
  t2144 = t2142 + t2143;
  t1913 = -0.135*t1911;
  t1918 = 0. + t1913;
  t1939 = -0.09*t1938;
  t1943 = 0.049*t1941;
  t1946 = 0. + t1939 + t1943;
  t2152 = t1706*t2144;
  t2153 = -1.*t2140*t1852;
  t2154 = t2152 + t2153;
  t2148 = t1706*t2140;
  t2149 = t2144*t1852;
  t2150 = t2148 + t2149;
  t1967 = 0.135*t1966;
  t1976 = 0.049*t1970;
  t1978 = 0. + t1967 + t1976;
  t1984 = -0.049*t1966;
  t1986 = 0.135*t1970;
  t1988 = 0. + t1984 + t1986;
  t2160 = t1866*t2150;
  t2161 = t2154*t1911;
  t2162 = t2160 + t2161;
  t1998 = -0.049*t1938;
  t2001 = -0.09*t1941;
  t2002 = 0. + t1998 + t2001;
  t2021 = -0.049*t2019;
  t2024 = -0.21*t2022;
  t2025 = 0. + t2021 + t2024;
  t2156 = t1866*t2154;
  t2157 = -1.*t2150*t1911;
  t2158 = t2156 + t2157;
  t2169 = t1983*t1962*t1787;
  t2170 = t2162*t1970;
  t2171 = t2169 + t2170;
  t2038 = -0.21*t2019;
  t2039 = 0.049*t2022;
  t2040 = 0. + t2038 + t2039;
  t2050 = -0.2707*t2049;
  t2053 = 0.0016*t2052;
  t2055 = 0. + t2050 + t2053;
  t2173 = t1941*t2158;
  t2174 = t1923*t2171;
  t2175 = t2173 + t2174;
  t2177 = t1923*t2158;
  t2178 = -1.*t1941*t2171;
  t2179 = t2177 + t2178;
  t2060 = -0.0016*t2049;
  t2061 = -0.2707*t2052;
  t2062 = 0. + t2060 + t2061;
  t2077 = 0.0184*t2076;
  t2082 = -0.7055*t2081;
  t2083 = 0. + t2077 + t2082;
  t2181 = -1.*t2022*t2175;
  t2182 = t2015*t2179;
  t2183 = t2181 + t2182;
  t2185 = t2015*t2175;
  t2186 = t2022*t2179;
  t2187 = t2185 + t2186;
  t2093 = -0.7055*t2076;
  t2095 = -0.0184*t2081;
  t2099 = 0. + t2093 + t2095;
  t2108 = -1.1135*t2107;
  t2110 = 0.0216*t2109;
  t2111 = 0. + t2108 + t2110;
  t2189 = t2052*t2183;
  t2190 = t2046*t2187;
  t2191 = t2189 + t2190;
  t2193 = t2046*t2183;
  t2194 = -1.*t2052*t2187;
  t2195 = t2193 + t2194;
  t2118 = -0.0216*t2107;
  t2119 = -1.1135*t2109;
  t2120 = 0. + t2118 + t2119;
  t2197 = -1.*t2081*t2191;
  t2198 = t2073*t2195;
  t2199 = t2197 + t2198;
  t2201 = t2073*t2191;
  t2202 = t2081*t2195;
  t2203 = t2201 + t2202;
  t2220 = t1983*t1770*t1706;
  t2221 = -1.*t1983*t1804*t1852;
  t2222 = t2220 + t2221;
  t2216 = t1983*t1706*t1804;
  t2217 = t1983*t1770*t1852;
  t2218 = t2216 + t2217;
  t2228 = t1866*t2218;
  t2229 = t2222*t1911;
  t2230 = t2228 + t2229;
  t2224 = t1866*t2222;
  t2225 = -1.*t2218*t1911;
  t2226 = t2224 + t2225;
  t2237 = -1.*t1962*t1799;
  t2238 = t2230*t1970;
  t2239 = t2237 + t2238;
  t2241 = t1941*t2226;
  t2242 = t1923*t2239;
  t2243 = t2241 + t2242;
  t2245 = t1923*t2226;
  t2246 = -1.*t1941*t2239;
  t2247 = t2245 + t2246;
  t2249 = -1.*t2022*t2243;
  t2250 = t2015*t2247;
  t2251 = t2249 + t2250;
  t2253 = t2015*t2243;
  t2254 = t2022*t2247;
  t2255 = t2253 + t2254;
  t2257 = t2052*t2251;
  t2258 = t2046*t2255;
  t2259 = t2257 + t2258;
  t2261 = t2046*t2251;
  t2262 = -1.*t2052*t2255;
  t2263 = t2261 + t2262;
  t2265 = -1.*t2081*t2259;
  t2266 = t2073*t2263;
  t2267 = t2265 + t2266;
  t2269 = t2073*t2259;
  t2270 = t2081*t2263;
  t2271 = t2269 + t2270;
  p_output1[0]=0. + t1759*t1818 + t1840*t1857 + t1885*t1890 + t1909*t1918 + t1946*t1950 + t1961*t1978 + 0.1305*(t1961*t1962 - 1.*t1795*t1970*t1983) + t1795*t1983*t1988 + t2002*t2009 + t2025*t2035 + t2040*t2044 + t2055*t2058 + t2062*t2069 + t2083*t2090 + t2099*t2103 + t2111*t2114 + t2120*t2123 + 0.058287*(t2109*t2114 + t2105*t2123) - 1.1135*(t2105*t2114 - 1.*t2109*t2123) + var1[0];
  p_output1[1]=0. + t1787*t1983*t1988 + t1759*t2140 + t1857*t2144 + t1885*t2150 + t1918*t2154 + t1946*t2158 + t1978*t2162 + 0.1305*(-1.*t1787*t1970*t1983 + t1962*t2162) + t2002*t2171 + t2025*t2175 + t2040*t2179 + t2055*t2183 + t2062*t2187 + t2083*t2191 + t2099*t2195 + t2111*t2199 + t2120*t2203 + 0.058287*(t2109*t2199 + t2105*t2203) - 1.1135*(t2105*t2199 - 1.*t2109*t2203) + var1[1];
  p_output1[2]=0. + t1759*t1804*t1983 + t1770*t1857*t1983 - 1.*t1799*t1988 + t1885*t2218 + t1918*t2222 + t1946*t2226 + t1978*t2230 + 0.1305*(t1799*t1970 + t1962*t2230) + t2002*t2239 + t2025*t2243 + t2040*t2247 + t2055*t2251 + t2062*t2255 + t2083*t2259 + t2099*t2263 + t2111*t2267 + t2120*t2271 + 0.058287*(t2109*t2267 + t2105*t2271) - 1.1135*(t2105*t2267 - 1.*t2109*t2271) + var1[2];
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

#include "p_LeftToeBottomFront.hh"

namespace SymExpression
{

void p_LeftToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
