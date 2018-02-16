/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:33:37 GMT-05:00
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
  double t9;
  double t10;
  double t17;
  double t31;
  double t61;
  double t106;
  double t33;
  double t36;
  double t37;
  double t76;
  double t82;
  double t91;
  double t96;
  double t113;
  double t178;
  double t200;
  double t202;
  double t213;
  double t119;
  double t123;
  double t124;
  double t141;
  double t156;
  double t161;
  double t206;
  double t218;
  double t221;
  double t226;
  double t235;
  double t238;
  double t243;
  double t256;
  double t263;
  double t265;
  double t266;
  double t298;
  double t303;
  double t308;
  double t318;
  double t270;
  double t283;
  double t284;
  double t310;
  double t319;
  double t321;
  double t323;
  double t326;
  double t333;
  double t334;
  double t339;
  double t340;
  double t341;
  double t343;
  double t389;
  double t391;
  double t396;
  double t402;
  double t358;
  double t359;
  double t364;
  double t399;
  double t405;
  double t419;
  double t420;
  double t422;
  double t427;
  double t428;
  double t435;
  double t437;
  double t439;
  double t451;
  double t494;
  double t497;
  double t504;
  double t519;
  double t464;
  double t467;
  double t469;
  double t516;
  double t526;
  double t527;
  double t535;
  double t538;
  double t541;
  double t543;
  double t545;
  double t547;
  double t568;
  double t572;
  double t638;
  double t647;
  double t652;
  double t656;
  double t578;
  double t609;
  double t613;
  double t655;
  double t666;
  double t668;
  double t670;
  double t676;
  double t684;
  double t686;
  double t689;
  double t692;
  double t695;
  double t699;
  double t758;
  double t759;
  double t760;
  double t780;
  double t709;
  double t716;
  double t728;
  double t38;
  double t872;
  double t888;
  double t877;
  double t879;
  double t884;
  double t886;
  double t887;
  double t891;
  double t897;
  double t900;
  double t917;
  double t922;
  double t929;
  double t901;
  double t908;
  double t910;
  double t966;
  double t969;
  double t977;
  double t992;
  double t988;
  double t994;
  double t999;
  double t1005;
  double t1010;
  double t1015;
  double t1024;
  double t1028;
  double t1029;
  double t1030;
  double t1031;
  double t1038;
  double t1042;
  double t1044;
  double t1066;
  double t1067;
  double t1072;
  double t1083;
  double t1076;
  double t1101;
  double t1105;
  double t1112;
  double t1117;
  double t1118;
  double t1125;
  double t1126;
  double t1133;
  double t1134;
  double t1136;
  double t1182;
  double t1185;
  double t1186;
  double t1200;
  double t1145;
  double t1149;
  double t1153;
  double t1187;
  double t1201;
  double t1202;
  double t1204;
  double t1213;
  double t1214;
  double t1217;
  double t1222;
  double t1225;
  double t1238;
  double t1244;
  double t1286;
  double t1292;
  double t1295;
  double t1307;
  double t1249;
  double t1250;
  double t1255;
  double t1305;
  double t1309;
  double t1312;
  double t1321;
  double t1323;
  double t1333;
  double t1334;
  double t1339;
  double t1341;
  double t1345;
  double t1346;
  double t1392;
  double t1396;
  double t1400;
  double t1424;
  double t1360;
  double t1362;
  double t1363;
  double t1407;
  double t1428;
  double t1434;
  double t1436;
  double t1437;
  double t1439;
  double t1442;
  double t1448;
  double t1449;
  double t1453;
  double t1459;
  double t1487;
  double t1494;
  double t1496;
  double t1499;
  double t1464;
  double t1467;
  double t1470;
  t9 = Cos(var1[4]);
  t10 = Cos(var1[5]);
  t17 = Sin(var1[4]);
  t31 = Sin(var1[13]);
  t61 = Cos(var1[13]);
  t106 = Sin(var1[5]);
  t33 = 0.135*t31;
  t36 = 0. + t33;
  t37 = t9*t10*t36;
  t76 = -1.*t61;
  t82 = 1. + t76;
  t91 = -0.135*t82;
  t96 = 0. + t91;
  t113 = t96*t9*t106;
  t178 = Cos(var1[14]);
  t200 = -1.*t178;
  t202 = 1. + t200;
  t213 = Sin(var1[14]);
  t119 = t9*t10*t31;
  t123 = t61*t9*t106;
  t124 = t119 + t123;
  t141 = t61*t9*t10;
  t156 = -1.*t9*t31*t106;
  t161 = t141 + t156;
  t206 = -0.049*t202;
  t218 = -0.135*t213;
  t221 = 0. + t206 + t218;
  t226 = -1.*t221*t17;
  t235 = -0.135*t202;
  t238 = 0.049*t213;
  t243 = 0. + t235 + t238;
  t256 = t243*t124;
  t263 = t213*t17;
  t265 = t178*t124;
  t266 = t263 + t265;
  t298 = Cos(var1[15]);
  t303 = -1.*t298;
  t308 = 1. + t303;
  t318 = Sin(var1[15]);
  t270 = -1.*t178*t17;
  t283 = t213*t124;
  t284 = t270 + t283;
  t310 = -0.09*t308;
  t319 = 0.049*t318;
  t321 = 0. + t310 + t319;
  t323 = t321*t161;
  t326 = -0.049*t308;
  t333 = -0.09*t318;
  t334 = 0. + t326 + t333;
  t339 = t334*t284;
  t340 = t318*t161;
  t341 = t298*t284;
  t343 = t340 + t341;
  t389 = Cos(var1[16]);
  t391 = -1.*t389;
  t396 = 1. + t391;
  t402 = Sin(var1[16]);
  t358 = t298*t161;
  t359 = -1.*t318*t284;
  t364 = t358 + t359;
  t399 = -0.049*t396;
  t405 = -0.21*t402;
  t419 = 0. + t399 + t405;
  t420 = t419*t343;
  t422 = -0.21*t396;
  t427 = 0.049*t402;
  t428 = 0. + t422 + t427;
  t435 = t428*t364;
  t437 = -1.*t402*t343;
  t439 = t389*t364;
  t451 = t437 + t439;
  t494 = Cos(var1[17]);
  t497 = -1.*t494;
  t504 = 1. + t497;
  t519 = Sin(var1[17]);
  t464 = t389*t343;
  t467 = t402*t364;
  t469 = t464 + t467;
  t516 = -0.2707*t504;
  t526 = 0.0016*t519;
  t527 = 0. + t516 + t526;
  t535 = t527*t451;
  t538 = -0.0016*t504;
  t541 = -0.2707*t519;
  t543 = 0. + t538 + t541;
  t545 = t543*t469;
  t547 = t519*t451;
  t568 = t494*t469;
  t572 = t547 + t568;
  t638 = Cos(var1[18]);
  t647 = -1.*t638;
  t652 = 1. + t647;
  t656 = Sin(var1[18]);
  t578 = t494*t451;
  t609 = -1.*t519*t469;
  t613 = t578 + t609;
  t655 = 0.0184*t652;
  t666 = -0.7055*t656;
  t668 = 0. + t655 + t666;
  t670 = t668*t572;
  t676 = -0.7055*t652;
  t684 = -0.0184*t656;
  t686 = 0. + t676 + t684;
  t689 = t686*t613;
  t692 = -1.*t656*t572;
  t695 = t638*t613;
  t699 = t692 + t695;
  t758 = Cos(var1[19]);
  t759 = -1.*t758;
  t760 = 1. + t759;
  t780 = Sin(var1[19]);
  t709 = t638*t572;
  t716 = t656*t613;
  t728 = t709 + t716;
  t38 = 0.0233*t17;
  t872 = Cos(var1[6]);
  t888 = Sin(var1[6]);
  t877 = -1.*t872;
  t879 = 1. + t877;
  t884 = 0.135*t879;
  t886 = 0. + t884;
  t887 = t9*t886*t106;
  t891 = -0.135*t888;
  t897 = 0. + t891;
  t900 = t9*t10*t897;
  t917 = t9*t10*t872;
  t922 = -1.*t9*t106*t888;
  t929 = t917 + t922;
  t901 = t9*t872*t106;
  t908 = t9*t10*t888;
  t910 = t901 + t908;
  t966 = Cos(var1[7]);
  t969 = -1.*t966;
  t977 = 1. + t969;
  t992 = Sin(var1[7]);
  t988 = 0.135*t977;
  t994 = 0.049*t992;
  t999 = 0. + t988 + t994;
  t1005 = t910*t999;
  t1010 = -0.049*t977;
  t1015 = 0.135*t992;
  t1024 = 0. + t1010 + t1015;
  t1028 = -1.*t17*t1024;
  t1029 = t966*t910;
  t1030 = t17*t992;
  t1031 = t1029 + t1030;
  t1038 = -1.*t966*t17;
  t1042 = t910*t992;
  t1044 = t1038 + t1042;
  t1066 = Cos(var1[8]);
  t1067 = -1.*t1066;
  t1072 = 1. + t1067;
  t1083 = Sin(var1[8]);
  t1076 = -0.049*t1072;
  t1101 = -0.09*t1083;
  t1105 = 0. + t1076 + t1101;
  t1112 = t1044*t1105;
  t1117 = -0.09*t1072;
  t1118 = 0.049*t1083;
  t1125 = 0. + t1117 + t1118;
  t1126 = t929*t1125;
  t1133 = t1066*t1044;
  t1134 = t929*t1083;
  t1136 = t1133 + t1134;
  t1182 = Cos(var1[9]);
  t1185 = -1.*t1182;
  t1186 = 1. + t1185;
  t1200 = Sin(var1[9]);
  t1145 = t1066*t929;
  t1149 = -1.*t1044*t1083;
  t1153 = t1145 + t1149;
  t1187 = -0.049*t1186;
  t1201 = -0.21*t1200;
  t1202 = 0. + t1187 + t1201;
  t1204 = t1202*t1136;
  t1213 = -0.21*t1186;
  t1214 = 0.049*t1200;
  t1217 = 0. + t1213 + t1214;
  t1222 = t1217*t1153;
  t1225 = -1.*t1200*t1136;
  t1238 = t1182*t1153;
  t1244 = t1225 + t1238;
  t1286 = Cos(var1[10]);
  t1292 = -1.*t1286;
  t1295 = 1. + t1292;
  t1307 = Sin(var1[10]);
  t1249 = t1182*t1136;
  t1250 = t1200*t1153;
  t1255 = t1249 + t1250;
  t1305 = -0.2707*t1295;
  t1309 = 0.0016*t1307;
  t1312 = 0. + t1305 + t1309;
  t1321 = t1312*t1244;
  t1323 = -0.0016*t1295;
  t1333 = -0.2707*t1307;
  t1334 = 0. + t1323 + t1333;
  t1339 = t1334*t1255;
  t1341 = t1307*t1244;
  t1345 = t1286*t1255;
  t1346 = t1341 + t1345;
  t1392 = Cos(var1[11]);
  t1396 = -1.*t1392;
  t1400 = 1. + t1396;
  t1424 = Sin(var1[11]);
  t1360 = t1286*t1244;
  t1362 = -1.*t1307*t1255;
  t1363 = t1360 + t1362;
  t1407 = 0.0184*t1400;
  t1428 = -0.7055*t1424;
  t1434 = 0. + t1407 + t1428;
  t1436 = t1434*t1346;
  t1437 = -0.7055*t1400;
  t1439 = -0.0184*t1424;
  t1442 = 0. + t1437 + t1439;
  t1448 = t1442*t1363;
  t1449 = -1.*t1424*t1346;
  t1453 = t1392*t1363;
  t1459 = t1449 + t1453;
  t1487 = Cos(var1[12]);
  t1494 = -1.*t1487;
  t1496 = 1. + t1494;
  t1499 = Sin(var1[12]);
  t1464 = t1392*t1346;
  t1467 = t1424*t1363;
  t1470 = t1464 + t1467;
  p_output1[0]=11.4777*(0. + t113 - 0.0343*t161 + t226 + t256 - 0.135*t266 - 0.049*t284 + t37 + var1[2]) + 54.1512*(0. + t113 + t226 + t256 - 0.1708*t266 + t323 + t339 - 0.0489*t343 - 0.1498*t364 + t37 + var1[2]) + 17.8542*(0. + t113 - 0.1351*t124 + 0.0179*t161 + t37 + t38 + var1[2]) + 7.43598*(0. + t113 + t226 + t256 - 0.1327*t266 + t323 + t339 + t37 + t420 + t435 - 0.233*t451 - 0.0169*t469 + var1[2]) + 5.66037*(0. + t113 + t226 + t256 - 0.1303*t266 + t323 + t339 + t37 + t420 + t435 + t535 + t545 - 0.0004*t572 - 0.4541*t613 + var1[2]) + 7.67142*(0. + t113 + t226 + t256 - 0.1318*t266 + t323 + t339 + t37 + t420 + t435 + t535 + t545 + t670 + t689 - 0.816*t699 - 0.0122*t728 + var1[2]) + 1.4715*(0. + t113 + t226 + t256 - 0.1306*t266 + t323 + t339 + t37 + t420 + t435 + t535 + t545 + t670 + t689 + t728*(0. - 0.0216*t760 - 1.1135*t780) + t699*(0. - 1.1135*t760 + 0.0216*t780) + 0.0059*(t728*t758 + t699*t780) - 1.1182*(t699*t758 - 1.*t728*t780) + var1[2]) + 101.3373*(-0.0507*t17 + 0.0284*t10*t9 + var1[2]) + 54.1512*(0. + t1005 + t1028 + 0.1708*t1031 + t1112 + t1126 - 0.0489*t1136 - 0.1498*t1153 + t887 + t900 + var1[2]) + 7.43598*(0. + t1005 + t1028 + 0.1327*t1031 + t1112 + t1126 + t1204 + t1222 - 0.233*t1244 - 0.0169*t1255 + t887 + t900 + var1[2]) + 5.66037*(0. + t1005 + t1028 + 0.1303*t1031 + t1112 + t1126 + t1204 + t1222 + t1321 + t1339 - 0.0004*t1346 - 0.4541*t1363 + t887 + t900 + var1[2]) + 7.67142*(0. + t1005 + t1028 + 0.1318*t1031 + t1112 + t1126 + t1204 + t1222 + t1321 + t1339 + t1436 + t1448 - 0.816*t1459 - 0.0122*t1470 + t887 + t900 + var1[2]) + 1.4715*(0. + t1005 + t1028 + 0.1306*t1031 + t1112 + t1126 + t1204 + t1222 + t1321 + t1339 + t1436 + t1448 + t1470*(0. - 0.0216*t1496 - 1.1135*t1499) + t1459*(0. - 1.1135*t1496 + 0.0216*t1499) + 0.0059*(t1470*t1487 + t1459*t1499) - 1.1182*(t1459*t1487 - 1.*t1470*t1499) + t887 + t900 + var1[2]) + 11.4777*(0. + t1005 + t1028 + 0.135*t1031 - 0.049*t1044 + t887 + t900 - 0.0343*t929 + var1[2]) + 17.8542*(0. + t38 + t887 + t900 + 0.1351*t910 + 0.0179*t929 + var1[2]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "PotentialEnergy_mex.hh"

namespace SymExpression
{

void PotentialEnergy_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
