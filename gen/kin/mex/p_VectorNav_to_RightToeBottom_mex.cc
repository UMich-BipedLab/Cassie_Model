/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:15:57 GMT-04:00
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
  double t97;
  double t215;
  double t275;
  double t301;
  double t309;
  double t317;
  double t326;
  double t351;
  double t354;
  double t356;
  double t360;
  double t342;
  double t345;
  double t350;
  double t369;
  double t371;
  double t372;
  double t383;
  double t384;
  double t385;
  double t388;
  double t379;
  double t381;
  double t382;
  double t394;
  double t396;
  double t397;
  double t409;
  double t410;
  double t411;
  double t414;
  double t405;
  double t406;
  double t408;
  double t418;
  double t419;
  double t420;
  double t434;
  double t127;
  double t141;
  double t189;
  double t223;
  double t250;
  double t269;
  double t281;
  double t287;
  double t444;
  double t321;
  double t329;
  double t330;
  double t335;
  double t338;
  double t339;
  double t449;
  double t450;
  double t451;
  double t453;
  double t454;
  double t455;
  double t359;
  double t363;
  double t365;
  double t375;
  double t376;
  double t377;
  double t457;
  double t458;
  double t459;
  double t461;
  double t462;
  double t463;
  double t387;
  double t390;
  double t391;
  double t399;
  double t400;
  double t402;
  double t465;
  double t466;
  double t467;
  double t469;
  double t470;
  double t471;
  double t412;
  double t415;
  double t416;
  double t421;
  double t422;
  double t423;
  double t473;
  double t474;
  double t475;
  double t477;
  double t478;
  double t479;
  double t439;
  double t440;
  double t441;
  double t445;
  double t446;
  double t447;
  double t495;
  double t496;
  double t497;
  double t499;
  double t500;
  double t501;
  double t503;
  double t504;
  double t505;
  double t507;
  double t508;
  double t509;
  double t511;
  double t512;
  double t513;
  double t515;
  double t516;
  double t517;
  double t519;
  double t520;
  double t521;
  double t523;
  double t524;
  double t525;
  t97 = Cos(var1[8]);
  t215 = Cos(var1[9]);
  t275 = Sin(var1[9]);
  t301 = Cos(var1[10]);
  t309 = -1.*t301;
  t317 = 1. + t309;
  t326 = Sin(var1[10]);
  t351 = Cos(var1[11]);
  t354 = -1.*t351;
  t356 = 1. + t354;
  t360 = Sin(var1[11]);
  t342 = t97*t215*t301;
  t345 = -1.*t97*t275*t326;
  t350 = t342 + t345;
  t369 = -1.*t97*t301*t275;
  t371 = -1.*t97*t215*t326;
  t372 = t369 + t371;
  t383 = Cos(var1[12]);
  t384 = -1.*t383;
  t385 = 1. + t384;
  t388 = Sin(var1[12]);
  t379 = t351*t350;
  t381 = t372*t360;
  t382 = t379 + t381;
  t394 = t351*t372;
  t396 = -1.*t350*t360;
  t397 = t394 + t396;
  t409 = Cos(var1[13]);
  t410 = -1.*t409;
  t411 = 1. + t410;
  t414 = Sin(var1[13]);
  t405 = t383*t382;
  t406 = t397*t388;
  t408 = t405 + t406;
  t418 = t383*t397;
  t419 = -1.*t382*t388;
  t420 = t418 + t419;
  t434 = Cos(var1[7]);
  t127 = -1.*t97;
  t141 = 1. + t127;
  t189 = Sin(var1[8]);
  t223 = -1.*t215;
  t250 = 1. + t223;
  t269 = -0.049*t250;
  t281 = -0.09*t275;
  t287 = 0. + t269 + t281;
  t444 = Sin(var1[7]);
  t321 = -0.049*t317;
  t329 = -0.21*t326;
  t330 = 0. + t321 + t329;
  t335 = -0.21*t317;
  t338 = 0.049*t326;
  t339 = 0. + t335 + t338;
  t449 = t434*t215*t189;
  t450 = -1.*t444*t275;
  t451 = t449 + t450;
  t453 = -1.*t215*t444;
  t454 = -1.*t434*t189*t275;
  t455 = t453 + t454;
  t359 = -0.0016*t356;
  t363 = -0.2707*t360;
  t365 = 0. + t359 + t363;
  t375 = -0.2707*t356;
  t376 = 0.0016*t360;
  t377 = 0. + t375 + t376;
  t457 = t301*t451;
  t458 = t455*t326;
  t459 = t457 + t458;
  t461 = t301*t455;
  t462 = -1.*t451*t326;
  t463 = t461 + t462;
  t387 = 0.0184*t385;
  t390 = -0.7055*t388;
  t391 = 0. + t387 + t390;
  t399 = -0.7055*t385;
  t400 = -0.0184*t388;
  t402 = 0. + t399 + t400;
  t465 = t351*t459;
  t466 = t463*t360;
  t467 = t465 + t466;
  t469 = t351*t463;
  t470 = -1.*t459*t360;
  t471 = t469 + t470;
  t412 = -0.0216*t411;
  t415 = -1.1135*t414;
  t416 = 0. + t412 + t415;
  t421 = -1.1135*t411;
  t422 = 0.0216*t414;
  t423 = 0. + t421 + t422;
  t473 = t383*t467;
  t474 = t471*t388;
  t475 = t473 + t474;
  t477 = t383*t471;
  t478 = -1.*t467*t388;
  t479 = t477 + t478;
  t439 = -0.135*t141;
  t440 = 0.049*t189;
  t441 = 0. + t439 + t440;
  t445 = -0.09*t250;
  t446 = 0.049*t275;
  t447 = 0. + t445 + t446;
  t495 = t215*t444*t189;
  t496 = t434*t275;
  t497 = t495 + t496;
  t499 = t434*t215;
  t500 = -1.*t444*t189*t275;
  t501 = t499 + t500;
  t503 = t301*t497;
  t504 = t501*t326;
  t505 = t503 + t504;
  t507 = t301*t501;
  t508 = -1.*t497*t326;
  t509 = t507 + t508;
  t511 = t351*t505;
  t512 = t509*t360;
  t513 = t511 + t512;
  t515 = t351*t509;
  t516 = -1.*t505*t360;
  t517 = t515 + t516;
  t519 = t383*t513;
  t520 = t517*t388;
  t521 = t519 + t520;
  t523 = t383*t517;
  t524 = -1.*t513*t388;
  t525 = t523 + t524;
  p_output1[0]=-0.03155 - 0.049*t141 - 0.004500000000000004*t189 + t350*t365 + t372*t377 + t382*t391 + t397*t402 + t408*t416 - 1.1312*(-1.*t408*t414 + t409*t420) + 0.0306*(t408*t409 + t414*t420) + t420*t423 + t287*t97 + t215*t330*t97 - 1.*t275*t339*t97;
  p_output1[1]=0. + 0.135*(1. - 1.*t434) - 1.*t189*t287*t434 - 1.*t434*t441 + t444*t447 - 1.*t330*t451 - 1.*t339*t455 - 1.*t365*t459 - 1.*t377*t463 - 1.*t391*t467 - 1.*t402*t471 - 1.*t416*t475 - 1.*t423*t479 + 1.1312*(-1.*t414*t475 + t409*t479) - 0.0306*(t409*t475 + t414*t479) + 0.1305*t434*t97;
  p_output1[2]=-0.07996 - 0.135*t444 - 1.*t189*t287*t444 - 1.*t441*t444 - 1.*t434*t447 - 1.*t330*t497 - 1.*t339*t501 - 1.*t365*t505 - 1.*t377*t509 - 1.*t391*t513 - 1.*t402*t517 - 1.*t416*t521 - 1.*t423*t525 + 1.1312*(-1.*t414*t521 + t409*t525) - 0.0306*(t409*t521 + t414*t525) + 0.1305*t444*t97;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
