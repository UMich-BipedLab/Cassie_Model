/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:40 GMT-04:00
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
  double t542;
  double t620;
  double t631;
  double t627;
  double t639;
  double t589;
  double t628;
  double t641;
  double t642;
  double t647;
  double t659;
  double t660;
  double t661;
  double t689;
  double t674;
  double t675;
  double t678;
  double t665;
  double t693;
  double t694;
  double t698;
  double t548;
  double t604;
  double t617;
  double t648;
  double t650;
  double t653;
  double t655;
  double t666;
  double t667;
  double t670;
  double t671;
  double t715;
  double t716;
  double t717;
  double t720;
  double t721;
  double t722;
  double t690;
  double t691;
  double t724;
  double t725;
  double t726;
  double t731;
  double t733;
  double t734;
  double t761;
  double t762;
  double t763;
  double t765;
  double t767;
  double t768;
  t542 = Cos(var1[3]);
  t620 = Cos(var1[5]);
  t631 = Sin(var1[3]);
  t627 = Sin(var1[4]);
  t639 = Sin(var1[5]);
  t589 = Sin(var1[14]);
  t628 = t542*t620*t627;
  t641 = t631*t639;
  t642 = t628 + t641;
  t647 = Cos(var1[14]);
  t659 = -1.*t620*t631;
  t660 = t542*t627*t639;
  t661 = t659 + t660;
  t689 = Sin(var1[15]);
  t674 = t589*t642;
  t675 = t647*t661;
  t678 = t674 + t675;
  t665 = Cos(var1[15]);
  t693 = t647*t642;
  t694 = -1.*t589*t661;
  t698 = t693 + t694;
  t548 = Cos(var1[4]);
  t604 = 0.135*t589;
  t617 = 0. + t604;
  t648 = -1.*t647;
  t650 = 1. + t648;
  t653 = -0.135*t650;
  t655 = 0. + t653;
  t666 = -1.*t665;
  t667 = 1. + t666;
  t670 = -0.135*t667;
  t671 = 0. + t670;
  t715 = t620*t631*t627;
  t716 = -1.*t542*t639;
  t717 = t715 + t716;
  t720 = t542*t620;
  t721 = t631*t627*t639;
  t722 = t720 + t721;
  t690 = 0.135*t689;
  t691 = 0. + t690;
  t724 = t589*t717;
  t725 = t647*t722;
  t726 = t724 + t725;
  t731 = t647*t717;
  t733 = -1.*t589*t722;
  t734 = t731 + t733;
  t761 = t548*t620*t589;
  t762 = t647*t548*t639;
  t763 = t761 + t762;
  t765 = t647*t548*t620;
  t767 = -1.*t548*t589*t639;
  t768 = t765 + t767;
  p_output1[0]=0. - 0.049*t542*t548 + t617*t642 + t655*t661 + t671*t678 + t691*t698 - 0.09*(-1.*t678*t689 + t665*t698) - 0.135*(t665*t678 + t689*t698) + var1[0];
  p_output1[1]=0. - 0.049*t548*t631 + t617*t717 + t655*t722 + t671*t726 + t691*t734 - 0.09*(-1.*t689*t726 + t665*t734) - 0.135*(t665*t726 + t689*t734) + var1[1];
  p_output1[2]=0. + t548*t617*t620 + 0.049*t627 + t548*t639*t655 + t671*t763 + t691*t768 - 0.09*(-1.*t689*t763 + t665*t768) - 0.135*(t665*t763 + t689*t768) + var1[2];
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

#include "p_hip_rotation_right.hh"

namespace SymExpression
{

void p_hip_rotation_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
