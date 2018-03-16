/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:11 GMT-04:00
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
  double t11;
  double t6421;
  double t6482;
  double t6427;
  double t6486;
  double t6349;
  double t6428;
  double t6487;
  double t6488;
  double t6490;
  double t6498;
  double t6500;
  double t6501;
  double t12;
  double t6358;
  double t6362;
  double t6491;
  double t6492;
  double t6493;
  double t6495;
  double t6519;
  double t6520;
  double t6522;
  double t6524;
  double t6527;
  double t6528;
  t11 = Cos(var1[3]);
  t6421 = Cos(var1[5]);
  t6482 = Sin(var1[3]);
  t6427 = Sin(var1[4]);
  t6486 = Sin(var1[5]);
  t6349 = Sin(var1[13]);
  t6428 = t11*t6421*t6427;
  t6487 = t6482*t6486;
  t6488 = t6428 + t6487;
  t6490 = Cos(var1[13]);
  t6498 = -1.*t6421*t6482;
  t6500 = t11*t6427*t6486;
  t6501 = t6498 + t6500;
  t12 = Cos(var1[4]);
  t6358 = 0.135*t6349;
  t6362 = 0. + t6358;
  t6491 = -1.*t6490;
  t6492 = 1. + t6491;
  t6493 = -0.135*t6492;
  t6495 = 0. + t6493;
  t6519 = t6421*t6482*t6427;
  t6520 = -1.*t11*t6486;
  t6522 = t6519 + t6520;
  t6524 = t11*t6421;
  t6527 = t6482*t6427*t6486;
  t6528 = t6524 + t6527;
  p_output1[0]=0. - 0.049*t11*t12 + t6362*t6488 + t6495*t6501 - 0.135*(t6349*t6488 + t6490*t6501) + var1[0];
  p_output1[1]=0. - 0.049*t12*t6482 + t6362*t6522 + t6495*t6528 - 0.135*(t6349*t6522 + t6490*t6528) + var1[1];
  p_output1[2]=0. + t12*t6362*t6421 + 0.049*t6427 - 0.135*(t12*t6349*t6421 + t12*t6486*t6490) + t12*t6486*t6495 + var1[2];
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

#include "p_hip_abduction_right_mex.hh"

namespace SymExpression
{

void p_hip_abduction_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
