/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:33 GMT-05:00
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
  double t121;
  double t1044;
  double t120;
  double t414;
  double t2407;
  double t119;
  double t2760;
  double t6897;
  double t825;
  double t2623;
  double t2758;
  double t2764;
  double t2768;
  double t2772;
  double t6908;
  double t6910;
  double t2784;
  double t2788;
  double t2997;
  double t4282;
  double t4301;
  double t4832;
  double t6914;
  double t6915;
  double t6917;
  double t6923;
  double t6924;
  double t6926;
  double t6933;
  double t6936;
  double t6937;
  double t6959;
  double t6961;
  double t6909;
  double t6918;
  double t6920;
  double t6962;
  double t6963;
  double t6964;
  double t6966;
  double t6967;
  double t6969;
  double t6970;
  double t6971;
  double t6975;
  double t6978;
  double t6979;
  double t6980;
  double t6922;
  double t6927;
  double t6929;
  double t6931;
  double t6938;
  double t6940;
  t121 = Cos(var1[5]);
  t1044 = Sin(var1[3]);
  t120 = Cos(var1[3]);
  t414 = Sin(var1[4]);
  t2407 = Sin(var1[5]);
  t119 = Cos(var1[13]);
  t2760 = Sin(var1[13]);
  t6897 = Cos(var1[4]);
  t825 = t120*t121*t414;
  t2623 = t1044*t2407;
  t2758 = t825 + t2623;
  t2764 = -1.*t121*t1044;
  t2768 = t120*t414*t2407;
  t2772 = t2764 + t2768;
  t6908 = Cos(var1[14]);
  t6910 = Sin(var1[14]);
  t2784 = t121*t1044*t414;
  t2788 = -1.*t120*t2407;
  t2997 = t2784 + t2788;
  t4282 = t120*t121;
  t4301 = t1044*t414*t2407;
  t4832 = t4282 + t4301;
  t6914 = t2760*t2758;
  t6915 = t119*t2772;
  t6917 = t6914 + t6915;
  t6923 = t2760*t2997;
  t6924 = t119*t4832;
  t6926 = t6923 + t6924;
  t6933 = t6897*t121*t2760;
  t6936 = t119*t6897*t2407;
  t6937 = t6933 + t6936;
  t6959 = -1.*t6908;
  t6961 = 1. + t6959;
  t6909 = t6908*t120*t6897;
  t6918 = t6910*t6917;
  t6920 = t6909 + t6918;
  t6962 = -0.049*t6961;
  t6963 = -0.135*t6910;
  t6964 = 0. + t6962 + t6963;
  t6966 = 0.135*t2760;
  t6967 = 0. + t6966;
  t6969 = -1.*t119;
  t6970 = 1. + t6969;
  t6971 = -0.135*t6970;
  t6975 = 0. + t6971;
  t6978 = -0.135*t6961;
  t6979 = 0.049*t6910;
  t6980 = 0. + t6978 + t6979;
  t6922 = t6908*t6897*t1044;
  t6927 = t6910*t6926;
  t6929 = t6922 + t6927;
  t6931 = -1.*t6908*t414;
  t6938 = t6910*t6937;
  t6940 = t6931 + t6938;
  p_output1[0]=-1.*t119*t2758 + t2760*t2772;
  p_output1[1]=-1.*t119*t2997 + t2760*t4832;
  p_output1[2]=-1.*t119*t121*t6897 + t2407*t2760*t6897;
  p_output1[3]=0.;
  p_output1[4]=t6920;
  p_output1[5]=t6929;
  p_output1[6]=t6940;
  p_output1[7]=0.;
  p_output1[8]=t120*t6897*t6910 - 1.*t6908*t6917;
  p_output1[9]=t1044*t6897*t6910 - 1.*t6908*t6926;
  p_output1[10]=-1.*t414*t6910 - 1.*t6908*t6937;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t119*t2758 - 1.*t2760*t2772) - 0.135*(-1.*t120*t6897*t6910 + t6908*t6917) - 0.049*t6920 + t120*t6897*t6964 + t2758*t6967 + t2772*t6975 + t6917*t6980 + var1[0];
  p_output1[13]=0. - 0.09*(t119*t2997 - 1.*t2760*t4832) - 0.135*(-1.*t1044*t6897*t6910 + t6908*t6926) - 0.049*t6929 + t1044*t6897*t6964 + t2997*t6967 + t4832*t6975 + t6926*t6980 + var1[1];
  p_output1[14]=0. - 0.09*(t119*t121*t6897 - 1.*t2407*t2760*t6897) - 0.135*(t414*t6910 + t6908*t6937) - 0.049*t6940 - 1.*t414*t6964 + t121*t6897*t6967 + t2407*t6897*t6975 + t6937*t6980 + var1[2];
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

#include "H_hip_rotation_right_mex.hh"

namespace SymExpression
{

void H_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
