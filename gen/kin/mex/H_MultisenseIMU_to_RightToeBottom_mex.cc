/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:08 GMT-04:00
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
  double t1604;
  double t1662;
  double t1802;
  double t1740;
  double t1847;
  double t1862;
  double t1834;
  double t1886;
  double t1889;
  double t1893;
  double t1858;
  double t1866;
  double t1876;
  double t1896;
  double t1823;
  double t1904;
  double t1906;
  double t1916;
  double t1879;
  double t1898;
  double t1900;
  double t1920;
  double t1822;
  double t1934;
  double t1941;
  double t1946;
  double t1902;
  double t1926;
  double t1929;
  double t1950;
  double t1819;
  double t1967;
  double t1968;
  double t1969;
  double t1933;
  double t1954;
  double t1957;
  double t1972;
  double t1998;
  double t2006;
  double t2009;
  double t1991;
  double t1993;
  double t1995;
  double t2026;
  double t2029;
  double t2033;
  double t1997;
  double t2010;
  double t2012;
  double t2050;
  double t2052;
  double t2056;
  double t2017;
  double t2035;
  double t2036;
  double t2072;
  double t2073;
  double t2074;
  double t2044;
  double t2057;
  double t2067;
  double t2105;
  double t2106;
  double t2108;
  double t2092;
  double t2097;
  double t2099;
  double t2119;
  double t2122;
  double t2123;
  double t2104;
  double t2109;
  double t2112;
  double t2134;
  double t2135;
  double t2138;
  double t2114;
  double t2126;
  double t2130;
  double t1963;
  double t1975;
  double t1980;
  double t1984;
  double t1985;
  double t1987;
  double t2069;
  double t2076;
  double t2077;
  double t2081;
  double t2082;
  double t2084;
  double t2131;
  double t2142;
  double t2144;
  double t2151;
  double t2152;
  double t2158;
  double t2221;
  double t2225;
  double t2246;
  double t2249;
  double t2269;
  double t2271;
  double t2304;
  double t2307;
  double t2329;
  double t2332;
  double t2196;
  double t2206;
  double t2207;
  double t2215;
  double t2217;
  double t2232;
  double t2236;
  double t2238;
  double t2240;
  double t2242;
  double t2243;
  double t2252;
  double t2253;
  double t2254;
  double t2261;
  double t2262;
  double t2264;
  double t2279;
  double t2282;
  double t2291;
  double t2293;
  double t2295;
  double t2296;
  double t2308;
  double t2310;
  double t2313;
  double t2319;
  double t2323;
  double t2326;
  double t2333;
  double t2335;
  double t2338;
  double t2342;
  double t2344;
  double t2345;
  t1604 = Cos(var1[8]);
  t1662 = Sin(var1[7]);
  t1802 = Sin(var1[8]);
  t1740 = Cos(var1[7]);
  t1847 = Cos(var1[9]);
  t1862 = Sin(var1[9]);
  t1834 = Cos(var1[10]);
  t1886 = t1740*t1847;
  t1889 = -1.*t1662*t1802*t1862;
  t1893 = t1886 + t1889;
  t1858 = t1847*t1662*t1802;
  t1866 = t1740*t1862;
  t1876 = t1858 + t1866;
  t1896 = Sin(var1[10]);
  t1823 = Cos(var1[11]);
  t1904 = t1834*t1893;
  t1906 = -1.*t1876*t1896;
  t1916 = t1904 + t1906;
  t1879 = t1834*t1876;
  t1898 = t1893*t1896;
  t1900 = t1879 + t1898;
  t1920 = Sin(var1[11]);
  t1822 = Cos(var1[12]);
  t1934 = t1823*t1916;
  t1941 = -1.*t1900*t1920;
  t1946 = t1934 + t1941;
  t1902 = t1823*t1900;
  t1926 = t1916*t1920;
  t1929 = t1902 + t1926;
  t1950 = Sin(var1[12]);
  t1819 = Cos(var1[13]);
  t1967 = t1822*t1946;
  t1968 = -1.*t1929*t1950;
  t1969 = t1967 + t1968;
  t1933 = t1822*t1929;
  t1954 = t1946*t1950;
  t1957 = t1933 + t1954;
  t1972 = Sin(var1[13]);
  t1998 = -1.*t1847*t1662;
  t2006 = -1.*t1740*t1802*t1862;
  t2009 = t1998 + t2006;
  t1991 = t1740*t1847*t1802;
  t1993 = -1.*t1662*t1862;
  t1995 = t1991 + t1993;
  t2026 = t1834*t2009;
  t2029 = -1.*t1995*t1896;
  t2033 = t2026 + t2029;
  t1997 = t1834*t1995;
  t2010 = t2009*t1896;
  t2012 = t1997 + t2010;
  t2050 = t1823*t2033;
  t2052 = -1.*t2012*t1920;
  t2056 = t2050 + t2052;
  t2017 = t1823*t2012;
  t2035 = t2033*t1920;
  t2036 = t2017 + t2035;
  t2072 = t1822*t2056;
  t2073 = -1.*t2036*t1950;
  t2074 = t2072 + t2073;
  t2044 = t1822*t2036;
  t2057 = t2056*t1950;
  t2067 = t2044 + t2057;
  t2105 = -1.*t1604*t1834*t1862;
  t2106 = -1.*t1604*t1847*t1896;
  t2108 = t2105 + t2106;
  t2092 = t1604*t1847*t1834;
  t2097 = -1.*t1604*t1862*t1896;
  t2099 = t2092 + t2097;
  t2119 = t1823*t2108;
  t2122 = -1.*t2099*t1920;
  t2123 = t2119 + t2122;
  t2104 = t1823*t2099;
  t2109 = t2108*t1920;
  t2112 = t2104 + t2109;
  t2134 = t1822*t2123;
  t2135 = -1.*t2112*t1950;
  t2138 = t2134 + t2135;
  t2114 = t1822*t2112;
  t2126 = t2123*t1950;
  t2130 = t2114 + t2126;
  t1963 = t1819*t1957;
  t1975 = t1969*t1972;
  t1980 = t1963 + t1975;
  t1984 = t1819*t1969;
  t1985 = -1.*t1957*t1972;
  t1987 = t1984 + t1985;
  t2069 = t1819*t2067;
  t2076 = t2074*t1972;
  t2077 = t2069 + t2076;
  t2081 = t1819*t2074;
  t2082 = -1.*t2067*t1972;
  t2084 = t2081 + t2082;
  t2131 = t1819*t2130;
  t2142 = t2138*t1972;
  t2144 = t2131 + t2142;
  t2151 = t1819*t2138;
  t2152 = -1.*t2130*t1972;
  t2158 = t2151 + t2152;
  t2221 = -1.*t1847;
  t2225 = 1. + t2221;
  t2246 = -1.*t1834;
  t2249 = 1. + t2246;
  t2269 = -1.*t1823;
  t2271 = 1. + t2269;
  t2304 = -1.*t1822;
  t2307 = 1. + t2304;
  t2329 = -1.*t1819;
  t2332 = 1. + t2329;
  t2196 = -1.*t1604;
  t2206 = 1. + t2196;
  t2207 = -0.135*t2206;
  t2215 = 0.049*t1802;
  t2217 = 0. + t2207 + t2215;
  t2232 = -0.049*t2225;
  t2236 = -0.09*t1862;
  t2238 = 0. + t2232 + t2236;
  t2240 = -0.09*t2225;
  t2242 = 0.049*t1862;
  t2243 = 0. + t2240 + t2242;
  t2252 = -0.049*t2249;
  t2253 = -0.21*t1896;
  t2254 = 0. + t2252 + t2253;
  t2261 = -0.21*t2249;
  t2262 = 0.049*t1896;
  t2264 = 0. + t2261 + t2262;
  t2279 = -0.0016*t2271;
  t2282 = -0.2707*t1920;
  t2291 = 0. + t2279 + t2282;
  t2293 = -0.2707*t2271;
  t2295 = 0.0016*t1920;
  t2296 = 0. + t2293 + t2295;
  t2308 = 0.0184*t2307;
  t2310 = -0.7055*t1950;
  t2313 = 0. + t2308 + t2310;
  t2319 = -0.7055*t2307;
  t2323 = -0.0184*t1950;
  t2326 = 0. + t2319 + t2323;
  t2333 = -0.0216*t2332;
  t2335 = -1.1135*t1972;
  t2338 = 0. + t2333 + t2335;
  t2342 = -1.1135*t2332;
  t2344 = 0.0216*t1972;
  t2345 = 0. + t2342 + t2344;
  p_output1[0]=0. + t1604*t1662;
  p_output1[1]=0. - 1.*t1604*t1740;
  p_output1[2]=0. + t1802;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t1980 - 0.766044*t1987;
  p_output1[5]=0. + 0.642788*t2077 + 0.766044*t2084;
  p_output1[6]=0. + 0.642788*t2144 + 0.766044*t2158;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t1980 - 0.642788*t1987;
  p_output1[9]=0. - 0.766044*t2077 + 0.642788*t2084;
  p_output1[10]=0. - 0.766044*t2144 + 0.642788*t2158;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.135*t1662 + 0.1305*t1604*t1662 - 0.0306*t1980 + 1.1312*t1987 - 1.*t1662*t2217 - 1.*t1662*t1802*t2238 - 1.*t1740*t2243 - 1.*t1876*t2254 - 1.*t1893*t2264 - 1.*t1900*t2291 - 1.*t1916*t2296 - 1.*t1929*t2313 - 1.*t1946*t2326 - 1.*t1957*t2338 - 1.*t1969*t2345;
  p_output1[13]=-0.0302 - 0.135*(1. - 1.*t1740) - 0.1305*t1604*t1740 + 0.0306*t2077 - 1.1312*t2084 + t1740*t2217 + t1740*t1802*t2238 - 1.*t1662*t2243 + t1995*t2254 + t2009*t2264 + t2012*t2291 + t2033*t2296 + t2036*t2313 + t2056*t2326 + t2067*t2338 + t2074*t2345;
  p_output1[14]=-0.047 - 0.004500000000000004*t1802 + 0.0306*t2144 - 1.1312*t2158 - 0.049*t2206 + t1604*t2238 + t1604*t1847*t2254 - 1.*t1604*t1862*t2264 + t2099*t2291 + t2108*t2296 + t2112*t2313 + t2123*t2326 + t2130*t2338 + t2138*t2345;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
