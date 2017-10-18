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
  double t236;
  double t242;
  double t235;
  double t237;
  double t244;
  double t231;
  double t257;
  double t261;
  double t263;
  double t241;
  double t250;
  double t254;
  double t266;
  double t225;
  double t284;
  double t288;
  double t289;
  double t255;
  double t270;
  double t273;
  double t290;
  double t295;
  double t274;
  double t292;
  double t293;
  double t180;
  double t301;
  double t304;
  double t305;
  double t306;
  double t310;
  double t313;
  double t315;
  double t316;
  double t317;
  double t174;
  double t346;
  double t347;
  double t348;
  double t340;
  double t341;
  double t342;
  double t354;
  double t355;
  double t356;
  double t344;
  double t349;
  double t350;
  double t325;
  double t353;
  double t357;
  double t358;
  double t360;
  double t361;
  double t362;
  double t363;
  double t364;
  double t366;
  double t383;
  double t384;
  double t386;
  double t378;
  double t379;
  double t381;
  double t382;
  double t387;
  double t388;
  double t390;
  double t391;
  double t392;
  double t393;
  double t395;
  double t396;
  double t294;
  double t318;
  double t323;
  double t326;
  double t327;
  double t328;
  double t359;
  double t367;
  double t369;
  double t371;
  double t372;
  double t374;
  double t389;
  double t397;
  double t399;
  double t403;
  double t404;
  double t405;
  double t456;
  double t457;
  double t450;
  double t451;
  double t474;
  double t475;
  double t408;
  double t409;
  double t410;
  double t429;
  double t430;
  double t431;
  double t432;
  double t434;
  double t435;
  double t439;
  double t440;
  double t441;
  double t443;
  double t447;
  double t448;
  double t452;
  double t453;
  double t454;
  double t458;
  double t459;
  double t460;
  double t462;
  double t463;
  double t464;
  double t470;
  double t471;
  double t472;
  double t476;
  double t477;
  double t478;
  double t480;
  double t481;
  double t482;
  double t411;
  double t412;
  double t413;
  double t414;
  double t415;
  double t416;
  t236 = Cos(var1[5]);
  t242 = Sin(var1[3]);
  t235 = Cos(var1[3]);
  t237 = Sin(var1[4]);
  t244 = Sin(var1[5]);
  t231 = Cos(var1[6]);
  t257 = -1.*t236*t242;
  t261 = t235*t237*t244;
  t263 = t257 + t261;
  t241 = t235*t236*t237;
  t250 = t242*t244;
  t254 = t241 + t250;
  t266 = Sin(var1[6]);
  t225 = Cos(var1[7]);
  t284 = t231*t263;
  t288 = t254*t266;
  t289 = t284 + t288;
  t255 = t231*t254;
  t270 = -1.*t263*t266;
  t273 = t255 + t270;
  t290 = Sin(var1[7]);
  t295 = Cos(var1[9]);
  t274 = t225*t273;
  t292 = -1.*t289*t290;
  t293 = t274 + t292;
  t180 = Sin(var1[9]);
  t301 = Cos(var1[4]);
  t304 = Cos(var1[8]);
  t305 = t235*t301*t304;
  t306 = t225*t289;
  t310 = t273*t290;
  t313 = t306 + t310;
  t315 = Sin(var1[8]);
  t316 = t313*t315;
  t317 = t305 + t316;
  t174 = Sin(var1[10]);
  t346 = t235*t236;
  t347 = t242*t237*t244;
  t348 = t346 + t347;
  t340 = t236*t242*t237;
  t341 = -1.*t235*t244;
  t342 = t340 + t341;
  t354 = t231*t348;
  t355 = t342*t266;
  t356 = t354 + t355;
  t344 = t231*t342;
  t349 = -1.*t348*t266;
  t350 = t344 + t349;
  t325 = Cos(var1[10]);
  t353 = t225*t350;
  t357 = -1.*t356*t290;
  t358 = t353 + t357;
  t360 = t301*t304*t242;
  t361 = t225*t356;
  t362 = t350*t290;
  t363 = t361 + t362;
  t364 = t363*t315;
  t366 = t360 + t364;
  t383 = t301*t231*t244;
  t384 = t301*t236*t266;
  t386 = t383 + t384;
  t378 = t301*t236*t231;
  t379 = -1.*t301*t244*t266;
  t381 = t378 + t379;
  t382 = t225*t381;
  t387 = -1.*t386*t290;
  t388 = t382 + t387;
  t390 = -1.*t304*t237;
  t391 = t225*t386;
  t392 = t381*t290;
  t393 = t391 + t392;
  t395 = t393*t315;
  t396 = t390 + t395;
  t294 = t180*t293;
  t318 = t295*t317;
  t323 = t294 + t318;
  t326 = t295*t293;
  t327 = -1.*t180*t317;
  t328 = t326 + t327;
  t359 = t180*t358;
  t367 = t295*t366;
  t369 = t359 + t367;
  t371 = t295*t358;
  t372 = -1.*t180*t366;
  t374 = t371 + t372;
  t389 = t180*t388;
  t397 = t295*t396;
  t399 = t389 + t397;
  t403 = t295*t388;
  t404 = -1.*t180*t396;
  t405 = t403 + t404;
  t456 = -1.*t304;
  t457 = 1. + t456;
  t450 = -1.*t295;
  t451 = 1. + t450;
  t474 = -1.*t325;
  t475 = 1. + t474;
  t408 = t325*t323;
  t409 = t174*t328;
  t410 = t408 + t409;
  t429 = -1.*t231;
  t430 = 1. + t429;
  t431 = 0.135*t430;
  t432 = 0. + t431;
  t434 = -0.135*t266;
  t435 = 0. + t434;
  t439 = -1.*t225;
  t440 = 1. + t439;
  t441 = 0.135*t440;
  t443 = 0. + t441;
  t447 = -0.135*t290;
  t448 = 0. + t447;
  t452 = -0.09*t451;
  t453 = 0.049*t180;
  t454 = 0. + t452 + t453;
  t458 = 0.135*t457;
  t459 = 0.049*t315;
  t460 = 0. + t458 + t459;
  t462 = -0.049*t457;
  t463 = 0.135*t315;
  t464 = 0. + t462 + t463;
  t470 = -0.049*t451;
  t471 = -0.09*t180;
  t472 = 0. + t470 + t471;
  t476 = -0.049*t475;
  t477 = -0.21*t174;
  t478 = 0. + t476 + t477;
  t480 = -0.21*t475;
  t481 = 0.049*t174;
  t482 = 0. + t480 + t481;
  t411 = t325*t369;
  t412 = t174*t374;
  t413 = t411 + t412;
  t414 = t325*t399;
  t415 = t174*t405;
  t416 = t414 + t415;
  p_output1[0]=t174*t323 - 1.*t325*t328;
  p_output1[1]=t174*t369 - 1.*t325*t374;
  p_output1[2]=t174*t399 - 1.*t325*t405;
  p_output1[3]=0.;
  p_output1[4]=t410;
  p_output1[5]=t413;
  p_output1[6]=t416;
  p_output1[7]=0.;
  p_output1[8]=-1.*t304*t313 + t235*t301*t315;
  p_output1[9]=t242*t301*t315 - 1.*t304*t363;
  p_output1[10]=-1.*t237*t315 - 1.*t304*t393;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t304*t313 - 1.*t235*t301*t315) - 0.2707*(-1.*t174*t323 + t325*t328) - 0.0016*t410 + t263*t432 + t254*t435 + t289*t443 + t273*t448 + t293*t454 + t313*t460 + t235*t301*t464 + t317*t472 + t323*t478 + t328*t482 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t242*t301*t315 + t304*t363) - 0.2707*(-1.*t174*t369 + t325*t374) - 0.0016*t413 + t348*t432 + t342*t435 + t356*t443 + t350*t448 + t358*t454 + t363*t460 + t242*t301*t464 + t366*t472 + t369*t478 + t374*t482 + var1[1];
  p_output1[14]=0. + 0.1305*(t237*t315 + t304*t393) - 0.2707*(-1.*t174*t399 + t325*t405) - 0.0016*t416 + t244*t301*t432 + t236*t301*t435 + t386*t443 + t381*t448 + t388*t454 + t393*t460 - 1.*t237*t464 + t396*t472 + t399*t478 + t405*t482 + var1[2];
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

#include "H_fixed_knee_to_shin_left.hh"

namespace SymExpression
{

void H_fixed_knee_to_shin_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
