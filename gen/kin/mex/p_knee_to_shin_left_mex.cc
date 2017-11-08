/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:07 GMT-05:00
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
  double t2337;
  double t2325;
  double t2338;
  double t2329;
  double t2339;
  double t2292;
  double t2336;
  double t2340;
  double t2341;
  double t2344;
  double t2345;
  double t2346;
  double t2347;
  double t2355;
  double t2357;
  double t2358;
  double t2360;
  double t2351;
  double t2352;
  double t2353;
  double t2364;
  double t2376;
  double t2377;
  double t2378;
  double t2380;
  double t2373;
  double t2374;
  double t2375;
  double t2384;
  double t2385;
  double t2386;
  double t2391;
  double t2392;
  double t2393;
  double t2395;
  double t2398;
  double t2399;
  double t2400;
  double t2405;
  double t2406;
  double t2407;
  double t2305;
  double t2306;
  double t2317;
  double t2324;
  double t2348;
  double t2349;
  double t2418;
  double t2419;
  double t2420;
  double t2422;
  double t2423;
  double t2424;
  double t2359;
  double t2361;
  double t2362;
  double t2365;
  double t2366;
  double t2367;
  double t2426;
  double t2427;
  double t2428;
  double t2379;
  double t2381;
  double t2382;
  double t2387;
  double t2388;
  double t2389;
  double t2394;
  double t2396;
  double t2397;
  double t2435;
  double t2436;
  double t2437;
  double t2439;
  double t2440;
  double t2441;
  double t2402;
  double t2403;
  double t2404;
  double t2443;
  double t2444;
  double t2445;
  double t2447;
  double t2448;
  double t2449;
  double t2462;
  double t2463;
  double t2464;
  double t2471;
  double t2472;
  double t2473;
  double t2475;
  double t2476;
  double t2477;
  double t2479;
  double t2480;
  double t2481;
  double t2483;
  double t2484;
  double t2485;
  t2337 = Cos(var1[3]);
  t2325 = Cos(var1[5]);
  t2338 = Sin(var1[4]);
  t2329 = Sin(var1[3]);
  t2339 = Sin(var1[5]);
  t2292 = Cos(var1[6]);
  t2336 = -1.*t2325*t2329;
  t2340 = t2337*t2338*t2339;
  t2341 = t2336 + t2340;
  t2344 = t2337*t2325*t2338;
  t2345 = t2329*t2339;
  t2346 = t2344 + t2345;
  t2347 = Sin(var1[6]);
  t2355 = Cos(var1[7]);
  t2357 = -1.*t2355;
  t2358 = 1. + t2357;
  t2360 = Sin(var1[7]);
  t2351 = t2292*t2341;
  t2352 = t2346*t2347;
  t2353 = t2351 + t2352;
  t2364 = Cos(var1[4]);
  t2376 = Cos(var1[8]);
  t2377 = -1.*t2376;
  t2378 = 1. + t2377;
  t2380 = Sin(var1[8]);
  t2373 = t2337*t2364*t2355;
  t2374 = t2353*t2360;
  t2375 = t2373 + t2374;
  t2384 = t2292*t2346;
  t2385 = -1.*t2341*t2347;
  t2386 = t2384 + t2385;
  t2391 = Cos(var1[9]);
  t2392 = -1.*t2391;
  t2393 = 1. + t2392;
  t2395 = Sin(var1[9]);
  t2398 = t2376*t2375;
  t2399 = t2386*t2380;
  t2400 = t2398 + t2399;
  t2405 = t2376*t2386;
  t2406 = -1.*t2375*t2380;
  t2407 = t2405 + t2406;
  t2305 = -1.*t2292;
  t2306 = 1. + t2305;
  t2317 = 0.135*t2306;
  t2324 = 0. + t2317;
  t2348 = -0.135*t2347;
  t2349 = 0. + t2348;
  t2418 = t2337*t2325;
  t2419 = t2329*t2338*t2339;
  t2420 = t2418 + t2419;
  t2422 = t2325*t2329*t2338;
  t2423 = -1.*t2337*t2339;
  t2424 = t2422 + t2423;
  t2359 = 0.135*t2358;
  t2361 = 0.049*t2360;
  t2362 = 0. + t2359 + t2361;
  t2365 = -0.049*t2358;
  t2366 = 0.135*t2360;
  t2367 = 0. + t2365 + t2366;
  t2426 = t2292*t2420;
  t2427 = t2424*t2347;
  t2428 = t2426 + t2427;
  t2379 = -0.049*t2378;
  t2381 = -0.09*t2380;
  t2382 = 0. + t2379 + t2381;
  t2387 = -0.09*t2378;
  t2388 = 0.049*t2380;
  t2389 = 0. + t2387 + t2388;
  t2394 = -0.049*t2393;
  t2396 = -0.21*t2395;
  t2397 = 0. + t2394 + t2396;
  t2435 = t2364*t2355*t2329;
  t2436 = t2428*t2360;
  t2437 = t2435 + t2436;
  t2439 = t2292*t2424;
  t2440 = -1.*t2420*t2347;
  t2441 = t2439 + t2440;
  t2402 = -0.21*t2393;
  t2403 = 0.049*t2395;
  t2404 = 0. + t2402 + t2403;
  t2443 = t2376*t2437;
  t2444 = t2441*t2380;
  t2445 = t2443 + t2444;
  t2447 = t2376*t2441;
  t2448 = -1.*t2437*t2380;
  t2449 = t2447 + t2448;
  t2462 = t2364*t2292*t2339;
  t2463 = t2364*t2325*t2347;
  t2464 = t2462 + t2463;
  t2471 = -1.*t2355*t2338;
  t2472 = t2464*t2360;
  t2473 = t2471 + t2472;
  t2475 = t2364*t2325*t2292;
  t2476 = -1.*t2364*t2339*t2347;
  t2477 = t2475 + t2476;
  t2479 = t2376*t2473;
  t2480 = t2477*t2380;
  t2481 = t2479 + t2480;
  t2483 = t2376*t2477;
  t2484 = -1.*t2473*t2380;
  t2485 = t2483 + t2484;
  p_output1[0]=0. + t2324*t2341 + t2346*t2349 + t2353*t2362 + 0.1305*(t2353*t2355 - 1.*t2337*t2360*t2364) + t2337*t2364*t2367 + t2375*t2382 + t2386*t2389 + t2397*t2400 + t2404*t2407 - 0.2707*(-1.*t2395*t2400 + t2391*t2407) - 0.0016*(t2391*t2400 + t2395*t2407) + var1[0];
  p_output1[1]=0. + t2329*t2364*t2367 + t2324*t2420 + t2349*t2424 + t2362*t2428 + 0.1305*(-1.*t2329*t2360*t2364 + t2355*t2428) + t2382*t2437 + t2389*t2441 + t2397*t2445 + t2404*t2449 - 0.2707*(-1.*t2395*t2445 + t2391*t2449) - 0.0016*(t2391*t2445 + t2395*t2449) + var1[1];
  p_output1[2]=0. + t2324*t2339*t2364 + t2325*t2349*t2364 - 1.*t2338*t2367 + t2362*t2464 + 0.1305*(t2338*t2360 + t2355*t2464) + t2382*t2473 + t2389*t2477 + t2397*t2481 + t2404*t2485 - 0.2707*(-1.*t2395*t2481 + t2391*t2485) - 0.0016*(t2391*t2481 + t2395*t2485) + var1[2];
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
