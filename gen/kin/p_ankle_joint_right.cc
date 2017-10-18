/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:45 GMT-04:00
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
  double t887;
  double t958;
  double t970;
  double t962;
  double t974;
  double t945;
  double t965;
  double t978;
  double t984;
  double t988;
  double t999;
  double t1001;
  double t1002;
  double t1021;
  double t1012;
  double t1014;
  double t1016;
  double t1004;
  double t1028;
  double t1030;
  double t1032;
  double t902;
  double t905;
  double t920;
  double t935;
  double t899;
  double t1058;
  double t1059;
  double t1060;
  double t1034;
  double t1036;
  double t1037;
  double t1042;
  double t1051;
  double t1052;
  double t1053;
  double t1072;
  double t1073;
  double t1076;
  double t1079;
  double t1080;
  double t1082;
  double t1088;
  double t1095;
  double t1096;
  double t1097;
  double t1104;
  double t1105;
  double t1106;
  double t1108;
  double t1109;
  double t1110;
  double t1112;
  double t1115;
  double t1116;
  double t1117;
  double t1124;
  double t1125;
  double t1126;
  double t926;
  double t940;
  double t942;
  double t951;
  double t955;
  double t989;
  double t991;
  double t992;
  double t994;
  double t1005;
  double t1006;
  double t1007;
  double t1009;
  double t1138;
  double t1139;
  double t1140;
  double t1142;
  double t1143;
  double t1144;
  double t1023;
  double t1024;
  double t1040;
  double t1045;
  double t1048;
  double t1146;
  double t1147;
  double t1148;
  double t1150;
  double t1151;
  double t1152;
  double t1055;
  double t1056;
  double t1057;
  double t1158;
  double t1159;
  double t1160;
  double t1068;
  double t1070;
  double t1071;
  double t1084;
  double t1089;
  double t1092;
  double t1154;
  double t1155;
  double t1156;
  double t1166;
  double t1167;
  double t1168;
  double t1099;
  double t1100;
  double t1103;
  double t1111;
  double t1113;
  double t1114;
  double t1170;
  double t1171;
  double t1172;
  double t1174;
  double t1175;
  double t1176;
  double t1121;
  double t1122;
  double t1123;
  double t1178;
  double t1179;
  double t1180;
  double t1182;
  double t1183;
  double t1184;
  double t1198;
  double t1199;
  double t1200;
  double t1202;
  double t1203;
  double t1204;
  double t1210;
  double t1211;
  double t1212;
  double t1206;
  double t1207;
  double t1208;
  double t1218;
  double t1219;
  double t1220;
  double t1222;
  double t1223;
  double t1224;
  double t1226;
  double t1227;
  double t1228;
  double t1230;
  double t1231;
  double t1232;
  double t1234;
  double t1235;
  double t1236;
  t887 = Cos(var1[3]);
  t958 = Cos(var1[5]);
  t970 = Sin(var1[3]);
  t962 = Sin(var1[4]);
  t974 = Sin(var1[5]);
  t945 = Sin(var1[14]);
  t965 = t887*t958*t962;
  t978 = t970*t974;
  t984 = t965 + t978;
  t988 = Cos(var1[14]);
  t999 = -1.*t958*t970;
  t1001 = t887*t962*t974;
  t1002 = t999 + t1001;
  t1021 = Sin(var1[15]);
  t1012 = t945*t984;
  t1014 = t988*t1002;
  t1016 = t1012 + t1014;
  t1004 = Cos(var1[15]);
  t1028 = t988*t984;
  t1030 = -1.*t945*t1002;
  t1032 = t1028 + t1030;
  t902 = Cos(var1[16]);
  t905 = -1.*t902;
  t920 = 1. + t905;
  t935 = Sin(var1[16]);
  t899 = Cos(var1[4]);
  t1058 = t1004*t1016;
  t1059 = t1021*t1032;
  t1060 = t1058 + t1059;
  t1034 = Cos(var1[17]);
  t1036 = -1.*t1034;
  t1037 = 1. + t1036;
  t1042 = Sin(var1[17]);
  t1051 = -1.*t1021*t1016;
  t1052 = t1004*t1032;
  t1053 = t1051 + t1052;
  t1072 = t902*t887*t899;
  t1073 = t935*t1060;
  t1076 = t1072 + t1073;
  t1079 = Cos(var1[18]);
  t1080 = -1.*t1079;
  t1082 = 1. + t1080;
  t1088 = Sin(var1[18]);
  t1095 = t1042*t1053;
  t1096 = t1034*t1076;
  t1097 = t1095 + t1096;
  t1104 = t1034*t1053;
  t1105 = -1.*t1042*t1076;
  t1106 = t1104 + t1105;
  t1108 = Cos(var1[19]);
  t1109 = -1.*t1108;
  t1110 = 1. + t1109;
  t1112 = Sin(var1[19]);
  t1115 = -1.*t1088*t1097;
  t1116 = t1079*t1106;
  t1117 = t1115 + t1116;
  t1124 = t1079*t1097;
  t1125 = t1088*t1106;
  t1126 = t1124 + t1125;
  t926 = -0.049*t920;
  t940 = -0.135*t935;
  t942 = 0. + t926 + t940;
  t951 = 0.135*t945;
  t955 = 0. + t951;
  t989 = -1.*t988;
  t991 = 1. + t989;
  t992 = -0.135*t991;
  t994 = 0. + t992;
  t1005 = -1.*t1004;
  t1006 = 1. + t1005;
  t1007 = -0.135*t1006;
  t1009 = 0. + t1007;
  t1138 = t958*t970*t962;
  t1139 = -1.*t887*t974;
  t1140 = t1138 + t1139;
  t1142 = t887*t958;
  t1143 = t970*t962*t974;
  t1144 = t1142 + t1143;
  t1023 = 0.135*t1021;
  t1024 = 0. + t1023;
  t1040 = -0.09*t1037;
  t1045 = 0.049*t1042;
  t1048 = 0. + t1040 + t1045;
  t1146 = t945*t1140;
  t1147 = t988*t1144;
  t1148 = t1146 + t1147;
  t1150 = t988*t1140;
  t1151 = -1.*t945*t1144;
  t1152 = t1150 + t1151;
  t1055 = -0.135*t920;
  t1056 = 0.049*t935;
  t1057 = 0. + t1055 + t1056;
  t1158 = t1004*t1148;
  t1159 = t1021*t1152;
  t1160 = t1158 + t1159;
  t1068 = -0.049*t1037;
  t1070 = -0.09*t1042;
  t1071 = 0. + t1068 + t1070;
  t1084 = -0.049*t1082;
  t1089 = -0.21*t1088;
  t1092 = 0. + t1084 + t1089;
  t1154 = -1.*t1021*t1148;
  t1155 = t1004*t1152;
  t1156 = t1154 + t1155;
  t1166 = t902*t899*t970;
  t1167 = t935*t1160;
  t1168 = t1166 + t1167;
  t1099 = -0.21*t1082;
  t1100 = 0.049*t1088;
  t1103 = 0. + t1099 + t1100;
  t1111 = -0.2707*t1110;
  t1113 = 0.0016*t1112;
  t1114 = 0. + t1111 + t1113;
  t1170 = t1042*t1156;
  t1171 = t1034*t1168;
  t1172 = t1170 + t1171;
  t1174 = t1034*t1156;
  t1175 = -1.*t1042*t1168;
  t1176 = t1174 + t1175;
  t1121 = -0.0016*t1110;
  t1122 = -0.2707*t1112;
  t1123 = 0. + t1121 + t1122;
  t1178 = -1.*t1088*t1172;
  t1179 = t1079*t1176;
  t1180 = t1178 + t1179;
  t1182 = t1079*t1172;
  t1183 = t1088*t1176;
  t1184 = t1182 + t1183;
  t1198 = t899*t958*t945;
  t1199 = t988*t899*t974;
  t1200 = t1198 + t1199;
  t1202 = t988*t899*t958;
  t1203 = -1.*t899*t945*t974;
  t1204 = t1202 + t1203;
  t1210 = t1004*t1200;
  t1211 = t1021*t1204;
  t1212 = t1210 + t1211;
  t1206 = -1.*t1021*t1200;
  t1207 = t1004*t1204;
  t1208 = t1206 + t1207;
  t1218 = -1.*t902*t962;
  t1219 = t935*t1212;
  t1220 = t1218 + t1219;
  t1222 = t1042*t1208;
  t1223 = t1034*t1220;
  t1224 = t1222 + t1223;
  t1226 = t1034*t1208;
  t1227 = -1.*t1042*t1220;
  t1228 = t1226 + t1227;
  t1230 = -1.*t1088*t1224;
  t1231 = t1079*t1228;
  t1232 = t1230 + t1231;
  t1234 = t1079*t1224;
  t1235 = t1088*t1228;
  t1236 = t1234 + t1235;
  p_output1[0]=0. + t1009*t1016 + t1024*t1032 + t1048*t1053 + t1057*t1060 + t1071*t1076 + t1092*t1097 + t1103*t1106 + t1114*t1117 + t1123*t1126 + 0.0184*(t1112*t1117 + t1108*t1126) - 0.7055*(t1108*t1117 - 1.*t1112*t1126) - 0.1305*(t1060*t902 - 1.*t887*t899*t935) + t887*t899*t942 + t955*t984 + t1002*t994 + var1[0];
  p_output1[1]=0. + t1009*t1148 + t1024*t1152 + t1048*t1156 + t1057*t1160 + t1071*t1168 + t1092*t1172 + t1103*t1176 + t1114*t1180 + t1123*t1184 + 0.0184*(t1112*t1180 + t1108*t1184) - 0.7055*(t1108*t1180 - 1.*t1112*t1184) + t1140*t955 + t899*t942*t970 - 0.1305*(t1160*t902 - 1.*t899*t935*t970) + t1144*t994 + var1[1];
  p_output1[2]=0. + t1009*t1200 + t1024*t1204 + t1048*t1208 + t1057*t1212 + t1071*t1220 + t1092*t1224 + t1103*t1228 + t1114*t1232 + t1123*t1236 + 0.0184*(t1112*t1232 + t1108*t1236) - 0.7055*(t1108*t1232 - 1.*t1112*t1236) + t899*t955*t958 - 1.*t942*t962 - 0.1305*(t1212*t902 + t935*t962) + t899*t974*t994 + var1[2];
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

#include "p_ankle_joint_right.hh"

namespace SymExpression
{

void p_ankle_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
