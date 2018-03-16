/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:34 GMT-04:00
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
  double t218;
  double t275;
  double t213;
  double t222;
  double t289;
  double t405;
  double t234;
  double t354;
  double t375;
  double t198;
  double t409;
  double t416;
  double t437;
  double t503;
  double t392;
  double t444;
  double t476;
  double t189;
  double t583;
  double t603;
  double t604;
  double t617;
  double t624;
  double t627;
  double t633;
  double t634;
  double t635;
  double t650;
  double t496;
  double t643;
  double t644;
  double t184;
  double t657;
  double t658;
  double t659;
  double t667;
  double t645;
  double t661;
  double t662;
  double t135;
  double t671;
  double t673;
  double t674;
  double t679;
  double t664;
  double t675;
  double t676;
  double t8;
  double t681;
  double t682;
  double t683;
  double t7;
  double t775;
  double t777;
  double t781;
  double t793;
  double t805;
  double t811;
  double t787;
  double t835;
  double t844;
  double t926;
  double t933;
  double t940;
  double t957;
  double t967;
  double t988;
  double t861;
  double t990;
  double t1005;
  double t1035;
  double t1040;
  double t1044;
  double t1015;
  double t1047;
  double t1048;
  double t1068;
  double t1072;
  double t1074;
  double t692;
  double t1059;
  double t1076;
  double t1083;
  double t1086;
  double t1089;
  double t1092;
  double t1138;
  double t1148;
  double t1163;
  double t1168;
  double t1210;
  double t1234;
  double t1236;
  double t1241;
  double t1250;
  double t1165;
  double t1251;
  double t1252;
  double t1254;
  double t1255;
  double t1256;
  double t1253;
  double t1257;
  double t1259;
  double t1261;
  double t1266;
  double t1269;
  double t1260;
  double t1270;
  double t1271;
  double t1275;
  double t1276;
  double t1277;
  double t678;
  double t687;
  double t688;
  double t696;
  double t707;
  double t709;
  double t1084;
  double t1111;
  double t1119;
  double t1123;
  double t1124;
  double t1125;
  double t1272;
  double t1278;
  double t1279;
  double t1282;
  double t1287;
  double t1288;
  double t1506;
  double t1511;
  double t1759;
  double t1858;
  double t2268;
  double t2285;
  double t2387;
  double t2388;
  double t2614;
  double t2626;
  double t2712;
  double t2713;
  double t1297;
  double t1299;
  double t1300;
  double t1513;
  double t1515;
  double t1548;
  double t1592;
  double t1594;
  double t1622;
  double t1638;
  double t1645;
  double t1652;
  double t1676;
  double t1678;
  double t1689;
  double t1864;
  double t1919;
  double t1930;
  double t2031;
  double t2084;
  double t2117;
  double t2289;
  double t2293;
  double t2299;
  double t2303;
  double t2310;
  double t2333;
  double t2389;
  double t2410;
  double t2506;
  double t2571;
  double t2604;
  double t2611;
  double t2647;
  double t2663;
  double t2667;
  double t2674;
  double t2682;
  double t2689;
  double t2717;
  double t2727;
  double t2729;
  double t2742;
  double t2751;
  double t2754;
  double t1301;
  double t1302;
  double t1304;
  double t1306;
  double t1314;
  double t1323;
  t218 = Cos(var1[5]);
  t275 = Sin(var1[3]);
  t213 = Cos(var1[3]);
  t222 = Sin(var1[4]);
  t289 = Sin(var1[5]);
  t405 = Sin(var1[13]);
  t234 = t213*t218*t222;
  t354 = t275*t289;
  t375 = t234 + t354;
  t198 = Cos(var1[13]);
  t409 = -1.*t218*t275;
  t416 = t213*t222*t289;
  t437 = t409 + t416;
  t503 = Cos(var1[15]);
  t392 = t198*t375;
  t444 = -1.*t405*t437;
  t476 = t392 + t444;
  t189 = Sin(var1[15]);
  t583 = Cos(var1[14]);
  t603 = Cos(var1[4]);
  t604 = t583*t213*t603;
  t617 = Sin(var1[14]);
  t624 = t405*t375;
  t627 = t198*t437;
  t633 = t624 + t627;
  t634 = t617*t633;
  t635 = t604 + t634;
  t650 = Cos(var1[16]);
  t496 = t189*t476;
  t643 = t503*t635;
  t644 = t496 + t643;
  t184 = Sin(var1[16]);
  t657 = t503*t476;
  t658 = -1.*t189*t635;
  t659 = t657 + t658;
  t667 = Cos(var1[17]);
  t645 = -1.*t184*t644;
  t661 = t650*t659;
  t662 = t645 + t661;
  t135 = Sin(var1[17]);
  t671 = t650*t644;
  t673 = t184*t659;
  t674 = t671 + t673;
  t679 = Cos(var1[18]);
  t664 = t135*t662;
  t675 = t667*t674;
  t676 = t664 + t675;
  t8 = Sin(var1[18]);
  t681 = t667*t662;
  t682 = -1.*t135*t674;
  t683 = t681 + t682;
  t7 = Cos(var1[19]);
  t775 = t218*t275*t222;
  t777 = -1.*t213*t289;
  t781 = t775 + t777;
  t793 = t213*t218;
  t805 = t275*t222*t289;
  t811 = t793 + t805;
  t787 = t198*t781;
  t835 = -1.*t405*t811;
  t844 = t787 + t835;
  t926 = t583*t603*t275;
  t933 = t405*t781;
  t940 = t198*t811;
  t957 = t933 + t940;
  t967 = t617*t957;
  t988 = t926 + t967;
  t861 = t189*t844;
  t990 = t503*t988;
  t1005 = t861 + t990;
  t1035 = t503*t844;
  t1040 = -1.*t189*t988;
  t1044 = t1035 + t1040;
  t1015 = -1.*t184*t1005;
  t1047 = t650*t1044;
  t1048 = t1015 + t1047;
  t1068 = t650*t1005;
  t1072 = t184*t1044;
  t1074 = t1068 + t1072;
  t692 = Sin(var1[19]);
  t1059 = t135*t1048;
  t1076 = t667*t1074;
  t1083 = t1059 + t1076;
  t1086 = t667*t1048;
  t1089 = -1.*t135*t1074;
  t1092 = t1086 + t1089;
  t1138 = t198*t603*t218;
  t1148 = -1.*t603*t405*t289;
  t1163 = t1138 + t1148;
  t1168 = -1.*t583*t222;
  t1210 = t603*t218*t405;
  t1234 = t198*t603*t289;
  t1236 = t1210 + t1234;
  t1241 = t617*t1236;
  t1250 = t1168 + t1241;
  t1165 = t189*t1163;
  t1251 = t503*t1250;
  t1252 = t1165 + t1251;
  t1254 = t503*t1163;
  t1255 = -1.*t189*t1250;
  t1256 = t1254 + t1255;
  t1253 = -1.*t184*t1252;
  t1257 = t650*t1256;
  t1259 = t1253 + t1257;
  t1261 = t650*t1252;
  t1266 = t184*t1256;
  t1269 = t1261 + t1266;
  t1260 = t135*t1259;
  t1270 = t667*t1269;
  t1271 = t1260 + t1270;
  t1275 = t667*t1259;
  t1276 = -1.*t135*t1269;
  t1277 = t1275 + t1276;
  t678 = -1.*t8*t676;
  t687 = t679*t683;
  t688 = t678 + t687;
  t696 = t679*t676;
  t707 = t8*t683;
  t709 = t696 + t707;
  t1084 = -1.*t8*t1083;
  t1111 = t679*t1092;
  t1119 = t1084 + t1111;
  t1123 = t679*t1083;
  t1124 = t8*t1092;
  t1125 = t1123 + t1124;
  t1272 = -1.*t8*t1271;
  t1278 = t679*t1277;
  t1279 = t1272 + t1278;
  t1282 = t679*t1271;
  t1287 = t8*t1277;
  t1288 = t1282 + t1287;
  t1506 = -1.*t583;
  t1511 = 1. + t1506;
  t1759 = -1.*t503;
  t1858 = 1. + t1759;
  t2268 = -1.*t650;
  t2285 = 1. + t2268;
  t2387 = -1.*t667;
  t2388 = 1. + t2387;
  t2614 = -1.*t679;
  t2626 = 1. + t2614;
  t2712 = -1.*t7;
  t2713 = 1. + t2712;
  t1297 = t692*t688;
  t1299 = t7*t709;
  t1300 = t1297 + t1299;
  t1513 = -0.049*t1511;
  t1515 = -0.135*t617;
  t1548 = 0. + t1513 + t1515;
  t1592 = 0.135*t405;
  t1594 = 0. + t1592;
  t1622 = -1.*t198;
  t1638 = 1. + t1622;
  t1645 = -0.135*t1638;
  t1652 = 0. + t1645;
  t1676 = -0.135*t1511;
  t1678 = 0.049*t617;
  t1689 = 0. + t1676 + t1678;
  t1864 = -0.09*t1858;
  t1919 = 0.049*t189;
  t1930 = 0. + t1864 + t1919;
  t2031 = -0.049*t1858;
  t2084 = -0.09*t189;
  t2117 = 0. + t2031 + t2084;
  t2289 = -0.049*t2285;
  t2293 = -0.21*t184;
  t2299 = 0. + t2289 + t2293;
  t2303 = -0.21*t2285;
  t2310 = 0.049*t184;
  t2333 = 0. + t2303 + t2310;
  t2389 = -0.2707*t2388;
  t2410 = 0.0016*t135;
  t2506 = 0. + t2389 + t2410;
  t2571 = -0.0016*t2388;
  t2604 = -0.2707*t135;
  t2611 = 0. + t2571 + t2604;
  t2647 = 0.0184*t2626;
  t2663 = -0.7055*t8;
  t2667 = 0. + t2647 + t2663;
  t2674 = -0.7055*t2626;
  t2682 = -0.0184*t8;
  t2689 = 0. + t2674 + t2682;
  t2717 = -1.1135*t2713;
  t2727 = 0.0216*t692;
  t2729 = 0. + t2717 + t2727;
  t2742 = -0.0216*t2713;
  t2751 = -1.1135*t692;
  t2754 = 0. + t2742 + t2751;
  t1301 = t692*t1119;
  t1302 = t7*t1125;
  t1304 = t1301 + t1302;
  t1306 = t692*t1279;
  t1314 = t7*t1288;
  t1323 = t1306 + t1314;
  p_output1[0]=-1.*t688*t7 + t692*t709;
  p_output1[1]=t1125*t692 - 1.*t1119*t7;
  p_output1[2]=t1288*t692 - 1.*t1279*t7;
  p_output1[3]=0.;
  p_output1[4]=t1300;
  p_output1[5]=t1304;
  p_output1[6]=t1323;
  p_output1[7]=0.;
  p_output1[8]=t213*t603*t617 - 1.*t583*t633;
  p_output1[9]=t275*t603*t617 - 1.*t583*t957;
  p_output1[10]=-1.*t1236*t583 - 1.*t222*t617;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t1300 + t1594*t375 + t1652*t437 + t1930*t476 + t1548*t213*t603 + t1689*t633 - 0.1305*(-1.*t213*t603*t617 + t583*t633) + t2117*t635 + t2299*t644 + t2333*t659 + t2506*t662 + t2611*t674 + t2667*t676 + t2689*t683 + t2729*t688 + t2754*t709 - 1.1135*(t688*t7 - 1.*t692*t709) + var1[0];
  p_output1[13]=0. - 0.0216*t1304 + t1005*t2299 + t1044*t2333 + t1048*t2506 + t1074*t2611 + t1083*t2667 + t1092*t2689 + t1119*t2729 + t1125*t2754 + t1548*t275*t603 - 1.1135*(-1.*t1125*t692 + t1119*t7) + t1594*t781 + t1652*t811 + t1930*t844 + t1689*t957 - 0.1305*(-1.*t275*t603*t617 + t583*t957) + t2117*t988 + var1[1];
  p_output1[14]=0. - 0.0216*t1323 + t1236*t1689 + t1163*t1930 + t1250*t2117 - 1.*t1548*t222 + t1252*t2299 + t1256*t2333 + t1259*t2506 + t1269*t2611 + t1271*t2667 + t1277*t2689 + t1279*t2729 + t1288*t2754 + t1594*t218*t603 + t1652*t289*t603 - 0.1305*(t1236*t583 + t222*t617) - 1.1135*(-1.*t1288*t692 + t1279*t7) + var1[2];
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

#include "H_toe_joint_right_mex.hh"

namespace SymExpression
{

void H_toe_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
