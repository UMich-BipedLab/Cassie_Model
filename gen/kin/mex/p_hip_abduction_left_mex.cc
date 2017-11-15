/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:52 GMT-05:00
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
  double t105;
  double t119;
  double t122;
  double t120;
  double t123;
  double t113;
  double t121;
  double t124;
  double t125;
  double t127;
  double t128;
  double t129;
  double t130;
  double t109;
  double t115;
  double t116;
  double t117;
  double t118;
  double t131;
  double t132;
  double t140;
  double t141;
  double t142;
  double t144;
  double t145;
  double t146;
  t105 = Cos(var1[3]);
  t119 = Cos(var1[5]);
  t122 = Sin(var1[4]);
  t120 = Sin(var1[3]);
  t123 = Sin(var1[5]);
  t113 = Cos(var1[6]);
  t121 = -1.*t119*t120;
  t124 = t105*t122*t123;
  t125 = t121 + t124;
  t127 = t105*t119*t122;
  t128 = t120*t123;
  t129 = t127 + t128;
  t130 = Sin(var1[6]);
  t109 = Cos(var1[4]);
  t115 = -1.*t113;
  t116 = 1. + t115;
  t117 = 0.135*t116;
  t118 = 0. + t117;
  t131 = -0.135*t130;
  t132 = 0. + t131;
  t140 = t105*t119;
  t141 = t120*t122*t123;
  t142 = t140 + t141;
  t144 = t119*t120*t122;
  t145 = -1.*t105*t123;
  t146 = t144 + t145;
  p_output1[0]=0. - 0.049*t105*t109 + t118*t125 + 0.135*(t113*t125 + t129*t130) + t129*t132 + var1[0];
  p_output1[1]=0. - 0.049*t109*t120 + t118*t142 + t132*t146 + 0.135*(t113*t142 + t130*t146) + var1[1];
  p_output1[2]=0. + 0.049*t122 + t109*t118*t123 + 0.135*(t109*t113*t123 + t109*t119*t130) + t109*t119*t132 + var1[2];
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
