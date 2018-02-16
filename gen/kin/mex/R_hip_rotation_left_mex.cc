/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:05 GMT-05:00
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
  double t484;
  double t500;
  double t481;
  double t489;
  double t501;
  double t467;
  double t533;
  double t567;
  double t520;
  double t521;
  double t528;
  double t498;
  double t509;
  double t511;
  double t582;
  double t551;
  double t556;
  double t557;
  double t541;
  double t543;
  double t548;
  double t590;
  double t584;
  double t585;
  double t586;
  double t598;
  double t599;
  double t600;
  double t607;
  double t608;
  double t610;
  t484 = Cos(var1[5]);
  t500 = Sin(var1[3]);
  t481 = Cos(var1[3]);
  t489 = Sin(var1[4]);
  t501 = Sin(var1[5]);
  t467 = Cos(var1[6]);
  t533 = Sin(var1[6]);
  t567 = Cos(var1[4]);
  t520 = -1.*t484*t500;
  t521 = t481*t489*t501;
  t528 = t520 + t521;
  t498 = t481*t484*t489;
  t509 = t500*t501;
  t511 = t498 + t509;
  t582 = Cos(var1[7]);
  t551 = t481*t484;
  t556 = t500*t489*t501;
  t557 = t551 + t556;
  t541 = t484*t500*t489;
  t543 = -1.*t481*t501;
  t548 = t541 + t543;
  t590 = Sin(var1[7]);
  t584 = t467*t528;
  t585 = t511*t533;
  t586 = t584 + t585;
  t598 = t467*t557;
  t599 = t548*t533;
  t600 = t598 + t599;
  t607 = t567*t467*t501;
  t608 = t567*t484*t533;
  t610 = t607 + t608;
  p_output1[0]=-1.*t467*t511 + t528*t533;
  p_output1[1]=-1.*t467*t548 + t533*t557;
  p_output1[2]=-1.*t467*t484*t567 + t501*t533*t567;
  p_output1[3]=t481*t567*t582 + t586*t590;
  p_output1[4]=t500*t567*t582 + t590*t600;
  p_output1[5]=-1.*t489*t582 + t590*t610;
  p_output1[6]=-1.*t582*t586 + t481*t567*t590;
  p_output1[7]=t500*t567*t590 - 1.*t582*t600;
  p_output1[8]=-1.*t489*t590 - 1.*t582*t610;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_hip_rotation_left_mex.hh"

namespace SymExpression
{

void R_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
