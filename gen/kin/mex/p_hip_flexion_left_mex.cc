/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:06 GMT-05:00
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
  double t670;
  double t666;
  double t672;
  double t668;
  double t678;
  double t637;
  double t669;
  double t679;
  double t680;
  double t685;
  double t686;
  double t691;
  double t692;
  double t699;
  double t700;
  double t701;
  double t703;
  double t696;
  double t697;
  double t698;
  double t707;
  double t719;
  double t720;
  double t721;
  double t723;
  double t716;
  double t717;
  double t718;
  double t727;
  double t728;
  double t729;
  double t651;
  double t653;
  double t660;
  double t665;
  double t693;
  double t694;
  double t743;
  double t744;
  double t745;
  double t747;
  double t748;
  double t749;
  double t702;
  double t704;
  double t705;
  double t708;
  double t709;
  double t710;
  double t751;
  double t752;
  double t753;
  double t722;
  double t724;
  double t725;
  double t730;
  double t731;
  double t732;
  double t760;
  double t761;
  double t762;
  double t764;
  double t765;
  double t766;
  double t779;
  double t780;
  double t781;
  double t788;
  double t789;
  double t790;
  double t792;
  double t793;
  double t794;
  t670 = Cos(var1[3]);
  t666 = Cos(var1[5]);
  t672 = Sin(var1[4]);
  t668 = Sin(var1[3]);
  t678 = Sin(var1[5]);
  t637 = Cos(var1[6]);
  t669 = -1.*t666*t668;
  t679 = t670*t672*t678;
  t680 = t669 + t679;
  t685 = t670*t666*t672;
  t686 = t668*t678;
  t691 = t685 + t686;
  t692 = Sin(var1[6]);
  t699 = Cos(var1[7]);
  t700 = -1.*t699;
  t701 = 1. + t700;
  t703 = Sin(var1[7]);
  t696 = t637*t680;
  t697 = t691*t692;
  t698 = t696 + t697;
  t707 = Cos(var1[4]);
  t719 = Cos(var1[8]);
  t720 = -1.*t719;
  t721 = 1. + t720;
  t723 = Sin(var1[8]);
  t716 = t670*t707*t699;
  t717 = t698*t703;
  t718 = t716 + t717;
  t727 = t637*t691;
  t728 = -1.*t680*t692;
  t729 = t727 + t728;
  t651 = -1.*t637;
  t653 = 1. + t651;
  t660 = 0.135*t653;
  t665 = 0. + t660;
  t693 = -0.135*t692;
  t694 = 0. + t693;
  t743 = t670*t666;
  t744 = t668*t672*t678;
  t745 = t743 + t744;
  t747 = t666*t668*t672;
  t748 = -1.*t670*t678;
  t749 = t747 + t748;
  t702 = 0.135*t701;
  t704 = 0.049*t703;
  t705 = 0. + t702 + t704;
  t708 = -0.049*t701;
  t709 = 0.135*t703;
  t710 = 0. + t708 + t709;
  t751 = t637*t745;
  t752 = t749*t692;
  t753 = t751 + t752;
  t722 = -0.049*t721;
  t724 = -0.09*t723;
  t725 = 0. + t722 + t724;
  t730 = -0.09*t721;
  t731 = 0.049*t723;
  t732 = 0. + t730 + t731;
  t760 = t707*t699*t668;
  t761 = t753*t703;
  t762 = t760 + t761;
  t764 = t637*t749;
  t765 = -1.*t745*t692;
  t766 = t764 + t765;
  t779 = t707*t637*t678;
  t780 = t707*t666*t692;
  t781 = t779 + t780;
  t788 = -1.*t699*t672;
  t789 = t781*t703;
  t790 = t788 + t789;
  t792 = t707*t666*t637;
  t793 = -1.*t707*t678*t692;
  t794 = t792 + t793;
  p_output1[0]=0. + t665*t680 + t691*t694 + t698*t705 + 0.135*(t698*t699 - 1.*t670*t703*t707) + t670*t707*t710 + t718*t725 - 0.09*(-1.*t718*t723 + t719*t729) - 0.049*(t718*t719 + t723*t729) + t729*t732 + var1[0];
  p_output1[1]=0. + t668*t707*t710 + t665*t745 + t694*t749 + t705*t753 + 0.135*(-1.*t668*t703*t707 + t699*t753) + t725*t762 + t732*t766 - 0.09*(-1.*t723*t762 + t719*t766) - 0.049*(t719*t762 + t723*t766) + var1[1];
  p_output1[2]=0. + t665*t678*t707 + t666*t694*t707 - 1.*t672*t710 + t705*t781 + 0.135*(t672*t703 + t699*t781) + t725*t790 + t732*t794 - 0.09*(-1.*t723*t790 + t719*t794) - 0.049*(t719*t790 + t723*t794) + var1[2];
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
