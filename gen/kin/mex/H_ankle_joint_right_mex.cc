/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:51 GMT-05:00
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
  double t481;
  double t524;
  double t470;
  double t492;
  double t533;
  double t572;
  double t501;
  double t548;
  double t557;
  double t467;
  double t621;
  double t697;
  double t790;
  double t832;
  double t559;
  double t817;
  double t823;
  double t439;
  double t836;
  double t882;
  double t909;
  double t920;
  double t943;
  double t947;
  double t991;
  double t997;
  double t1071;
  double t1316;
  double t828;
  double t1079;
  double t1082;
  double t379;
  double t1338;
  double t1340;
  double t1349;
  double t1422;
  double t1273;
  double t1357;
  double t1408;
  double t306;
  double t1432;
  double t1482;
  double t1533;
  double t229;
  double t1789;
  double t1791;
  double t1810;
  double t1830;
  double t1836;
  double t1838;
  double t1826;
  double t1848;
  double t1958;
  double t1977;
  double t2020;
  double t2040;
  double t2045;
  double t2052;
  double t2083;
  double t1962;
  double t2153;
  double t2157;
  double t2246;
  double t2260;
  double t2263;
  double t1606;
  double t2178;
  double t2264;
  double t2311;
  double t2322;
  double t2346;
  double t2384;
  double t2764;
  double t2768;
  double t2784;
  double t2878;
  double t2880;
  double t2883;
  double t2886;
  double t2935;
  double t2939;
  double t2817;
  double t2961;
  double t2986;
  double t3028;
  double t3050;
  double t3070;
  double t3025;
  double t3073;
  double t3081;
  double t3092;
  double t3097;
  double t3149;
  double t1409;
  double t1542;
  double t1569;
  double t1690;
  double t1723;
  double t1726;
  double t2313;
  double t2403;
  double t2404;
  double t2567;
  double t2594;
  double t2609;
  double t3087;
  double t3168;
  double t3183;
  double t3232;
  double t3233;
  double t3236;
  double t3306;
  double t3307;
  double t3412;
  double t3417;
  double t3636;
  double t3656;
  double t3897;
  double t3907;
  double t3976;
  double t3986;
  double t3257;
  double t3258;
  double t3262;
  double t3309;
  double t3310;
  double t3313;
  double t3318;
  double t3321;
  double t3330;
  double t3331;
  double t3335;
  double t3337;
  double t3345;
  double t3350;
  double t3377;
  double t3425;
  double t3451;
  double t3453;
  double t3562;
  double t3584;
  double t3603;
  double t3662;
  double t3668;
  double t3776;
  double t3832;
  double t3872;
  double t3884;
  double t3916;
  double t3926;
  double t3944;
  double t3958;
  double t3960;
  double t3961;
  double t3992;
  double t3998;
  double t4008;
  double t4021;
  double t4034;
  double t4047;
  double t3263;
  double t3266;
  double t3267;
  double t3268;
  double t3271;
  double t3272;
  t481 = Cos(var1[5]);
  t524 = Sin(var1[3]);
  t470 = Cos(var1[3]);
  t492 = Sin(var1[4]);
  t533 = Sin(var1[5]);
  t572 = Sin(var1[13]);
  t501 = t470*t481*t492;
  t548 = t524*t533;
  t557 = t501 + t548;
  t467 = Cos(var1[13]);
  t621 = -1.*t481*t524;
  t697 = t470*t492*t533;
  t790 = t621 + t697;
  t832 = Cos(var1[15]);
  t559 = t467*t557;
  t817 = -1.*t572*t790;
  t823 = t559 + t817;
  t439 = Sin(var1[15]);
  t836 = Cos(var1[14]);
  t882 = Cos(var1[4]);
  t909 = t836*t470*t882;
  t920 = Sin(var1[14]);
  t943 = t572*t557;
  t947 = t467*t790;
  t991 = t943 + t947;
  t997 = t920*t991;
  t1071 = t909 + t997;
  t1316 = Cos(var1[16]);
  t828 = t439*t823;
  t1079 = t832*t1071;
  t1082 = t828 + t1079;
  t379 = Sin(var1[16]);
  t1338 = t832*t823;
  t1340 = -1.*t439*t1071;
  t1349 = t1338 + t1340;
  t1422 = Cos(var1[17]);
  t1273 = -1.*t379*t1082;
  t1357 = t1316*t1349;
  t1408 = t1273 + t1357;
  t306 = Sin(var1[17]);
  t1432 = t1316*t1082;
  t1482 = t379*t1349;
  t1533 = t1432 + t1482;
  t229 = Sin(var1[18]);
  t1789 = t481*t524*t492;
  t1791 = -1.*t470*t533;
  t1810 = t1789 + t1791;
  t1830 = t470*t481;
  t1836 = t524*t492*t533;
  t1838 = t1830 + t1836;
  t1826 = t467*t1810;
  t1848 = -1.*t572*t1838;
  t1958 = t1826 + t1848;
  t1977 = t836*t882*t524;
  t2020 = t572*t1810;
  t2040 = t467*t1838;
  t2045 = t2020 + t2040;
  t2052 = t920*t2045;
  t2083 = t1977 + t2052;
  t1962 = t439*t1958;
  t2153 = t832*t2083;
  t2157 = t1962 + t2153;
  t2246 = t832*t1958;
  t2260 = -1.*t439*t2083;
  t2263 = t2246 + t2260;
  t1606 = Cos(var1[18]);
  t2178 = -1.*t379*t2157;
  t2264 = t1316*t2263;
  t2311 = t2178 + t2264;
  t2322 = t1316*t2157;
  t2346 = t379*t2263;
  t2384 = t2322 + t2346;
  t2764 = t467*t882*t481;
  t2768 = -1.*t882*t572*t533;
  t2784 = t2764 + t2768;
  t2878 = -1.*t836*t492;
  t2880 = t882*t481*t572;
  t2883 = t467*t882*t533;
  t2886 = t2880 + t2883;
  t2935 = t920*t2886;
  t2939 = t2878 + t2935;
  t2817 = t439*t2784;
  t2961 = t832*t2939;
  t2986 = t2817 + t2961;
  t3028 = t832*t2784;
  t3050 = -1.*t439*t2939;
  t3070 = t3028 + t3050;
  t3025 = -1.*t379*t2986;
  t3073 = t1316*t3070;
  t3081 = t3025 + t3073;
  t3092 = t1316*t2986;
  t3097 = t379*t3070;
  t3149 = t3092 + t3097;
  t1409 = t306*t1408;
  t1542 = t1422*t1533;
  t1569 = t1409 + t1542;
  t1690 = t1422*t1408;
  t1723 = -1.*t306*t1533;
  t1726 = t1690 + t1723;
  t2313 = t306*t2311;
  t2403 = t1422*t2384;
  t2404 = t2313 + t2403;
  t2567 = t1422*t2311;
  t2594 = -1.*t306*t2384;
  t2609 = t2567 + t2594;
  t3087 = t306*t3081;
  t3168 = t1422*t3149;
  t3183 = t3087 + t3168;
  t3232 = t1422*t3081;
  t3233 = -1.*t306*t3149;
  t3236 = t3232 + t3233;
  t3306 = -1.*t836;
  t3307 = 1. + t3306;
  t3412 = -1.*t832;
  t3417 = 1. + t3412;
  t3636 = -1.*t1316;
  t3656 = 1. + t3636;
  t3897 = -1.*t1422;
  t3907 = 1. + t3897;
  t3976 = -1.*t1606;
  t3986 = 1. + t3976;
  t3257 = t1606*t1569;
  t3258 = t229*t1726;
  t3262 = t3257 + t3258;
  t3309 = -0.049*t3307;
  t3310 = -0.135*t920;
  t3313 = 0. + t3309 + t3310;
  t3318 = 0.135*t572;
  t3321 = 0. + t3318;
  t3330 = -1.*t467;
  t3331 = 1. + t3330;
  t3335 = -0.135*t3331;
  t3337 = 0. + t3335;
  t3345 = -0.135*t3307;
  t3350 = 0.049*t920;
  t3377 = 0. + t3345 + t3350;
  t3425 = -0.09*t3417;
  t3451 = 0.049*t439;
  t3453 = 0. + t3425 + t3451;
  t3562 = -0.049*t3417;
  t3584 = -0.09*t439;
  t3603 = 0. + t3562 + t3584;
  t3662 = -0.049*t3656;
  t3668 = -0.21*t379;
  t3776 = 0. + t3662 + t3668;
  t3832 = -0.21*t3656;
  t3872 = 0.049*t379;
  t3884 = 0. + t3832 + t3872;
  t3916 = -0.2707*t3907;
  t3926 = 0.0016*t306;
  t3944 = 0. + t3916 + t3926;
  t3958 = -0.0016*t3907;
  t3960 = -0.2707*t306;
  t3961 = 0. + t3958 + t3960;
  t3992 = 0.0184*t3986;
  t3998 = -0.7055*t229;
  t4008 = 0. + t3992 + t3998;
  t4021 = -0.7055*t3986;
  t4034 = -0.0184*t229;
  t4047 = 0. + t4021 + t4034;
  t3263 = t1606*t2404;
  t3266 = t229*t2609;
  t3267 = t3263 + t3266;
  t3268 = t1606*t3183;
  t3271 = t229*t3236;
  t3272 = t3268 + t3271;
  p_output1[0]=-1.*t1606*t1726 + t1569*t229;
  p_output1[1]=t229*t2404 - 1.*t1606*t2609;
  p_output1[2]=t229*t3183 - 1.*t1606*t3236;
  p_output1[3]=0.;
  p_output1[4]=t3262;
  p_output1[5]=t3267;
  p_output1[6]=t3272;
  p_output1[7]=0.;
  p_output1[8]=t470*t882*t920 - 1.*t836*t991;
  p_output1[9]=-1.*t2045*t836 + t524*t882*t920;
  p_output1[10]=-1.*t2886*t836 - 1.*t492*t920;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.7055*(t1606*t1726 - 1.*t1569*t229) + 0.0184*t3262 + t1071*t3603 + t1082*t3776 + t1349*t3884 + t1408*t3944 + t1533*t3961 + t1569*t4008 + t1726*t4047 + t3321*t557 + t3337*t790 + t3453*t823 + t3313*t470*t882 + t3377*t991 - 0.1305*(-1.*t470*t882*t920 + t836*t991) + var1[0];
  p_output1[13]=0. - 0.7055*(-1.*t229*t2404 + t1606*t2609) + 0.0184*t3267 + t1810*t3321 + t1838*t3337 + t2045*t3377 + t1958*t3453 + t2083*t3603 + t2157*t3776 + t2263*t3884 + t2311*t3944 + t2384*t3961 + t2404*t4008 + t2609*t4047 + t3313*t524*t882 - 0.1305*(t2045*t836 - 1.*t524*t882*t920) + var1[1];
  p_output1[14]=0. - 0.7055*(-1.*t229*t3183 + t1606*t3236) + 0.0184*t3272 + t2886*t3377 + t2784*t3453 + t2939*t3603 + t2986*t3776 + t3070*t3884 + t3081*t3944 + t3149*t3961 + t3183*t4008 + t3236*t4047 - 1.*t3313*t492 + t3321*t481*t882 + t3337*t533*t882 - 0.1305*(t2886*t836 + t492*t920) + var1[2];
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
