/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:38 GMT-04:00
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
  double t591;
  double t560;
  double t602;
  double t567;
  double t616;
  double t265;
  double t514;
  double t736;
  double t855;
  double t877;
  double t578;
  double t646;
  double t654;
  double t655;
  double t678;
  double t699;
  double t716;
  double t749;
  double t751;
  double t2217;
  double t2343;
  double t2358;
  double t2371;
  double t2227;
  double t2228;
  double t2238;
  double t2386;
  double t2483;
  double t2266;
  double t2408;
  double t2449;
  double t2198;
  double t2520;
  double t2590;
  double t2596;
  double t2620;
  double t2460;
  double t2601;
  double t2607;
  double t2197;
  double t2624;
  double t2630;
  double t2642;
  double t2786;
  double t2610;
  double t2675;
  double t2690;
  double t2174;
  double t2793;
  double t2840;
  double t2854;
  double t2974;
  double t2771;
  double t2865;
  double t2882;
  double t1899;
  double t3035;
  double t3049;
  double t3066;
  double t1034;
  double t1066;
  double t1081;
  double t1211;
  double t1248;
  double t1381;
  double t1386;
  double t1395;
  double t1416;
  double t3331;
  double t3336;
  double t3382;
  double t3202;
  double t3215;
  double t3277;
  double t3293;
  double t3418;
  double t3437;
  double t3473;
  double t3588;
  double t3597;
  double t3445;
  double t3600;
  double t3634;
  double t3692;
  double t3699;
  double t3741;
  double t3684;
  double t3780;
  double t3807;
  double t3810;
  double t3815;
  double t3819;
  double t3809;
  double t3824;
  double t3838;
  double t3855;
  double t3877;
  double t3882;
  double t1724;
  double t1749;
  double t1760;
  double t4119;
  double t4121;
  double t4138;
  double t4020;
  double t4050;
  double t4088;
  double t4117;
  double t4188;
  double t4196;
  double t4256;
  double t4263;
  double t4291;
  double t4254;
  double t4295;
  double t4296;
  double t4363;
  double t4370;
  double t4371;
  double t4299;
  double t4380;
  double t4384;
  double t4409;
  double t4415;
  double t4476;
  double t4405;
  double t4477;
  double t4482;
  double t4549;
  double t4556;
  double t4583;
  double t2906;
  double t3072;
  double t3075;
  double t3121;
  double t3150;
  double t3177;
  double t3847;
  double t3948;
  double t3953;
  double t3959;
  double t3967;
  double t3979;
  double t4513;
  double t4617;
  double t4732;
  double t4782;
  double t4797;
  double t4800;
  t591 = Cos(var1[3]);
  t560 = Cos(var1[5]);
  t602 = Sin(var1[4]);
  t567 = Sin(var1[3]);
  t616 = Sin(var1[5]);
  t265 = Cos(var1[7]);
  t514 = Cos(var1[6]);
  t736 = Sin(var1[6]);
  t855 = Cos(var1[4]);
  t877 = Sin(var1[7]);
  t578 = -1.*t560*t567;
  t646 = t591*t602*t616;
  t654 = t578 + t646;
  t655 = t514*t654;
  t678 = t591*t560*t602;
  t699 = t567*t616;
  t716 = t678 + t699;
  t749 = t716*t736;
  t751 = t655 + t749;
  t2217 = Cos(var1[8]);
  t2343 = t514*t716;
  t2358 = -1.*t654*t736;
  t2371 = t2343 + t2358;
  t2227 = t591*t855*t265;
  t2228 = t751*t877;
  t2238 = t2227 + t2228;
  t2386 = Sin(var1[8]);
  t2483 = Cos(var1[9]);
  t2266 = t2217*t2238;
  t2408 = t2371*t2386;
  t2449 = t2266 + t2408;
  t2198 = Sin(var1[9]);
  t2520 = t2217*t2371;
  t2590 = -1.*t2238*t2386;
  t2596 = t2520 + t2590;
  t2620 = Cos(var1[10]);
  t2460 = -1.*t2198*t2449;
  t2601 = t2483*t2596;
  t2607 = t2460 + t2601;
  t2197 = Sin(var1[10]);
  t2624 = t2483*t2449;
  t2630 = t2198*t2596;
  t2642 = t2624 + t2630;
  t2786 = Cos(var1[11]);
  t2610 = t2197*t2607;
  t2675 = t2620*t2642;
  t2690 = t2610 + t2675;
  t2174 = Sin(var1[11]);
  t2793 = t2620*t2607;
  t2840 = -1.*t2197*t2642;
  t2854 = t2793 + t2840;
  t2974 = Cos(var1[12]);
  t2771 = -1.*t2174*t2690;
  t2865 = t2786*t2854;
  t2882 = t2771 + t2865;
  t1899 = Sin(var1[12]);
  t3035 = t2786*t2690;
  t3049 = t2174*t2854;
  t3066 = t3035 + t3049;
  t1034 = t591*t560;
  t1066 = t567*t602*t616;
  t1081 = t1034 + t1066;
  t1211 = t514*t1081;
  t1248 = t560*t567*t602;
  t1381 = -1.*t591*t616;
  t1386 = t1248 + t1381;
  t1395 = t1386*t736;
  t1416 = t1211 + t1395;
  t3331 = t514*t1386;
  t3336 = -1.*t1081*t736;
  t3382 = t3331 + t3336;
  t3202 = t855*t265*t567;
  t3215 = t1416*t877;
  t3277 = t3202 + t3215;
  t3293 = t2217*t3277;
  t3418 = t3382*t2386;
  t3437 = t3293 + t3418;
  t3473 = t2217*t3382;
  t3588 = -1.*t3277*t2386;
  t3597 = t3473 + t3588;
  t3445 = -1.*t2198*t3437;
  t3600 = t2483*t3597;
  t3634 = t3445 + t3600;
  t3692 = t2483*t3437;
  t3699 = t2198*t3597;
  t3741 = t3692 + t3699;
  t3684 = t2197*t3634;
  t3780 = t2620*t3741;
  t3807 = t3684 + t3780;
  t3810 = t2620*t3634;
  t3815 = -1.*t2197*t3741;
  t3819 = t3810 + t3815;
  t3809 = -1.*t2174*t3807;
  t3824 = t2786*t3819;
  t3838 = t3809 + t3824;
  t3855 = t2786*t3807;
  t3877 = t2174*t3819;
  t3882 = t3855 + t3877;
  t1724 = t855*t514*t616;
  t1749 = t855*t560*t736;
  t1760 = t1724 + t1749;
  t4119 = t855*t560*t514;
  t4121 = -1.*t855*t616*t736;
  t4138 = t4119 + t4121;
  t4020 = -1.*t265*t602;
  t4050 = t1760*t877;
  t4088 = t4020 + t4050;
  t4117 = t2217*t4088;
  t4188 = t4138*t2386;
  t4196 = t4117 + t4188;
  t4256 = t2217*t4138;
  t4263 = -1.*t4088*t2386;
  t4291 = t4256 + t4263;
  t4254 = -1.*t2198*t4196;
  t4295 = t2483*t4291;
  t4296 = t4254 + t4295;
  t4363 = t2483*t4196;
  t4370 = t2198*t4291;
  t4371 = t4363 + t4370;
  t4299 = t2197*t4296;
  t4380 = t2620*t4371;
  t4384 = t4299 + t4380;
  t4409 = t2620*t4296;
  t4415 = -1.*t2197*t4371;
  t4476 = t4409 + t4415;
  t4405 = -1.*t2174*t4384;
  t4477 = t2786*t4476;
  t4482 = t4405 + t4477;
  t4549 = t2786*t4384;
  t4556 = t2174*t4476;
  t4583 = t4549 + t4556;
  t2906 = t1899*t2882;
  t3072 = t2974*t3066;
  t3075 = t2906 + t3072;
  t3121 = t2974*t2882;
  t3150 = -1.*t1899*t3066;
  t3177 = t3121 + t3150;
  t3847 = t1899*t3838;
  t3948 = t2974*t3882;
  t3953 = t3847 + t3948;
  t3959 = t2974*t3838;
  t3967 = -1.*t1899*t3882;
  t3979 = t3959 + t3967;
  t4513 = t1899*t4482;
  t4617 = t2974*t4583;
  t4732 = t4513 + t4617;
  t4782 = t2974*t4482;
  t4797 = -1.*t1899*t4583;
  t4800 = t4782 + t4797;
  p_output1[0]=-1.*t265*t751 + t591*t855*t877;
  p_output1[1]=-1.*t1416*t265 + t567*t855*t877;
  p_output1[2]=-1.*t1760*t265 - 1.*t602*t877;
  p_output1[3]=0.642788*t3075 + 0.766044*t3177;
  p_output1[4]=0.642788*t3953 + 0.766044*t3979;
  p_output1[5]=0.642788*t4732 + 0.766044*t4800;
  p_output1[6]=-0.766044*t3075 + 0.642788*t3177;
  p_output1[7]=-0.766044*t3953 + 0.642788*t3979;
  p_output1[8]=-0.766044*t4732 + 0.642788*t4800;
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

#include "R_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
