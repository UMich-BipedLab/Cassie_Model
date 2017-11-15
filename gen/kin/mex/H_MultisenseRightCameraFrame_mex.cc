/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:18 GMT-05:00
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
  double t1096;
  double t3985;
  double t571;
  double t4039;
  double t4719;
  double t4750;
  double t4807;
  double t4812;
  double t4845;
  double t4730;
  double t4768;
  double t4776;
  double t4852;
  double t4853;
  double t4855;
  double t4777;
  double t4779;
  double t4786;
  t1096 = Cos(var1[4]);
  t3985 = Sin(var1[3]);
  t571 = Cos(var1[3]);
  t4039 = Sin(var1[4]);
  t4719 = Cos(var1[5]);
  t4750 = Sin(var1[5]);
  t4807 = t571*t4719*t4039;
  t4812 = t3985*t4750;
  t4845 = t4807 + t4812;
  t4730 = -1.*t4719*t3985;
  t4768 = t571*t4039*t4750;
  t4776 = t4730 + t4768;
  t4852 = t4719*t3985*t4039;
  t4853 = -1.*t571*t4750;
  t4855 = t4852 + t4853;
  t4777 = t571*t4719;
  t4779 = t3985*t4039*t4750;
  t4786 = t4777 + t4779;
  p_output1[0]=t1096*t571;
  p_output1[1]=t1096*t3985;
  p_output1[2]=-1.*t4039;
  p_output1[3]=0;
  p_output1[4]=t4776;
  p_output1[5]=t4786;
  p_output1[6]=t1096*t4750;
  p_output1[7]=0;
  p_output1[8]=t4845;
  p_output1[9]=t4855;
  p_output1[10]=t1096*t4719;
  p_output1[11]=0;
  p_output1[12]=-0.035*t4776 + 0.25*t4845 + 0.052*t1096*t571 + var1[0];
  p_output1[13]=0.052*t1096*t3985 - 0.035*t4786 + 0.25*t4855 + var1[1];
  p_output1[14]=-0.052*t4039 + 0.25*t1096*t4719 - 0.035*t1096*t4750 + var1[2];
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

#include "H_MultisenseRightCameraFrame_mex.hh"

namespace SymExpression
{

void H_MultisenseRightCameraFrame_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
