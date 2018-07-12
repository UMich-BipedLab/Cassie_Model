/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:14 GMT-04:00
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
  double t105;
  double t249;
  double t363;
  double t279;
  double t388;
  double t191;
  double t451;
  double t458;
  double t475;
  double t351;
  double t397;
  double t424;
  double t495;
  double t101;
  double t656;
  double t673;
  double t700;
  double t120;
  double t123;
  double t190;
  double t431;
  double t499;
  double t516;
  double t525;
  double t532;
  double t566;
  double t741;
  double t819;
  double t647;
  double t757;
  double t759;
  double t99;
  double t828;
  double t838;
  double t842;
  double t872;
  double t773;
  double t855;
  double t857;
  double t98;
  double t878;
  double t880;
  double t914;
  double t68;
  double t1157;
  double t1171;
  double t1191;
  double t1114;
  double t1127;
  double t1143;
  double t1292;
  double t1351;
  double t1362;
  double t1113;
  double t1151;
  double t1199;
  double t1214;
  double t1255;
  double t1262;
  double t1276;
  double t1367;
  double t1374;
  double t1414;
  double t1434;
  double t1444;
  double t960;
  double t1376;
  double t1475;
  double t1486;
  double t1497;
  double t1518;
  double t1520;
  double t1892;
  double t1895;
  double t1900;
  double t1681;
  double t1735;
  double t1810;
  double t1832;
  double t1836;
  double t1837;
  double t1883;
  double t1953;
  double t1959;
  double t1988;
  double t2004;
  double t2018;
  double t1966;
  double t2069;
  double t2073;
  double t2095;
  double t2099;
  double t2102;
  double t863;
  double t922;
  double t940;
  double t1025;
  double t1032;
  double t1064;
  double t1492;
  double t1537;
  double t1543;
  double t1585;
  double t1587;
  double t1631;
  double t2088;
  double t2121;
  double t2132;
  double t2141;
  double t2149;
  double t2152;
  double t2722;
  double t2728;
  double t2896;
  double t2903;
  double t3015;
  double t3021;
  double t3183;
  double t3200;
  double t3431;
  double t3433;
  double t2259;
  double t2261;
  double t2294;
  double t2620;
  double t2649;
  double t2673;
  double t2685;
  double t2701;
  double t2710;
  double t2730;
  double t2751;
  double t2769;
  double t2789;
  double t2831;
  double t2836;
  double t2916;
  double t2940;
  double t2944;
  double t2957;
  double t2959;
  double t2972;
  double t3025;
  double t3032;
  double t3060;
  double t3106;
  double t3141;
  double t3148;
  double t3221;
  double t3223;
  double t3255;
  double t3337;
  double t3345;
  double t3372;
  double t3482;
  double t3494;
  double t3510;
  double t3543;
  double t3549;
  double t3579;
  double t2304;
  double t2329;
  double t2335;
  double t2349;
  double t2364;
  double t2393;
  t105 = Cos(var1[3]);
  t249 = Cos(var1[5]);
  t363 = Sin(var1[4]);
  t279 = Sin(var1[3]);
  t388 = Sin(var1[5]);
  t191 = Cos(var1[6]);
  t451 = t105*t249*t363;
  t458 = t279*t388;
  t475 = t451 + t458;
  t351 = -1.*t249*t279;
  t397 = t105*t363*t388;
  t424 = t351 + t397;
  t495 = Sin(var1[6]);
  t101 = Cos(var1[8]);
  t656 = t191*t475;
  t673 = -1.*t424*t495;
  t700 = t656 + t673;
  t120 = Cos(var1[4]);
  t123 = Cos(var1[7]);
  t190 = t105*t120*t123;
  t431 = t191*t424;
  t499 = t475*t495;
  t516 = t431 + t499;
  t525 = Sin(var1[7]);
  t532 = t516*t525;
  t566 = t190 + t532;
  t741 = Sin(var1[8]);
  t819 = Cos(var1[9]);
  t647 = t101*t566;
  t757 = t700*t741;
  t759 = t647 + t757;
  t99 = Sin(var1[9]);
  t828 = t101*t700;
  t838 = -1.*t566*t741;
  t842 = t828 + t838;
  t872 = Cos(var1[10]);
  t773 = -1.*t99*t759;
  t855 = t819*t842;
  t857 = t773 + t855;
  t98 = Sin(var1[10]);
  t878 = t819*t759;
  t880 = t99*t842;
  t914 = t878 + t880;
  t68 = Sin(var1[11]);
  t1157 = t249*t279*t363;
  t1171 = -1.*t105*t388;
  t1191 = t1157 + t1171;
  t1114 = t105*t249;
  t1127 = t279*t363*t388;
  t1143 = t1114 + t1127;
  t1292 = t191*t1191;
  t1351 = -1.*t1143*t495;
  t1362 = t1292 + t1351;
  t1113 = t120*t123*t279;
  t1151 = t191*t1143;
  t1199 = t1191*t495;
  t1214 = t1151 + t1199;
  t1255 = t1214*t525;
  t1262 = t1113 + t1255;
  t1276 = t101*t1262;
  t1367 = t1362*t741;
  t1374 = t1276 + t1367;
  t1414 = t101*t1362;
  t1434 = -1.*t1262*t741;
  t1444 = t1414 + t1434;
  t960 = Cos(var1[11]);
  t1376 = -1.*t99*t1374;
  t1475 = t819*t1444;
  t1486 = t1376 + t1475;
  t1497 = t819*t1374;
  t1518 = t99*t1444;
  t1520 = t1497 + t1518;
  t1892 = t120*t249*t191;
  t1895 = -1.*t120*t388*t495;
  t1900 = t1892 + t1895;
  t1681 = -1.*t123*t363;
  t1735 = t120*t191*t388;
  t1810 = t120*t249*t495;
  t1832 = t1735 + t1810;
  t1836 = t1832*t525;
  t1837 = t1681 + t1836;
  t1883 = t101*t1837;
  t1953 = t1900*t741;
  t1959 = t1883 + t1953;
  t1988 = t101*t1900;
  t2004 = -1.*t1837*t741;
  t2018 = t1988 + t2004;
  t1966 = -1.*t99*t1959;
  t2069 = t819*t2018;
  t2073 = t1966 + t2069;
  t2095 = t819*t1959;
  t2099 = t99*t2018;
  t2102 = t2095 + t2099;
  t863 = t98*t857;
  t922 = t872*t914;
  t940 = t863 + t922;
  t1025 = t872*t857;
  t1032 = -1.*t98*t914;
  t1064 = t1025 + t1032;
  t1492 = t98*t1486;
  t1537 = t872*t1520;
  t1543 = t1492 + t1537;
  t1585 = t872*t1486;
  t1587 = -1.*t98*t1520;
  t1631 = t1585 + t1587;
  t2088 = t98*t2073;
  t2121 = t872*t2102;
  t2132 = t2088 + t2121;
  t2141 = t872*t2073;
  t2149 = -1.*t98*t2102;
  t2152 = t2141 + t2149;
  t2722 = -1.*t123;
  t2728 = 1. + t2722;
  t2896 = -1.*t101;
  t2903 = 1. + t2896;
  t3015 = -1.*t819;
  t3021 = 1. + t3015;
  t3183 = -1.*t872;
  t3200 = 1. + t3183;
  t3431 = -1.*t960;
  t3433 = 1. + t3431;
  t2259 = t960*t940;
  t2261 = t68*t1064;
  t2294 = t2259 + t2261;
  t2620 = -1.*t191;
  t2649 = 1. + t2620;
  t2673 = 0.135*t2649;
  t2685 = 0. + t2673;
  t2701 = -0.135*t495;
  t2710 = 0. + t2701;
  t2730 = 0.135*t2728;
  t2751 = 0.049*t525;
  t2769 = 0. + t2730 + t2751;
  t2789 = -0.049*t2728;
  t2831 = 0.135*t525;
  t2836 = 0. + t2789 + t2831;
  t2916 = -0.049*t2903;
  t2940 = -0.09*t741;
  t2944 = 0. + t2916 + t2940;
  t2957 = -0.09*t2903;
  t2959 = 0.049*t741;
  t2972 = 0. + t2957 + t2959;
  t3025 = -0.049*t3021;
  t3032 = -0.21*t99;
  t3060 = 0. + t3025 + t3032;
  t3106 = -0.21*t3021;
  t3141 = 0.049*t99;
  t3148 = 0. + t3106 + t3141;
  t3221 = -0.2707*t3200;
  t3223 = 0.0016*t98;
  t3255 = 0. + t3221 + t3223;
  t3337 = -0.0016*t3200;
  t3345 = -0.2707*t98;
  t3372 = 0. + t3337 + t3345;
  t3482 = 0.0184*t3433;
  t3494 = -0.7055*t68;
  t3510 = 0. + t3482 + t3494;
  t3543 = -0.7055*t3433;
  t3549 = -0.0184*t68;
  t3579 = 0. + t3543 + t3549;
  t2304 = t960*t1543;
  t2329 = t68*t1631;
  t2335 = t2304 + t2329;
  t2349 = t960*t2132;
  t2364 = t68*t2152;
  t2393 = t2349 + t2364;
  p_output1[0]=t68*t940 - 1.*t1064*t960;
  p_output1[1]=t1543*t68 - 1.*t1631*t960;
  p_output1[2]=t2132*t68 - 1.*t2152*t960;
  p_output1[3]=0.;
  p_output1[4]=t2294;
  p_output1[5]=t2335;
  p_output1[6]=t2393;
  p_output1[7]=0.;
  p_output1[8]=-1.*t123*t516 + t105*t120*t525;
  p_output1[9]=-1.*t1214*t123 + t120*t279*t525;
  p_output1[10]=-1.*t123*t1832 - 1.*t363*t525;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t2294 + t105*t120*t2836 + t1064*t3579 + t2685*t424 + t2710*t475 + t2769*t516 + 0.1305*(t123*t516 - 1.*t105*t120*t525) + t2944*t566 + t2972*t700 + t3060*t759 + t3148*t842 + t3255*t857 + t3372*t914 + t3510*t940 - 0.7055*(-1.*t68*t940 + t1064*t960) + var1[0];
  p_output1[13]=0. + 0.0184*t2335 + t1143*t2685 + t1191*t2710 + t1214*t2769 + t120*t279*t2836 + t1262*t2944 + t1362*t2972 + t1374*t3060 + t1444*t3148 + t1486*t3255 + t1520*t3372 + t1543*t3510 + t1631*t3579 + 0.1305*(t1214*t123 - 1.*t120*t279*t525) - 0.7055*(-1.*t1543*t68 + t1631*t960) + var1[1];
  p_output1[14]=0. + 0.0184*t2393 + t120*t249*t2710 + t1832*t2769 + t1837*t2944 + t1900*t2972 + t1959*t3060 + t2018*t3148 + t2073*t3255 + t2102*t3372 + t2132*t3510 + t2152*t3579 - 1.*t2836*t363 + t120*t2685*t388 + 0.1305*(t123*t1832 + t363*t525) - 0.7055*(-1.*t2132*t68 + t2152*t960) + var1[2];
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

#include "H_ankle_joint_left_mex.hh"

namespace SymExpression
{

void H_ankle_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
