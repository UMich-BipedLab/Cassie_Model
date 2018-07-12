/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:32 GMT-04:00
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
  double t833;
  double t2269;
  double t419;
  double t988;
  double t2271;
  double t403;
  double t2943;
  double t4284;
  double t1821;
  double t2579;
  double t2892;
  double t3256;
  double t3393;
  double t3437;
  double t4436;
  double t4471;
  double t3638;
  double t3903;
  double t4007;
  double t4079;
  double t4084;
  double t4131;
  double t4479;
  double t4526;
  double t4713;
  double t4840;
  double t4902;
  double t4907;
  double t5047;
  double t5080;
  double t5092;
  t833 = Cos(var1[5]);
  t2269 = Sin(var1[3]);
  t419 = Cos(var1[3]);
  t988 = Sin(var1[4]);
  t2271 = Sin(var1[5]);
  t403 = Cos(var1[13]);
  t2943 = Sin(var1[13]);
  t4284 = Cos(var1[4]);
  t1821 = t419*t833*t988;
  t2579 = t2269*t2271;
  t2892 = t1821 + t2579;
  t3256 = -1.*t833*t2269;
  t3393 = t419*t988*t2271;
  t3437 = t3256 + t3393;
  t4436 = Cos(var1[14]);
  t4471 = Sin(var1[14]);
  t3638 = t833*t2269*t988;
  t3903 = -1.*t419*t2271;
  t4007 = t3638 + t3903;
  t4079 = t419*t833;
  t4084 = t2269*t988*t2271;
  t4131 = t4079 + t4084;
  t4479 = t2943*t2892;
  t4526 = t403*t3437;
  t4713 = t4479 + t4526;
  t4840 = t2943*t4007;
  t4902 = t403*t4131;
  t4907 = t4840 + t4902;
  t5047 = t4284*t833*t2943;
  t5080 = t403*t4284*t2271;
  t5092 = t5047 + t5080;
  p_output1[0]=t2943*t3437 - 1.*t2892*t403;
  p_output1[1]=-1.*t4007*t403 + t2943*t4131;
  p_output1[2]=t2271*t2943*t4284 - 1.*t403*t4284*t833;
  p_output1[3]=t419*t4284*t4436 + t4471*t4713;
  p_output1[4]=t2269*t4284*t4436 + t4471*t4907;
  p_output1[5]=t4471*t5092 - 1.*t4436*t988;
  p_output1[6]=t419*t4284*t4471 - 1.*t4436*t4713;
  p_output1[7]=t2269*t4284*t4471 - 1.*t4436*t4907;
  p_output1[8]=-1.*t4436*t5092 - 1.*t4471*t988;
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
