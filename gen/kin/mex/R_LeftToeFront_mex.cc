/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:06 GMT-04:00
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
  double t572;
  double t497;
  double t589;
  double t543;
  double t626;
  double t159;
  double t479;
  double t894;
  double t966;
  double t972;
  double t546;
  double t659;
  double t672;
  double t691;
  double t707;
  double t747;
  double t819;
  double t923;
  double t945;
  double t2151;
  double t2218;
  double t2265;
  double t2280;
  double t2168;
  double t2178;
  double t2181;
  double t2284;
  double t2431;
  double t2212;
  double t2289;
  double t2297;
  double t2107;
  double t2468;
  double t2499;
  double t2512;
  double t2657;
  double t2310;
  double t2561;
  double t2579;
  double t2034;
  double t2714;
  double t2741;
  double t2751;
  double t2879;
  double t2590;
  double t2761;
  double t2857;
  double t1929;
  double t2920;
  double t2942;
  double t2948;
  double t3049;
  double t2865;
  double t2969;
  double t3014;
  double t1914;
  double t3091;
  double t3133;
  double t3141;
  double t1153;
  double t1169;
  double t1194;
  double t1281;
  double t1361;
  double t1403;
  double t1436;
  double t1437;
  double t1469;
  double t3469;
  double t3487;
  double t3490;
  double t3346;
  double t3386;
  double t3438;
  double t3449;
  double t3496;
  double t3511;
  double t3532;
  double t3533;
  double t3545;
  double t3522;
  double t3558;
  double t3570;
  double t3637;
  double t3654;
  double t3661;
  double t3580;
  double t3675;
  double t3694;
  double t3712;
  double t3716;
  double t3729;
  double t3707;
  double t3730;
  double t3772;
  double t3788;
  double t3855;
  double t3921;
  double t1609;
  double t1782;
  double t1796;
  double t4165;
  double t4178;
  double t4189;
  double t4107;
  double t4125;
  double t4131;
  double t4144;
  double t4201;
  double t4227;
  double t4315;
  double t4343;
  double t4346;
  double t4254;
  double t4390;
  double t4412;
  double t4420;
  double t4421;
  double t4423;
  double t4419;
  double t4467;
  double t4518;
  double t4528;
  double t4563;
  double t4580;
  double t4524;
  double t4591;
  double t4608;
  double t4621;
  double t4639;
  double t4640;
  double t3018;
  double t3148;
  double t3188;
  double t3261;
  double t3269;
  double t3290;
  double t3774;
  double t3927;
  double t3948;
  double t3979;
  double t3982;
  double t4056;
  double t4609;
  double t4652;
  double t4671;
  double t4718;
  double t4736;
  double t4743;
  t572 = Cos(var1[3]);
  t497 = Cos(var1[5]);
  t589 = Sin(var1[4]);
  t543 = Sin(var1[3]);
  t626 = Sin(var1[5]);
  t159 = Cos(var1[7]);
  t479 = Cos(var1[6]);
  t894 = Sin(var1[6]);
  t966 = Cos(var1[4]);
  t972 = Sin(var1[7]);
  t546 = -1.*t497*t543;
  t659 = t572*t589*t626;
  t672 = t546 + t659;
  t691 = t479*t672;
  t707 = t572*t497*t589;
  t747 = t543*t626;
  t819 = t707 + t747;
  t923 = t819*t894;
  t945 = t691 + t923;
  t2151 = Cos(var1[8]);
  t2218 = t479*t819;
  t2265 = -1.*t672*t894;
  t2280 = t2218 + t2265;
  t2168 = t572*t966*t159;
  t2178 = t945*t972;
  t2181 = t2168 + t2178;
  t2284 = Sin(var1[8]);
  t2431 = Cos(var1[9]);
  t2212 = t2151*t2181;
  t2289 = t2280*t2284;
  t2297 = t2212 + t2289;
  t2107 = Sin(var1[9]);
  t2468 = t2151*t2280;
  t2499 = -1.*t2181*t2284;
  t2512 = t2468 + t2499;
  t2657 = Cos(var1[10]);
  t2310 = -1.*t2107*t2297;
  t2561 = t2431*t2512;
  t2579 = t2310 + t2561;
  t2034 = Sin(var1[10]);
  t2714 = t2431*t2297;
  t2741 = t2107*t2512;
  t2751 = t2714 + t2741;
  t2879 = Cos(var1[11]);
  t2590 = t2034*t2579;
  t2761 = t2657*t2751;
  t2857 = t2590 + t2761;
  t1929 = Sin(var1[11]);
  t2920 = t2657*t2579;
  t2942 = -1.*t2034*t2751;
  t2948 = t2920 + t2942;
  t3049 = Cos(var1[12]);
  t2865 = -1.*t1929*t2857;
  t2969 = t2879*t2948;
  t3014 = t2865 + t2969;
  t1914 = Sin(var1[12]);
  t3091 = t2879*t2857;
  t3133 = t1929*t2948;
  t3141 = t3091 + t3133;
  t1153 = t572*t497;
  t1169 = t543*t589*t626;
  t1194 = t1153 + t1169;
  t1281 = t479*t1194;
  t1361 = t497*t543*t589;
  t1403 = -1.*t572*t626;
  t1436 = t1361 + t1403;
  t1437 = t1436*t894;
  t1469 = t1281 + t1437;
  t3469 = t479*t1436;
  t3487 = -1.*t1194*t894;
  t3490 = t3469 + t3487;
  t3346 = t966*t159*t543;
  t3386 = t1469*t972;
  t3438 = t3346 + t3386;
  t3449 = t2151*t3438;
  t3496 = t3490*t2284;
  t3511 = t3449 + t3496;
  t3532 = t2151*t3490;
  t3533 = -1.*t3438*t2284;
  t3545 = t3532 + t3533;
  t3522 = -1.*t2107*t3511;
  t3558 = t2431*t3545;
  t3570 = t3522 + t3558;
  t3637 = t2431*t3511;
  t3654 = t2107*t3545;
  t3661 = t3637 + t3654;
  t3580 = t2034*t3570;
  t3675 = t2657*t3661;
  t3694 = t3580 + t3675;
  t3712 = t2657*t3570;
  t3716 = -1.*t2034*t3661;
  t3729 = t3712 + t3716;
  t3707 = -1.*t1929*t3694;
  t3730 = t2879*t3729;
  t3772 = t3707 + t3730;
  t3788 = t2879*t3694;
  t3855 = t1929*t3729;
  t3921 = t3788 + t3855;
  t1609 = t966*t479*t626;
  t1782 = t966*t497*t894;
  t1796 = t1609 + t1782;
  t4165 = t966*t497*t479;
  t4178 = -1.*t966*t626*t894;
  t4189 = t4165 + t4178;
  t4107 = -1.*t159*t589;
  t4125 = t1796*t972;
  t4131 = t4107 + t4125;
  t4144 = t2151*t4131;
  t4201 = t4189*t2284;
  t4227 = t4144 + t4201;
  t4315 = t2151*t4189;
  t4343 = -1.*t4131*t2284;
  t4346 = t4315 + t4343;
  t4254 = -1.*t2107*t4227;
  t4390 = t2431*t4346;
  t4412 = t4254 + t4390;
  t4420 = t2431*t4227;
  t4421 = t2107*t4346;
  t4423 = t4420 + t4421;
  t4419 = t2034*t4412;
  t4467 = t2657*t4423;
  t4518 = t4419 + t4467;
  t4528 = t2657*t4412;
  t4563 = -1.*t2034*t4423;
  t4580 = t4528 + t4563;
  t4524 = -1.*t1929*t4518;
  t4591 = t2879*t4580;
  t4608 = t4524 + t4591;
  t4621 = t2879*t4518;
  t4639 = t1929*t4580;
  t4640 = t4621 + t4639;
  t3018 = t1914*t3014;
  t3148 = t3049*t3141;
  t3188 = t3018 + t3148;
  t3261 = t3049*t3014;
  t3269 = -1.*t1914*t3141;
  t3290 = t3261 + t3269;
  t3774 = t1914*t3772;
  t3927 = t3049*t3921;
  t3948 = t3774 + t3927;
  t3979 = t3049*t3772;
  t3982 = -1.*t1914*t3921;
  t4056 = t3979 + t3982;
  t4609 = t1914*t4608;
  t4652 = t3049*t4640;
  t4671 = t4609 + t4652;
  t4718 = t3049*t4608;
  t4736 = -1.*t1914*t4640;
  t4743 = t4718 + t4736;
  p_output1[0]=-1.*t159*t945 + t572*t966*t972;
  p_output1[1]=-1.*t1469*t159 + t543*t966*t972;
  p_output1[2]=-1.*t159*t1796 - 1.*t589*t972;
  p_output1[3]=0.642788*t3188 + 0.766044*t3290;
  p_output1[4]=0.642788*t3948 + 0.766044*t4056;
  p_output1[5]=0.642788*t4671 + 0.766044*t4743;
  p_output1[6]=-0.766044*t3188 + 0.642788*t3290;
  p_output1[7]=-0.766044*t3948 + 0.642788*t4056;
  p_output1[8]=-0.766044*t4671 + 0.642788*t4743;
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

#include "R_LeftToeFront_mex.hh"

namespace SymExpression
{

void R_LeftToeFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
