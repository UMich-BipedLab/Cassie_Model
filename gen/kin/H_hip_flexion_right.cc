/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:42 GMT-04:00
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
  double t708;
  double t724;
  double t705;
  double t709;
  double t725;
  double t753;
  double t715;
  double t731;
  double t746;
  double t693;
  double t757;
  double t764;
  double t765;
  double t675;
  double t774;
  double t790;
  double t791;
  double t792;
  double t794;
  double t795;
  double t798;
  double t808;
  double t747;
  double t769;
  double t770;
  double t775;
  double t780;
  double t785;
  double t820;
  double t823;
  double t793;
  double t800;
  double t801;
  double t803;
  double t804;
  double t805;
  double t809;
  double t810;
  double t811;
  double t814;
  double t815;
  double t816;
  double t826;
  double t827;
  double t828;
  double t832;
  double t834;
  double t835;
  double t839;
  double t840;
  double t841;
  double t856;
  double t857;
  double t822;
  double t829;
  double t830;
  double t858;
  double t859;
  double t860;
  double t863;
  double t864;
  double t866;
  double t867;
  double t868;
  double t869;
  double t871;
  double t872;
  double t873;
  double t874;
  double t876;
  double t877;
  double t883;
  double t884;
  double t885;
  double t831;
  double t836;
  double t837;
  double t838;
  double t842;
  double t843;
  t708 = Cos(var1[5]);
  t724 = Sin(var1[3]);
  t705 = Cos(var1[3]);
  t709 = Sin(var1[4]);
  t725 = Sin(var1[5]);
  t753 = Cos(var1[14]);
  t715 = t705*t708*t709;
  t731 = t724*t725;
  t746 = t715 + t731;
  t693 = Sin(var1[14]);
  t757 = -1.*t708*t724;
  t764 = t705*t709*t725;
  t765 = t757 + t764;
  t675 = Sin(var1[15]);
  t774 = Cos(var1[15]);
  t790 = t708*t724*t709;
  t791 = -1.*t705*t725;
  t792 = t790 + t791;
  t794 = t705*t708;
  t795 = t724*t709*t725;
  t798 = t794 + t795;
  t808 = Cos(var1[4]);
  t747 = t693*t746;
  t769 = t753*t765;
  t770 = t747 + t769;
  t775 = t753*t746;
  t780 = -1.*t693*t765;
  t785 = t775 + t780;
  t820 = Cos(var1[16]);
  t823 = Sin(var1[16]);
  t793 = t693*t792;
  t800 = t753*t798;
  t801 = t793 + t800;
  t803 = t753*t792;
  t804 = -1.*t693*t798;
  t805 = t803 + t804;
  t809 = t808*t708*t693;
  t810 = t753*t808*t725;
  t811 = t809 + t810;
  t814 = t753*t808*t708;
  t815 = -1.*t808*t693*t725;
  t816 = t814 + t815;
  t826 = t774*t770;
  t827 = t675*t785;
  t828 = t826 + t827;
  t832 = t774*t801;
  t834 = t675*t805;
  t835 = t832 + t834;
  t839 = t774*t811;
  t840 = t675*t816;
  t841 = t839 + t840;
  t856 = -1.*t820;
  t857 = 1. + t856;
  t822 = t820*t705*t808;
  t829 = t823*t828;
  t830 = t822 + t829;
  t858 = -0.049*t857;
  t859 = -0.135*t823;
  t860 = 0. + t858 + t859;
  t863 = 0.135*t693;
  t864 = 0. + t863;
  t866 = -1.*t753;
  t867 = 1. + t866;
  t868 = -0.135*t867;
  t869 = 0. + t868;
  t871 = -1.*t774;
  t872 = 1. + t871;
  t873 = -0.135*t872;
  t874 = 0. + t873;
  t876 = 0.135*t675;
  t877 = 0. + t876;
  t883 = -0.135*t857;
  t884 = 0.049*t823;
  t885 = 0. + t883 + t884;
  t831 = t820*t808*t724;
  t836 = t823*t835;
  t837 = t831 + t836;
  t838 = -1.*t820*t709;
  t842 = t823*t841;
  t843 = t838 + t842;
  p_output1[0]=t675*t770 - 1.*t774*t785;
  p_output1[1]=t675*t801 - 1.*t774*t805;
  p_output1[2]=t675*t811 - 1.*t774*t816;
  p_output1[3]=0.;
  p_output1[4]=t830;
  p_output1[5]=t837;
  p_output1[6]=t843;
  p_output1[7]=0.;
  p_output1[8]=t705*t808*t823 - 1.*t820*t828;
  p_output1[9]=t724*t808*t823 - 1.*t820*t835;
  p_output1[10]=-1.*t709*t823 - 1.*t820*t841;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(-1.*t675*t770 + t774*t785) - 0.135*(-1.*t705*t808*t823 + t820*t828) - 0.049*t830 + t705*t808*t860 + t746*t864 + t765*t869 + t770*t874 + t785*t877 + t828*t885 + var1[0];
  p_output1[13]=0. - 0.09*(-1.*t675*t801 + t774*t805) - 0.135*(-1.*t724*t808*t823 + t820*t835) - 0.049*t837 + t724*t808*t860 + t792*t864 + t798*t869 + t801*t874 + t805*t877 + t835*t885 + var1[1];
  p_output1[14]=0. - 0.09*(-1.*t675*t811 + t774*t816) - 0.135*(t709*t823 + t820*t841) - 0.049*t843 - 1.*t709*t860 + t708*t808*t864 + t725*t808*t869 + t811*t874 + t816*t877 + t841*t885 + var1[2];
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
