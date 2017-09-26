/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:24 GMT-04:00
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
  double t10589;
  double t9874;
  double t10642;
  double t10613;
  double t10753;
  double t10799;
  double t10707;
  double t10847;
  double t10766;
  double t10818;
  double t10827;
  double t10859;
  double t10876;
  double t10889;
  double t10942;
  double t10954;
  double t10957;
  double t10967;
  double t10968;
  double t10984;
  double t10838;
  double t10892;
  double t10937;
  double t11089;
  double t11099;
  double t11104;
  double t11119;
  double t11121;
  double t11123;
  double t10965;
  double t10986;
  double t10987;
  double t10990;
  double t10998;
  double t11000;
  t10589 = Cos(var1[4]);
  t9874 = Cos(var1[3]);
  t10642 = Sin(var1[4]);
  t10613 = Sin(var1[3]);
  t10753 = Cos(var1[5]);
  t10799 = Sin(var1[5]);
  t10707 = Sin(var1[14]);
  t10847 = Cos(var1[14]);
  t10766 = t9874*t10753*t10642;
  t10818 = t10613*t10799;
  t10827 = t10766 + t10818;
  t10859 = -1.*t10753*t10613;
  t10876 = t9874*t10642*t10799;
  t10889 = t10859 + t10876;
  t10942 = t10753*t10613*t10642;
  t10954 = -1.*t9874*t10799;
  t10957 = t10942 + t10954;
  t10967 = t9874*t10753;
  t10968 = t10613*t10642*t10799;
  t10984 = t10967 + t10968;
  t10838 = t10707*t10827;
  t10892 = t10847*t10889;
  t10937 = t10838 + t10892;
  t11089 = 0.135*t10707;
  t11099 = 0. + t11089;
  t11104 = -1.*t10847;
  t11119 = 1. + t11104;
  t11121 = -0.135*t11119;
  t11123 = 0. + t11121;
  t10965 = t10707*t10957;
  t10986 = t10847*t10984;
  t10987 = t10965 + t10986;
  t10990 = t10589*t10753*t10707;
  t10998 = t10847*t10589*t10799;
  t11000 = t10990 + t10998;
  p_output1[0]=t10589*t9874;
  p_output1[1]=t10589*t10613;
  p_output1[2]=-1.*t10642;
  p_output1[3]=0.;
  p_output1[4]=t10937;
  p_output1[5]=t10987;
  p_output1[6]=t11000;
  p_output1[7]=0.;
  p_output1[8]=t10827*t10847 - 1.*t10707*t10889;
  p_output1[9]=t10847*t10957 - 1.*t10707*t10984;
  p_output1[10]=-1.*t10589*t10707*t10799 + t10589*t10753*t10847;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*t10937 + t10827*t11099 + t10889*t11123 - 0.049*t10589*t9874 + var1[0];
  p_output1[13]=0. - 0.049*t10589*t10613 - 0.135*t10987 + t10957*t11099 + t10984*t11123 + var1[1];
  p_output1[14]=0. + 0.049*t10642 - 0.135*t11000 + t10589*t10753*t11099 + t10589*t10799*t11123 + var1[2];
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

#include "H_hip_abduction_right.hh"

namespace SymExpression
{

void H_hip_abduction_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
