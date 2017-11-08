/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:52 GMT-05:00
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
  double t360;
  double t398;
  double t402;
  double t400;
  double t404;
  double t385;
  double t401;
  double t405;
  double t411;
  double t417;
  double t419;
  double t421;
  double t425;
  double t373;
  double t391;
  double t394;
  double t396;
  double t397;
  double t427;
  double t429;
  double t452;
  double t454;
  double t456;
  double t462;
  double t463;
  double t465;
  t360 = Cos(var1[3]);
  t398 = Cos(var1[5]);
  t402 = Sin(var1[4]);
  t400 = Sin(var1[3]);
  t404 = Sin(var1[5]);
  t385 = Cos(var1[6]);
  t401 = -1.*t398*t400;
  t405 = t360*t402*t404;
  t411 = t401 + t405;
  t417 = t360*t398*t402;
  t419 = t400*t404;
  t421 = t417 + t419;
  t425 = Sin(var1[6]);
  t373 = Cos(var1[4]);
  t391 = -1.*t385;
  t394 = 1. + t391;
  t396 = 0.135*t394;
  t397 = 0. + t396;
  t427 = -0.135*t425;
  t429 = 0. + t427;
  t452 = t360*t398;
  t454 = t400*t402*t404;
  t456 = t452 + t454;
  t462 = t398*t400*t402;
  t463 = -1.*t360*t404;
  t465 = t462 + t463;
  p_output1[0]=0. - 0.049*t360*t373 + t397*t411 - 0.09*(t385*t421 - 1.*t411*t425) + 0.135*(t385*t411 + t421*t425) + t421*t429 + var1[0];
  p_output1[1]=0. - 0.049*t373*t400 + t397*t456 + t429*t465 - 0.09*(-1.*t425*t456 + t385*t465) + 0.135*(t385*t456 + t425*t465) + var1[1];
  p_output1[2]=0. + 0.049*t402 + t373*t397*t404 + 0.135*(t373*t385*t404 + t373*t398*t425) - 0.09*(t373*t385*t398 - 1.*t373*t404*t425) + t373*t398*t429 + var1[2];
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

#include "p_hip_rotation_left_mex.hh"

namespace SymExpression
{

void p_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
