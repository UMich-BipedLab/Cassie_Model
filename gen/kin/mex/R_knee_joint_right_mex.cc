/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:44 GMT-05:00
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
  double t1493;
  double t1806;
  double t820;
  double t1497;
  double t2002;
  double t2444;
  double t1794;
  double t2070;
  double t2072;
  double t792;
  double t2466;
  double t2485;
  double t2507;
  double t2883;
  double t2119;
  double t2523;
  double t2655;
  double t745;
  double t3060;
  double t3284;
  double t3463;
  double t3607;
  double t3633;
  double t4149;
  double t4179;
  double t4302;
  double t4439;
  double t738;
  double t7776;
  double t7806;
  double t7834;
  double t7845;
  double t7846;
  double t7857;
  double t5193;
  double t7838;
  double t7863;
  double t7865;
  double t7873;
  double t7877;
  double t7885;
  double t7891;
  double t7895;
  double t7901;
  double t7924;
  double t7930;
  double t7931;
  double t7933;
  double t7934;
  double t7935;
  double t7937;
  double t7938;
  double t7939;
  double t2795;
  double t4583;
  double t4976;
  double t7667;
  double t7712;
  double t7715;
  double t7870;
  double t7903;
  double t7904;
  double t7915;
  double t7918;
  double t7920;
  double t7932;
  double t7940;
  double t7954;
  double t7959;
  double t7960;
  double t7962;
  t1493 = Cos(var1[5]);
  t1806 = Sin(var1[3]);
  t820 = Cos(var1[3]);
  t1497 = Sin(var1[4]);
  t2002 = Sin(var1[5]);
  t2444 = Sin(var1[13]);
  t1794 = t820*t1493*t1497;
  t2070 = t1806*t2002;
  t2072 = t1794 + t2070;
  t792 = Cos(var1[13]);
  t2466 = -1.*t1493*t1806;
  t2485 = t820*t1497*t2002;
  t2507 = t2466 + t2485;
  t2883 = Cos(var1[15]);
  t2119 = t792*t2072;
  t2523 = -1.*t2444*t2507;
  t2655 = t2119 + t2523;
  t745 = Sin(var1[15]);
  t3060 = Cos(var1[14]);
  t3284 = Cos(var1[4]);
  t3463 = t3060*t820*t3284;
  t3607 = Sin(var1[14]);
  t3633 = t2444*t2072;
  t4149 = t792*t2507;
  t4179 = t3633 + t4149;
  t4302 = t3607*t4179;
  t4439 = t3463 + t4302;
  t738 = Sin(var1[16]);
  t7776 = t1493*t1806*t1497;
  t7806 = -1.*t820*t2002;
  t7834 = t7776 + t7806;
  t7845 = t820*t1493;
  t7846 = t1806*t1497*t2002;
  t7857 = t7845 + t7846;
  t5193 = Cos(var1[16]);
  t7838 = t792*t7834;
  t7863 = -1.*t2444*t7857;
  t7865 = t7838 + t7863;
  t7873 = t3060*t3284*t1806;
  t7877 = t2444*t7834;
  t7885 = t792*t7857;
  t7891 = t7877 + t7885;
  t7895 = t3607*t7891;
  t7901 = t7873 + t7895;
  t7924 = t792*t3284*t1493;
  t7930 = -1.*t3284*t2444*t2002;
  t7931 = t7924 + t7930;
  t7933 = -1.*t3060*t1497;
  t7934 = t3284*t1493*t2444;
  t7935 = t792*t3284*t2002;
  t7937 = t7934 + t7935;
  t7938 = t3607*t7937;
  t7939 = t7933 + t7938;
  t2795 = t745*t2655;
  t4583 = t2883*t4439;
  t4976 = t2795 + t4583;
  t7667 = t2883*t2655;
  t7712 = -1.*t745*t4439;
  t7715 = t7667 + t7712;
  t7870 = t745*t7865;
  t7903 = t2883*t7901;
  t7904 = t7870 + t7903;
  t7915 = t2883*t7865;
  t7918 = -1.*t745*t7901;
  t7920 = t7915 + t7918;
  t7932 = t745*t7931;
  t7940 = t2883*t7939;
  t7954 = t7932 + t7940;
  t7959 = t2883*t7931;
  t7960 = -1.*t745*t7939;
  t7962 = t7959 + t7960;
  p_output1[0]=t4976*t738 - 1.*t5193*t7715;
  p_output1[1]=t738*t7904 - 1.*t5193*t7920;
  p_output1[2]=t738*t7954 - 1.*t5193*t7962;
  p_output1[3]=t4976*t5193 + t738*t7715;
  p_output1[4]=t5193*t7904 + t738*t7920;
  p_output1[5]=t5193*t7954 + t738*t7962;
  p_output1[6]=-1.*t3060*t4179 + t3284*t3607*t820;
  p_output1[7]=t1806*t3284*t3607 - 1.*t3060*t7891;
  p_output1[8]=-1.*t1497*t3607 - 1.*t3060*t7937;
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
