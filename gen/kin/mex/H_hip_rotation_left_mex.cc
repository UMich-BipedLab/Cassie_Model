/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:52 GMT-04:00
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
  double t416;
  double t426;
  double t413;
  double t423;
  double t427;
  double t392;
  double t444;
  double t462;
  double t432;
  double t434;
  double t441;
  double t425;
  double t429;
  double t430;
  double t468;
  double t455;
  double t456;
  double t457;
  double t449;
  double t450;
  double t453;
  double t479;
  double t472;
  double t473;
  double t475;
  double t484;
  double t485;
  double t487;
  double t491;
  double t494;
  double t495;
  double t534;
  double t535;
  double t470;
  double t480;
  double t481;
  double t512;
  double t513;
  double t514;
  double t518;
  double t520;
  double t521;
  double t536;
  double t537;
  double t540;
  double t543;
  double t544;
  double t546;
  double t483;
  double t488;
  double t489;
  double t490;
  double t497;
  double t498;
  t416 = Cos(var1[5]);
  t426 = Sin(var1[3]);
  t413 = Cos(var1[3]);
  t423 = Sin(var1[4]);
  t427 = Sin(var1[5]);
  t392 = Cos(var1[6]);
  t444 = Sin(var1[6]);
  t462 = Cos(var1[4]);
  t432 = -1.*t416*t426;
  t434 = t413*t423*t427;
  t441 = t432 + t434;
  t425 = t413*t416*t423;
  t429 = t426*t427;
  t430 = t425 + t429;
  t468 = Cos(var1[7]);
  t455 = t413*t416;
  t456 = t426*t423*t427;
  t457 = t455 + t456;
  t449 = t416*t426*t423;
  t450 = -1.*t413*t427;
  t453 = t449 + t450;
  t479 = Sin(var1[7]);
  t472 = t392*t441;
  t473 = t430*t444;
  t475 = t472 + t473;
  t484 = t392*t457;
  t485 = t453*t444;
  t487 = t484 + t485;
  t491 = t462*t392*t427;
  t494 = t462*t416*t444;
  t495 = t491 + t494;
  t534 = -1.*t468;
  t535 = 1. + t534;
  t470 = t413*t462*t468;
  t480 = t475*t479;
  t481 = t470 + t480;
  t512 = -1.*t392;
  t513 = 1. + t512;
  t514 = 0.135*t513;
  t518 = 0. + t514;
  t520 = -0.135*t444;
  t521 = 0. + t520;
  t536 = 0.135*t535;
  t537 = 0.049*t479;
  t540 = 0. + t536 + t537;
  t543 = -0.049*t535;
  t544 = 0.135*t479;
  t546 = 0. + t543 + t544;
  t483 = t462*t468*t426;
  t488 = t487*t479;
  t489 = t483 + t488;
  t490 = -1.*t468*t423;
  t497 = t495*t479;
  t498 = t490 + t497;
  p_output1[0]=-1.*t392*t430 + t441*t444;
  p_output1[1]=-1.*t392*t453 + t444*t457;
  p_output1[2]=-1.*t392*t416*t462 + t427*t444*t462;
  p_output1[3]=0.;
  p_output1[4]=t481;
  p_output1[5]=t489;
  p_output1[6]=t498;
  p_output1[7]=0.;
  p_output1[8]=-1.*t468*t475 + t413*t462*t479;
  p_output1[9]=t426*t462*t479 - 1.*t468*t487;
  p_output1[10]=-1.*t423*t479 - 1.*t468*t495;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t392*t430 - 1.*t441*t444) + 0.135*(t468*t475 - 1.*t413*t462*t479) - 0.049*t481 + t441*t518 + t430*t521 + t475*t540 + t413*t462*t546 + var1[0];
  p_output1[13]=0. - 0.09*(t392*t453 - 1.*t444*t457) + 0.135*(-1.*t426*t462*t479 + t468*t487) - 0.049*t489 + t457*t518 + t453*t521 + t487*t540 + t426*t462*t546 + var1[1];
  p_output1[14]=0. - 0.09*(t392*t416*t462 - 1.*t427*t444*t462) + 0.135*(t423*t479 + t468*t495) - 0.049*t498 + t427*t462*t518 + t416*t462*t521 + t495*t540 - 1.*t423*t546 + var1[2];
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
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

#include "H_hip_rotation_left_mex.hh"

namespace SymExpression
{

void H_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
