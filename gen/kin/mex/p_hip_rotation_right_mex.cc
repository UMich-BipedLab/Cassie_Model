/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:14 GMT-04:00
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
  double t6667;
  double t6758;
  double t6761;
  double t6759;
  double t6762;
  double t6715;
  double t6731;
  double t6737;
  double t6745;
  double t6755;
  double t6760;
  double t6763;
  double t6765;
  double t6768;
  double t6776;
  double t6779;
  double t6780;
  double t6707;
  double t6785;
  double t6786;
  double t6787;
  double t6739;
  double t6752;
  double t6753;
  double t6756;
  double t6757;
  double t6771;
  double t6772;
  double t6773;
  double t6775;
  double t6782;
  double t6783;
  double t6784;
  double t6805;
  double t6806;
  double t6807;
  double t6809;
  double t6811;
  double t6812;
  double t6817;
  double t6818;
  double t6820;
  double t6845;
  double t6846;
  double t6847;
  t6667 = Cos(var1[3]);
  t6758 = Cos(var1[5]);
  t6761 = Sin(var1[3]);
  t6759 = Sin(var1[4]);
  t6762 = Sin(var1[5]);
  t6715 = Cos(var1[14]);
  t6731 = -1.*t6715;
  t6737 = 1. + t6731;
  t6745 = Sin(var1[14]);
  t6755 = Sin(var1[13]);
  t6760 = t6667*t6758*t6759;
  t6763 = t6761*t6762;
  t6765 = t6760 + t6763;
  t6768 = Cos(var1[13]);
  t6776 = -1.*t6758*t6761;
  t6779 = t6667*t6759*t6762;
  t6780 = t6776 + t6779;
  t6707 = Cos(var1[4]);
  t6785 = t6755*t6765;
  t6786 = t6768*t6780;
  t6787 = t6785 + t6786;
  t6739 = -0.049*t6737;
  t6752 = -0.135*t6745;
  t6753 = 0. + t6739 + t6752;
  t6756 = 0.135*t6755;
  t6757 = 0. + t6756;
  t6771 = -1.*t6768;
  t6772 = 1. + t6771;
  t6773 = -0.135*t6772;
  t6775 = 0. + t6773;
  t6782 = -0.135*t6737;
  t6783 = 0.049*t6745;
  t6784 = 0. + t6782 + t6783;
  t6805 = t6758*t6761*t6759;
  t6806 = -1.*t6667*t6762;
  t6807 = t6805 + t6806;
  t6809 = t6667*t6758;
  t6811 = t6761*t6759*t6762;
  t6812 = t6809 + t6811;
  t6817 = t6755*t6807;
  t6818 = t6768*t6812;
  t6820 = t6817 + t6818;
  t6845 = t6707*t6758*t6755;
  t6846 = t6768*t6707*t6762;
  t6847 = t6845 + t6846;
  p_output1[0]=0. + t6667*t6707*t6753 + t6757*t6765 + t6775*t6780 - 0.09*(t6765*t6768 - 1.*t6755*t6780) + t6784*t6787 - 0.135*(-1.*t6667*t6707*t6745 + t6715*t6787) - 0.049*(t6667*t6707*t6715 + t6745*t6787) + var1[0];
  p_output1[1]=0. + t6707*t6753*t6761 + t6757*t6807 + t6775*t6812 - 0.09*(t6768*t6807 - 1.*t6755*t6812) + t6784*t6820 - 0.135*(-1.*t6707*t6745*t6761 + t6715*t6820) - 0.049*(t6707*t6715*t6761 + t6745*t6820) + var1[1];
  p_output1[2]=0. + t6707*t6757*t6758 - 1.*t6753*t6759 - 0.09*(-1.*t6707*t6755*t6762 + t6707*t6758*t6768) + t6707*t6762*t6775 + t6784*t6847 - 0.135*(t6745*t6759 + t6715*t6847) - 0.049*(-1.*t6715*t6759 + t6745*t6847) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_hip_rotation_right_mex.hh"

namespace SymExpression
{

void p_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
