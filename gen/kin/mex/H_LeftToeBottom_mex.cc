/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:07 GMT-05:00
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
  double t155;
  double t125;
  double t159;
  double t136;
  double t163;
  double t30;
  double t77;
  double t447;
  double t524;
  double t525;
  double t146;
  double t250;
  double t407;
  double t410;
  double t415;
  double t421;
  double t438;
  double t504;
  double t519;
  double t792;
  double t859;
  double t861;
  double t873;
  double t798;
  double t844;
  double t848;
  double t887;
  double t994;
  double t853;
  double t896;
  double t947;
  double t782;
  double t1030;
  double t1045;
  double t1055;
  double t1091;
  double t977;
  double t1056;
  double t1073;
  double t739;
  double t1092;
  double t1109;
  double t1143;
  double t1225;
  double t1080;
  double t1175;
  double t1216;
  double t734;
  double t1246;
  double t1282;
  double t1288;
  double t1376;
  double t1222;
  double t1309;
  double t1334;
  double t720;
  double t1394;
  double t1405;
  double t1419;
  double t535;
  double t537;
  double t541;
  double t545;
  double t549;
  double t553;
  double t557;
  double t560;
  double t561;
  double t1701;
  double t1723;
  double t1730;
  double t1618;
  double t1623;
  double t1629;
  double t1640;
  double t1764;
  double t1796;
  double t1854;
  double t1864;
  double t1885;
  double t1843;
  double t1901;
  double t1923;
  double t1999;
  double t2009;
  double t2014;
  double t1950;
  double t2018;
  double t2020;
  double t2027;
  double t2030;
  double t2035;
  double t2026;
  double t2042;
  double t2053;
  double t2100;
  double t2103;
  double t2111;
  double t617;
  double t645;
  double t649;
  double t2345;
  double t2348;
  double t2371;
  double t2304;
  double t2333;
  double t2335;
  double t2341;
  double t2419;
  double t2420;
  double t2440;
  double t2527;
  double t2566;
  double t2437;
  double t2583;
  double t2616;
  double t2698;
  double t2716;
  double t2727;
  double t2636;
  double t2730;
  double t2747;
  double t2773;
  double t2779;
  double t2822;
  double t2768;
  double t2828;
  double t2832;
  double t2839;
  double t2859;
  double t2863;
  double t1363;
  double t1433;
  double t1434;
  double t1477;
  double t1488;
  double t1524;
  double t2094;
  double t2113;
  double t2172;
  double t2206;
  double t2216;
  double t2293;
  double t2836;
  double t2881;
  double t2905;
  double t2953;
  double t2961;
  double t2965;
  double t3265;
  double t3360;
  double t3618;
  double t3623;
  double t3721;
  double t3722;
  double t3800;
  double t3808;
  double t3848;
  double t3850;
  double t3905;
  double t3908;
  double t3227;
  double t3236;
  double t3238;
  double t3247;
  double t3255;
  double t3258;
  double t3375;
  double t3392;
  double t3404;
  double t3440;
  double t3478;
  double t3519;
  double t3633;
  double t3639;
  double t3648;
  double t3680;
  double t3681;
  double t3696;
  double t3732;
  double t3745;
  double t3777;
  double t3788;
  double t3791;
  double t3797;
  double t3815;
  double t3817;
  double t3823;
  double t3830;
  double t3831;
  double t3840;
  double t3852;
  double t3853;
  double t3866;
  double t3881;
  double t3883;
  double t3890;
  double t3913;
  double t3914;
  double t3922;
  double t3929;
  double t3931;
  double t3933;
  t155 = Cos(var1[3]);
  t125 = Cos(var1[5]);
  t159 = Sin(var1[4]);
  t136 = Sin(var1[3]);
  t163 = Sin(var1[5]);
  t30 = Cos(var1[7]);
  t77 = Cos(var1[6]);
  t447 = Sin(var1[6]);
  t524 = Cos(var1[4]);
  t525 = Sin(var1[7]);
  t146 = -1.*t125*t136;
  t250 = t155*t159*t163;
  t407 = t146 + t250;
  t410 = t77*t407;
  t415 = t155*t125*t159;
  t421 = t136*t163;
  t438 = t415 + t421;
  t504 = t438*t447;
  t519 = t410 + t504;
  t792 = Cos(var1[8]);
  t859 = t77*t438;
  t861 = -1.*t407*t447;
  t873 = t859 + t861;
  t798 = t155*t524*t30;
  t844 = t519*t525;
  t848 = t798 + t844;
  t887 = Sin(var1[8]);
  t994 = Cos(var1[9]);
  t853 = t792*t848;
  t896 = t873*t887;
  t947 = t853 + t896;
  t782 = Sin(var1[9]);
  t1030 = t792*t873;
  t1045 = -1.*t848*t887;
  t1055 = t1030 + t1045;
  t1091 = Cos(var1[10]);
  t977 = -1.*t782*t947;
  t1056 = t994*t1055;
  t1073 = t977 + t1056;
  t739 = Sin(var1[10]);
  t1092 = t994*t947;
  t1109 = t782*t1055;
  t1143 = t1092 + t1109;
  t1225 = Cos(var1[11]);
  t1080 = t739*t1073;
  t1175 = t1091*t1143;
  t1216 = t1080 + t1175;
  t734 = Sin(var1[11]);
  t1246 = t1091*t1073;
  t1282 = -1.*t739*t1143;
  t1288 = t1246 + t1282;
  t1376 = Cos(var1[12]);
  t1222 = -1.*t734*t1216;
  t1309 = t1225*t1288;
  t1334 = t1222 + t1309;
  t720 = Sin(var1[12]);
  t1394 = t1225*t1216;
  t1405 = t734*t1288;
  t1419 = t1394 + t1405;
  t535 = t155*t125;
  t537 = t136*t159*t163;
  t541 = t535 + t537;
  t545 = t77*t541;
  t549 = t125*t136*t159;
  t553 = -1.*t155*t163;
  t557 = t549 + t553;
  t560 = t557*t447;
  t561 = t545 + t560;
  t1701 = t77*t557;
  t1723 = -1.*t541*t447;
  t1730 = t1701 + t1723;
  t1618 = t524*t30*t136;
  t1623 = t561*t525;
  t1629 = t1618 + t1623;
  t1640 = t792*t1629;
  t1764 = t1730*t887;
  t1796 = t1640 + t1764;
  t1854 = t792*t1730;
  t1864 = -1.*t1629*t887;
  t1885 = t1854 + t1864;
  t1843 = -1.*t782*t1796;
  t1901 = t994*t1885;
  t1923 = t1843 + t1901;
  t1999 = t994*t1796;
  t2009 = t782*t1885;
  t2014 = t1999 + t2009;
  t1950 = t739*t1923;
  t2018 = t1091*t2014;
  t2020 = t1950 + t2018;
  t2027 = t1091*t1923;
  t2030 = -1.*t739*t2014;
  t2035 = t2027 + t2030;
  t2026 = -1.*t734*t2020;
  t2042 = t1225*t2035;
  t2053 = t2026 + t2042;
  t2100 = t1225*t2020;
  t2103 = t734*t2035;
  t2111 = t2100 + t2103;
  t617 = t524*t77*t163;
  t645 = t524*t125*t447;
  t649 = t617 + t645;
  t2345 = t524*t125*t77;
  t2348 = -1.*t524*t163*t447;
  t2371 = t2345 + t2348;
  t2304 = -1.*t30*t159;
  t2333 = t649*t525;
  t2335 = t2304 + t2333;
  t2341 = t792*t2335;
  t2419 = t2371*t887;
  t2420 = t2341 + t2419;
  t2440 = t792*t2371;
  t2527 = -1.*t2335*t887;
  t2566 = t2440 + t2527;
  t2437 = -1.*t782*t2420;
  t2583 = t994*t2566;
  t2616 = t2437 + t2583;
  t2698 = t994*t2420;
  t2716 = t782*t2566;
  t2727 = t2698 + t2716;
  t2636 = t739*t2616;
  t2730 = t1091*t2727;
  t2747 = t2636 + t2730;
  t2773 = t1091*t2616;
  t2779 = -1.*t739*t2727;
  t2822 = t2773 + t2779;
  t2768 = -1.*t734*t2747;
  t2828 = t1225*t2822;
  t2832 = t2768 + t2828;
  t2839 = t1225*t2747;
  t2859 = t734*t2822;
  t2863 = t2839 + t2859;
  t1363 = t720*t1334;
  t1433 = t1376*t1419;
  t1434 = t1363 + t1433;
  t1477 = t1376*t1334;
  t1488 = -1.*t720*t1419;
  t1524 = t1477 + t1488;
  t2094 = t720*t2053;
  t2113 = t1376*t2111;
  t2172 = t2094 + t2113;
  t2206 = t1376*t2053;
  t2216 = -1.*t720*t2111;
  t2293 = t2206 + t2216;
  t2836 = t720*t2832;
  t2881 = t1376*t2863;
  t2905 = t2836 + t2881;
  t2953 = t1376*t2832;
  t2961 = -1.*t720*t2863;
  t2965 = t2953 + t2961;
  t3265 = -1.*t30;
  t3360 = 1. + t3265;
  t3618 = -1.*t792;
  t3623 = 1. + t3618;
  t3721 = -1.*t994;
  t3722 = 1. + t3721;
  t3800 = -1.*t1091;
  t3808 = 1. + t3800;
  t3848 = -1.*t1225;
  t3850 = 1. + t3848;
  t3905 = -1.*t1376;
  t3908 = 1. + t3905;
  t3227 = -1.*t77;
  t3236 = 1. + t3227;
  t3238 = 0.135*t3236;
  t3247 = 0. + t3238;
  t3255 = -0.135*t447;
  t3258 = 0. + t3255;
  t3375 = 0.135*t3360;
  t3392 = 0.049*t525;
  t3404 = 0. + t3375 + t3392;
  t3440 = -0.049*t3360;
  t3478 = 0.135*t525;
  t3519 = 0. + t3440 + t3478;
  t3633 = -0.049*t3623;
  t3639 = -0.09*t887;
  t3648 = 0. + t3633 + t3639;
  t3680 = -0.09*t3623;
  t3681 = 0.049*t887;
  t3696 = 0. + t3680 + t3681;
  t3732 = -0.049*t3722;
  t3745 = -0.21*t782;
  t3777 = 0. + t3732 + t3745;
  t3788 = -0.21*t3722;
  t3791 = 0.049*t782;
  t3797 = 0. + t3788 + t3791;
  t3815 = -0.2707*t3808;
  t3817 = 0.0016*t739;
  t3823 = 0. + t3815 + t3817;
  t3830 = -0.0016*t3808;
  t3831 = -0.2707*t739;
  t3840 = 0. + t3830 + t3831;
  t3852 = 0.0184*t3850;
  t3853 = -0.7055*t734;
  t3866 = 0. + t3852 + t3853;
  t3881 = -0.7055*t3850;
  t3883 = -0.0184*t734;
  t3890 = 0. + t3881 + t3883;
  t3913 = -1.1135*t3908;
  t3914 = 0.0216*t720;
  t3922 = 0. + t3913 + t3914;
  t3929 = -0.0216*t3908;
  t3931 = -1.1135*t720;
  t3933 = 0. + t3929 + t3931;
  p_output1[0]=-1.*t30*t519 + t155*t524*t525;
  p_output1[1]=t136*t524*t525 - 1.*t30*t561;
  p_output1[2]=-1.*t159*t525 - 1.*t30*t649;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1434 + 0.766044*t1524;
  p_output1[5]=0.642788*t2172 + 0.766044*t2293;
  p_output1[6]=0.642788*t2905 + 0.766044*t2965;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1434 + 0.642788*t1524;
  p_output1[9]=-0.766044*t2172 + 0.642788*t2293;
  p_output1[10]=-0.766044*t2905 + 0.642788*t2965;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1434 - 1.1312*t1524 + t1055*t3797 + t1073*t3823 + t1143*t3840 + t1216*t3866 + t1288*t3890 + t1334*t3922 + t1419*t3933 + t3247*t407 + t3258*t438 + t3404*t519 + t155*t3519*t524 + 0.1305*(t30*t519 - 1.*t155*t524*t525) + t3648*t848 + t3696*t873 + t3777*t947 + var1[0];
  p_output1[13]=0. + 0.0306*t2172 - 1.1312*t2293 + t1629*t3648 + t1730*t3696 + t1796*t3777 + t1885*t3797 + t1923*t3823 + t2014*t3840 + t2020*t3866 + t2035*t3890 + t2053*t3922 + t2111*t3933 + t136*t3519*t524 + t3247*t541 + t3258*t557 + t3404*t561 + 0.1305*(-1.*t136*t524*t525 + t30*t561) + var1[1];
  p_output1[14]=0. + 0.0306*t2905 - 1.1312*t2965 - 1.*t159*t3519 + t2335*t3648 + t2371*t3696 + t2420*t3777 + t2566*t3797 + t2616*t3823 + t2727*t3840 + t2747*t3866 + t2822*t3890 + t2832*t3922 + t2863*t3933 + t163*t3247*t524 + t125*t3258*t524 + t3404*t649 + 0.1305*(t159*t525 + t30*t649) + var1[2];
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

#include "H_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
