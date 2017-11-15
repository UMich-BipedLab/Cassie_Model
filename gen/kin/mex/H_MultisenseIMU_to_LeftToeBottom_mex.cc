/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:21 GMT-05:00
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
  double t6;
  double t89;
  double t390;
  double t184;
  double t615;
  double t692;
  double t811;
  double t658;
  double t720;
  double t756;
  double t614;
  double t839;
  double t866;
  double t911;
  double t1080;
  double t801;
  double t951;
  double t999;
  double t564;
  double t1131;
  double t1164;
  double t1215;
  double t1466;
  double t1076;
  double t1328;
  double t1372;
  double t549;
  double t1471;
  double t1482;
  double t1491;
  double t1576;
  double t1382;
  double t1495;
  double t1537;
  double t523;
  double t1578;
  double t1615;
  double t1631;
  double t1920;
  double t1922;
  double t1963;
  double t1999;
  double t2032;
  double t2065;
  double t1971;
  double t2073;
  double t2081;
  double t2112;
  double t2133;
  double t2139;
  double t2100;
  double t2141;
  double t2155;
  double t2222;
  double t2237;
  double t2256;
  double t2210;
  double t2276;
  double t2277;
  double t2339;
  double t2462;
  double t2484;
  double t2728;
  double t2757;
  double t2769;
  double t2798;
  double t2799;
  double t2807;
  double t2784;
  double t2834;
  double t2853;
  double t2882;
  double t2948;
  double t2951;
  double t2863;
  double t2952;
  double t2967;
  double t3007;
  double t3055;
  double t3065;
  double t1574;
  double t1713;
  double t1732;
  double t1846;
  double t1861;
  double t1868;
  double t2322;
  double t2500;
  double t2554;
  double t2563;
  double t2607;
  double t2647;
  double t2973;
  double t3070;
  double t3076;
  double t3103;
  double t3146;
  double t3178;
  double t3528;
  double t3530;
  double t3773;
  double t3778;
  double t3892;
  double t3896;
  double t4043;
  double t4044;
  double t4076;
  double t4080;
  double t3466;
  double t3475;
  double t3480;
  double t3502;
  double t3517;
  double t3549;
  double t3563;
  double t3594;
  double t3680;
  double t3684;
  double t3695;
  double t3784;
  double t3790;
  double t3800;
  double t3824;
  double t3834;
  double t3870;
  double t3903;
  double t3909;
  double t3912;
  double t4000;
  double t4007;
  double t4013;
  double t4048;
  double t4052;
  double t4053;
  double t4060;
  double t4064;
  double t4068;
  double t4140;
  double t4141;
  double t4156;
  double t4241;
  double t4269;
  double t4272;
  t6 = Cos(var1[1]);
  t89 = Sin(var1[0]);
  t390 = Sin(var1[1]);
  t184 = Cos(var1[0]);
  t615 = Cos(var1[2]);
  t692 = Sin(var1[2]);
  t811 = Cos(var1[3]);
  t658 = t615*t89*t390;
  t720 = t184*t692;
  t756 = t658 + t720;
  t614 = Sin(var1[3]);
  t839 = t184*t615;
  t866 = -1.*t89*t390*t692;
  t911 = t839 + t866;
  t1080 = Cos(var1[4]);
  t801 = -1.*t614*t756;
  t951 = t811*t911;
  t999 = t801 + t951;
  t564 = Sin(var1[4]);
  t1131 = t811*t756;
  t1164 = t614*t911;
  t1215 = t1131 + t1164;
  t1466 = Cos(var1[5]);
  t1076 = t564*t999;
  t1328 = t1080*t1215;
  t1372 = t1076 + t1328;
  t549 = Sin(var1[5]);
  t1471 = t1080*t999;
  t1482 = -1.*t564*t1215;
  t1491 = t1471 + t1482;
  t1576 = Cos(var1[6]);
  t1382 = -1.*t549*t1372;
  t1495 = t1466*t1491;
  t1537 = t1382 + t1495;
  t523 = Sin(var1[6]);
  t1578 = t1466*t1372;
  t1615 = t549*t1491;
  t1631 = t1578 + t1615;
  t1920 = t184*t615*t390;
  t1922 = -1.*t89*t692;
  t1963 = t1920 + t1922;
  t1999 = -1.*t615*t89;
  t2032 = -1.*t184*t390*t692;
  t2065 = t1999 + t2032;
  t1971 = -1.*t614*t1963;
  t2073 = t811*t2065;
  t2081 = t1971 + t2073;
  t2112 = t811*t1963;
  t2133 = t614*t2065;
  t2139 = t2112 + t2133;
  t2100 = t564*t2081;
  t2141 = t1080*t2139;
  t2155 = t2100 + t2141;
  t2222 = t1080*t2081;
  t2237 = -1.*t564*t2139;
  t2256 = t2222 + t2237;
  t2210 = -1.*t549*t2155;
  t2276 = t1466*t2256;
  t2277 = t2210 + t2276;
  t2339 = t1466*t2155;
  t2462 = t549*t2256;
  t2484 = t2339 + t2462;
  t2728 = -1.*t6*t615*t614;
  t2757 = -1.*t811*t6*t692;
  t2769 = t2728 + t2757;
  t2798 = t811*t6*t615;
  t2799 = -1.*t6*t614*t692;
  t2807 = t2798 + t2799;
  t2784 = t564*t2769;
  t2834 = t1080*t2807;
  t2853 = t2784 + t2834;
  t2882 = t1080*t2769;
  t2948 = -1.*t564*t2807;
  t2951 = t2882 + t2948;
  t2863 = -1.*t549*t2853;
  t2952 = t1466*t2951;
  t2967 = t2863 + t2952;
  t3007 = t1466*t2853;
  t3055 = t549*t2951;
  t3065 = t3007 + t3055;
  t1574 = t523*t1537;
  t1713 = t1576*t1631;
  t1732 = t1574 + t1713;
  t1846 = t1576*t1537;
  t1861 = -1.*t523*t1631;
  t1868 = t1846 + t1861;
  t2322 = t523*t2277;
  t2500 = t1576*t2484;
  t2554 = t2322 + t2500;
  t2563 = t1576*t2277;
  t2607 = -1.*t523*t2484;
  t2647 = t2563 + t2607;
  t2973 = t523*t2967;
  t3070 = t1576*t3065;
  t3076 = t2973 + t3070;
  t3103 = t1576*t2967;
  t3146 = -1.*t523*t3065;
  t3178 = t3103 + t3146;
  t3528 = -1.*t615;
  t3530 = 1. + t3528;
  t3773 = -1.*t811;
  t3778 = 1. + t3773;
  t3892 = -1.*t1080;
  t3896 = 1. + t3892;
  t4043 = -1.*t1466;
  t4044 = 1. + t4043;
  t4076 = -1.*t1576;
  t4080 = 1. + t4076;
  t3466 = -1.*t6;
  t3475 = 1. + t3466;
  t3480 = 0.135*t3475;
  t3502 = 0.049*t390;
  t3517 = 0. + t3480 + t3502;
  t3549 = -0.049*t3530;
  t3563 = -0.09*t692;
  t3594 = 0. + t3549 + t3563;
  t3680 = -0.09*t3530;
  t3684 = 0.049*t692;
  t3695 = 0. + t3680 + t3684;
  t3784 = -0.049*t3778;
  t3790 = -0.21*t614;
  t3800 = 0. + t3784 + t3790;
  t3824 = -0.21*t3778;
  t3834 = 0.049*t614;
  t3870 = 0. + t3824 + t3834;
  t3903 = -0.2707*t3896;
  t3909 = 0.0016*t564;
  t3912 = 0. + t3903 + t3909;
  t4000 = -0.0016*t3896;
  t4007 = -0.2707*t564;
  t4013 = 0. + t4000 + t4007;
  t4048 = 0.0184*t4044;
  t4052 = -0.7055*t549;
  t4053 = 0. + t4048 + t4052;
  t4060 = -0.7055*t4044;
  t4064 = -0.0184*t549;
  t4068 = 0. + t4060 + t4064;
  t4140 = -1.1135*t4080;
  t4141 = 0.0216*t523;
  t4156 = 0. + t4140 + t4141;
  t4241 = -0.0216*t4080;
  t4269 = -1.1135*t523;
  t4272 = 0. + t4241 + t4269;
  p_output1[0]=0. + t6*t89;
  p_output1[1]=0. - 1.*t184*t6;
  p_output1[2]=0. + t390;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t1732 - 0.766044*t1868;
  p_output1[5]=0. + 0.642788*t2554 + 0.766044*t2647;
  p_output1[6]=0. + 0.642788*t3076 + 0.766044*t3178;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t1732 - 0.642788*t1868;
  p_output1[9]=0. - 0.766044*t2554 + 0.642788*t2647;
  p_output1[10]=0. - 0.766044*t3076 + 0.642788*t3178;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.0306*t1732 + 1.1312*t1868 - 1.*t184*t3695 - 1.*t1215*t4013 - 1.*t1372*t4053 - 1.*t1491*t4068 - 1.*t1537*t4156 - 1.*t1631*t4272 - 1.*t3800*t756 + 0.135*t89 - 1.*t3517*t89 - 1.*t3594*t390*t89 - 0.1305*t6*t89 - 1.*t3870*t911 - 1.*t3912*t999;
  p_output1[13]=-0.0302 + 0.135*(1. - 1.*t184) + 0.0306*t2554 - 1.1312*t2647 + t184*t3517 + t1963*t3800 + t2065*t3870 + t184*t3594*t390 + t2081*t3912 + t2139*t4013 + t2155*t4053 + t2256*t4068 + t2277*t4156 + t2484*t4272 + 0.1305*t184*t6 - 1.*t3695*t89;
  p_output1[14]=-0.047 + 0.0306*t3076 - 1.1312*t3178 - 0.049*t3475 + 0.004500000000000004*t390 + t2769*t3912 + t2807*t4013 + t2853*t4053 + t2951*t4068 + t2967*t4156 + t3065*t4272 + t3594*t6 + t3800*t6*t615 - 1.*t3870*t6*t692;
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

#include "H_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
