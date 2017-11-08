/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:56 GMT-05:00
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
  double t713;
  double t769;
  double t707;
  double t729;
  double t777;
  double t695;
  double t810;
  double t861;
  double t797;
  double t799;
  double t809;
  double t762;
  double t786;
  double t789;
  double t838;
  double t846;
  double t854;
  double t827;
  double t829;
  double t832;
  t713 = Cos(var1[5]);
  t769 = Sin(var1[3]);
  t707 = Cos(var1[3]);
  t729 = Sin(var1[4]);
  t777 = Sin(var1[5]);
  t695 = Cos(var1[6]);
  t810 = Sin(var1[6]);
  t861 = Cos(var1[4]);
  t797 = -1.*t713*t769;
  t799 = t707*t729*t777;
  t809 = t797 + t799;
  t762 = t707*t713*t729;
  t786 = t769*t777;
  t789 = t762 + t786;
  t838 = t707*t713;
  t846 = t769*t729*t777;
  t854 = t838 + t846;
  t827 = t713*t769*t729;
  t829 = -1.*t707*t777;
  t832 = t827 + t829;
  p_output1[0]=-1.*t695*t789 + t809*t810;
  p_output1[1]=-1.*t695*t832 + t810*t854;
  p_output1[2]=-1.*t695*t713*t861 + t777*t810*t861;
  p_output1[3]=t707*t861;
  p_output1[4]=t769*t861;
  p_output1[5]=-1.*t729;
  p_output1[6]=-1.*t695*t809 - 1.*t789*t810;
  p_output1[7]=-1.*t810*t832 - 1.*t695*t854;
  p_output1[8]=-1.*t695*t777*t861 - 1.*t713*t810*t861;
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

#include "R_hip_rotation_left_mex.hh"

namespace SymExpression
{

void R_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
