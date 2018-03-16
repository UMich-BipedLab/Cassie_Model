/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:01 GMT-04:00
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
  double t2179;
  double t2158;
  double t2180;
  double t2173;
  double t2182;
  double t2126;
  double t2178;
  double t2185;
  double t2186;
  double t2190;
  double t2191;
  double t2193;
  double t2194;
  double t2204;
  double t2207;
  double t2208;
  double t2212;
  double t2199;
  double t2200;
  double t2202;
  double t2217;
  double t2230;
  double t2231;
  double t2232;
  double t2234;
  double t2227;
  double t2228;
  double t2229;
  double t2239;
  double t2240;
  double t2241;
  double t2246;
  double t2247;
  double t2249;
  double t2251;
  double t2254;
  double t2255;
  double t2256;
  double t2261;
  double t2262;
  double t2263;
  double t2265;
  double t2266;
  double t2267;
  double t2269;
  double t2272;
  double t2273;
  double t2274;
  double t2279;
  double t2280;
  double t2281;
  double t2131;
  double t2132;
  double t2153;
  double t2157;
  double t2195;
  double t2197;
  double t2292;
  double t2293;
  double t2294;
  double t2296;
  double t2297;
  double t2298;
  double t2209;
  double t2213;
  double t2215;
  double t2219;
  double t2220;
  double t2221;
  double t2300;
  double t2301;
  double t2302;
  double t2233;
  double t2235;
  double t2237;
  double t2242;
  double t2243;
  double t2244;
  double t2250;
  double t2252;
  double t2253;
  double t2309;
  double t2310;
  double t2311;
  double t2313;
  double t2314;
  double t2315;
  double t2258;
  double t2259;
  double t2260;
  double t2268;
  double t2270;
  double t2271;
  double t2317;
  double t2318;
  double t2319;
  double t2321;
  double t2322;
  double t2323;
  double t2276;
  double t2277;
  double t2278;
  double t2325;
  double t2326;
  double t2327;
  double t2329;
  double t2330;
  double t2331;
  double t2344;
  double t2345;
  double t2346;
  double t2353;
  double t2354;
  double t2355;
  double t2357;
  double t2358;
  double t2359;
  double t2361;
  double t2362;
  double t2363;
  double t2365;
  double t2366;
  double t2367;
  double t2369;
  double t2370;
  double t2371;
  double t2373;
  double t2374;
  double t2375;
  t2179 = Cos(var1[3]);
  t2158 = Cos(var1[5]);
  t2180 = Sin(var1[4]);
  t2173 = Sin(var1[3]);
  t2182 = Sin(var1[5]);
  t2126 = Cos(var1[6]);
  t2178 = -1.*t2158*t2173;
  t2185 = t2179*t2180*t2182;
  t2186 = t2178 + t2185;
  t2190 = t2179*t2158*t2180;
  t2191 = t2173*t2182;
  t2193 = t2190 + t2191;
  t2194 = Sin(var1[6]);
  t2204 = Cos(var1[7]);
  t2207 = -1.*t2204;
  t2208 = 1. + t2207;
  t2212 = Sin(var1[7]);
  t2199 = t2126*t2186;
  t2200 = t2193*t2194;
  t2202 = t2199 + t2200;
  t2217 = Cos(var1[4]);
  t2230 = Cos(var1[8]);
  t2231 = -1.*t2230;
  t2232 = 1. + t2231;
  t2234 = Sin(var1[8]);
  t2227 = t2179*t2217*t2204;
  t2228 = t2202*t2212;
  t2229 = t2227 + t2228;
  t2239 = t2126*t2193;
  t2240 = -1.*t2186*t2194;
  t2241 = t2239 + t2240;
  t2246 = Cos(var1[9]);
  t2247 = -1.*t2246;
  t2249 = 1. + t2247;
  t2251 = Sin(var1[9]);
  t2254 = t2230*t2229;
  t2255 = t2241*t2234;
  t2256 = t2254 + t2255;
  t2261 = t2230*t2241;
  t2262 = -1.*t2229*t2234;
  t2263 = t2261 + t2262;
  t2265 = Cos(var1[10]);
  t2266 = -1.*t2265;
  t2267 = 1. + t2266;
  t2269 = Sin(var1[10]);
  t2272 = -1.*t2251*t2256;
  t2273 = t2246*t2263;
  t2274 = t2272 + t2273;
  t2279 = t2246*t2256;
  t2280 = t2251*t2263;
  t2281 = t2279 + t2280;
  t2131 = -1.*t2126;
  t2132 = 1. + t2131;
  t2153 = 0.135*t2132;
  t2157 = 0. + t2153;
  t2195 = -0.135*t2194;
  t2197 = 0. + t2195;
  t2292 = t2179*t2158;
  t2293 = t2173*t2180*t2182;
  t2294 = t2292 + t2293;
  t2296 = t2158*t2173*t2180;
  t2297 = -1.*t2179*t2182;
  t2298 = t2296 + t2297;
  t2209 = 0.135*t2208;
  t2213 = 0.049*t2212;
  t2215 = 0. + t2209 + t2213;
  t2219 = -0.049*t2208;
  t2220 = 0.135*t2212;
  t2221 = 0. + t2219 + t2220;
  t2300 = t2126*t2294;
  t2301 = t2298*t2194;
  t2302 = t2300 + t2301;
  t2233 = -0.049*t2232;
  t2235 = -0.09*t2234;
  t2237 = 0. + t2233 + t2235;
  t2242 = -0.09*t2232;
  t2243 = 0.049*t2234;
  t2244 = 0. + t2242 + t2243;
  t2250 = -0.049*t2249;
  t2252 = -0.21*t2251;
  t2253 = 0. + t2250 + t2252;
  t2309 = t2217*t2204*t2173;
  t2310 = t2302*t2212;
  t2311 = t2309 + t2310;
  t2313 = t2126*t2298;
  t2314 = -1.*t2294*t2194;
  t2315 = t2313 + t2314;
  t2258 = -0.21*t2249;
  t2259 = 0.049*t2251;
  t2260 = 0. + t2258 + t2259;
  t2268 = -0.2707*t2267;
  t2270 = 0.0016*t2269;
  t2271 = 0. + t2268 + t2270;
  t2317 = t2230*t2311;
  t2318 = t2315*t2234;
  t2319 = t2317 + t2318;
  t2321 = t2230*t2315;
  t2322 = -1.*t2311*t2234;
  t2323 = t2321 + t2322;
  t2276 = -0.0016*t2267;
  t2277 = -0.2707*t2269;
  t2278 = 0. + t2276 + t2277;
  t2325 = -1.*t2251*t2319;
  t2326 = t2246*t2323;
  t2327 = t2325 + t2326;
  t2329 = t2246*t2319;
  t2330 = t2251*t2323;
  t2331 = t2329 + t2330;
  t2344 = t2217*t2126*t2182;
  t2345 = t2217*t2158*t2194;
  t2346 = t2344 + t2345;
  t2353 = -1.*t2204*t2180;
  t2354 = t2346*t2212;
  t2355 = t2353 + t2354;
  t2357 = t2217*t2158*t2126;
  t2358 = -1.*t2217*t2182*t2194;
  t2359 = t2357 + t2358;
  t2361 = t2230*t2355;
  t2362 = t2359*t2234;
  t2363 = t2361 + t2362;
  t2365 = t2230*t2359;
  t2366 = -1.*t2355*t2234;
  t2367 = t2365 + t2366;
  t2369 = -1.*t2251*t2363;
  t2370 = t2246*t2367;
  t2371 = t2369 + t2370;
  t2373 = t2246*t2363;
  t2374 = t2251*t2367;
  t2375 = t2373 + t2374;
  p_output1[0]=0. + t2157*t2186 + t2193*t2197 + t2202*t2215 + 0.1305*(t2202*t2204 - 1.*t2179*t2212*t2217) + t2179*t2217*t2221 + t2229*t2237 + t2241*t2244 + t2253*t2256 + t2260*t2263 + t2271*t2274 + t2278*t2281 - 0.0016*(t2269*t2274 + t2265*t2281) - 0.2707*(t2265*t2274 - 1.*t2269*t2281) + var1[0];
  p_output1[1]=0. + t2173*t2217*t2221 + t2157*t2294 + t2197*t2298 + t2215*t2302 + 0.1305*(-1.*t2173*t2212*t2217 + t2204*t2302) + t2237*t2311 + t2244*t2315 + t2253*t2319 + t2260*t2323 + t2271*t2327 + t2278*t2331 - 0.0016*(t2269*t2327 + t2265*t2331) - 0.2707*(t2265*t2327 - 1.*t2269*t2331) + var1[1];
  p_output1[2]=0. + t2157*t2182*t2217 + t2158*t2197*t2217 - 1.*t2180*t2221 + t2215*t2346 + 0.1305*(t2180*t2212 + t2204*t2346) + t2237*t2355 + t2244*t2359 + t2253*t2363 + t2260*t2367 + t2271*t2371 + t2278*t2375 - 0.0016*(t2269*t2371 + t2265*t2375) - 0.2707*(t2265*t2371 - 1.*t2269*t2375) + var1[2];
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
