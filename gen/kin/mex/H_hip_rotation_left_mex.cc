/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:59 GMT-05:00
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
  double t452;
  double t462;
  double t449;
  double t459;
  double t463;
  double t428;
  double t480;
  double t498;
  double t468;
  double t470;
  double t477;
  double t461;
  double t465;
  double t466;
  double t504;
  double t491;
  double t492;
  double t493;
  double t485;
  double t486;
  double t489;
  double t515;
  double t508;
  double t509;
  double t511;
  double t520;
  double t521;
  double t523;
  double t527;
  double t530;
  double t531;
  double t570;
  double t571;
  double t506;
  double t516;
  double t517;
  double t548;
  double t549;
  double t550;
  double t554;
  double t556;
  double t557;
  double t572;
  double t573;
  double t576;
  double t579;
  double t580;
  double t582;
  double t519;
  double t524;
  double t525;
  double t526;
  double t533;
  double t534;
  t452 = Cos(var1[5]);
  t462 = Sin(var1[3]);
  t449 = Cos(var1[3]);
  t459 = Sin(var1[4]);
  t463 = Sin(var1[5]);
  t428 = Cos(var1[6]);
  t480 = Sin(var1[6]);
  t498 = Cos(var1[4]);
  t468 = -1.*t452*t462;
  t470 = t449*t459*t463;
  t477 = t468 + t470;
  t461 = t449*t452*t459;
  t465 = t462*t463;
  t466 = t461 + t465;
  t504 = Cos(var1[7]);
  t491 = t449*t452;
  t492 = t462*t459*t463;
  t493 = t491 + t492;
  t485 = t452*t462*t459;
  t486 = -1.*t449*t463;
  t489 = t485 + t486;
  t515 = Sin(var1[7]);
  t508 = t428*t477;
  t509 = t466*t480;
  t511 = t508 + t509;
  t520 = t428*t493;
  t521 = t489*t480;
  t523 = t520 + t521;
  t527 = t498*t428*t463;
  t530 = t498*t452*t480;
  t531 = t527 + t530;
  t570 = -1.*t504;
  t571 = 1. + t570;
  t506 = t449*t498*t504;
  t516 = t511*t515;
  t517 = t506 + t516;
  t548 = -1.*t428;
  t549 = 1. + t548;
  t550 = 0.135*t549;
  t554 = 0. + t550;
  t556 = -0.135*t480;
  t557 = 0. + t556;
  t572 = 0.135*t571;
  t573 = 0.049*t515;
  t576 = 0. + t572 + t573;
  t579 = -0.049*t571;
  t580 = 0.135*t515;
  t582 = 0. + t579 + t580;
  t519 = t498*t504*t462;
  t524 = t523*t515;
  t525 = t519 + t524;
  t526 = -1.*t504*t459;
  t533 = t531*t515;
  t534 = t526 + t533;
  p_output1[0]=-1.*t428*t466 + t477*t480;
  p_output1[1]=-1.*t428*t489 + t480*t493;
  p_output1[2]=-1.*t428*t452*t498 + t463*t480*t498;
  p_output1[3]=0.;
  p_output1[4]=t517;
  p_output1[5]=t525;
  p_output1[6]=t534;
  p_output1[7]=0.;
  p_output1[8]=-1.*t504*t511 + t449*t498*t515;
  p_output1[9]=t462*t498*t515 - 1.*t504*t523;
  p_output1[10]=-1.*t459*t515 - 1.*t504*t531;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t428*t466 - 1.*t477*t480) + 0.135*(t504*t511 - 1.*t449*t498*t515) - 0.049*t517 + t477*t554 + t466*t557 + t511*t576 + t449*t498*t582 + var1[0];
  p_output1[13]=0. - 0.09*(t428*t489 - 1.*t480*t493) + 0.135*(-1.*t462*t498*t515 + t504*t523) - 0.049*t525 + t493*t554 + t489*t557 + t523*t576 + t462*t498*t582 + var1[1];
  p_output1[14]=0. - 0.09*(t428*t452*t498 - 1.*t463*t480*t498) + 0.135*(t459*t515 + t504*t531) - 0.049*t534 + t463*t498*t554 + t452*t498*t557 + t531*t576 - 1.*t459*t582 + var1[2];
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
