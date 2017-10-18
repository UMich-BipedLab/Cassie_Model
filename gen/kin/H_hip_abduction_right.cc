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
  double t538;
  double t537;
  double t564;
  double t546;
  double t581;
  double t603;
  double t574;
  double t618;
  double t589;
  double t604;
  double t607;
  double t619;
  double t620;
  double t624;
  double t631;
  double t632;
  double t636;
  double t641;
  double t642;
  double t644;
  double t617;
  double t627;
  double t628;
  double t674;
  double t675;
  double t681;
  double t685;
  double t687;
  double t689;
  double t639;
  double t645;
  double t647;
  double t648;
  double t650;
  double t653;
  t538 = Cos(var1[4]);
  t537 = Cos(var1[3]);
  t564 = Sin(var1[4]);
  t546 = Sin(var1[3]);
  t581 = Cos(var1[5]);
  t603 = Sin(var1[5]);
  t574 = Sin(var1[14]);
  t618 = Cos(var1[14]);
  t589 = t537*t581*t564;
  t604 = t546*t603;
  t607 = t589 + t604;
  t619 = -1.*t581*t546;
  t620 = t537*t564*t603;
  t624 = t619 + t620;
  t631 = t581*t546*t564;
  t632 = -1.*t537*t603;
  t636 = t631 + t632;
  t641 = t537*t581;
  t642 = t546*t564*t603;
  t644 = t641 + t642;
  t617 = t574*t607;
  t627 = t618*t624;
  t628 = t617 + t627;
  t674 = 0.135*t574;
  t675 = 0. + t674;
  t681 = -1.*t618;
  t685 = 1. + t681;
  t687 = -0.135*t685;
  t689 = 0. + t687;
  t639 = t574*t636;
  t645 = t618*t644;
  t647 = t639 + t645;
  t648 = t538*t581*t574;
  t650 = t618*t538*t603;
  t653 = t648 + t650;
  p_output1[0]=t537*t538;
  p_output1[1]=t538*t546;
  p_output1[2]=-1.*t564;
  p_output1[3]=0.;
  p_output1[4]=t628;
  p_output1[5]=t647;
  p_output1[6]=t653;
  p_output1[7]=0.;
  p_output1[8]=t607*t618 - 1.*t574*t624;
  p_output1[9]=t618*t636 - 1.*t574*t644;
  p_output1[10]=-1.*t538*t574*t603 + t538*t581*t618;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t537*t538 - 0.135*t628 + t607*t675 + t624*t689 + var1[0];
  p_output1[13]=0. - 0.049*t538*t546 - 0.135*t647 + t636*t675 + t644*t689 + var1[1];
  p_output1[14]=0. + 0.049*t564 - 0.135*t653 + t538*t581*t675 + t538*t603*t689 + var1[2];
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
