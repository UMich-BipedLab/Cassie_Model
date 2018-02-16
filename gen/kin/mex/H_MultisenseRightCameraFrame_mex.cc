/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:17 GMT-05:00
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
  double t1524;
  double t3455;
  double t1441;
  double t3689;
  double t3817;
  double t4896;
  double t4997;
  double t5004;
  double t5006;
  double t4735;
  double t4943;
  double t4952;
  double t5010;
  double t5015;
  double t5020;
  double t4965;
  double t4975;
  double t4983;
  t1524 = Cos(var1[4]);
  t3455 = Sin(var1[3]);
  t1441 = Cos(var1[3]);
  t3689 = Sin(var1[4]);
  t3817 = Cos(var1[5]);
  t4896 = Sin(var1[5]);
  t4997 = t1441*t3817*t3689;
  t5004 = t3455*t4896;
  t5006 = t4997 + t5004;
  t4735 = -1.*t3817*t3455;
  t4943 = t1441*t3689*t4896;
  t4952 = t4735 + t4943;
  t5010 = t3817*t3455*t3689;
  t5015 = -1.*t1441*t4896;
  t5020 = t5010 + t5015;
  t4965 = t1441*t3817;
  t4975 = t3455*t3689*t4896;
  t4983 = t4965 + t4975;
  p_output1[0]=t1441*t1524;
  p_output1[1]=t1524*t3455;
  p_output1[2]=-1.*t3689;
  p_output1[3]=0;
  p_output1[4]=t4952;
  p_output1[5]=t4983;
  p_output1[6]=t1524*t4896;
  p_output1[7]=0;
  p_output1[8]=t5006;
  p_output1[9]=t5020;
  p_output1[10]=t1524*t3817;
  p_output1[11]=0;
  p_output1[12]=0.052*t1441*t1524 - 0.035*t4952 + 0.25*t5006 + var1[0];
  p_output1[13]=0.052*t1524*t3455 - 0.035*t4983 + 0.25*t5020 + var1[1];
  p_output1[14]=-0.052*t3689 + 0.25*t1524*t3817 - 0.035*t1524*t4896 + var1[2];
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
