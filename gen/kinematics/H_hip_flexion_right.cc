/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:26 GMT-04:00
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
  double t9938;
  double t11078;
  double t8020;
  double t10967;
  double t11143;
  double t11208;
  double t11036;
  double t11145;
  double t11194;
  double t5712;
  double t11224;
  double t11270;
  double t11280;
  double t4140;
  double t11333;
  double t11443;
  double t11477;
  double t11481;
  double t11513;
  double t11515;
  double t11524;
  double t11585;
  double t11201;
  double t11299;
  double t11313;
  double t11335;
  double t11342;
  double t11366;
  double t11634;
  double t11642;
  double t11482;
  double t11526;
  double t11531;
  double t11544;
  double t11557;
  double t11575;
  double t11593;
  double t11594;
  double t11606;
  double t11609;
  double t11610;
  double t11613;
  double t11646;
  double t11647;
  double t11654;
  double t11671;
  double t11672;
  double t11673;
  double t11700;
  double t11702;
  double t11704;
  double t11744;
  double t11745;
  double t11635;
  double t11655;
  double t11662;
  double t11753;
  double t11755;
  double t11765;
  double t11768;
  double t11769;
  double t11777;
  double t11780;
  double t11781;
  double t11796;
  double t11800;
  double t11801;
  double t11803;
  double t11804;
  double t11814;
  double t11818;
  double t11833;
  double t11838;
  double t11839;
  double t11668;
  double t11679;
  double t11686;
  double t11689;
  double t11707;
  double t11709;
  t9938 = Cos(var1[5]);
  t11078 = Sin(var1[3]);
  t8020 = Cos(var1[3]);
  t10967 = Sin(var1[4]);
  t11143 = Sin(var1[5]);
  t11208 = Cos(var1[14]);
  t11036 = t8020*t9938*t10967;
  t11145 = t11078*t11143;
  t11194 = t11036 + t11145;
  t5712 = Sin(var1[14]);
  t11224 = -1.*t9938*t11078;
  t11270 = t8020*t10967*t11143;
  t11280 = t11224 + t11270;
  t4140 = Sin(var1[15]);
  t11333 = Cos(var1[15]);
  t11443 = t9938*t11078*t10967;
  t11477 = -1.*t8020*t11143;
  t11481 = t11443 + t11477;
  t11513 = t8020*t9938;
  t11515 = t11078*t10967*t11143;
  t11524 = t11513 + t11515;
  t11585 = Cos(var1[4]);
  t11201 = t5712*t11194;
  t11299 = t11208*t11280;
  t11313 = t11201 + t11299;
  t11335 = t11208*t11194;
  t11342 = -1.*t5712*t11280;
  t11366 = t11335 + t11342;
  t11634 = Cos(var1[16]);
  t11642 = Sin(var1[16]);
  t11482 = t5712*t11481;
  t11526 = t11208*t11524;
  t11531 = t11482 + t11526;
  t11544 = t11208*t11481;
  t11557 = -1.*t5712*t11524;
  t11575 = t11544 + t11557;
  t11593 = t11585*t9938*t5712;
  t11594 = t11208*t11585*t11143;
  t11606 = t11593 + t11594;
  t11609 = t11208*t11585*t9938;
  t11610 = -1.*t11585*t5712*t11143;
  t11613 = t11609 + t11610;
  t11646 = t11333*t11313;
  t11647 = t4140*t11366;
  t11654 = t11646 + t11647;
  t11671 = t11333*t11531;
  t11672 = t4140*t11575;
  t11673 = t11671 + t11672;
  t11700 = t11333*t11606;
  t11702 = t4140*t11613;
  t11704 = t11700 + t11702;
  t11744 = -1.*t11634;
  t11745 = 1. + t11744;
  t11635 = t11634*t8020*t11585;
  t11655 = t11642*t11654;
  t11662 = t11635 + t11655;
  t11753 = -0.049*t11745;
  t11755 = -0.135*t11642;
  t11765 = 0. + t11753 + t11755;
  t11768 = 0.135*t5712;
  t11769 = 0. + t11768;
  t11777 = -1.*t11208;
  t11780 = 1. + t11777;
  t11781 = -0.135*t11780;
  t11796 = 0. + t11781;
  t11800 = -1.*t11333;
  t11801 = 1. + t11800;
  t11803 = -0.135*t11801;
  t11804 = 0. + t11803;
  t11814 = 0.135*t4140;
  t11818 = 0. + t11814;
  t11833 = -0.135*t11745;
  t11838 = 0.049*t11642;
  t11839 = 0. + t11833 + t11838;
  t11668 = t11634*t11585*t11078;
  t11679 = t11642*t11673;
  t11686 = t11668 + t11679;
  t11689 = -1.*t11634*t10967;
  t11707 = t11642*t11704;
  t11709 = t11689 + t11707;
  p_output1[0]=-1.*t11333*t11366 + t11313*t4140;
  p_output1[1]=-1.*t11333*t11575 + t11531*t4140;
  p_output1[2]=-1.*t11333*t11613 + t11606*t4140;
  p_output1[3]=0.;
  p_output1[4]=t11662;
  p_output1[5]=t11686;
  p_output1[6]=t11709;
  p_output1[7]=0.;
  p_output1[8]=-1.*t11634*t11654 + t11585*t11642*t8020;
  p_output1[9]=t11078*t11585*t11642 - 1.*t11634*t11673;
  p_output1[10]=-1.*t10967*t11642 - 1.*t11634*t11704;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t11662 + t11194*t11769 + t11280*t11796 + t11313*t11804 + t11366*t11818 + t11654*t11839 - 0.09*(t11333*t11366 - 1.*t11313*t4140) + t11585*t11765*t8020 - 0.135*(t11634*t11654 - 1.*t11585*t11642*t8020) + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t11078*t11585*t11642 + t11634*t11673) - 0.049*t11686 + t11078*t11585*t11765 + t11481*t11769 + t11524*t11796 + t11531*t11804 + t11575*t11818 + t11673*t11839 - 0.09*(t11333*t11575 - 1.*t11531*t4140) + var1[1];
  p_output1[14]=0. - 0.135*(t10967*t11642 + t11634*t11704) - 0.049*t11709 - 1.*t10967*t11765 + t11143*t11585*t11796 + t11606*t11804 + t11613*t11818 + t11704*t11839 - 0.09*(t11333*t11613 - 1.*t11606*t4140) + t11585*t11769*t9938 + var1[2];
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

#include "H_hip_flexion_right.hh"

namespace SymExpression
{

void H_hip_flexion_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
