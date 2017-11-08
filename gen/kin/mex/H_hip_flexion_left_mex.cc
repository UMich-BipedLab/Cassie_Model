/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:00 GMT-05:00
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
  double t1272;
  double t1291;
  double t1268;
  double t1286;
  double t1292;
  double t1235;
  double t1320;
  double t1354;
  double t1297;
  double t1300;
  double t1314;
  double t1290;
  double t1294;
  double t1295;
  double t1363;
  double t1343;
  double t1346;
  double t1348;
  double t1331;
  double t1333;
  double t1339;
  double t1378;
  double t1369;
  double t1370;
  double t1372;
  double t1389;
  double t1391;
  double t1394;
  double t1400;
  double t1406;
  double t1409;
  double t1469;
  double t1470;
  double t1366;
  double t1380;
  double t1381;
  double t1433;
  double t1434;
  double t1438;
  double t1447;
  double t1449;
  double t1450;
  double t1471;
  double t1472;
  double t1475;
  double t1486;
  double t1487;
  double t1492;
  double t1386;
  double t1395;
  double t1397;
  double t1399;
  double t1411;
  double t1413;
  t1272 = Cos(var1[5]);
  t1291 = Sin(var1[3]);
  t1268 = Cos(var1[3]);
  t1286 = Sin(var1[4]);
  t1292 = Sin(var1[5]);
  t1235 = Cos(var1[6]);
  t1320 = Sin(var1[6]);
  t1354 = Cos(var1[4]);
  t1297 = -1.*t1272*t1291;
  t1300 = t1268*t1286*t1292;
  t1314 = t1297 + t1300;
  t1290 = t1268*t1272*t1286;
  t1294 = t1291*t1292;
  t1295 = t1290 + t1294;
  t1363 = Cos(var1[7]);
  t1343 = t1268*t1272;
  t1346 = t1291*t1286*t1292;
  t1348 = t1343 + t1346;
  t1331 = t1272*t1291*t1286;
  t1333 = -1.*t1268*t1292;
  t1339 = t1331 + t1333;
  t1378 = Sin(var1[7]);
  t1369 = t1235*t1314;
  t1370 = t1295*t1320;
  t1372 = t1369 + t1370;
  t1389 = t1235*t1348;
  t1391 = t1339*t1320;
  t1394 = t1389 + t1391;
  t1400 = t1354*t1235*t1292;
  t1406 = t1354*t1272*t1320;
  t1409 = t1400 + t1406;
  t1469 = -1.*t1363;
  t1470 = 1. + t1469;
  t1366 = t1268*t1354*t1363;
  t1380 = t1372*t1378;
  t1381 = t1366 + t1380;
  t1433 = -1.*t1235;
  t1434 = 1. + t1433;
  t1438 = 0.135*t1434;
  t1447 = 0. + t1438;
  t1449 = -0.135*t1320;
  t1450 = 0. + t1449;
  t1471 = 0.135*t1470;
  t1472 = 0.049*t1378;
  t1475 = 0. + t1471 + t1472;
  t1486 = -0.049*t1470;
  t1487 = 0.135*t1378;
  t1492 = 0. + t1486 + t1487;
  t1386 = t1354*t1363*t1291;
  t1395 = t1394*t1378;
  t1397 = t1386 + t1395;
  t1399 = -1.*t1363*t1286;
  t1411 = t1409*t1378;
  t1413 = t1399 + t1411;
  p_output1[0]=-1.*t1235*t1295 + t1314*t1320;
  p_output1[1]=-1.*t1235*t1339 + t1320*t1348;
  p_output1[2]=-1.*t1235*t1272*t1354 + t1292*t1320*t1354;
  p_output1[3]=0.;
  p_output1[4]=t1381;
  p_output1[5]=t1397;
  p_output1[6]=t1413;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1363*t1372 + t1268*t1354*t1378;
  p_output1[9]=t1291*t1354*t1378 - 1.*t1363*t1394;
  p_output1[10]=-1.*t1286*t1378 - 1.*t1363*t1409;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t1235*t1295 - 1.*t1314*t1320) + 0.135*(t1363*t1372 - 1.*t1268*t1354*t1378) - 0.049*t1381 + t1314*t1447 + t1295*t1450 + t1372*t1475 + t1268*t1354*t1492 + var1[0];
  p_output1[13]=0. - 0.09*(t1235*t1339 - 1.*t1320*t1348) + 0.135*(-1.*t1291*t1354*t1378 + t1363*t1394) - 0.049*t1397 + t1348*t1447 + t1339*t1450 + t1394*t1475 + t1291*t1354*t1492 + var1[1];
  p_output1[14]=0. - 0.09*(t1235*t1272*t1354 - 1.*t1292*t1320*t1354) + 0.135*(t1286*t1378 + t1363*t1409) - 0.049*t1413 + t1292*t1354*t1447 + t1272*t1354*t1450 + t1409*t1475 - 1.*t1286*t1492 + var1[2];
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
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

#include "H_hip_flexion_left_mex.hh"

namespace SymExpression
{

void H_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
