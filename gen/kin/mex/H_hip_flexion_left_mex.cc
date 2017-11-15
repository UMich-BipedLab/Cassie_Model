/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:03 GMT-05:00
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
  double t878;
  double t892;
  double t877;
  double t881;
  double t897;
  double t874;
  double t912;
  double t913;
  double t916;
  double t885;
  double t898;
  double t909;
  double t917;
  double t839;
  double t923;
  double t925;
  double t961;
  double t964;
  double t965;
  double t954;
  double t955;
  double t958;
  double t943;
  double t951;
  double t927;
  double t938;
  double t941;
  double t942;
  double t944;
  double t950;
  double t911;
  double t919;
  double t920;
  double t971;
  double t972;
  double t973;
  double t978;
  double t980;
  double t981;
  double t960;
  double t966;
  double t967;
  double t996;
  double t998;
  double t999;
  double t1002;
  double t1003;
  double t1005;
  double t990;
  double t993;
  double t994;
  double t1068;
  double t1069;
  double t1093;
  double t1094;
  double t1009;
  double t1012;
  double t1016;
  double t1045;
  double t1047;
  double t1049;
  double t1058;
  double t1062;
  double t1064;
  double t1070;
  double t1071;
  double t1072;
  double t1076;
  double t1077;
  double t1079;
  double t1099;
  double t1100;
  double t1101;
  double t1103;
  double t1104;
  double t1107;
  double t1017;
  double t1020;
  double t1021;
  double t1022;
  double t1023;
  double t1024;
  t878 = Cos(var1[5]);
  t892 = Sin(var1[3]);
  t877 = Cos(var1[3]);
  t881 = Sin(var1[4]);
  t897 = Sin(var1[5]);
  t874 = Cos(var1[6]);
  t912 = -1.*t878*t892;
  t913 = t877*t881*t897;
  t916 = t912 + t913;
  t885 = t877*t878*t881;
  t898 = t892*t897;
  t909 = t885 + t898;
  t917 = Sin(var1[6]);
  t839 = Cos(var1[8]);
  t923 = Cos(var1[4]);
  t925 = Cos(var1[7]);
  t961 = t877*t878;
  t964 = t892*t881*t897;
  t965 = t961 + t964;
  t954 = t878*t892*t881;
  t955 = -1.*t877*t897;
  t958 = t954 + t955;
  t943 = Sin(var1[7]);
  t951 = Sin(var1[8]);
  t927 = t877*t923*t925;
  t938 = t874*t916;
  t941 = t909*t917;
  t942 = t938 + t941;
  t944 = t942*t943;
  t950 = t927 + t944;
  t911 = t874*t909;
  t919 = -1.*t916*t917;
  t920 = t911 + t919;
  t971 = t923*t925*t892;
  t972 = t874*t965;
  t973 = t958*t917;
  t978 = t972 + t973;
  t980 = t978*t943;
  t981 = t971 + t980;
  t960 = t874*t958;
  t966 = -1.*t965*t917;
  t967 = t960 + t966;
  t996 = -1.*t925*t881;
  t998 = t923*t874*t897;
  t999 = t923*t878*t917;
  t1002 = t998 + t999;
  t1003 = t1002*t943;
  t1005 = t996 + t1003;
  t990 = t923*t878*t874;
  t993 = -1.*t923*t897*t917;
  t994 = t990 + t993;
  t1068 = -1.*t925;
  t1069 = 1. + t1068;
  t1093 = -1.*t839;
  t1094 = 1. + t1093;
  t1009 = t839*t950;
  t1012 = t920*t951;
  t1016 = t1009 + t1012;
  t1045 = -1.*t874;
  t1047 = 1. + t1045;
  t1049 = 0.135*t1047;
  t1058 = 0. + t1049;
  t1062 = -0.135*t917;
  t1064 = 0. + t1062;
  t1070 = 0.135*t1069;
  t1071 = 0.049*t943;
  t1072 = 0. + t1070 + t1071;
  t1076 = -0.049*t1069;
  t1077 = 0.135*t943;
  t1079 = 0. + t1076 + t1077;
  t1099 = -0.049*t1094;
  t1100 = -0.09*t951;
  t1101 = 0. + t1099 + t1100;
  t1103 = -0.09*t1094;
  t1104 = 0.049*t951;
  t1107 = 0. + t1103 + t1104;
  t1017 = t839*t981;
  t1020 = t967*t951;
  t1021 = t1017 + t1020;
  t1022 = t839*t1005;
  t1023 = t994*t951;
  t1024 = t1022 + t1023;
  p_output1[0]=-1.*t839*t920 + t950*t951;
  p_output1[1]=-1.*t839*t967 + t951*t981;
  p_output1[2]=t1005*t951 - 1.*t839*t994;
  p_output1[3]=0.;
  p_output1[4]=t1016;
  p_output1[5]=t1021;
  p_output1[6]=t1024;
  p_output1[7]=0.;
  p_output1[8]=-1.*t925*t942 + t877*t923*t943;
  p_output1[9]=t892*t923*t943 - 1.*t925*t978;
  p_output1[10]=-1.*t1002*t925 - 1.*t881*t943;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t1016 + t1064*t909 + t1058*t916 + t1107*t920 + t1079*t877*t923 + t1072*t942 + 0.135*(t925*t942 - 1.*t877*t923*t943) + t1101*t950 - 0.09*(t839*t920 - 1.*t950*t951) + var1[0];
  p_output1[13]=0. - 0.049*t1021 + t1079*t892*t923 + t1064*t958 + t1058*t965 + t1107*t967 + t1072*t978 + 0.135*(-1.*t892*t923*t943 + t925*t978) + t1101*t981 - 0.09*(t839*t967 - 1.*t951*t981) + var1[1];
  p_output1[14]=0. - 0.049*t1024 + t1002*t1072 + t1005*t1101 - 1.*t1079*t881 + t1064*t878*t923 + t1058*t897*t923 + 0.135*(t1002*t925 + t881*t943) + t1107*t994 - 0.09*(-1.*t1005*t951 + t839*t994) + var1[2];
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
