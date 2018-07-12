/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:01 GMT-04:00
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
  double t775;
  double t271;
  double t815;
  double t715;
  double t867;
  double t80;
  double t227;
  double t1148;
  double t1284;
  double t1285;
  double t756;
  double t929;
  double t962;
  double t974;
  double t1113;
  double t1120;
  double t1138;
  double t1160;
  double t1222;
  double t2235;
  double t2481;
  double t2502;
  double t2522;
  double t2238;
  double t2288;
  double t2363;
  double t2530;
  double t2612;
  double t2445;
  double t2546;
  double t2550;
  double t2203;
  double t2643;
  double t2665;
  double t2681;
  double t2813;
  double t2585;
  double t2690;
  double t2704;
  double t2170;
  double t2815;
  double t2827;
  double t2864;
  double t2961;
  double t2805;
  double t2922;
  double t2926;
  double t2137;
  double t2975;
  double t3024;
  double t3048;
  double t3088;
  double t2933;
  double t3053;
  double t3055;
  double t2086;
  double t3090;
  double t3102;
  double t3114;
  double t1428;
  double t1454;
  double t1509;
  double t1567;
  double t1604;
  double t1608;
  double t1626;
  double t1640;
  double t1668;
  double t3410;
  double t3462;
  double t3472;
  double t3335;
  double t3353;
  double t3382;
  double t3390;
  double t3505;
  double t3513;
  double t3541;
  double t3584;
  double t3592;
  double t3529;
  double t3754;
  double t3778;
  double t3785;
  double t3786;
  double t3849;
  double t3783;
  double t3858;
  double t3890;
  double t3954;
  double t3959;
  double t3962;
  double t3931;
  double t3977;
  double t3988;
  double t4029;
  double t4040;
  double t4055;
  double t1891;
  double t1904;
  double t1920;
  double t4149;
  double t4150;
  double t4152;
  double t4133;
  double t4138;
  double t4141;
  double t4143;
  double t4157;
  double t4183;
  double t4246;
  double t4249;
  double t4311;
  double t4194;
  double t4317;
  double t4320;
  double t4383;
  double t4398;
  double t4429;
  double t4351;
  double t4438;
  double t4439;
  double t4462;
  double t4466;
  double t4475;
  double t4443;
  double t4482;
  double t4485;
  double t4497;
  double t4537;
  double t4539;
  double t3086;
  double t3130;
  double t3217;
  double t3278;
  double t3301;
  double t3309;
  double t4024;
  double t4062;
  double t4067;
  double t4073;
  double t4096;
  double t4100;
  double t4491;
  double t4540;
  double t4558;
  double t4574;
  double t4590;
  double t4594;
  t775 = Cos(var1[3]);
  t271 = Cos(var1[5]);
  t815 = Sin(var1[4]);
  t715 = Sin(var1[3]);
  t867 = Sin(var1[5]);
  t80 = Cos(var1[7]);
  t227 = Cos(var1[6]);
  t1148 = Sin(var1[6]);
  t1284 = Cos(var1[4]);
  t1285 = Sin(var1[7]);
  t756 = -1.*t271*t715;
  t929 = t775*t815*t867;
  t962 = t756 + t929;
  t974 = t227*t962;
  t1113 = t775*t271*t815;
  t1120 = t715*t867;
  t1138 = t1113 + t1120;
  t1160 = t1138*t1148;
  t1222 = t974 + t1160;
  t2235 = Cos(var1[8]);
  t2481 = t227*t1138;
  t2502 = -1.*t962*t1148;
  t2522 = t2481 + t2502;
  t2238 = t775*t1284*t80;
  t2288 = t1222*t1285;
  t2363 = t2238 + t2288;
  t2530 = Sin(var1[8]);
  t2612 = Cos(var1[9]);
  t2445 = t2235*t2363;
  t2546 = t2522*t2530;
  t2550 = t2445 + t2546;
  t2203 = Sin(var1[9]);
  t2643 = t2235*t2522;
  t2665 = -1.*t2363*t2530;
  t2681 = t2643 + t2665;
  t2813 = Cos(var1[10]);
  t2585 = -1.*t2203*t2550;
  t2690 = t2612*t2681;
  t2704 = t2585 + t2690;
  t2170 = Sin(var1[10]);
  t2815 = t2612*t2550;
  t2827 = t2203*t2681;
  t2864 = t2815 + t2827;
  t2961 = Cos(var1[11]);
  t2805 = t2170*t2704;
  t2922 = t2813*t2864;
  t2926 = t2805 + t2922;
  t2137 = Sin(var1[11]);
  t2975 = t2813*t2704;
  t3024 = -1.*t2170*t2864;
  t3048 = t2975 + t3024;
  t3088 = Cos(var1[12]);
  t2933 = -1.*t2137*t2926;
  t3053 = t2961*t3048;
  t3055 = t2933 + t3053;
  t2086 = Sin(var1[12]);
  t3090 = t2961*t2926;
  t3102 = t2137*t3048;
  t3114 = t3090 + t3102;
  t1428 = t775*t271;
  t1454 = t715*t815*t867;
  t1509 = t1428 + t1454;
  t1567 = t227*t1509;
  t1604 = t271*t715*t815;
  t1608 = -1.*t775*t867;
  t1626 = t1604 + t1608;
  t1640 = t1626*t1148;
  t1668 = t1567 + t1640;
  t3410 = t227*t1626;
  t3462 = -1.*t1509*t1148;
  t3472 = t3410 + t3462;
  t3335 = t1284*t80*t715;
  t3353 = t1668*t1285;
  t3382 = t3335 + t3353;
  t3390 = t2235*t3382;
  t3505 = t3472*t2530;
  t3513 = t3390 + t3505;
  t3541 = t2235*t3472;
  t3584 = -1.*t3382*t2530;
  t3592 = t3541 + t3584;
  t3529 = -1.*t2203*t3513;
  t3754 = t2612*t3592;
  t3778 = t3529 + t3754;
  t3785 = t2612*t3513;
  t3786 = t2203*t3592;
  t3849 = t3785 + t3786;
  t3783 = t2170*t3778;
  t3858 = t2813*t3849;
  t3890 = t3783 + t3858;
  t3954 = t2813*t3778;
  t3959 = -1.*t2170*t3849;
  t3962 = t3954 + t3959;
  t3931 = -1.*t2137*t3890;
  t3977 = t2961*t3962;
  t3988 = t3931 + t3977;
  t4029 = t2961*t3890;
  t4040 = t2137*t3962;
  t4055 = t4029 + t4040;
  t1891 = t1284*t227*t867;
  t1904 = t1284*t271*t1148;
  t1920 = t1891 + t1904;
  t4149 = t1284*t271*t227;
  t4150 = -1.*t1284*t867*t1148;
  t4152 = t4149 + t4150;
  t4133 = -1.*t80*t815;
  t4138 = t1920*t1285;
  t4141 = t4133 + t4138;
  t4143 = t2235*t4141;
  t4157 = t4152*t2530;
  t4183 = t4143 + t4157;
  t4246 = t2235*t4152;
  t4249 = -1.*t4141*t2530;
  t4311 = t4246 + t4249;
  t4194 = -1.*t2203*t4183;
  t4317 = t2612*t4311;
  t4320 = t4194 + t4317;
  t4383 = t2612*t4183;
  t4398 = t2203*t4311;
  t4429 = t4383 + t4398;
  t4351 = t2170*t4320;
  t4438 = t2813*t4429;
  t4439 = t4351 + t4438;
  t4462 = t2813*t4320;
  t4466 = -1.*t2170*t4429;
  t4475 = t4462 + t4466;
  t4443 = -1.*t2137*t4439;
  t4482 = t2961*t4475;
  t4485 = t4443 + t4482;
  t4497 = t2961*t4439;
  t4537 = t2137*t4475;
  t4539 = t4497 + t4537;
  t3086 = t2086*t3055;
  t3130 = t3088*t3114;
  t3217 = t3086 + t3130;
  t3278 = t3088*t3055;
  t3301 = -1.*t2086*t3114;
  t3309 = t3278 + t3301;
  t4024 = t2086*t3988;
  t4062 = t3088*t4055;
  t4067 = t4024 + t4062;
  t4073 = t3088*t3988;
  t4096 = -1.*t2086*t4055;
  t4100 = t4073 + t4096;
  t4491 = t2086*t4485;
  t4540 = t3088*t4539;
  t4558 = t4491 + t4540;
  t4574 = t3088*t4485;
  t4590 = -1.*t2086*t4539;
  t4594 = t4574 + t4590;
  p_output1[0]=t1284*t1285*t775 - 1.*t1222*t80;
  p_output1[1]=t1284*t1285*t715 - 1.*t1668*t80;
  p_output1[2]=-1.*t1920*t80 - 1.*t1285*t815;
  p_output1[3]=0.642788*t3217 + 0.766044*t3309;
  p_output1[4]=0.642788*t4067 + 0.766044*t4100;
  p_output1[5]=0.642788*t4558 + 0.766044*t4594;
  p_output1[6]=-0.766044*t3217 + 0.642788*t3309;
  p_output1[7]=-0.766044*t4067 + 0.642788*t4100;
  p_output1[8]=-0.766044*t4558 + 0.642788*t4594;
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
