/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:31 GMT-05:00
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
  double t1142;
  double t6774;
  double t6777;
  double t6775;
  double t6778;
  double t6730;
  double t6738;
  double t6751;
  double t6757;
  double t6769;
  double t6776;
  double t6779;
  double t6780;
  double t6782;
  double t6789;
  double t6790;
  double t6793;
  double t6704;
  double t6801;
  double t6802;
  double t6803;
  double t6756;
  double t6761;
  double t6766;
  double t6770;
  double t6773;
  double t6783;
  double t6784;
  double t6785;
  double t6787;
  double t6795;
  double t6797;
  double t6798;
  double t6823;
  double t6825;
  double t6826;
  double t6830;
  double t6831;
  double t6832;
  double t6834;
  double t6835;
  double t6836;
  double t6856;
  double t6857;
  double t6858;
  t1142 = Cos(var1[3]);
  t6774 = Cos(var1[5]);
  t6777 = Sin(var1[3]);
  t6775 = Sin(var1[4]);
  t6778 = Sin(var1[5]);
  t6730 = Cos(var1[14]);
  t6738 = -1.*t6730;
  t6751 = 1. + t6738;
  t6757 = Sin(var1[14]);
  t6769 = Sin(var1[13]);
  t6776 = t1142*t6774*t6775;
  t6779 = t6777*t6778;
  t6780 = t6776 + t6779;
  t6782 = Cos(var1[13]);
  t6789 = -1.*t6774*t6777;
  t6790 = t1142*t6775*t6778;
  t6793 = t6789 + t6790;
  t6704 = Cos(var1[4]);
  t6801 = t6769*t6780;
  t6802 = t6782*t6793;
  t6803 = t6801 + t6802;
  t6756 = -0.049*t6751;
  t6761 = -0.135*t6757;
  t6766 = 0. + t6756 + t6761;
  t6770 = 0.135*t6769;
  t6773 = 0. + t6770;
  t6783 = -1.*t6782;
  t6784 = 1. + t6783;
  t6785 = -0.135*t6784;
  t6787 = 0. + t6785;
  t6795 = -0.135*t6751;
  t6797 = 0.049*t6757;
  t6798 = 0. + t6795 + t6797;
  t6823 = t6774*t6777*t6775;
  t6825 = -1.*t1142*t6778;
  t6826 = t6823 + t6825;
  t6830 = t1142*t6774;
  t6831 = t6777*t6775*t6778;
  t6832 = t6830 + t6831;
  t6834 = t6769*t6826;
  t6835 = t6782*t6832;
  t6836 = t6834 + t6835;
  t6856 = t6704*t6774*t6769;
  t6857 = t6782*t6704*t6778;
  t6858 = t6856 + t6857;
  p_output1[0]=0. + t1142*t6704*t6766 + t6773*t6780 + t6787*t6793 - 0.09*(t6780*t6782 - 1.*t6769*t6793) + t6798*t6803 - 0.135*(-1.*t1142*t6704*t6757 + t6730*t6803) - 0.049*(t1142*t6704*t6730 + t6757*t6803) + var1[0];
  p_output1[1]=0. + t6704*t6766*t6777 + t6773*t6826 + t6787*t6832 - 0.09*(t6782*t6826 - 1.*t6769*t6832) + t6798*t6836 - 0.135*(-1.*t6704*t6757*t6777 + t6730*t6836) - 0.049*(t6704*t6730*t6777 + t6757*t6836) + var1[1];
  p_output1[2]=0. + t6704*t6773*t6774 - 1.*t6766*t6775 - 0.09*(-1.*t6704*t6769*t6778 + t6704*t6774*t6782) + t6704*t6778*t6787 + t6798*t6858 - 0.135*(t6757*t6775 + t6730*t6858) - 0.049*(-1.*t6730*t6775 + t6757*t6858) + var1[2];
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
