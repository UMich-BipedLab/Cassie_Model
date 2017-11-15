/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:01 GMT-05:00
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
  double t706;
  double t702;
  double t708;
  double t704;
  double t714;
  double t673;
  double t705;
  double t715;
  double t716;
  double t721;
  double t722;
  double t727;
  double t728;
  double t735;
  double t736;
  double t737;
  double t739;
  double t732;
  double t733;
  double t734;
  double t743;
  double t755;
  double t756;
  double t757;
  double t759;
  double t752;
  double t753;
  double t754;
  double t763;
  double t764;
  double t765;
  double t687;
  double t689;
  double t696;
  double t701;
  double t729;
  double t730;
  double t779;
  double t780;
  double t781;
  double t783;
  double t784;
  double t785;
  double t738;
  double t740;
  double t741;
  double t744;
  double t745;
  double t746;
  double t787;
  double t788;
  double t789;
  double t758;
  double t760;
  double t761;
  double t766;
  double t767;
  double t768;
  double t796;
  double t797;
  double t798;
  double t800;
  double t801;
  double t802;
  double t815;
  double t816;
  double t817;
  double t824;
  double t825;
  double t826;
  double t828;
  double t829;
  double t830;
  t706 = Cos(var1[3]);
  t702 = Cos(var1[5]);
  t708 = Sin(var1[4]);
  t704 = Sin(var1[3]);
  t714 = Sin(var1[5]);
  t673 = Cos(var1[6]);
  t705 = -1.*t702*t704;
  t715 = t706*t708*t714;
  t716 = t705 + t715;
  t721 = t706*t702*t708;
  t722 = t704*t714;
  t727 = t721 + t722;
  t728 = Sin(var1[6]);
  t735 = Cos(var1[7]);
  t736 = -1.*t735;
  t737 = 1. + t736;
  t739 = Sin(var1[7]);
  t732 = t673*t716;
  t733 = t727*t728;
  t734 = t732 + t733;
  t743 = Cos(var1[4]);
  t755 = Cos(var1[8]);
  t756 = -1.*t755;
  t757 = 1. + t756;
  t759 = Sin(var1[8]);
  t752 = t706*t743*t735;
  t753 = t734*t739;
  t754 = t752 + t753;
  t763 = t673*t727;
  t764 = -1.*t716*t728;
  t765 = t763 + t764;
  t687 = -1.*t673;
  t689 = 1. + t687;
  t696 = 0.135*t689;
  t701 = 0. + t696;
  t729 = -0.135*t728;
  t730 = 0. + t729;
  t779 = t706*t702;
  t780 = t704*t708*t714;
  t781 = t779 + t780;
  t783 = t702*t704*t708;
  t784 = -1.*t706*t714;
  t785 = t783 + t784;
  t738 = 0.135*t737;
  t740 = 0.049*t739;
  t741 = 0. + t738 + t740;
  t744 = -0.049*t737;
  t745 = 0.135*t739;
  t746 = 0. + t744 + t745;
  t787 = t673*t781;
  t788 = t785*t728;
  t789 = t787 + t788;
  t758 = -0.049*t757;
  t760 = -0.09*t759;
  t761 = 0. + t758 + t760;
  t766 = -0.09*t757;
  t767 = 0.049*t759;
  t768 = 0. + t766 + t767;
  t796 = t743*t735*t704;
  t797 = t789*t739;
  t798 = t796 + t797;
  t800 = t673*t785;
  t801 = -1.*t781*t728;
  t802 = t800 + t801;
  t815 = t743*t673*t714;
  t816 = t743*t702*t728;
  t817 = t815 + t816;
  t824 = -1.*t735*t708;
  t825 = t817*t739;
  t826 = t824 + t825;
  t828 = t743*t702*t673;
  t829 = -1.*t743*t714*t728;
  t830 = t828 + t829;
  p_output1[0]=0. + t701*t716 + t727*t730 + t734*t741 + 0.135*(t734*t735 - 1.*t706*t739*t743) + t706*t743*t746 + t754*t761 - 0.09*(-1.*t754*t759 + t755*t765) - 0.049*(t754*t755 + t759*t765) + t765*t768 + var1[0];
  p_output1[1]=0. + t704*t743*t746 + t701*t781 + t730*t785 + t741*t789 + 0.135*(-1.*t704*t739*t743 + t735*t789) + t761*t798 + t768*t802 - 0.09*(-1.*t759*t798 + t755*t802) - 0.049*(t755*t798 + t759*t802) + var1[1];
  p_output1[2]=0. + t701*t714*t743 + t702*t730*t743 - 1.*t708*t746 + t741*t817 + 0.135*(t708*t739 + t735*t817) + t761*t826 + t768*t830 - 0.09*(-1.*t759*t826 + t755*t830) - 0.049*(t755*t826 + t759*t830) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_hip_flexion_left_mex.hh"

namespace SymExpression
{

void p_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
