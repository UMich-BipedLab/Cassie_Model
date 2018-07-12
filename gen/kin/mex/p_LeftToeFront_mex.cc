/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:02 GMT-04:00
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
  double t1815;
  double t1604;
  double t1904;
  double t1669;
  double t2080;
  double t26;
  double t1769;
  double t2128;
  double t2235;
  double t2336;
  double t2445;
  double t2522;
  double t2534;
  double t2836;
  double t2930;
  double t2977;
  double t3053;
  double t2805;
  double t2815;
  double t2827;
  double t3217;
  double t3786;
  double t3853;
  double t3858;
  double t3962;
  double t3687;
  double t3783;
  double t3785;
  double t4112;
  double t4138;
  double t4143;
  double t4383;
  double t4438;
  double t4462;
  double t4485;
  double t4540;
  double t4558;
  double t4574;
  double t4726;
  double t4727;
  double t4729;
  double t4756;
  double t4758;
  double t4773;
  double t4796;
  double t4804;
  double t4807;
  double t4847;
  double t4873;
  double t4875;
  double t4886;
  double t4926;
  double t4927;
  double t4933;
  double t4958;
  double t5035;
  double t5041;
  double t5044;
  double t5126;
  double t5131;
  double t5133;
  double t5150;
  double t5159;
  double t5169;
  double t5179;
  double t5220;
  double t5226;
  double t5228;
  double t5252;
  double t5254;
  double t5260;
  double t205;
  double t679;
  double t1441;
  double t1579;
  double t2538;
  double t2690;
  double t5291;
  double t5292;
  double t5295;
  double t5305;
  double t5307;
  double t5310;
  double t3008;
  double t3055;
  double t3088;
  double t3248;
  double t3308;
  double t3335;
  double t5322;
  double t5327;
  double t5328;
  double t3954;
  double t3988;
  double t4040;
  double t4149;
  double t4152;
  double t4157;
  double t4475;
  double t4491;
  double t4537;
  double t5376;
  double t5381;
  double t5387;
  double t5396;
  double t5401;
  double t5402;
  double t4646;
  double t4652;
  double t4681;
  double t4794;
  double t4801;
  double t4803;
  double t5405;
  double t5419;
  double t5428;
  double t5441;
  double t5443;
  double t5444;
  double t4858;
  double t4865;
  double t4870;
  double t4938;
  double t5007;
  double t5025;
  double t5451;
  double t5452;
  double t5455;
  double t5460;
  double t5462;
  double t5474;
  double t5070;
  double t5095;
  double t5120;
  double t5177;
  double t5201;
  double t5213;
  double t5482;
  double t5486;
  double t5496;
  double t5513;
  double t5515;
  double t5527;
  double t5240;
  double t5242;
  double t5243;
  double t5538;
  double t5541;
  double t5543;
  double t5554;
  double t5555;
  double t5557;
  double t5629;
  double t5634;
  double t5638;
  double t5682;
  double t5703;
  double t5717;
  double t5732;
  double t5747;
  double t5775;
  double t5787;
  double t5791;
  double t5794;
  double t5806;
  double t5807;
  double t5809;
  double t5828;
  double t5850;
  double t5853;
  double t5874;
  double t5875;
  double t5877;
  double t5880;
  double t5882;
  double t5885;
  double t5894;
  double t5902;
  double t5918;
  double t5923;
  double t5937;
  double t5986;
  double t5993;
  double t5999;
  double t6009;
  t1815 = Cos(var1[3]);
  t1604 = Cos(var1[5]);
  t1904 = Sin(var1[4]);
  t1669 = Sin(var1[3]);
  t2080 = Sin(var1[5]);
  t26 = Cos(var1[6]);
  t1769 = -1.*t1604*t1669;
  t2128 = t1815*t1904*t2080;
  t2235 = t1769 + t2128;
  t2336 = t1815*t1604*t1904;
  t2445 = t1669*t2080;
  t2522 = t2336 + t2445;
  t2534 = Sin(var1[6]);
  t2836 = Cos(var1[7]);
  t2930 = -1.*t2836;
  t2977 = 1. + t2930;
  t3053 = Sin(var1[7]);
  t2805 = t26*t2235;
  t2815 = t2522*t2534;
  t2827 = t2805 + t2815;
  t3217 = Cos(var1[4]);
  t3786 = Cos(var1[8]);
  t3853 = -1.*t3786;
  t3858 = 1. + t3853;
  t3962 = Sin(var1[8]);
  t3687 = t1815*t3217*t2836;
  t3783 = t2827*t3053;
  t3785 = t3687 + t3783;
  t4112 = t26*t2522;
  t4138 = -1.*t2235*t2534;
  t4143 = t4112 + t4138;
  t4383 = Cos(var1[9]);
  t4438 = -1.*t4383;
  t4462 = 1. + t4438;
  t4485 = Sin(var1[9]);
  t4540 = t3786*t3785;
  t4558 = t4143*t3962;
  t4574 = t4540 + t4558;
  t4726 = t3786*t4143;
  t4727 = -1.*t3785*t3962;
  t4729 = t4726 + t4727;
  t4756 = Cos(var1[10]);
  t4758 = -1.*t4756;
  t4773 = 1. + t4758;
  t4796 = Sin(var1[10]);
  t4804 = -1.*t4485*t4574;
  t4807 = t4383*t4729;
  t4847 = t4804 + t4807;
  t4873 = t4383*t4574;
  t4875 = t4485*t4729;
  t4886 = t4873 + t4875;
  t4926 = Cos(var1[11]);
  t4927 = -1.*t4926;
  t4933 = 1. + t4927;
  t4958 = Sin(var1[11]);
  t5035 = t4796*t4847;
  t5041 = t4756*t4886;
  t5044 = t5035 + t5041;
  t5126 = t4756*t4847;
  t5131 = -1.*t4796*t4886;
  t5133 = t5126 + t5131;
  t5150 = Cos(var1[12]);
  t5159 = -1.*t5150;
  t5169 = 1. + t5159;
  t5179 = Sin(var1[12]);
  t5220 = -1.*t4958*t5044;
  t5226 = t4926*t5133;
  t5228 = t5220 + t5226;
  t5252 = t4926*t5044;
  t5254 = t4958*t5133;
  t5260 = t5252 + t5254;
  t205 = -1.*t26;
  t679 = 1. + t205;
  t1441 = 0.135*t679;
  t1579 = 0. + t1441;
  t2538 = -0.135*t2534;
  t2690 = 0. + t2538;
  t5291 = t1815*t1604;
  t5292 = t1669*t1904*t2080;
  t5295 = t5291 + t5292;
  t5305 = t1604*t1669*t1904;
  t5307 = -1.*t1815*t2080;
  t5310 = t5305 + t5307;
  t3008 = 0.135*t2977;
  t3055 = 0.049*t3053;
  t3088 = 0. + t3008 + t3055;
  t3248 = -0.049*t2977;
  t3308 = 0.135*t3053;
  t3335 = 0. + t3248 + t3308;
  t5322 = t26*t5295;
  t5327 = t5310*t2534;
  t5328 = t5322 + t5327;
  t3954 = -0.049*t3858;
  t3988 = -0.09*t3962;
  t4040 = 0. + t3954 + t3988;
  t4149 = -0.09*t3858;
  t4152 = 0.049*t3962;
  t4157 = 0. + t4149 + t4152;
  t4475 = -0.049*t4462;
  t4491 = -0.21*t4485;
  t4537 = 0. + t4475 + t4491;
  t5376 = t3217*t2836*t1669;
  t5381 = t5328*t3053;
  t5387 = t5376 + t5381;
  t5396 = t26*t5310;
  t5401 = -1.*t5295*t2534;
  t5402 = t5396 + t5401;
  t4646 = -0.21*t4462;
  t4652 = 0.049*t4485;
  t4681 = 0. + t4646 + t4652;
  t4794 = -0.2707*t4773;
  t4801 = 0.0016*t4796;
  t4803 = 0. + t4794 + t4801;
  t5405 = t3786*t5387;
  t5419 = t5402*t3962;
  t5428 = t5405 + t5419;
  t5441 = t3786*t5402;
  t5443 = -1.*t5387*t3962;
  t5444 = t5441 + t5443;
  t4858 = -0.0016*t4773;
  t4865 = -0.2707*t4796;
  t4870 = 0. + t4858 + t4865;
  t4938 = 0.0184*t4933;
  t5007 = -0.7055*t4958;
  t5025 = 0. + t4938 + t5007;
  t5451 = -1.*t4485*t5428;
  t5452 = t4383*t5444;
  t5455 = t5451 + t5452;
  t5460 = t4383*t5428;
  t5462 = t4485*t5444;
  t5474 = t5460 + t5462;
  t5070 = -0.7055*t4933;
  t5095 = -0.0184*t4958;
  t5120 = 0. + t5070 + t5095;
  t5177 = -1.1135*t5169;
  t5201 = 0.0216*t5179;
  t5213 = 0. + t5177 + t5201;
  t5482 = t4796*t5455;
  t5486 = t4756*t5474;
  t5496 = t5482 + t5486;
  t5513 = t4756*t5455;
  t5515 = -1.*t4796*t5474;
  t5527 = t5513 + t5515;
  t5240 = -0.0216*t5169;
  t5242 = -1.1135*t5179;
  t5243 = 0. + t5240 + t5242;
  t5538 = -1.*t4958*t5496;
  t5541 = t4926*t5527;
  t5543 = t5538 + t5541;
  t5554 = t4926*t5496;
  t5555 = t4958*t5527;
  t5557 = t5554 + t5555;
  t5629 = t3217*t26*t2080;
  t5634 = t3217*t1604*t2534;
  t5638 = t5629 + t5634;
  t5682 = -1.*t2836*t1904;
  t5703 = t5638*t3053;
  t5717 = t5682 + t5703;
  t5732 = t3217*t1604*t26;
  t5747 = -1.*t3217*t2080*t2534;
  t5775 = t5732 + t5747;
  t5787 = t3786*t5717;
  t5791 = t5775*t3962;
  t5794 = t5787 + t5791;
  t5806 = t3786*t5775;
  t5807 = -1.*t5717*t3962;
  t5809 = t5806 + t5807;
  t5828 = -1.*t4485*t5794;
  t5850 = t4383*t5809;
  t5853 = t5828 + t5850;
  t5874 = t4383*t5794;
  t5875 = t4485*t5809;
  t5877 = t5874 + t5875;
  t5880 = t4796*t5853;
  t5882 = t4756*t5877;
  t5885 = t5880 + t5882;
  t5894 = t4756*t5853;
  t5902 = -1.*t4796*t5877;
  t5918 = t5894 + t5902;
  t5923 = -1.*t4958*t5885;
  t5937 = t4926*t5918;
  t5986 = t5923 + t5937;
  t5993 = t4926*t5885;
  t5999 = t4958*t5918;
  t6009 = t5993 + t5999;
  p_output1[0]=0. + t1579*t2235 + t2522*t2690 + t2827*t3088 + 0.1305*(t2827*t2836 - 1.*t1815*t3053*t3217) + t1815*t3217*t3335 + t3785*t4040 + t4143*t4157 + t4537*t4574 + t4681*t4729 + t4803*t4847 + t4870*t4886 + t5025*t5044 + t5120*t5133 + t5213*t5228 + t5243*t5260 + 0.088451*(t5179*t5228 + t5150*t5260) - 1.062256*(t5150*t5228 - 1.*t5179*t5260) + var1[0];
  p_output1[1]=0. + t1669*t3217*t3335 + t1579*t5295 + t2690*t5310 + t3088*t5328 + 0.1305*(-1.*t1669*t3053*t3217 + t2836*t5328) + t4040*t5387 + t4157*t5402 + t4537*t5428 + t4681*t5444 + t4803*t5455 + t4870*t5474 + t5025*t5496 + t5120*t5527 + t5213*t5543 + t5243*t5557 + 0.088451*(t5179*t5543 + t5150*t5557) - 1.062256*(t5150*t5543 - 1.*t5179*t5557) + var1[1];
  p_output1[2]=0. + t1579*t2080*t3217 + t1604*t2690*t3217 - 1.*t1904*t3335 + t3088*t5638 + 0.1305*(t1904*t3053 + t2836*t5638) + t4040*t5717 + t4157*t5775 + t4537*t5794 + t4681*t5809 + t4803*t5853 + t4870*t5877 + t5025*t5885 + t5120*t5918 + t5213*t5986 + t5243*t6009 + 0.088451*(t5179*t5986 + t5150*t6009) - 1.062256*(t5150*t5986 - 1.*t5179*t6009) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftToeFront_mex.hh"

namespace SymExpression
{

void p_LeftToeFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
