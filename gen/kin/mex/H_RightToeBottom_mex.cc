/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:06 GMT-05:00
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
  double t49;
  double t277;
  double t430;
  double t385;
  double t439;
  double t57;
  double t129;
  double t193;
  double t231;
  double t744;
  double t391;
  double t505;
  double t558;
  double t790;
  double t796;
  double t842;
  double t602;
  double t844;
  double t855;
  double t1416;
  double t1360;
  double t1367;
  double t1387;
  double t1358;
  double t1444;
  double t1461;
  double t1464;
  double t1534;
  double t1396;
  double t1470;
  double t1479;
  double t1342;
  double t1577;
  double t1584;
  double t1592;
  double t1668;
  double t1487;
  double t1594;
  double t1628;
  double t1337;
  double t1702;
  double t1714;
  double t1754;
  double t1782;
  double t1634;
  double t1759;
  double t1767;
  double t1329;
  double t1788;
  double t1797;
  double t1826;
  double t1994;
  double t1770;
  double t1850;
  double t1945;
  double t1259;
  double t1998;
  double t2050;
  double t2068;
  double t927;
  double t946;
  double t956;
  double t976;
  double t987;
  double t1021;
  double t958;
  double t1045;
  double t1063;
  double t2164;
  double t2177;
  double t2178;
  double t2250;
  double t2266;
  double t2270;
  double t2200;
  double t2277;
  double t2298;
  double t2349;
  double t2356;
  double t2361;
  double t2329;
  double t2364;
  double t2368;
  double t2390;
  double t2403;
  double t2425;
  double t2369;
  double t2433;
  double t2437;
  double t2471;
  double t2506;
  double t2519;
  double t2440;
  double t2526;
  double t2531;
  double t2540;
  double t2572;
  double t2633;
  double t1142;
  double t1146;
  double t1155;
  double t2809;
  double t2837;
  double t2924;
  double t2975;
  double t2995;
  double t3024;
  double t2929;
  double t3026;
  double t3029;
  double t3038;
  double t3043;
  double t3044;
  double t3032;
  double t3047;
  double t3064;
  double t3123;
  double t3181;
  double t3184;
  double t3100;
  double t3187;
  double t3191;
  double t3221;
  double t3265;
  double t3359;
  double t3220;
  double t3375;
  double t3380;
  double t3384;
  double t3427;
  double t3429;
  double t1979;
  double t2084;
  double t2086;
  double t2103;
  double t2122;
  double t2131;
  double t2537;
  double t2656;
  double t2671;
  double t2774;
  double t2779;
  double t2786;
  double t3381;
  double t3431;
  double t3444;
  double t3481;
  double t3490;
  double t3493;
  double t3601;
  double t3622;
  double t3785;
  double t3801;
  double t3937;
  double t3944;
  double t4014;
  double t4020;
  double t4146;
  double t4155;
  double t4253;
  double t4271;
  double t3647;
  double t3653;
  double t3654;
  double t3683;
  double t3687;
  double t3722;
  double t3726;
  double t3727;
  double t3736;
  double t3756;
  double t3762;
  double t3766;
  double t3804;
  double t3845;
  double t3847;
  double t3924;
  double t3927;
  double t3929;
  double t3948;
  double t3960;
  double t3969;
  double t3995;
  double t3996;
  double t3997;
  double t4037;
  double t4058;
  double t4062;
  double t4107;
  double t4116;
  double t4121;
  double t4167;
  double t4178;
  double t4182;
  double t4194;
  double t4203;
  double t4219;
  double t4284;
  double t4290;
  double t4333;
  double t4373;
  double t4376;
  double t4378;
  t49 = Cos(var1[3]);
  t277 = Cos(var1[5]);
  t430 = Sin(var1[3]);
  t385 = Sin(var1[4]);
  t439 = Sin(var1[5]);
  t57 = Cos(var1[4]);
  t129 = Sin(var1[14]);
  t193 = Cos(var1[14]);
  t231 = Sin(var1[13]);
  t744 = Cos(var1[13]);
  t391 = t49*t277*t385;
  t505 = t430*t439;
  t558 = t391 + t505;
  t790 = -1.*t277*t430;
  t796 = t49*t385*t439;
  t842 = t790 + t796;
  t602 = t231*t558;
  t844 = t744*t842;
  t855 = t602 + t844;
  t1416 = Cos(var1[15]);
  t1360 = t744*t558;
  t1367 = -1.*t231*t842;
  t1387 = t1360 + t1367;
  t1358 = Sin(var1[15]);
  t1444 = t193*t49*t57;
  t1461 = t129*t855;
  t1464 = t1444 + t1461;
  t1534 = Cos(var1[16]);
  t1396 = t1358*t1387;
  t1470 = t1416*t1464;
  t1479 = t1396 + t1470;
  t1342 = Sin(var1[16]);
  t1577 = t1416*t1387;
  t1584 = -1.*t1358*t1464;
  t1592 = t1577 + t1584;
  t1668 = Cos(var1[17]);
  t1487 = -1.*t1342*t1479;
  t1594 = t1534*t1592;
  t1628 = t1487 + t1594;
  t1337 = Sin(var1[17]);
  t1702 = t1534*t1479;
  t1714 = t1342*t1592;
  t1754 = t1702 + t1714;
  t1782 = Cos(var1[18]);
  t1634 = t1337*t1628;
  t1759 = t1668*t1754;
  t1767 = t1634 + t1759;
  t1329 = Sin(var1[18]);
  t1788 = t1668*t1628;
  t1797 = -1.*t1337*t1754;
  t1826 = t1788 + t1797;
  t1994 = Cos(var1[19]);
  t1770 = -1.*t1329*t1767;
  t1850 = t1782*t1826;
  t1945 = t1770 + t1850;
  t1259 = Sin(var1[19]);
  t1998 = t1782*t1767;
  t2050 = t1329*t1826;
  t2068 = t1998 + t2050;
  t927 = t277*t430*t385;
  t946 = -1.*t49*t439;
  t956 = t927 + t946;
  t976 = t49*t277;
  t987 = t430*t385*t439;
  t1021 = t976 + t987;
  t958 = t231*t956;
  t1045 = t744*t1021;
  t1063 = t958 + t1045;
  t2164 = t744*t956;
  t2177 = -1.*t231*t1021;
  t2178 = t2164 + t2177;
  t2250 = t193*t57*t430;
  t2266 = t129*t1063;
  t2270 = t2250 + t2266;
  t2200 = t1358*t2178;
  t2277 = t1416*t2270;
  t2298 = t2200 + t2277;
  t2349 = t1416*t2178;
  t2356 = -1.*t1358*t2270;
  t2361 = t2349 + t2356;
  t2329 = -1.*t1342*t2298;
  t2364 = t1534*t2361;
  t2368 = t2329 + t2364;
  t2390 = t1534*t2298;
  t2403 = t1342*t2361;
  t2425 = t2390 + t2403;
  t2369 = t1337*t2368;
  t2433 = t1668*t2425;
  t2437 = t2369 + t2433;
  t2471 = t1668*t2368;
  t2506 = -1.*t1337*t2425;
  t2519 = t2471 + t2506;
  t2440 = -1.*t1329*t2437;
  t2526 = t1782*t2519;
  t2531 = t2440 + t2526;
  t2540 = t1782*t2437;
  t2572 = t1329*t2519;
  t2633 = t2540 + t2572;
  t1142 = t57*t277*t231;
  t1146 = t744*t57*t439;
  t1155 = t1142 + t1146;
  t2809 = t744*t57*t277;
  t2837 = -1.*t57*t231*t439;
  t2924 = t2809 + t2837;
  t2975 = -1.*t193*t385;
  t2995 = t129*t1155;
  t3024 = t2975 + t2995;
  t2929 = t1358*t2924;
  t3026 = t1416*t3024;
  t3029 = t2929 + t3026;
  t3038 = t1416*t2924;
  t3043 = -1.*t1358*t3024;
  t3044 = t3038 + t3043;
  t3032 = -1.*t1342*t3029;
  t3047 = t1534*t3044;
  t3064 = t3032 + t3047;
  t3123 = t1534*t3029;
  t3181 = t1342*t3044;
  t3184 = t3123 + t3181;
  t3100 = t1337*t3064;
  t3187 = t1668*t3184;
  t3191 = t3100 + t3187;
  t3221 = t1668*t3064;
  t3265 = -1.*t1337*t3184;
  t3359 = t3221 + t3265;
  t3220 = -1.*t1329*t3191;
  t3375 = t1782*t3359;
  t3380 = t3220 + t3375;
  t3384 = t1782*t3191;
  t3427 = t1329*t3359;
  t3429 = t3384 + t3427;
  t1979 = t1259*t1945;
  t2084 = t1994*t2068;
  t2086 = t1979 + t2084;
  t2103 = t1994*t1945;
  t2122 = -1.*t1259*t2068;
  t2131 = t2103 + t2122;
  t2537 = t1259*t2531;
  t2656 = t1994*t2633;
  t2671 = t2537 + t2656;
  t2774 = t1994*t2531;
  t2779 = -1.*t1259*t2633;
  t2786 = t2774 + t2779;
  t3381 = t1259*t3380;
  t3431 = t1994*t3429;
  t3444 = t3381 + t3431;
  t3481 = t1994*t3380;
  t3490 = -1.*t1259*t3429;
  t3493 = t3481 + t3490;
  t3601 = -1.*t193;
  t3622 = 1. + t3601;
  t3785 = -1.*t1416;
  t3801 = 1. + t3785;
  t3937 = -1.*t1534;
  t3944 = 1. + t3937;
  t4014 = -1.*t1668;
  t4020 = 1. + t4014;
  t4146 = -1.*t1782;
  t4155 = 1. + t4146;
  t4253 = -1.*t1994;
  t4271 = 1. + t4253;
  t3647 = -0.049*t3622;
  t3653 = -0.135*t129;
  t3654 = 0. + t3647 + t3653;
  t3683 = 0.135*t231;
  t3687 = 0. + t3683;
  t3722 = -1.*t744;
  t3726 = 1. + t3722;
  t3727 = -0.135*t3726;
  t3736 = 0. + t3727;
  t3756 = -0.135*t3622;
  t3762 = 0.049*t129;
  t3766 = 0. + t3756 + t3762;
  t3804 = -0.09*t3801;
  t3845 = 0.049*t1358;
  t3847 = 0. + t3804 + t3845;
  t3924 = -0.049*t3801;
  t3927 = -0.09*t1358;
  t3929 = 0. + t3924 + t3927;
  t3948 = -0.049*t3944;
  t3960 = -0.21*t1342;
  t3969 = 0. + t3948 + t3960;
  t3995 = -0.21*t3944;
  t3996 = 0.049*t1342;
  t3997 = 0. + t3995 + t3996;
  t4037 = -0.2707*t4020;
  t4058 = 0.0016*t1337;
  t4062 = 0. + t4037 + t4058;
  t4107 = -0.0016*t4020;
  t4116 = -0.2707*t1337;
  t4121 = 0. + t4107 + t4116;
  t4167 = 0.0184*t4155;
  t4178 = -0.7055*t1329;
  t4182 = 0. + t4167 + t4178;
  t4194 = -0.7055*t4155;
  t4203 = -0.0184*t1329;
  t4219 = 0. + t4194 + t4203;
  t4284 = -1.1135*t4271;
  t4290 = 0.0216*t1259;
  t4333 = 0. + t4284 + t4290;
  t4373 = -0.0216*t4271;
  t4376 = -1.1135*t1259;
  t4378 = 0. + t4373 + t4376;
  p_output1[0]=t129*t49*t57 - 1.*t193*t855;
  p_output1[1]=-1.*t1063*t193 + t129*t430*t57;
  p_output1[2]=-1.*t1155*t193 - 1.*t129*t385;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2086 + 0.766044*t2131;
  p_output1[5]=0.642788*t2671 + 0.766044*t2786;
  p_output1[6]=0.642788*t3444 + 0.766044*t3493;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2086 + 0.642788*t2131;
  p_output1[9]=-0.766044*t2671 + 0.642788*t2786;
  p_output1[10]=-0.766044*t3444 + 0.642788*t3493;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2086 - 1.1312*t2131 + t1387*t3847 + t1464*t3929 + t1479*t3969 + t1592*t3997 + t1628*t4062 + t1754*t4121 + t1767*t4182 + t1826*t4219 + t1945*t4333 + t2068*t4378 + t3687*t558 + t3654*t49*t57 + t3736*t842 + t3766*t855 - 0.1305*(-1.*t129*t49*t57 + t193*t855) + var1[0];
  p_output1[13]=0. + 0.0306*t2671 - 1.1312*t2786 + t1021*t3736 + t1063*t3766 + t2178*t3847 + t2270*t3929 + t2298*t3969 + t2361*t3997 + t2368*t4062 + t2425*t4121 + t2437*t4182 + t2519*t4219 + t2531*t4333 + t2633*t4378 + t3654*t430*t57 - 0.1305*(t1063*t193 - 1.*t129*t430*t57) + t3687*t956 + var1[1];
  p_output1[14]=0. + 0.0306*t3444 - 1.1312*t3493 + t1155*t3766 + t2924*t3847 - 1.*t3654*t385 - 0.1305*(t1155*t193 + t129*t385) + t3024*t3929 + t3029*t3969 + t3044*t3997 + t3064*t4062 + t3184*t4121 + t3191*t4182 + t3359*t4219 + t3380*t4333 + t3429*t4378 + t277*t3687*t57 + t3736*t439*t57 + var1[2];
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

#include "H_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
