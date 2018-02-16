/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:07 GMT-05:00
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
  double t733;
  double t737;
  double t738;
  double t731;
  double t739;
  double t704;
  double t736;
  double t740;
  double t752;
  double t758;
  double t759;
  double t761;
  double t763;
  double t773;
  double t780;
  double t782;
  double t785;
  double t770;
  double t771;
  double t772;
  double t795;
  double t810;
  double t812;
  double t813;
  double t816;
  double t807;
  double t808;
  double t809;
  double t821;
  double t822;
  double t824;
  double t705;
  double t715;
  double t727;
  double t730;
  double t767;
  double t768;
  double t844;
  double t845;
  double t846;
  double t848;
  double t849;
  double t850;
  double t783;
  double t786;
  double t791;
  double t796;
  double t798;
  double t799;
  double t852;
  double t853;
  double t854;
  double t815;
  double t817;
  double t818;
  double t826;
  double t827;
  double t830;
  double t865;
  double t866;
  double t867;
  double t869;
  double t870;
  double t871;
  double t884;
  double t885;
  double t886;
  double t893;
  double t894;
  double t895;
  double t897;
  double t898;
  double t899;
  double t912;
  double t913;
  double t914;
  double t921;
  double t922;
  double t923;
  double t925;
  double t926;
  double t927;
  double t940;
  double t941;
  double t942;
  double t949;
  double t950;
  double t951;
  double t953;
  double t954;
  double t955;
  double t967;
  double t968;
  double t969;
  double t971;
  double t972;
  double t976;
  double t977;
  double t978;
  double t989;
  double t990;
  double t991;
  double t994;
  double t995;
  double t996;
  double t1000;
  double t1001;
  double t1014;
  double t1015;
  double t1016;
  double t1020;
  double t1021;
  double t1022;
  double t1038;
  double t1039;
  double t1051;
  double t1052;
  double t1053;
  double t1055;
  double t1056;
  double t1060;
  double t1061;
  double t1017;
  double t1018;
  double t1019;
  double t1023;
  double t1024;
  double t1025;
  double t1026;
  double t1027;
  double t1028;
  double t1029;
  double t1030;
  double t1031;
  double t857;
  double t859;
  double t861;
  double t1075;
  double t1076;
  double t1077;
  double t1079;
  double t1080;
  double t1091;
  double t1092;
  double t1093;
  double t1095;
  double t1096;
  double t1097;
  double t1106;
  double t1107;
  double t1108;
  double t1110;
  double t1111;
  double t1112;
  double t877;
  double t878;
  double t879;
  double t1121;
  double t1122;
  double t1124;
  double t1125;
  double t1126;
  double t1135;
  double t1136;
  double t1137;
  double t1149;
  double t1150;
  double t1151;
  t733 = Cos(var1[5]);
  t737 = Sin(var1[3]);
  t738 = Sin(var1[4]);
  t731 = Cos(var1[3]);
  t739 = Sin(var1[5]);
  t704 = Cos(var1[6]);
  t736 = -1.*t731*t733;
  t740 = -1.*t737*t738*t739;
  t752 = t736 + t740;
  t758 = -1.*t733*t737*t738;
  t759 = t731*t739;
  t761 = t758 + t759;
  t763 = Sin(var1[6]);
  t773 = Cos(var1[7]);
  t780 = -1.*t773;
  t782 = 1. + t780;
  t785 = Sin(var1[7]);
  t770 = t704*t752;
  t771 = t761*t763;
  t772 = t770 + t771;
  t795 = Cos(var1[4]);
  t810 = Cos(var1[8]);
  t812 = -1.*t810;
  t813 = 1. + t812;
  t816 = Sin(var1[8]);
  t807 = -1.*t795*t773*t737;
  t808 = t772*t785;
  t809 = t807 + t808;
  t821 = t704*t761;
  t822 = -1.*t752*t763;
  t824 = t821 + t822;
  t705 = -1.*t704;
  t715 = 1. + t705;
  t727 = 0.135*t715;
  t730 = 0. + t727;
  t767 = -0.135*t763;
  t768 = 0. + t767;
  t844 = -1.*t733*t737;
  t845 = t731*t738*t739;
  t846 = t844 + t845;
  t848 = t731*t733*t738;
  t849 = t737*t739;
  t850 = t848 + t849;
  t783 = 0.135*t782;
  t786 = 0.049*t785;
  t791 = 0. + t783 + t786;
  t796 = -0.049*t782;
  t798 = 0.135*t785;
  t799 = 0. + t796 + t798;
  t852 = t704*t846;
  t853 = t850*t763;
  t854 = t852 + t853;
  t815 = -0.049*t813;
  t817 = -0.09*t816;
  t818 = 0. + t815 + t817;
  t826 = -0.09*t813;
  t827 = 0.049*t816;
  t830 = 0. + t826 + t827;
  t865 = t731*t795*t773;
  t866 = t854*t785;
  t867 = t865 + t866;
  t869 = t704*t850;
  t870 = -1.*t846*t763;
  t871 = t869 + t870;
  t884 = t731*t795*t704*t739;
  t885 = t731*t795*t733*t763;
  t886 = t884 + t885;
  t893 = -1.*t731*t773*t738;
  t894 = t886*t785;
  t895 = t893 + t894;
  t897 = t731*t795*t733*t704;
  t898 = -1.*t731*t795*t739*t763;
  t899 = t897 + t898;
  t912 = t795*t704*t737*t739;
  t913 = t795*t733*t737*t763;
  t914 = t912 + t913;
  t921 = -1.*t773*t737*t738;
  t922 = t914*t785;
  t923 = t921 + t922;
  t925 = t795*t733*t704*t737;
  t926 = -1.*t795*t737*t739*t763;
  t927 = t925 + t926;
  t940 = -1.*t704*t738*t739;
  t941 = -1.*t733*t738*t763;
  t942 = t940 + t941;
  t949 = -1.*t795*t773;
  t950 = t942*t785;
  t951 = t949 + t950;
  t953 = -1.*t733*t704*t738;
  t954 = t738*t739*t763;
  t955 = t953 + t954;
  t967 = t733*t737;
  t968 = -1.*t731*t738*t739;
  t969 = t967 + t968;
  t971 = t969*t763;
  t972 = t869 + t971;
  t976 = t704*t969;
  t977 = -1.*t850*t763;
  t978 = t976 + t977;
  t989 = t733*t737*t738;
  t990 = -1.*t731*t739;
  t991 = t989 + t990;
  t994 = t704*t991;
  t995 = t752*t763;
  t996 = t994 + t995;
  t1000 = -1.*t991*t763;
  t1001 = t770 + t1000;
  t1014 = t795*t733*t704;
  t1015 = -1.*t795*t739*t763;
  t1016 = t1014 + t1015;
  t1020 = -1.*t795*t704*t739;
  t1021 = -1.*t795*t733*t763;
  t1022 = t1020 + t1021;
  t1038 = -1.*t704*t846;
  t1039 = t1038 + t977;
  t1051 = t731*t733;
  t1052 = t737*t738*t739;
  t1053 = t1051 + t1052;
  t1055 = -1.*t1053*t763;
  t1056 = t994 + t1055;
  t1060 = -1.*t704*t1053;
  t1061 = t1060 + t1000;
  t1017 = 0.135*t773*t1016;
  t1018 = t1016*t791;
  t1019 = t1016*t785*t818;
  t1023 = t1022*t830;
  t1024 = t810*t1016*t785;
  t1025 = t1022*t816;
  t1026 = t1024 + t1025;
  t1027 = -0.049*t1026;
  t1028 = t810*t1022;
  t1029 = -1.*t1016*t785*t816;
  t1030 = t1028 + t1029;
  t1031 = -0.09*t1030;
  t857 = t773*t854;
  t859 = -1.*t731*t795*t785;
  t861 = t857 + t859;
  t1075 = 0.135*t773;
  t1076 = -0.049*t785;
  t1077 = t1075 + t1076;
  t1079 = 0.049*t773;
  t1080 = t1079 + t798;
  t1091 = t704*t1053;
  t1092 = t991*t763;
  t1093 = t1091 + t1092;
  t1095 = t773*t1093;
  t1096 = -1.*t795*t737*t785;
  t1097 = t1095 + t1096;
  t1106 = t795*t704*t739;
  t1107 = t795*t733*t763;
  t1108 = t1106 + t1107;
  t1110 = t773*t1108;
  t1111 = t738*t785;
  t1112 = t1110 + t1111;
  t877 = t810*t871;
  t878 = -1.*t867*t816;
  t879 = t877 + t878;
  t1121 = 0.049*t810;
  t1122 = t1121 + t817;
  t1124 = -0.09*t810;
  t1125 = -0.049*t816;
  t1126 = t1124 + t1125;
  t1135 = t795*t773*t737;
  t1136 = t1093*t785;
  t1137 = t1135 + t1136;
  t1149 = -1.*t773*t738;
  t1150 = t1108*t785;
  t1151 = t1149 + t1150;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t730*t752 + t761*t768 + t772*t791 + 0.135*(t772*t773 + t737*t785*t795) - 1.*t737*t795*t799 + t809*t818 - 0.09*(-1.*t809*t816 + t810*t824) - 0.049*(t809*t810 + t816*t824) + t824*t830;
  p_output1[10]=t731*t795*t799 + t730*t846 + t768*t850 + t791*t854 + 0.135*t861 + t818*t867 + t830*t871 - 0.049*(t810*t867 + t816*t871) - 0.09*t879;
  p_output1[11]=0;
  p_output1[12]=t730*t731*t739*t795 + t731*t733*t768*t795 - 1.*t731*t738*t799 + t791*t886 + 0.135*(t731*t738*t785 + t773*t886) + t818*t895 + t830*t899 - 0.09*(-1.*t816*t895 + t810*t899) - 0.049*(t810*t895 + t816*t899);
  p_output1[13]=t730*t737*t739*t795 + t733*t737*t768*t795 - 1.*t737*t738*t799 + t791*t914 + 0.135*(t737*t738*t785 + t773*t914) + t818*t923 + t830*t927 - 0.09*(-1.*t816*t923 + t810*t927) - 0.049*(t810*t923 + t816*t927);
  p_output1[14]=-1.*t730*t738*t739 - 1.*t733*t738*t768 - 1.*t795*t799 + t791*t942 + 0.135*(t785*t795 + t773*t942) + t818*t951 + t830*t955 - 0.09*(-1.*t816*t951 + t810*t955) - 0.049*(t810*t951 + t816*t955);
  p_output1[15]=t730*t850 + t768*t969 + 0.135*t773*t972 + t791*t972 + t785*t818*t972 + t830*t978 - 0.09*(-1.*t785*t816*t972 + t810*t978) - 0.049*(t785*t810*t972 + t816*t978);
  p_output1[16]=t752*t768 + t1001*t830 + t730*t991 + 0.135*t773*t996 + t791*t996 + t785*t818*t996 - 0.049*(t1001*t816 + t785*t810*t996) - 0.09*(t1001*t810 - 1.*t785*t816*t996);
  p_output1[17]=t1017 + t1018 + t1019 + t1023 + t1027 + t1031 + t730*t733*t795 - 1.*t739*t768*t795;
  p_output1[18]=t1039*t830 + 0.135*t763*t846 - 0.135*t704*t850 + 0.135*t773*t871 + t791*t871 + t785*t818*t871 - 0.049*(t1039*t816 + t785*t810*t871) - 0.09*(t1039*t810 - 1.*t785*t816*t871);
  p_output1[19]=0.135*t1053*t763 + 0.135*t1056*t773 + t1056*t791 - 0.049*(t1056*t785*t810 + t1061*t816) - 0.09*(t1061*t810 - 1.*t1056*t785*t816) + t1056*t785*t818 + t1061*t830 - 0.135*t704*t991;
  p_output1[20]=t1017 + t1018 + t1019 + t1023 + t1027 + t1031 - 0.135*t704*t733*t795 + 0.135*t739*t763*t795;
  p_output1[21]=t1077*t731*t795 + t1080*t854 + 0.135*(-1.*t731*t773*t795 - 1.*t785*t854) - 0.049*t810*t861 + 0.09*t816*t861 + t818*t861;
  p_output1[22]=t1080*t1093 + t1077*t737*t795 + 0.135*(-1.*t1093*t785 + t807) - 0.049*t1097*t810 + 0.09*t1097*t816 + t1097*t818;
  p_output1[23]=t1080*t1108 - 1.*t1077*t738 + 0.135*(t738*t773 - 1.*t1108*t785) - 0.049*t1112*t810 + 0.09*t1112*t816 + t1112*t818;
  p_output1[24]=t1126*t867 + t1122*t871 - 0.09*(-1.*t810*t867 - 1.*t816*t871) - 0.049*t879;
  p_output1[25]=t1056*t1122 + t1126*t1137 - 0.09*(-1.*t1137*t810 - 1.*t1056*t816) - 0.049*(t1056*t810 - 1.*t1137*t816);
  p_output1[26]=t1016*t1122 + t1126*t1151 - 0.09*(-1.*t1151*t810 - 1.*t1016*t816) - 0.049*(t1016*t810 - 1.*t1151*t816);
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_hip_flexion_left_mex.hh"

namespace SymExpression
{

void J_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
