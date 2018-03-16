/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:47 GMT-04:00
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
  double t69;
  double t83;
  double t86;
  double t84;
  double t87;
  double t77;
  double t85;
  double t88;
  double t89;
  double t91;
  double t92;
  double t93;
  double t94;
  double t73;
  double t79;
  double t80;
  double t81;
  double t82;
  double t95;
  double t96;
  double t104;
  double t105;
  double t106;
  double t108;
  double t109;
  double t110;
  t69 = Cos(var1[3]);
  t83 = Cos(var1[5]);
  t86 = Sin(var1[4]);
  t84 = Sin(var1[3]);
  t87 = Sin(var1[5]);
  t77 = Cos(var1[6]);
  t85 = -1.*t83*t84;
  t88 = t69*t86*t87;
  t89 = t85 + t88;
  t91 = t69*t83*t86;
  t92 = t84*t87;
  t93 = t91 + t92;
  t94 = Sin(var1[6]);
  t73 = Cos(var1[4]);
  t79 = -1.*t77;
  t80 = 1. + t79;
  t81 = 0.135*t80;
  t82 = 0. + t81;
  t95 = -0.135*t94;
  t96 = 0. + t95;
  t104 = t69*t83;
  t105 = t84*t86*t87;
  t106 = t104 + t105;
  t108 = t83*t84*t86;
  t109 = -1.*t69*t87;
  t110 = t108 + t109;
  p_output1[0]=0. - 0.049*t69*t73 + t82*t89 + 0.135*(t77*t89 + t93*t94) + t93*t96 + var1[0];
  p_output1[1]=0. + t106*t82 - 0.049*t73*t84 + 0.135*(t106*t77 + t110*t94) + t110*t96 + var1[1];
  p_output1[2]=0. + 0.049*t86 + t73*t82*t87 + 0.135*(t73*t77*t87 + t73*t83*t94) + t73*t83*t96 + var1[2];
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

#include "p_hip_abduction_left_mex.hh"

namespace SymExpression
{

void p_hip_abduction_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
