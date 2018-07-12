/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:50 GMT-04:00
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
  double t171;
  double t272;
  double t165;
  double t200;
  double t289;
  double t390;
  double t232;
  double t316;
  double t339;
  double t140;
  double t409;
  double t420;
  double t428;
  double t560;
  double t367;
  double t454;
  double t512;
  double t137;
  double t615;
  double t671;
  double t677;
  double t716;
  double t744;
  double t751;
  double t759;
  double t773;
  double t796;
  double t853;
  double t559;
  double t820;
  double t826;
  double t134;
  double t875;
  double t998;
  double t1008;
  double t1143;
  double t841;
  double t1038;
  double t1116;
  double t84;
  double t1146;
  double t1152;
  double t1158;
  double t44;
  double t1291;
  double t1297;
  double t1300;
  double t1339;
  double t1351;
  double t1353;
  double t1321;
  double t1364;
  double t1381;
  double t1426;
  double t1456;
  double t1495;
  double t1506;
  double t1516;
  double t1533;
  double t1392;
  double t1553;
  double t1575;
  double t1593;
  double t1596;
  double t1597;
  double t1252;
  double t1580;
  double t1613;
  double t1619;
  double t1667;
  double t1685;
  double t1703;
  double t1869;
  double t1887;
  double t1903;
  double t1957;
  double t1960;
  double t1981;
  double t1986;
  double t1991;
  double t2006;
  double t1934;
  double t2019;
  double t2039;
  double t2050;
  double t2057;
  double t2075;
  double t2046;
  double t2077;
  double t2117;
  double t2142;
  double t2145;
  double t2176;
  double t1117;
  double t1207;
  double t1236;
  double t1258;
  double t1270;
  double t1273;
  double t1659;
  double t1716;
  double t1744;
  double t1774;
  double t1790;
  double t1791;
  double t2134;
  double t2199;
  double t2232;
  double t2263;
  double t2281;
  double t2303;
  double t2513;
  double t2551;
  double t2829;
  double t2853;
  double t3094;
  double t3129;
  double t3356;
  double t3357;
  double t3553;
  double t3562;
  double t2342;
  double t2358;
  double t2360;
  double t2556;
  double t2569;
  double t2592;
  double t2615;
  double t2621;
  double t2636;
  double t2651;
  double t2700;
  double t2701;
  double t2757;
  double t2765;
  double t2780;
  double t2869;
  double t2882;
  double t2883;
  double t2991;
  double t3006;
  double t3036;
  double t3152;
  double t3159;
  double t3178;
  double t3233;
  double t3262;
  double t3282;
  double t3364;
  double t3376;
  double t3392;
  double t3414;
  double t3470;
  double t3532;
  double t3574;
  double t3577;
  double t3605;
  double t3698;
  double t3714;
  double t3756;
  double t2371;
  double t2372;
  double t2391;
  double t2392;
  double t2411;
  double t2428;
  t171 = Cos(var1[5]);
  t272 = Sin(var1[3]);
  t165 = Cos(var1[3]);
  t200 = Sin(var1[4]);
  t289 = Sin(var1[5]);
  t390 = Sin(var1[13]);
  t232 = t165*t171*t200;
  t316 = t272*t289;
  t339 = t232 + t316;
  t140 = Cos(var1[13]);
  t409 = -1.*t171*t272;
  t420 = t165*t200*t289;
  t428 = t409 + t420;
  t560 = Cos(var1[15]);
  t367 = t140*t339;
  t454 = -1.*t390*t428;
  t512 = t367 + t454;
  t137 = Sin(var1[15]);
  t615 = Cos(var1[14]);
  t671 = Cos(var1[4]);
  t677 = t615*t165*t671;
  t716 = Sin(var1[14]);
  t744 = t390*t339;
  t751 = t140*t428;
  t759 = t744 + t751;
  t773 = t716*t759;
  t796 = t677 + t773;
  t853 = Cos(var1[16]);
  t559 = t137*t512;
  t820 = t560*t796;
  t826 = t559 + t820;
  t134 = Sin(var1[16]);
  t875 = t560*t512;
  t998 = -1.*t137*t796;
  t1008 = t875 + t998;
  t1143 = Cos(var1[17]);
  t841 = -1.*t134*t826;
  t1038 = t853*t1008;
  t1116 = t841 + t1038;
  t84 = Sin(var1[17]);
  t1146 = t853*t826;
  t1152 = t134*t1008;
  t1158 = t1146 + t1152;
  t44 = Sin(var1[18]);
  t1291 = t171*t272*t200;
  t1297 = -1.*t165*t289;
  t1300 = t1291 + t1297;
  t1339 = t165*t171;
  t1351 = t272*t200*t289;
  t1353 = t1339 + t1351;
  t1321 = t140*t1300;
  t1364 = -1.*t390*t1353;
  t1381 = t1321 + t1364;
  t1426 = t615*t671*t272;
  t1456 = t390*t1300;
  t1495 = t140*t1353;
  t1506 = t1456 + t1495;
  t1516 = t716*t1506;
  t1533 = t1426 + t1516;
  t1392 = t137*t1381;
  t1553 = t560*t1533;
  t1575 = t1392 + t1553;
  t1593 = t560*t1381;
  t1596 = -1.*t137*t1533;
  t1597 = t1593 + t1596;
  t1252 = Cos(var1[18]);
  t1580 = -1.*t134*t1575;
  t1613 = t853*t1597;
  t1619 = t1580 + t1613;
  t1667 = t853*t1575;
  t1685 = t134*t1597;
  t1703 = t1667 + t1685;
  t1869 = t140*t671*t171;
  t1887 = -1.*t671*t390*t289;
  t1903 = t1869 + t1887;
  t1957 = -1.*t615*t200;
  t1960 = t671*t171*t390;
  t1981 = t140*t671*t289;
  t1986 = t1960 + t1981;
  t1991 = t716*t1986;
  t2006 = t1957 + t1991;
  t1934 = t137*t1903;
  t2019 = t560*t2006;
  t2039 = t1934 + t2019;
  t2050 = t560*t1903;
  t2057 = -1.*t137*t2006;
  t2075 = t2050 + t2057;
  t2046 = -1.*t134*t2039;
  t2077 = t853*t2075;
  t2117 = t2046 + t2077;
  t2142 = t853*t2039;
  t2145 = t134*t2075;
  t2176 = t2142 + t2145;
  t1117 = t84*t1116;
  t1207 = t1143*t1158;
  t1236 = t1117 + t1207;
  t1258 = t1143*t1116;
  t1270 = -1.*t84*t1158;
  t1273 = t1258 + t1270;
  t1659 = t84*t1619;
  t1716 = t1143*t1703;
  t1744 = t1659 + t1716;
  t1774 = t1143*t1619;
  t1790 = -1.*t84*t1703;
  t1791 = t1774 + t1790;
  t2134 = t84*t2117;
  t2199 = t1143*t2176;
  t2232 = t2134 + t2199;
  t2263 = t1143*t2117;
  t2281 = -1.*t84*t2176;
  t2303 = t2263 + t2281;
  t2513 = -1.*t615;
  t2551 = 1. + t2513;
  t2829 = -1.*t560;
  t2853 = 1. + t2829;
  t3094 = -1.*t853;
  t3129 = 1. + t3094;
  t3356 = -1.*t1143;
  t3357 = 1. + t3356;
  t3553 = -1.*t1252;
  t3562 = 1. + t3553;
  t2342 = t1252*t1236;
  t2358 = t44*t1273;
  t2360 = t2342 + t2358;
  t2556 = -0.049*t2551;
  t2569 = -0.135*t716;
  t2592 = 0. + t2556 + t2569;
  t2615 = 0.135*t390;
  t2621 = 0. + t2615;
  t2636 = -1.*t140;
  t2651 = 1. + t2636;
  t2700 = -0.135*t2651;
  t2701 = 0. + t2700;
  t2757 = -0.135*t2551;
  t2765 = 0.049*t716;
  t2780 = 0. + t2757 + t2765;
  t2869 = -0.09*t2853;
  t2882 = 0.049*t137;
  t2883 = 0. + t2869 + t2882;
  t2991 = -0.049*t2853;
  t3006 = -0.09*t137;
  t3036 = 0. + t2991 + t3006;
  t3152 = -0.049*t3129;
  t3159 = -0.21*t134;
  t3178 = 0. + t3152 + t3159;
  t3233 = -0.21*t3129;
  t3262 = 0.049*t134;
  t3282 = 0. + t3233 + t3262;
  t3364 = -0.2707*t3357;
  t3376 = 0.0016*t84;
  t3392 = 0. + t3364 + t3376;
  t3414 = -0.0016*t3357;
  t3470 = -0.2707*t84;
  t3532 = 0. + t3414 + t3470;
  t3574 = 0.0184*t3562;
  t3577 = -0.7055*t44;
  t3605 = 0. + t3574 + t3577;
  t3698 = -0.7055*t3562;
  t3714 = -0.0184*t44;
  t3756 = 0. + t3698 + t3714;
  t2371 = t1252*t1744;
  t2372 = t44*t1791;
  t2391 = t2371 + t2372;
  t2392 = t1252*t2232;
  t2411 = t44*t2303;
  t2428 = t2392 + t2411;
  p_output1[0]=-1.*t1252*t1273 + t1236*t44;
  p_output1[1]=-1.*t1252*t1791 + t1744*t44;
  p_output1[2]=-1.*t1252*t2303 + t2232*t44;
  p_output1[3]=0.;
  p_output1[4]=t2360;
  p_output1[5]=t2391;
  p_output1[6]=t2428;
  p_output1[7]=0.;
  p_output1[8]=t165*t671*t716 - 1.*t615*t759;
  p_output1[9]=-1.*t1506*t615 + t272*t671*t716;
  p_output1[10]=-1.*t1986*t615 - 1.*t200*t716;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t2360 + t1008*t3282 + t2621*t339 + t1116*t3392 + t1158*t3532 + t1236*t3605 + t1273*t3756 + t2701*t428 - 0.7055*(t1252*t1273 - 1.*t1236*t44) + t2883*t512 + t165*t2592*t671 + t2780*t759 - 0.1305*(-1.*t165*t671*t716 + t615*t759) + t3036*t796 + t3178*t826 + var1[0];
  p_output1[13]=0. + 0.0184*t2391 + t1300*t2621 + t1353*t2701 + t1506*t2780 + t1381*t2883 + t1533*t3036 + t1575*t3178 + t1597*t3282 + t1619*t3392 + t1703*t3532 + t1744*t3605 + t1791*t3756 - 0.7055*(t1252*t1791 - 1.*t1744*t44) + t2592*t272*t671 - 0.1305*(t1506*t615 - 1.*t272*t671*t716) + var1[1];
  p_output1[14]=0. + 0.0184*t2428 - 1.*t200*t2592 + t1986*t2780 + t1903*t2883 + t2006*t3036 + t2039*t3178 + t2075*t3282 + t2117*t3392 + t2176*t3532 + t2232*t3605 + t2303*t3756 - 0.7055*(t1252*t2303 - 1.*t2232*t44) + t171*t2621*t671 + t2701*t289*t671 - 0.1305*(t1986*t615 + t200*t716) + var1[2];
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

#include "H_ankle_joint_right_mex.hh"

namespace SymExpression
{

void H_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
