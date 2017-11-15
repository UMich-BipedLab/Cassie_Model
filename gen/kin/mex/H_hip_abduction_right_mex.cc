/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:29 GMT-05:00
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
  double t131;
  double t109;
  double t2618;
  double t966;
  double t6556;
  double t6590;
  double t6532;
  double t6605;
  double t6586;
  double t6592;
  double t6596;
  double t6608;
  double t6609;
  double t6610;
  double t6616;
  double t6618;
  double t6619;
  double t6622;
  double t6626;
  double t6629;
  double t6603;
  double t6614;
  double t6615;
  double t6654;
  double t6656;
  double t6661;
  double t6662;
  double t6663;
  double t6664;
  double t6621;
  double t6631;
  double t6633;
  double t6635;
  double t6636;
  double t6639;
  t131 = Cos(var1[4]);
  t109 = Cos(var1[3]);
  t2618 = Sin(var1[4]);
  t966 = Sin(var1[3]);
  t6556 = Cos(var1[5]);
  t6590 = Sin(var1[5]);
  t6532 = Sin(var1[13]);
  t6605 = Cos(var1[13]);
  t6586 = t109*t6556*t2618;
  t6592 = t966*t6590;
  t6596 = t6586 + t6592;
  t6608 = -1.*t6556*t966;
  t6609 = t109*t2618*t6590;
  t6610 = t6608 + t6609;
  t6616 = t6556*t966*t2618;
  t6618 = -1.*t109*t6590;
  t6619 = t6616 + t6618;
  t6622 = t109*t6556;
  t6626 = t966*t2618*t6590;
  t6629 = t6622 + t6626;
  t6603 = t6532*t6596;
  t6614 = t6605*t6610;
  t6615 = t6603 + t6614;
  t6654 = 0.135*t6532;
  t6656 = 0. + t6654;
  t6661 = -1.*t6605;
  t6662 = 1. + t6661;
  t6663 = -0.135*t6662;
  t6664 = 0. + t6663;
  t6621 = t6532*t6619;
  t6631 = t6605*t6629;
  t6633 = t6621 + t6631;
  t6635 = t131*t6556*t6532;
  t6636 = t6605*t131*t6590;
  t6639 = t6635 + t6636;
  p_output1[0]=t109*t131;
  p_output1[1]=t131*t966;
  p_output1[2]=-1.*t2618;
  p_output1[3]=0.;
  p_output1[4]=t6615;
  p_output1[5]=t6633;
  p_output1[6]=t6639;
  p_output1[7]=0.;
  p_output1[8]=t6596*t6605 - 1.*t6532*t6610;
  p_output1[9]=t6605*t6619 - 1.*t6532*t6629;
  p_output1[10]=-1.*t131*t6532*t6590 + t131*t6556*t6605;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t109*t131 - 0.135*t6615 + t6596*t6656 + t6610*t6664 + var1[0];
  p_output1[13]=0. - 0.135*t6633 + t6619*t6656 + t6629*t6664 - 0.049*t131*t966 + var1[1];
  p_output1[14]=0. + 0.049*t2618 - 0.135*t6639 + t131*t6556*t6656 + t131*t6590*t6664 + var1[2];
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

#include "H_hip_abduction_right_mex.hh"

namespace SymExpression
{

void H_hip_abduction_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
