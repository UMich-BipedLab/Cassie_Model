/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:39 GMT-04:00
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
  double t468;
  double t512;
  double t495;
  double t466;
  double t520;
  double t552;
  double t563;
  double t564;
  double t565;
  double t570;
  double t571;
  double t574;
  t468 = Cos(var1[5]);
  t512 = Sin(var1[3]);
  t495 = Sin(var1[4]);
  t466 = Cos(var1[3]);
  t520 = Sin(var1[5]);
  t552 = Cos(var1[4]);
  t563 = -1.*t468*t512;
  t564 = t466*t495*t520;
  t565 = t563 + t564;
  t570 = t466*t468;
  t571 = t512*t495*t520;
  t574 = t570 + t571;
  p_output1[0]=-1.*t466*t468*t495 - 1.*t512*t520;
  p_output1[1]=-1.*t468*t495*t512 + t466*t520;
  p_output1[2]=-1.*t468*t552;
  p_output1[3]=0;
  p_output1[4]=t565;
  p_output1[5]=t574;
  p_output1[6]=t520*t552;
  p_output1[7]=0;
  p_output1[8]=t466*t552;
  p_output1[9]=t512*t552;
  p_output1[10]=-1.*t495;
  p_output1[11]=0;
  p_output1[12]=0.021*t466*t552 - 0.135*t565 + var1[0];
  p_output1[13]=0.021*t512*t552 - 0.135*t574 + var1[1];
  p_output1[14]=-0.021*t495 - 0.135*t520*t552 + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "H_fixed_right.hh"

namespace SymExpression
{

void H_fixed_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
