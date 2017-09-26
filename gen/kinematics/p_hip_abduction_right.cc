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
  double t3401;
  double t10666;
  double t10711;
  double t10698;
  double t10727;
  double t10613;
  double t10707;
  double t10753;
  double t10766;
  double t10810;
  double t10833;
  double t10838;
  double t10847;
  double t10589;
  double t10640;
  double t10642;
  double t10816;
  double t10817;
  double t10818;
  double t10827;
  double t10957;
  double t10963;
  double t10965;
  double t10968;
  double t10984;
  double t10986;
  t3401 = Cos(var1[3]);
  t10666 = Cos(var1[5]);
  t10711 = Sin(var1[3]);
  t10698 = Sin(var1[4]);
  t10727 = Sin(var1[5]);
  t10613 = Sin(var1[14]);
  t10707 = t3401*t10666*t10698;
  t10753 = t10711*t10727;
  t10766 = t10707 + t10753;
  t10810 = Cos(var1[14]);
  t10833 = -1.*t10666*t10711;
  t10838 = t3401*t10698*t10727;
  t10847 = t10833 + t10838;
  t10589 = Cos(var1[4]);
  t10640 = 0.135*t10613;
  t10642 = 0. + t10640;
  t10816 = -1.*t10810;
  t10817 = 1. + t10816;
  t10818 = -0.135*t10817;
  t10827 = 0. + t10818;
  t10957 = t10666*t10711*t10698;
  t10963 = -1.*t3401*t10727;
  t10965 = t10957 + t10963;
  t10968 = t3401*t10666;
  t10984 = t10711*t10698*t10727;
  t10986 = t10968 + t10984;
  p_output1[0]=0. + t10642*t10766 + t10827*t10847 - 0.135*(t10613*t10766 + t10810*t10847) - 0.049*t10589*t3401 + var1[0];
  p_output1[1]=0. - 0.049*t10589*t10711 + t10642*t10965 + t10827*t10986 - 0.135*(t10613*t10965 + t10810*t10986) + var1[1];
  p_output1[2]=0. + t10589*t10642*t10666 + 0.049*t10698 - 0.135*(t10589*t10613*t10666 + t10589*t10727*t10810) + t10589*t10727*t10827 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_hip_abduction_right.hh"

namespace SymExpression
{

void p_hip_abduction_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
