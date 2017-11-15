/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:26 GMT-05:00
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
  double t956;
  double t4713;
  double t6365;
  double t6357;
  double t6432;
  double t2271;
  double t6364;
  double t6438;
  double t6440;
  double t6499;
  double t6505;
  double t6507;
  double t6508;
  double t1261;
  double t3617;
  double t4186;
  double t6500;
  double t6501;
  double t6502;
  double t6504;
  double t6523;
  double t6527;
  double t6528;
  double t6532;
  double t6533;
  double t6534;
  t956 = Cos(var1[3]);
  t4713 = Cos(var1[5]);
  t6365 = Sin(var1[3]);
  t6357 = Sin(var1[4]);
  t6432 = Sin(var1[5]);
  t2271 = Sin(var1[13]);
  t6364 = t956*t4713*t6357;
  t6438 = t6365*t6432;
  t6440 = t6364 + t6438;
  t6499 = Cos(var1[13]);
  t6505 = -1.*t4713*t6365;
  t6507 = t956*t6357*t6432;
  t6508 = t6505 + t6507;
  t1261 = Cos(var1[4]);
  t3617 = 0.135*t2271;
  t4186 = 0. + t3617;
  t6500 = -1.*t6499;
  t6501 = 1. + t6500;
  t6502 = -0.135*t6501;
  t6504 = 0. + t6502;
  t6523 = t4713*t6365*t6357;
  t6527 = -1.*t956*t6432;
  t6528 = t6523 + t6527;
  t6532 = t956*t4713;
  t6533 = t6365*t6357*t6432;
  t6534 = t6532 + t6533;
  p_output1[0]=0. + t4186*t6440 + t6504*t6508 - 0.135*(t2271*t6440 + t6499*t6508) - 0.049*t1261*t956 + var1[0];
  p_output1[1]=0. - 0.049*t1261*t6365 + t4186*t6528 + t6504*t6534 - 0.135*(t2271*t6528 + t6499*t6534) + var1[1];
  p_output1[2]=0. + t1261*t4186*t4713 + 0.049*t6357 - 0.135*(t1261*t2271*t4713 + t1261*t6432*t6499) + t1261*t6432*t6504 + var1[2];
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
