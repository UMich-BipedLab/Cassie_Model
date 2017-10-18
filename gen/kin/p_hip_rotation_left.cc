/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:31 GMT-04:00
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
  double t26;
  double t48;
  double t52;
  double t49;
  double t53;
  double t40;
  double t50;
  double t57;
  double t58;
  double t60;
  double t61;
  double t62;
  double t63;
  double t67;
  double t78;
  double t79;
  double t80;
  double t74;
  double t75;
  double t76;
  double t81;
  double t32;
  double t42;
  double t43;
  double t44;
  double t47;
  double t64;
  double t65;
  double t68;
  double t69;
  double t70;
  double t71;
  double t95;
  double t96;
  double t97;
  double t99;
  double t100;
  double t101;
  double t82;
  double t83;
  double t107;
  double t108;
  double t109;
  double t103;
  double t104;
  double t105;
  double t127;
  double t128;
  double t129;
  double t123;
  double t124;
  double t125;
  t26 = Cos(var1[3]);
  t48 = Cos(var1[5]);
  t52 = Sin(var1[4]);
  t49 = Sin(var1[3]);
  t53 = Sin(var1[5]);
  t40 = Cos(var1[6]);
  t50 = -1.*t48*t49;
  t57 = t26*t52*t53;
  t58 = t50 + t57;
  t60 = t26*t48*t52;
  t61 = t49*t53;
  t62 = t60 + t61;
  t63 = Sin(var1[6]);
  t67 = Cos(var1[7]);
  t78 = t40*t62;
  t79 = -1.*t58*t63;
  t80 = t78 + t79;
  t74 = t40*t58;
  t75 = t62*t63;
  t76 = t74 + t75;
  t81 = Sin(var1[7]);
  t32 = Cos(var1[4]);
  t42 = -1.*t40;
  t43 = 1. + t42;
  t44 = 0.135*t43;
  t47 = 0. + t44;
  t64 = -0.135*t63;
  t65 = 0. + t64;
  t68 = -1.*t67;
  t69 = 1. + t68;
  t70 = 0.135*t69;
  t71 = 0. + t70;
  t95 = t26*t48;
  t96 = t49*t52*t53;
  t97 = t95 + t96;
  t99 = t48*t49*t52;
  t100 = -1.*t26*t53;
  t101 = t99 + t100;
  t82 = -0.135*t81;
  t83 = 0. + t82;
  t107 = t40*t101;
  t108 = -1.*t97*t63;
  t109 = t107 + t108;
  t103 = t40*t97;
  t104 = t101*t63;
  t105 = t103 + t104;
  t127 = t32*t48*t40;
  t128 = -1.*t32*t53*t63;
  t129 = t127 + t128;
  t123 = t32*t40*t53;
  t124 = t32*t48*t63;
  t125 = t123 + t124;
  p_output1[0]=0. - 0.049*t26*t32 + t47*t58 + t62*t65 + t71*t76 - 0.09*(t67*t80 - 1.*t76*t81) + 0.135*(t67*t76 + t80*t81) + t80*t83 + var1[0];
  p_output1[1]=0. - 0.049*t32*t49 + t101*t65 + t105*t71 - 0.09*(t109*t67 - 1.*t105*t81) + 0.135*(t105*t67 + t109*t81) + t109*t83 + t47*t97 + var1[1];
  p_output1[2]=0. + 0.049*t52 + t32*t47*t53 + t32*t48*t65 + t125*t71 - 0.09*(t129*t67 - 1.*t125*t81) + 0.135*(t125*t67 + t129*t81) + t129*t83 + var1[2];
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

#include "p_hip_rotation_left.hh"

namespace SymExpression
{

void p_hip_rotation_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
