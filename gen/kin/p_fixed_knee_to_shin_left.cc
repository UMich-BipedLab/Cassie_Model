/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:35 GMT-04:00
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
  double t199;
  double t191;
  double t210;
  double t192;
  double t224;
  double t158;
  double t194;
  double t225;
  double t227;
  double t235;
  double t236;
  double t237;
  double t239;
  double t247;
  double t263;
  double t265;
  double t266;
  double t255;
  double t257;
  double t258;
  double t269;
  double t297;
  double t298;
  double t299;
  double t302;
  double t294;
  double t295;
  double t296;
  double t309;
  double t279;
  double t281;
  double t282;
  double t287;
  double t290;
  double t291;
  double t292;
  double t327;
  double t328;
  double t331;
  double t333;
  double t334;
  double t337;
  double t339;
  double t342;
  double t344;
  double t345;
  double t350;
  double t351;
  double t352;
  double t164;
  double t173;
  double t174;
  double t180;
  double t241;
  double t242;
  double t248;
  double t249;
  double t250;
  double t254;
  double t363;
  double t364;
  double t365;
  double t367;
  double t368;
  double t369;
  double t270;
  double t273;
  double t284;
  double t288;
  double t289;
  double t375;
  double t376;
  double t377;
  double t371;
  double t372;
  double t373;
  double t301;
  double t304;
  double t305;
  double t310;
  double t313;
  double t314;
  double t383;
  double t384;
  double t385;
  double t324;
  double t325;
  double t326;
  double t338;
  double t340;
  double t341;
  double t379;
  double t380;
  double t381;
  double t392;
  double t393;
  double t394;
  double t347;
  double t348;
  double t349;
  double t396;
  double t397;
  double t398;
  double t400;
  double t401;
  double t402;
  double t419;
  double t420;
  double t421;
  double t415;
  double t416;
  double t417;
  double t427;
  double t428;
  double t429;
  double t423;
  double t424;
  double t425;
  double t436;
  double t437;
  double t438;
  double t440;
  double t441;
  double t442;
  double t444;
  double t445;
  double t446;
  t199 = Cos(var1[3]);
  t191 = Cos(var1[5]);
  t210 = Sin(var1[4]);
  t192 = Sin(var1[3]);
  t224 = Sin(var1[5]);
  t158 = Cos(var1[6]);
  t194 = -1.*t191*t192;
  t225 = t199*t210*t224;
  t227 = t194 + t225;
  t235 = t199*t191*t210;
  t236 = t192*t224;
  t237 = t235 + t236;
  t239 = Sin(var1[6]);
  t247 = Cos(var1[7]);
  t263 = t158*t237;
  t265 = -1.*t227*t239;
  t266 = t263 + t265;
  t255 = t158*t227;
  t257 = t237*t239;
  t258 = t255 + t257;
  t269 = Sin(var1[7]);
  t297 = Cos(var1[8]);
  t298 = -1.*t297;
  t299 = 1. + t298;
  t302 = Sin(var1[8]);
  t294 = t247*t258;
  t295 = t266*t269;
  t296 = t294 + t295;
  t309 = Cos(var1[4]);
  t279 = Cos(var1[9]);
  t281 = -1.*t279;
  t282 = 1. + t281;
  t287 = Sin(var1[9]);
  t290 = t247*t266;
  t291 = -1.*t258*t269;
  t292 = t290 + t291;
  t327 = t199*t309*t297;
  t328 = t296*t302;
  t331 = t327 + t328;
  t333 = Cos(var1[10]);
  t334 = -1.*t333;
  t337 = 1. + t334;
  t339 = Sin(var1[10]);
  t342 = t287*t292;
  t344 = t279*t331;
  t345 = t342 + t344;
  t350 = t279*t292;
  t351 = -1.*t287*t331;
  t352 = t350 + t351;
  t164 = -1.*t158;
  t173 = 1. + t164;
  t174 = 0.135*t173;
  t180 = 0. + t174;
  t241 = -0.135*t239;
  t242 = 0. + t241;
  t248 = -1.*t247;
  t249 = 1. + t248;
  t250 = 0.135*t249;
  t254 = 0. + t250;
  t363 = t199*t191;
  t364 = t192*t210*t224;
  t365 = t363 + t364;
  t367 = t191*t192*t210;
  t368 = -1.*t199*t224;
  t369 = t367 + t368;
  t270 = -0.135*t269;
  t273 = 0. + t270;
  t284 = -0.09*t282;
  t288 = 0.049*t287;
  t289 = 0. + t284 + t288;
  t375 = t158*t369;
  t376 = -1.*t365*t239;
  t377 = t375 + t376;
  t371 = t158*t365;
  t372 = t369*t239;
  t373 = t371 + t372;
  t301 = 0.135*t299;
  t304 = 0.049*t302;
  t305 = 0. + t301 + t304;
  t310 = -0.049*t299;
  t313 = 0.135*t302;
  t314 = 0. + t310 + t313;
  t383 = t247*t373;
  t384 = t377*t269;
  t385 = t383 + t384;
  t324 = -0.049*t282;
  t325 = -0.09*t287;
  t326 = 0. + t324 + t325;
  t338 = -0.049*t337;
  t340 = -0.21*t339;
  t341 = 0. + t338 + t340;
  t379 = t247*t377;
  t380 = -1.*t373*t269;
  t381 = t379 + t380;
  t392 = t309*t297*t192;
  t393 = t385*t302;
  t394 = t392 + t393;
  t347 = -0.21*t337;
  t348 = 0.049*t339;
  t349 = 0. + t347 + t348;
  t396 = t287*t381;
  t397 = t279*t394;
  t398 = t396 + t397;
  t400 = t279*t381;
  t401 = -1.*t287*t394;
  t402 = t400 + t401;
  t419 = t309*t191*t158;
  t420 = -1.*t309*t224*t239;
  t421 = t419 + t420;
  t415 = t309*t158*t224;
  t416 = t309*t191*t239;
  t417 = t415 + t416;
  t427 = t247*t417;
  t428 = t421*t269;
  t429 = t427 + t428;
  t423 = t247*t421;
  t424 = -1.*t417*t269;
  t425 = t423 + t424;
  t436 = -1.*t297*t210;
  t437 = t429*t302;
  t438 = t436 + t437;
  t440 = t287*t425;
  t441 = t279*t438;
  t442 = t440 + t441;
  t444 = t279*t425;
  t445 = -1.*t287*t438;
  t446 = t444 + t445;
  p_output1[0]=0. + t180*t227 + t237*t242 + t254*t258 + t266*t273 + t289*t292 + t296*t305 + 0.1305*(t296*t297 - 1.*t199*t302*t309) + t199*t309*t314 + t326*t331 + t341*t345 + t349*t352 - 0.2707*(-1.*t339*t345 + t333*t352) - 0.0016*(t333*t345 + t339*t352) + var1[0];
  p_output1[1]=0. + t192*t309*t314 + t180*t365 + t242*t369 + t254*t373 + t273*t377 + t289*t381 + t305*t385 + 0.1305*(-1.*t192*t302*t309 + t297*t385) + t326*t394 + t341*t398 + t349*t402 - 0.2707*(-1.*t339*t398 + t333*t402) - 0.0016*(t333*t398 + t339*t402) + var1[1];
  p_output1[2]=0. + t180*t224*t309 + t191*t242*t309 - 1.*t210*t314 + t254*t417 + t273*t421 + t289*t425 + t305*t429 + 0.1305*(t210*t302 + t297*t429) + t326*t438 + t341*t442 + t349*t446 - 0.2707*(-1.*t339*t442 + t333*t446) - 0.0016*(t333*t442 + t339*t446) + var1[2];
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

#include "p_fixed_knee_to_shin_left.hh"

namespace SymExpression
{

void p_fixed_knee_to_shin_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
