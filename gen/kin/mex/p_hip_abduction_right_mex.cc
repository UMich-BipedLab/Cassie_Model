/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:21 GMT-04:00
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
  double t321;
  double t4065;
  double t4878;
  double t4137;
  double t4915;
  double t3479;
  double t4721;
  double t4993;
  double t5012;
  double t5134;
  double t5924;
  double t5968;
  double t5970;
  double t2597;
  double t3853;
  double t4000;
  double t5430;
  double t5455;
  double t5679;
  double t5705;
  double t6622;
  double t6653;
  double t6661;
  double t6710;
  double t6722;
  double t6734;
  t321 = Cos(var1[3]);
  t4065 = Cos(var1[5]);
  t4878 = Sin(var1[3]);
  t4137 = Sin(var1[4]);
  t4915 = Sin(var1[5]);
  t3479 = Sin(var1[13]);
  t4721 = t321*t4065*t4137;
  t4993 = t4878*t4915;
  t5012 = t4721 + t4993;
  t5134 = Cos(var1[13]);
  t5924 = -1.*t4065*t4878;
  t5968 = t321*t4137*t4915;
  t5970 = t5924 + t5968;
  t2597 = Cos(var1[4]);
  t3853 = 0.135*t3479;
  t4000 = 0. + t3853;
  t5430 = -1.*t5134;
  t5455 = 1. + t5430;
  t5679 = -0.135*t5455;
  t5705 = 0. + t5679;
  t6622 = t4065*t4878*t4137;
  t6653 = -1.*t321*t4915;
  t6661 = t6622 + t6653;
  t6710 = t321*t4065;
  t6722 = t4878*t4137*t4915;
  t6734 = t6710 + t6722;
  p_output1[0]=0. - 0.049*t2597*t321 + t4000*t5012 + t5705*t5970 - 0.135*(t3479*t5012 + t5134*t5970) + var1[0];
  p_output1[1]=0. - 0.049*t2597*t4878 + t4000*t6661 + t5705*t6734 - 0.135*(t3479*t6661 + t5134*t6734) + var1[1];
  p_output1[2]=0. + t2597*t4000*t4065 + 0.049*t4137 - 0.135*(t2597*t3479*t4065 + t2597*t4915*t5134) + t2597*t4915*t5705 + var1[2];
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
