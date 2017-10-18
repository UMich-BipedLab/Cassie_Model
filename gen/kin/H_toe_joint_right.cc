/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:47 GMT-04:00
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
  double t1092;
  double t1107;
  double t1084;
  double t1096;
  double t1113;
  double t1130;
  double t1104;
  double t1118;
  double t1128;
  double t1067;
  double t1131;
  double t1134;
  double t1140;
  double t1149;
  double t1129;
  double t1142;
  double t1143;
  double t1059;
  double t1156;
  double t1162;
  double t1163;
  double t1171;
  double t1147;
  double t1165;
  double t1167;
  double t1057;
  double t1174;
  double t1179;
  double t1182;
  double t1183;
  double t1187;
  double t1188;
  double t1190;
  double t1191;
  double t1192;
  double t1196;
  double t1169;
  double t1193;
  double t1194;
  double t1052;
  double t1197;
  double t1199;
  double t1205;
  double t1211;
  double t1195;
  double t1208;
  double t1209;
  double t1045;
  double t1215;
  double t1216;
  double t1219;
  double t1023;
  double t1247;
  double t1248;
  double t1249;
  double t1251;
  double t1252;
  double t1254;
  double t1250;
  double t1258;
  double t1262;
  double t1264;
  double t1265;
  double t1267;
  double t1263;
  double t1268;
  double t1269;
  double t1273;
  double t1276;
  double t1277;
  double t1278;
  double t1279;
  double t1280;
  double t1272;
  double t1281;
  double t1282;
  double t1284;
  double t1285;
  double t1286;
  double t1229;
  double t1283;
  double t1287;
  double t1289;
  double t1291;
  double t1292;
  double t1294;
  double t1306;
  double t1307;
  double t1308;
  double t1311;
  double t1312;
  double t1313;
  double t1310;
  double t1314;
  double t1315;
  double t1318;
  double t1319;
  double t1320;
  double t1322;
  double t1323;
  double t1325;
  double t1316;
  double t1326;
  double t1328;
  double t1330;
  double t1331;
  double t1332;
  double t1329;
  double t1334;
  double t1335;
  double t1338;
  double t1339;
  double t1342;
  double t1210;
  double t1221;
  double t1222;
  double t1238;
  double t1240;
  double t1241;
  double t1290;
  double t1295;
  double t1296;
  double t1299;
  double t1301;
  double t1302;
  double t1336;
  double t1343;
  double t1344;
  double t1346;
  double t1347;
  double t1348;
  double t1372;
  double t1373;
  double t1403;
  double t1404;
  double t1421;
  double t1422;
  double t1431;
  double t1432;
  double t1441;
  double t1442;
  double t1351;
  double t1352;
  double t1353;
  double t1374;
  double t1376;
  double t1378;
  double t1380;
  double t1382;
  double t1385;
  double t1386;
  double t1388;
  double t1389;
  double t1391;
  double t1392;
  double t1394;
  double t1395;
  double t1398;
  double t1399;
  double t1405;
  double t1406;
  double t1407;
  double t1409;
  double t1410;
  double t1411;
  double t1417;
  double t1418;
  double t1419;
  double t1423;
  double t1424;
  double t1425;
  double t1427;
  double t1428;
  double t1429;
  double t1433;
  double t1434;
  double t1435;
  double t1437;
  double t1438;
  double t1439;
  double t1443;
  double t1444;
  double t1445;
  double t1447;
  double t1448;
  double t1449;
  double t1354;
  double t1355;
  double t1356;
  double t1358;
  double t1359;
  double t1361;
  t1092 = Cos(var1[5]);
  t1107 = Sin(var1[3]);
  t1084 = Cos(var1[3]);
  t1096 = Sin(var1[4]);
  t1113 = Sin(var1[5]);
  t1130 = Cos(var1[14]);
  t1104 = t1084*t1092*t1096;
  t1118 = t1107*t1113;
  t1128 = t1104 + t1118;
  t1067 = Sin(var1[14]);
  t1131 = -1.*t1092*t1107;
  t1134 = t1084*t1096*t1113;
  t1140 = t1131 + t1134;
  t1149 = Cos(var1[15]);
  t1129 = t1067*t1128;
  t1142 = t1130*t1140;
  t1143 = t1129 + t1142;
  t1059 = Sin(var1[15]);
  t1156 = t1130*t1128;
  t1162 = -1.*t1067*t1140;
  t1163 = t1156 + t1162;
  t1171 = Cos(var1[17]);
  t1147 = -1.*t1059*t1143;
  t1165 = t1149*t1163;
  t1167 = t1147 + t1165;
  t1057 = Sin(var1[17]);
  t1174 = Cos(var1[16]);
  t1179 = Cos(var1[4]);
  t1182 = t1174*t1084*t1179;
  t1183 = Sin(var1[16]);
  t1187 = t1149*t1143;
  t1188 = t1059*t1163;
  t1190 = t1187 + t1188;
  t1191 = t1183*t1190;
  t1192 = t1182 + t1191;
  t1196 = Cos(var1[18]);
  t1169 = t1057*t1167;
  t1193 = t1171*t1192;
  t1194 = t1169 + t1193;
  t1052 = Sin(var1[18]);
  t1197 = t1171*t1167;
  t1199 = -1.*t1057*t1192;
  t1205 = t1197 + t1199;
  t1211 = Cos(var1[19]);
  t1195 = -1.*t1052*t1194;
  t1208 = t1196*t1205;
  t1209 = t1195 + t1208;
  t1045 = Sin(var1[19]);
  t1215 = t1196*t1194;
  t1216 = t1052*t1205;
  t1219 = t1215 + t1216;
  t1023 = Sin(var1[20]);
  t1247 = t1092*t1107*t1096;
  t1248 = -1.*t1084*t1113;
  t1249 = t1247 + t1248;
  t1251 = t1084*t1092;
  t1252 = t1107*t1096*t1113;
  t1254 = t1251 + t1252;
  t1250 = t1067*t1249;
  t1258 = t1130*t1254;
  t1262 = t1250 + t1258;
  t1264 = t1130*t1249;
  t1265 = -1.*t1067*t1254;
  t1267 = t1264 + t1265;
  t1263 = -1.*t1059*t1262;
  t1268 = t1149*t1267;
  t1269 = t1263 + t1268;
  t1273 = t1174*t1179*t1107;
  t1276 = t1149*t1262;
  t1277 = t1059*t1267;
  t1278 = t1276 + t1277;
  t1279 = t1183*t1278;
  t1280 = t1273 + t1279;
  t1272 = t1057*t1269;
  t1281 = t1171*t1280;
  t1282 = t1272 + t1281;
  t1284 = t1171*t1269;
  t1285 = -1.*t1057*t1280;
  t1286 = t1284 + t1285;
  t1229 = Cos(var1[20]);
  t1283 = -1.*t1052*t1282;
  t1287 = t1196*t1286;
  t1289 = t1283 + t1287;
  t1291 = t1196*t1282;
  t1292 = t1052*t1286;
  t1294 = t1291 + t1292;
  t1306 = t1179*t1092*t1067;
  t1307 = t1130*t1179*t1113;
  t1308 = t1306 + t1307;
  t1311 = t1130*t1179*t1092;
  t1312 = -1.*t1179*t1067*t1113;
  t1313 = t1311 + t1312;
  t1310 = -1.*t1059*t1308;
  t1314 = t1149*t1313;
  t1315 = t1310 + t1314;
  t1318 = -1.*t1174*t1096;
  t1319 = t1149*t1308;
  t1320 = t1059*t1313;
  t1322 = t1319 + t1320;
  t1323 = t1183*t1322;
  t1325 = t1318 + t1323;
  t1316 = t1057*t1315;
  t1326 = t1171*t1325;
  t1328 = t1316 + t1326;
  t1330 = t1171*t1315;
  t1331 = -1.*t1057*t1325;
  t1332 = t1330 + t1331;
  t1329 = -1.*t1052*t1328;
  t1334 = t1196*t1332;
  t1335 = t1329 + t1334;
  t1338 = t1196*t1328;
  t1339 = t1052*t1332;
  t1342 = t1338 + t1339;
  t1210 = t1045*t1209;
  t1221 = t1211*t1219;
  t1222 = t1210 + t1221;
  t1238 = t1211*t1209;
  t1240 = -1.*t1045*t1219;
  t1241 = t1238 + t1240;
  t1290 = t1045*t1289;
  t1295 = t1211*t1294;
  t1296 = t1290 + t1295;
  t1299 = t1211*t1289;
  t1301 = -1.*t1045*t1294;
  t1302 = t1299 + t1301;
  t1336 = t1045*t1335;
  t1343 = t1211*t1342;
  t1344 = t1336 + t1343;
  t1346 = t1211*t1335;
  t1347 = -1.*t1045*t1342;
  t1348 = t1346 + t1347;
  t1372 = -1.*t1174;
  t1373 = 1. + t1372;
  t1403 = -1.*t1171;
  t1404 = 1. + t1403;
  t1421 = -1.*t1196;
  t1422 = 1. + t1421;
  t1431 = -1.*t1211;
  t1432 = 1. + t1431;
  t1441 = -1.*t1229;
  t1442 = 1. + t1441;
  t1351 = t1229*t1222;
  t1352 = t1023*t1241;
  t1353 = t1351 + t1352;
  t1374 = -0.049*t1373;
  t1376 = -0.135*t1183;
  t1378 = 0. + t1374 + t1376;
  t1380 = 0.135*t1067;
  t1382 = 0. + t1380;
  t1385 = -1.*t1130;
  t1386 = 1. + t1385;
  t1388 = -0.135*t1386;
  t1389 = 0. + t1388;
  t1391 = -1.*t1149;
  t1392 = 1. + t1391;
  t1394 = -0.135*t1392;
  t1395 = 0. + t1394;
  t1398 = 0.135*t1059;
  t1399 = 0. + t1398;
  t1405 = -0.09*t1404;
  t1406 = 0.049*t1057;
  t1407 = 0. + t1405 + t1406;
  t1409 = -0.135*t1373;
  t1410 = 0.049*t1183;
  t1411 = 0. + t1409 + t1410;
  t1417 = -0.049*t1404;
  t1418 = -0.09*t1057;
  t1419 = 0. + t1417 + t1418;
  t1423 = -0.049*t1422;
  t1424 = -0.21*t1052;
  t1425 = 0. + t1423 + t1424;
  t1427 = -0.21*t1422;
  t1428 = 0.049*t1052;
  t1429 = 0. + t1427 + t1428;
  t1433 = -0.2707*t1432;
  t1434 = 0.0016*t1045;
  t1435 = 0. + t1433 + t1434;
  t1437 = -0.0016*t1432;
  t1438 = -0.2707*t1045;
  t1439 = 0. + t1437 + t1438;
  t1443 = 0.0184*t1442;
  t1444 = -0.7055*t1023;
  t1445 = 0. + t1443 + t1444;
  t1447 = -0.7055*t1442;
  t1448 = -0.0184*t1023;
  t1449 = 0. + t1447 + t1448;
  t1354 = t1229*t1296;
  t1355 = t1023*t1302;
  t1356 = t1354 + t1355;
  t1358 = t1229*t1344;
  t1359 = t1023*t1348;
  t1361 = t1358 + t1359;
  p_output1[0]=t1023*t1222 - 1.*t1229*t1241;
  p_output1[1]=t1023*t1296 - 1.*t1229*t1302;
  p_output1[2]=t1023*t1344 - 1.*t1229*t1348;
  p_output1[3]=0.;
  p_output1[4]=t1353;
  p_output1[5]=t1356;
  p_output1[6]=t1361;
  p_output1[7]=0.;
  p_output1[8]=t1084*t1179*t1183 - 1.*t1174*t1190;
  p_output1[9]=t1107*t1179*t1183 - 1.*t1174*t1278;
  p_output1[10]=-1.*t1096*t1183 - 1.*t1174*t1322;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t1084*t1179*t1183 + t1174*t1190) - 1.1135*(-1.*t1023*t1222 + t1229*t1241) - 0.0216*t1353 + t1084*t1179*t1378 + t1128*t1382 + t1140*t1389 + t1143*t1395 + t1163*t1399 + t1167*t1407 + t1190*t1411 + t1192*t1419 + t1194*t1425 + t1205*t1429 + t1209*t1435 + t1219*t1439 + t1222*t1445 + t1241*t1449 + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t1107*t1179*t1183 + t1174*t1278) - 1.1135*(-1.*t1023*t1296 + t1229*t1302) - 0.0216*t1356 + t1107*t1179*t1378 + t1249*t1382 + t1254*t1389 + t1262*t1395 + t1267*t1399 + t1269*t1407 + t1278*t1411 + t1280*t1419 + t1282*t1425 + t1286*t1429 + t1289*t1435 + t1294*t1439 + t1296*t1445 + t1302*t1449 + var1[1];
  p_output1[14]=0. - 0.1305*(t1096*t1183 + t1174*t1322) - 1.1135*(-1.*t1023*t1344 + t1229*t1348) - 0.0216*t1361 - 1.*t1096*t1378 + t1092*t1179*t1382 + t1113*t1179*t1389 + t1308*t1395 + t1313*t1399 + t1315*t1407 + t1322*t1411 + t1325*t1419 + t1328*t1425 + t1332*t1429 + t1335*t1435 + t1342*t1439 + t1344*t1445 + t1348*t1449 + var1[2];
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

#include "H_toe_joint_right.hh"

namespace SymExpression
{

void H_toe_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
