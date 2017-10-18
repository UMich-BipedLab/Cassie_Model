/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:43 GMT-04:00
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
  double t793;
  double t807;
  double t792;
  double t800;
  double t809;
  double t829;
  double t806;
  double t818;
  double t819;
  double t789;
  double t834;
  double t836;
  double t837;
  double t845;
  double t826;
  double t839;
  double t842;
  double t775;
  double t846;
  double t848;
  double t850;
  double t769;
  double t883;
  double t884;
  double t885;
  double t887;
  double t889;
  double t890;
  double t865;
  double t869;
  double t870;
  double t874;
  double t886;
  double t891;
  double t892;
  double t894;
  double t895;
  double t896;
  double t911;
  double t912;
  double t914;
  double t917;
  double t919;
  double t920;
  double t844;
  double t858;
  double t862;
  double t873;
  double t875;
  double t876;
  double t878;
  double t879;
  double t880;
  double t893;
  double t897;
  double t898;
  double t900;
  double t902;
  double t903;
  double t904;
  double t905;
  double t907;
  double t915;
  double t921;
  double t923;
  double t925;
  double t926;
  double t927;
  double t928;
  double t929;
  double t931;
  double t956;
  double t957;
  double t980;
  double t981;
  double t934;
  double t935;
  double t936;
  double t958;
  double t959;
  double t960;
  double t962;
  double t963;
  double t967;
  double t968;
  double t969;
  double t970;
  double t972;
  double t973;
  double t974;
  double t975;
  double t977;
  double t978;
  double t982;
  double t983;
  double t984;
  double t986;
  double t987;
  double t988;
  double t994;
  double t995;
  double t996;
  double t937;
  double t938;
  double t939;
  double t940;
  double t941;
  double t942;
  t793 = Cos(var1[5]);
  t807 = Sin(var1[3]);
  t792 = Cos(var1[3]);
  t800 = Sin(var1[4]);
  t809 = Sin(var1[5]);
  t829 = Cos(var1[14]);
  t806 = t792*t793*t800;
  t818 = t807*t809;
  t819 = t806 + t818;
  t789 = Sin(var1[14]);
  t834 = -1.*t793*t807;
  t836 = t792*t800*t809;
  t837 = t834 + t836;
  t845 = Cos(var1[15]);
  t826 = t789*t819;
  t839 = t829*t837;
  t842 = t826 + t839;
  t775 = Sin(var1[15]);
  t846 = t829*t819;
  t848 = -1.*t789*t837;
  t850 = t846 + t848;
  t769 = Cos(var1[17]);
  t883 = t793*t807*t800;
  t884 = -1.*t792*t809;
  t885 = t883 + t884;
  t887 = t792*t793;
  t889 = t807*t800*t809;
  t890 = t887 + t889;
  t865 = Sin(var1[17]);
  t869 = Cos(var1[16]);
  t870 = Cos(var1[4]);
  t874 = Sin(var1[16]);
  t886 = t789*t885;
  t891 = t829*t890;
  t892 = t886 + t891;
  t894 = t829*t885;
  t895 = -1.*t789*t890;
  t896 = t894 + t895;
  t911 = t870*t793*t789;
  t912 = t829*t870*t809;
  t914 = t911 + t912;
  t917 = t829*t870*t793;
  t919 = -1.*t870*t789*t809;
  t920 = t917 + t919;
  t844 = -1.*t775*t842;
  t858 = t845*t850;
  t862 = t844 + t858;
  t873 = t869*t792*t870;
  t875 = t845*t842;
  t876 = t775*t850;
  t878 = t875 + t876;
  t879 = t874*t878;
  t880 = t873 + t879;
  t893 = -1.*t775*t892;
  t897 = t845*t896;
  t898 = t893 + t897;
  t900 = t869*t870*t807;
  t902 = t845*t892;
  t903 = t775*t896;
  t904 = t902 + t903;
  t905 = t874*t904;
  t907 = t900 + t905;
  t915 = -1.*t775*t914;
  t921 = t845*t920;
  t923 = t915 + t921;
  t925 = -1.*t869*t800;
  t926 = t845*t914;
  t927 = t775*t920;
  t928 = t926 + t927;
  t929 = t874*t928;
  t931 = t925 + t929;
  t956 = -1.*t869;
  t957 = 1. + t956;
  t980 = -1.*t769;
  t981 = 1. + t980;
  t934 = t865*t862;
  t935 = t769*t880;
  t936 = t934 + t935;
  t958 = -0.049*t957;
  t959 = -0.135*t874;
  t960 = 0. + t958 + t959;
  t962 = 0.135*t789;
  t963 = 0. + t962;
  t967 = -1.*t829;
  t968 = 1. + t967;
  t969 = -0.135*t968;
  t970 = 0. + t969;
  t972 = -1.*t845;
  t973 = 1. + t972;
  t974 = -0.135*t973;
  t975 = 0. + t974;
  t977 = 0.135*t775;
  t978 = 0. + t977;
  t982 = -0.09*t981;
  t983 = 0.049*t865;
  t984 = 0. + t982 + t983;
  t986 = -0.135*t957;
  t987 = 0.049*t874;
  t988 = 0. + t986 + t987;
  t994 = -0.049*t981;
  t995 = -0.09*t865;
  t996 = 0. + t994 + t995;
  t937 = t865*t898;
  t938 = t769*t907;
  t939 = t937 + t938;
  t940 = t865*t923;
  t941 = t769*t931;
  t942 = t940 + t941;
  p_output1[0]=-1.*t769*t862 + t865*t880;
  p_output1[1]=-1.*t769*t898 + t865*t907;
  p_output1[2]=-1.*t769*t923 + t865*t931;
  p_output1[3]=0.;
  p_output1[4]=t936;
  p_output1[5]=t939;
  p_output1[6]=t942;
  p_output1[7]=0.;
  p_output1[8]=t792*t870*t874 - 1.*t869*t878;
  p_output1[9]=t807*t870*t874 - 1.*t869*t904;
  p_output1[10]=-1.*t800*t874 - 1.*t869*t928;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t792*t870*t874 + t869*t878) - 0.21*(t769*t862 - 1.*t865*t880) - 0.049*t936 + t792*t870*t960 + t819*t963 + t837*t970 + t842*t975 + t850*t978 + t862*t984 + t878*t988 + t880*t996 + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t807*t870*t874 + t869*t904) - 0.21*(t769*t898 - 1.*t865*t907) - 0.049*t939 + t807*t870*t960 + t885*t963 + t890*t970 + t892*t975 + t896*t978 + t898*t984 + t904*t988 + t907*t996 + var1[1];
  p_output1[14]=0. - 0.1305*(t800*t874 + t869*t928) - 0.21*(t769*t923 - 1.*t865*t931) - 0.049*t942 - 1.*t800*t960 + t793*t870*t963 + t809*t870*t970 + t914*t975 + t920*t978 + t923*t984 + t928*t988 + t931*t996 + var1[2];
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

#include "H_knee_joint_right.hh"

namespace SymExpression
{

void H_knee_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
