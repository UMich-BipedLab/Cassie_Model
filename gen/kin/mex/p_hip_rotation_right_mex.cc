/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:30 GMT-05:00
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
  double t5847;
  double t5864;
  double t5867;
  double t5865;
  double t5868;
  double t5859;
  double t5866;
  double t5869;
  double t5870;
  double t5872;
  double t5877;
  double t5878;
  double t5879;
  double t5853;
  double t5862;
  double t5863;
  double t5873;
  double t5874;
  double t5875;
  double t5876;
  double t5895;
  double t5896;
  double t5897;
  double t5899;
  double t5900;
  double t5902;
  t5847 = Cos(var1[3]);
  t5864 = Cos(var1[5]);
  t5867 = Sin(var1[3]);
  t5865 = Sin(var1[4]);
  t5868 = Sin(var1[5]);
  t5859 = Sin(var1[13]);
  t5866 = t5847*t5864*t5865;
  t5869 = t5867*t5868;
  t5870 = t5866 + t5869;
  t5872 = Cos(var1[13]);
  t5877 = -1.*t5864*t5867;
  t5878 = t5847*t5865*t5868;
  t5879 = t5877 + t5878;
  t5853 = Cos(var1[4]);
  t5862 = 0.135*t5859;
  t5863 = 0. + t5862;
  t5873 = -1.*t5872;
  t5874 = 1. + t5873;
  t5875 = -0.135*t5874;
  t5876 = 0. + t5875;
  t5895 = t5864*t5867*t5865;
  t5896 = -1.*t5847*t5868;
  t5897 = t5895 + t5896;
  t5899 = t5847*t5864;
  t5900 = t5867*t5865*t5868;
  t5902 = t5899 + t5900;
  p_output1[0]=0. - 0.049*t5847*t5853 + t5863*t5870 + t5876*t5879 - 0.09*(t5870*t5872 - 1.*t5859*t5879) - 0.135*(t5859*t5870 + t5872*t5879) + var1[0];
  p_output1[1]=0. - 0.049*t5853*t5867 + t5863*t5897 + t5876*t5902 - 0.09*(t5872*t5897 - 1.*t5859*t5902) - 0.135*(t5859*t5897 + t5872*t5902) + var1[1];
  p_output1[2]=0. + t5853*t5863*t5864 + 0.049*t5865 - 0.09*(-1.*t5853*t5859*t5868 + t5853*t5864*t5872) - 0.135*(t5853*t5859*t5864 + t5853*t5868*t5872) + t5853*t5868*t5876 + var1[2];
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

#include "p_hip_rotation_right_mex.hh"

namespace SymExpression
{

void p_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
