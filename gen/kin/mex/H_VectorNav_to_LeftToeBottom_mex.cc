/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:04 GMT-05:00
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
  double t353;
  double t670;
  double t653;
  double t662;
  double t671;
  double t700;
  double t669;
  double t677;
  double t679;
  double t640;
  double t707;
  double t710;
  double t712;
  double t724;
  double t697;
  double t717;
  double t719;
  double t553;
  double t730;
  double t732;
  double t755;
  double t825;
  double t723;
  double t795;
  double t804;
  double t531;
  double t872;
  double t897;
  double t901;
  double t349;
  double t79;
  double t407;
  double t1068;
  double t1076;
  double t1088;
  double t1106;
  double t1116;
  double t1121;
  double t1092;
  double t1165;
  double t1171;
  double t1218;
  double t1235;
  double t1246;
  double t1187;
  double t1247;
  double t1257;
  double t1272;
  double t1277;
  double t1284;
  double t1271;
  double t1287;
  double t1288;
  double t1290;
  double t1293;
  double t1298;
  double t1317;
  double t1318;
  double t1321;
  double t1323;
  double t1325;
  double t1330;
  double t1322;
  double t1334;
  double t1335;
  double t1354;
  double t1357;
  double t1361;
  double t1336;
  double t1369;
  double t1391;
  double t1424;
  double t1463;
  double t1474;
  double t1406;
  double t1478;
  double t1512;
  double t1524;
  double t1546;
  double t1573;
  double t815;
  double t949;
  double t952;
  double t969;
  double t989;
  double t1047;
  double t1289;
  double t1299;
  double t1300;
  double t1305;
  double t1306;
  double t1310;
  double t1513;
  double t1587;
  double t1588;
  double t1605;
  double t1644;
  double t1674;
  double t2098;
  double t2099;
  double t2579;
  double t2602;
  double t2880;
  double t2897;
  double t3156;
  double t3167;
  double t2019;
  double t2087;
  double t2374;
  double t2383;
  double t2405;
  double t2483;
  double t2525;
  double t2232;
  double t2317;
  double t2344;
  double t2538;
  double t2571;
  double t2574;
  double t2603;
  double t2623;
  double t2677;
  double t2709;
  double t2745;
  double t2843;
  double t3019;
  double t3021;
  double t3046;
  double t3115;
  double t3124;
  double t3138;
  double t3193;
  double t3201;
  double t3203;
  double t3369;
  double t3388;
  double t3395;
  double t3524;
  double t3539;
  double t3616;
  double t3748;
  double t3767;
  double t3786;
  t353 = Cos(var1[1]);
  t670 = Cos(var1[3]);
  t653 = Cos(var1[2]);
  t662 = Sin(var1[3]);
  t671 = Sin(var1[2]);
  t700 = Cos(var1[4]);
  t669 = -1.*t353*t653*t662;
  t677 = -1.*t670*t353*t671;
  t679 = t669 + t677;
  t640 = Sin(var1[4]);
  t707 = t670*t353*t653;
  t710 = -1.*t353*t662*t671;
  t712 = t707 + t710;
  t724 = Cos(var1[5]);
  t697 = t640*t679;
  t717 = t700*t712;
  t719 = t697 + t717;
  t553 = Sin(var1[5]);
  t730 = t700*t679;
  t732 = -1.*t640*t712;
  t755 = t730 + t732;
  t825 = Cos(var1[6]);
  t723 = -1.*t553*t719;
  t795 = t724*t755;
  t804 = t723 + t795;
  t531 = Sin(var1[6]);
  t872 = t724*t719;
  t897 = t553*t755;
  t901 = t872 + t897;
  t349 = Cos(var1[0]);
  t79 = Sin(var1[1]);
  t407 = Sin(var1[0]);
  t1068 = t349*t653*t79;
  t1076 = -1.*t407*t671;
  t1088 = t1068 + t1076;
  t1106 = -1.*t653*t407;
  t1116 = -1.*t349*t79*t671;
  t1121 = t1106 + t1116;
  t1092 = -1.*t662*t1088;
  t1165 = t670*t1121;
  t1171 = t1092 + t1165;
  t1218 = t670*t1088;
  t1235 = t662*t1121;
  t1246 = t1218 + t1235;
  t1187 = t640*t1171;
  t1247 = t700*t1246;
  t1257 = t1187 + t1247;
  t1272 = t700*t1171;
  t1277 = -1.*t640*t1246;
  t1284 = t1272 + t1277;
  t1271 = -1.*t553*t1257;
  t1287 = t724*t1284;
  t1288 = t1271 + t1287;
  t1290 = t724*t1257;
  t1293 = t553*t1284;
  t1298 = t1290 + t1293;
  t1317 = t653*t407*t79;
  t1318 = t349*t671;
  t1321 = t1317 + t1318;
  t1323 = t349*t653;
  t1325 = -1.*t407*t79*t671;
  t1330 = t1323 + t1325;
  t1322 = -1.*t662*t1321;
  t1334 = t670*t1330;
  t1335 = t1322 + t1334;
  t1354 = t670*t1321;
  t1357 = t662*t1330;
  t1361 = t1354 + t1357;
  t1336 = t640*t1335;
  t1369 = t700*t1361;
  t1391 = t1336 + t1369;
  t1424 = t700*t1335;
  t1463 = -1.*t640*t1361;
  t1474 = t1424 + t1463;
  t1406 = -1.*t553*t1391;
  t1478 = t724*t1474;
  t1512 = t1406 + t1478;
  t1524 = t724*t1391;
  t1546 = t553*t1474;
  t1573 = t1524 + t1546;
  t815 = t531*t804;
  t949 = t825*t901;
  t952 = t815 + t949;
  t969 = t825*t804;
  t989 = -1.*t531*t901;
  t1047 = t969 + t989;
  t1289 = t531*t1288;
  t1299 = t825*t1298;
  t1300 = t1289 + t1299;
  t1305 = t825*t1288;
  t1306 = -1.*t531*t1298;
  t1310 = t1305 + t1306;
  t1513 = t531*t1512;
  t1587 = t825*t1573;
  t1588 = t1513 + t1587;
  t1605 = t825*t1512;
  t1644 = -1.*t531*t1573;
  t1674 = t1605 + t1644;
  t2098 = -1.*t670;
  t2099 = 1. + t2098;
  t2579 = -1.*t700;
  t2602 = 1. + t2579;
  t2880 = -1.*t724;
  t2897 = 1. + t2880;
  t3156 = -1.*t825;
  t3167 = 1. + t3156;
  t2019 = -1.*t353;
  t2087 = 1. + t2019;
  t2374 = -1.*t653;
  t2383 = 1. + t2374;
  t2405 = -0.049*t2383;
  t2483 = -0.09*t671;
  t2525 = 0. + t2405 + t2483;
  t2232 = -0.049*t2099;
  t2317 = -0.21*t662;
  t2344 = 0. + t2232 + t2317;
  t2538 = -0.21*t2099;
  t2571 = 0.049*t662;
  t2574 = 0. + t2538 + t2571;
  t2603 = -0.2707*t2602;
  t2623 = 0.0016*t640;
  t2677 = 0. + t2603 + t2623;
  t2709 = -0.0016*t2602;
  t2745 = -0.2707*t640;
  t2843 = 0. + t2709 + t2745;
  t3019 = 0.0184*t2897;
  t3021 = -0.7055*t553;
  t3046 = 0. + t3019 + t3021;
  t3115 = -0.7055*t2897;
  t3124 = -0.0184*t553;
  t3138 = 0. + t3115 + t3124;
  t3193 = -1.1135*t3167;
  t3201 = 0.0216*t531;
  t3203 = 0. + t3193 + t3201;
  t3369 = -0.0216*t3167;
  t3388 = -1.1135*t531;
  t3395 = 0. + t3369 + t3388;
  t3524 = 0.135*t2087;
  t3539 = 0.049*t79;
  t3616 = 0. + t3524 + t3539;
  t3748 = -0.09*t2383;
  t3767 = 0.049*t671;
  t3786 = 0. + t3748 + t3767;
  p_output1[0]=0. + t79;
  p_output1[1]=0. + t349*t353;
  p_output1[2]=0. + t353*t407;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.766044*t1047 + 0.642788*t952;
  p_output1[5]=0. - 0.642788*t1300 - 0.766044*t1310;
  p_output1[6]=0. - 0.642788*t1588 - 0.766044*t1674;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.642788*t1047 - 0.766044*t952;
  p_output1[9]=0. + 0.766044*t1300 - 0.642788*t1310;
  p_output1[10]=0. + 0.766044*t1588 - 0.642788*t1674;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 1.1312*t1047 - 0.049*t2087 + t2525*t353 + t2344*t353*t653 - 1.*t2574*t353*t671 + t2677*t679 + t2843*t712 + t3046*t719 + t3138*t755 + 0.004500000000000004*t79 + t3203*t804 + t3395*t901 + 0.0306*t952;
  p_output1[13]=0. - 0.0306*t1300 + 1.1312*t1310 - 1.*t1088*t2344 - 1.*t1121*t2574 - 1.*t1171*t2677 - 1.*t1246*t2843 - 1.*t1257*t3046 - 1.*t1284*t3138 - 1.*t1288*t3203 - 1.*t1298*t3395 - 0.135*(1. - 1.*t349) - 0.1305*t349*t353 - 1.*t349*t3616 + t3786*t407 - 1.*t2525*t349*t79;
  p_output1[14]=-0.07996 - 0.0306*t1588 + 1.1312*t1674 - 1.*t1321*t2344 - 1.*t1330*t2574 - 1.*t1335*t2677 - 1.*t1361*t2843 - 1.*t1391*t3046 - 1.*t1474*t3138 - 1.*t1512*t3203 - 1.*t1573*t3395 - 1.*t349*t3786 + 0.135*t407 - 0.1305*t353*t407 - 1.*t3616*t407 - 1.*t2525*t407*t79;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
