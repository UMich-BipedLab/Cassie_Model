/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:54 GMT-04:00
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
  double t1881;
  double t1990;
  double t2012;
  double t1997;
  double t2024;
  double t1976;
  double t2001;
  double t2025;
  double t2029;
  double t2038;
  double t2058;
  double t2060;
  double t2062;
  double t2104;
  double t2092;
  double t2093;
  double t2101;
  double t2070;
  double t2115;
  double t2118;
  double t2119;
  double t1891;
  double t1898;
  double t1913;
  double t1946;
  double t1888;
  double t2156;
  double t2158;
  double t2160;
  double t2122;
  double t2125;
  double t2130;
  double t2133;
  double t2138;
  double t2139;
  double t2142;
  double t2176;
  double t2177;
  double t2180;
  double t2186;
  double t2189;
  double t2190;
  double t2193;
  double t2200;
  double t2204;
  double t2206;
  double t2213;
  double t2214;
  double t2215;
  double t2217;
  double t2219;
  double t2220;
  double t2223;
  double t2227;
  double t2228;
  double t2229;
  double t2234;
  double t2235;
  double t2240;
  double t2242;
  double t2244;
  double t2245;
  double t2251;
  double t2254;
  double t2256;
  double t2257;
  double t2270;
  double t2272;
  double t2273;
  double t2275;
  double t2276;
  double t2278;
  double t2280;
  double t2283;
  double t2284;
  double t2285;
  double t2292;
  double t2293;
  double t2294;
  double t1943;
  double t1947;
  double t1950;
  double t1986;
  double t1989;
  double t2039;
  double t2042;
  double t2053;
  double t2057;
  double t2077;
  double t2082;
  double t2087;
  double t2089;
  double t2310;
  double t2311;
  double t2312;
  double t2314;
  double t2315;
  double t2316;
  double t2108;
  double t2113;
  double t2132;
  double t2134;
  double t2135;
  double t2320;
  double t2321;
  double t2322;
  double t2324;
  double t2325;
  double t2326;
  double t2151;
  double t2152;
  double t2155;
  double t2332;
  double t2333;
  double t2334;
  double t2168;
  double t2172;
  double t2173;
  double t2192;
  double t2195;
  double t2196;
  double t2328;
  double t2329;
  double t2330;
  double t2340;
  double t2341;
  double t2342;
  double t2209;
  double t2210;
  double t2211;
  double t2222;
  double t2224;
  double t2226;
  double t2344;
  double t2345;
  double t2346;
  double t2348;
  double t2349;
  double t2350;
  double t2231;
  double t2232;
  double t2233;
  double t2247;
  double t2252;
  double t2253;
  double t2352;
  double t2353;
  double t2354;
  double t2356;
  double t2357;
  double t2358;
  double t2263;
  double t2264;
  double t2266;
  double t2279;
  double t2281;
  double t2282;
  double t2360;
  double t2361;
  double t2362;
  double t2364;
  double t2365;
  double t2366;
  double t2289;
  double t2290;
  double t2291;
  double t2368;
  double t2369;
  double t2370;
  double t2372;
  double t2373;
  double t2374;
  double t2388;
  double t2389;
  double t2390;
  double t2392;
  double t2393;
  double t2394;
  double t2400;
  double t2401;
  double t2402;
  double t2396;
  double t2397;
  double t2398;
  double t2408;
  double t2409;
  double t2410;
  double t2412;
  double t2413;
  double t2414;
  double t2416;
  double t2417;
  double t2418;
  double t2420;
  double t2421;
  double t2422;
  double t2424;
  double t2425;
  double t2426;
  double t2428;
  double t2429;
  double t2430;
  double t2432;
  double t2433;
  double t2434;
  double t2436;
  double t2437;
  double t2438;
  double t2440;
  double t2441;
  double t2442;
  t1881 = Cos(var1[3]);
  t1990 = Cos(var1[5]);
  t2012 = Sin(var1[3]);
  t1997 = Sin(var1[4]);
  t2024 = Sin(var1[5]);
  t1976 = Sin(var1[14]);
  t2001 = t1881*t1990*t1997;
  t2025 = t2012*t2024;
  t2029 = t2001 + t2025;
  t2038 = Cos(var1[14]);
  t2058 = -1.*t1990*t2012;
  t2060 = t1881*t1997*t2024;
  t2062 = t2058 + t2060;
  t2104 = Sin(var1[15]);
  t2092 = t1976*t2029;
  t2093 = t2038*t2062;
  t2101 = t2092 + t2093;
  t2070 = Cos(var1[15]);
  t2115 = t2038*t2029;
  t2118 = -1.*t1976*t2062;
  t2119 = t2115 + t2118;
  t1891 = Cos(var1[16]);
  t1898 = -1.*t1891;
  t1913 = 1. + t1898;
  t1946 = Sin(var1[16]);
  t1888 = Cos(var1[4]);
  t2156 = t2070*t2101;
  t2158 = t2104*t2119;
  t2160 = t2156 + t2158;
  t2122 = Cos(var1[17]);
  t2125 = -1.*t2122;
  t2130 = 1. + t2125;
  t2133 = Sin(var1[17]);
  t2138 = -1.*t2104*t2101;
  t2139 = t2070*t2119;
  t2142 = t2138 + t2139;
  t2176 = t1891*t1881*t1888;
  t2177 = t1946*t2160;
  t2180 = t2176 + t2177;
  t2186 = Cos(var1[18]);
  t2189 = -1.*t2186;
  t2190 = 1. + t2189;
  t2193 = Sin(var1[18]);
  t2200 = t2133*t2142;
  t2204 = t2122*t2180;
  t2206 = t2200 + t2204;
  t2213 = t2122*t2142;
  t2214 = -1.*t2133*t2180;
  t2215 = t2213 + t2214;
  t2217 = Cos(var1[19]);
  t2219 = -1.*t2217;
  t2220 = 1. + t2219;
  t2223 = Sin(var1[19]);
  t2227 = -1.*t2193*t2206;
  t2228 = t2186*t2215;
  t2229 = t2227 + t2228;
  t2234 = t2186*t2206;
  t2235 = t2193*t2215;
  t2240 = t2234 + t2235;
  t2242 = Cos(var1[20]);
  t2244 = -1.*t2242;
  t2245 = 1. + t2244;
  t2251 = Sin(var1[20]);
  t2254 = t2223*t2229;
  t2256 = t2217*t2240;
  t2257 = t2254 + t2256;
  t2270 = t2217*t2229;
  t2272 = -1.*t2223*t2240;
  t2273 = t2270 + t2272;
  t2275 = Cos(var1[21]);
  t2276 = -1.*t2275;
  t2278 = 1. + t2276;
  t2280 = Sin(var1[21]);
  t2283 = -1.*t2251*t2257;
  t2284 = t2242*t2273;
  t2285 = t2283 + t2284;
  t2292 = t2242*t2257;
  t2293 = t2251*t2273;
  t2294 = t2292 + t2293;
  t1943 = -0.049*t1913;
  t1947 = -0.135*t1946;
  t1950 = 0. + t1943 + t1947;
  t1986 = 0.135*t1976;
  t1989 = 0. + t1986;
  t2039 = -1.*t2038;
  t2042 = 1. + t2039;
  t2053 = -0.135*t2042;
  t2057 = 0. + t2053;
  t2077 = -1.*t2070;
  t2082 = 1. + t2077;
  t2087 = -0.135*t2082;
  t2089 = 0. + t2087;
  t2310 = t1990*t2012*t1997;
  t2311 = -1.*t1881*t2024;
  t2312 = t2310 + t2311;
  t2314 = t1881*t1990;
  t2315 = t2012*t1997*t2024;
  t2316 = t2314 + t2315;
  t2108 = 0.135*t2104;
  t2113 = 0. + t2108;
  t2132 = -0.09*t2130;
  t2134 = 0.049*t2133;
  t2135 = 0. + t2132 + t2134;
  t2320 = t1976*t2312;
  t2321 = t2038*t2316;
  t2322 = t2320 + t2321;
  t2324 = t2038*t2312;
  t2325 = -1.*t1976*t2316;
  t2326 = t2324 + t2325;
  t2151 = -0.135*t1913;
  t2152 = 0.049*t1946;
  t2155 = 0. + t2151 + t2152;
  t2332 = t2070*t2322;
  t2333 = t2104*t2326;
  t2334 = t2332 + t2333;
  t2168 = -0.049*t2130;
  t2172 = -0.09*t2133;
  t2173 = 0. + t2168 + t2172;
  t2192 = -0.049*t2190;
  t2195 = -0.21*t2193;
  t2196 = 0. + t2192 + t2195;
  t2328 = -1.*t2104*t2322;
  t2329 = t2070*t2326;
  t2330 = t2328 + t2329;
  t2340 = t1891*t1888*t2012;
  t2341 = t1946*t2334;
  t2342 = t2340 + t2341;
  t2209 = -0.21*t2190;
  t2210 = 0.049*t2193;
  t2211 = 0. + t2209 + t2210;
  t2222 = -0.2707*t2220;
  t2224 = 0.0016*t2223;
  t2226 = 0. + t2222 + t2224;
  t2344 = t2133*t2330;
  t2345 = t2122*t2342;
  t2346 = t2344 + t2345;
  t2348 = t2122*t2330;
  t2349 = -1.*t2133*t2342;
  t2350 = t2348 + t2349;
  t2231 = -0.0016*t2220;
  t2232 = -0.2707*t2223;
  t2233 = 0. + t2231 + t2232;
  t2247 = 0.0184*t2245;
  t2252 = -0.7055*t2251;
  t2253 = 0. + t2247 + t2252;
  t2352 = -1.*t2193*t2346;
  t2353 = t2186*t2350;
  t2354 = t2352 + t2353;
  t2356 = t2186*t2346;
  t2357 = t2193*t2350;
  t2358 = t2356 + t2357;
  t2263 = -0.7055*t2245;
  t2264 = -0.0184*t2251;
  t2266 = 0. + t2263 + t2264;
  t2279 = -1.1135*t2278;
  t2281 = 0.0216*t2280;
  t2282 = 0. + t2279 + t2281;
  t2360 = t2223*t2354;
  t2361 = t2217*t2358;
  t2362 = t2360 + t2361;
  t2364 = t2217*t2354;
  t2365 = -1.*t2223*t2358;
  t2366 = t2364 + t2365;
  t2289 = -0.0216*t2278;
  t2290 = -1.1135*t2280;
  t2291 = 0. + t2289 + t2290;
  t2368 = -1.*t2251*t2362;
  t2369 = t2242*t2366;
  t2370 = t2368 + t2369;
  t2372 = t2242*t2362;
  t2373 = t2251*t2366;
  t2374 = t2372 + t2373;
  t2388 = t1888*t1990*t1976;
  t2389 = t2038*t1888*t2024;
  t2390 = t2388 + t2389;
  t2392 = t2038*t1888*t1990;
  t2393 = -1.*t1888*t1976*t2024;
  t2394 = t2392 + t2393;
  t2400 = t2070*t2390;
  t2401 = t2104*t2394;
  t2402 = t2400 + t2401;
  t2396 = -1.*t2104*t2390;
  t2397 = t2070*t2394;
  t2398 = t2396 + t2397;
  t2408 = -1.*t1891*t1997;
  t2409 = t1946*t2402;
  t2410 = t2408 + t2409;
  t2412 = t2133*t2398;
  t2413 = t2122*t2410;
  t2414 = t2412 + t2413;
  t2416 = t2122*t2398;
  t2417 = -1.*t2133*t2410;
  t2418 = t2416 + t2417;
  t2420 = -1.*t2193*t2414;
  t2421 = t2186*t2418;
  t2422 = t2420 + t2421;
  t2424 = t2186*t2414;
  t2425 = t2193*t2418;
  t2426 = t2424 + t2425;
  t2428 = t2223*t2422;
  t2429 = t2217*t2426;
  t2430 = t2428 + t2429;
  t2432 = t2217*t2422;
  t2433 = -1.*t2223*t2426;
  t2434 = t2432 + t2433;
  t2436 = -1.*t2251*t2430;
  t2437 = t2242*t2434;
  t2438 = t2436 + t2437;
  t2440 = t2242*t2430;
  t2441 = t2251*t2434;
  t2442 = t2440 + t2441;
  p_output1[0]=0. + t1881*t1888*t1950 + t1989*t2029 + t2057*t2062 + t2089*t2101 + t2113*t2119 + t2135*t2142 + t2155*t2160 - 0.1305*(-1.*t1881*t1888*t1946 + t1891*t2160) + t2173*t2180 + t2196*t2206 + t2211*t2215 + t2226*t2229 + t2233*t2240 + t2253*t2257 + t2266*t2273 + t2282*t2285 + t2291*t2294 + 0.058287*(t2280*t2285 + t2275*t2294) - 1.1135*(t2275*t2285 - 1.*t2280*t2294) + var1[0];
  p_output1[1]=0. + t1888*t1950*t2012 + t1989*t2312 + t2057*t2316 + t2089*t2322 + t2113*t2326 + t2135*t2330 + t2155*t2334 - 0.1305*(-1.*t1888*t1946*t2012 + t1891*t2334) + t2173*t2342 + t2196*t2346 + t2211*t2350 + t2226*t2354 + t2233*t2358 + t2253*t2362 + t2266*t2366 + t2282*t2370 + t2291*t2374 + 0.058287*(t2280*t2370 + t2275*t2374) - 1.1135*(t2275*t2370 - 1.*t2280*t2374) + var1[1];
  p_output1[2]=0. + t1888*t1989*t1990 - 1.*t1950*t1997 + t1888*t2024*t2057 + t2089*t2390 + t2113*t2394 + t2135*t2398 + t2155*t2402 - 0.1305*(t1946*t1997 + t1891*t2402) + t2173*t2410 + t2196*t2414 + t2211*t2418 + t2226*t2422 + t2233*t2426 + t2253*t2430 + t2266*t2434 + t2282*t2438 + t2291*t2442 + 0.058287*(t2280*t2438 + t2275*t2442) - 1.1135*(t2275*t2438 - 1.*t2280*t2442) + var1[2];
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

#include "p_RightToeBottomFront.hh"

namespace SymExpression
{

void p_RightToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
