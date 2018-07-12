/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:28 GMT-04:00
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
  double t579;
  double t6955;
  double t6997;
  double t6958;
  double t7001;
  double t1994;
  double t2279;
  double t2717;
  double t4053;
  double t5322;
  double t6979;
  double t7004;
  double t7015;
  double t7063;
  double t7129;
  double t7133;
  double t7207;
  double t1050;
  double t7264;
  double t7267;
  double t7268;
  double t2947;
  double t4390;
  double t4690;
  double t5632;
  double t6885;
  double t7085;
  double t7098;
  double t7119;
  double t7123;
  double t7240;
  double t7247;
  double t7260;
  double t7420;
  double t7429;
  double t7431;
  double t7452;
  double t7455;
  double t7456;
  double t7469;
  double t7475;
  double t7496;
  double t7614;
  double t7629;
  double t7642;
  t579 = Cos(var1[3]);
  t6955 = Cos(var1[5]);
  t6997 = Sin(var1[3]);
  t6958 = Sin(var1[4]);
  t7001 = Sin(var1[5]);
  t1994 = Cos(var1[14]);
  t2279 = -1.*t1994;
  t2717 = 1. + t2279;
  t4053 = Sin(var1[14]);
  t5322 = Sin(var1[13]);
  t6979 = t579*t6955*t6958;
  t7004 = t6997*t7001;
  t7015 = t6979 + t7004;
  t7063 = Cos(var1[13]);
  t7129 = -1.*t6955*t6997;
  t7133 = t579*t6958*t7001;
  t7207 = t7129 + t7133;
  t1050 = Cos(var1[4]);
  t7264 = t5322*t7015;
  t7267 = t7063*t7207;
  t7268 = t7264 + t7267;
  t2947 = -0.049*t2717;
  t4390 = -0.135*t4053;
  t4690 = 0. + t2947 + t4390;
  t5632 = 0.135*t5322;
  t6885 = 0. + t5632;
  t7085 = -1.*t7063;
  t7098 = 1. + t7085;
  t7119 = -0.135*t7098;
  t7123 = 0. + t7119;
  t7240 = -0.135*t2717;
  t7247 = 0.049*t4053;
  t7260 = 0. + t7240 + t7247;
  t7420 = t6955*t6997*t6958;
  t7429 = -1.*t579*t7001;
  t7431 = t7420 + t7429;
  t7452 = t579*t6955;
  t7455 = t6997*t6958*t7001;
  t7456 = t7452 + t7455;
  t7469 = t5322*t7431;
  t7475 = t7063*t7456;
  t7496 = t7469 + t7475;
  t7614 = t1050*t6955*t5322;
  t7629 = t7063*t1050*t7001;
  t7642 = t7614 + t7629;
  p_output1[0]=0. + t1050*t4690*t579 + t6885*t7015 + t7123*t7207 - 0.09*(t7015*t7063 - 1.*t5322*t7207) + t7260*t7268 - 0.135*(-1.*t1050*t4053*t579 + t1994*t7268) - 0.049*(t1050*t1994*t579 + t4053*t7268) + var1[0];
  p_output1[1]=0. + t1050*t4690*t6997 + t6885*t7431 + t7123*t7456 - 0.09*(t7063*t7431 - 1.*t5322*t7456) + t7260*t7496 - 0.135*(-1.*t1050*t4053*t6997 + t1994*t7496) - 0.049*(t1050*t1994*t6997 + t4053*t7496) + var1[1];
  p_output1[2]=0. + t1050*t6885*t6955 - 1.*t4690*t6958 - 0.09*(-1.*t1050*t5322*t7001 + t1050*t6955*t7063) + t1050*t7001*t7123 + t7260*t7642 - 0.135*(t4053*t6958 + t1994*t7642) - 0.049*(-1.*t1994*t6958 + t4053*t7642) + var1[2];
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
