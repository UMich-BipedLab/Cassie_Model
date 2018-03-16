/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:00 GMT-04:00
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
  double t813;
  double t1060;
  double t1022;
  double t1025;
  double t1074;
  double t1099;
  double t1052;
  double t1078;
  double t1079;
  double t1020;
  double t1107;
  double t1128;
  double t1131;
  double t1188;
  double t1081;
  double t1177;
  double t1181;
  double t1016;
  double t1203;
  double t1216;
  double t1222;
  double t1244;
  double t1187;
  double t1224;
  double t1227;
  double t998;
  double t1248;
  double t1252;
  double t1253;
  double t796;
  double t642;
  double t915;
  double t1301;
  double t1304;
  double t1309;
  double t1331;
  double t1333;
  double t1334;
  double t1323;
  double t1337;
  double t1340;
  double t1343;
  double t1344;
  double t1348;
  double t1341;
  double t1350;
  double t1353;
  double t1362;
  double t1364;
  double t1365;
  double t1360;
  double t1369;
  double t1370;
  double t1375;
  double t1376;
  double t1381;
  double t1402;
  double t1405;
  double t1410;
  double t1416;
  double t1417;
  double t1418;
  double t1412;
  double t1420;
  double t1423;
  double t1426;
  double t1428;
  double t1429;
  double t1424;
  double t1433;
  double t1440;
  double t1443;
  double t1445;
  double t1446;
  double t1441;
  double t1450;
  double t1451;
  double t1453;
  double t1454;
  double t1455;
  double t1230;
  double t1262;
  double t1265;
  double t1270;
  double t1274;
  double t1280;
  double t1372;
  double t1384;
  double t1385;
  double t1388;
  double t1391;
  double t1394;
  double t1452;
  double t1456;
  double t1457;
  double t1459;
  double t1461;
  double t1464;
  t813 = Cos(var1[1]);
  t1060 = Cos(var1[3]);
  t1022 = Cos(var1[2]);
  t1025 = Sin(var1[3]);
  t1074 = Sin(var1[2]);
  t1099 = Cos(var1[4]);
  t1052 = -1.*t813*t1022*t1025;
  t1078 = -1.*t1060*t813*t1074;
  t1079 = t1052 + t1078;
  t1020 = Sin(var1[4]);
  t1107 = t1060*t813*t1022;
  t1128 = -1.*t813*t1025*t1074;
  t1131 = t1107 + t1128;
  t1188 = Cos(var1[5]);
  t1081 = t1020*t1079;
  t1177 = t1099*t1131;
  t1181 = t1081 + t1177;
  t1016 = Sin(var1[5]);
  t1203 = t1099*t1079;
  t1216 = -1.*t1020*t1131;
  t1222 = t1203 + t1216;
  t1244 = Cos(var1[6]);
  t1187 = -1.*t1016*t1181;
  t1224 = t1188*t1222;
  t1227 = t1187 + t1224;
  t998 = Sin(var1[6]);
  t1248 = t1188*t1181;
  t1252 = t1016*t1222;
  t1253 = t1248 + t1252;
  t796 = Cos(var1[0]);
  t642 = Sin(var1[1]);
  t915 = Sin(var1[0]);
  t1301 = t796*t1022*t642;
  t1304 = -1.*t915*t1074;
  t1309 = t1301 + t1304;
  t1331 = -1.*t1022*t915;
  t1333 = -1.*t796*t642*t1074;
  t1334 = t1331 + t1333;
  t1323 = -1.*t1025*t1309;
  t1337 = t1060*t1334;
  t1340 = t1323 + t1337;
  t1343 = t1060*t1309;
  t1344 = t1025*t1334;
  t1348 = t1343 + t1344;
  t1341 = t1020*t1340;
  t1350 = t1099*t1348;
  t1353 = t1341 + t1350;
  t1362 = t1099*t1340;
  t1364 = -1.*t1020*t1348;
  t1365 = t1362 + t1364;
  t1360 = -1.*t1016*t1353;
  t1369 = t1188*t1365;
  t1370 = t1360 + t1369;
  t1375 = t1188*t1353;
  t1376 = t1016*t1365;
  t1381 = t1375 + t1376;
  t1402 = t1022*t915*t642;
  t1405 = t796*t1074;
  t1410 = t1402 + t1405;
  t1416 = t796*t1022;
  t1417 = -1.*t915*t642*t1074;
  t1418 = t1416 + t1417;
  t1412 = -1.*t1025*t1410;
  t1420 = t1060*t1418;
  t1423 = t1412 + t1420;
  t1426 = t1060*t1410;
  t1428 = t1025*t1418;
  t1429 = t1426 + t1428;
  t1424 = t1020*t1423;
  t1433 = t1099*t1429;
  t1440 = t1424 + t1433;
  t1443 = t1099*t1423;
  t1445 = -1.*t1020*t1429;
  t1446 = t1443 + t1445;
  t1441 = -1.*t1016*t1440;
  t1450 = t1188*t1446;
  t1451 = t1441 + t1450;
  t1453 = t1188*t1440;
  t1454 = t1016*t1446;
  t1455 = t1453 + t1454;
  t1230 = t998*t1227;
  t1262 = t1244*t1253;
  t1265 = t1230 + t1262;
  t1270 = t1244*t1227;
  t1274 = -1.*t998*t1253;
  t1280 = t1270 + t1274;
  t1372 = t998*t1370;
  t1384 = t1244*t1381;
  t1385 = t1372 + t1384;
  t1388 = t1244*t1370;
  t1391 = -1.*t998*t1381;
  t1394 = t1388 + t1391;
  t1452 = t998*t1451;
  t1456 = t1244*t1455;
  t1457 = t1452 + t1456;
  t1459 = t1244*t1451;
  t1461 = -1.*t998*t1455;
  t1464 = t1459 + t1461;
  p_output1[0]=0. + t642;
  p_output1[1]=0. + t796*t813;
  p_output1[2]=0. + t813*t915;
  p_output1[3]=0. + 0.642788*t1265 + 0.766044*t1280;
  p_output1[4]=0. - 0.642788*t1385 - 0.766044*t1394;
  p_output1[5]=0. - 0.642788*t1457 - 0.766044*t1464;
  p_output1[6]=0. - 0.766044*t1265 + 0.642788*t1280;
  p_output1[7]=0. + 0.766044*t1385 - 0.642788*t1394;
  p_output1[8]=0. + 0.766044*t1457 - 0.642788*t1464;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
