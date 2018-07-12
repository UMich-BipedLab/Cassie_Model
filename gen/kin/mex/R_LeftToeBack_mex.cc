/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:11 GMT-04:00
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
  double t667;
  double t605;
  double t690;
  double t607;
  double t724;
  double t115;
  double t172;
  double t924;
  double t1087;
  double t1094;
  double t658;
  double t734;
  double t742;
  double t789;
  double t822;
  double t845;
  double t874;
  double t925;
  double t1012;
  double t2175;
  double t2384;
  double t2510;
  double t2558;
  double t2215;
  double t2246;
  double t2300;
  double t2592;
  double t2707;
  double t2378;
  double t2618;
  double t2624;
  double t2145;
  double t2716;
  double t2722;
  double t2728;
  double t2800;
  double t2642;
  double t2762;
  double t2765;
  double t2144;
  double t2809;
  double t2849;
  double t2854;
  double t2925;
  double t2799;
  double t2869;
  double t2870;
  double t2122;
  double t2945;
  double t2947;
  double t2979;
  double t3115;
  double t2913;
  double t3005;
  double t3059;
  double t2106;
  double t3183;
  double t3191;
  double t3196;
  double t1197;
  double t1210;
  double t1372;
  double t1375;
  double t1394;
  double t1445;
  double t1541;
  double t1552;
  double t1561;
  double t3357;
  double t3371;
  double t3388;
  double t3314;
  double t3329;
  double t3338;
  double t3356;
  double t3400;
  double t3454;
  double t3477;
  double t3500;
  double t3502;
  double t3456;
  double t3539;
  double t3551;
  double t3602;
  double t3627;
  double t3630;
  double t3555;
  double t3690;
  double t3742;
  double t3780;
  double t3827;
  double t3847;
  double t3773;
  double t3880;
  double t3930;
  double t3957;
  double t3985;
  double t3999;
  double t1978;
  double t1996;
  double t2008;
  double t4205;
  double t4215;
  double t4218;
  double t4172;
  double t4182;
  double t4188;
  double t4192;
  double t4229;
  double t4239;
  double t4282;
  double t4304;
  double t4316;
  double t4259;
  double t4327;
  double t4340;
  double t4356;
  double t4370;
  double t4385;
  double t4352;
  double t4392;
  double t4396;
  double t4411;
  double t4431;
  double t4436;
  double t4401;
  double t4446;
  double t4512;
  double t4601;
  double t4611;
  double t4614;
  double t3067;
  double t3199;
  double t3200;
  double t3241;
  double t3263;
  double t3279;
  double t3947;
  double t4043;
  double t4053;
  double t4117;
  double t4123;
  double t4161;
  double t4564;
  double t4664;
  double t4680;
  double t4707;
  double t4711;
  double t4749;
  t667 = Cos(var1[3]);
  t605 = Cos(var1[5]);
  t690 = Sin(var1[4]);
  t607 = Sin(var1[3]);
  t724 = Sin(var1[5]);
  t115 = Cos(var1[7]);
  t172 = Cos(var1[6]);
  t924 = Sin(var1[6]);
  t1087 = Cos(var1[4]);
  t1094 = Sin(var1[7]);
  t658 = -1.*t605*t607;
  t734 = t667*t690*t724;
  t742 = t658 + t734;
  t789 = t172*t742;
  t822 = t667*t605*t690;
  t845 = t607*t724;
  t874 = t822 + t845;
  t925 = t874*t924;
  t1012 = t789 + t925;
  t2175 = Cos(var1[8]);
  t2384 = t172*t874;
  t2510 = -1.*t742*t924;
  t2558 = t2384 + t2510;
  t2215 = t667*t1087*t115;
  t2246 = t1012*t1094;
  t2300 = t2215 + t2246;
  t2592 = Sin(var1[8]);
  t2707 = Cos(var1[9]);
  t2378 = t2175*t2300;
  t2618 = t2558*t2592;
  t2624 = t2378 + t2618;
  t2145 = Sin(var1[9]);
  t2716 = t2175*t2558;
  t2722 = -1.*t2300*t2592;
  t2728 = t2716 + t2722;
  t2800 = Cos(var1[10]);
  t2642 = -1.*t2145*t2624;
  t2762 = t2707*t2728;
  t2765 = t2642 + t2762;
  t2144 = Sin(var1[10]);
  t2809 = t2707*t2624;
  t2849 = t2145*t2728;
  t2854 = t2809 + t2849;
  t2925 = Cos(var1[11]);
  t2799 = t2144*t2765;
  t2869 = t2800*t2854;
  t2870 = t2799 + t2869;
  t2122 = Sin(var1[11]);
  t2945 = t2800*t2765;
  t2947 = -1.*t2144*t2854;
  t2979 = t2945 + t2947;
  t3115 = Cos(var1[12]);
  t2913 = -1.*t2122*t2870;
  t3005 = t2925*t2979;
  t3059 = t2913 + t3005;
  t2106 = Sin(var1[12]);
  t3183 = t2925*t2870;
  t3191 = t2122*t2979;
  t3196 = t3183 + t3191;
  t1197 = t667*t605;
  t1210 = t607*t690*t724;
  t1372 = t1197 + t1210;
  t1375 = t172*t1372;
  t1394 = t605*t607*t690;
  t1445 = -1.*t667*t724;
  t1541 = t1394 + t1445;
  t1552 = t1541*t924;
  t1561 = t1375 + t1552;
  t3357 = t172*t1541;
  t3371 = -1.*t1372*t924;
  t3388 = t3357 + t3371;
  t3314 = t1087*t115*t607;
  t3329 = t1561*t1094;
  t3338 = t3314 + t3329;
  t3356 = t2175*t3338;
  t3400 = t3388*t2592;
  t3454 = t3356 + t3400;
  t3477 = t2175*t3388;
  t3500 = -1.*t3338*t2592;
  t3502 = t3477 + t3500;
  t3456 = -1.*t2145*t3454;
  t3539 = t2707*t3502;
  t3551 = t3456 + t3539;
  t3602 = t2707*t3454;
  t3627 = t2145*t3502;
  t3630 = t3602 + t3627;
  t3555 = t2144*t3551;
  t3690 = t2800*t3630;
  t3742 = t3555 + t3690;
  t3780 = t2800*t3551;
  t3827 = -1.*t2144*t3630;
  t3847 = t3780 + t3827;
  t3773 = -1.*t2122*t3742;
  t3880 = t2925*t3847;
  t3930 = t3773 + t3880;
  t3957 = t2925*t3742;
  t3985 = t2122*t3847;
  t3999 = t3957 + t3985;
  t1978 = t1087*t172*t724;
  t1996 = t1087*t605*t924;
  t2008 = t1978 + t1996;
  t4205 = t1087*t605*t172;
  t4215 = -1.*t1087*t724*t924;
  t4218 = t4205 + t4215;
  t4172 = -1.*t115*t690;
  t4182 = t2008*t1094;
  t4188 = t4172 + t4182;
  t4192 = t2175*t4188;
  t4229 = t4218*t2592;
  t4239 = t4192 + t4229;
  t4282 = t2175*t4218;
  t4304 = -1.*t4188*t2592;
  t4316 = t4282 + t4304;
  t4259 = -1.*t2145*t4239;
  t4327 = t2707*t4316;
  t4340 = t4259 + t4327;
  t4356 = t2707*t4239;
  t4370 = t2145*t4316;
  t4385 = t4356 + t4370;
  t4352 = t2144*t4340;
  t4392 = t2800*t4385;
  t4396 = t4352 + t4392;
  t4411 = t2800*t4340;
  t4431 = -1.*t2144*t4385;
  t4436 = t4411 + t4431;
  t4401 = -1.*t2122*t4396;
  t4446 = t2925*t4436;
  t4512 = t4401 + t4446;
  t4601 = t2925*t4396;
  t4611 = t2122*t4436;
  t4614 = t4601 + t4611;
  t3067 = t2106*t3059;
  t3199 = t3115*t3196;
  t3200 = t3067 + t3199;
  t3241 = t3115*t3059;
  t3263 = -1.*t2106*t3196;
  t3279 = t3241 + t3263;
  t3947 = t2106*t3930;
  t4043 = t3115*t3999;
  t4053 = t3947 + t4043;
  t4117 = t3115*t3930;
  t4123 = -1.*t2106*t3999;
  t4161 = t4117 + t4123;
  t4564 = t2106*t4512;
  t4664 = t3115*t4614;
  t4680 = t4564 + t4664;
  t4707 = t3115*t4512;
  t4711 = -1.*t2106*t4614;
  t4749 = t4707 + t4711;
  p_output1[0]=-1.*t1012*t115 + t1087*t1094*t667;
  p_output1[1]=-1.*t115*t1561 + t1087*t1094*t607;
  p_output1[2]=-1.*t115*t2008 - 1.*t1094*t690;
  p_output1[3]=0.642788*t3200 + 0.766044*t3279;
  p_output1[4]=0.642788*t4053 + 0.766044*t4161;
  p_output1[5]=0.642788*t4680 + 0.766044*t4749;
  p_output1[6]=-0.766044*t3200 + 0.642788*t3279;
  p_output1[7]=-0.766044*t4053 + 0.642788*t4161;
  p_output1[8]=-0.766044*t4680 + 0.642788*t4749;
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

#include "R_LeftToeBack_mex.hh"

namespace SymExpression
{

void R_LeftToeBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
