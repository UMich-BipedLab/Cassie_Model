/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:45 GMT-05:00
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
  double t1543;
  double t3758;
  double t1047;
  double t1932;
  double t4101;
  double t6667;
  double t2008;
  double t6613;
  double t6638;
  double t1043;
  double t6680;
  double t6702;
  double t6707;
  double t586;
  double t6726;
  double t6730;
  double t6741;
  double t6743;
  double t6774;
  double t6775;
  double t6778;
  double t6795;
  double t6797;
  double t6805;
  double t6645;
  double t6710;
  double t6715;
  double t6742;
  double t6744;
  double t6757;
  double t6759;
  double t6760;
  double t6763;
  double t6786;
  double t6806;
  double t6809;
  double t6817;
  double t6818;
  double t6819;
  double t6826;
  double t6830;
  double t6832;
  double t6839;
  double t6841;
  double t6842;
  double t6844;
  double t6845;
  double t6850;
  double t6856;
  double t6861;
  double t6863;
  t1543 = Cos(var1[5]);
  t3758 = Sin(var1[3]);
  t1047 = Cos(var1[3]);
  t1932 = Sin(var1[4]);
  t4101 = Sin(var1[5]);
  t6667 = Sin(var1[13]);
  t2008 = t1047*t1543*t1932;
  t6613 = t3758*t4101;
  t6638 = t2008 + t6613;
  t1043 = Cos(var1[13]);
  t6680 = -1.*t1543*t3758;
  t6702 = t1047*t1932*t4101;
  t6707 = t6680 + t6702;
  t586 = Cos(var1[15]);
  t6726 = Sin(var1[15]);
  t6730 = Cos(var1[14]);
  t6741 = Cos(var1[4]);
  t6743 = Sin(var1[14]);
  t6774 = t1543*t3758*t1932;
  t6775 = -1.*t1047*t4101;
  t6778 = t6774 + t6775;
  t6795 = t1047*t1543;
  t6797 = t3758*t1932*t4101;
  t6805 = t6795 + t6797;
  t6645 = t1043*t6638;
  t6710 = -1.*t6667*t6707;
  t6715 = t6645 + t6710;
  t6742 = t6730*t1047*t6741;
  t6744 = t6667*t6638;
  t6757 = t1043*t6707;
  t6759 = t6744 + t6757;
  t6760 = t6743*t6759;
  t6763 = t6742 + t6760;
  t6786 = t1043*t6778;
  t6806 = -1.*t6667*t6805;
  t6809 = t6786 + t6806;
  t6817 = t6730*t6741*t3758;
  t6818 = t6667*t6778;
  t6819 = t1043*t6805;
  t6826 = t6818 + t6819;
  t6830 = t6743*t6826;
  t6832 = t6817 + t6830;
  t6839 = t1043*t6741*t1543;
  t6841 = -1.*t6741*t6667*t4101;
  t6842 = t6839 + t6841;
  t6844 = -1.*t6730*t1932;
  t6845 = t6741*t1543*t6667;
  t6850 = t1043*t6741*t4101;
  t6856 = t6845 + t6850;
  t6861 = t6743*t6856;
  t6863 = t6844 + t6861;
  p_output1[0]=-1.*t586*t6715 + t6726*t6763;
  p_output1[1]=-1.*t586*t6809 + t6726*t6832;
  p_output1[2]=-1.*t586*t6842 + t6726*t6863;
  p_output1[3]=t6715*t6726 + t586*t6763;
  p_output1[4]=t6726*t6809 + t586*t6832;
  p_output1[5]=t6726*t6842 + t586*t6863;
  p_output1[6]=t1047*t6741*t6743 - 1.*t6730*t6759;
  p_output1[7]=t3758*t6741*t6743 - 1.*t6730*t6826;
  p_output1[8]=-1.*t1932*t6743 - 1.*t6730*t6856;
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

#include "R_knee_joint_right_mex.hh"

namespace SymExpression
{

void R_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
