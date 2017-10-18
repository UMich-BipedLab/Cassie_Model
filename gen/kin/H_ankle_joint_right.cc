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
  double t978;
  double t992;
  double t965;
  double t984;
  double t994;
  double t1009;
  double t986;
  double t1001;
  double t1003;
  double t955;
  double t1012;
  double t1014;
  double t1020;
  double t1032;
  double t1007;
  double t1023;
  double t1024;
  double t951;
  double t1033;
  double t1040;
  double t1045;
  double t1054;
  double t1028;
  double t1048;
  double t1052;
  double t943;
  double t1055;
  double t1056;
  double t1057;
  double t1058;
  double t1059;
  double t1061;
  double t1062;
  double t1064;
  double t1065;
  double t1071;
  double t1053;
  double t1067;
  double t1068;
  double t940;
  double t1072;
  double t1073;
  double t1077;
  double t926;
  double t1104;
  double t1106;
  double t1107;
  double t1113;
  double t1114;
  double t1116;
  double t1111;
  double t1118;
  double t1121;
  double t1123;
  double t1124;
  double t1125;
  double t1122;
  double t1127;
  double t1128;
  double t1130;
  double t1131;
  double t1132;
  double t1133;
  double t1134;
  double t1135;
  double t1095;
  double t1129;
  double t1136;
  double t1137;
  double t1140;
  double t1141;
  double t1142;
  double t1155;
  double t1156;
  double t1157;
  double t1159;
  double t1161;
  double t1162;
  double t1158;
  double t1163;
  double t1164;
  double t1166;
  double t1167;
  double t1169;
  double t1170;
  double t1171;
  double t1173;
  double t1165;
  double t1174;
  double t1176;
  double t1179;
  double t1181;
  double t1182;
  double t1070;
  double t1084;
  double t1089;
  double t1096;
  double t1098;
  double t1099;
  double t1138;
  double t1143;
  double t1145;
  double t1147;
  double t1149;
  double t1150;
  double t1177;
  double t1183;
  double t1185;
  double t1187;
  double t1188;
  double t1189;
  double t1213;
  double t1214;
  double t1242;
  double t1243;
  double t1260;
  double t1261;
  double t1270;
  double t1271;
  double t1192;
  double t1193;
  double t1194;
  double t1215;
  double t1216;
  double t1217;
  double t1221;
  double t1222;
  double t1225;
  double t1226;
  double t1228;
  double t1229;
  double t1233;
  double t1234;
  double t1235;
  double t1237;
  double t1239;
  double t1240;
  double t1244;
  double t1245;
  double t1246;
  double t1248;
  double t1249;
  double t1250;
  double t1256;
  double t1257;
  double t1258;
  double t1262;
  double t1263;
  double t1264;
  double t1266;
  double t1267;
  double t1268;
  double t1272;
  double t1273;
  double t1274;
  double t1276;
  double t1277;
  double t1278;
  double t1195;
  double t1196;
  double t1197;
  double t1198;
  double t1199;
  double t1201;
  t978 = Cos(var1[5]);
  t992 = Sin(var1[3]);
  t965 = Cos(var1[3]);
  t984 = Sin(var1[4]);
  t994 = Sin(var1[5]);
  t1009 = Cos(var1[14]);
  t986 = t965*t978*t984;
  t1001 = t992*t994;
  t1003 = t986 + t1001;
  t955 = Sin(var1[14]);
  t1012 = -1.*t978*t992;
  t1014 = t965*t984*t994;
  t1020 = t1012 + t1014;
  t1032 = Cos(var1[15]);
  t1007 = t955*t1003;
  t1023 = t1009*t1020;
  t1024 = t1007 + t1023;
  t951 = Sin(var1[15]);
  t1033 = t1009*t1003;
  t1040 = -1.*t955*t1020;
  t1045 = t1033 + t1040;
  t1054 = Cos(var1[17]);
  t1028 = -1.*t951*t1024;
  t1048 = t1032*t1045;
  t1052 = t1028 + t1048;
  t943 = Sin(var1[17]);
  t1055 = Cos(var1[16]);
  t1056 = Cos(var1[4]);
  t1057 = t1055*t965*t1056;
  t1058 = Sin(var1[16]);
  t1059 = t1032*t1024;
  t1061 = t951*t1045;
  t1062 = t1059 + t1061;
  t1064 = t1058*t1062;
  t1065 = t1057 + t1064;
  t1071 = Cos(var1[18]);
  t1053 = t943*t1052;
  t1067 = t1054*t1065;
  t1068 = t1053 + t1067;
  t940 = Sin(var1[18]);
  t1072 = t1054*t1052;
  t1073 = -1.*t943*t1065;
  t1077 = t1072 + t1073;
  t926 = Cos(var1[19]);
  t1104 = t978*t992*t984;
  t1106 = -1.*t965*t994;
  t1107 = t1104 + t1106;
  t1113 = t965*t978;
  t1114 = t992*t984*t994;
  t1116 = t1113 + t1114;
  t1111 = t955*t1107;
  t1118 = t1009*t1116;
  t1121 = t1111 + t1118;
  t1123 = t1009*t1107;
  t1124 = -1.*t955*t1116;
  t1125 = t1123 + t1124;
  t1122 = -1.*t951*t1121;
  t1127 = t1032*t1125;
  t1128 = t1122 + t1127;
  t1130 = t1055*t1056*t992;
  t1131 = t1032*t1121;
  t1132 = t951*t1125;
  t1133 = t1131 + t1132;
  t1134 = t1058*t1133;
  t1135 = t1130 + t1134;
  t1095 = Sin(var1[19]);
  t1129 = t943*t1128;
  t1136 = t1054*t1135;
  t1137 = t1129 + t1136;
  t1140 = t1054*t1128;
  t1141 = -1.*t943*t1135;
  t1142 = t1140 + t1141;
  t1155 = t1056*t978*t955;
  t1156 = t1009*t1056*t994;
  t1157 = t1155 + t1156;
  t1159 = t1009*t1056*t978;
  t1161 = -1.*t1056*t955*t994;
  t1162 = t1159 + t1161;
  t1158 = -1.*t951*t1157;
  t1163 = t1032*t1162;
  t1164 = t1158 + t1163;
  t1166 = -1.*t1055*t984;
  t1167 = t1032*t1157;
  t1169 = t951*t1162;
  t1170 = t1167 + t1169;
  t1171 = t1058*t1170;
  t1173 = t1166 + t1171;
  t1165 = t943*t1164;
  t1174 = t1054*t1173;
  t1176 = t1165 + t1174;
  t1179 = t1054*t1164;
  t1181 = -1.*t943*t1173;
  t1182 = t1179 + t1181;
  t1070 = -1.*t940*t1068;
  t1084 = t1071*t1077;
  t1089 = t1070 + t1084;
  t1096 = t1071*t1068;
  t1098 = t940*t1077;
  t1099 = t1096 + t1098;
  t1138 = -1.*t940*t1137;
  t1143 = t1071*t1142;
  t1145 = t1138 + t1143;
  t1147 = t1071*t1137;
  t1149 = t940*t1142;
  t1150 = t1147 + t1149;
  t1177 = -1.*t940*t1176;
  t1183 = t1071*t1182;
  t1185 = t1177 + t1183;
  t1187 = t1071*t1176;
  t1188 = t940*t1182;
  t1189 = t1187 + t1188;
  t1213 = -1.*t1055;
  t1214 = 1. + t1213;
  t1242 = -1.*t1054;
  t1243 = 1. + t1242;
  t1260 = -1.*t1071;
  t1261 = 1. + t1260;
  t1270 = -1.*t926;
  t1271 = 1. + t1270;
  t1192 = t1095*t1089;
  t1193 = t926*t1099;
  t1194 = t1192 + t1193;
  t1215 = -0.049*t1214;
  t1216 = -0.135*t1058;
  t1217 = 0. + t1215 + t1216;
  t1221 = 0.135*t955;
  t1222 = 0. + t1221;
  t1225 = -1.*t1009;
  t1226 = 1. + t1225;
  t1228 = -0.135*t1226;
  t1229 = 0. + t1228;
  t1233 = -1.*t1032;
  t1234 = 1. + t1233;
  t1235 = -0.135*t1234;
  t1237 = 0. + t1235;
  t1239 = 0.135*t951;
  t1240 = 0. + t1239;
  t1244 = -0.09*t1243;
  t1245 = 0.049*t943;
  t1246 = 0. + t1244 + t1245;
  t1248 = -0.135*t1214;
  t1249 = 0.049*t1058;
  t1250 = 0. + t1248 + t1249;
  t1256 = -0.049*t1243;
  t1257 = -0.09*t943;
  t1258 = 0. + t1256 + t1257;
  t1262 = -0.049*t1261;
  t1263 = -0.21*t940;
  t1264 = 0. + t1262 + t1263;
  t1266 = -0.21*t1261;
  t1267 = 0.049*t940;
  t1268 = 0. + t1266 + t1267;
  t1272 = -0.2707*t1271;
  t1273 = 0.0016*t1095;
  t1274 = 0. + t1272 + t1273;
  t1276 = -0.0016*t1271;
  t1277 = -0.2707*t1095;
  t1278 = 0. + t1276 + t1277;
  t1195 = t1095*t1145;
  t1196 = t926*t1150;
  t1197 = t1195 + t1196;
  t1198 = t1095*t1185;
  t1199 = t926*t1189;
  t1201 = t1198 + t1199;
  p_output1[0]=t1095*t1099 - 1.*t1089*t926;
  p_output1[1]=t1095*t1150 - 1.*t1145*t926;
  p_output1[2]=t1095*t1189 - 1.*t1185*t926;
  p_output1[3]=0.;
  p_output1[4]=t1194;
  p_output1[5]=t1197;
  p_output1[6]=t1201;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1055*t1062 + t1056*t1058*t965;
  p_output1[9]=-1.*t1055*t1133 + t1056*t1058*t992;
  p_output1[10]=-1.*t1055*t1170 - 1.*t1058*t984;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t1194 + t1003*t1222 + t1020*t1229 + t1024*t1237 + t1045*t1240 + t1052*t1246 + t1062*t1250 + t1065*t1258 + t1068*t1264 + t1077*t1268 + t1089*t1274 + t1099*t1278 - 0.7055*(-1.*t1095*t1099 + t1089*t926) + t1056*t1217*t965 - 0.1305*(t1055*t1062 - 1.*t1056*t1058*t965) + var1[0];
  p_output1[13]=0. + 0.0184*t1197 + t1107*t1222 + t1116*t1229 + t1121*t1237 + t1125*t1240 + t1128*t1246 + t1133*t1250 + t1135*t1258 + t1137*t1264 + t1142*t1268 + t1145*t1274 + t1150*t1278 - 0.7055*(-1.*t1095*t1150 + t1145*t926) + t1056*t1217*t992 - 0.1305*(t1055*t1133 - 1.*t1056*t1058*t992) + var1[1];
  p_output1[14]=0. + 0.0184*t1201 + t1157*t1237 + t1162*t1240 + t1164*t1246 + t1170*t1250 + t1173*t1258 + t1176*t1264 + t1182*t1268 + t1185*t1274 + t1189*t1278 - 0.7055*(-1.*t1095*t1189 + t1185*t926) + t1056*t1222*t978 - 1.*t1217*t984 - 0.1305*(t1055*t1170 + t1058*t984) + t1056*t1229*t994 + var1[2];
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

#include "H_ankle_joint_right.hh"

namespace SymExpression
{

void H_ankle_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
