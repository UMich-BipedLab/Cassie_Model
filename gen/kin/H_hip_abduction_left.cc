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
  double t21;
  double t28;
  double t20;
  double t34;
  double t37;
  double t39;
  double t36;
  double t46;
  double t43;
  double t44;
  double t45;
  double t38;
  double t40;
  double t41;
  double t53;
  double t54;
  double t56;
  double t49;
  double t50;
  double t51;
  double t42;
  double t47;
  double t48;
  double t72;
  double t73;
  double t74;
  double t75;
  double t77;
  double t78;
  double t52;
  double t57;
  double t58;
  double t59;
  double t60;
  double t61;
  t21 = Cos(var1[4]);
  t28 = Sin(var1[3]);
  t20 = Cos(var1[3]);
  t34 = Sin(var1[4]);
  t37 = Cos(var1[5]);
  t39 = Sin(var1[5]);
  t36 = Cos(var1[6]);
  t46 = Sin(var1[6]);
  t43 = t20*t37*t34;
  t44 = t28*t39;
  t45 = t43 + t44;
  t38 = -1.*t37*t28;
  t40 = t20*t34*t39;
  t41 = t38 + t40;
  t53 = t37*t28*t34;
  t54 = -1.*t20*t39;
  t56 = t53 + t54;
  t49 = t20*t37;
  t50 = t28*t34*t39;
  t51 = t49 + t50;
  t42 = t36*t41;
  t47 = t45*t46;
  t48 = t42 + t47;
  t72 = -1.*t36;
  t73 = 1. + t72;
  t74 = 0.135*t73;
  t75 = 0. + t74;
  t77 = -0.135*t46;
  t78 = 0. + t77;
  t52 = t36*t51;
  t57 = t56*t46;
  t58 = t52 + t57;
  t59 = t21*t36*t39;
  t60 = t21*t37*t46;
  t61 = t59 + t60;
  p_output1[0]=t20*t21;
  p_output1[1]=t21*t28;
  p_output1[2]=-1.*t34;
  p_output1[3]=0.;
  p_output1[4]=t48;
  p_output1[5]=t58;
  p_output1[6]=t61;
  p_output1[7]=0.;
  p_output1[8]=t36*t45 - 1.*t41*t46;
  p_output1[9]=-1.*t46*t51 + t36*t56;
  p_output1[10]=t21*t36*t37 - 1.*t21*t39*t46;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t20*t21 + 0.135*t48 + t41*t75 + t45*t78 + var1[0];
  p_output1[13]=0. - 0.049*t21*t28 + 0.135*t58 + t51*t75 + t56*t78 + var1[1];
  p_output1[14]=0. + 0.049*t34 + 0.135*t61 + t21*t39*t75 + t21*t37*t78 + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "H_hip_abduction_left.hh"

namespace SymExpression
{

void H_hip_abduction_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
