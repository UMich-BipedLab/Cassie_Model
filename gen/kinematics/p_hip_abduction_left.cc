/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:16 GMT-04:00
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
  double t9473;
  double t9522;
  double t9534;
  double t9525;
  double t9538;
  double t9499;
  double t9531;
  double t9539;
  double t9540;
  double t9544;
  double t9549;
  double t9551;
  double t9553;
  double t9491;
  double t9501;
  double t9509;
  double t9515;
  double t9521;
  double t9555;
  double t9558;
  double t9587;
  double t9588;
  double t9600;
  double t9602;
  double t9606;
  double t9607;
  t9473 = Cos(var1[3]);
  t9522 = Cos(var1[5]);
  t9534 = Sin(var1[4]);
  t9525 = Sin(var1[3]);
  t9538 = Sin(var1[5]);
  t9499 = Cos(var1[6]);
  t9531 = -1.*t9522*t9525;
  t9539 = t9473*t9534*t9538;
  t9540 = t9531 + t9539;
  t9544 = t9473*t9522*t9534;
  t9549 = t9525*t9538;
  t9551 = t9544 + t9549;
  t9553 = Sin(var1[6]);
  t9491 = Cos(var1[4]);
  t9501 = -1.*t9499;
  t9509 = 1. + t9501;
  t9515 = 0.135*t9509;
  t9521 = 0. + t9515;
  t9555 = -0.135*t9553;
  t9558 = 0. + t9555;
  t9587 = t9473*t9522;
  t9588 = t9525*t9534*t9538;
  t9600 = t9587 + t9588;
  t9602 = t9522*t9525*t9534;
  t9606 = -1.*t9473*t9538;
  t9607 = t9602 + t9606;
  p_output1[0]=0. - 0.049*t9473*t9491 + t9521*t9540 + 0.135*(t9499*t9540 + t9551*t9553) + t9551*t9558 + var1[0];
  p_output1[1]=0. - 0.049*t9491*t9525 + t9521*t9600 + t9558*t9607 + 0.135*(t9499*t9600 + t9553*t9607) + var1[1];
  p_output1[2]=0. + 0.049*t9534 + t9491*t9521*t9538 + 0.135*(t9491*t9499*t9538 + t9491*t9522*t9553) + t9491*t9522*t9558 + var1[2];
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

#include "p_hip_abduction_left.hh"

namespace SymExpression
{

void p_hip_abduction_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
