/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:57 GMT-04:00
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
  double t1304;
  double t1292;
  double t1305;
  double t1296;
  double t1306;
  double t1259;
  double t1303;
  double t1307;
  double t1308;
  double t1311;
  double t1312;
  double t1313;
  double t1314;
  double t1322;
  double t1324;
  double t1325;
  double t1327;
  double t1318;
  double t1319;
  double t1320;
  double t1331;
  double t1343;
  double t1344;
  double t1345;
  double t1347;
  double t1340;
  double t1341;
  double t1342;
  double t1351;
  double t1352;
  double t1353;
  double t1358;
  double t1359;
  double t1360;
  double t1362;
  double t1365;
  double t1366;
  double t1367;
  double t1372;
  double t1373;
  double t1374;
  double t1272;
  double t1273;
  double t1284;
  double t1291;
  double t1315;
  double t1316;
  double t1385;
  double t1386;
  double t1387;
  double t1389;
  double t1390;
  double t1391;
  double t1326;
  double t1328;
  double t1329;
  double t1332;
  double t1333;
  double t1334;
  double t1393;
  double t1394;
  double t1395;
  double t1346;
  double t1348;
  double t1349;
  double t1354;
  double t1355;
  double t1356;
  double t1361;
  double t1363;
  double t1364;
  double t1402;
  double t1403;
  double t1404;
  double t1406;
  double t1407;
  double t1408;
  double t1369;
  double t1370;
  double t1371;
  double t1410;
  double t1411;
  double t1412;
  double t1414;
  double t1415;
  double t1416;
  double t1429;
  double t1430;
  double t1431;
  double t1438;
  double t1439;
  double t1440;
  double t1442;
  double t1443;
  double t1444;
  double t1446;
  double t1447;
  double t1448;
  double t1450;
  double t1451;
  double t1452;
  t1304 = Cos(var1[3]);
  t1292 = Cos(var1[5]);
  t1305 = Sin(var1[4]);
  t1296 = Sin(var1[3]);
  t1306 = Sin(var1[5]);
  t1259 = Cos(var1[6]);
  t1303 = -1.*t1292*t1296;
  t1307 = t1304*t1305*t1306;
  t1308 = t1303 + t1307;
  t1311 = t1304*t1292*t1305;
  t1312 = t1296*t1306;
  t1313 = t1311 + t1312;
  t1314 = Sin(var1[6]);
  t1322 = Cos(var1[7]);
  t1324 = -1.*t1322;
  t1325 = 1. + t1324;
  t1327 = Sin(var1[7]);
  t1318 = t1259*t1308;
  t1319 = t1313*t1314;
  t1320 = t1318 + t1319;
  t1331 = Cos(var1[4]);
  t1343 = Cos(var1[8]);
  t1344 = -1.*t1343;
  t1345 = 1. + t1344;
  t1347 = Sin(var1[8]);
  t1340 = t1304*t1331*t1322;
  t1341 = t1320*t1327;
  t1342 = t1340 + t1341;
  t1351 = t1259*t1313;
  t1352 = -1.*t1308*t1314;
  t1353 = t1351 + t1352;
  t1358 = Cos(var1[9]);
  t1359 = -1.*t1358;
  t1360 = 1. + t1359;
  t1362 = Sin(var1[9]);
  t1365 = t1343*t1342;
  t1366 = t1353*t1347;
  t1367 = t1365 + t1366;
  t1372 = t1343*t1353;
  t1373 = -1.*t1342*t1347;
  t1374 = t1372 + t1373;
  t1272 = -1.*t1259;
  t1273 = 1. + t1272;
  t1284 = 0.135*t1273;
  t1291 = 0. + t1284;
  t1315 = -0.135*t1314;
  t1316 = 0. + t1315;
  t1385 = t1304*t1292;
  t1386 = t1296*t1305*t1306;
  t1387 = t1385 + t1386;
  t1389 = t1292*t1296*t1305;
  t1390 = -1.*t1304*t1306;
  t1391 = t1389 + t1390;
  t1326 = 0.135*t1325;
  t1328 = 0.049*t1327;
  t1329 = 0. + t1326 + t1328;
  t1332 = -0.049*t1325;
  t1333 = 0.135*t1327;
  t1334 = 0. + t1332 + t1333;
  t1393 = t1259*t1387;
  t1394 = t1391*t1314;
  t1395 = t1393 + t1394;
  t1346 = -0.049*t1345;
  t1348 = -0.09*t1347;
  t1349 = 0. + t1346 + t1348;
  t1354 = -0.09*t1345;
  t1355 = 0.049*t1347;
  t1356 = 0. + t1354 + t1355;
  t1361 = -0.049*t1360;
  t1363 = -0.21*t1362;
  t1364 = 0. + t1361 + t1363;
  t1402 = t1331*t1322*t1296;
  t1403 = t1395*t1327;
  t1404 = t1402 + t1403;
  t1406 = t1259*t1391;
  t1407 = -1.*t1387*t1314;
  t1408 = t1406 + t1407;
  t1369 = -0.21*t1360;
  t1370 = 0.049*t1362;
  t1371 = 0. + t1369 + t1370;
  t1410 = t1343*t1404;
  t1411 = t1408*t1347;
  t1412 = t1410 + t1411;
  t1414 = t1343*t1408;
  t1415 = -1.*t1404*t1347;
  t1416 = t1414 + t1415;
  t1429 = t1331*t1259*t1306;
  t1430 = t1331*t1292*t1314;
  t1431 = t1429 + t1430;
  t1438 = -1.*t1322*t1305;
  t1439 = t1431*t1327;
  t1440 = t1438 + t1439;
  t1442 = t1331*t1292*t1259;
  t1443 = -1.*t1331*t1306*t1314;
  t1444 = t1442 + t1443;
  t1446 = t1343*t1440;
  t1447 = t1444*t1347;
  t1448 = t1446 + t1447;
  t1450 = t1343*t1444;
  t1451 = -1.*t1440*t1347;
  t1452 = t1450 + t1451;
  p_output1[0]=0. + t1291*t1308 + t1313*t1316 + t1320*t1329 + 0.1305*(t1320*t1322 - 1.*t1304*t1327*t1331) + t1304*t1331*t1334 + t1342*t1349 + t1353*t1356 + t1364*t1367 + t1371*t1374 - 0.21*(-1.*t1362*t1367 + t1358*t1374) - 0.049*(t1358*t1367 + t1362*t1374) + var1[0];
  p_output1[1]=0. + t1296*t1331*t1334 + t1291*t1387 + t1316*t1391 + t1329*t1395 + 0.1305*(-1.*t1296*t1327*t1331 + t1322*t1395) + t1349*t1404 + t1356*t1408 + t1364*t1412 + t1371*t1416 - 0.21*(-1.*t1362*t1412 + t1358*t1416) - 0.049*(t1358*t1412 + t1362*t1416) + var1[1];
  p_output1[2]=0. + t1291*t1306*t1331 + t1292*t1316*t1331 - 1.*t1305*t1334 + t1329*t1431 + 0.1305*(t1305*t1327 + t1322*t1431) + t1349*t1440 + t1356*t1444 + t1364*t1448 + t1371*t1452 - 0.21*(-1.*t1362*t1448 + t1358*t1452) - 0.049*(t1358*t1448 + t1362*t1452) + var1[2];
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
