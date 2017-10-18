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
  double t1857;
  double t1885;
  double t1853;
  double t1861;
  double t1886;
  double t1840;
  double t1909;
  double t1913;
  double t1918;
  double t1881;
  double t1888;
  double t1891;
  double t1920;
  double t1829;
  double t1947;
  double t1950;
  double t1953;
  double t1898;
  double t1939;
  double t1943;
  double t1958;
  double t1978;
  double t1946;
  double t1960;
  double t1967;
  double t1824;
  double t1980;
  double t1984;
  double t1986;
  double t1989;
  double t1990;
  double t1992;
  double t1995;
  double t1997;
  double t1998;
  double t2006;
  double t1976;
  double t2001;
  double t2002;
  double t1820;
  double t2012;
  double t2021;
  double t2024;
  double t2036;
  double t2005;
  double t2025;
  double t2029;
  double t1813;
  double t2038;
  double t2039;
  double t2040;
  double t2050;
  double t2033;
  double t2042;
  double t2044;
  double t1759;
  double t2053;
  double t2055;
  double t2057;
  double t1739;
  double t2092;
  double t2093;
  double t2095;
  double t2082;
  double t2083;
  double t2087;
  double t2104;
  double t2108;
  double t2110;
  double t2089;
  double t2099;
  double t2101;
  double t2103;
  double t2111;
  double t2113;
  double t2118;
  double t2119;
  double t2120;
  double t2121;
  double t2122;
  double t2124;
  double t2115;
  double t2125;
  double t2128;
  double t2130;
  double t2131;
  double t2132;
  double t2129;
  double t2133;
  double t2134;
  double t2138;
  double t2139;
  double t2141;
  double t2061;
  double t2135;
  double t2142;
  double t2144;
  double t2148;
  double t2149;
  double t2151;
  double t2167;
  double t2168;
  double t2169;
  double t2163;
  double t2164;
  double t2165;
  double t2166;
  double t2170;
  double t2172;
  double t2174;
  double t2176;
  double t2177;
  double t2179;
  double t2180;
  double t2182;
  double t2173;
  double t2183;
  double t2184;
  double t2186;
  double t2188;
  double t2189;
  double t2185;
  double t2190;
  double t2192;
  double t2195;
  double t2196;
  double t2198;
  double t2193;
  double t2200;
  double t2201;
  double t2204;
  double t2205;
  double t2206;
  double t2045;
  double t2058;
  double t2059;
  double t2062;
  double t2063;
  double t2064;
  double t2145;
  double t2152;
  double t2154;
  double t2156;
  double t2158;
  double t2159;
  double t2202;
  double t2207;
  double t2208;
  double t2210;
  double t2211;
  double t2212;
  double t2268;
  double t2269;
  double t2258;
  double t2260;
  double t2287;
  double t2288;
  double t2297;
  double t2298;
  double t2307;
  double t2308;
  double t2317;
  double t2318;
  double t2060;
  double t2070;
  double t2077;
  double t2236;
  double t2238;
  double t2240;
  double t2241;
  double t2244;
  double t2245;
  double t2248;
  double t2250;
  double t2251;
  double t2252;
  double t2254;
  double t2256;
  double t2261;
  double t2263;
  double t2264;
  double t2270;
  double t2272;
  double t2273;
  double t2275;
  double t2276;
  double t2277;
  double t2283;
  double t2284;
  double t2285;
  double t2289;
  double t2290;
  double t2291;
  double t2293;
  double t2294;
  double t2295;
  double t2299;
  double t2300;
  double t2301;
  double t2303;
  double t2304;
  double t2305;
  double t2309;
  double t2310;
  double t2311;
  double t2313;
  double t2314;
  double t2315;
  double t2319;
  double t2320;
  double t2321;
  double t2323;
  double t2324;
  double t2325;
  double t2155;
  double t2160;
  double t2161;
  double t2209;
  double t2213;
  double t2214;
  t1857 = Cos(var1[5]);
  t1885 = Sin(var1[3]);
  t1853 = Cos(var1[3]);
  t1861 = Sin(var1[4]);
  t1886 = Sin(var1[5]);
  t1840 = Cos(var1[6]);
  t1909 = -1.*t1857*t1885;
  t1913 = t1853*t1861*t1886;
  t1918 = t1909 + t1913;
  t1881 = t1853*t1857*t1861;
  t1888 = t1885*t1886;
  t1891 = t1881 + t1888;
  t1920 = Sin(var1[6]);
  t1829 = Cos(var1[7]);
  t1947 = t1840*t1918;
  t1950 = t1891*t1920;
  t1953 = t1947 + t1950;
  t1898 = t1840*t1891;
  t1939 = -1.*t1918*t1920;
  t1943 = t1898 + t1939;
  t1958 = Sin(var1[7]);
  t1978 = Cos(var1[9]);
  t1946 = t1829*t1943;
  t1960 = -1.*t1953*t1958;
  t1967 = t1946 + t1960;
  t1824 = Sin(var1[9]);
  t1980 = Cos(var1[4]);
  t1984 = Cos(var1[8]);
  t1986 = t1853*t1980*t1984;
  t1989 = t1829*t1953;
  t1990 = t1943*t1958;
  t1992 = t1989 + t1990;
  t1995 = Sin(var1[8]);
  t1997 = t1992*t1995;
  t1998 = t1986 + t1997;
  t2006 = Cos(var1[10]);
  t1976 = t1824*t1967;
  t2001 = t1978*t1998;
  t2002 = t1976 + t2001;
  t1820 = Sin(var1[10]);
  t2012 = t1978*t1967;
  t2021 = -1.*t1824*t1998;
  t2024 = t2012 + t2021;
  t2036 = Cos(var1[11]);
  t2005 = -1.*t1820*t2002;
  t2025 = t2006*t2024;
  t2029 = t2005 + t2025;
  t1813 = Sin(var1[11]);
  t2038 = t2006*t2002;
  t2039 = t1820*t2024;
  t2040 = t2038 + t2039;
  t2050 = Cos(var1[12]);
  t2033 = t1813*t2029;
  t2042 = t2036*t2040;
  t2044 = t2033 + t2042;
  t1759 = Sin(var1[12]);
  t2053 = t2036*t2029;
  t2055 = -1.*t1813*t2040;
  t2057 = t2053 + t2055;
  t1739 = Sin(var1[13]);
  t2092 = t1853*t1857;
  t2093 = t1885*t1861*t1886;
  t2095 = t2092 + t2093;
  t2082 = t1857*t1885*t1861;
  t2083 = -1.*t1853*t1886;
  t2087 = t2082 + t2083;
  t2104 = t1840*t2095;
  t2108 = t2087*t1920;
  t2110 = t2104 + t2108;
  t2089 = t1840*t2087;
  t2099 = -1.*t2095*t1920;
  t2101 = t2089 + t2099;
  t2103 = t1829*t2101;
  t2111 = -1.*t2110*t1958;
  t2113 = t2103 + t2111;
  t2118 = t1980*t1984*t1885;
  t2119 = t1829*t2110;
  t2120 = t2101*t1958;
  t2121 = t2119 + t2120;
  t2122 = t2121*t1995;
  t2124 = t2118 + t2122;
  t2115 = t1824*t2113;
  t2125 = t1978*t2124;
  t2128 = t2115 + t2125;
  t2130 = t1978*t2113;
  t2131 = -1.*t1824*t2124;
  t2132 = t2130 + t2131;
  t2129 = -1.*t1820*t2128;
  t2133 = t2006*t2132;
  t2134 = t2129 + t2133;
  t2138 = t2006*t2128;
  t2139 = t1820*t2132;
  t2141 = t2138 + t2139;
  t2061 = Cos(var1[13]);
  t2135 = t1813*t2134;
  t2142 = t2036*t2141;
  t2144 = t2135 + t2142;
  t2148 = t2036*t2134;
  t2149 = -1.*t1813*t2141;
  t2151 = t2148 + t2149;
  t2167 = t1980*t1840*t1886;
  t2168 = t1980*t1857*t1920;
  t2169 = t2167 + t2168;
  t2163 = t1980*t1857*t1840;
  t2164 = -1.*t1980*t1886*t1920;
  t2165 = t2163 + t2164;
  t2166 = t1829*t2165;
  t2170 = -1.*t2169*t1958;
  t2172 = t2166 + t2170;
  t2174 = -1.*t1984*t1861;
  t2176 = t1829*t2169;
  t2177 = t2165*t1958;
  t2179 = t2176 + t2177;
  t2180 = t2179*t1995;
  t2182 = t2174 + t2180;
  t2173 = t1824*t2172;
  t2183 = t1978*t2182;
  t2184 = t2173 + t2183;
  t2186 = t1978*t2172;
  t2188 = -1.*t1824*t2182;
  t2189 = t2186 + t2188;
  t2185 = -1.*t1820*t2184;
  t2190 = t2006*t2189;
  t2192 = t2185 + t2190;
  t2195 = t2006*t2184;
  t2196 = t1820*t2189;
  t2198 = t2195 + t2196;
  t2193 = t1813*t2192;
  t2200 = t2036*t2198;
  t2201 = t2193 + t2200;
  t2204 = t2036*t2192;
  t2205 = -1.*t1813*t2198;
  t2206 = t2204 + t2205;
  t2045 = -1.*t1759*t2044;
  t2058 = t2050*t2057;
  t2059 = t2045 + t2058;
  t2062 = t2050*t2044;
  t2063 = t1759*t2057;
  t2064 = t2062 + t2063;
  t2145 = -1.*t1759*t2144;
  t2152 = t2050*t2151;
  t2154 = t2145 + t2152;
  t2156 = t2050*t2144;
  t2158 = t1759*t2151;
  t2159 = t2156 + t2158;
  t2202 = -1.*t1759*t2201;
  t2207 = t2050*t2206;
  t2208 = t2202 + t2207;
  t2210 = t2050*t2201;
  t2211 = t1759*t2206;
  t2212 = t2210 + t2211;
  t2268 = -1.*t1984;
  t2269 = 1. + t2268;
  t2258 = -1.*t1978;
  t2260 = 1. + t2258;
  t2287 = -1.*t2006;
  t2288 = 1. + t2287;
  t2297 = -1.*t2036;
  t2298 = 1. + t2297;
  t2307 = -1.*t2050;
  t2308 = 1. + t2307;
  t2317 = -1.*t2061;
  t2318 = 1. + t2317;
  t2060 = t1739*t2059;
  t2070 = t2061*t2064;
  t2077 = t2060 + t2070;
  t2236 = -1.*t1840;
  t2238 = 1. + t2236;
  t2240 = 0.135*t2238;
  t2241 = 0. + t2240;
  t2244 = -0.135*t1920;
  t2245 = 0. + t2244;
  t2248 = -1.*t1829;
  t2250 = 1. + t2248;
  t2251 = 0.135*t2250;
  t2252 = 0. + t2251;
  t2254 = -0.135*t1958;
  t2256 = 0. + t2254;
  t2261 = -0.09*t2260;
  t2263 = 0.049*t1824;
  t2264 = 0. + t2261 + t2263;
  t2270 = 0.135*t2269;
  t2272 = 0.049*t1995;
  t2273 = 0. + t2270 + t2272;
  t2275 = -0.049*t2269;
  t2276 = 0.135*t1995;
  t2277 = 0. + t2275 + t2276;
  t2283 = -0.049*t2260;
  t2284 = -0.09*t1824;
  t2285 = 0. + t2283 + t2284;
  t2289 = -0.049*t2288;
  t2290 = -0.21*t1820;
  t2291 = 0. + t2289 + t2290;
  t2293 = -0.21*t2288;
  t2294 = 0.049*t1820;
  t2295 = 0. + t2293 + t2294;
  t2299 = -0.2707*t2298;
  t2300 = 0.0016*t1813;
  t2301 = 0. + t2299 + t2300;
  t2303 = -0.0016*t2298;
  t2304 = -0.2707*t1813;
  t2305 = 0. + t2303 + t2304;
  t2309 = 0.0184*t2308;
  t2310 = -0.7055*t1759;
  t2311 = 0. + t2309 + t2310;
  t2313 = -0.7055*t2308;
  t2314 = -0.0184*t1759;
  t2315 = 0. + t2313 + t2314;
  t2319 = -1.1135*t2318;
  t2320 = 0.0216*t1739;
  t2321 = 0. + t2319 + t2320;
  t2323 = -0.0216*t2318;
  t2324 = -1.1135*t1739;
  t2325 = 0. + t2323 + t2324;
  t2155 = t1739*t2154;
  t2160 = t2061*t2159;
  t2161 = t2155 + t2160;
  t2209 = t1739*t2208;
  t2213 = t2061*t2212;
  t2214 = t2209 + t2213;
  p_output1[0]=t2077;
  p_output1[1]=t2161;
  p_output1[2]=t2214;
  p_output1[3]=0.;
  p_output1[4]=-1.*t1984*t1992 + t1853*t1980*t1995;
  p_output1[5]=t1885*t1980*t1995 - 1.*t1984*t2121;
  p_output1[6]=-1.*t1861*t1995 - 1.*t1984*t2179;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2059*t2061 + t1739*t2064;
  p_output1[9]=-1.*t2061*t2154 + t1739*t2159;
  p_output1[10]=-1.*t2061*t2208 + t1739*t2212;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1984*t1992 - 1.*t1853*t1980*t1995) - 1.1135*(t2059*t2061 - 1.*t1739*t2064) + 0.058287*t2077 + t1918*t2241 + t1891*t2245 + t1953*t2252 + t1943*t2256 + t1967*t2264 + t1992*t2273 + t1853*t1980*t2277 + t1998*t2285 + t2002*t2291 + t2024*t2295 + t2029*t2301 + t2040*t2305 + t2044*t2311 + t2057*t2315 + t2059*t2321 + t2064*t2325 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1885*t1980*t1995 + t1984*t2121) - 1.1135*(t2061*t2154 - 1.*t1739*t2159) + 0.058287*t2161 + t2095*t2241 + t2087*t2245 + t2110*t2252 + t2101*t2256 + t2113*t2264 + t2121*t2273 + t1885*t1980*t2277 + t2124*t2285 + t2128*t2291 + t2132*t2295 + t2134*t2301 + t2141*t2305 + t2144*t2311 + t2151*t2315 + t2154*t2321 + t2159*t2325 + var1[1];
  p_output1[14]=0. + 0.1305*(t1861*t1995 + t1984*t2179) - 1.1135*(t2061*t2208 - 1.*t1739*t2212) + 0.058287*t2214 + t1886*t1980*t2241 + t1857*t1980*t2245 + t2169*t2252 + t2165*t2256 + t2172*t2264 + t2179*t2273 - 1.*t1861*t2277 + t2182*t2285 + t2184*t2291 + t2189*t2295 + t2192*t2301 + t2198*t2305 + t2201*t2311 + t2206*t2315 + t2208*t2321 + t2212*t2325 + var1[2];
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

#include "H_LeftToeBottomFront.hh"

namespace SymExpression
{

void H_LeftToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
