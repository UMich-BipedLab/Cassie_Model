/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:00 GMT-05:00
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
  double t520;
  double t536;
  double t517;
  double t525;
  double t537;
  double t503;
  double t569;
  double t603;
  double t556;
  double t557;
  double t564;
  double t534;
  double t545;
  double t547;
  double t618;
  double t587;
  double t592;
  double t593;
  double t577;
  double t579;
  double t584;
  double t626;
  double t620;
  double t621;
  double t622;
  double t634;
  double t635;
  double t636;
  double t643;
  double t644;
  double t646;
  t520 = Cos(var1[5]);
  t536 = Sin(var1[3]);
  t517 = Cos(var1[3]);
  t525 = Sin(var1[4]);
  t537 = Sin(var1[5]);
  t503 = Cos(var1[6]);
  t569 = Sin(var1[6]);
  t603 = Cos(var1[4]);
  t556 = -1.*t520*t536;
  t557 = t517*t525*t537;
  t564 = t556 + t557;
  t534 = t517*t520*t525;
  t545 = t536*t537;
  t547 = t534 + t545;
  t618 = Cos(var1[7]);
  t587 = t517*t520;
  t592 = t536*t525*t537;
  t593 = t587 + t592;
  t577 = t520*t536*t525;
  t579 = -1.*t517*t537;
  t584 = t577 + t579;
  t626 = Sin(var1[7]);
  t620 = t503*t564;
  t621 = t547*t569;
  t622 = t620 + t621;
  t634 = t503*t593;
  t635 = t584*t569;
  t636 = t634 + t635;
  t643 = t603*t503*t537;
  t644 = t603*t520*t569;
  t646 = t643 + t644;
  p_output1[0]=-1.*t503*t547 + t564*t569;
  p_output1[1]=-1.*t503*t584 + t569*t593;
  p_output1[2]=-1.*t503*t520*t603 + t537*t569*t603;
  p_output1[3]=t517*t603*t618 + t622*t626;
  p_output1[4]=t536*t603*t618 + t626*t636;
  p_output1[5]=-1.*t525*t618 + t626*t646;
  p_output1[6]=-1.*t618*t622 + t517*t603*t626;
  p_output1[7]=t536*t603*t626 - 1.*t618*t636;
  p_output1[8]=-1.*t525*t626 - 1.*t618*t646;
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

#include "R_hip_rotation_left_mex.hh"

namespace SymExpression
{

void R_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
