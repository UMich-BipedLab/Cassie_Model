/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:39 GMT-04:00
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
  double t1208;
  double t4527;
  double t524;
  double t4555;
  double t4574;
  double t4615;
  double t4700;
  double t4727;
  double t4745;
  double t4589;
  double t4618;
  double t4621;
  double t4747;
  double t4754;
  double t4761;
  double t4637;
  double t4642;
  double t4648;
  t1208 = Cos(var1[4]);
  t4527 = Sin(var1[3]);
  t524 = Cos(var1[3]);
  t4555 = Sin(var1[4]);
  t4574 = Cos(var1[5]);
  t4615 = Sin(var1[5]);
  t4700 = t524*t4574*t4555;
  t4727 = t4527*t4615;
  t4745 = t4700 + t4727;
  t4589 = -1.*t4574*t4527;
  t4618 = t524*t4555*t4615;
  t4621 = t4589 + t4618;
  t4747 = t4574*t4527*t4555;
  t4754 = -1.*t524*t4615;
  t4761 = t4747 + t4754;
  t4637 = t524*t4574;
  t4642 = t4527*t4555*t4615;
  t4648 = t4637 + t4642;
  p_output1[0]=t1208*t524;
  p_output1[1]=t1208*t4527;
  p_output1[2]=-1.*t4555;
  p_output1[3]=0;
  p_output1[4]=t4621;
  p_output1[5]=t4648;
  p_output1[6]=t1208*t4615;
  p_output1[7]=0;
  p_output1[8]=t4745;
  p_output1[9]=t4761;
  p_output1[10]=t1208*t4574;
  p_output1[11]=0;
  p_output1[12]=-0.035*t4621 + 0.25*t4745 + 0.052*t1208*t524 + var1[0];
  p_output1[13]=0.052*t1208*t4527 - 0.035*t4648 + 0.25*t4761 + var1[1];
  p_output1[14]=-0.052*t4555 + 0.25*t1208*t4574 - 0.035*t1208*t4615 + var1[2];
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

#include "H_MultisenseRightCameraFrame_mex.hh"

namespace SymExpression
{

void H_MultisenseRightCameraFrame_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
