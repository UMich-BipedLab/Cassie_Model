/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:39 GMT-04:00
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
  double t503;
  double t560;
  double t570;
  double t564;
  double t571;
  double t542;
  double t565;
  double t574;
  double t581;
  double t599;
  double t606;
  double t607;
  double t617;
  double t537;
  double t546;
  double t548;
  double t600;
  double t601;
  double t603;
  double t604;
  double t632;
  double t634;
  double t636;
  double t641;
  double t642;
  double t644;
  t503 = Cos(var1[3]);
  t560 = Cos(var1[5]);
  t570 = Sin(var1[3]);
  t564 = Sin(var1[4]);
  t571 = Sin(var1[5]);
  t542 = Sin(var1[14]);
  t565 = t503*t560*t564;
  t574 = t570*t571;
  t581 = t565 + t574;
  t599 = Cos(var1[14]);
  t606 = -1.*t560*t570;
  t607 = t503*t564*t571;
  t617 = t606 + t607;
  t537 = Cos(var1[4]);
  t546 = 0.135*t542;
  t548 = 0. + t546;
  t600 = -1.*t599;
  t601 = 1. + t600;
  t603 = -0.135*t601;
  t604 = 0. + t603;
  t632 = t560*t570*t564;
  t634 = -1.*t503*t571;
  t636 = t632 + t634;
  t641 = t503*t560;
  t642 = t570*t564*t571;
  t644 = t641 + t642;
  p_output1[0]=0. - 0.049*t503*t537 + t548*t581 + t604*t617 - 0.135*(t542*t581 + t599*t617) + var1[0];
  p_output1[1]=0. - 0.049*t537*t570 + t548*t636 + t604*t644 - 0.135*(t542*t636 + t599*t644) + var1[1];
  p_output1[2]=0. + t537*t548*t560 + 0.049*t564 - 0.135*(t537*t542*t560 + t537*t571*t599) + t537*t571*t604 + var1[2];
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

#include "p_hip_abduction_right.hh"

namespace SymExpression
{

void p_hip_abduction_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
