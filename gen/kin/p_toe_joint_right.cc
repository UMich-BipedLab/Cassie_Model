/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:46 GMT-04:00
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
  double t986;
  double t1061;
  double t1072;
  double t1064;
  double t1077;
  double t1053;
  double t1067;
  double t1084;
  double t1092;
  double t1098;
  double t1111;
  double t1113;
  double t1114;
  double t1136;
  double t1130;
  double t1131;
  double t1132;
  double t1123;
  double t1143;
  double t1146;
  double t1147;
  double t1003;
  double t1007;
  double t1014;
  double t1033;
  double t1001;
  double t1182;
  double t1183;
  double t1186;
  double t1152;
  double t1153;
  double t1155;
  double t1159;
  double t1164;
  double t1165;
  double t1167;
  double t1196;
  double t1197;
  double t1198;
  double t1201;
  double t1202;
  double t1204;
  double t1207;
  double t1210;
  double t1211;
  double t1212;
  double t1222;
  double t1223;
  double t1228;
  double t1231;
  double t1235;
  double t1237;
  double t1239;
  double t1244;
  double t1245;
  double t1246;
  double t1251;
  double t1252;
  double t1253;
  double t1255;
  double t1256;
  double t1257;
  double t1259;
  double t1264;
  double t1265;
  double t1266;
  double t1273;
  double t1274;
  double t1275;
  double t1023;
  double t1045;
  double t1048;
  double t1057;
  double t1059;
  double t1100;
  double t1103;
  double t1104;
  double t1107;
  double t1125;
  double t1127;
  double t1128;
  double t1129;
  double t1287;
  double t1288;
  double t1289;
  double t1291;
  double t1292;
  double t1293;
  double t1140;
  double t1142;
  double t1156;
  double t1162;
  double t1163;
  double t1295;
  double t1296;
  double t1297;
  double t1299;
  double t1300;
  double t1301;
  double t1171;
  double t1174;
  double t1179;
  double t1307;
  double t1308;
  double t1309;
  double t1193;
  double t1194;
  double t1195;
  double t1205;
  double t1208;
  double t1209;
  double t1303;
  double t1304;
  double t1305;
  double t1315;
  double t1316;
  double t1317;
  double t1216;
  double t1219;
  double t1221;
  double t1238;
  double t1240;
  double t1241;
  double t1319;
  double t1320;
  double t1321;
  double t1323;
  double t1324;
  double t1325;
  double t1248;
  double t1249;
  double t1250;
  double t1258;
  double t1262;
  double t1263;
  double t1327;
  double t1328;
  double t1329;
  double t1331;
  double t1332;
  double t1333;
  double t1268;
  double t1269;
  double t1272;
  double t1335;
  double t1336;
  double t1337;
  double t1339;
  double t1340;
  double t1341;
  double t1355;
  double t1356;
  double t1357;
  double t1359;
  double t1360;
  double t1361;
  double t1367;
  double t1368;
  double t1369;
  double t1363;
  double t1364;
  double t1365;
  double t1375;
  double t1376;
  double t1377;
  double t1379;
  double t1380;
  double t1381;
  double t1383;
  double t1384;
  double t1385;
  double t1387;
  double t1388;
  double t1389;
  double t1391;
  double t1392;
  double t1393;
  double t1395;
  double t1396;
  double t1397;
  double t1399;
  double t1400;
  double t1401;
  t986 = Cos(var1[3]);
  t1061 = Cos(var1[5]);
  t1072 = Sin(var1[3]);
  t1064 = Sin(var1[4]);
  t1077 = Sin(var1[5]);
  t1053 = Sin(var1[14]);
  t1067 = t986*t1061*t1064;
  t1084 = t1072*t1077;
  t1092 = t1067 + t1084;
  t1098 = Cos(var1[14]);
  t1111 = -1.*t1061*t1072;
  t1113 = t986*t1064*t1077;
  t1114 = t1111 + t1113;
  t1136 = Sin(var1[15]);
  t1130 = t1053*t1092;
  t1131 = t1098*t1114;
  t1132 = t1130 + t1131;
  t1123 = Cos(var1[15]);
  t1143 = t1098*t1092;
  t1146 = -1.*t1053*t1114;
  t1147 = t1143 + t1146;
  t1003 = Cos(var1[16]);
  t1007 = -1.*t1003;
  t1014 = 1. + t1007;
  t1033 = Sin(var1[16]);
  t1001 = Cos(var1[4]);
  t1182 = t1123*t1132;
  t1183 = t1136*t1147;
  t1186 = t1182 + t1183;
  t1152 = Cos(var1[17]);
  t1153 = -1.*t1152;
  t1155 = 1. + t1153;
  t1159 = Sin(var1[17]);
  t1164 = -1.*t1136*t1132;
  t1165 = t1123*t1147;
  t1167 = t1164 + t1165;
  t1196 = t1003*t986*t1001;
  t1197 = t1033*t1186;
  t1198 = t1196 + t1197;
  t1201 = Cos(var1[18]);
  t1202 = -1.*t1201;
  t1204 = 1. + t1202;
  t1207 = Sin(var1[18]);
  t1210 = t1159*t1167;
  t1211 = t1152*t1198;
  t1212 = t1210 + t1211;
  t1222 = t1152*t1167;
  t1223 = -1.*t1159*t1198;
  t1228 = t1222 + t1223;
  t1231 = Cos(var1[19]);
  t1235 = -1.*t1231;
  t1237 = 1. + t1235;
  t1239 = Sin(var1[19]);
  t1244 = -1.*t1207*t1212;
  t1245 = t1201*t1228;
  t1246 = t1244 + t1245;
  t1251 = t1201*t1212;
  t1252 = t1207*t1228;
  t1253 = t1251 + t1252;
  t1255 = Cos(var1[20]);
  t1256 = -1.*t1255;
  t1257 = 1. + t1256;
  t1259 = Sin(var1[20]);
  t1264 = t1239*t1246;
  t1265 = t1231*t1253;
  t1266 = t1264 + t1265;
  t1273 = t1231*t1246;
  t1274 = -1.*t1239*t1253;
  t1275 = t1273 + t1274;
  t1023 = -0.049*t1014;
  t1045 = -0.135*t1033;
  t1048 = 0. + t1023 + t1045;
  t1057 = 0.135*t1053;
  t1059 = 0. + t1057;
  t1100 = -1.*t1098;
  t1103 = 1. + t1100;
  t1104 = -0.135*t1103;
  t1107 = 0. + t1104;
  t1125 = -1.*t1123;
  t1127 = 1. + t1125;
  t1128 = -0.135*t1127;
  t1129 = 0. + t1128;
  t1287 = t1061*t1072*t1064;
  t1288 = -1.*t986*t1077;
  t1289 = t1287 + t1288;
  t1291 = t986*t1061;
  t1292 = t1072*t1064*t1077;
  t1293 = t1291 + t1292;
  t1140 = 0.135*t1136;
  t1142 = 0. + t1140;
  t1156 = -0.09*t1155;
  t1162 = 0.049*t1159;
  t1163 = 0. + t1156 + t1162;
  t1295 = t1053*t1289;
  t1296 = t1098*t1293;
  t1297 = t1295 + t1296;
  t1299 = t1098*t1289;
  t1300 = -1.*t1053*t1293;
  t1301 = t1299 + t1300;
  t1171 = -0.135*t1014;
  t1174 = 0.049*t1033;
  t1179 = 0. + t1171 + t1174;
  t1307 = t1123*t1297;
  t1308 = t1136*t1301;
  t1309 = t1307 + t1308;
  t1193 = -0.049*t1155;
  t1194 = -0.09*t1159;
  t1195 = 0. + t1193 + t1194;
  t1205 = -0.049*t1204;
  t1208 = -0.21*t1207;
  t1209 = 0. + t1205 + t1208;
  t1303 = -1.*t1136*t1297;
  t1304 = t1123*t1301;
  t1305 = t1303 + t1304;
  t1315 = t1003*t1001*t1072;
  t1316 = t1033*t1309;
  t1317 = t1315 + t1316;
  t1216 = -0.21*t1204;
  t1219 = 0.049*t1207;
  t1221 = 0. + t1216 + t1219;
  t1238 = -0.2707*t1237;
  t1240 = 0.0016*t1239;
  t1241 = 0. + t1238 + t1240;
  t1319 = t1159*t1305;
  t1320 = t1152*t1317;
  t1321 = t1319 + t1320;
  t1323 = t1152*t1305;
  t1324 = -1.*t1159*t1317;
  t1325 = t1323 + t1324;
  t1248 = -0.0016*t1237;
  t1249 = -0.2707*t1239;
  t1250 = 0. + t1248 + t1249;
  t1258 = 0.0184*t1257;
  t1262 = -0.7055*t1259;
  t1263 = 0. + t1258 + t1262;
  t1327 = -1.*t1207*t1321;
  t1328 = t1201*t1325;
  t1329 = t1327 + t1328;
  t1331 = t1201*t1321;
  t1332 = t1207*t1325;
  t1333 = t1331 + t1332;
  t1268 = -0.7055*t1257;
  t1269 = -0.0184*t1259;
  t1272 = 0. + t1268 + t1269;
  t1335 = t1239*t1329;
  t1336 = t1231*t1333;
  t1337 = t1335 + t1336;
  t1339 = t1231*t1329;
  t1340 = -1.*t1239*t1333;
  t1341 = t1339 + t1340;
  t1355 = t1001*t1061*t1053;
  t1356 = t1098*t1001*t1077;
  t1357 = t1355 + t1356;
  t1359 = t1098*t1001*t1061;
  t1360 = -1.*t1001*t1053*t1077;
  t1361 = t1359 + t1360;
  t1367 = t1123*t1357;
  t1368 = t1136*t1361;
  t1369 = t1367 + t1368;
  t1363 = -1.*t1136*t1357;
  t1364 = t1123*t1361;
  t1365 = t1363 + t1364;
  t1375 = -1.*t1003*t1064;
  t1376 = t1033*t1369;
  t1377 = t1375 + t1376;
  t1379 = t1159*t1365;
  t1380 = t1152*t1377;
  t1381 = t1379 + t1380;
  t1383 = t1152*t1365;
  t1384 = -1.*t1159*t1377;
  t1385 = t1383 + t1384;
  t1387 = -1.*t1207*t1381;
  t1388 = t1201*t1385;
  t1389 = t1387 + t1388;
  t1391 = t1201*t1381;
  t1392 = t1207*t1385;
  t1393 = t1391 + t1392;
  t1395 = t1239*t1389;
  t1396 = t1231*t1393;
  t1397 = t1395 + t1396;
  t1399 = t1231*t1389;
  t1400 = -1.*t1239*t1393;
  t1401 = t1399 + t1400;
  p_output1[0]=0. + t1059*t1092 + t1107*t1114 + t1129*t1132 + t1142*t1147 + t1163*t1167 + t1179*t1186 + t1195*t1198 + t1209*t1212 + t1221*t1228 + t1241*t1246 + t1250*t1253 + t1263*t1266 + t1272*t1275 - 1.1135*(-1.*t1259*t1266 + t1255*t1275) - 0.0216*(t1255*t1266 + t1259*t1275) + t1001*t1048*t986 - 0.1305*(t1003*t1186 - 1.*t1001*t1033*t986) + var1[0];
  p_output1[1]=0. + t1001*t1048*t1072 + t1059*t1289 + t1107*t1293 + t1129*t1297 + t1142*t1301 + t1163*t1305 + t1179*t1309 - 0.1305*(-1.*t1001*t1033*t1072 + t1003*t1309) + t1195*t1317 + t1209*t1321 + t1221*t1325 + t1241*t1329 + t1250*t1333 + t1263*t1337 + t1272*t1341 - 1.1135*(-1.*t1259*t1337 + t1255*t1341) - 0.0216*(t1255*t1337 + t1259*t1341) + var1[1];
  p_output1[2]=0. + t1001*t1059*t1061 - 1.*t1048*t1064 + t1001*t1077*t1107 + t1129*t1357 + t1142*t1361 + t1163*t1365 + t1179*t1369 - 0.1305*(t1033*t1064 + t1003*t1369) + t1195*t1377 + t1209*t1381 + t1221*t1385 + t1241*t1389 + t1250*t1393 + t1263*t1397 + t1272*t1401 - 1.1135*(-1.*t1259*t1397 + t1255*t1401) - 0.0216*(t1255*t1397 + t1259*t1401) + var1[2];
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

#include "p_toe_joint_right.hh"

namespace SymExpression
{

void p_toe_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
