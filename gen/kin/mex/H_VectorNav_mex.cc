/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:35:05 GMT-04:00
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
  double t729;
  double t2456;
  double t300;
  double t3654;
  double t3741;
  double t4004;
  double t4059;
  double t4078;
  double t4080;
  double t4098;
  double t4113;
  double t4135;
  t729 = Cos(var1[4]);
  t2456 = Sin(var1[3]);
  t300 = Cos(var1[3]);
  t3654 = Sin(var1[4]);
  t3741 = Cos(var1[5]);
  t4004 = Sin(var1[5]);
  t4059 = t300*t3741*t3654;
  t4078 = t2456*t4004;
  t4080 = t4059 + t4078;
  t4098 = t3741*t2456*t3654;
  t4113 = -1.*t300*t4004;
  t4135 = t4098 + t4113;
  p_output1[0]=t300*t729;
  p_output1[1]=t2456*t729;
  p_output1[2]=-1.*t3654;
  p_output1[3]=0;
  p_output1[4]=-1.*t2456*t3741 + t300*t3654*t4004;
  p_output1[5]=t300*t3741 + t2456*t3654*t4004;
  p_output1[6]=t4004*t729;
  p_output1[7]=0;
  p_output1[8]=t4080;
  p_output1[9]=t4135;
  p_output1[10]=t3741*t729;
  p_output1[11]=0;
  p_output1[12]=-0.07996*t4080 + 0.03155*t300*t729 + var1[0];
  p_output1[13]=-0.07996*t4135 + 0.03155*t2456*t729 + var1[1];
  p_output1[14]=-0.03155*t3654 - 0.07996*t3741*t729 + var1[2];
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

#include "H_VectorNav_mex.hh"

namespace SymExpression
{

void H_VectorNav_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
