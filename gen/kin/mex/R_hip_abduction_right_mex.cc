/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:30 GMT-05:00
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
  double t6609;
  double t1884;
  double t6648;
  double t6636;
  double t6664;
  double t6668;
  double t6659;
  double t6680;
  double t6667;
  double t6676;
  double t6677;
  double t6683;
  double t6685;
  double t6688;
  double t6698;
  double t6699;
  double t6702;
  double t6706;
  double t6707;
  double t6710;
  t6609 = Cos(var1[4]);
  t1884 = Cos(var1[3]);
  t6648 = Sin(var1[4]);
  t6636 = Sin(var1[3]);
  t6664 = Cos(var1[5]);
  t6668 = Sin(var1[5]);
  t6659 = Sin(var1[13]);
  t6680 = Cos(var1[13]);
  t6667 = t1884*t6664*t6648;
  t6676 = t6636*t6668;
  t6677 = t6667 + t6676;
  t6683 = -1.*t6664*t6636;
  t6685 = t1884*t6648*t6668;
  t6688 = t6683 + t6685;
  t6698 = t6664*t6636*t6648;
  t6699 = -1.*t1884*t6668;
  t6702 = t6698 + t6699;
  t6706 = t1884*t6664;
  t6707 = t6636*t6648*t6668;
  t6710 = t6706 + t6707;
  p_output1[0]=t1884*t6609;
  p_output1[1]=t6609*t6636;
  p_output1[2]=-1.*t6648;
  p_output1[3]=t6659*t6677 + t6680*t6688;
  p_output1[4]=t6659*t6702 + t6680*t6710;
  p_output1[5]=t6609*t6659*t6664 + t6609*t6668*t6680;
  p_output1[6]=t6677*t6680 - 1.*t6659*t6688;
  p_output1[7]=t6680*t6702 - 1.*t6659*t6710;
  p_output1[8]=-1.*t6609*t6659*t6668 + t6609*t6664*t6680;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_hip_abduction_right_mex.hh"

namespace SymExpression
{

void R_hip_abduction_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
