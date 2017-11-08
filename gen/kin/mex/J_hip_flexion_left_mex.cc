/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:58 GMT-05:00
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
  double t1124;
  double t1133;
  double t1135;
  double t1107;
  double t1136;
  double t1052;
  double t1143;
  double t1154;
  double t1159;
  double t1131;
  double t1139;
  double t1140;
  double t1160;
  double t1207;
  double t1209;
  double t1211;
  double t1213;
  double t1200;
  double t1201;
  double t1204;
  double t1226;
  double t1055;
  double t1092;
  double t1096;
  double t1097;
  double t1172;
  double t1178;
  double t1259;
  double t1260;
  double t1261;
  double t1251;
  double t1252;
  double t1255;
  double t1212;
  double t1217;
  double t1218;
  double t1228;
  double t1231;
  double t1233;
  double t1272;
  double t1275;
  double t1278;
  double t1307;
  double t1309;
  double t1310;
  double t1346;
  double t1348;
  double t1349;
  double t1373;
  double t1374;
  double t1375;
  double t1400;
  double t1401;
  double t1405;
  double t1265;
  double t1414;
  double t1417;
  double t1422;
  double t1423;
  double t1424;
  double t1434;
  double t1438;
  double t1439;
  double t1457;
  double t1458;
  double t1461;
  double t1410;
  double t1266;
  double t1268;
  double t1486;
  double t1487;
  double t1491;
  double t1429;
  double t1501;
  double t1503;
  double t1451;
  double t1453;
  double t1454;
  double t1455;
  double t1462;
  double t1464;
  double t1465;
  double t1283;
  double t1284;
  double t1286;
  double t1515;
  double t1517;
  double t1518;
  double t1522;
  double t1523;
  double t1534;
  double t1536;
  double t1539;
  double t1244;
  double t1556;
  double t1557;
  double t1558;
  t1124 = Cos(var1[5]);
  t1133 = Sin(var1[3]);
  t1135 = Sin(var1[4]);
  t1107 = Cos(var1[3]);
  t1136 = Sin(var1[5]);
  t1052 = Cos(var1[6]);
  t1143 = -1.*t1124*t1133*t1135;
  t1154 = t1107*t1136;
  t1159 = t1143 + t1154;
  t1131 = -1.*t1107*t1124;
  t1139 = -1.*t1133*t1135*t1136;
  t1140 = t1131 + t1139;
  t1160 = Sin(var1[6]);
  t1207 = Cos(var1[7]);
  t1209 = -1.*t1207;
  t1211 = 1. + t1209;
  t1213 = Sin(var1[7]);
  t1200 = t1052*t1140;
  t1201 = t1159*t1160;
  t1204 = t1200 + t1201;
  t1226 = Cos(var1[4]);
  t1055 = -1.*t1052;
  t1092 = 1. + t1055;
  t1096 = 0.135*t1092;
  t1097 = 0. + t1096;
  t1172 = -0.135*t1160;
  t1178 = 0. + t1172;
  t1259 = t1107*t1124*t1135;
  t1260 = t1133*t1136;
  t1261 = t1259 + t1260;
  t1251 = -1.*t1124*t1133;
  t1252 = t1107*t1135*t1136;
  t1255 = t1251 + t1252;
  t1212 = 0.135*t1211;
  t1217 = 0.049*t1213;
  t1218 = 0. + t1212 + t1217;
  t1228 = -0.049*t1211;
  t1231 = 0.135*t1213;
  t1233 = 0. + t1228 + t1231;
  t1272 = t1052*t1255;
  t1275 = t1261*t1160;
  t1278 = t1272 + t1275;
  t1307 = t1107*t1226*t1052*t1136;
  t1309 = t1107*t1226*t1124*t1160;
  t1310 = t1307 + t1309;
  t1346 = t1226*t1052*t1133*t1136;
  t1348 = t1226*t1124*t1133*t1160;
  t1349 = t1346 + t1348;
  t1373 = -1.*t1052*t1135*t1136;
  t1374 = -1.*t1124*t1135*t1160;
  t1375 = t1373 + t1374;
  t1400 = t1124*t1133;
  t1401 = -1.*t1107*t1135*t1136;
  t1405 = t1400 + t1401;
  t1265 = t1052*t1261;
  t1414 = t1405*t1160;
  t1417 = t1265 + t1414;
  t1422 = t1124*t1133*t1135;
  t1423 = -1.*t1107*t1136;
  t1424 = t1422 + t1423;
  t1434 = t1052*t1424;
  t1438 = t1140*t1160;
  t1439 = t1434 + t1438;
  t1457 = t1226*t1124*t1052;
  t1458 = -1.*t1226*t1136*t1160;
  t1461 = t1457 + t1458;
  t1410 = -1.*t1261*t1160;
  t1266 = -1.*t1255*t1160;
  t1268 = t1265 + t1266;
  t1486 = t1107*t1124;
  t1487 = t1133*t1135*t1136;
  t1491 = t1486 + t1487;
  t1429 = -1.*t1424*t1160;
  t1501 = -1.*t1491*t1160;
  t1503 = t1434 + t1501;
  t1451 = -1.*t1226*t1052*t1136;
  t1453 = -1.*t1226*t1124*t1160;
  t1454 = t1451 + t1453;
  t1455 = -0.09*t1454;
  t1462 = 0.135*t1207*t1461;
  t1464 = t1461*t1218;
  t1465 = -0.049*t1461*t1213;
  t1283 = t1207*t1278;
  t1284 = -1.*t1107*t1226*t1213;
  t1286 = t1283 + t1284;
  t1515 = 0.135*t1207;
  t1517 = -0.049*t1213;
  t1518 = t1515 + t1517;
  t1522 = 0.049*t1207;
  t1523 = t1522 + t1231;
  t1534 = t1052*t1491;
  t1536 = t1424*t1160;
  t1539 = t1534 + t1536;
  t1244 = -1.*t1226*t1207*t1133;
  t1556 = t1226*t1052*t1136;
  t1557 = t1226*t1124*t1160;
  t1558 = t1556 + t1557;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1097*t1140 - 0.09*(t1052*t1159 - 1.*t1140*t1160) + t1159*t1178 + t1204*t1218 + 0.135*(t1204*t1207 + t1133*t1213*t1226) - 1.*t1133*t1226*t1233 - 0.049*(t1204*t1213 + t1244);
  p_output1[10]=t1107*t1226*t1233 + t1097*t1255 + t1178*t1261 - 0.09*t1268 + t1218*t1278 - 0.049*(t1107*t1207*t1226 + t1213*t1278) + 0.135*t1286;
  p_output1[11]=0;
  p_output1[12]=t1097*t1107*t1136*t1226 + t1107*t1124*t1178*t1226 - 0.09*(t1052*t1107*t1124*t1226 - 1.*t1107*t1136*t1160*t1226) - 1.*t1107*t1135*t1233 + t1218*t1310 + 0.135*(t1107*t1135*t1213 + t1207*t1310) - 0.049*(-1.*t1107*t1135*t1207 + t1213*t1310);
  p_output1[13]=t1097*t1133*t1136*t1226 + t1124*t1133*t1178*t1226 - 0.09*(t1052*t1124*t1133*t1226 - 1.*t1133*t1136*t1160*t1226) - 1.*t1133*t1135*t1233 + t1218*t1349 + 0.135*(t1133*t1135*t1213 + t1207*t1349) - 0.049*(-1.*t1133*t1135*t1207 + t1213*t1349);
  p_output1[14]=-1.*t1097*t1135*t1136 - 0.09*(-1.*t1052*t1124*t1135 + t1135*t1136*t1160) - 1.*t1124*t1135*t1178 - 1.*t1226*t1233 + t1218*t1375 + 0.135*(t1213*t1226 + t1207*t1375) - 0.049*(-1.*t1207*t1226 + t1213*t1375);
  p_output1[15]=t1097*t1261 + t1178*t1405 - 0.09*(t1052*t1405 + t1410) + 0.135*t1207*t1417 - 0.049*t1213*t1417 + t1218*t1417;
  p_output1[16]=t1140*t1178 + t1097*t1424 - 0.09*(t1200 + t1429) + 0.135*t1207*t1439 - 0.049*t1213*t1439 + t1218*t1439;
  p_output1[17]=t1097*t1124*t1226 - 1.*t1136*t1178*t1226 + t1455 + t1462 + t1464 + t1465;
  p_output1[18]=0.135*t1160*t1255 - 0.135*t1052*t1261 + 0.135*t1207*t1268 - 0.049*t1213*t1268 + t1218*t1268 - 0.09*(-1.*t1052*t1255 + t1410);
  p_output1[19]=-0.135*t1052*t1424 + 0.135*t1160*t1491 - 0.09*(t1429 - 1.*t1052*t1491) + 0.135*t1207*t1503 - 0.049*t1213*t1503 + t1218*t1503;
  p_output1[20]=-0.135*t1052*t1124*t1226 + 0.135*t1136*t1160*t1226 + t1455 + t1462 + t1464 + t1465;
  p_output1[21]=0.135*(-1.*t1107*t1207*t1226 - 1.*t1213*t1278) - 0.049*t1286 + t1107*t1226*t1518 + t1278*t1523;
  p_output1[22]=t1133*t1226*t1518 + t1523*t1539 - 0.049*(-1.*t1133*t1213*t1226 + t1207*t1539) + 0.135*(t1244 - 1.*t1213*t1539);
  p_output1[23]=-1.*t1135*t1518 + t1523*t1558 - 0.049*(t1135*t1213 + t1207*t1558) + 0.135*(t1135*t1207 - 1.*t1213*t1558);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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
