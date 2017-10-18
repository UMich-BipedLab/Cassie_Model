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
  double t882;
  double t889;
  double t876;
  double t886;
  double t897;
  double t912;
  double t887;
  double t899;
  double t902;
  double t875;
  double t917;
  double t920;
  double t921;
  double t933;
  double t905;
  double t926;
  double t929;
  double t863;
  double t935;
  double t936;
  double t940;
  double t947;
  double t932;
  double t942;
  double t943;
  double t850;
  double t948;
  double t950;
  double t951;
  double t953;
  double t955;
  double t958;
  double t961;
  double t962;
  double t963;
  double t839;
  double t986;
  double t987;
  double t988;
  double t991;
  double t992;
  double t993;
  double t989;
  double t994;
  double t995;
  double t999;
  double t1000;
  double t1001;
  double t971;
  double t998;
  double t1002;
  double t1003;
  double t1005;
  double t1006;
  double t1007;
  double t1008;
  double t1009;
  double t1011;
  double t1023;
  double t1024;
  double t1026;
  double t1028;
  double t1029;
  double t1030;
  double t1027;
  double t1032;
  double t1033;
  double t1035;
  double t1036;
  double t1037;
  double t1038;
  double t1040;
  double t1041;
  double t945;
  double t965;
  double t969;
  double t974;
  double t975;
  double t976;
  double t1004;
  double t1012;
  double t1013;
  double t1016;
  double t1017;
  double t1018;
  double t1034;
  double t1042;
  double t1044;
  double t1048;
  double t1049;
  double t1050;
  double t1074;
  double t1075;
  double t1101;
  double t1102;
  double t1119;
  double t1120;
  double t1053;
  double t1054;
  double t1055;
  double t1076;
  double t1077;
  double t1078;
  double t1080;
  double t1082;
  double t1085;
  double t1086;
  double t1088;
  double t1089;
  double t1093;
  double t1094;
  double t1095;
  double t1096;
  double t1098;
  double t1099;
  double t1103;
  double t1104;
  double t1105;
  double t1107;
  double t1108;
  double t1109;
  double t1115;
  double t1116;
  double t1117;
  double t1121;
  double t1122;
  double t1123;
  double t1125;
  double t1126;
  double t1127;
  double t1056;
  double t1057;
  double t1058;
  double t1059;
  double t1060;
  double t1061;
  t882 = Cos(var1[5]);
  t889 = Sin(var1[3]);
  t876 = Cos(var1[3]);
  t886 = Sin(var1[4]);
  t897 = Sin(var1[5]);
  t912 = Cos(var1[14]);
  t887 = t876*t882*t886;
  t899 = t889*t897;
  t902 = t887 + t899;
  t875 = Sin(var1[14]);
  t917 = -1.*t882*t889;
  t920 = t876*t886*t897;
  t921 = t917 + t920;
  t933 = Cos(var1[15]);
  t905 = t875*t902;
  t926 = t912*t921;
  t929 = t905 + t926;
  t863 = Sin(var1[15]);
  t935 = t912*t902;
  t936 = -1.*t875*t921;
  t940 = t935 + t936;
  t947 = Cos(var1[17]);
  t932 = -1.*t863*t929;
  t942 = t933*t940;
  t943 = t932 + t942;
  t850 = Sin(var1[17]);
  t948 = Cos(var1[16]);
  t950 = Cos(var1[4]);
  t951 = t948*t876*t950;
  t953 = Sin(var1[16]);
  t955 = t933*t929;
  t958 = t863*t940;
  t961 = t955 + t958;
  t962 = t953*t961;
  t963 = t951 + t962;
  t839 = Sin(var1[18]);
  t986 = t882*t889*t886;
  t987 = -1.*t876*t897;
  t988 = t986 + t987;
  t991 = t876*t882;
  t992 = t889*t886*t897;
  t993 = t991 + t992;
  t989 = t875*t988;
  t994 = t912*t993;
  t995 = t989 + t994;
  t999 = t912*t988;
  t1000 = -1.*t875*t993;
  t1001 = t999 + t1000;
  t971 = Cos(var1[18]);
  t998 = -1.*t863*t995;
  t1002 = t933*t1001;
  t1003 = t998 + t1002;
  t1005 = t948*t950*t889;
  t1006 = t933*t995;
  t1007 = t863*t1001;
  t1008 = t1006 + t1007;
  t1009 = t953*t1008;
  t1011 = t1005 + t1009;
  t1023 = t950*t882*t875;
  t1024 = t912*t950*t897;
  t1026 = t1023 + t1024;
  t1028 = t912*t950*t882;
  t1029 = -1.*t950*t875*t897;
  t1030 = t1028 + t1029;
  t1027 = -1.*t863*t1026;
  t1032 = t933*t1030;
  t1033 = t1027 + t1032;
  t1035 = -1.*t948*t886;
  t1036 = t933*t1026;
  t1037 = t863*t1030;
  t1038 = t1036 + t1037;
  t1040 = t953*t1038;
  t1041 = t1035 + t1040;
  t945 = t850*t943;
  t965 = t947*t963;
  t969 = t945 + t965;
  t974 = t947*t943;
  t975 = -1.*t850*t963;
  t976 = t974 + t975;
  t1004 = t850*t1003;
  t1012 = t947*t1011;
  t1013 = t1004 + t1012;
  t1016 = t947*t1003;
  t1017 = -1.*t850*t1011;
  t1018 = t1016 + t1017;
  t1034 = t850*t1033;
  t1042 = t947*t1041;
  t1044 = t1034 + t1042;
  t1048 = t947*t1033;
  t1049 = -1.*t850*t1041;
  t1050 = t1048 + t1049;
  t1074 = -1.*t948;
  t1075 = 1. + t1074;
  t1101 = -1.*t947;
  t1102 = 1. + t1101;
  t1119 = -1.*t971;
  t1120 = 1. + t1119;
  t1053 = t971*t969;
  t1054 = t839*t976;
  t1055 = t1053 + t1054;
  t1076 = -0.049*t1075;
  t1077 = -0.135*t953;
  t1078 = 0. + t1076 + t1077;
  t1080 = 0.135*t875;
  t1082 = 0. + t1080;
  t1085 = -1.*t912;
  t1086 = 1. + t1085;
  t1088 = -0.135*t1086;
  t1089 = 0. + t1088;
  t1093 = -1.*t933;
  t1094 = 1. + t1093;
  t1095 = -0.135*t1094;
  t1096 = 0. + t1095;
  t1098 = 0.135*t863;
  t1099 = 0. + t1098;
  t1103 = -0.09*t1102;
  t1104 = 0.049*t850;
  t1105 = 0. + t1103 + t1104;
  t1107 = -0.135*t1075;
  t1108 = 0.049*t953;
  t1109 = 0. + t1107 + t1108;
  t1115 = -0.049*t1102;
  t1116 = -0.09*t850;
  t1117 = 0. + t1115 + t1116;
  t1121 = -0.049*t1120;
  t1122 = -0.21*t839;
  t1123 = 0. + t1121 + t1122;
  t1125 = -0.21*t1120;
  t1126 = 0.049*t839;
  t1127 = 0. + t1125 + t1126;
  t1056 = t971*t1013;
  t1057 = t839*t1018;
  t1058 = t1056 + t1057;
  t1059 = t971*t1044;
  t1060 = t839*t1050;
  t1061 = t1059 + t1060;
  p_output1[0]=t839*t969 - 1.*t971*t976;
  p_output1[1]=t1013*t839 - 1.*t1018*t971;
  p_output1[2]=t1044*t839 - 1.*t1050*t971;
  p_output1[3]=0.;
  p_output1[4]=t1055;
  p_output1[5]=t1058;
  p_output1[6]=t1061;
  p_output1[7]=0.;
  p_output1[8]=t876*t950*t953 - 1.*t948*t961;
  p_output1[9]=-1.*t1008*t948 + t889*t950*t953;
  p_output1[10]=-1.*t1038*t948 - 1.*t886*t953;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0016*t1055 + t1082*t902 + t1089*t921 + t1096*t929 + t1099*t940 + t1105*t943 + t1078*t876*t950 + t1109*t961 - 0.1305*(-1.*t876*t950*t953 + t948*t961) + t1117*t963 + t1123*t969 + t1127*t976 - 0.2707*(-1.*t839*t969 + t971*t976) + var1[0];
  p_output1[13]=0. - 0.0016*t1058 + t1001*t1099 + t1003*t1105 + t1008*t1109 + t1011*t1117 + t1013*t1123 + t1018*t1127 + t1078*t889*t950 - 0.1305*(t1008*t948 - 1.*t889*t950*t953) - 0.2707*(-1.*t1013*t839 + t1018*t971) + t1082*t988 + t1089*t993 + t1096*t995 + var1[1];
  p_output1[14]=0. - 0.0016*t1061 + t1026*t1096 + t1030*t1099 + t1033*t1105 + t1038*t1109 + t1041*t1117 + t1044*t1123 + t1050*t1127 - 1.*t1078*t886 + t1082*t882*t950 + t1089*t897*t950 - 0.1305*(t1038*t948 + t886*t953) - 0.2707*(-1.*t1044*t839 + t1050*t971) + var1[2];
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

#include "H_fixed_knee_to_shin_right.hh"

namespace SymExpression
{

void H_fixed_knee_to_shin_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
