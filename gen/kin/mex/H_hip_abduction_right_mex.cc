/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:27 GMT-05:00
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
  double t5795;
  double t5809;
  double t5722;
  double t5812;
  double t5815;
  double t5818;
  double t5816;
  double t5820;
  double t5821;
  double t5822;
  double t5824;
  double t5825;
  t5795 = Cos(var1[4]);
  t5809 = Sin(var1[3]);
  t5722 = Cos(var1[3]);
  t5812 = Sin(var1[4]);
  t5815 = Cos(var1[5]);
  t5818 = Sin(var1[5]);
  t5816 = -1.*t5815*t5809;
  t5820 = t5722*t5812*t5818;
  t5821 = t5816 + t5820;
  t5822 = t5722*t5815;
  t5824 = t5809*t5812*t5818;
  t5825 = t5822 + t5824;
  p_output1[0]=t5722*t5795;
  p_output1[1]=t5795*t5809;
  p_output1[2]=-1.*t5812;
  p_output1[3]=0;
  p_output1[4]=t5821;
  p_output1[5]=t5825;
  p_output1[6]=t5795*t5818;
  p_output1[7]=0;
  p_output1[8]=t5722*t5812*t5815 + t5809*t5818;
  p_output1[9]=t5809*t5812*t5815 - 1.*t5722*t5818;
  p_output1[10]=t5795*t5815;
  p_output1[11]=0;
  p_output1[12]=-0.049*t5722*t5795 - 0.135*t5821 + var1[0];
  p_output1[13]=-0.049*t5795*t5809 - 0.135*t5825 + var1[1];
  p_output1[14]=0.049*t5812 - 0.135*t5795*t5818 + var1[2];
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

#include "H_hip_abduction_right_mex.hh"

namespace SymExpression
{

void H_hip_abduction_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
