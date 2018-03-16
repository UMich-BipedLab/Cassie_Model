/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:15:59 GMT-04:00
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
  double t562;
  double t702;
  double t683;
  double t690;
  double t704;
  double t720;
  double t696;
  double t710;
  double t714;
  double t658;
  double t726;
  double t729;
  double t732;
  double t742;
  double t715;
  double t733;
  double t737;
  double t655;
  double t743;
  double t746;
  double t756;
  double t778;
  double t740;
  double t765;
  double t769;
  double t651;
  double t782;
  double t786;
  double t787;
  double t557;
  double t440;
  double t628;
  double t819;
  double t820;
  double t821;
  double t824;
  double t826;
  double t827;
  double t823;
  double t828;
  double t829;
  double t833;
  double t841;
  double t843;
  double t832;
  double t844;
  double t847;
  double t861;
  double t863;
  double t865;
  double t852;
  double t868;
  double t870;
  double t884;
  double t885;
  double t891;
  double t915;
  double t916;
  double t917;
  double t923;
  double t924;
  double t926;
  double t919;
  double t927;
  double t932;
  double t940;
  double t941;
  double t944;
  double t939;
  double t948;
  double t950;
  double t954;
  double t957;
  double t958;
  double t952;
  double t961;
  double t964;
  double t969;
  double t970;
  double t972;
  double t770;
  double t788;
  double t794;
  double t803;
  double t804;
  double t812;
  double t877;
  double t892;
  double t900;
  double t903;
  double t907;
  double t908;
  double t965;
  double t973;
  double t978;
  double t987;
  double t990;
  double t993;
  double t1036;
  double t1042;
  double t1088;
  double t1092;
  double t1108;
  double t1117;
  double t1143;
  double t1145;
  double t1028;
  double t1031;
  double t1068;
  double t1071;
  double t1072;
  double t1074;
  double t1075;
  double t1051;
  double t1052;
  double t1054;
  double t1079;
  double t1081;
  double t1084;
  double t1095;
  double t1096;
  double t1097;
  double t1102;
  double t1103;
  double t1104;
  double t1127;
  double t1128;
  double t1129;
  double t1132;
  double t1138;
  double t1139;
  double t1151;
  double t1154;
  double t1158;
  double t1162;
  double t1163;
  double t1167;
  double t1187;
  double t1188;
  double t1192;
  double t1203;
  double t1207;
  double t1208;
  t562 = Cos(var1[1]);
  t702 = Cos(var1[3]);
  t683 = Cos(var1[2]);
  t690 = Sin(var1[3]);
  t704 = Sin(var1[2]);
  t720 = Cos(var1[4]);
  t696 = -1.*t562*t683*t690;
  t710 = -1.*t702*t562*t704;
  t714 = t696 + t710;
  t658 = Sin(var1[4]);
  t726 = t702*t562*t683;
  t729 = -1.*t562*t690*t704;
  t732 = t726 + t729;
  t742 = Cos(var1[5]);
  t715 = t658*t714;
  t733 = t720*t732;
  t737 = t715 + t733;
  t655 = Sin(var1[5]);
  t743 = t720*t714;
  t746 = -1.*t658*t732;
  t756 = t743 + t746;
  t778 = Cos(var1[6]);
  t740 = -1.*t655*t737;
  t765 = t742*t756;
  t769 = t740 + t765;
  t651 = Sin(var1[6]);
  t782 = t742*t737;
  t786 = t655*t756;
  t787 = t782 + t786;
  t557 = Cos(var1[0]);
  t440 = Sin(var1[1]);
  t628 = Sin(var1[0]);
  t819 = t557*t683*t440;
  t820 = -1.*t628*t704;
  t821 = t819 + t820;
  t824 = -1.*t683*t628;
  t826 = -1.*t557*t440*t704;
  t827 = t824 + t826;
  t823 = -1.*t690*t821;
  t828 = t702*t827;
  t829 = t823 + t828;
  t833 = t702*t821;
  t841 = t690*t827;
  t843 = t833 + t841;
  t832 = t658*t829;
  t844 = t720*t843;
  t847 = t832 + t844;
  t861 = t720*t829;
  t863 = -1.*t658*t843;
  t865 = t861 + t863;
  t852 = -1.*t655*t847;
  t868 = t742*t865;
  t870 = t852 + t868;
  t884 = t742*t847;
  t885 = t655*t865;
  t891 = t884 + t885;
  t915 = t683*t628*t440;
  t916 = t557*t704;
  t917 = t915 + t916;
  t923 = t557*t683;
  t924 = -1.*t628*t440*t704;
  t926 = t923 + t924;
  t919 = -1.*t690*t917;
  t927 = t702*t926;
  t932 = t919 + t927;
  t940 = t702*t917;
  t941 = t690*t926;
  t944 = t940 + t941;
  t939 = t658*t932;
  t948 = t720*t944;
  t950 = t939 + t948;
  t954 = t720*t932;
  t957 = -1.*t658*t944;
  t958 = t954 + t957;
  t952 = -1.*t655*t950;
  t961 = t742*t958;
  t964 = t952 + t961;
  t969 = t742*t950;
  t970 = t655*t958;
  t972 = t969 + t970;
  t770 = t651*t769;
  t788 = t778*t787;
  t794 = t770 + t788;
  t803 = t778*t769;
  t804 = -1.*t651*t787;
  t812 = t803 + t804;
  t877 = t651*t870;
  t892 = t778*t891;
  t900 = t877 + t892;
  t903 = t778*t870;
  t907 = -1.*t651*t891;
  t908 = t903 + t907;
  t965 = t651*t964;
  t973 = t778*t972;
  t978 = t965 + t973;
  t987 = t778*t964;
  t990 = -1.*t651*t972;
  t993 = t987 + t990;
  t1036 = -1.*t702;
  t1042 = 1. + t1036;
  t1088 = -1.*t720;
  t1092 = 1. + t1088;
  t1108 = -1.*t742;
  t1117 = 1. + t1108;
  t1143 = -1.*t778;
  t1145 = 1. + t1143;
  t1028 = -1.*t562;
  t1031 = 1. + t1028;
  t1068 = -1.*t683;
  t1071 = 1. + t1068;
  t1072 = -0.049*t1071;
  t1074 = -0.09*t704;
  t1075 = 0. + t1072 + t1074;
  t1051 = -0.049*t1042;
  t1052 = -0.21*t690;
  t1054 = 0. + t1051 + t1052;
  t1079 = -0.21*t1042;
  t1081 = 0.049*t690;
  t1084 = 0. + t1079 + t1081;
  t1095 = -0.2707*t1092;
  t1096 = 0.0016*t658;
  t1097 = 0. + t1095 + t1096;
  t1102 = -0.0016*t1092;
  t1103 = -0.2707*t658;
  t1104 = 0. + t1102 + t1103;
  t1127 = 0.0184*t1117;
  t1128 = -0.7055*t655;
  t1129 = 0. + t1127 + t1128;
  t1132 = -0.7055*t1117;
  t1138 = -0.0184*t655;
  t1139 = 0. + t1132 + t1138;
  t1151 = -1.1135*t1145;
  t1154 = 0.0216*t651;
  t1158 = 0. + t1151 + t1154;
  t1162 = -0.0216*t1145;
  t1163 = -1.1135*t651;
  t1167 = 0. + t1162 + t1163;
  t1187 = 0.135*t1031;
  t1188 = 0.049*t440;
  t1192 = 0. + t1187 + t1188;
  t1203 = -0.09*t1071;
  t1207 = 0.049*t704;
  t1208 = 0. + t1203 + t1207;
  p_output1[0]=0. + t440;
  p_output1[1]=0. + t557*t562;
  p_output1[2]=0. + t562*t628;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t794 + 0.766044*t812;
  p_output1[5]=0. - 0.642788*t900 - 0.766044*t908;
  p_output1[6]=0. - 0.642788*t978 - 0.766044*t993;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t794 + 0.642788*t812;
  p_output1[9]=0. + 0.766044*t900 - 0.642788*t908;
  p_output1[10]=0. + 0.766044*t978 - 0.642788*t993;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.049*t1031 + 0.004500000000000004*t440 + t1075*t562 + t1054*t562*t683 - 1.*t1084*t562*t704 + t1097*t714 + t1104*t732 + t1129*t737 + t1139*t756 + t1158*t769 + t1167*t787 + 0.0306*t794 - 1.1312*t812;
  p_output1[13]=0. - 0.135*(1. - 1.*t557) - 1.*t1192*t557 - 1.*t1075*t440*t557 - 0.1305*t557*t562 + t1208*t628 - 1.*t1054*t821 - 1.*t1084*t827 - 1.*t1097*t829 - 1.*t1104*t843 - 1.*t1129*t847 - 1.*t1139*t865 - 1.*t1158*t870 - 1.*t1167*t891 - 0.0306*t900 + 1.1312*t908;
  p_output1[14]=-0.07996 - 1.*t1208*t557 + 0.135*t628 - 1.*t1192*t628 - 1.*t1075*t440*t628 - 0.1305*t562*t628 - 1.*t1054*t917 - 1.*t1084*t926 - 1.*t1097*t932 - 1.*t1104*t944 - 1.*t1129*t950 - 1.*t1139*t958 - 1.*t1158*t964 - 1.*t1167*t972 - 0.0306*t978 + 1.1312*t993;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
