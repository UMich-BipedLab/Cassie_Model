/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:02 GMT-05:00
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
  double t769;
  double t773;
  double t774;
  double t767;
  double t775;
  double t740;
  double t772;
  double t776;
  double t788;
  double t794;
  double t795;
  double t797;
  double t799;
  double t809;
  double t816;
  double t818;
  double t821;
  double t806;
  double t807;
  double t808;
  double t831;
  double t846;
  double t848;
  double t849;
  double t852;
  double t843;
  double t844;
  double t845;
  double t857;
  double t858;
  double t860;
  double t741;
  double t751;
  double t763;
  double t766;
  double t803;
  double t804;
  double t880;
  double t881;
  double t882;
  double t884;
  double t885;
  double t886;
  double t819;
  double t822;
  double t827;
  double t832;
  double t834;
  double t835;
  double t888;
  double t889;
  double t890;
  double t851;
  double t853;
  double t854;
  double t862;
  double t863;
  double t866;
  double t901;
  double t902;
  double t903;
  double t905;
  double t906;
  double t907;
  double t920;
  double t921;
  double t922;
  double t929;
  double t930;
  double t931;
  double t933;
  double t934;
  double t935;
  double t948;
  double t949;
  double t950;
  double t957;
  double t958;
  double t959;
  double t961;
  double t962;
  double t963;
  double t976;
  double t977;
  double t978;
  double t985;
  double t986;
  double t987;
  double t989;
  double t990;
  double t991;
  double t1003;
  double t1004;
  double t1005;
  double t1007;
  double t1008;
  double t1012;
  double t1013;
  double t1014;
  double t1025;
  double t1026;
  double t1027;
  double t1030;
  double t1031;
  double t1032;
  double t1036;
  double t1037;
  double t1050;
  double t1051;
  double t1052;
  double t1056;
  double t1057;
  double t1058;
  double t1074;
  double t1075;
  double t1087;
  double t1088;
  double t1089;
  double t1091;
  double t1092;
  double t1096;
  double t1097;
  double t1053;
  double t1054;
  double t1055;
  double t1059;
  double t1060;
  double t1061;
  double t1062;
  double t1063;
  double t1064;
  double t1065;
  double t1066;
  double t1067;
  double t893;
  double t895;
  double t897;
  double t1111;
  double t1112;
  double t1113;
  double t1115;
  double t1116;
  double t1127;
  double t1128;
  double t1129;
  double t1131;
  double t1132;
  double t1133;
  double t1142;
  double t1143;
  double t1144;
  double t1146;
  double t1147;
  double t1148;
  double t913;
  double t914;
  double t915;
  double t1157;
  double t1158;
  double t1160;
  double t1161;
  double t1162;
  double t1171;
  double t1172;
  double t1173;
  double t1185;
  double t1186;
  double t1187;
  t769 = Cos(var1[5]);
  t773 = Sin(var1[3]);
  t774 = Sin(var1[4]);
  t767 = Cos(var1[3]);
  t775 = Sin(var1[5]);
  t740 = Cos(var1[6]);
  t772 = -1.*t767*t769;
  t776 = -1.*t773*t774*t775;
  t788 = t772 + t776;
  t794 = -1.*t769*t773*t774;
  t795 = t767*t775;
  t797 = t794 + t795;
  t799 = Sin(var1[6]);
  t809 = Cos(var1[7]);
  t816 = -1.*t809;
  t818 = 1. + t816;
  t821 = Sin(var1[7]);
  t806 = t740*t788;
  t807 = t797*t799;
  t808 = t806 + t807;
  t831 = Cos(var1[4]);
  t846 = Cos(var1[8]);
  t848 = -1.*t846;
  t849 = 1. + t848;
  t852 = Sin(var1[8]);
  t843 = -1.*t831*t809*t773;
  t844 = t808*t821;
  t845 = t843 + t844;
  t857 = t740*t797;
  t858 = -1.*t788*t799;
  t860 = t857 + t858;
  t741 = -1.*t740;
  t751 = 1. + t741;
  t763 = 0.135*t751;
  t766 = 0. + t763;
  t803 = -0.135*t799;
  t804 = 0. + t803;
  t880 = -1.*t769*t773;
  t881 = t767*t774*t775;
  t882 = t880 + t881;
  t884 = t767*t769*t774;
  t885 = t773*t775;
  t886 = t884 + t885;
  t819 = 0.135*t818;
  t822 = 0.049*t821;
  t827 = 0. + t819 + t822;
  t832 = -0.049*t818;
  t834 = 0.135*t821;
  t835 = 0. + t832 + t834;
  t888 = t740*t882;
  t889 = t886*t799;
  t890 = t888 + t889;
  t851 = -0.049*t849;
  t853 = -0.09*t852;
  t854 = 0. + t851 + t853;
  t862 = -0.09*t849;
  t863 = 0.049*t852;
  t866 = 0. + t862 + t863;
  t901 = t767*t831*t809;
  t902 = t890*t821;
  t903 = t901 + t902;
  t905 = t740*t886;
  t906 = -1.*t882*t799;
  t907 = t905 + t906;
  t920 = t767*t831*t740*t775;
  t921 = t767*t831*t769*t799;
  t922 = t920 + t921;
  t929 = -1.*t767*t809*t774;
  t930 = t922*t821;
  t931 = t929 + t930;
  t933 = t767*t831*t769*t740;
  t934 = -1.*t767*t831*t775*t799;
  t935 = t933 + t934;
  t948 = t831*t740*t773*t775;
  t949 = t831*t769*t773*t799;
  t950 = t948 + t949;
  t957 = -1.*t809*t773*t774;
  t958 = t950*t821;
  t959 = t957 + t958;
  t961 = t831*t769*t740*t773;
  t962 = -1.*t831*t773*t775*t799;
  t963 = t961 + t962;
  t976 = -1.*t740*t774*t775;
  t977 = -1.*t769*t774*t799;
  t978 = t976 + t977;
  t985 = -1.*t831*t809;
  t986 = t978*t821;
  t987 = t985 + t986;
  t989 = -1.*t769*t740*t774;
  t990 = t774*t775*t799;
  t991 = t989 + t990;
  t1003 = t769*t773;
  t1004 = -1.*t767*t774*t775;
  t1005 = t1003 + t1004;
  t1007 = t1005*t799;
  t1008 = t905 + t1007;
  t1012 = t740*t1005;
  t1013 = -1.*t886*t799;
  t1014 = t1012 + t1013;
  t1025 = t769*t773*t774;
  t1026 = -1.*t767*t775;
  t1027 = t1025 + t1026;
  t1030 = t740*t1027;
  t1031 = t788*t799;
  t1032 = t1030 + t1031;
  t1036 = -1.*t1027*t799;
  t1037 = t806 + t1036;
  t1050 = t831*t769*t740;
  t1051 = -1.*t831*t775*t799;
  t1052 = t1050 + t1051;
  t1056 = -1.*t831*t740*t775;
  t1057 = -1.*t831*t769*t799;
  t1058 = t1056 + t1057;
  t1074 = -1.*t740*t882;
  t1075 = t1074 + t1013;
  t1087 = t767*t769;
  t1088 = t773*t774*t775;
  t1089 = t1087 + t1088;
  t1091 = -1.*t1089*t799;
  t1092 = t1030 + t1091;
  t1096 = -1.*t740*t1089;
  t1097 = t1096 + t1036;
  t1053 = 0.135*t809*t1052;
  t1054 = t1052*t827;
  t1055 = t1052*t821*t854;
  t1059 = t1058*t866;
  t1060 = t846*t1052*t821;
  t1061 = t1058*t852;
  t1062 = t1060 + t1061;
  t1063 = -0.049*t1062;
  t1064 = t846*t1058;
  t1065 = -1.*t1052*t821*t852;
  t1066 = t1064 + t1065;
  t1067 = -0.09*t1066;
  t893 = t809*t890;
  t895 = -1.*t767*t831*t821;
  t897 = t893 + t895;
  t1111 = 0.135*t809;
  t1112 = -0.049*t821;
  t1113 = t1111 + t1112;
  t1115 = 0.049*t809;
  t1116 = t1115 + t834;
  t1127 = t740*t1089;
  t1128 = t1027*t799;
  t1129 = t1127 + t1128;
  t1131 = t809*t1129;
  t1132 = -1.*t831*t773*t821;
  t1133 = t1131 + t1132;
  t1142 = t831*t740*t775;
  t1143 = t831*t769*t799;
  t1144 = t1142 + t1143;
  t1146 = t809*t1144;
  t1147 = t774*t821;
  t1148 = t1146 + t1147;
  t913 = t846*t907;
  t914 = -1.*t903*t852;
  t915 = t913 + t914;
  t1157 = 0.049*t846;
  t1158 = t1157 + t853;
  t1160 = -0.09*t846;
  t1161 = -0.049*t852;
  t1162 = t1160 + t1161;
  t1171 = t831*t809*t773;
  t1172 = t1129*t821;
  t1173 = t1171 + t1172;
  t1185 = -1.*t809*t774;
  t1186 = t1144*t821;
  t1187 = t1185 + t1186;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t766*t788 + t797*t804 + t808*t827 + 0.135*(t808*t809 + t773*t821*t831) - 1.*t773*t831*t835 + t845*t854 - 0.09*(-1.*t845*t852 + t846*t860) - 0.049*(t845*t846 + t852*t860) + t860*t866;
  p_output1[10]=t767*t831*t835 + t766*t882 + t804*t886 + t827*t890 + 0.135*t897 + t854*t903 + t866*t907 - 0.049*(t846*t903 + t852*t907) - 0.09*t915;
  p_output1[11]=0;
  p_output1[12]=t766*t767*t775*t831 + t767*t769*t804*t831 - 1.*t767*t774*t835 + t827*t922 + 0.135*(t767*t774*t821 + t809*t922) + t854*t931 + t866*t935 - 0.09*(-1.*t852*t931 + t846*t935) - 0.049*(t846*t931 + t852*t935);
  p_output1[13]=t766*t773*t775*t831 + t769*t773*t804*t831 - 1.*t773*t774*t835 + t827*t950 + 0.135*(t773*t774*t821 + t809*t950) + t854*t959 + t866*t963 - 0.09*(-1.*t852*t959 + t846*t963) - 0.049*(t846*t959 + t852*t963);
  p_output1[14]=-1.*t766*t774*t775 - 1.*t769*t774*t804 - 1.*t831*t835 + t827*t978 + 0.135*(t821*t831 + t809*t978) + t854*t987 + t866*t991 - 0.09*(-1.*t852*t987 + t846*t991) - 0.049*(t846*t987 + t852*t991);
  p_output1[15]=t1005*t804 + 0.135*t1008*t809 + t1008*t827 - 0.049*(t1008*t821*t846 + t1014*t852) - 0.09*(t1014*t846 - 1.*t1008*t821*t852) + t1008*t821*t854 + t1014*t866 + t766*t886;
  p_output1[16]=t1027*t766 + t788*t804 + 0.135*t1032*t809 + t1032*t827 - 0.049*(t1032*t821*t846 + t1037*t852) - 0.09*(t1037*t846 - 1.*t1032*t821*t852) + t1032*t821*t854 + t1037*t866;
  p_output1[17]=t1053 + t1054 + t1055 + t1059 + t1063 + t1067 + t766*t769*t831 - 1.*t775*t804*t831;
  p_output1[18]=t1075*t866 + 0.135*t799*t882 - 0.135*t740*t886 + 0.135*t809*t907 + t827*t907 + t821*t854*t907 - 0.049*(t1075*t852 + t821*t846*t907) - 0.09*(t1075*t846 - 1.*t821*t852*t907);
  p_output1[19]=-0.135*t1027*t740 + 0.135*t1089*t799 + 0.135*t1092*t809 + t1092*t827 - 0.049*(t1092*t821*t846 + t1097*t852) - 0.09*(t1097*t846 - 1.*t1092*t821*t852) + t1092*t821*t854 + t1097*t866;
  p_output1[20]=t1053 + t1054 + t1055 + t1059 + t1063 + t1067 - 0.135*t740*t769*t831 + 0.135*t775*t799*t831;
  p_output1[21]=t1113*t767*t831 + t1116*t890 + 0.135*(-1.*t767*t809*t831 - 1.*t821*t890) - 0.049*t846*t897 + 0.09*t852*t897 + t854*t897;
  p_output1[22]=t1116*t1129 + t1113*t773*t831 + 0.135*(-1.*t1129*t821 + t843) - 0.049*t1133*t846 + 0.09*t1133*t852 + t1133*t854;
  p_output1[23]=t1116*t1144 - 1.*t1113*t774 + 0.135*(t774*t809 - 1.*t1144*t821) - 0.049*t1148*t846 + 0.09*t1148*t852 + t1148*t854;
  p_output1[24]=t1162*t903 + t1158*t907 - 0.09*(-1.*t846*t903 - 1.*t852*t907) - 0.049*t915;
  p_output1[25]=t1092*t1158 + t1162*t1173 - 0.09*(-1.*t1173*t846 - 1.*t1092*t852) - 0.049*(t1092*t846 - 1.*t1173*t852);
  p_output1[26]=t1052*t1158 + t1162*t1187 - 0.09*(-1.*t1187*t846 - 1.*t1052*t852) - 0.049*(t1052*t846 - 1.*t1187*t852);
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
