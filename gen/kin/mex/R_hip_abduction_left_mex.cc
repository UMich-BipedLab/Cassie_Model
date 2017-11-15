/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:56 GMT-05:00
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
  double t220;
  double t234;
  double t204;
  double t244;
  double t249;
  double t254;
  double t248;
  double t270;
  double t266;
  double t268;
  double t269;
  double t250;
  double t257;
  double t258;
  double t279;
  double t280;
  double t281;
  double t273;
  double t274;
  double t276;
  t220 = Cos(var1[4]);
  t234 = Sin(var1[3]);
  t204 = Cos(var1[3]);
  t244 = Sin(var1[4]);
  t249 = Cos(var1[5]);
  t254 = Sin(var1[5]);
  t248 = Cos(var1[6]);
  t270 = Sin(var1[6]);
  t266 = t204*t249*t244;
  t268 = t234*t254;
  t269 = t266 + t268;
  t250 = -1.*t249*t234;
  t257 = t204*t244*t254;
  t258 = t250 + t257;
  t279 = t249*t234*t244;
  t280 = -1.*t204*t254;
  t281 = t279 + t280;
  t273 = t204*t249;
  t274 = t234*t244*t254;
  t276 = t273 + t274;
  p_output1[0]=t204*t220;
  p_output1[1]=t220*t234;
  p_output1[2]=-1.*t244;
  p_output1[3]=t248*t258 + t269*t270;
  p_output1[4]=t248*t276 + t270*t281;
  p_output1[5]=t220*t248*t254 + t220*t249*t270;
  p_output1[6]=t248*t269 - 1.*t258*t270;
  p_output1[7]=-1.*t270*t276 + t248*t281;
  p_output1[8]=t220*t248*t249 - 1.*t220*t254*t270;
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

#include "R_hip_abduction_left_mex.hh"

namespace SymExpression
{

void R_hip_abduction_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
