/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:07 GMT-05:00
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
  double t3;
  double t828;
  double t904;
  double t844;
  double t907;
  double t4;
  double t329;
  double t549;
  double t591;
  double t987;
  double t880;
  double t924;
  double t927;
  double t1045;
  double t1080;
  double t1104;
  double t948;
  double t1127;
  double t1135;
  double t2403;
  double t2309;
  double t2349;
  double t2364;
  double t2266;
  double t2433;
  double t2519;
  double t2656;
  double t2774;
  double t2369;
  double t2729;
  double t2731;
  double t2164;
  double t2777;
  double t2799;
  double t2802;
  double t2850;
  double t2746;
  double t2822;
  double t2828;
  double t2131;
  double t2872;
  double t2900;
  double t2908;
  double t2957;
  double t2846;
  double t2921;
  double t2925;
  double t2103;
  double t2959;
  double t2991;
  double t2992;
  double t3105;
  double t2935;
  double t3004;
  double t3025;
  double t2084;
  double t3109;
  double t3123;
  double t3181;
  double t1365;
  double t1387;
  double t1426;
  double t1523;
  double t1533;
  double t1577;
  double t1473;
  double t1594;
  double t1621;
  double t3431;
  double t3464;
  double t3481;
  double t3495;
  double t3505;
  double t3506;
  double t3493;
  double t3510;
  double t3575;
  double t3588;
  double t3613;
  double t3618;
  double t3577;
  double t3619;
  double t3655;
  double t3695;
  double t3736;
  double t3755;
  double t3687;
  double t3777;
  double t3780;
  double t3845;
  double t3847;
  double t3850;
  double t3841;
  double t3855;
  double t3864;
  double t3909;
  double t3927;
  double t3931;
  double t1721;
  double t1729;
  double t1999;
  double t4037;
  double t4058;
  double t4100;
  double t4121;
  double t4124;
  double t4133;
  double t4116;
  double t4134;
  double t4153;
  double t4167;
  double t4183;
  double t4187;
  double t4166;
  double t4192;
  double t4203;
  double t4219;
  double t4226;
  double t4247;
  double t4204;
  double t4250;
  double t4293;
  double t4323;
  double t4333;
  double t4337;
  double t4307;
  double t4371;
  double t4373;
  double t4409;
  double t4425;
  double t4428;
  double t3038;
  double t3187;
  double t3221;
  double t3246;
  double t3338;
  double t3375;
  double t3874;
  double t3933;
  double t3948;
  double t3960;
  double t3969;
  double t3996;
  double t4396;
  double t4458;
  double t4468;
  double t4502;
  double t4509;
  double t4547;
  t3 = Cos(var1[3]);
  t828 = Cos(var1[5]);
  t904 = Sin(var1[3]);
  t844 = Sin(var1[4]);
  t907 = Sin(var1[5]);
  t4 = Cos(var1[4]);
  t329 = Sin(var1[14]);
  t549 = Cos(var1[14]);
  t591 = Sin(var1[13]);
  t987 = Cos(var1[13]);
  t880 = t3*t828*t844;
  t924 = t904*t907;
  t927 = t880 + t924;
  t1045 = -1.*t828*t904;
  t1080 = t3*t844*t907;
  t1104 = t1045 + t1080;
  t948 = t591*t927;
  t1127 = t987*t1104;
  t1135 = t948 + t1127;
  t2403 = Cos(var1[15]);
  t2309 = t987*t927;
  t2349 = -1.*t591*t1104;
  t2364 = t2309 + t2349;
  t2266 = Sin(var1[15]);
  t2433 = t549*t3*t4;
  t2519 = t329*t1135;
  t2656 = t2433 + t2519;
  t2774 = Cos(var1[16]);
  t2369 = t2266*t2364;
  t2729 = t2403*t2656;
  t2731 = t2369 + t2729;
  t2164 = Sin(var1[16]);
  t2777 = t2403*t2364;
  t2799 = -1.*t2266*t2656;
  t2802 = t2777 + t2799;
  t2850 = Cos(var1[17]);
  t2746 = -1.*t2164*t2731;
  t2822 = t2774*t2802;
  t2828 = t2746 + t2822;
  t2131 = Sin(var1[17]);
  t2872 = t2774*t2731;
  t2900 = t2164*t2802;
  t2908 = t2872 + t2900;
  t2957 = Cos(var1[18]);
  t2846 = t2131*t2828;
  t2921 = t2850*t2908;
  t2925 = t2846 + t2921;
  t2103 = Sin(var1[18]);
  t2959 = t2850*t2828;
  t2991 = -1.*t2131*t2908;
  t2992 = t2959 + t2991;
  t3105 = Cos(var1[19]);
  t2935 = -1.*t2103*t2925;
  t3004 = t2957*t2992;
  t3025 = t2935 + t3004;
  t2084 = Sin(var1[19]);
  t3109 = t2957*t2925;
  t3123 = t2103*t2992;
  t3181 = t3109 + t3123;
  t1365 = t828*t904*t844;
  t1387 = -1.*t3*t907;
  t1426 = t1365 + t1387;
  t1523 = t3*t828;
  t1533 = t904*t844*t907;
  t1577 = t1523 + t1533;
  t1473 = t591*t1426;
  t1594 = t987*t1577;
  t1621 = t1473 + t1594;
  t3431 = t987*t1426;
  t3464 = -1.*t591*t1577;
  t3481 = t3431 + t3464;
  t3495 = t549*t4*t904;
  t3505 = t329*t1621;
  t3506 = t3495 + t3505;
  t3493 = t2266*t3481;
  t3510 = t2403*t3506;
  t3575 = t3493 + t3510;
  t3588 = t2403*t3481;
  t3613 = -1.*t2266*t3506;
  t3618 = t3588 + t3613;
  t3577 = -1.*t2164*t3575;
  t3619 = t2774*t3618;
  t3655 = t3577 + t3619;
  t3695 = t2774*t3575;
  t3736 = t2164*t3618;
  t3755 = t3695 + t3736;
  t3687 = t2131*t3655;
  t3777 = t2850*t3755;
  t3780 = t3687 + t3777;
  t3845 = t2850*t3655;
  t3847 = -1.*t2131*t3755;
  t3850 = t3845 + t3847;
  t3841 = -1.*t2103*t3780;
  t3855 = t2957*t3850;
  t3864 = t3841 + t3855;
  t3909 = t2957*t3780;
  t3927 = t2103*t3850;
  t3931 = t3909 + t3927;
  t1721 = t4*t828*t591;
  t1729 = t987*t4*t907;
  t1999 = t1721 + t1729;
  t4037 = t987*t4*t828;
  t4058 = -1.*t4*t591*t907;
  t4100 = t4037 + t4058;
  t4121 = -1.*t549*t844;
  t4124 = t329*t1999;
  t4133 = t4121 + t4124;
  t4116 = t2266*t4100;
  t4134 = t2403*t4133;
  t4153 = t4116 + t4134;
  t4167 = t2403*t4100;
  t4183 = -1.*t2266*t4133;
  t4187 = t4167 + t4183;
  t4166 = -1.*t2164*t4153;
  t4192 = t2774*t4187;
  t4203 = t4166 + t4192;
  t4219 = t2774*t4153;
  t4226 = t2164*t4187;
  t4247 = t4219 + t4226;
  t4204 = t2131*t4203;
  t4250 = t2850*t4247;
  t4293 = t4204 + t4250;
  t4323 = t2850*t4203;
  t4333 = -1.*t2131*t4247;
  t4337 = t4323 + t4333;
  t4307 = -1.*t2103*t4293;
  t4371 = t2957*t4337;
  t4373 = t4307 + t4371;
  t4409 = t2957*t4293;
  t4425 = t2103*t4337;
  t4428 = t4409 + t4425;
  t3038 = t2084*t3025;
  t3187 = t3105*t3181;
  t3221 = t3038 + t3187;
  t3246 = t3105*t3025;
  t3338 = -1.*t2084*t3181;
  t3375 = t3246 + t3338;
  t3874 = t2084*t3864;
  t3933 = t3105*t3931;
  t3948 = t3874 + t3933;
  t3960 = t3105*t3864;
  t3969 = -1.*t2084*t3931;
  t3996 = t3960 + t3969;
  t4396 = t2084*t4373;
  t4458 = t3105*t4428;
  t4468 = t4396 + t4458;
  t4502 = t3105*t4373;
  t4509 = -1.*t2084*t4428;
  t4547 = t4502 + t4509;
  p_output1[0]=t3*t329*t4 - 1.*t1135*t549;
  p_output1[1]=-1.*t1621*t549 + t329*t4*t904;
  p_output1[2]=-1.*t1999*t549 - 1.*t329*t844;
  p_output1[3]=0.642788*t3221 + 0.766044*t3375;
  p_output1[4]=0.642788*t3948 + 0.766044*t3996;
  p_output1[5]=0.642788*t4468 + 0.766044*t4547;
  p_output1[6]=-0.766044*t3221 + 0.642788*t3375;
  p_output1[7]=-0.766044*t3948 + 0.642788*t3996;
  p_output1[8]=-0.766044*t4468 + 0.642788*t4547;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
