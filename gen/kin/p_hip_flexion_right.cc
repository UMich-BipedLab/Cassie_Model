/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:41 GMT-04:00
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
  double t641;
  double t710;
  double t719;
  double t712;
  double t720;
  double t706;
  double t715;
  double t724;
  double t725;
  double t735;
  double t751;
  double t753;
  double t754;
  double t773;
  double t769;
  double t770;
  double t771;
  double t760;
  double t780;
  double t781;
  double t782;
  double t655;
  double t660;
  double t671;
  double t690;
  double t653;
  double t795;
  double t798;
  double t799;
  double t675;
  double t693;
  double t704;
  double t708;
  double t709;
  double t741;
  double t743;
  double t746;
  double t747;
  double t761;
  double t762;
  double t764;
  double t765;
  double t811;
  double t812;
  double t813;
  double t815;
  double t816;
  double t817;
  double t774;
  double t775;
  double t819;
  double t820;
  double t821;
  double t823;
  double t824;
  double t825;
  double t792;
  double t793;
  double t794;
  double t831;
  double t832;
  double t833;
  double t847;
  double t848;
  double t849;
  double t851;
  double t852;
  double t853;
  double t859;
  double t860;
  double t861;
  t641 = Cos(var1[3]);
  t710 = Cos(var1[5]);
  t719 = Sin(var1[3]);
  t712 = Sin(var1[4]);
  t720 = Sin(var1[5]);
  t706 = Sin(var1[14]);
  t715 = t641*t710*t712;
  t724 = t719*t720;
  t725 = t715 + t724;
  t735 = Cos(var1[14]);
  t751 = -1.*t710*t719;
  t753 = t641*t712*t720;
  t754 = t751 + t753;
  t773 = Sin(var1[15]);
  t769 = t706*t725;
  t770 = t735*t754;
  t771 = t769 + t770;
  t760 = Cos(var1[15]);
  t780 = t735*t725;
  t781 = -1.*t706*t754;
  t782 = t780 + t781;
  t655 = Cos(var1[16]);
  t660 = -1.*t655;
  t671 = 1. + t660;
  t690 = Sin(var1[16]);
  t653 = Cos(var1[4]);
  t795 = t760*t771;
  t798 = t773*t782;
  t799 = t795 + t798;
  t675 = -0.049*t671;
  t693 = -0.135*t690;
  t704 = 0. + t675 + t693;
  t708 = 0.135*t706;
  t709 = 0. + t708;
  t741 = -1.*t735;
  t743 = 1. + t741;
  t746 = -0.135*t743;
  t747 = 0. + t746;
  t761 = -1.*t760;
  t762 = 1. + t761;
  t764 = -0.135*t762;
  t765 = 0. + t764;
  t811 = t710*t719*t712;
  t812 = -1.*t641*t720;
  t813 = t811 + t812;
  t815 = t641*t710;
  t816 = t719*t712*t720;
  t817 = t815 + t816;
  t774 = 0.135*t773;
  t775 = 0. + t774;
  t819 = t706*t813;
  t820 = t735*t817;
  t821 = t819 + t820;
  t823 = t735*t813;
  t824 = -1.*t706*t817;
  t825 = t823 + t824;
  t792 = -0.135*t671;
  t793 = 0.049*t690;
  t794 = 0. + t792 + t793;
  t831 = t760*t821;
  t832 = t773*t825;
  t833 = t831 + t832;
  t847 = t653*t710*t706;
  t848 = t735*t653*t720;
  t849 = t847 + t848;
  t851 = t735*t653*t710;
  t852 = -1.*t653*t706*t720;
  t853 = t851 + t852;
  t859 = t760*t849;
  t860 = t773*t853;
  t861 = t859 + t860;
  p_output1[0]=0. + t641*t653*t704 + t709*t725 + t747*t754 + t765*t771 + t775*t782 - 0.09*(-1.*t771*t773 + t760*t782) + t794*t799 - 0.135*(-1.*t641*t653*t690 + t655*t799) - 0.049*(t641*t653*t655 + t690*t799) + var1[0];
  p_output1[1]=0. + t653*t704*t719 + t709*t813 + t747*t817 + t765*t821 + t775*t825 - 0.09*(-1.*t773*t821 + t760*t825) + t794*t833 - 0.135*(-1.*t653*t690*t719 + t655*t833) - 0.049*(t653*t655*t719 + t690*t833) + var1[1];
  p_output1[2]=0. + t653*t709*t710 - 1.*t704*t712 + t653*t720*t747 + t765*t849 + t775*t853 - 0.09*(-1.*t773*t849 + t760*t853) + t794*t861 - 0.135*(t690*t712 + t655*t861) - 0.049*(-1.*t655*t712 + t690*t861) + var1[2];
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

#include "p_hip_flexion_right.hh"

namespace SymExpression
{

void p_hip_flexion_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
