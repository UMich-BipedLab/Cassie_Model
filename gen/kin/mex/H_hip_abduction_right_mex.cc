/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:13 GMT-04:00
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
  double t2374;
  double t2273;
  double t6576;
  double t6550;
  double t6592;
  double t6594;
  double t6583;
  double t6598;
  double t6593;
  double t6595;
  double t6596;
  double t6599;
  double t6600;
  double t6601;
  double t6605;
  double t6608;
  double t6609;
  double t6613;
  double t6616;
  double t6617;
  double t6597;
  double t6602;
  double t6603;
  double t6647;
  double t6648;
  double t6652;
  double t6653;
  double t6657;
  double t6660;
  double t6612;
  double t6618;
  double t6620;
  double t6621;
  double t6625;
  double t6626;
  t2374 = Cos(var1[4]);
  t2273 = Cos(var1[3]);
  t6576 = Sin(var1[4]);
  t6550 = Sin(var1[3]);
  t6592 = Cos(var1[5]);
  t6594 = Sin(var1[5]);
  t6583 = Sin(var1[13]);
  t6598 = Cos(var1[13]);
  t6593 = t2273*t6592*t6576;
  t6595 = t6550*t6594;
  t6596 = t6593 + t6595;
  t6599 = -1.*t6592*t6550;
  t6600 = t2273*t6576*t6594;
  t6601 = t6599 + t6600;
  t6605 = t6592*t6550*t6576;
  t6608 = -1.*t2273*t6594;
  t6609 = t6605 + t6608;
  t6613 = t2273*t6592;
  t6616 = t6550*t6576*t6594;
  t6617 = t6613 + t6616;
  t6597 = t6583*t6596;
  t6602 = t6598*t6601;
  t6603 = t6597 + t6602;
  t6647 = 0.135*t6583;
  t6648 = 0. + t6647;
  t6652 = -1.*t6598;
  t6653 = 1. + t6652;
  t6657 = -0.135*t6653;
  t6660 = 0. + t6657;
  t6612 = t6583*t6609;
  t6618 = t6598*t6617;
  t6620 = t6612 + t6618;
  t6621 = t2374*t6592*t6583;
  t6625 = t6598*t2374*t6594;
  t6626 = t6621 + t6625;
  p_output1[0]=t2273*t2374;
  p_output1[1]=t2374*t6550;
  p_output1[2]=-1.*t6576;
  p_output1[3]=0.;
  p_output1[4]=t6603;
  p_output1[5]=t6620;
  p_output1[6]=t6626;
  p_output1[7]=0.;
  p_output1[8]=t6596*t6598 - 1.*t6583*t6601;
  p_output1[9]=t6598*t6609 - 1.*t6583*t6617;
  p_output1[10]=-1.*t2374*t6583*t6594 + t2374*t6592*t6598;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t2273*t2374 - 0.135*t6603 + t6596*t6648 + t6601*t6660 + var1[0];
  p_output1[13]=0. - 0.049*t2374*t6550 - 0.135*t6620 + t6609*t6648 + t6617*t6660 + var1[1];
  p_output1[14]=0. + 0.049*t6576 - 0.135*t6626 + t2374*t6592*t6648 + t2374*t6594*t6660 + var1[2];
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
