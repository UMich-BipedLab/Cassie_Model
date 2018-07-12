/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:27 GMT-04:00
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
  double t1795;
  double t676;
  double t3075;
  double t2941;
  double t4701;
  double t5415;
  double t3993;
  double t6182;
  double t4819;
  double t5525;
  double t5604;
  double t6406;
  double t6475;
  double t6479;
  double t6705;
  double t6722;
  double t6740;
  double t6752;
  double t6775;
  double t6814;
  t1795 = Cos(var1[4]);
  t676 = Cos(var1[3]);
  t3075 = Sin(var1[4]);
  t2941 = Sin(var1[3]);
  t4701 = Cos(var1[5]);
  t5415 = Sin(var1[5]);
  t3993 = Sin(var1[13]);
  t6182 = Cos(var1[13]);
  t4819 = t676*t4701*t3075;
  t5525 = t2941*t5415;
  t5604 = t4819 + t5525;
  t6406 = -1.*t4701*t2941;
  t6475 = t676*t3075*t5415;
  t6479 = t6406 + t6475;
  t6705 = t4701*t2941*t3075;
  t6722 = -1.*t676*t5415;
  t6740 = t6705 + t6722;
  t6752 = t676*t4701;
  t6775 = t2941*t3075*t5415;
  t6814 = t6752 + t6775;
  p_output1[0]=t1795*t676;
  p_output1[1]=t1795*t2941;
  p_output1[2]=-1.*t3075;
  p_output1[3]=t3993*t5604 + t6182*t6479;
  p_output1[4]=t3993*t6740 + t6182*t6814;
  p_output1[5]=t1795*t3993*t4701 + t1795*t5415*t6182;
  p_output1[6]=t5604*t6182 - 1.*t3993*t6479;
  p_output1[7]=t6182*t6740 - 1.*t3993*t6814;
  p_output1[8]=-1.*t1795*t3993*t5415 + t1795*t4701*t6182;
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
