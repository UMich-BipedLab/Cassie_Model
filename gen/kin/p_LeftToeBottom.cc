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
  double t1165;
  double t1142;
  double t1167;
  double t1156;
  double t1169;
  double t1104;
  double t1163;
  double t1182;
  double t1187;
  double t1191;
  double t1193;
  double t1197;
  double t1205;
  double t1215;
  double t1250;
  double t1251;
  double t1252;
  double t1245;
  double t1246;
  double t1247;
  double t1258;
  double t1295;
  double t1298;
  double t1299;
  double t1305;
  double t1290;
  double t1291;
  double t1292;
  double t1313;
  double t1269;
  double t1272;
  double t1273;
  double t1277;
  double t1284;
  double t1286;
  double t1287;
  double t1336;
  double t1338;
  double t1339;
  double t1345;
  double t1346;
  double t1349;
  double t1351;
  double t1354;
  double t1355;
  double t1356;
  double t1364;
  double t1365;
  double t1366;
  double t1368;
  double t1369;
  double t1370;
  double t1374;
  double t1380;
  double t1382;
  double t1383;
  double t1395;
  double t1396;
  double t1398;
  double t1402;
  double t1405;
  double t1406;
  double t1408;
  double t1411;
  double t1412;
  double t1413;
  double t1418;
  double t1419;
  double t1420;
  double t1424;
  double t1425;
  double t1426;
  double t1428;
  double t1433;
  double t1434;
  double t1435;
  double t1440;
  double t1443;
  double t1444;
  double t1118;
  double t1128;
  double t1129;
  double t1134;
  double t1208;
  double t1209;
  double t1216;
  double t1221;
  double t1228;
  double t1238;
  double t1455;
  double t1456;
  double t1457;
  double t1459;
  double t1460;
  double t1461;
  double t1264;
  double t1267;
  double t1276;
  double t1279;
  double t1281;
  double t1467;
  double t1468;
  double t1469;
  double t1463;
  double t1464;
  double t1465;
  double t1304;
  double t1306;
  double t1307;
  double t1314;
  double t1315;
  double t1316;
  double t1475;
  double t1476;
  double t1477;
  double t1332;
  double t1334;
  double t1335;
  double t1350;
  double t1352;
  double t1353;
  double t1471;
  double t1472;
  double t1473;
  double t1484;
  double t1485;
  double t1486;
  double t1359;
  double t1361;
  double t1362;
  double t1371;
  double t1376;
  double t1379;
  double t1488;
  double t1489;
  double t1490;
  double t1492;
  double t1493;
  double t1494;
  double t1389;
  double t1390;
  double t1394;
  double t1407;
  double t1409;
  double t1410;
  double t1496;
  double t1497;
  double t1498;
  double t1500;
  double t1501;
  double t1502;
  double t1415;
  double t1416;
  double t1417;
  double t1427;
  double t1429;
  double t1430;
  double t1504;
  double t1505;
  double t1506;
  double t1508;
  double t1509;
  double t1510;
  double t1437;
  double t1438;
  double t1439;
  double t1512;
  double t1513;
  double t1514;
  double t1516;
  double t1517;
  double t1518;
  double t1535;
  double t1536;
  double t1537;
  double t1531;
  double t1532;
  double t1533;
  double t1543;
  double t1544;
  double t1545;
  double t1539;
  double t1540;
  double t1541;
  double t1552;
  double t1553;
  double t1554;
  double t1556;
  double t1557;
  double t1558;
  double t1560;
  double t1561;
  double t1562;
  double t1564;
  double t1565;
  double t1566;
  double t1568;
  double t1569;
  double t1570;
  double t1572;
  double t1573;
  double t1574;
  double t1576;
  double t1577;
  double t1578;
  double t1580;
  double t1581;
  double t1582;
  double t1584;
  double t1585;
  double t1586;
  t1165 = Cos(var1[3]);
  t1142 = Cos(var1[5]);
  t1167 = Sin(var1[4]);
  t1156 = Sin(var1[3]);
  t1169 = Sin(var1[5]);
  t1104 = Cos(var1[6]);
  t1163 = -1.*t1142*t1156;
  t1182 = t1165*t1167*t1169;
  t1187 = t1163 + t1182;
  t1191 = t1165*t1142*t1167;
  t1193 = t1156*t1169;
  t1197 = t1191 + t1193;
  t1205 = Sin(var1[6]);
  t1215 = Cos(var1[7]);
  t1250 = t1104*t1197;
  t1251 = -1.*t1187*t1205;
  t1252 = t1250 + t1251;
  t1245 = t1104*t1187;
  t1246 = t1197*t1205;
  t1247 = t1245 + t1246;
  t1258 = Sin(var1[7]);
  t1295 = Cos(var1[8]);
  t1298 = -1.*t1295;
  t1299 = 1. + t1298;
  t1305 = Sin(var1[8]);
  t1290 = t1215*t1247;
  t1291 = t1252*t1258;
  t1292 = t1290 + t1291;
  t1313 = Cos(var1[4]);
  t1269 = Cos(var1[9]);
  t1272 = -1.*t1269;
  t1273 = 1. + t1272;
  t1277 = Sin(var1[9]);
  t1284 = t1215*t1252;
  t1286 = -1.*t1247*t1258;
  t1287 = t1284 + t1286;
  t1336 = t1165*t1313*t1295;
  t1338 = t1292*t1305;
  t1339 = t1336 + t1338;
  t1345 = Cos(var1[10]);
  t1346 = -1.*t1345;
  t1349 = 1. + t1346;
  t1351 = Sin(var1[10]);
  t1354 = t1277*t1287;
  t1355 = t1269*t1339;
  t1356 = t1354 + t1355;
  t1364 = t1269*t1287;
  t1365 = -1.*t1277*t1339;
  t1366 = t1364 + t1365;
  t1368 = Cos(var1[11]);
  t1369 = -1.*t1368;
  t1370 = 1. + t1369;
  t1374 = Sin(var1[11]);
  t1380 = -1.*t1351*t1356;
  t1382 = t1345*t1366;
  t1383 = t1380 + t1382;
  t1395 = t1345*t1356;
  t1396 = t1351*t1366;
  t1398 = t1395 + t1396;
  t1402 = Cos(var1[12]);
  t1405 = -1.*t1402;
  t1406 = 1. + t1405;
  t1408 = Sin(var1[12]);
  t1411 = t1374*t1383;
  t1412 = t1368*t1398;
  t1413 = t1411 + t1412;
  t1418 = t1368*t1383;
  t1419 = -1.*t1374*t1398;
  t1420 = t1418 + t1419;
  t1424 = Cos(var1[13]);
  t1425 = -1.*t1424;
  t1426 = 1. + t1425;
  t1428 = Sin(var1[13]);
  t1433 = -1.*t1408*t1413;
  t1434 = t1402*t1420;
  t1435 = t1433 + t1434;
  t1440 = t1402*t1413;
  t1443 = t1408*t1420;
  t1444 = t1440 + t1443;
  t1118 = -1.*t1104;
  t1128 = 1. + t1118;
  t1129 = 0.135*t1128;
  t1134 = 0. + t1129;
  t1208 = -0.135*t1205;
  t1209 = 0. + t1208;
  t1216 = -1.*t1215;
  t1221 = 1. + t1216;
  t1228 = 0.135*t1221;
  t1238 = 0. + t1228;
  t1455 = t1165*t1142;
  t1456 = t1156*t1167*t1169;
  t1457 = t1455 + t1456;
  t1459 = t1142*t1156*t1167;
  t1460 = -1.*t1165*t1169;
  t1461 = t1459 + t1460;
  t1264 = -0.135*t1258;
  t1267 = 0. + t1264;
  t1276 = -0.09*t1273;
  t1279 = 0.049*t1277;
  t1281 = 0. + t1276 + t1279;
  t1467 = t1104*t1461;
  t1468 = -1.*t1457*t1205;
  t1469 = t1467 + t1468;
  t1463 = t1104*t1457;
  t1464 = t1461*t1205;
  t1465 = t1463 + t1464;
  t1304 = 0.135*t1299;
  t1306 = 0.049*t1305;
  t1307 = 0. + t1304 + t1306;
  t1314 = -0.049*t1299;
  t1315 = 0.135*t1305;
  t1316 = 0. + t1314 + t1315;
  t1475 = t1215*t1465;
  t1476 = t1469*t1258;
  t1477 = t1475 + t1476;
  t1332 = -0.049*t1273;
  t1334 = -0.09*t1277;
  t1335 = 0. + t1332 + t1334;
  t1350 = -0.049*t1349;
  t1352 = -0.21*t1351;
  t1353 = 0. + t1350 + t1352;
  t1471 = t1215*t1469;
  t1472 = -1.*t1465*t1258;
  t1473 = t1471 + t1472;
  t1484 = t1313*t1295*t1156;
  t1485 = t1477*t1305;
  t1486 = t1484 + t1485;
  t1359 = -0.21*t1349;
  t1361 = 0.049*t1351;
  t1362 = 0. + t1359 + t1361;
  t1371 = -0.2707*t1370;
  t1376 = 0.0016*t1374;
  t1379 = 0. + t1371 + t1376;
  t1488 = t1277*t1473;
  t1489 = t1269*t1486;
  t1490 = t1488 + t1489;
  t1492 = t1269*t1473;
  t1493 = -1.*t1277*t1486;
  t1494 = t1492 + t1493;
  t1389 = -0.0016*t1370;
  t1390 = -0.2707*t1374;
  t1394 = 0. + t1389 + t1390;
  t1407 = 0.0184*t1406;
  t1409 = -0.7055*t1408;
  t1410 = 0. + t1407 + t1409;
  t1496 = -1.*t1351*t1490;
  t1497 = t1345*t1494;
  t1498 = t1496 + t1497;
  t1500 = t1345*t1490;
  t1501 = t1351*t1494;
  t1502 = t1500 + t1501;
  t1415 = -0.7055*t1406;
  t1416 = -0.0184*t1408;
  t1417 = 0. + t1415 + t1416;
  t1427 = -1.1135*t1426;
  t1429 = 0.0216*t1428;
  t1430 = 0. + t1427 + t1429;
  t1504 = t1374*t1498;
  t1505 = t1368*t1502;
  t1506 = t1504 + t1505;
  t1508 = t1368*t1498;
  t1509 = -1.*t1374*t1502;
  t1510 = t1508 + t1509;
  t1437 = -0.0216*t1426;
  t1438 = -1.1135*t1428;
  t1439 = 0. + t1437 + t1438;
  t1512 = -1.*t1408*t1506;
  t1513 = t1402*t1510;
  t1514 = t1512 + t1513;
  t1516 = t1402*t1506;
  t1517 = t1408*t1510;
  t1518 = t1516 + t1517;
  t1535 = t1313*t1142*t1104;
  t1536 = -1.*t1313*t1169*t1205;
  t1537 = t1535 + t1536;
  t1531 = t1313*t1104*t1169;
  t1532 = t1313*t1142*t1205;
  t1533 = t1531 + t1532;
  t1543 = t1215*t1533;
  t1544 = t1537*t1258;
  t1545 = t1543 + t1544;
  t1539 = t1215*t1537;
  t1540 = -1.*t1533*t1258;
  t1541 = t1539 + t1540;
  t1552 = -1.*t1295*t1167;
  t1553 = t1545*t1305;
  t1554 = t1552 + t1553;
  t1556 = t1277*t1541;
  t1557 = t1269*t1554;
  t1558 = t1556 + t1557;
  t1560 = t1269*t1541;
  t1561 = -1.*t1277*t1554;
  t1562 = t1560 + t1561;
  t1564 = -1.*t1351*t1558;
  t1565 = t1345*t1562;
  t1566 = t1564 + t1565;
  t1568 = t1345*t1558;
  t1569 = t1351*t1562;
  t1570 = t1568 + t1569;
  t1572 = t1374*t1566;
  t1573 = t1368*t1570;
  t1574 = t1572 + t1573;
  t1576 = t1368*t1566;
  t1577 = -1.*t1374*t1570;
  t1578 = t1576 + t1577;
  t1580 = -1.*t1408*t1574;
  t1581 = t1402*t1578;
  t1582 = t1580 + t1581;
  t1584 = t1402*t1574;
  t1585 = t1408*t1578;
  t1586 = t1584 + t1585;
  p_output1[0]=0. + t1134*t1187 + t1197*t1209 + t1238*t1247 + t1252*t1267 + t1281*t1287 + t1292*t1307 + 0.1305*(t1292*t1295 - 1.*t1165*t1305*t1313) + t1165*t1313*t1316 + t1335*t1339 + t1353*t1356 + t1362*t1366 + t1379*t1383 + t1394*t1398 + t1410*t1413 + t1417*t1420 + t1430*t1435 + t1439*t1444 + 0.0306*(t1428*t1435 + t1424*t1444) - 1.1312*(t1424*t1435 - 1.*t1428*t1444) + var1[0];
  p_output1[1]=0. + t1156*t1313*t1316 + t1134*t1457 + t1209*t1461 + t1238*t1465 + t1267*t1469 + t1281*t1473 + t1307*t1477 + 0.1305*(-1.*t1156*t1305*t1313 + t1295*t1477) + t1335*t1486 + t1353*t1490 + t1362*t1494 + t1379*t1498 + t1394*t1502 + t1410*t1506 + t1417*t1510 + t1430*t1514 + t1439*t1518 + 0.0306*(t1428*t1514 + t1424*t1518) - 1.1312*(t1424*t1514 - 1.*t1428*t1518) + var1[1];
  p_output1[2]=0. + t1134*t1169*t1313 + t1142*t1209*t1313 - 1.*t1167*t1316 + t1238*t1533 + t1267*t1537 + t1281*t1541 + t1307*t1545 + 0.1305*(t1167*t1305 + t1295*t1545) + t1335*t1554 + t1353*t1558 + t1362*t1562 + t1379*t1566 + t1394*t1570 + t1410*t1574 + t1417*t1578 + t1430*t1582 + t1439*t1586 + 0.0306*(t1428*t1582 + t1424*t1586) - 1.1312*(t1424*t1582 - 1.*t1428*t1586) + var1[2];
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

#include "p_LeftToeBottom.hh"

namespace SymExpression
{

void p_LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
