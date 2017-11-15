/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:58 GMT-05:00
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
  double t238;
  double t268;
  double t235;
  double t246;
  double t269;
  double t401;
  double t257;
  double t270;
  double t276;
  double t123;
  double t478;
  double t541;
  double t687;
  double t1010;
  double t281;
  double t706;
  double t784;
  double t105;
  double t1094;
  double t1102;
  double t1103;
  double t1112;
  double t1114;
  double t1117;
  double t1297;
  double t1340;
  double t1344;
  double t1388;
  double t995;
  double t1376;
  double t1377;
  double t20;
  double t1395;
  double t1478;
  double t1581;
  double t1752;
  double t1386;
  double t1602;
  double t1614;
  double t18;
  double t1764;
  double t1789;
  double t1798;
  double t1936;
  double t1650;
  double t1870;
  double t1894;
  double t16;
  double t1959;
  double t1963;
  double t2041;
  double t15;
  double t2243;
  double t2245;
  double t2272;
  double t2449;
  double t2454;
  double t2508;
  double t2326;
  double t2544;
  double t2553;
  double t2594;
  double t2636;
  double t2692;
  double t2751;
  double t2805;
  double t2812;
  double t2585;
  double t2839;
  double t2866;
  double t2888;
  double t2920;
  double t2964;
  double t2878;
  double t2987;
  double t2999;
  double t3008;
  double t3070;
  double t3076;
  double t2132;
  double t3001;
  double t3098;
  double t3110;
  double t3130;
  double t3131;
  double t3141;
  double t3219;
  double t3236;
  double t3239;
  double t3244;
  double t3245;
  double t3283;
  double t3295;
  double t3362;
  double t3379;
  double t3242;
  double t3389;
  double t3400;
  double t3594;
  double t3608;
  double t3621;
  double t3558;
  double t3625;
  double t3634;
  double t3679;
  double t3684;
  double t3688;
  double t3642;
  double t3700;
  double t3728;
  double t3759;
  double t3765;
  double t3773;
  double t1900;
  double t2058;
  double t2061;
  double t2188;
  double t2192;
  double t2194;
  double t3121;
  double t3151;
  double t3163;
  double t3176;
  double t3188;
  double t3189;
  double t3754;
  double t3789;
  double t3791;
  double t3800;
  double t3810;
  double t3811;
  t238 = Cos(var1[5]);
  t268 = Sin(var1[3]);
  t235 = Cos(var1[3]);
  t246 = Sin(var1[4]);
  t269 = Sin(var1[5]);
  t401 = Sin(var1[13]);
  t257 = t235*t238*t246;
  t270 = t268*t269;
  t276 = t257 + t270;
  t123 = Cos(var1[13]);
  t478 = -1.*t238*t268;
  t541 = t235*t246*t269;
  t687 = t478 + t541;
  t1010 = Cos(var1[15]);
  t281 = t123*t276;
  t706 = -1.*t401*t687;
  t784 = t281 + t706;
  t105 = Sin(var1[15]);
  t1094 = Cos(var1[14]);
  t1102 = Cos(var1[4]);
  t1103 = t1094*t235*t1102;
  t1112 = Sin(var1[14]);
  t1114 = t401*t276;
  t1117 = t123*t687;
  t1297 = t1114 + t1117;
  t1340 = t1112*t1297;
  t1344 = t1103 + t1340;
  t1388 = Cos(var1[16]);
  t995 = t105*t784;
  t1376 = t1010*t1344;
  t1377 = t995 + t1376;
  t20 = Sin(var1[16]);
  t1395 = t1010*t784;
  t1478 = -1.*t105*t1344;
  t1581 = t1395 + t1478;
  t1752 = Cos(var1[17]);
  t1386 = -1.*t20*t1377;
  t1602 = t1388*t1581;
  t1614 = t1386 + t1602;
  t18 = Sin(var1[17]);
  t1764 = t1388*t1377;
  t1789 = t20*t1581;
  t1798 = t1764 + t1789;
  t1936 = Cos(var1[18]);
  t1650 = t18*t1614;
  t1870 = t1752*t1798;
  t1894 = t1650 + t1870;
  t16 = Sin(var1[18]);
  t1959 = t1752*t1614;
  t1963 = -1.*t18*t1798;
  t2041 = t1959 + t1963;
  t15 = Cos(var1[19]);
  t2243 = t238*t268*t246;
  t2245 = -1.*t235*t269;
  t2272 = t2243 + t2245;
  t2449 = t235*t238;
  t2454 = t268*t246*t269;
  t2508 = t2449 + t2454;
  t2326 = t123*t2272;
  t2544 = -1.*t401*t2508;
  t2553 = t2326 + t2544;
  t2594 = t1094*t1102*t268;
  t2636 = t401*t2272;
  t2692 = t123*t2508;
  t2751 = t2636 + t2692;
  t2805 = t1112*t2751;
  t2812 = t2594 + t2805;
  t2585 = t105*t2553;
  t2839 = t1010*t2812;
  t2866 = t2585 + t2839;
  t2888 = t1010*t2553;
  t2920 = -1.*t105*t2812;
  t2964 = t2888 + t2920;
  t2878 = -1.*t20*t2866;
  t2987 = t1388*t2964;
  t2999 = t2878 + t2987;
  t3008 = t1388*t2866;
  t3070 = t20*t2964;
  t3076 = t3008 + t3070;
  t2132 = Sin(var1[19]);
  t3001 = t18*t2999;
  t3098 = t1752*t3076;
  t3110 = t3001 + t3098;
  t3130 = t1752*t2999;
  t3131 = -1.*t18*t3076;
  t3141 = t3130 + t3131;
  t3219 = t123*t1102*t238;
  t3236 = -1.*t1102*t401*t269;
  t3239 = t3219 + t3236;
  t3244 = -1.*t1094*t246;
  t3245 = t1102*t238*t401;
  t3283 = t123*t1102*t269;
  t3295 = t3245 + t3283;
  t3362 = t1112*t3295;
  t3379 = t3244 + t3362;
  t3242 = t105*t3239;
  t3389 = t1010*t3379;
  t3400 = t3242 + t3389;
  t3594 = t1010*t3239;
  t3608 = -1.*t105*t3379;
  t3621 = t3594 + t3608;
  t3558 = -1.*t20*t3400;
  t3625 = t1388*t3621;
  t3634 = t3558 + t3625;
  t3679 = t1388*t3400;
  t3684 = t20*t3621;
  t3688 = t3679 + t3684;
  t3642 = t18*t3634;
  t3700 = t1752*t3688;
  t3728 = t3642 + t3700;
  t3759 = t1752*t3634;
  t3765 = -1.*t18*t3688;
  t3773 = t3759 + t3765;
  t1900 = -1.*t16*t1894;
  t2058 = t1936*t2041;
  t2061 = t1900 + t2058;
  t2188 = t1936*t1894;
  t2192 = t16*t2041;
  t2194 = t2188 + t2192;
  t3121 = -1.*t16*t3110;
  t3151 = t1936*t3141;
  t3163 = t3121 + t3151;
  t3176 = t1936*t3110;
  t3188 = t16*t3141;
  t3189 = t3176 + t3188;
  t3754 = -1.*t16*t3728;
  t3789 = t1936*t3773;
  t3791 = t3754 + t3789;
  t3800 = t1936*t3728;
  t3810 = t16*t3773;
  t3811 = t3800 + t3810;
  p_output1[0]=-1.*t15*t2061 + t2132*t2194;
  p_output1[1]=-1.*t15*t3163 + t2132*t3189;
  p_output1[2]=-1.*t15*t3791 + t2132*t3811;
  p_output1[3]=t2061*t2132 + t15*t2194;
  p_output1[4]=t2132*t3163 + t15*t3189;
  p_output1[5]=t2132*t3791 + t15*t3811;
  p_output1[6]=-1.*t1094*t1297 + t1102*t1112*t235;
  p_output1[7]=t1102*t1112*t268 - 1.*t1094*t2751;
  p_output1[8]=-1.*t1112*t246 - 1.*t1094*t3295;
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

#include "R_toe_joint_right_mex.hh"

namespace SymExpression
{

void R_toe_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
