/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:18 GMT-04:00
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
  double t151;
  double t263;
  double t483;
  double t466;
  double t484;
  double t244;
  double t531;
  double t535;
  double t548;
  double t478;
  double t503;
  double t523;
  double t551;
  double t129;
  double t712;
  double t731;
  double t760;
  double t156;
  double t179;
  double t214;
  double t527;
  double t585;
  double t643;
  double t644;
  double t670;
  double t687;
  double t763;
  double t862;
  double t699;
  double t803;
  double t834;
  double t72;
  double t868;
  double t876;
  double t904;
  double t927;
  double t843;
  double t905;
  double t907;
  double t57;
  double t935;
  double t971;
  double t972;
  double t1052;
  double t924;
  double t1028;
  double t1045;
  double t24;
  double t1061;
  double t1079;
  double t1082;
  double t4;
  double t1422;
  double t1442;
  double t1446;
  double t1356;
  double t1363;
  double t1408;
  double t1567;
  double t1610;
  double t1626;
  double t1322;
  double t1417;
  double t1459;
  double t1464;
  double t1512;
  double t1542;
  double t1564;
  double t1655;
  double t1679;
  double t1704;
  double t1729;
  double t1739;
  double t1698;
  double t1745;
  double t1746;
  double t1758;
  double t1789;
  double t1803;
  double t1223;
  double t1751;
  double t1814;
  double t1825;
  double t1842;
  double t1853;
  double t1860;
  double t2090;
  double t2111;
  double t2137;
  double t2014;
  double t2026;
  double t2054;
  double t2056;
  double t2058;
  double t2080;
  double t2083;
  double t2170;
  double t2175;
  double t2215;
  double t2244;
  double t2249;
  double t2207;
  double t2274;
  double t2295;
  double t2324;
  double t2334;
  double t2348;
  double t2323;
  double t2368;
  double t2390;
  double t2455;
  double t2466;
  double t2507;
  double t1048;
  double t1089;
  double t1142;
  double t1230;
  double t1232;
  double t1243;
  double t1827;
  double t1863;
  double t1872;
  double t1898;
  double t1920;
  double t1945;
  double t2432;
  double t2525;
  double t2550;
  double t2576;
  double t2578;
  double t2589;
  double t3230;
  double t3231;
  double t3469;
  double t3496;
  double t3621;
  double t3630;
  double t3729;
  double t3744;
  double t3843;
  double t3844;
  double t4019;
  double t4037;
  double t2624;
  double t2667;
  double t2681;
  double t3058;
  double t3069;
  double t3072;
  double t3089;
  double t3117;
  double t3154;
  double t3239;
  double t3250;
  double t3274;
  double t3298;
  double t3310;
  double t3351;
  double t3508;
  double t3520;
  double t3531;
  double t3578;
  double t3580;
  double t3591;
  double t3640;
  double t3642;
  double t3644;
  double t3697;
  double t3719;
  double t3721;
  double t3754;
  double t3778;
  double t3786;
  double t3808;
  double t3814;
  double t3828;
  double t3879;
  double t3883;
  double t3902;
  double t3954;
  double t3962;
  double t3975;
  double t4051;
  double t4052;
  double t4063;
  double t4073;
  double t4102;
  double t4110;
  double t2786;
  double t2791;
  double t2802;
  double t2825;
  double t2827;
  double t2833;
  t151 = Cos(var1[3]);
  t263 = Cos(var1[5]);
  t483 = Sin(var1[4]);
  t466 = Sin(var1[3]);
  t484 = Sin(var1[5]);
  t244 = Cos(var1[6]);
  t531 = t151*t263*t483;
  t535 = t466*t484;
  t548 = t531 + t535;
  t478 = -1.*t263*t466;
  t503 = t151*t483*t484;
  t523 = t478 + t503;
  t551 = Sin(var1[6]);
  t129 = Cos(var1[8]);
  t712 = t244*t548;
  t731 = -1.*t523*t551;
  t760 = t712 + t731;
  t156 = Cos(var1[4]);
  t179 = Cos(var1[7]);
  t214 = t151*t156*t179;
  t527 = t244*t523;
  t585 = t548*t551;
  t643 = t527 + t585;
  t644 = Sin(var1[7]);
  t670 = t643*t644;
  t687 = t214 + t670;
  t763 = Sin(var1[8]);
  t862 = Cos(var1[9]);
  t699 = t129*t687;
  t803 = t760*t763;
  t834 = t699 + t803;
  t72 = Sin(var1[9]);
  t868 = t129*t760;
  t876 = -1.*t687*t763;
  t904 = t868 + t876;
  t927 = Cos(var1[10]);
  t843 = -1.*t72*t834;
  t905 = t862*t904;
  t907 = t843 + t905;
  t57 = Sin(var1[10]);
  t935 = t862*t834;
  t971 = t72*t904;
  t972 = t935 + t971;
  t1052 = Cos(var1[11]);
  t924 = t57*t907;
  t1028 = t927*t972;
  t1045 = t924 + t1028;
  t24 = Sin(var1[11]);
  t1061 = t927*t907;
  t1079 = -1.*t57*t972;
  t1082 = t1061 + t1079;
  t4 = Cos(var1[12]);
  t1422 = t263*t466*t483;
  t1442 = -1.*t151*t484;
  t1446 = t1422 + t1442;
  t1356 = t151*t263;
  t1363 = t466*t483*t484;
  t1408 = t1356 + t1363;
  t1567 = t244*t1446;
  t1610 = -1.*t1408*t551;
  t1626 = t1567 + t1610;
  t1322 = t156*t179*t466;
  t1417 = t244*t1408;
  t1459 = t1446*t551;
  t1464 = t1417 + t1459;
  t1512 = t1464*t644;
  t1542 = t1322 + t1512;
  t1564 = t129*t1542;
  t1655 = t1626*t763;
  t1679 = t1564 + t1655;
  t1704 = t129*t1626;
  t1729 = -1.*t1542*t763;
  t1739 = t1704 + t1729;
  t1698 = -1.*t72*t1679;
  t1745 = t862*t1739;
  t1746 = t1698 + t1745;
  t1758 = t862*t1679;
  t1789 = t72*t1739;
  t1803 = t1758 + t1789;
  t1223 = Sin(var1[12]);
  t1751 = t57*t1746;
  t1814 = t927*t1803;
  t1825 = t1751 + t1814;
  t1842 = t927*t1746;
  t1853 = -1.*t57*t1803;
  t1860 = t1842 + t1853;
  t2090 = t156*t263*t244;
  t2111 = -1.*t156*t484*t551;
  t2137 = t2090 + t2111;
  t2014 = -1.*t179*t483;
  t2026 = t156*t244*t484;
  t2054 = t156*t263*t551;
  t2056 = t2026 + t2054;
  t2058 = t2056*t644;
  t2080 = t2014 + t2058;
  t2083 = t129*t2080;
  t2170 = t2137*t763;
  t2175 = t2083 + t2170;
  t2215 = t129*t2137;
  t2244 = -1.*t2080*t763;
  t2249 = t2215 + t2244;
  t2207 = -1.*t72*t2175;
  t2274 = t862*t2249;
  t2295 = t2207 + t2274;
  t2324 = t862*t2175;
  t2334 = t72*t2249;
  t2348 = t2324 + t2334;
  t2323 = t57*t2295;
  t2368 = t927*t2348;
  t2390 = t2323 + t2368;
  t2455 = t927*t2295;
  t2466 = -1.*t57*t2348;
  t2507 = t2455 + t2466;
  t1048 = -1.*t24*t1045;
  t1089 = t1052*t1082;
  t1142 = t1048 + t1089;
  t1230 = t1052*t1045;
  t1232 = t24*t1082;
  t1243 = t1230 + t1232;
  t1827 = -1.*t24*t1825;
  t1863 = t1052*t1860;
  t1872 = t1827 + t1863;
  t1898 = t1052*t1825;
  t1920 = t24*t1860;
  t1945 = t1898 + t1920;
  t2432 = -1.*t24*t2390;
  t2525 = t1052*t2507;
  t2550 = t2432 + t2525;
  t2576 = t1052*t2390;
  t2578 = t24*t2507;
  t2589 = t2576 + t2578;
  t3230 = -1.*t179;
  t3231 = 1. + t3230;
  t3469 = -1.*t129;
  t3496 = 1. + t3469;
  t3621 = -1.*t862;
  t3630 = 1. + t3621;
  t3729 = -1.*t927;
  t3744 = 1. + t3729;
  t3843 = -1.*t1052;
  t3844 = 1. + t3843;
  t4019 = -1.*t4;
  t4037 = 1. + t4019;
  t2624 = t1223*t1142;
  t2667 = t4*t1243;
  t2681 = t2624 + t2667;
  t3058 = -1.*t244;
  t3069 = 1. + t3058;
  t3072 = 0.135*t3069;
  t3089 = 0. + t3072;
  t3117 = -0.135*t551;
  t3154 = 0. + t3117;
  t3239 = 0.135*t3231;
  t3250 = 0.049*t644;
  t3274 = 0. + t3239 + t3250;
  t3298 = -0.049*t3231;
  t3310 = 0.135*t644;
  t3351 = 0. + t3298 + t3310;
  t3508 = -0.049*t3496;
  t3520 = -0.09*t763;
  t3531 = 0. + t3508 + t3520;
  t3578 = -0.09*t3496;
  t3580 = 0.049*t763;
  t3591 = 0. + t3578 + t3580;
  t3640 = -0.049*t3630;
  t3642 = -0.21*t72;
  t3644 = 0. + t3640 + t3642;
  t3697 = -0.21*t3630;
  t3719 = 0.049*t72;
  t3721 = 0. + t3697 + t3719;
  t3754 = -0.2707*t3744;
  t3778 = 0.0016*t57;
  t3786 = 0. + t3754 + t3778;
  t3808 = -0.0016*t3744;
  t3814 = -0.2707*t57;
  t3828 = 0. + t3808 + t3814;
  t3879 = 0.0184*t3844;
  t3883 = -0.7055*t24;
  t3902 = 0. + t3879 + t3883;
  t3954 = -0.7055*t3844;
  t3962 = -0.0184*t24;
  t3975 = 0. + t3954 + t3962;
  t4051 = -1.1135*t4037;
  t4052 = 0.0216*t1223;
  t4063 = 0. + t4051 + t4052;
  t4073 = -0.0216*t4037;
  t4102 = -1.1135*t1223;
  t4110 = 0. + t4073 + t4102;
  t2786 = t1223*t1872;
  t2791 = t4*t1945;
  t2802 = t2786 + t2791;
  t2825 = t1223*t2550;
  t2827 = t4*t2589;
  t2833 = t2825 + t2827;
  p_output1[0]=t1223*t1243 - 1.*t1142*t4;
  p_output1[1]=t1223*t1945 - 1.*t1872*t4;
  p_output1[2]=t1223*t2589 - 1.*t2550*t4;
  p_output1[3]=0.;
  p_output1[4]=t2681;
  p_output1[5]=t2802;
  p_output1[6]=t2833;
  p_output1[7]=0.;
  p_output1[8]=-1.*t179*t643 + t151*t156*t644;
  p_output1[9]=-1.*t1464*t179 + t156*t466*t644;
  p_output1[10]=-1.*t179*t2056 - 1.*t483*t644;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t2681 + t151*t156*t3351 + t1045*t3902 + t1082*t3975 - 1.1135*(-1.*t1223*t1243 + t1142*t4) + t1142*t4063 + t1243*t4110 + t3089*t523 + t3154*t548 + t3274*t643 + 0.1305*(t179*t643 - 1.*t151*t156*t644) + t3531*t687 + t3591*t760 + t3644*t834 + t3721*t904 + t3786*t907 + t3828*t972 + var1[0];
  p_output1[13]=0. - 0.0216*t2802 + t1408*t3089 + t1446*t3154 + t1464*t3274 + t1542*t3531 + t1626*t3591 + t1679*t3644 + t1739*t3721 + t1746*t3786 + t1803*t3828 + t1825*t3902 + t1860*t3975 - 1.1135*(-1.*t1223*t1945 + t1872*t4) + t1872*t4063 + t1945*t4110 + t156*t3351*t466 + 0.1305*(t1464*t179 - 1.*t156*t466*t644) + var1[1];
  p_output1[14]=0. - 0.0216*t2833 + t156*t263*t3154 + t2056*t3274 + t2080*t3531 + t2137*t3591 + t2175*t3644 + t2249*t3721 + t2295*t3786 + t2348*t3828 + t2390*t3902 + t2507*t3975 - 1.1135*(-1.*t1223*t2589 + t2550*t4) + t2550*t4063 + t2589*t4110 - 1.*t3351*t483 + t156*t3089*t484 + 0.1305*(t179*t2056 + t483*t644) + var1[2];
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

#include "H_toe_joint_left_mex.hh"

namespace SymExpression
{

void H_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
