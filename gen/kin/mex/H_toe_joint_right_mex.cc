/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:57 GMT-05:00
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
  double t92;
  double t180;
  double t89;
  double t94;
  double t188;
  double t435;
  double t96;
  double t379;
  double t401;
  double t85;
  double t502;
  double t529;
  double t600;
  double t714;
  double t413;
  double t637;
  double t657;
  double t81;
  double t734;
  double t766;
  double t784;
  double t832;
  double t914;
  double t1010;
  double t1015;
  double t1019;
  double t1047;
  double t1172;
  double t706;
  double t1090;
  double t1097;
  double t40;
  double t1225;
  double t1277;
  double t1295;
  double t1308;
  double t1098;
  double t1296;
  double t1297;
  double t38;
  double t1324;
  double t1340;
  double t1351;
  double t1371;
  double t1303;
  double t1356;
  double t1363;
  double t35;
  double t1395;
  double t1442;
  double t1474;
  double t33;
  double t1602;
  double t1611;
  double t1614;
  double t1650;
  double t1657;
  double t1663;
  double t1629;
  double t1676;
  double t1686;
  double t1709;
  double t1719;
  double t1727;
  double t1736;
  double t1741;
  double t1758;
  double t1696;
  double t1764;
  double t1765;
  double t1769;
  double t1776;
  double t1778;
  double t1766;
  double t1789;
  double t1793;
  double t1831;
  double t1853;
  double t1866;
  double t1550;
  double t1798;
  double t1905;
  double t1914;
  double t1934;
  double t1955;
  double t1959;
  double t2118;
  double t2234;
  double t2243;
  double t2259;
  double t2292;
  double t2308;
  double t2313;
  double t2326;
  double t2345;
  double t2245;
  double t2352;
  double t2362;
  double t2417;
  double t2432;
  double t2435;
  double t2395;
  double t2445;
  double t2454;
  double t2460;
  double t2486;
  double t2500;
  double t2456;
  double t2508;
  double t2530;
  double t2544;
  double t2554;
  double t2589;
  double t1366;
  double t1478;
  double t1491;
  double t1551;
  double t1552;
  double t1576;
  double t1924;
  double t1963;
  double t1966;
  double t2007;
  double t2041;
  double t2054;
  double t2537;
  double t2594;
  double t2620;
  double t2634;
  double t2636;
  double t2663;
  double t2970;
  double t3005;
  double t3134;
  double t3137;
  double t3178;
  double t3182;
  double t3226;
  double t3234;
  double t3251;
  double t3253;
  double t3401;
  double t3405;
  double t2724;
  double t2728;
  double t2751;
  double t3008;
  double t3014;
  double t3018;
  double t3070;
  double t3076;
  double t3082;
  double t3088;
  double t3098;
  double t3110;
  double t3119;
  double t3120;
  double t3127;
  double t3138;
  double t3139;
  double t3141;
  double t3154;
  double t3163;
  double t3167;
  double t3188;
  double t3189;
  double t3194;
  double t3197;
  double t3203;
  double t3210;
  double t3235;
  double t3236;
  double t3239;
  double t3242;
  double t3244;
  double t3245;
  double t3259;
  double t3260;
  double t3283;
  double t3353;
  double t3362;
  double t3389;
  double t3408;
  double t3409;
  double t3558;
  double t3608;
  double t3621;
  double t3625;
  double t2754;
  double t2784;
  double t2798;
  double t2805;
  double t2808;
  double t2839;
  t92 = Cos(var1[5]);
  t180 = Sin(var1[3]);
  t89 = Cos(var1[3]);
  t94 = Sin(var1[4]);
  t188 = Sin(var1[5]);
  t435 = Sin(var1[13]);
  t96 = t89*t92*t94;
  t379 = t180*t188;
  t401 = t96 + t379;
  t85 = Cos(var1[13]);
  t502 = -1.*t92*t180;
  t529 = t89*t94*t188;
  t600 = t502 + t529;
  t714 = Cos(var1[15]);
  t413 = t85*t401;
  t637 = -1.*t435*t600;
  t657 = t413 + t637;
  t81 = Sin(var1[15]);
  t734 = Cos(var1[14]);
  t766 = Cos(var1[4]);
  t784 = t734*t89*t766;
  t832 = Sin(var1[14]);
  t914 = t435*t401;
  t1010 = t85*t600;
  t1015 = t914 + t1010;
  t1019 = t832*t1015;
  t1047 = t784 + t1019;
  t1172 = Cos(var1[16]);
  t706 = t81*t657;
  t1090 = t714*t1047;
  t1097 = t706 + t1090;
  t40 = Sin(var1[16]);
  t1225 = t714*t657;
  t1277 = -1.*t81*t1047;
  t1295 = t1225 + t1277;
  t1308 = Cos(var1[17]);
  t1098 = -1.*t40*t1097;
  t1296 = t1172*t1295;
  t1297 = t1098 + t1296;
  t38 = Sin(var1[17]);
  t1324 = t1172*t1097;
  t1340 = t40*t1295;
  t1351 = t1324 + t1340;
  t1371 = Cos(var1[18]);
  t1303 = t38*t1297;
  t1356 = t1308*t1351;
  t1363 = t1303 + t1356;
  t35 = Sin(var1[18]);
  t1395 = t1308*t1297;
  t1442 = -1.*t38*t1351;
  t1474 = t1395 + t1442;
  t33 = Cos(var1[19]);
  t1602 = t92*t180*t94;
  t1611 = -1.*t89*t188;
  t1614 = t1602 + t1611;
  t1650 = t89*t92;
  t1657 = t180*t94*t188;
  t1663 = t1650 + t1657;
  t1629 = t85*t1614;
  t1676 = -1.*t435*t1663;
  t1686 = t1629 + t1676;
  t1709 = t734*t766*t180;
  t1719 = t435*t1614;
  t1727 = t85*t1663;
  t1736 = t1719 + t1727;
  t1741 = t832*t1736;
  t1758 = t1709 + t1741;
  t1696 = t81*t1686;
  t1764 = t714*t1758;
  t1765 = t1696 + t1764;
  t1769 = t714*t1686;
  t1776 = -1.*t81*t1758;
  t1778 = t1769 + t1776;
  t1766 = -1.*t40*t1765;
  t1789 = t1172*t1778;
  t1793 = t1766 + t1789;
  t1831 = t1172*t1765;
  t1853 = t40*t1778;
  t1866 = t1831 + t1853;
  t1550 = Sin(var1[19]);
  t1798 = t38*t1793;
  t1905 = t1308*t1866;
  t1914 = t1798 + t1905;
  t1934 = t1308*t1793;
  t1955 = -1.*t38*t1866;
  t1959 = t1934 + t1955;
  t2118 = t85*t766*t92;
  t2234 = -1.*t766*t435*t188;
  t2243 = t2118 + t2234;
  t2259 = -1.*t734*t94;
  t2292 = t766*t92*t435;
  t2308 = t85*t766*t188;
  t2313 = t2292 + t2308;
  t2326 = t832*t2313;
  t2345 = t2259 + t2326;
  t2245 = t81*t2243;
  t2352 = t714*t2345;
  t2362 = t2245 + t2352;
  t2417 = t714*t2243;
  t2432 = -1.*t81*t2345;
  t2435 = t2417 + t2432;
  t2395 = -1.*t40*t2362;
  t2445 = t1172*t2435;
  t2454 = t2395 + t2445;
  t2460 = t1172*t2362;
  t2486 = t40*t2435;
  t2500 = t2460 + t2486;
  t2456 = t38*t2454;
  t2508 = t1308*t2500;
  t2530 = t2456 + t2508;
  t2544 = t1308*t2454;
  t2554 = -1.*t38*t2500;
  t2589 = t2544 + t2554;
  t1366 = -1.*t35*t1363;
  t1478 = t1371*t1474;
  t1491 = t1366 + t1478;
  t1551 = t1371*t1363;
  t1552 = t35*t1474;
  t1576 = t1551 + t1552;
  t1924 = -1.*t35*t1914;
  t1963 = t1371*t1959;
  t1966 = t1924 + t1963;
  t2007 = t1371*t1914;
  t2041 = t35*t1959;
  t2054 = t2007 + t2041;
  t2537 = -1.*t35*t2530;
  t2594 = t1371*t2589;
  t2620 = t2537 + t2594;
  t2634 = t1371*t2530;
  t2636 = t35*t2589;
  t2663 = t2634 + t2636;
  t2970 = -1.*t734;
  t3005 = 1. + t2970;
  t3134 = -1.*t714;
  t3137 = 1. + t3134;
  t3178 = -1.*t1172;
  t3182 = 1. + t3178;
  t3226 = -1.*t1308;
  t3234 = 1. + t3226;
  t3251 = -1.*t1371;
  t3253 = 1. + t3251;
  t3401 = -1.*t33;
  t3405 = 1. + t3401;
  t2724 = t1550*t1491;
  t2728 = t33*t1576;
  t2751 = t2724 + t2728;
  t3008 = -0.049*t3005;
  t3014 = -0.135*t832;
  t3018 = 0. + t3008 + t3014;
  t3070 = 0.135*t435;
  t3076 = 0. + t3070;
  t3082 = -1.*t85;
  t3088 = 1. + t3082;
  t3098 = -0.135*t3088;
  t3110 = 0. + t3098;
  t3119 = -0.135*t3005;
  t3120 = 0.049*t832;
  t3127 = 0. + t3119 + t3120;
  t3138 = -0.09*t3137;
  t3139 = 0.049*t81;
  t3141 = 0. + t3138 + t3139;
  t3154 = -0.049*t3137;
  t3163 = -0.09*t81;
  t3167 = 0. + t3154 + t3163;
  t3188 = -0.049*t3182;
  t3189 = -0.21*t40;
  t3194 = 0. + t3188 + t3189;
  t3197 = -0.21*t3182;
  t3203 = 0.049*t40;
  t3210 = 0. + t3197 + t3203;
  t3235 = -0.2707*t3234;
  t3236 = 0.0016*t38;
  t3239 = 0. + t3235 + t3236;
  t3242 = -0.0016*t3234;
  t3244 = -0.2707*t38;
  t3245 = 0. + t3242 + t3244;
  t3259 = 0.0184*t3253;
  t3260 = -0.7055*t35;
  t3283 = 0. + t3259 + t3260;
  t3353 = -0.7055*t3253;
  t3362 = -0.0184*t35;
  t3389 = 0. + t3353 + t3362;
  t3408 = -1.1135*t3405;
  t3409 = 0.0216*t1550;
  t3558 = 0. + t3408 + t3409;
  t3608 = -0.0216*t3405;
  t3621 = -1.1135*t1550;
  t3625 = 0. + t3608 + t3621;
  t2754 = t1550*t1966;
  t2784 = t33*t2054;
  t2798 = t2754 + t2784;
  t2805 = t1550*t2620;
  t2808 = t33*t2663;
  t2839 = t2805 + t2808;
  p_output1[0]=t1550*t1576 - 1.*t1491*t33;
  p_output1[1]=t1550*t2054 - 1.*t1966*t33;
  p_output1[2]=t1550*t2663 - 1.*t2620*t33;
  p_output1[3]=0.;
  p_output1[4]=t2751;
  p_output1[5]=t2798;
  p_output1[6]=t2839;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1015*t734 + t766*t832*t89;
  p_output1[9]=-1.*t1736*t734 + t180*t766*t832;
  p_output1[10]=-1.*t2313*t734 - 1.*t832*t94;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t2751 + t1015*t3127 + t1047*t3167 + t1097*t3194 + t1295*t3210 + t1297*t3239 + t1351*t3245 + t1363*t3283 - 1.1135*(-1.*t1550*t1576 + t1491*t33) + t1474*t3389 + t1491*t3558 + t1576*t3625 + t3076*t401 + t3110*t600 + t3141*t657 + t3018*t766*t89 - 0.1305*(t1015*t734 - 1.*t766*t832*t89) + var1[0];
  p_output1[13]=0. - 0.0216*t2798 + t1614*t3076 + t1663*t3110 + t1736*t3127 + t1686*t3141 + t1758*t3167 + t1765*t3194 + t1778*t3210 + t1793*t3239 + t1866*t3245 + t1914*t3283 - 1.1135*(-1.*t1550*t2054 + t1966*t33) + t1959*t3389 + t1966*t3558 + t2054*t3625 + t180*t3018*t766 - 0.1305*(t1736*t734 - 1.*t180*t766*t832) + var1[1];
  p_output1[14]=0. - 0.0216*t2839 + t2313*t3127 + t2243*t3141 + t2345*t3167 + t2362*t3194 + t2435*t3210 + t2454*t3239 + t2500*t3245 + t2530*t3283 - 1.1135*(-1.*t1550*t2663 + t2620*t33) + t2589*t3389 + t2620*t3558 + t2663*t3625 + t188*t3110*t766 + t3076*t766*t92 - 1.*t3018*t94 - 0.1305*(t2313*t734 + t832*t94) + var1[2];
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
