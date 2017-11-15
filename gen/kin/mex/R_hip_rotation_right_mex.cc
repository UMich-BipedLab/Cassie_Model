/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:35 GMT-05:00
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
  double t4301;
  double t6914;
  double t2776;
  double t4614;
  double t6920;
  double t1786;
  double t6940;
  double t6987;
  double t6856;
  double t6923;
  double t6924;
  double t6946;
  double t6949;
  double t6950;
  double t6998;
  double t7001;
  double t6963;
  double t6967;
  double t6971;
  double t6978;
  double t6979;
  double t6980;
  double t7002;
  double t7008;
  double t7010;
  double t7014;
  double t7015;
  double t7018;
  double t7034;
  double t7036;
  double t7039;
  t4301 = Cos(var1[5]);
  t6914 = Sin(var1[3]);
  t2776 = Cos(var1[3]);
  t4614 = Sin(var1[4]);
  t6920 = Sin(var1[5]);
  t1786 = Cos(var1[13]);
  t6940 = Sin(var1[13]);
  t6987 = Cos(var1[4]);
  t6856 = t2776*t4301*t4614;
  t6923 = t6914*t6920;
  t6924 = t6856 + t6923;
  t6946 = -1.*t4301*t6914;
  t6949 = t2776*t4614*t6920;
  t6950 = t6946 + t6949;
  t6998 = Cos(var1[14]);
  t7001 = Sin(var1[14]);
  t6963 = t4301*t6914*t4614;
  t6967 = -1.*t2776*t6920;
  t6971 = t6963 + t6967;
  t6978 = t2776*t4301;
  t6979 = t6914*t4614*t6920;
  t6980 = t6978 + t6979;
  t7002 = t6940*t6924;
  t7008 = t1786*t6950;
  t7010 = t7002 + t7008;
  t7014 = t6940*t6971;
  t7015 = t1786*t6980;
  t7018 = t7014 + t7015;
  t7034 = t6987*t4301*t6940;
  t7036 = t1786*t6987*t6920;
  t7039 = t7034 + t7036;
  p_output1[0]=-1.*t1786*t6924 + t6940*t6950;
  p_output1[1]=-1.*t1786*t6971 + t6940*t6980;
  p_output1[2]=-1.*t1786*t4301*t6987 + t6920*t6940*t6987;
  p_output1[3]=t2776*t6987*t6998 + t7001*t7010;
  p_output1[4]=t6914*t6987*t6998 + t7001*t7018;
  p_output1[5]=-1.*t4614*t6998 + t7001*t7039;
  p_output1[6]=t2776*t6987*t7001 - 1.*t6998*t7010;
  p_output1[7]=t6914*t6987*t7001 - 1.*t6998*t7018;
  p_output1[8]=-1.*t4614*t7001 - 1.*t6998*t7039;
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

#include "R_hip_rotation_right_mex.hh"

namespace SymExpression
{

void R_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
