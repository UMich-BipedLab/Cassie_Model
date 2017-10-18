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
  double t715;
  double t794;
  double t802;
  double t795;
  double t803;
  double t790;
  double t800;
  double t806;
  double t807;
  double t810;
  double t822;
  double t826;
  double t827;
  double t843;
  double t837;
  double t839;
  double t840;
  double t830;
  double t846;
  double t847;
  double t848;
  double t746;
  double t747;
  double t764;
  double t772;
  double t731;
  double t875;
  double t876;
  double t877;
  double t851;
  double t854;
  double t855;
  double t859;
  double t864;
  double t865;
  double t868;
  double t886;
  double t887;
  double t888;
  double t769;
  double t775;
  double t788;
  double t792;
  double t793;
  double t813;
  double t814;
  double t818;
  double t819;
  double t831;
  double t832;
  double t834;
  double t836;
  double t900;
  double t901;
  double t902;
  double t904;
  double t905;
  double t906;
  double t844;
  double t845;
  double t858;
  double t862;
  double t863;
  double t908;
  double t909;
  double t910;
  double t912;
  double t913;
  double t914;
  double t870;
  double t873;
  double t874;
  double t920;
  double t921;
  double t922;
  double t883;
  double t884;
  double t885;
  double t916;
  double t917;
  double t918;
  double t928;
  double t929;
  double t930;
  double t944;
  double t945;
  double t946;
  double t948;
  double t949;
  double t950;
  double t956;
  double t957;
  double t958;
  double t952;
  double t953;
  double t954;
  double t964;
  double t965;
  double t966;
  t715 = Cos(var1[3]);
  t794 = Cos(var1[5]);
  t802 = Sin(var1[3]);
  t795 = Sin(var1[4]);
  t803 = Sin(var1[5]);
  t790 = Sin(var1[14]);
  t800 = t715*t794*t795;
  t806 = t802*t803;
  t807 = t800 + t806;
  t810 = Cos(var1[14]);
  t822 = -1.*t794*t802;
  t826 = t715*t795*t803;
  t827 = t822 + t826;
  t843 = Sin(var1[15]);
  t837 = t790*t807;
  t839 = t810*t827;
  t840 = t837 + t839;
  t830 = Cos(var1[15]);
  t846 = t810*t807;
  t847 = -1.*t790*t827;
  t848 = t846 + t847;
  t746 = Cos(var1[16]);
  t747 = -1.*t746;
  t764 = 1. + t747;
  t772 = Sin(var1[16]);
  t731 = Cos(var1[4]);
  t875 = t830*t840;
  t876 = t843*t848;
  t877 = t875 + t876;
  t851 = Cos(var1[17]);
  t854 = -1.*t851;
  t855 = 1. + t854;
  t859 = Sin(var1[17]);
  t864 = -1.*t843*t840;
  t865 = t830*t848;
  t868 = t864 + t865;
  t886 = t746*t715*t731;
  t887 = t772*t877;
  t888 = t886 + t887;
  t769 = -0.049*t764;
  t775 = -0.135*t772;
  t788 = 0. + t769 + t775;
  t792 = 0.135*t790;
  t793 = 0. + t792;
  t813 = -1.*t810;
  t814 = 1. + t813;
  t818 = -0.135*t814;
  t819 = 0. + t818;
  t831 = -1.*t830;
  t832 = 1. + t831;
  t834 = -0.135*t832;
  t836 = 0. + t834;
  t900 = t794*t802*t795;
  t901 = -1.*t715*t803;
  t902 = t900 + t901;
  t904 = t715*t794;
  t905 = t802*t795*t803;
  t906 = t904 + t905;
  t844 = 0.135*t843;
  t845 = 0. + t844;
  t858 = -0.09*t855;
  t862 = 0.049*t859;
  t863 = 0. + t858 + t862;
  t908 = t790*t902;
  t909 = t810*t906;
  t910 = t908 + t909;
  t912 = t810*t902;
  t913 = -1.*t790*t906;
  t914 = t912 + t913;
  t870 = -0.135*t764;
  t873 = 0.049*t772;
  t874 = 0. + t870 + t873;
  t920 = t830*t910;
  t921 = t843*t914;
  t922 = t920 + t921;
  t883 = -0.049*t855;
  t884 = -0.09*t859;
  t885 = 0. + t883 + t884;
  t916 = -1.*t843*t910;
  t917 = t830*t914;
  t918 = t916 + t917;
  t928 = t746*t731*t802;
  t929 = t772*t922;
  t930 = t928 + t929;
  t944 = t731*t794*t790;
  t945 = t810*t731*t803;
  t946 = t944 + t945;
  t948 = t810*t731*t794;
  t949 = -1.*t731*t790*t803;
  t950 = t948 + t949;
  t956 = t830*t946;
  t957 = t843*t950;
  t958 = t956 + t957;
  t952 = -1.*t843*t946;
  t953 = t830*t950;
  t954 = t952 + t953;
  t964 = -1.*t746*t795;
  t965 = t772*t958;
  t966 = t964 + t965;
  p_output1[0]=0. + t715*t731*t788 + t793*t807 + t819*t827 + t836*t840 + t845*t848 + t863*t868 + t874*t877 - 0.1305*(-1.*t715*t731*t772 + t746*t877) + t885*t888 - 0.049*(t859*t868 + t851*t888) - 0.21*(t851*t868 - 1.*t859*t888) + var1[0];
  p_output1[1]=0. + t731*t788*t802 + t793*t902 + t819*t906 + t836*t910 + t845*t914 + t863*t918 + t874*t922 - 0.1305*(-1.*t731*t772*t802 + t746*t922) + t885*t930 - 0.049*(t859*t918 + t851*t930) - 0.21*(t851*t918 - 1.*t859*t930) + var1[1];
  p_output1[2]=0. + t731*t793*t794 - 1.*t788*t795 + t731*t803*t819 + t836*t946 + t845*t950 + t863*t954 + t874*t958 - 0.1305*(t772*t795 + t746*t958) + t885*t966 - 0.049*(t859*t954 + t851*t966) - 0.21*(t851*t954 - 1.*t859*t966) + var1[2];
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

#include "p_knee_joint_right.hh"

namespace SymExpression
{

void p_knee_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
