/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:17 GMT-04:00
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
  double t9515;
  double t9581;
  double t9600;
  double t9586;
  double t9601;
  double t9553;
  double t9587;
  double t9609;
  double t9610;
  double t9622;
  double t9624;
  double t9627;
  double t9632;
  double t9687;
  double t9734;
  double t9743;
  double t9745;
  double t9706;
  double t9716;
  double t9728;
  double t9746;
  double t9534;
  double t9558;
  double t9561;
  double t9564;
  double t9576;
  double t9659;
  double t9683;
  double t9688;
  double t9689;
  double t9690;
  double t9699;
  double t9787;
  double t9788;
  double t9794;
  double t9798;
  double t9800;
  double t9801;
  double t9747;
  double t9749;
  double t9832;
  double t9842;
  double t9847;
  double t9805;
  double t9808;
  double t9818;
  double t9928;
  double t9929;
  double t9930;
  double t9920;
  double t9921;
  double t9922;
  t9515 = Cos(var1[3]);
  t9581 = Cos(var1[5]);
  t9600 = Sin(var1[4]);
  t9586 = Sin(var1[3]);
  t9601 = Sin(var1[5]);
  t9553 = Cos(var1[6]);
  t9587 = -1.*t9581*t9586;
  t9609 = t9515*t9600*t9601;
  t9610 = t9587 + t9609;
  t9622 = t9515*t9581*t9600;
  t9624 = t9586*t9601;
  t9627 = t9622 + t9624;
  t9632 = Sin(var1[6]);
  t9687 = Cos(var1[7]);
  t9734 = t9553*t9627;
  t9743 = -1.*t9610*t9632;
  t9745 = t9734 + t9743;
  t9706 = t9553*t9610;
  t9716 = t9627*t9632;
  t9728 = t9706 + t9716;
  t9746 = Sin(var1[7]);
  t9534 = Cos(var1[4]);
  t9558 = -1.*t9553;
  t9561 = 1. + t9558;
  t9564 = 0.135*t9561;
  t9576 = 0. + t9564;
  t9659 = -0.135*t9632;
  t9683 = 0. + t9659;
  t9688 = -1.*t9687;
  t9689 = 1. + t9688;
  t9690 = 0.135*t9689;
  t9699 = 0. + t9690;
  t9787 = t9515*t9581;
  t9788 = t9586*t9600*t9601;
  t9794 = t9787 + t9788;
  t9798 = t9581*t9586*t9600;
  t9800 = -1.*t9515*t9601;
  t9801 = t9798 + t9800;
  t9747 = -0.135*t9746;
  t9749 = 0. + t9747;
  t9832 = t9553*t9801;
  t9842 = -1.*t9794*t9632;
  t9847 = t9832 + t9842;
  t9805 = t9553*t9794;
  t9808 = t9801*t9632;
  t9818 = t9805 + t9808;
  t9928 = t9534*t9581*t9553;
  t9929 = -1.*t9534*t9601*t9632;
  t9930 = t9928 + t9929;
  t9920 = t9534*t9553*t9601;
  t9921 = t9534*t9581*t9632;
  t9922 = t9920 + t9921;
  p_output1[0]=0. - 0.049*t9515*t9534 + t9576*t9610 + t9627*t9683 + t9699*t9728 - 0.09*(t9687*t9745 - 1.*t9728*t9746) + 0.135*(t9687*t9728 + t9745*t9746) + t9745*t9749 + var1[0];
  p_output1[1]=0. - 0.049*t9534*t9586 + t9576*t9794 + t9683*t9801 + t9699*t9818 + t9749*t9847 - 0.09*(-1.*t9746*t9818 + t9687*t9847) + 0.135*(t9687*t9818 + t9746*t9847) + var1[1];
  p_output1[2]=0. + 0.049*t9600 + t9534*t9576*t9601 + t9534*t9581*t9683 + t9699*t9922 + t9749*t9930 - 0.09*(-1.*t9746*t9922 + t9687*t9930) + 0.135*(t9687*t9922 + t9746*t9930) + var1[2];
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

#include "p_hip_rotation_left.hh"

namespace SymExpression
{

void p_hip_rotation_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
