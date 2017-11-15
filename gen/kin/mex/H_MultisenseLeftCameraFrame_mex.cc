/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:14 GMT-05:00
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
  double t1181;
  double t3679;
  double t936;
  double t3810;
  double t3865;
  double t3901;
  double t4026;
  double t4100;
  double t4116;
  double t3874;
  double t3909;
  double t3927;
  double t4124;
  double t4134;
  double t4171;
  double t3948;
  double t3960;
  double t3996;
  t1181 = Cos(var1[4]);
  t3679 = Sin(var1[3]);
  t936 = Cos(var1[3]);
  t3810 = Sin(var1[4]);
  t3865 = Cos(var1[5]);
  t3901 = Sin(var1[5]);
  t4026 = t936*t3865*t3810;
  t4100 = t3679*t3901;
  t4116 = t4026 + t4100;
  t3874 = -1.*t3865*t3679;
  t3909 = t936*t3810*t3901;
  t3927 = t3874 + t3909;
  t4124 = t3865*t3679*t3810;
  t4134 = -1.*t936*t3901;
  t4171 = t4124 + t4134;
  t3948 = t936*t3865;
  t3960 = t3679*t3810*t3901;
  t3996 = t3948 + t3960;
  p_output1[0]=t1181*t936;
  p_output1[1]=t1181*t3679;
  p_output1[2]=-1.*t3810;
  p_output1[3]=0;
  p_output1[4]=t3927;
  p_output1[5]=t3996;
  p_output1[6]=t1181*t3901;
  p_output1[7]=0;
  p_output1[8]=t4116;
  p_output1[9]=t4171;
  p_output1[10]=t1181*t3865;
  p_output1[11]=0;
  p_output1[12]=0.035*t3927 + 0.25*t4116 + 0.052*t1181*t936 + var1[0];
  p_output1[13]=0.052*t1181*t3679 + 0.035*t3996 + 0.25*t4171 + var1[1];
  p_output1[14]=-0.052*t3810 + 0.25*t1181*t3865 + 0.035*t1181*t3901 + var1[2];
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
