/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:40 GMT-05:00
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
  double t6276;
  double t6299;
  double t6261;
  double t6285;
  double t6300;
  double t3510;
  double t6317;
  double t6364;
  double t6290;
  double t6303;
  double t6314;
  double t6320;
  double t6321;
  double t6327;
  double t6377;
  double t6379;
  double t6338;
  double t6345;
  double t6347;
  double t6350;
  double t6351;
  double t6352;
  double t6387;
  double t6389;
  double t6390;
  double t6394;
  double t6398;
  double t6399;
  double t6412;
  double t6417;
  double t6418;
  t6276 = Cos(var1[5]);
  t6299 = Sin(var1[3]);
  t6261 = Cos(var1[3]);
  t6285 = Sin(var1[4]);
  t6300 = Sin(var1[5]);
  t3510 = Cos(var1[13]);
  t6317 = Sin(var1[13]);
  t6364 = Cos(var1[4]);
  t6290 = t6261*t6276*t6285;
  t6303 = t6299*t6300;
  t6314 = t6290 + t6303;
  t6320 = -1.*t6276*t6299;
  t6321 = t6261*t6285*t6300;
  t6327 = t6320 + t6321;
  t6377 = Cos(var1[14]);
  t6379 = Sin(var1[14]);
  t6338 = t6276*t6299*t6285;
  t6345 = -1.*t6261*t6300;
  t6347 = t6338 + t6345;
  t6350 = t6261*t6276;
  t6351 = t6299*t6285*t6300;
  t6352 = t6350 + t6351;
  t6387 = t6317*t6314;
  t6389 = t3510*t6327;
  t6390 = t6387 + t6389;
  t6394 = t6317*t6347;
  t6398 = t3510*t6352;
  t6399 = t6394 + t6398;
  t6412 = t6364*t6276*t6317;
  t6417 = t3510*t6364*t6300;
  t6418 = t6412 + t6417;
  p_output1[0]=-1.*t3510*t6314 + t6317*t6327;
  p_output1[1]=-1.*t3510*t6347 + t6317*t6352;
  p_output1[2]=-1.*t3510*t6276*t6364 + t6300*t6317*t6364;
  p_output1[3]=t6261*t6364*t6377 + t6379*t6390;
  p_output1[4]=t6299*t6364*t6377 + t6379*t6399;
  p_output1[5]=-1.*t6285*t6377 + t6379*t6418;
  p_output1[6]=t6261*t6364*t6379 - 1.*t6377*t6390;
  p_output1[7]=t6299*t6364*t6379 - 1.*t6377*t6399;
  p_output1[8]=-1.*t6285*t6379 - 1.*t6377*t6418;
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

#include "R_hip_flexion_right_mex.hh"

namespace SymExpression
{

void R_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
