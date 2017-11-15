/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:11 GMT-05:00
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
  double t2215;
  double t2194;
  double t2216;
  double t2209;
  double t2218;
  double t2162;
  double t2214;
  double t2221;
  double t2222;
  double t2226;
  double t2227;
  double t2229;
  double t2230;
  double t2240;
  double t2243;
  double t2244;
  double t2248;
  double t2235;
  double t2236;
  double t2238;
  double t2253;
  double t2266;
  double t2267;
  double t2268;
  double t2270;
  double t2263;
  double t2264;
  double t2265;
  double t2275;
  double t2276;
  double t2277;
  double t2282;
  double t2283;
  double t2285;
  double t2287;
  double t2290;
  double t2291;
  double t2292;
  double t2297;
  double t2298;
  double t2299;
  double t2301;
  double t2302;
  double t2303;
  double t2305;
  double t2308;
  double t2309;
  double t2310;
  double t2315;
  double t2316;
  double t2317;
  double t2167;
  double t2168;
  double t2189;
  double t2193;
  double t2231;
  double t2233;
  double t2328;
  double t2329;
  double t2330;
  double t2332;
  double t2333;
  double t2334;
  double t2245;
  double t2249;
  double t2251;
  double t2255;
  double t2256;
  double t2257;
  double t2336;
  double t2337;
  double t2338;
  double t2269;
  double t2271;
  double t2273;
  double t2278;
  double t2279;
  double t2280;
  double t2286;
  double t2288;
  double t2289;
  double t2345;
  double t2346;
  double t2347;
  double t2349;
  double t2350;
  double t2351;
  double t2294;
  double t2295;
  double t2296;
  double t2304;
  double t2306;
  double t2307;
  double t2353;
  double t2354;
  double t2355;
  double t2357;
  double t2358;
  double t2359;
  double t2312;
  double t2313;
  double t2314;
  double t2361;
  double t2362;
  double t2363;
  double t2365;
  double t2366;
  double t2367;
  double t2380;
  double t2381;
  double t2382;
  double t2389;
  double t2390;
  double t2391;
  double t2393;
  double t2394;
  double t2395;
  double t2397;
  double t2398;
  double t2399;
  double t2401;
  double t2402;
  double t2403;
  double t2405;
  double t2406;
  double t2407;
  double t2409;
  double t2410;
  double t2411;
  t2215 = Cos(var1[3]);
  t2194 = Cos(var1[5]);
  t2216 = Sin(var1[4]);
  t2209 = Sin(var1[3]);
  t2218 = Sin(var1[5]);
  t2162 = Cos(var1[6]);
  t2214 = -1.*t2194*t2209;
  t2221 = t2215*t2216*t2218;
  t2222 = t2214 + t2221;
  t2226 = t2215*t2194*t2216;
  t2227 = t2209*t2218;
  t2229 = t2226 + t2227;
  t2230 = Sin(var1[6]);
  t2240 = Cos(var1[7]);
  t2243 = -1.*t2240;
  t2244 = 1. + t2243;
  t2248 = Sin(var1[7]);
  t2235 = t2162*t2222;
  t2236 = t2229*t2230;
  t2238 = t2235 + t2236;
  t2253 = Cos(var1[4]);
  t2266 = Cos(var1[8]);
  t2267 = -1.*t2266;
  t2268 = 1. + t2267;
  t2270 = Sin(var1[8]);
  t2263 = t2215*t2253*t2240;
  t2264 = t2238*t2248;
  t2265 = t2263 + t2264;
  t2275 = t2162*t2229;
  t2276 = -1.*t2222*t2230;
  t2277 = t2275 + t2276;
  t2282 = Cos(var1[9]);
  t2283 = -1.*t2282;
  t2285 = 1. + t2283;
  t2287 = Sin(var1[9]);
  t2290 = t2266*t2265;
  t2291 = t2277*t2270;
  t2292 = t2290 + t2291;
  t2297 = t2266*t2277;
  t2298 = -1.*t2265*t2270;
  t2299 = t2297 + t2298;
  t2301 = Cos(var1[10]);
  t2302 = -1.*t2301;
  t2303 = 1. + t2302;
  t2305 = Sin(var1[10]);
  t2308 = -1.*t2287*t2292;
  t2309 = t2282*t2299;
  t2310 = t2308 + t2309;
  t2315 = t2282*t2292;
  t2316 = t2287*t2299;
  t2317 = t2315 + t2316;
  t2167 = -1.*t2162;
  t2168 = 1. + t2167;
  t2189 = 0.135*t2168;
  t2193 = 0. + t2189;
  t2231 = -0.135*t2230;
  t2233 = 0. + t2231;
  t2328 = t2215*t2194;
  t2329 = t2209*t2216*t2218;
  t2330 = t2328 + t2329;
  t2332 = t2194*t2209*t2216;
  t2333 = -1.*t2215*t2218;
  t2334 = t2332 + t2333;
  t2245 = 0.135*t2244;
  t2249 = 0.049*t2248;
  t2251 = 0. + t2245 + t2249;
  t2255 = -0.049*t2244;
  t2256 = 0.135*t2248;
  t2257 = 0. + t2255 + t2256;
  t2336 = t2162*t2330;
  t2337 = t2334*t2230;
  t2338 = t2336 + t2337;
  t2269 = -0.049*t2268;
  t2271 = -0.09*t2270;
  t2273 = 0. + t2269 + t2271;
  t2278 = -0.09*t2268;
  t2279 = 0.049*t2270;
  t2280 = 0. + t2278 + t2279;
  t2286 = -0.049*t2285;
  t2288 = -0.21*t2287;
  t2289 = 0. + t2286 + t2288;
  t2345 = t2253*t2240*t2209;
  t2346 = t2338*t2248;
  t2347 = t2345 + t2346;
  t2349 = t2162*t2334;
  t2350 = -1.*t2330*t2230;
  t2351 = t2349 + t2350;
  t2294 = -0.21*t2285;
  t2295 = 0.049*t2287;
  t2296 = 0. + t2294 + t2295;
  t2304 = -0.2707*t2303;
  t2306 = 0.0016*t2305;
  t2307 = 0. + t2304 + t2306;
  t2353 = t2266*t2347;
  t2354 = t2351*t2270;
  t2355 = t2353 + t2354;
  t2357 = t2266*t2351;
  t2358 = -1.*t2347*t2270;
  t2359 = t2357 + t2358;
  t2312 = -0.0016*t2303;
  t2313 = -0.2707*t2305;
  t2314 = 0. + t2312 + t2313;
  t2361 = -1.*t2287*t2355;
  t2362 = t2282*t2359;
  t2363 = t2361 + t2362;
  t2365 = t2282*t2355;
  t2366 = t2287*t2359;
  t2367 = t2365 + t2366;
  t2380 = t2253*t2162*t2218;
  t2381 = t2253*t2194*t2230;
  t2382 = t2380 + t2381;
  t2389 = -1.*t2240*t2216;
  t2390 = t2382*t2248;
  t2391 = t2389 + t2390;
  t2393 = t2253*t2194*t2162;
  t2394 = -1.*t2253*t2218*t2230;
  t2395 = t2393 + t2394;
  t2397 = t2266*t2391;
  t2398 = t2395*t2270;
  t2399 = t2397 + t2398;
  t2401 = t2266*t2395;
  t2402 = -1.*t2391*t2270;
  t2403 = t2401 + t2402;
  t2405 = -1.*t2287*t2399;
  t2406 = t2282*t2403;
  t2407 = t2405 + t2406;
  t2409 = t2282*t2399;
  t2410 = t2287*t2403;
  t2411 = t2409 + t2410;
  p_output1[0]=0. + t2193*t2222 + t2229*t2233 + t2238*t2251 + 0.1305*(t2238*t2240 - 1.*t2215*t2248*t2253) + t2215*t2253*t2257 + t2265*t2273 + t2277*t2280 + t2289*t2292 + t2296*t2299 + t2307*t2310 + t2314*t2317 - 0.0016*(t2305*t2310 + t2301*t2317) - 0.2707*(t2301*t2310 - 1.*t2305*t2317) + var1[0];
  p_output1[1]=0. + t2209*t2253*t2257 + t2193*t2330 + t2233*t2334 + t2251*t2338 + 0.1305*(-1.*t2209*t2248*t2253 + t2240*t2338) + t2273*t2347 + t2280*t2351 + t2289*t2355 + t2296*t2359 + t2307*t2363 + t2314*t2367 - 0.0016*(t2305*t2363 + t2301*t2367) - 0.2707*(t2301*t2363 - 1.*t2305*t2367) + var1[1];
  p_output1[2]=0. + t2193*t2218*t2253 + t2194*t2233*t2253 - 1.*t2216*t2257 + t2251*t2382 + 0.1305*(t2216*t2248 + t2240*t2382) + t2273*t2391 + t2280*t2395 + t2289*t2399 + t2296*t2403 + t2307*t2407 + t2314*t2411 - 0.0016*(t2305*t2407 + t2301*t2411) - 0.2707*(t2301*t2407 - 1.*t2305*t2411) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void p_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
