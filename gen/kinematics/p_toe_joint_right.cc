/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:30 GMT-04:00
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
  double t347;
  double t12027;
  double t12182;
  double t12081;
  double t12211;
  double t11843;
  double t12168;
  double t12215;
  double t12248;
  double t12286;
  double t12413;
  double t12434;
  double t12441;
  double t12570;
  double t12480;
  double t12519;
  double t12537;
  double t12447;
  double t12576;
  double t12579;
  double t12580;
  double t511;
  double t4434;
  double t6839;
  double t7937;
  double t364;
  double t12667;
  double t12671;
  double t12672;
  double t12586;
  double t12591;
  double t12595;
  double t12609;
  double t12621;
  double t12637;
  double t12641;
  double t12728;
  double t12729;
  double t12734;
  double t12736;
  double t12737;
  double t12740;
  double t12742;
  double t12747;
  double t12748;
  double t12749;
  double t12768;
  double t12769;
  double t12770;
  double t12776;
  double t12780;
  double t12782;
  double t12790;
  double t12812;
  double t12819;
  double t12836;
  double t12858;
  double t12867;
  double t12874;
  double t12878;
  double t12892;
  double t12896;
  double t12900;
  double t12903;
  double t12906;
  double t12911;
  double t12933;
  double t12936;
  double t12937;
  double t6942;
  double t8132;
  double t9297;
  double t11848;
  double t11996;
  double t12312;
  double t12331;
  double t12373;
  double t12405;
  double t12448;
  double t12449;
  double t12453;
  double t12476;
  double t12970;
  double t12971;
  double t12975;
  double t12979;
  double t12984;
  double t12985;
  double t12572;
  double t12573;
  double t12604;
  double t12612;
  double t12616;
  double t12987;
  double t12989;
  double t12990;
  double t12996;
  double t12997;
  double t12998;
  double t12648;
  double t12658;
  double t12663;
  double t13013;
  double t13016;
  double t13018;
  double t12709;
  double t12716;
  double t12724;
  double t12741;
  double t12743;
  double t12746;
  double t13006;
  double t13007;
  double t13008;
  double t13038;
  double t13039;
  double t13041;
  double t12756;
  double t12759;
  double t12760;
  double t12783;
  double t12795;
  double t12809;
  double t13050;
  double t13051;
  double t13052;
  double t13064;
  double t13071;
  double t13075;
  double t12842;
  double t12851;
  double t12853;
  double t12899;
  double t12901;
  double t12902;
  double t13081;
  double t13083;
  double t13086;
  double t13089;
  double t13090;
  double t13091;
  double t12916;
  double t12919;
  double t12929;
  double t13098;
  double t13100;
  double t13106;
  double t13112;
  double t13113;
  double t13122;
  double t13158;
  double t13167;
  double t13179;
  double t13182;
  double t13183;
  double t13184;
  double t13205;
  double t13211;
  double t13216;
  double t13196;
  double t13199;
  double t13200;
  double t13248;
  double t13250;
  double t13254;
  double t13260;
  double t13261;
  double t13265;
  double t13273;
  double t13277;
  double t13280;
  double t13282;
  double t13286;
  double t13287;
  double t13294;
  double t13296;
  double t13300;
  double t13308;
  double t13310;
  double t13313;
  double t13317;
  double t13320;
  double t13321;
  t347 = Cos(var1[3]);
  t12027 = Cos(var1[5]);
  t12182 = Sin(var1[3]);
  t12081 = Sin(var1[4]);
  t12211 = Sin(var1[5]);
  t11843 = Sin(var1[14]);
  t12168 = t347*t12027*t12081;
  t12215 = t12182*t12211;
  t12248 = t12168 + t12215;
  t12286 = Cos(var1[14]);
  t12413 = -1.*t12027*t12182;
  t12434 = t347*t12081*t12211;
  t12441 = t12413 + t12434;
  t12570 = Sin(var1[15]);
  t12480 = t11843*t12248;
  t12519 = t12286*t12441;
  t12537 = t12480 + t12519;
  t12447 = Cos(var1[15]);
  t12576 = t12286*t12248;
  t12579 = -1.*t11843*t12441;
  t12580 = t12576 + t12579;
  t511 = Cos(var1[16]);
  t4434 = -1.*t511;
  t6839 = 1. + t4434;
  t7937 = Sin(var1[16]);
  t364 = Cos(var1[4]);
  t12667 = t12447*t12537;
  t12671 = t12570*t12580;
  t12672 = t12667 + t12671;
  t12586 = Cos(var1[17]);
  t12591 = -1.*t12586;
  t12595 = 1. + t12591;
  t12609 = Sin(var1[17]);
  t12621 = -1.*t12570*t12537;
  t12637 = t12447*t12580;
  t12641 = t12621 + t12637;
  t12728 = t511*t347*t364;
  t12729 = t7937*t12672;
  t12734 = t12728 + t12729;
  t12736 = Cos(var1[18]);
  t12737 = -1.*t12736;
  t12740 = 1. + t12737;
  t12742 = Sin(var1[18]);
  t12747 = t12609*t12641;
  t12748 = t12586*t12734;
  t12749 = t12747 + t12748;
  t12768 = t12586*t12641;
  t12769 = -1.*t12609*t12734;
  t12770 = t12768 + t12769;
  t12776 = Cos(var1[19]);
  t12780 = -1.*t12776;
  t12782 = 1. + t12780;
  t12790 = Sin(var1[19]);
  t12812 = -1.*t12742*t12749;
  t12819 = t12736*t12770;
  t12836 = t12812 + t12819;
  t12858 = t12736*t12749;
  t12867 = t12742*t12770;
  t12874 = t12858 + t12867;
  t12878 = Cos(var1[20]);
  t12892 = -1.*t12878;
  t12896 = 1. + t12892;
  t12900 = Sin(var1[20]);
  t12903 = t12790*t12836;
  t12906 = t12776*t12874;
  t12911 = t12903 + t12906;
  t12933 = t12776*t12836;
  t12936 = -1.*t12790*t12874;
  t12937 = t12933 + t12936;
  t6942 = -0.049*t6839;
  t8132 = -0.135*t7937;
  t9297 = 0. + t6942 + t8132;
  t11848 = 0.135*t11843;
  t11996 = 0. + t11848;
  t12312 = -1.*t12286;
  t12331 = 1. + t12312;
  t12373 = -0.135*t12331;
  t12405 = 0. + t12373;
  t12448 = -1.*t12447;
  t12449 = 1. + t12448;
  t12453 = -0.135*t12449;
  t12476 = 0. + t12453;
  t12970 = t12027*t12182*t12081;
  t12971 = -1.*t347*t12211;
  t12975 = t12970 + t12971;
  t12979 = t347*t12027;
  t12984 = t12182*t12081*t12211;
  t12985 = t12979 + t12984;
  t12572 = 0.135*t12570;
  t12573 = 0. + t12572;
  t12604 = -0.09*t12595;
  t12612 = 0.049*t12609;
  t12616 = 0. + t12604 + t12612;
  t12987 = t11843*t12975;
  t12989 = t12286*t12985;
  t12990 = t12987 + t12989;
  t12996 = t12286*t12975;
  t12997 = -1.*t11843*t12985;
  t12998 = t12996 + t12997;
  t12648 = -0.135*t6839;
  t12658 = 0.049*t7937;
  t12663 = 0. + t12648 + t12658;
  t13013 = t12447*t12990;
  t13016 = t12570*t12998;
  t13018 = t13013 + t13016;
  t12709 = -0.049*t12595;
  t12716 = -0.09*t12609;
  t12724 = 0. + t12709 + t12716;
  t12741 = -0.049*t12740;
  t12743 = -0.21*t12742;
  t12746 = 0. + t12741 + t12743;
  t13006 = -1.*t12570*t12990;
  t13007 = t12447*t12998;
  t13008 = t13006 + t13007;
  t13038 = t511*t364*t12182;
  t13039 = t7937*t13018;
  t13041 = t13038 + t13039;
  t12756 = -0.21*t12740;
  t12759 = 0.049*t12742;
  t12760 = 0. + t12756 + t12759;
  t12783 = -0.2707*t12782;
  t12795 = 0.0016*t12790;
  t12809 = 0. + t12783 + t12795;
  t13050 = t12609*t13008;
  t13051 = t12586*t13041;
  t13052 = t13050 + t13051;
  t13064 = t12586*t13008;
  t13071 = -1.*t12609*t13041;
  t13075 = t13064 + t13071;
  t12842 = -0.0016*t12782;
  t12851 = -0.2707*t12790;
  t12853 = 0. + t12842 + t12851;
  t12899 = 0.0184*t12896;
  t12901 = -0.7055*t12900;
  t12902 = 0. + t12899 + t12901;
  t13081 = -1.*t12742*t13052;
  t13083 = t12736*t13075;
  t13086 = t13081 + t13083;
  t13089 = t12736*t13052;
  t13090 = t12742*t13075;
  t13091 = t13089 + t13090;
  t12916 = -0.7055*t12896;
  t12919 = -0.0184*t12900;
  t12929 = 0. + t12916 + t12919;
  t13098 = t12790*t13086;
  t13100 = t12776*t13091;
  t13106 = t13098 + t13100;
  t13112 = t12776*t13086;
  t13113 = -1.*t12790*t13091;
  t13122 = t13112 + t13113;
  t13158 = t364*t12027*t11843;
  t13167 = t12286*t364*t12211;
  t13179 = t13158 + t13167;
  t13182 = t12286*t364*t12027;
  t13183 = -1.*t364*t11843*t12211;
  t13184 = t13182 + t13183;
  t13205 = t12447*t13179;
  t13211 = t12570*t13184;
  t13216 = t13205 + t13211;
  t13196 = -1.*t12570*t13179;
  t13199 = t12447*t13184;
  t13200 = t13196 + t13199;
  t13248 = -1.*t511*t12081;
  t13250 = t7937*t13216;
  t13254 = t13248 + t13250;
  t13260 = t12609*t13200;
  t13261 = t12586*t13254;
  t13265 = t13260 + t13261;
  t13273 = t12586*t13200;
  t13277 = -1.*t12609*t13254;
  t13280 = t13273 + t13277;
  t13282 = -1.*t12742*t13265;
  t13286 = t12736*t13280;
  t13287 = t13282 + t13286;
  t13294 = t12736*t13265;
  t13296 = t12742*t13280;
  t13300 = t13294 + t13296;
  t13308 = t12790*t13287;
  t13310 = t12776*t13300;
  t13313 = t13308 + t13310;
  t13317 = t12776*t13287;
  t13320 = -1.*t12790*t13300;
  t13321 = t13317 + t13320;
  p_output1[0]=0. + t11996*t12248 + t12405*t12441 + t12476*t12537 + t12573*t12580 + t12616*t12641 + t12663*t12672 + t12724*t12734 + t12746*t12749 + t12760*t12770 + t12809*t12836 + t12853*t12874 + t12902*t12911 + t12929*t12937 - 1.1135*(-1.*t12900*t12911 + t12878*t12937) - 0.0216*(t12878*t12911 + t12900*t12937) - 0.1305*(t12672*t511 - 1.*t347*t364*t7937) + t347*t364*t9297 + var1[0];
  p_output1[1]=0. + t11996*t12975 + t12405*t12985 + t12476*t12990 + t12573*t12998 + t12616*t13008 + t12663*t13018 + t12724*t13041 + t12746*t13052 + t12760*t13075 + t12809*t13086 + t12853*t13091 + t12902*t13106 + t12929*t13122 - 1.1135*(-1.*t12900*t13106 + t12878*t13122) - 0.0216*(t12878*t13106 + t12900*t13122) - 0.1305*(t13018*t511 - 1.*t12182*t364*t7937) + t12182*t364*t9297 + var1[1];
  p_output1[2]=0. + t12476*t13179 + t12573*t13184 + t12616*t13200 + t12663*t13216 + t12724*t13254 + t12746*t13265 + t12760*t13280 + t12809*t13287 + t12853*t13300 + t12902*t13313 + t12929*t13321 - 1.1135*(-1.*t12900*t13313 + t12878*t13321) - 0.0216*(t12878*t13313 + t12900*t13321) + t11996*t12027*t364 + t12211*t12405*t364 - 0.1305*(t13216*t511 + t12081*t7937) - 1.*t12081*t9297 + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "p_toe_joint_right.hh"

namespace SymExpression
{

void p_toe_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
