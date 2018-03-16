/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:13 GMT-04:00
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
  double t6593;
  double t1938;
  double t6632;
  double t6616;
  double t6650;
  double t6660;
  double t6647;
  double t6671;
  double t6657;
  double t6663;
  double t6664;
  double t6673;
  double t6674;
  double t6677;
  double t6688;
  double t6689;
  double t6690;
  double t6693;
  double t6696;
  double t6697;
  t6593 = Cos(var1[4]);
  t1938 = Cos(var1[3]);
  t6632 = Sin(var1[4]);
  t6616 = Sin(var1[3]);
  t6650 = Cos(var1[5]);
  t6660 = Sin(var1[5]);
  t6647 = Sin(var1[13]);
  t6671 = Cos(var1[13]);
  t6657 = t1938*t6650*t6632;
  t6663 = t6616*t6660;
  t6664 = t6657 + t6663;
  t6673 = -1.*t6650*t6616;
  t6674 = t1938*t6632*t6660;
  t6677 = t6673 + t6674;
  t6688 = t6650*t6616*t6632;
  t6689 = -1.*t1938*t6660;
  t6690 = t6688 + t6689;
  t6693 = t1938*t6650;
  t6696 = t6616*t6632*t6660;
  t6697 = t6693 + t6696;
  p_output1[0]=t1938*t6593;
  p_output1[1]=t6593*t6616;
  p_output1[2]=-1.*t6632;
  p_output1[3]=t6647*t6664 + t6671*t6677;
  p_output1[4]=t6647*t6690 + t6671*t6697;
  p_output1[5]=t6593*t6647*t6650 + t6593*t6660*t6671;
  p_output1[6]=t6664*t6671 - 1.*t6647*t6677;
  p_output1[7]=t6671*t6690 - 1.*t6647*t6697;
  p_output1[8]=-1.*t6593*t6647*t6660 + t6593*t6650*t6671;
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

#include "R_hip_abduction_right_mex.hh"

namespace SymExpression
{

void R_hip_abduction_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
