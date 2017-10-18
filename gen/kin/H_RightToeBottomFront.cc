/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:55 GMT-04:00
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
  double t2033;
  double t2060;
  double t2029;
  double t2053;
  double t2063;
  double t2093;
  double t2057;
  double t2087;
  double t2089;
  double t2025;
  double t2103;
  double t2108;
  double t2113;
  double t2132;
  double t2092;
  double t2115;
  double t2119;
  double t2001;
  double t2134;
  double t2135;
  double t2139;
  double t2152;
  double t2120;
  double t2142;
  double t2148;
  double t1989;
  double t2155;
  double t2156;
  double t2158;
  double t2161;
  double t2163;
  double t2165;
  double t2166;
  double t2167;
  double t2168;
  double t2177;
  double t2151;
  double t2172;
  double t2173;
  double t1986;
  double t2183;
  double t2192;
  double t2195;
  double t2207;
  double t2176;
  double t2196;
  double t2200;
  double t1967;
  double t2209;
  double t2210;
  double t2211;
  double t2222;
  double t2204;
  double t2213;
  double t2215;
  double t1947;
  double t2224;
  double t2226;
  double t2228;
  double t1943;
  double t2252;
  double t2253;
  double t2254;
  double t2261;
  double t2263;
  double t2264;
  double t2256;
  double t2266;
  double t2270;
  double t2274;
  double t2279;
  double t2281;
  double t2273;
  double t2282;
  double t2284;
  double t2289;
  double t2290;
  double t2291;
  double t2292;
  double t2293;
  double t2295;
  double t2286;
  double t2296;
  double t2299;
  double t2301;
  double t2302;
  double t2303;
  double t2300;
  double t2304;
  double t2305;
  double t2309;
  double t2310;
  double t2312;
  double t2232;
  double t2306;
  double t2313;
  double t2314;
  double t2319;
  double t2320;
  double t2321;
  double t2333;
  double t2335;
  double t2336;
  double t2338;
  double t2339;
  double t2340;
  double t2337;
  double t2341;
  double t2343;
  double t2345;
  double t2347;
  double t2348;
  double t2350;
  double t2351;
  double t2353;
  double t2344;
  double t2354;
  double t2355;
  double t2357;
  double t2359;
  double t2360;
  double t2356;
  double t2361;
  double t2363;
  double t2366;
  double t2367;
  double t2369;
  double t2364;
  double t2371;
  double t2372;
  double t2375;
  double t2376;
  double t2377;
  double t2216;
  double t2229;
  double t2230;
  double t2233;
  double t2234;
  double t2235;
  double t2315;
  double t2323;
  double t2324;
  double t2327;
  double t2329;
  double t2330;
  double t2373;
  double t2378;
  double t2379;
  double t2381;
  double t2382;
  double t2383;
  double t2407;
  double t2409;
  double t2439;
  double t2440;
  double t2458;
  double t2459;
  double t2468;
  double t2469;
  double t2478;
  double t2479;
  double t2488;
  double t2489;
  double t2231;
  double t2241;
  double t2247;
  double t2411;
  double t2412;
  double t2413;
  double t2416;
  double t2418;
  double t2421;
  double t2422;
  double t2423;
  double t2424;
  double t2427;
  double t2428;
  double t2429;
  double t2431;
  double t2434;
  double t2435;
  double t2441;
  double t2443;
  double t2444;
  double t2446;
  double t2447;
  double t2448;
  double t2454;
  double t2455;
  double t2456;
  double t2460;
  double t2461;
  double t2462;
  double t2464;
  double t2465;
  double t2466;
  double t2470;
  double t2471;
  double t2472;
  double t2474;
  double t2475;
  double t2476;
  double t2480;
  double t2481;
  double t2482;
  double t2484;
  double t2485;
  double t2486;
  double t2490;
  double t2491;
  double t2492;
  double t2494;
  double t2495;
  double t2496;
  double t2326;
  double t2331;
  double t2332;
  double t2380;
  double t2384;
  double t2385;
  t2033 = Cos(var1[5]);
  t2060 = Sin(var1[3]);
  t2029 = Cos(var1[3]);
  t2053 = Sin(var1[4]);
  t2063 = Sin(var1[5]);
  t2093 = Cos(var1[14]);
  t2057 = t2029*t2033*t2053;
  t2087 = t2060*t2063;
  t2089 = t2057 + t2087;
  t2025 = Sin(var1[14]);
  t2103 = -1.*t2033*t2060;
  t2108 = t2029*t2053*t2063;
  t2113 = t2103 + t2108;
  t2132 = Cos(var1[15]);
  t2092 = t2025*t2089;
  t2115 = t2093*t2113;
  t2119 = t2092 + t2115;
  t2001 = Sin(var1[15]);
  t2134 = t2093*t2089;
  t2135 = -1.*t2025*t2113;
  t2139 = t2134 + t2135;
  t2152 = Cos(var1[17]);
  t2120 = -1.*t2001*t2119;
  t2142 = t2132*t2139;
  t2148 = t2120 + t2142;
  t1989 = Sin(var1[17]);
  t2155 = Cos(var1[16]);
  t2156 = Cos(var1[4]);
  t2158 = t2155*t2029*t2156;
  t2161 = Sin(var1[16]);
  t2163 = t2132*t2119;
  t2165 = t2001*t2139;
  t2166 = t2163 + t2165;
  t2167 = t2161*t2166;
  t2168 = t2158 + t2167;
  t2177 = Cos(var1[18]);
  t2151 = t1989*t2148;
  t2172 = t2152*t2168;
  t2173 = t2151 + t2172;
  t1986 = Sin(var1[18]);
  t2183 = t2152*t2148;
  t2192 = -1.*t1989*t2168;
  t2195 = t2183 + t2192;
  t2207 = Cos(var1[19]);
  t2176 = -1.*t1986*t2173;
  t2196 = t2177*t2195;
  t2200 = t2176 + t2196;
  t1967 = Sin(var1[19]);
  t2209 = t2177*t2173;
  t2210 = t1986*t2195;
  t2211 = t2209 + t2210;
  t2222 = Cos(var1[20]);
  t2204 = t1967*t2200;
  t2213 = t2207*t2211;
  t2215 = t2204 + t2213;
  t1947 = Sin(var1[20]);
  t2224 = t2207*t2200;
  t2226 = -1.*t1967*t2211;
  t2228 = t2224 + t2226;
  t1943 = Sin(var1[21]);
  t2252 = t2033*t2060*t2053;
  t2253 = -1.*t2029*t2063;
  t2254 = t2252 + t2253;
  t2261 = t2029*t2033;
  t2263 = t2060*t2053*t2063;
  t2264 = t2261 + t2263;
  t2256 = t2025*t2254;
  t2266 = t2093*t2264;
  t2270 = t2256 + t2266;
  t2274 = t2093*t2254;
  t2279 = -1.*t2025*t2264;
  t2281 = t2274 + t2279;
  t2273 = -1.*t2001*t2270;
  t2282 = t2132*t2281;
  t2284 = t2273 + t2282;
  t2289 = t2155*t2156*t2060;
  t2290 = t2132*t2270;
  t2291 = t2001*t2281;
  t2292 = t2290 + t2291;
  t2293 = t2161*t2292;
  t2295 = t2289 + t2293;
  t2286 = t1989*t2284;
  t2296 = t2152*t2295;
  t2299 = t2286 + t2296;
  t2301 = t2152*t2284;
  t2302 = -1.*t1989*t2295;
  t2303 = t2301 + t2302;
  t2300 = -1.*t1986*t2299;
  t2304 = t2177*t2303;
  t2305 = t2300 + t2304;
  t2309 = t2177*t2299;
  t2310 = t1986*t2303;
  t2312 = t2309 + t2310;
  t2232 = Cos(var1[21]);
  t2306 = t1967*t2305;
  t2313 = t2207*t2312;
  t2314 = t2306 + t2313;
  t2319 = t2207*t2305;
  t2320 = -1.*t1967*t2312;
  t2321 = t2319 + t2320;
  t2333 = t2156*t2033*t2025;
  t2335 = t2093*t2156*t2063;
  t2336 = t2333 + t2335;
  t2338 = t2093*t2156*t2033;
  t2339 = -1.*t2156*t2025*t2063;
  t2340 = t2338 + t2339;
  t2337 = -1.*t2001*t2336;
  t2341 = t2132*t2340;
  t2343 = t2337 + t2341;
  t2345 = -1.*t2155*t2053;
  t2347 = t2132*t2336;
  t2348 = t2001*t2340;
  t2350 = t2347 + t2348;
  t2351 = t2161*t2350;
  t2353 = t2345 + t2351;
  t2344 = t1989*t2343;
  t2354 = t2152*t2353;
  t2355 = t2344 + t2354;
  t2357 = t2152*t2343;
  t2359 = -1.*t1989*t2353;
  t2360 = t2357 + t2359;
  t2356 = -1.*t1986*t2355;
  t2361 = t2177*t2360;
  t2363 = t2356 + t2361;
  t2366 = t2177*t2355;
  t2367 = t1986*t2360;
  t2369 = t2366 + t2367;
  t2364 = t1967*t2363;
  t2371 = t2207*t2369;
  t2372 = t2364 + t2371;
  t2375 = t2207*t2363;
  t2376 = -1.*t1967*t2369;
  t2377 = t2375 + t2376;
  t2216 = -1.*t1947*t2215;
  t2229 = t2222*t2228;
  t2230 = t2216 + t2229;
  t2233 = t2222*t2215;
  t2234 = t1947*t2228;
  t2235 = t2233 + t2234;
  t2315 = -1.*t1947*t2314;
  t2323 = t2222*t2321;
  t2324 = t2315 + t2323;
  t2327 = t2222*t2314;
  t2329 = t1947*t2321;
  t2330 = t2327 + t2329;
  t2373 = -1.*t1947*t2372;
  t2378 = t2222*t2377;
  t2379 = t2373 + t2378;
  t2381 = t2222*t2372;
  t2382 = t1947*t2377;
  t2383 = t2381 + t2382;
  t2407 = -1.*t2155;
  t2409 = 1. + t2407;
  t2439 = -1.*t2152;
  t2440 = 1. + t2439;
  t2458 = -1.*t2177;
  t2459 = 1. + t2458;
  t2468 = -1.*t2207;
  t2469 = 1. + t2468;
  t2478 = -1.*t2222;
  t2479 = 1. + t2478;
  t2488 = -1.*t2232;
  t2489 = 1. + t2488;
  t2231 = t1943*t2230;
  t2241 = t2232*t2235;
  t2247 = t2231 + t2241;
  t2411 = -0.049*t2409;
  t2412 = -0.135*t2161;
  t2413 = 0. + t2411 + t2412;
  t2416 = 0.135*t2025;
  t2418 = 0. + t2416;
  t2421 = -1.*t2093;
  t2422 = 1. + t2421;
  t2423 = -0.135*t2422;
  t2424 = 0. + t2423;
  t2427 = -1.*t2132;
  t2428 = 1. + t2427;
  t2429 = -0.135*t2428;
  t2431 = 0. + t2429;
  t2434 = 0.135*t2001;
  t2435 = 0. + t2434;
  t2441 = -0.09*t2440;
  t2443 = 0.049*t1989;
  t2444 = 0. + t2441 + t2443;
  t2446 = -0.135*t2409;
  t2447 = 0.049*t2161;
  t2448 = 0. + t2446 + t2447;
  t2454 = -0.049*t2440;
  t2455 = -0.09*t1989;
  t2456 = 0. + t2454 + t2455;
  t2460 = -0.049*t2459;
  t2461 = -0.21*t1986;
  t2462 = 0. + t2460 + t2461;
  t2464 = -0.21*t2459;
  t2465 = 0.049*t1986;
  t2466 = 0. + t2464 + t2465;
  t2470 = -0.2707*t2469;
  t2471 = 0.0016*t1967;
  t2472 = 0. + t2470 + t2471;
  t2474 = -0.0016*t2469;
  t2475 = -0.2707*t1967;
  t2476 = 0. + t2474 + t2475;
  t2480 = 0.0184*t2479;
  t2481 = -0.7055*t1947;
  t2482 = 0. + t2480 + t2481;
  t2484 = -0.7055*t2479;
  t2485 = -0.0184*t1947;
  t2486 = 0. + t2484 + t2485;
  t2490 = -1.1135*t2489;
  t2491 = 0.0216*t1943;
  t2492 = 0. + t2490 + t2491;
  t2494 = -0.0216*t2489;
  t2495 = -1.1135*t1943;
  t2496 = 0. + t2494 + t2495;
  t2326 = t1943*t2324;
  t2331 = t2232*t2330;
  t2332 = t2326 + t2331;
  t2380 = t1943*t2379;
  t2384 = t2232*t2383;
  t2385 = t2380 + t2384;
  p_output1[0]=t2247;
  p_output1[1]=t2332;
  p_output1[2]=t2385;
  p_output1[3]=0.;
  p_output1[4]=t2029*t2156*t2161 - 1.*t2155*t2166;
  p_output1[5]=t2060*t2156*t2161 - 1.*t2155*t2292;
  p_output1[6]=-1.*t2053*t2161 - 1.*t2155*t2350;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2230*t2232 + t1943*t2235;
  p_output1[9]=-1.*t2232*t2324 + t1943*t2330;
  p_output1[10]=-1.*t2232*t2379 + t1943*t2383;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t2029*t2156*t2161 + t2155*t2166) - 1.1135*(t2230*t2232 - 1.*t1943*t2235) + 0.058287*t2247 + t2029*t2156*t2413 + t2089*t2418 + t2113*t2424 + t2119*t2431 + t2139*t2435 + t2148*t2444 + t2166*t2448 + t2168*t2456 + t2173*t2462 + t2195*t2466 + t2200*t2472 + t2211*t2476 + t2215*t2482 + t2228*t2486 + t2230*t2492 + t2235*t2496 + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t2060*t2156*t2161 + t2155*t2292) - 1.1135*(t2232*t2324 - 1.*t1943*t2330) + 0.058287*t2332 + t2060*t2156*t2413 + t2254*t2418 + t2264*t2424 + t2270*t2431 + t2281*t2435 + t2284*t2444 + t2292*t2448 + t2295*t2456 + t2299*t2462 + t2303*t2466 + t2305*t2472 + t2312*t2476 + t2314*t2482 + t2321*t2486 + t2324*t2492 + t2330*t2496 + var1[1];
  p_output1[14]=0. - 0.1305*(t2053*t2161 + t2155*t2350) - 1.1135*(t2232*t2379 - 1.*t1943*t2383) + 0.058287*t2385 - 1.*t2053*t2413 + t2033*t2156*t2418 + t2063*t2156*t2424 + t2336*t2431 + t2340*t2435 + t2343*t2444 + t2350*t2448 + t2353*t2456 + t2355*t2462 + t2360*t2466 + t2363*t2472 + t2369*t2476 + t2372*t2482 + t2377*t2486 + t2379*t2492 + t2383*t2496 + var1[2];
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

#include "H_RightToeBottomFront.hh"

namespace SymExpression
{

void H_RightToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
