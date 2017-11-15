/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:29 GMT-05:00
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
  double t1647;
  double t2586;
  double t2138;
  double t1022;
  double t2592;
  double t5177;
  double t5191;
  double t5197;
  double t5203;
  double t5209;
  double t5214;
  double t5216;
  t1647 = Cos(var1[5]);
  t2586 = Sin(var1[3]);
  t2138 = Sin(var1[4]);
  t1022 = Cos(var1[3]);
  t2592 = Sin(var1[5]);
  t5177 = Cos(var1[4]);
  t5191 = -1.*t1647*t2586;
  t5197 = t1022*t2138*t2592;
  t5203 = t5191 + t5197;
  t5209 = t1022*t1647;
  t5214 = t2586*t2138*t2592;
  t5216 = t5209 + t5214;
  p_output1[0]=-1.*t1022*t1647*t2138 - 1.*t2586*t2592;
  p_output1[1]=-1.*t1647*t2138*t2586 + t1022*t2592;
  p_output1[2]=-1.*t1647*t5177;
  p_output1[3]=0;
  p_output1[4]=t5203;
  p_output1[5]=t5216;
  p_output1[6]=t2592*t5177;
  p_output1[7]=0;
  p_output1[8]=t1022*t5177;
  p_output1[9]=t2586*t5177;
  p_output1[10]=-1.*t2138;
  p_output1[11]=0;
  p_output1[12]=0.24925*(t1022*t1647*t2138 + t2586*t2592) + 0.047*t1022*t5177 + 0.0302*t5203 + var1[0];
  p_output1[13]=0.24925*(t1647*t2138*t2586 - 1.*t1022*t2592) + 0.047*t2586*t5177 + 0.0302*t5216 + var1[1];
  p_output1[14]=-0.047*t2138 + 0.24925*t1647*t5177 + 0.0302*t2592*t5177 + var1[2];
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

#include "H_MultisenseAccelerometerFrame_mex.hh"

namespace SymExpression
{

void H_MultisenseAccelerometerFrame_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
