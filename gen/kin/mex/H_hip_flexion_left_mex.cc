/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:56 GMT-04:00
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
  double t842;
  double t856;
  double t841;
  double t845;
  double t861;
  double t838;
  double t876;
  double t877;
  double t880;
  double t849;
  double t862;
  double t873;
  double t881;
  double t803;
  double t887;
  double t889;
  double t925;
  double t928;
  double t929;
  double t918;
  double t919;
  double t922;
  double t907;
  double t915;
  double t891;
  double t902;
  double t905;
  double t906;
  double t908;
  double t914;
  double t875;
  double t883;
  double t884;
  double t935;
  double t936;
  double t937;
  double t942;
  double t944;
  double t945;
  double t924;
  double t930;
  double t931;
  double t960;
  double t962;
  double t963;
  double t966;
  double t967;
  double t969;
  double t954;
  double t957;
  double t958;
  double t1032;
  double t1033;
  double t1057;
  double t1058;
  double t973;
  double t976;
  double t980;
  double t1009;
  double t1011;
  double t1013;
  double t1022;
  double t1026;
  double t1028;
  double t1034;
  double t1035;
  double t1036;
  double t1040;
  double t1041;
  double t1043;
  double t1063;
  double t1064;
  double t1065;
  double t1067;
  double t1068;
  double t1071;
  double t981;
  double t984;
  double t985;
  double t986;
  double t987;
  double t988;
  t842 = Cos(var1[5]);
  t856 = Sin(var1[3]);
  t841 = Cos(var1[3]);
  t845 = Sin(var1[4]);
  t861 = Sin(var1[5]);
  t838 = Cos(var1[6]);
  t876 = -1.*t842*t856;
  t877 = t841*t845*t861;
  t880 = t876 + t877;
  t849 = t841*t842*t845;
  t862 = t856*t861;
  t873 = t849 + t862;
  t881 = Sin(var1[6]);
  t803 = Cos(var1[8]);
  t887 = Cos(var1[4]);
  t889 = Cos(var1[7]);
  t925 = t841*t842;
  t928 = t856*t845*t861;
  t929 = t925 + t928;
  t918 = t842*t856*t845;
  t919 = -1.*t841*t861;
  t922 = t918 + t919;
  t907 = Sin(var1[7]);
  t915 = Sin(var1[8]);
  t891 = t841*t887*t889;
  t902 = t838*t880;
  t905 = t873*t881;
  t906 = t902 + t905;
  t908 = t906*t907;
  t914 = t891 + t908;
  t875 = t838*t873;
  t883 = -1.*t880*t881;
  t884 = t875 + t883;
  t935 = t887*t889*t856;
  t936 = t838*t929;
  t937 = t922*t881;
  t942 = t936 + t937;
  t944 = t942*t907;
  t945 = t935 + t944;
  t924 = t838*t922;
  t930 = -1.*t929*t881;
  t931 = t924 + t930;
  t960 = -1.*t889*t845;
  t962 = t887*t838*t861;
  t963 = t887*t842*t881;
  t966 = t962 + t963;
  t967 = t966*t907;
  t969 = t960 + t967;
  t954 = t887*t842*t838;
  t957 = -1.*t887*t861*t881;
  t958 = t954 + t957;
  t1032 = -1.*t889;
  t1033 = 1. + t1032;
  t1057 = -1.*t803;
  t1058 = 1. + t1057;
  t973 = t803*t914;
  t976 = t884*t915;
  t980 = t973 + t976;
  t1009 = -1.*t838;
  t1011 = 1. + t1009;
  t1013 = 0.135*t1011;
  t1022 = 0. + t1013;
  t1026 = -0.135*t881;
  t1028 = 0. + t1026;
  t1034 = 0.135*t1033;
  t1035 = 0.049*t907;
  t1036 = 0. + t1034 + t1035;
  t1040 = -0.049*t1033;
  t1041 = 0.135*t907;
  t1043 = 0. + t1040 + t1041;
  t1063 = -0.049*t1058;
  t1064 = -0.09*t915;
  t1065 = 0. + t1063 + t1064;
  t1067 = -0.09*t1058;
  t1068 = 0.049*t915;
  t1071 = 0. + t1067 + t1068;
  t981 = t803*t945;
  t984 = t931*t915;
  t985 = t981 + t984;
  t986 = t803*t969;
  t987 = t958*t915;
  t988 = t986 + t987;
  p_output1[0]=-1.*t803*t884 + t914*t915;
  p_output1[1]=-1.*t803*t931 + t915*t945;
  p_output1[2]=-1.*t803*t958 + t915*t969;
  p_output1[3]=0.;
  p_output1[4]=t980;
  p_output1[5]=t985;
  p_output1[6]=t988;
  p_output1[7]=0.;
  p_output1[8]=-1.*t889*t906 + t841*t887*t907;
  p_output1[9]=t856*t887*t907 - 1.*t889*t942;
  p_output1[10]=-1.*t845*t907 - 1.*t889*t966;
  p_output1[11]=0.;
  p_output1[12]=0. + t1028*t873 + t1022*t880 + t1071*t884 + t1043*t841*t887 + t1036*t906 + 0.135*(t889*t906 - 1.*t841*t887*t907) + t1065*t914 - 0.09*(t803*t884 - 1.*t914*t915) - 0.049*t980 + var1[0];
  p_output1[13]=0. + t1043*t856*t887 + t1028*t922 + t1022*t929 + t1071*t931 + t1036*t942 + 0.135*(-1.*t856*t887*t907 + t889*t942) + t1065*t945 - 0.09*(t803*t931 - 1.*t915*t945) - 0.049*t985 + var1[1];
  p_output1[14]=0. - 1.*t1043*t845 + t1028*t842*t887 + t1022*t861*t887 + t1071*t958 + t1036*t966 + 0.135*(t845*t907 + t889*t966) + t1065*t969 - 0.09*(t803*t958 - 1.*t915*t969) - 0.049*t988 + var1[2];
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

#include "H_hip_flexion_left_mex.hh"

namespace SymExpression
{

void H_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
