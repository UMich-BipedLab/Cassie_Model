/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:42 GMT-04:00
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
  double t363;
  double t824;
  double t914;
  double t869;
  double t931;
  double t472;
  double t612;
  double t691;
  double t700;
  double t1064;
  double t885;
  double t984;
  double t1011;
  double t1073;
  double t1088;
  double t1188;
  double t1030;
  double t1191;
  double t1273;
  double t2716;
  double t2536;
  double t2654;
  double t2703;
  double t2523;
  double t2719;
  double t2730;
  double t2759;
  double t2843;
  double t2705;
  double t2796;
  double t2815;
  double t2500;
  double t2886;
  double t2905;
  double t2919;
  double t3063;
  double t2842;
  double t2951;
  double t2954;
  double t2472;
  double t3114;
  double t3127;
  double t3153;
  double t3329;
  double t2979;
  double t3173;
  double t3178;
  double t2466;
  double t3379;
  double t3397;
  double t3433;
  double t3448;
  double t3213;
  double t3435;
  double t3441;
  double t2459;
  double t3550;
  double t3646;
  double t3687;
  double t1635;
  double t1659;
  double t1672;
  double t1775;
  double t1857;
  double t1866;
  double t1771;
  double t1932;
  double t2059;
  double t3851;
  double t3918;
  double t3944;
  double t3968;
  double t3985;
  double t3989;
  double t3957;
  double t4030;
  double t4031;
  double t4118;
  double t4130;
  double t4142;
  double t4062;
  double t4156;
  double t4171;
  double t4185;
  double t4194;
  double t4228;
  double t4178;
  double t4240;
  double t4248;
  double t4264;
  double t4342;
  double t4358;
  double t4261;
  double t4403;
  double t4439;
  double t4503;
  double t4533;
  double t4566;
  double t2213;
  double t2256;
  double t2424;
  double t4616;
  double t4619;
  double t4620;
  double t4626;
  double t4628;
  double t4632;
  double t4624;
  double t4633;
  double t4636;
  double t4648;
  double t4655;
  double t4657;
  double t4646;
  double t4662;
  double t4664;
  double t4681;
  double t4683;
  double t4687;
  double t4680;
  double t4688;
  double t4693;
  double t4705;
  double t4706;
  double t4708;
  double t4699;
  double t4709;
  double t4715;
  double t4734;
  double t4735;
  double t4738;
  double t3444;
  double t3712;
  double t3746;
  double t3768;
  double t3810;
  double t3811;
  double t4499;
  double t4570;
  double t4573;
  double t4597;
  double t4599;
  double t4601;
  double t4731;
  double t4739;
  double t4742;
  double t4750;
  double t4751;
  double t4752;
  t363 = Cos(var1[3]);
  t824 = Cos(var1[5]);
  t914 = Sin(var1[3]);
  t869 = Sin(var1[4]);
  t931 = Sin(var1[5]);
  t472 = Cos(var1[4]);
  t612 = Sin(var1[14]);
  t691 = Cos(var1[14]);
  t700 = Sin(var1[13]);
  t1064 = Cos(var1[13]);
  t885 = t363*t824*t869;
  t984 = t914*t931;
  t1011 = t885 + t984;
  t1073 = -1.*t824*t914;
  t1088 = t363*t869*t931;
  t1188 = t1073 + t1088;
  t1030 = t700*t1011;
  t1191 = t1064*t1188;
  t1273 = t1030 + t1191;
  t2716 = Cos(var1[15]);
  t2536 = t1064*t1011;
  t2654 = -1.*t700*t1188;
  t2703 = t2536 + t2654;
  t2523 = Sin(var1[15]);
  t2719 = t691*t363*t472;
  t2730 = t612*t1273;
  t2759 = t2719 + t2730;
  t2843 = Cos(var1[16]);
  t2705 = t2523*t2703;
  t2796 = t2716*t2759;
  t2815 = t2705 + t2796;
  t2500 = Sin(var1[16]);
  t2886 = t2716*t2703;
  t2905 = -1.*t2523*t2759;
  t2919 = t2886 + t2905;
  t3063 = Cos(var1[17]);
  t2842 = -1.*t2500*t2815;
  t2951 = t2843*t2919;
  t2954 = t2842 + t2951;
  t2472 = Sin(var1[17]);
  t3114 = t2843*t2815;
  t3127 = t2500*t2919;
  t3153 = t3114 + t3127;
  t3329 = Cos(var1[18]);
  t2979 = t2472*t2954;
  t3173 = t3063*t3153;
  t3178 = t2979 + t3173;
  t2466 = Sin(var1[18]);
  t3379 = t3063*t2954;
  t3397 = -1.*t2472*t3153;
  t3433 = t3379 + t3397;
  t3448 = Cos(var1[19]);
  t3213 = -1.*t2466*t3178;
  t3435 = t3329*t3433;
  t3441 = t3213 + t3435;
  t2459 = Sin(var1[19]);
  t3550 = t3329*t3178;
  t3646 = t2466*t3433;
  t3687 = t3550 + t3646;
  t1635 = t824*t914*t869;
  t1659 = -1.*t363*t931;
  t1672 = t1635 + t1659;
  t1775 = t363*t824;
  t1857 = t914*t869*t931;
  t1866 = t1775 + t1857;
  t1771 = t700*t1672;
  t1932 = t1064*t1866;
  t2059 = t1771 + t1932;
  t3851 = t1064*t1672;
  t3918 = -1.*t700*t1866;
  t3944 = t3851 + t3918;
  t3968 = t691*t472*t914;
  t3985 = t612*t2059;
  t3989 = t3968 + t3985;
  t3957 = t2523*t3944;
  t4030 = t2716*t3989;
  t4031 = t3957 + t4030;
  t4118 = t2716*t3944;
  t4130 = -1.*t2523*t3989;
  t4142 = t4118 + t4130;
  t4062 = -1.*t2500*t4031;
  t4156 = t2843*t4142;
  t4171 = t4062 + t4156;
  t4185 = t2843*t4031;
  t4194 = t2500*t4142;
  t4228 = t4185 + t4194;
  t4178 = t2472*t4171;
  t4240 = t3063*t4228;
  t4248 = t4178 + t4240;
  t4264 = t3063*t4171;
  t4342 = -1.*t2472*t4228;
  t4358 = t4264 + t4342;
  t4261 = -1.*t2466*t4248;
  t4403 = t3329*t4358;
  t4439 = t4261 + t4403;
  t4503 = t3329*t4248;
  t4533 = t2466*t4358;
  t4566 = t4503 + t4533;
  t2213 = t472*t824*t700;
  t2256 = t1064*t472*t931;
  t2424 = t2213 + t2256;
  t4616 = t1064*t472*t824;
  t4619 = -1.*t472*t700*t931;
  t4620 = t4616 + t4619;
  t4626 = -1.*t691*t869;
  t4628 = t612*t2424;
  t4632 = t4626 + t4628;
  t4624 = t2523*t4620;
  t4633 = t2716*t4632;
  t4636 = t4624 + t4633;
  t4648 = t2716*t4620;
  t4655 = -1.*t2523*t4632;
  t4657 = t4648 + t4655;
  t4646 = -1.*t2500*t4636;
  t4662 = t2843*t4657;
  t4664 = t4646 + t4662;
  t4681 = t2843*t4636;
  t4683 = t2500*t4657;
  t4687 = t4681 + t4683;
  t4680 = t2472*t4664;
  t4688 = t3063*t4687;
  t4693 = t4680 + t4688;
  t4705 = t3063*t4664;
  t4706 = -1.*t2472*t4687;
  t4708 = t4705 + t4706;
  t4699 = -1.*t2466*t4693;
  t4709 = t3329*t4708;
  t4715 = t4699 + t4709;
  t4734 = t3329*t4693;
  t4735 = t2466*t4708;
  t4738 = t4734 + t4735;
  t3444 = t2459*t3441;
  t3712 = t3448*t3687;
  t3746 = t3444 + t3712;
  t3768 = t3448*t3441;
  t3810 = -1.*t2459*t3687;
  t3811 = t3768 + t3810;
  t4499 = t2459*t4439;
  t4570 = t3448*t4566;
  t4573 = t4499 + t4570;
  t4597 = t3448*t4439;
  t4599 = -1.*t2459*t4566;
  t4601 = t4597 + t4599;
  t4731 = t2459*t4715;
  t4739 = t3448*t4738;
  t4742 = t4731 + t4739;
  t4750 = t3448*t4715;
  t4751 = -1.*t2459*t4738;
  t4752 = t4750 + t4751;
  p_output1[0]=t363*t472*t612 - 1.*t1273*t691;
  p_output1[1]=-1.*t2059*t691 + t472*t612*t914;
  p_output1[2]=-1.*t2424*t691 - 1.*t612*t869;
  p_output1[3]=0.642788*t3746 + 0.766044*t3811;
  p_output1[4]=0.642788*t4573 + 0.766044*t4601;
  p_output1[5]=0.642788*t4742 + 0.766044*t4752;
  p_output1[6]=-0.766044*t3746 + 0.642788*t3811;
  p_output1[7]=-0.766044*t4573 + 0.642788*t4601;
  p_output1[8]=-0.766044*t4742 + 0.642788*t4752;
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
