/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:06 GMT-05:00
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
  double t1340;
  double t1328;
  double t1341;
  double t1332;
  double t1342;
  double t1295;
  double t1339;
  double t1343;
  double t1344;
  double t1347;
  double t1348;
  double t1349;
  double t1350;
  double t1358;
  double t1360;
  double t1361;
  double t1363;
  double t1354;
  double t1355;
  double t1356;
  double t1367;
  double t1379;
  double t1380;
  double t1381;
  double t1383;
  double t1376;
  double t1377;
  double t1378;
  double t1387;
  double t1388;
  double t1389;
  double t1394;
  double t1395;
  double t1396;
  double t1398;
  double t1401;
  double t1402;
  double t1403;
  double t1408;
  double t1409;
  double t1410;
  double t1308;
  double t1309;
  double t1320;
  double t1327;
  double t1351;
  double t1352;
  double t1421;
  double t1422;
  double t1423;
  double t1425;
  double t1426;
  double t1427;
  double t1362;
  double t1364;
  double t1365;
  double t1368;
  double t1369;
  double t1370;
  double t1429;
  double t1430;
  double t1431;
  double t1382;
  double t1384;
  double t1385;
  double t1390;
  double t1391;
  double t1392;
  double t1397;
  double t1399;
  double t1400;
  double t1438;
  double t1439;
  double t1440;
  double t1442;
  double t1443;
  double t1444;
  double t1405;
  double t1406;
  double t1407;
  double t1446;
  double t1447;
  double t1448;
  double t1450;
  double t1451;
  double t1452;
  double t1465;
  double t1466;
  double t1467;
  double t1474;
  double t1475;
  double t1476;
  double t1478;
  double t1479;
  double t1480;
  double t1482;
  double t1483;
  double t1484;
  double t1486;
  double t1487;
  double t1488;
  t1340 = Cos(var1[3]);
  t1328 = Cos(var1[5]);
  t1341 = Sin(var1[4]);
  t1332 = Sin(var1[3]);
  t1342 = Sin(var1[5]);
  t1295 = Cos(var1[6]);
  t1339 = -1.*t1328*t1332;
  t1343 = t1340*t1341*t1342;
  t1344 = t1339 + t1343;
  t1347 = t1340*t1328*t1341;
  t1348 = t1332*t1342;
  t1349 = t1347 + t1348;
  t1350 = Sin(var1[6]);
  t1358 = Cos(var1[7]);
  t1360 = -1.*t1358;
  t1361 = 1. + t1360;
  t1363 = Sin(var1[7]);
  t1354 = t1295*t1344;
  t1355 = t1349*t1350;
  t1356 = t1354 + t1355;
  t1367 = Cos(var1[4]);
  t1379 = Cos(var1[8]);
  t1380 = -1.*t1379;
  t1381 = 1. + t1380;
  t1383 = Sin(var1[8]);
  t1376 = t1340*t1367*t1358;
  t1377 = t1356*t1363;
  t1378 = t1376 + t1377;
  t1387 = t1295*t1349;
  t1388 = -1.*t1344*t1350;
  t1389 = t1387 + t1388;
  t1394 = Cos(var1[9]);
  t1395 = -1.*t1394;
  t1396 = 1. + t1395;
  t1398 = Sin(var1[9]);
  t1401 = t1379*t1378;
  t1402 = t1389*t1383;
  t1403 = t1401 + t1402;
  t1408 = t1379*t1389;
  t1409 = -1.*t1378*t1383;
  t1410 = t1408 + t1409;
  t1308 = -1.*t1295;
  t1309 = 1. + t1308;
  t1320 = 0.135*t1309;
  t1327 = 0. + t1320;
  t1351 = -0.135*t1350;
  t1352 = 0. + t1351;
  t1421 = t1340*t1328;
  t1422 = t1332*t1341*t1342;
  t1423 = t1421 + t1422;
  t1425 = t1328*t1332*t1341;
  t1426 = -1.*t1340*t1342;
  t1427 = t1425 + t1426;
  t1362 = 0.135*t1361;
  t1364 = 0.049*t1363;
  t1365 = 0. + t1362 + t1364;
  t1368 = -0.049*t1361;
  t1369 = 0.135*t1363;
  t1370 = 0. + t1368 + t1369;
  t1429 = t1295*t1423;
  t1430 = t1427*t1350;
  t1431 = t1429 + t1430;
  t1382 = -0.049*t1381;
  t1384 = -0.09*t1383;
  t1385 = 0. + t1382 + t1384;
  t1390 = -0.09*t1381;
  t1391 = 0.049*t1383;
  t1392 = 0. + t1390 + t1391;
  t1397 = -0.049*t1396;
  t1399 = -0.21*t1398;
  t1400 = 0. + t1397 + t1399;
  t1438 = t1367*t1358*t1332;
  t1439 = t1431*t1363;
  t1440 = t1438 + t1439;
  t1442 = t1295*t1427;
  t1443 = -1.*t1423*t1350;
  t1444 = t1442 + t1443;
  t1405 = -0.21*t1396;
  t1406 = 0.049*t1398;
  t1407 = 0. + t1405 + t1406;
  t1446 = t1379*t1440;
  t1447 = t1444*t1383;
  t1448 = t1446 + t1447;
  t1450 = t1379*t1444;
  t1451 = -1.*t1440*t1383;
  t1452 = t1450 + t1451;
  t1465 = t1367*t1295*t1342;
  t1466 = t1367*t1328*t1350;
  t1467 = t1465 + t1466;
  t1474 = -1.*t1358*t1341;
  t1475 = t1467*t1363;
  t1476 = t1474 + t1475;
  t1478 = t1367*t1328*t1295;
  t1479 = -1.*t1367*t1342*t1350;
  t1480 = t1478 + t1479;
  t1482 = t1379*t1476;
  t1483 = t1480*t1383;
  t1484 = t1482 + t1483;
  t1486 = t1379*t1480;
  t1487 = -1.*t1476*t1383;
  t1488 = t1486 + t1487;
  p_output1[0]=0. + t1327*t1344 + t1349*t1352 + t1356*t1365 + 0.1305*(t1356*t1358 - 1.*t1340*t1363*t1367) + t1340*t1367*t1370 + t1378*t1385 + t1389*t1392 + t1400*t1403 + t1407*t1410 - 0.21*(-1.*t1398*t1403 + t1394*t1410) - 0.049*(t1394*t1403 + t1398*t1410) + var1[0];
  p_output1[1]=0. + t1332*t1367*t1370 + t1327*t1423 + t1352*t1427 + t1365*t1431 + 0.1305*(-1.*t1332*t1363*t1367 + t1358*t1431) + t1385*t1440 + t1392*t1444 + t1400*t1448 + t1407*t1452 - 0.21*(-1.*t1398*t1448 + t1394*t1452) - 0.049*(t1394*t1448 + t1398*t1452) + var1[1];
  p_output1[2]=0. + t1327*t1342*t1367 + t1328*t1352*t1367 - 1.*t1341*t1370 + t1365*t1467 + 0.1305*(t1341*t1363 + t1358*t1467) + t1385*t1476 + t1392*t1480 + t1400*t1484 + t1407*t1488 - 0.21*(-1.*t1398*t1484 + t1394*t1488) - 0.049*(t1394*t1484 + t1398*t1488) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_knee_joint_left_mex.hh"

namespace SymExpression
{

void p_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
