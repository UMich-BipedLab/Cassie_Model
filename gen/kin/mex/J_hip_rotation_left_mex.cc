/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:03 GMT-05:00
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
  double t339;
  double t342;
  double t344;
  double t332;
  double t345;
  double t307;
  double t350;
  double t355;
  double t358;
  double t341;
  double t347;
  double t348;
  double t359;
  double t376;
  double t377;
  double t378;
  double t380;
  double t373;
  double t374;
  double t375;
  double t387;
  double t308;
  double t324;
  double t326;
  double t327;
  double t362;
  double t364;
  double t407;
  double t408;
  double t409;
  double t403;
  double t404;
  double t405;
  double t379;
  double t382;
  double t383;
  double t388;
  double t389;
  double t391;
  double t416;
  double t417;
  double t418;
  double t436;
  double t437;
  double t438;
  double t456;
  double t457;
  double t458;
  double t476;
  double t477;
  double t478;
  double t491;
  double t492;
  double t493;
  double t411;
  double t499;
  double t500;
  double t505;
  double t506;
  double t507;
  double t513;
  double t514;
  double t515;
  double t526;
  double t527;
  double t528;
  double t496;
  double t412;
  double t413;
  double t543;
  double t544;
  double t545;
  double t510;
  double t550;
  double t551;
  double t522;
  double t523;
  double t524;
  double t525;
  double t529;
  double t530;
  double t531;
  double t421;
  double t422;
  double t423;
  double t559;
  double t560;
  double t561;
  double t563;
  double t564;
  double t573;
  double t574;
  double t575;
  double t398;
  double t586;
  double t587;
  double t588;
  t339 = Cos(var1[5]);
  t342 = Sin(var1[3]);
  t344 = Sin(var1[4]);
  t332 = Cos(var1[3]);
  t345 = Sin(var1[5]);
  t307 = Cos(var1[6]);
  t350 = -1.*t339*t342*t344;
  t355 = t332*t345;
  t358 = t350 + t355;
  t341 = -1.*t332*t339;
  t347 = -1.*t342*t344*t345;
  t348 = t341 + t347;
  t359 = Sin(var1[6]);
  t376 = Cos(var1[7]);
  t377 = -1.*t376;
  t378 = 1. + t377;
  t380 = Sin(var1[7]);
  t373 = t307*t348;
  t374 = t358*t359;
  t375 = t373 + t374;
  t387 = Cos(var1[4]);
  t308 = -1.*t307;
  t324 = 1. + t308;
  t326 = 0.135*t324;
  t327 = 0. + t326;
  t362 = -0.135*t359;
  t364 = 0. + t362;
  t407 = t332*t339*t344;
  t408 = t342*t345;
  t409 = t407 + t408;
  t403 = -1.*t339*t342;
  t404 = t332*t344*t345;
  t405 = t403 + t404;
  t379 = 0.135*t378;
  t382 = 0.049*t380;
  t383 = 0. + t379 + t382;
  t388 = -0.049*t378;
  t389 = 0.135*t380;
  t391 = 0. + t388 + t389;
  t416 = t307*t405;
  t417 = t409*t359;
  t418 = t416 + t417;
  t436 = t332*t387*t307*t345;
  t437 = t332*t387*t339*t359;
  t438 = t436 + t437;
  t456 = t387*t307*t342*t345;
  t457 = t387*t339*t342*t359;
  t458 = t456 + t457;
  t476 = -1.*t307*t344*t345;
  t477 = -1.*t339*t344*t359;
  t478 = t476 + t477;
  t491 = t339*t342;
  t492 = -1.*t332*t344*t345;
  t493 = t491 + t492;
  t411 = t307*t409;
  t499 = t493*t359;
  t500 = t411 + t499;
  t505 = t339*t342*t344;
  t506 = -1.*t332*t345;
  t507 = t505 + t506;
  t513 = t307*t507;
  t514 = t348*t359;
  t515 = t513 + t514;
  t526 = t387*t339*t307;
  t527 = -1.*t387*t345*t359;
  t528 = t526 + t527;
  t496 = -1.*t409*t359;
  t412 = -1.*t405*t359;
  t413 = t411 + t412;
  t543 = t332*t339;
  t544 = t342*t344*t345;
  t545 = t543 + t544;
  t510 = -1.*t507*t359;
  t550 = -1.*t545*t359;
  t551 = t513 + t550;
  t522 = -1.*t387*t307*t345;
  t523 = -1.*t387*t339*t359;
  t524 = t522 + t523;
  t525 = -0.09*t524;
  t529 = 0.135*t376*t528;
  t530 = t528*t383;
  t531 = -0.049*t528*t380;
  t421 = t376*t418;
  t422 = -1.*t332*t387*t380;
  t423 = t421 + t422;
  t559 = 0.135*t376;
  t560 = -0.049*t380;
  t561 = t559 + t560;
  t563 = 0.049*t376;
  t564 = t563 + t389;
  t573 = t307*t545;
  t574 = t507*t359;
  t575 = t573 + t574;
  t398 = -1.*t387*t376*t342;
  t586 = t387*t307*t345;
  t587 = t387*t339*t359;
  t588 = t586 + t587;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t327*t348 - 0.09*(t307*t358 - 1.*t348*t359) + t358*t364 + t375*t383 + 0.135*(t375*t376 + t342*t380*t387) - 1.*t342*t387*t391 - 0.049*(t375*t380 + t398);
  p_output1[10]=t332*t387*t391 + t327*t405 + t364*t409 - 0.09*t413 + t383*t418 - 0.049*(t332*t376*t387 + t380*t418) + 0.135*t423;
  p_output1[11]=0;
  p_output1[12]=t327*t332*t345*t387 + t332*t339*t364*t387 - 0.09*(t307*t332*t339*t387 - 1.*t332*t345*t359*t387) - 1.*t332*t344*t391 + t383*t438 + 0.135*(t332*t344*t380 + t376*t438) - 0.049*(-1.*t332*t344*t376 + t380*t438);
  p_output1[13]=t327*t342*t345*t387 + t339*t342*t364*t387 - 0.09*(t307*t339*t342*t387 - 1.*t342*t345*t359*t387) - 1.*t342*t344*t391 + t383*t458 + 0.135*(t342*t344*t380 + t376*t458) - 0.049*(-1.*t342*t344*t376 + t380*t458);
  p_output1[14]=-1.*t327*t344*t345 - 0.09*(-1.*t307*t339*t344 + t344*t345*t359) - 1.*t339*t344*t364 - 1.*t387*t391 + t383*t478 + 0.135*(t380*t387 + t376*t478) - 0.049*(-1.*t376*t387 + t380*t478);
  p_output1[15]=t327*t409 + t364*t493 - 0.09*(t307*t493 + t496) + 0.135*t376*t500 - 0.049*t380*t500 + t383*t500;
  p_output1[16]=t348*t364 + t327*t507 - 0.09*(t373 + t510) + 0.135*t376*t515 - 0.049*t380*t515 + t383*t515;
  p_output1[17]=t327*t339*t387 - 1.*t345*t364*t387 + t525 + t529 + t530 + t531;
  p_output1[18]=0.135*t359*t405 - 0.135*t307*t409 + 0.135*t376*t413 - 0.049*t380*t413 + t383*t413 - 0.09*(-1.*t307*t405 + t496);
  p_output1[19]=-0.135*t307*t507 + 0.135*t359*t545 - 0.09*(t510 - 1.*t307*t545) + 0.135*t376*t551 - 0.049*t380*t551 + t383*t551;
  p_output1[20]=-0.135*t307*t339*t387 + 0.135*t345*t359*t387 + t525 + t529 + t530 + t531;
  p_output1[21]=0.135*(-1.*t332*t376*t387 - 1.*t380*t418) - 0.049*t423 + t332*t387*t561 + t418*t564;
  p_output1[22]=t342*t387*t561 + t564*t575 - 0.049*(-1.*t342*t380*t387 + t376*t575) + 0.135*(t398 - 1.*t380*t575);
  p_output1[23]=-1.*t344*t561 + t564*t588 - 0.049*(t344*t380 + t376*t588) + 0.135*(t344*t376 - 1.*t380*t588);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_hip_rotation_left_mex.hh"

namespace SymExpression
{

void J_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
