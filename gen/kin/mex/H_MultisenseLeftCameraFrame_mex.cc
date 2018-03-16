/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:48 GMT-04:00
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
  double t2334;
  double t3638;
  double t178;
  double t4142;
  double t4240;
  double t4533;
  double t4633;
  double t4648;
  double t4653;
  double t4310;
  double t4570;
  double t4573;
  double t4657;
  double t4662;
  double t4663;
  double t4591;
  double t4601;
  double t4616;
  t2334 = Cos(var1[4]);
  t3638 = Sin(var1[3]);
  t178 = Cos(var1[3]);
  t4142 = Sin(var1[4]);
  t4240 = Cos(var1[5]);
  t4533 = Sin(var1[5]);
  t4633 = t178*t4240*t4142;
  t4648 = t3638*t4533;
  t4653 = t4633 + t4648;
  t4310 = -1.*t4240*t3638;
  t4570 = t178*t4142*t4533;
  t4573 = t4310 + t4570;
  t4657 = t4240*t3638*t4142;
  t4662 = -1.*t178*t4533;
  t4663 = t4657 + t4662;
  t4591 = t178*t4240;
  t4601 = t3638*t4142*t4533;
  t4616 = t4591 + t4601;
  p_output1[0]=t178*t2334;
  p_output1[1]=t2334*t3638;
  p_output1[2]=-1.*t4142;
  p_output1[3]=0;
  p_output1[4]=t4573;
  p_output1[5]=t4616;
  p_output1[6]=t2334*t4533;
  p_output1[7]=0;
  p_output1[8]=t4653;
  p_output1[9]=t4663;
  p_output1[10]=t2334*t4240;
  p_output1[11]=0;
  p_output1[12]=0.052*t178*t2334 + 0.035*t4573 + 0.25*t4653 + var1[0];
  p_output1[13]=0.052*t2334*t3638 + 0.035*t4616 + 0.25*t4663 + var1[1];
  p_output1[14]=-0.052*t4142 + 0.25*t2334*t4240 + 0.035*t2334*t4533 + var1[2];
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

#include "H_MultisenseLeftCameraFrame_mex.hh"

namespace SymExpression
{

void H_MultisenseLeftCameraFrame_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
