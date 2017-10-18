/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:30 GMT-04:00
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
  double t17;
  double t29;
  double t32;
  double t30;
  double t33;
  double t22;
  double t31;
  double t34;
  double t35;
  double t37;
  double t38;
  double t39;
  double t40;
  double t20;
  double t23;
  double t24;
  double t26;
  double t28;
  double t41;
  double t42;
  double t50;
  double t51;
  double t52;
  double t54;
  double t55;
  double t56;
  t17 = Cos(var1[3]);
  t29 = Cos(var1[5]);
  t32 = Sin(var1[4]);
  t30 = Sin(var1[3]);
  t33 = Sin(var1[5]);
  t22 = Cos(var1[6]);
  t31 = -1.*t29*t30;
  t34 = t17*t32*t33;
  t35 = t31 + t34;
  t37 = t17*t29*t32;
  t38 = t30*t33;
  t39 = t37 + t38;
  t40 = Sin(var1[6]);
  t20 = Cos(var1[4]);
  t23 = -1.*t22;
  t24 = 1. + t23;
  t26 = 0.135*t24;
  t28 = 0. + t26;
  t41 = -0.135*t40;
  t42 = 0. + t41;
  t50 = t17*t29;
  t51 = t30*t32*t33;
  t52 = t50 + t51;
  t54 = t29*t30*t32;
  t55 = -1.*t17*t33;
  t56 = t54 + t55;
  p_output1[0]=0. - 0.049*t17*t20 + t28*t35 + 0.135*(t22*t35 + t39*t40) + t39*t42 + var1[0];
  p_output1[1]=0. - 0.049*t20*t30 + t28*t52 + t42*t56 + 0.135*(t22*t52 + t40*t56) + var1[1];
  p_output1[2]=0. + 0.049*t32 + t20*t28*t33 + 0.135*(t20*t22*t33 + t20*t29*t40) + t20*t29*t42 + var1[2];
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
