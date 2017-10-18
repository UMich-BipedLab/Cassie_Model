/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:44 GMT-04:00
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
  double t806;
  double t879;
  double t883;
  double t881;
  double t885;
  double t873;
  double t882;
  double t886;
  double t887;
  double t891;
  double t900;
  double t902;
  double t903;
  double t927;
  double t920;
  double t921;
  double t924;
  double t908;
  double t933;
  double t934;
  double t935;
  double t819;
  double t826;
  double t836;
  double t846;
  double t818;
  double t955;
  double t958;
  double t959;
  double t937;
  double t938;
  double t939;
  double t941;
  double t944;
  double t945;
  double t947;
  double t975;
  double t976;
  double t977;
  double t979;
  double t982;
  double t983;
  double t985;
  double t988;
  double t989;
  double t990;
  double t995;
  double t996;
  double t997;
  double t839;
  double t850;
  double t858;
  double t875;
  double t876;
  double t894;
  double t896;
  double t897;
  double t899;
  double t909;
  double t911;
  double t912;
  double t917;
  double t1009;
  double t1010;
  double t1011;
  double t1013;
  double t1014;
  double t1015;
  double t929;
  double t932;
  double t940;
  double t942;
  double t943;
  double t1017;
  double t1018;
  double t1019;
  double t1021;
  double t1022;
  double t1023;
  double t950;
  double t951;
  double t953;
  double t1029;
  double t1030;
  double t1031;
  double t970;
  double t971;
  double t974;
  double t984;
  double t986;
  double t987;
  double t1025;
  double t1026;
  double t1027;
  double t1037;
  double t1038;
  double t1039;
  double t992;
  double t993;
  double t994;
  double t1041;
  double t1042;
  double t1043;
  double t1045;
  double t1046;
  double t1047;
  double t1061;
  double t1062;
  double t1063;
  double t1065;
  double t1066;
  double t1067;
  double t1073;
  double t1074;
  double t1075;
  double t1069;
  double t1070;
  double t1071;
  double t1081;
  double t1082;
  double t1083;
  double t1085;
  double t1086;
  double t1087;
  double t1089;
  double t1090;
  double t1091;
  t806 = Cos(var1[3]);
  t879 = Cos(var1[5]);
  t883 = Sin(var1[3]);
  t881 = Sin(var1[4]);
  t885 = Sin(var1[5]);
  t873 = Sin(var1[14]);
  t882 = t806*t879*t881;
  t886 = t883*t885;
  t887 = t882 + t886;
  t891 = Cos(var1[14]);
  t900 = -1.*t879*t883;
  t902 = t806*t881*t885;
  t903 = t900 + t902;
  t927 = Sin(var1[15]);
  t920 = t873*t887;
  t921 = t891*t903;
  t924 = t920 + t921;
  t908 = Cos(var1[15]);
  t933 = t891*t887;
  t934 = -1.*t873*t903;
  t935 = t933 + t934;
  t819 = Cos(var1[16]);
  t826 = -1.*t819;
  t836 = 1. + t826;
  t846 = Sin(var1[16]);
  t818 = Cos(var1[4]);
  t955 = t908*t924;
  t958 = t927*t935;
  t959 = t955 + t958;
  t937 = Cos(var1[17]);
  t938 = -1.*t937;
  t939 = 1. + t938;
  t941 = Sin(var1[17]);
  t944 = -1.*t927*t924;
  t945 = t908*t935;
  t947 = t944 + t945;
  t975 = t819*t806*t818;
  t976 = t846*t959;
  t977 = t975 + t976;
  t979 = Cos(var1[18]);
  t982 = -1.*t979;
  t983 = 1. + t982;
  t985 = Sin(var1[18]);
  t988 = t941*t947;
  t989 = t937*t977;
  t990 = t988 + t989;
  t995 = t937*t947;
  t996 = -1.*t941*t977;
  t997 = t995 + t996;
  t839 = -0.049*t836;
  t850 = -0.135*t846;
  t858 = 0. + t839 + t850;
  t875 = 0.135*t873;
  t876 = 0. + t875;
  t894 = -1.*t891;
  t896 = 1. + t894;
  t897 = -0.135*t896;
  t899 = 0. + t897;
  t909 = -1.*t908;
  t911 = 1. + t909;
  t912 = -0.135*t911;
  t917 = 0. + t912;
  t1009 = t879*t883*t881;
  t1010 = -1.*t806*t885;
  t1011 = t1009 + t1010;
  t1013 = t806*t879;
  t1014 = t883*t881*t885;
  t1015 = t1013 + t1014;
  t929 = 0.135*t927;
  t932 = 0. + t929;
  t940 = -0.09*t939;
  t942 = 0.049*t941;
  t943 = 0. + t940 + t942;
  t1017 = t873*t1011;
  t1018 = t891*t1015;
  t1019 = t1017 + t1018;
  t1021 = t891*t1011;
  t1022 = -1.*t873*t1015;
  t1023 = t1021 + t1022;
  t950 = -0.135*t836;
  t951 = 0.049*t846;
  t953 = 0. + t950 + t951;
  t1029 = t908*t1019;
  t1030 = t927*t1023;
  t1031 = t1029 + t1030;
  t970 = -0.049*t939;
  t971 = -0.09*t941;
  t974 = 0. + t970 + t971;
  t984 = -0.049*t983;
  t986 = -0.21*t985;
  t987 = 0. + t984 + t986;
  t1025 = -1.*t927*t1019;
  t1026 = t908*t1023;
  t1027 = t1025 + t1026;
  t1037 = t819*t818*t883;
  t1038 = t846*t1031;
  t1039 = t1037 + t1038;
  t992 = -0.21*t983;
  t993 = 0.049*t985;
  t994 = 0. + t992 + t993;
  t1041 = t941*t1027;
  t1042 = t937*t1039;
  t1043 = t1041 + t1042;
  t1045 = t937*t1027;
  t1046 = -1.*t941*t1039;
  t1047 = t1045 + t1046;
  t1061 = t818*t879*t873;
  t1062 = t891*t818*t885;
  t1063 = t1061 + t1062;
  t1065 = t891*t818*t879;
  t1066 = -1.*t818*t873*t885;
  t1067 = t1065 + t1066;
  t1073 = t908*t1063;
  t1074 = t927*t1067;
  t1075 = t1073 + t1074;
  t1069 = -1.*t927*t1063;
  t1070 = t908*t1067;
  t1071 = t1069 + t1070;
  t1081 = -1.*t819*t881;
  t1082 = t846*t1075;
  t1083 = t1081 + t1082;
  t1085 = t941*t1071;
  t1086 = t937*t1083;
  t1087 = t1085 + t1086;
  t1089 = t937*t1071;
  t1090 = -1.*t941*t1083;
  t1091 = t1089 + t1090;
  p_output1[0]=0. + t806*t818*t858 + t876*t887 + t899*t903 + t917*t924 + t932*t935 + t943*t947 + t953*t959 - 0.1305*(-1.*t806*t818*t846 + t819*t959) + t974*t977 + t987*t990 + t994*t997 - 0.2707*(-1.*t985*t990 + t979*t997) - 0.0016*(t979*t990 + t985*t997) + var1[0];
  p_output1[1]=0. + t1011*t876 + t818*t858*t883 - 0.1305*(t1031*t819 - 1.*t818*t846*t883) + t1015*t899 + t1019*t917 + t1023*t932 + t1027*t943 + t1031*t953 + t1039*t974 - 0.2707*(t1047*t979 - 1.*t1043*t985) - 0.0016*(t1043*t979 + t1047*t985) + t1043*t987 + t1047*t994 + var1[1];
  p_output1[2]=0. + t818*t876*t879 - 1.*t858*t881 - 0.1305*(t1075*t819 + t846*t881) + t818*t885*t899 + t1063*t917 + t1067*t932 + t1071*t943 + t1075*t953 + t1083*t974 - 0.2707*(t1091*t979 - 1.*t1087*t985) - 0.0016*(t1087*t979 + t1091*t985) + t1087*t987 + t1091*t994 + var1[2];
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

#include "p_fixed_knee_to_shin_right.hh"

namespace SymExpression
{

void p_fixed_knee_to_shin_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
