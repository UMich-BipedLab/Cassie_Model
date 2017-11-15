/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:03 GMT-05:00
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
  double t53;
  double t1417;
  double t1723;
  double t1445;
  double t1731;
  double t58;
  double t60;
  double t136;
  double t1183;
  double t1279;
  double t1711;
  double t1783;
  double t1886;
  double t1939;
  double t2120;
  double t2285;
  double t2322;
  double t55;
  double t2671;
  double t2681;
  double t2688;
  double t2717;
  double t2737;
  double t2824;
  double t2842;
  double t2879;
  double t2890;
  double t2891;
  double t3029;
  double t3039;
  double t3042;
  double t3066;
  double t3069;
  double t3074;
  double t3168;
  double t3207;
  double t3269;
  double t3279;
  double t3341;
  double t3356;
  double t3366;
  double t3415;
  double t3450;
  double t3465;
  double t3512;
  double t3568;
  double t3573;
  double t3575;
  double t3675;
  double t3683;
  double t3694;
  double t3724;
  double t3733;
  double t3750;
  double t3783;
  double t3825;
  double t3829;
  double t3832;
  double t3896;
  double t3903;
  double t3910;
  double t3938;
  double t3957;
  double t3983;
  double t3991;
  double t4032;
  double t4038;
  double t4067;
  double t4135;
  double t4140;
  double t4145;
  double t998;
  double t1207;
  double t1211;
  double t1378;
  double t1407;
  double t1981;
  double t2071;
  double t2102;
  double t2113;
  double t2400;
  double t2572;
  double t2576;
  double t4253;
  double t4255;
  double t4264;
  double t4267;
  double t4284;
  double t4321;
  double t2838;
  double t2847;
  double t2863;
  double t4336;
  double t4338;
  double t4348;
  double t2994;
  double t2995;
  double t3009;
  double t3077;
  double t3190;
  double t3201;
  double t4368;
  double t4369;
  double t4384;
  double t4457;
  double t4460;
  double t4463;
  double t3290;
  double t3291;
  double t3310;
  double t3499;
  double t3551;
  double t3559;
  double t4468;
  double t4476;
  double t4551;
  double t4589;
  double t4597;
  double t4623;
  double t3624;
  double t3630;
  double t3641;
  double t3768;
  double t3812;
  double t3824;
  double t4645;
  double t4654;
  double t4658;
  double t4661;
  double t4662;
  double t4664;
  double t3845;
  double t3875;
  double t3879;
  double t3984;
  double t3998;
  double t4015;
  double t4670;
  double t4671;
  double t4672;
  double t4678;
  double t4679;
  double t4681;
  double t4114;
  double t4121;
  double t4123;
  double t4686;
  double t4690;
  double t4691;
  double t4701;
  double t4706;
  double t4712;
  double t4739;
  double t4740;
  double t4741;
  double t4743;
  double t4746;
  double t4747;
  double t4756;
  double t4761;
  double t4762;
  double t4774;
  double t4776;
  double t4780;
  double t4786;
  double t4788;
  double t4789;
  double t4796;
  double t4799;
  double t4805;
  double t4811;
  double t4812;
  double t4814;
  double t4816;
  double t4818;
  double t4822;
  double t4825;
  double t4827;
  double t4828;
  double t4834;
  double t4836;
  double t4839;
  double t4842;
  double t4843;
  double t4872;
  t53 = Cos(var1[3]);
  t1417 = Cos(var1[5]);
  t1723 = Sin(var1[3]);
  t1445 = Sin(var1[4]);
  t1731 = Sin(var1[5]);
  t58 = Cos(var1[14]);
  t60 = -1.*t58;
  t136 = 1. + t60;
  t1183 = Sin(var1[14]);
  t1279 = Sin(var1[13]);
  t1711 = t53*t1417*t1445;
  t1783 = t1723*t1731;
  t1886 = t1711 + t1783;
  t1939 = Cos(var1[13]);
  t2120 = -1.*t1417*t1723;
  t2285 = t53*t1445*t1731;
  t2322 = t2120 + t2285;
  t55 = Cos(var1[4]);
  t2671 = t1279*t1886;
  t2681 = t1939*t2322;
  t2688 = t2671 + t2681;
  t2717 = Cos(var1[15]);
  t2737 = -1.*t2717;
  t2824 = 1. + t2737;
  t2842 = Sin(var1[15]);
  t2879 = t1939*t1886;
  t2890 = -1.*t1279*t2322;
  t2891 = t2879 + t2890;
  t3029 = t58*t53*t55;
  t3039 = t1183*t2688;
  t3042 = t3029 + t3039;
  t3066 = Cos(var1[16]);
  t3069 = -1.*t3066;
  t3074 = 1. + t3069;
  t3168 = Sin(var1[16]);
  t3207 = t2842*t2891;
  t3269 = t2717*t3042;
  t3279 = t3207 + t3269;
  t3341 = t2717*t2891;
  t3356 = -1.*t2842*t3042;
  t3366 = t3341 + t3356;
  t3415 = Cos(var1[17]);
  t3450 = -1.*t3415;
  t3465 = 1. + t3450;
  t3512 = Sin(var1[17]);
  t3568 = -1.*t3168*t3279;
  t3573 = t3066*t3366;
  t3575 = t3568 + t3573;
  t3675 = t3066*t3279;
  t3683 = t3168*t3366;
  t3694 = t3675 + t3683;
  t3724 = Cos(var1[18]);
  t3733 = -1.*t3724;
  t3750 = 1. + t3733;
  t3783 = Sin(var1[18]);
  t3825 = t3512*t3575;
  t3829 = t3415*t3694;
  t3832 = t3825 + t3829;
  t3896 = t3415*t3575;
  t3903 = -1.*t3512*t3694;
  t3910 = t3896 + t3903;
  t3938 = Cos(var1[19]);
  t3957 = -1.*t3938;
  t3983 = 1. + t3957;
  t3991 = Sin(var1[19]);
  t4032 = -1.*t3783*t3832;
  t4038 = t3724*t3910;
  t4067 = t4032 + t4038;
  t4135 = t3724*t3832;
  t4140 = t3783*t3910;
  t4145 = t4135 + t4140;
  t998 = -0.049*t136;
  t1207 = -0.135*t1183;
  t1211 = 0. + t998 + t1207;
  t1378 = 0.135*t1279;
  t1407 = 0. + t1378;
  t1981 = -1.*t1939;
  t2071 = 1. + t1981;
  t2102 = -0.135*t2071;
  t2113 = 0. + t2102;
  t2400 = -0.135*t136;
  t2572 = 0.049*t1183;
  t2576 = 0. + t2400 + t2572;
  t4253 = t1417*t1723*t1445;
  t4255 = -1.*t53*t1731;
  t4264 = t4253 + t4255;
  t4267 = t53*t1417;
  t4284 = t1723*t1445*t1731;
  t4321 = t4267 + t4284;
  t2838 = -0.09*t2824;
  t2847 = 0.049*t2842;
  t2863 = 0. + t2838 + t2847;
  t4336 = t1279*t4264;
  t4338 = t1939*t4321;
  t4348 = t4336 + t4338;
  t2994 = -0.049*t2824;
  t2995 = -0.09*t2842;
  t3009 = 0. + t2994 + t2995;
  t3077 = -0.049*t3074;
  t3190 = -0.21*t3168;
  t3201 = 0. + t3077 + t3190;
  t4368 = t1939*t4264;
  t4369 = -1.*t1279*t4321;
  t4384 = t4368 + t4369;
  t4457 = t58*t55*t1723;
  t4460 = t1183*t4348;
  t4463 = t4457 + t4460;
  t3290 = -0.21*t3074;
  t3291 = 0.049*t3168;
  t3310 = 0. + t3290 + t3291;
  t3499 = -0.2707*t3465;
  t3551 = 0.0016*t3512;
  t3559 = 0. + t3499 + t3551;
  t4468 = t2842*t4384;
  t4476 = t2717*t4463;
  t4551 = t4468 + t4476;
  t4589 = t2717*t4384;
  t4597 = -1.*t2842*t4463;
  t4623 = t4589 + t4597;
  t3624 = -0.0016*t3465;
  t3630 = -0.2707*t3512;
  t3641 = 0. + t3624 + t3630;
  t3768 = 0.0184*t3750;
  t3812 = -0.7055*t3783;
  t3824 = 0. + t3768 + t3812;
  t4645 = -1.*t3168*t4551;
  t4654 = t3066*t4623;
  t4658 = t4645 + t4654;
  t4661 = t3066*t4551;
  t4662 = t3168*t4623;
  t4664 = t4661 + t4662;
  t3845 = -0.7055*t3750;
  t3875 = -0.0184*t3783;
  t3879 = 0. + t3845 + t3875;
  t3984 = -1.1135*t3983;
  t3998 = 0.0216*t3991;
  t4015 = 0. + t3984 + t3998;
  t4670 = t3512*t4658;
  t4671 = t3415*t4664;
  t4672 = t4670 + t4671;
  t4678 = t3415*t4658;
  t4679 = -1.*t3512*t4664;
  t4681 = t4678 + t4679;
  t4114 = -0.0216*t3983;
  t4121 = -1.1135*t3991;
  t4123 = 0. + t4114 + t4121;
  t4686 = -1.*t3783*t4672;
  t4690 = t3724*t4681;
  t4691 = t4686 + t4690;
  t4701 = t3724*t4672;
  t4706 = t3783*t4681;
  t4712 = t4701 + t4706;
  t4739 = t55*t1417*t1279;
  t4740 = t1939*t55*t1731;
  t4741 = t4739 + t4740;
  t4743 = t1939*t55*t1417;
  t4746 = -1.*t55*t1279*t1731;
  t4747 = t4743 + t4746;
  t4756 = -1.*t58*t1445;
  t4761 = t1183*t4741;
  t4762 = t4756 + t4761;
  t4774 = t2842*t4747;
  t4776 = t2717*t4762;
  t4780 = t4774 + t4776;
  t4786 = t2717*t4747;
  t4788 = -1.*t2842*t4762;
  t4789 = t4786 + t4788;
  t4796 = -1.*t3168*t4780;
  t4799 = t3066*t4789;
  t4805 = t4796 + t4799;
  t4811 = t3066*t4780;
  t4812 = t3168*t4789;
  t4814 = t4811 + t4812;
  t4816 = t3512*t4805;
  t4818 = t3415*t4814;
  t4822 = t4816 + t4818;
  t4825 = t3415*t4805;
  t4827 = -1.*t3512*t4814;
  t4828 = t4825 + t4827;
  t4834 = -1.*t3783*t4822;
  t4836 = t3724*t4828;
  t4839 = t4834 + t4836;
  t4842 = t3724*t4822;
  t4843 = t3783*t4828;
  t4872 = t4842 + t4843;
  p_output1[0]=0. + t1407*t1886 + t2113*t2322 + t2576*t2688 + t2863*t2891 + t3009*t3042 + t3201*t3279 + t3310*t3366 + t3559*t3575 + t3641*t3694 + t3824*t3832 + t3879*t3910 + t4015*t4067 + t4123*t4145 + 0.0306*(t3991*t4067 + t3938*t4145) - 1.1312*(t3938*t4067 - 1.*t3991*t4145) + t1211*t53*t55 - 0.1305*(-1.*t1183*t53*t55 + t2688*t58) + var1[0];
  p_output1[1]=0. + t1407*t4264 + t2113*t4321 + t2576*t4348 + t2863*t4384 + t3009*t4463 + t3201*t4551 + t3310*t4623 + t3559*t4658 + t3641*t4664 + t3824*t4672 + t3879*t4681 + t4015*t4691 + t4123*t4712 + 0.0306*(t3991*t4691 + t3938*t4712) - 1.1312*(t3938*t4691 - 1.*t3991*t4712) + t1211*t1723*t55 - 0.1305*(-1.*t1183*t1723*t55 + t4348*t58) + var1[1];
  p_output1[2]=0. - 1.*t1211*t1445 + t2576*t4741 + t2863*t4747 + t3009*t4762 + t3201*t4780 + t3310*t4789 + t3559*t4805 + t3641*t4814 + t3824*t4822 + t3879*t4828 + t4015*t4839 + t4123*t4872 + 0.0306*(t3991*t4839 + t3938*t4872) - 1.1312*(t3938*t4839 - 1.*t3991*t4872) + t1407*t1417*t55 + t1731*t2113*t55 - 0.1305*(t1183*t1445 + t4741*t58) + var1[2];
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

#include "p_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
