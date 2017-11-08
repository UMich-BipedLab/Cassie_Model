/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:54 GMT-05:00
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
  double t609;
  double t632;
  double t582;
  double t614;
  double t633;
  double t564;
  double t652;
  double t679;
  double t646;
  double t648;
  double t651;
  double t627;
  double t636;
  double t639;
  double t671;
  double t672;
  double t674;
  double t660;
  double t662;
  double t663;
  double t753;
  double t759;
  double t762;
  double t769;
  double t780;
  double t781;
  t609 = Cos(var1[5]);
  t632 = Sin(var1[3]);
  t582 = Cos(var1[3]);
  t614 = Sin(var1[4]);
  t633 = Sin(var1[5]);
  t564 = Cos(var1[6]);
  t652 = Sin(var1[6]);
  t679 = Cos(var1[4]);
  t646 = -1.*t609*t632;
  t648 = t582*t614*t633;
  t651 = t646 + t648;
  t627 = t582*t609*t614;
  t636 = t632*t633;
  t639 = t627 + t636;
  t671 = t582*t609;
  t672 = t632*t614*t633;
  t674 = t671 + t672;
  t660 = t609*t632*t614;
  t662 = -1.*t582*t633;
  t663 = t660 + t662;
  t753 = -1.*t564;
  t759 = 1. + t753;
  t762 = 0.135*t759;
  t769 = 0. + t762;
  t780 = -0.135*t652;
  t781 = 0. + t780;
  p_output1[0]=-1.*t564*t639 + t651*t652;
  p_output1[1]=-1.*t564*t663 + t652*t674;
  p_output1[2]=-1.*t564*t609*t679 + t633*t652*t679;
  p_output1[3]=0.;
  p_output1[4]=t582*t679;
  p_output1[5]=t632*t679;
  p_output1[6]=-1.*t614;
  p_output1[7]=0.;
  p_output1[8]=-1.*t564*t651 - 1.*t639*t652;
  p_output1[9]=-1.*t652*t663 - 1.*t564*t674;
  p_output1[10]=-1.*t564*t633*t679 - 1.*t609*t652*t679;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*(t564*t651 + t639*t652) - 0.09*(t564*t639 - 1.*t651*t652) - 0.049*t582*t679 + t651*t769 + t639*t781 + var1[0];
  p_output1[13]=0. + 0.135*(t652*t663 + t564*t674) - 0.09*(t564*t663 - 1.*t652*t674) - 0.049*t632*t679 + t674*t769 + t663*t781 + var1[1];
  p_output1[14]=0. + 0.049*t614 + 0.135*(t564*t633*t679 + t609*t652*t679) - 0.09*(t564*t609*t679 - 1.*t633*t652*t679) + t633*t679*t769 + t609*t679*t781 + var1[2];
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

#include "H_hip_rotation_left_mex.hh"

namespace SymExpression
{

void H_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
