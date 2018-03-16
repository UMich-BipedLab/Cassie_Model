/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:39 GMT-04:00
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
  double t38;
  double t2217;
  double t2343;
  double t2225;
  double t2399;
  double t904;
  double t1034;
  double t1066;
  double t1211;
  double t1750;
  double t2228;
  double t2520;
  double t2601;
  double t2630;
  double t3035;
  double t3042;
  double t3043;
  double t486;
  double t3293;
  double t3331;
  double t3414;
  double t3633;
  double t3634;
  double t3692;
  double t3780;
  double t3838;
  double t3847;
  double t3948;
  double t4363;
  double t4370;
  double t4409;
  double t4477;
  double t4513;
  double t4546;
  double t4556;
  double t4680;
  double t4711;
  double t4748;
  double t4861;
  double t4886;
  double t4904;
  double t4916;
  double t4951;
  double t4953;
  double t4966;
  double t5064;
  double t5100;
  double t5101;
  double t5149;
  double t5152;
  double t5159;
  double t5182;
  double t5195;
  double t5210;
  double t5212;
  double t5244;
  double t5251;
  double t5253;
  double t5285;
  double t5296;
  double t5303;
  double t5309;
  double t5315;
  double t5317;
  double t5329;
  double t5347;
  double t5350;
  double t5357;
  double t5389;
  double t5392;
  double t5393;
  double t1183;
  double t1318;
  double t1395;
  double t1872;
  double t1881;
  double t2786;
  double t2865;
  double t2882;
  double t2974;
  double t3202;
  double t3215;
  double t3284;
  double t5425;
  double t5426;
  double t5427;
  double t5437;
  double t5440;
  double t5443;
  double t3699;
  double t3810;
  double t3819;
  double t5447;
  double t5455;
  double t5460;
  double t4138;
  double t4256;
  double t4296;
  double t4555;
  double t4617;
  double t4675;
  double t5463;
  double t5465;
  double t5477;
  double t5502;
  double t5504;
  double t5505;
  double t4808;
  double t4835;
  double t4837;
  double t4964;
  double t4967;
  double t4974;
  double t5516;
  double t5519;
  double t5520;
  double t5530;
  double t5532;
  double t5535;
  double t5114;
  double t5117;
  double t5126;
  double t5211;
  double t5219;
  double t5232;
  double t5547;
  double t5550;
  double t5551;
  double t5556;
  double t5557;
  double t5574;
  double t5275;
  double t5280;
  double t5281;
  double t5322;
  double t5339;
  double t5342;
  double t5584;
  double t5585;
  double t5590;
  double t5596;
  double t5602;
  double t5610;
  double t5367;
  double t5378;
  double t5383;
  double t5624;
  double t5626;
  double t5632;
  double t5642;
  double t5645;
  double t5651;
  double t5700;
  double t5702;
  double t5705;
  double t5719;
  double t5721;
  double t5722;
  double t5743;
  double t5748;
  double t5756;
  double t5761;
  double t5764;
  double t5766;
  double t5775;
  double t5776;
  double t5778;
  double t5784;
  double t5785;
  double t5788;
  double t5795;
  double t5797;
  double t5799;
  double t5806;
  double t5807;
  double t5808;
  double t5813;
  double t5814;
  double t5815;
  double t5818;
  double t5820;
  double t5827;
  double t5835;
  double t5836;
  double t5839;
  t38 = Cos(var1[3]);
  t2217 = Cos(var1[5]);
  t2343 = Sin(var1[3]);
  t2225 = Sin(var1[4]);
  t2399 = Sin(var1[5]);
  t904 = Cos(var1[14]);
  t1034 = -1.*t904;
  t1066 = 1. + t1034;
  t1211 = Sin(var1[14]);
  t1750 = Sin(var1[13]);
  t2228 = t38*t2217*t2225;
  t2520 = t2343*t2399;
  t2601 = t2228 + t2520;
  t2630 = Cos(var1[13]);
  t3035 = -1.*t2217*t2343;
  t3042 = t38*t2225*t2399;
  t3043 = t3035 + t3042;
  t486 = Cos(var1[4]);
  t3293 = t1750*t2601;
  t3331 = t2630*t3043;
  t3414 = t3293 + t3331;
  t3633 = Cos(var1[15]);
  t3634 = -1.*t3633;
  t3692 = 1. + t3634;
  t3780 = Sin(var1[15]);
  t3838 = t2630*t2601;
  t3847 = -1.*t1750*t3043;
  t3948 = t3838 + t3847;
  t4363 = t904*t38*t486;
  t4370 = t1211*t3414;
  t4409 = t4363 + t4370;
  t4477 = Cos(var1[16]);
  t4513 = -1.*t4477;
  t4546 = 1. + t4513;
  t4556 = Sin(var1[16]);
  t4680 = t3780*t3948;
  t4711 = t3633*t4409;
  t4748 = t4680 + t4711;
  t4861 = t3633*t3948;
  t4886 = -1.*t3780*t4409;
  t4904 = t4861 + t4886;
  t4916 = Cos(var1[17]);
  t4951 = -1.*t4916;
  t4953 = 1. + t4951;
  t4966 = Sin(var1[17]);
  t5064 = -1.*t4556*t4748;
  t5100 = t4477*t4904;
  t5101 = t5064 + t5100;
  t5149 = t4477*t4748;
  t5152 = t4556*t4904;
  t5159 = t5149 + t5152;
  t5182 = Cos(var1[18]);
  t5195 = -1.*t5182;
  t5210 = 1. + t5195;
  t5212 = Sin(var1[18]);
  t5244 = t4966*t5101;
  t5251 = t4916*t5159;
  t5253 = t5244 + t5251;
  t5285 = t4916*t5101;
  t5296 = -1.*t4966*t5159;
  t5303 = t5285 + t5296;
  t5309 = Cos(var1[19]);
  t5315 = -1.*t5309;
  t5317 = 1. + t5315;
  t5329 = Sin(var1[19]);
  t5347 = -1.*t5212*t5253;
  t5350 = t5182*t5303;
  t5357 = t5347 + t5350;
  t5389 = t5182*t5253;
  t5392 = t5212*t5303;
  t5393 = t5389 + t5392;
  t1183 = -0.049*t1066;
  t1318 = -0.135*t1211;
  t1395 = 0. + t1183 + t1318;
  t1872 = 0.135*t1750;
  t1881 = 0. + t1872;
  t2786 = -1.*t2630;
  t2865 = 1. + t2786;
  t2882 = -0.135*t2865;
  t2974 = 0. + t2882;
  t3202 = -0.135*t1066;
  t3215 = 0.049*t1211;
  t3284 = 0. + t3202 + t3215;
  t5425 = t2217*t2343*t2225;
  t5426 = -1.*t38*t2399;
  t5427 = t5425 + t5426;
  t5437 = t38*t2217;
  t5440 = t2343*t2225*t2399;
  t5443 = t5437 + t5440;
  t3699 = -0.09*t3692;
  t3810 = 0.049*t3780;
  t3819 = 0. + t3699 + t3810;
  t5447 = t1750*t5427;
  t5455 = t2630*t5443;
  t5460 = t5447 + t5455;
  t4138 = -0.049*t3692;
  t4256 = -0.09*t3780;
  t4296 = 0. + t4138 + t4256;
  t4555 = -0.049*t4546;
  t4617 = -0.21*t4556;
  t4675 = 0. + t4555 + t4617;
  t5463 = t2630*t5427;
  t5465 = -1.*t1750*t5443;
  t5477 = t5463 + t5465;
  t5502 = t904*t486*t2343;
  t5504 = t1211*t5460;
  t5505 = t5502 + t5504;
  t4808 = -0.21*t4546;
  t4835 = 0.049*t4556;
  t4837 = 0. + t4808 + t4835;
  t4964 = -0.2707*t4953;
  t4967 = 0.0016*t4966;
  t4974 = 0. + t4964 + t4967;
  t5516 = t3780*t5477;
  t5519 = t3633*t5505;
  t5520 = t5516 + t5519;
  t5530 = t3633*t5477;
  t5532 = -1.*t3780*t5505;
  t5535 = t5530 + t5532;
  t5114 = -0.0016*t4953;
  t5117 = -0.2707*t4966;
  t5126 = 0. + t5114 + t5117;
  t5211 = 0.0184*t5210;
  t5219 = -0.7055*t5212;
  t5232 = 0. + t5211 + t5219;
  t5547 = -1.*t4556*t5520;
  t5550 = t4477*t5535;
  t5551 = t5547 + t5550;
  t5556 = t4477*t5520;
  t5557 = t4556*t5535;
  t5574 = t5556 + t5557;
  t5275 = -0.7055*t5210;
  t5280 = -0.0184*t5212;
  t5281 = 0. + t5275 + t5280;
  t5322 = -1.1135*t5317;
  t5339 = 0.0216*t5329;
  t5342 = 0. + t5322 + t5339;
  t5584 = t4966*t5551;
  t5585 = t4916*t5574;
  t5590 = t5584 + t5585;
  t5596 = t4916*t5551;
  t5602 = -1.*t4966*t5574;
  t5610 = t5596 + t5602;
  t5367 = -0.0216*t5317;
  t5378 = -1.1135*t5329;
  t5383 = 0. + t5367 + t5378;
  t5624 = -1.*t5212*t5590;
  t5626 = t5182*t5610;
  t5632 = t5624 + t5626;
  t5642 = t5182*t5590;
  t5645 = t5212*t5610;
  t5651 = t5642 + t5645;
  t5700 = t486*t2217*t1750;
  t5702 = t2630*t486*t2399;
  t5705 = t5700 + t5702;
  t5719 = t2630*t486*t2217;
  t5721 = -1.*t486*t1750*t2399;
  t5722 = t5719 + t5721;
  t5743 = -1.*t904*t2225;
  t5748 = t1211*t5705;
  t5756 = t5743 + t5748;
  t5761 = t3780*t5722;
  t5764 = t3633*t5756;
  t5766 = t5761 + t5764;
  t5775 = t3633*t5722;
  t5776 = -1.*t3780*t5756;
  t5778 = t5775 + t5776;
  t5784 = -1.*t4556*t5766;
  t5785 = t4477*t5778;
  t5788 = t5784 + t5785;
  t5795 = t4477*t5766;
  t5797 = t4556*t5778;
  t5799 = t5795 + t5797;
  t5806 = t4966*t5788;
  t5807 = t4916*t5799;
  t5808 = t5806 + t5807;
  t5813 = t4916*t5788;
  t5814 = -1.*t4966*t5799;
  t5815 = t5813 + t5814;
  t5818 = -1.*t5212*t5808;
  t5820 = t5182*t5815;
  t5827 = t5818 + t5820;
  t5835 = t5182*t5808;
  t5836 = t5212*t5815;
  t5839 = t5835 + t5836;
  p_output1[0]=0. + t1881*t2601 + t2974*t3043 + t3284*t3414 + t3819*t3948 + t4296*t4409 + t4675*t4748 + t1395*t38*t486 + t4837*t4904 + t4974*t5101 + t5126*t5159 + t5232*t5253 + t5281*t5303 + t5342*t5357 + t5383*t5393 + 0.0306*(t5329*t5357 + t5309*t5393) - 1.1312*(t5309*t5357 - 1.*t5329*t5393) - 0.1305*(-1.*t1211*t38*t486 + t3414*t904) + var1[0];
  p_output1[1]=0. + t1395*t2343*t486 + t1881*t5427 + t2974*t5443 + t3284*t5460 + t3819*t5477 + t4296*t5505 + t4675*t5520 + t4837*t5535 + t4974*t5551 + t5126*t5574 + t5232*t5590 + t5281*t5610 + t5342*t5632 + t5383*t5651 + 0.0306*(t5329*t5632 + t5309*t5651) - 1.1312*(t5309*t5632 - 1.*t5329*t5651) - 0.1305*(-1.*t1211*t2343*t486 + t5460*t904) + var1[1];
  p_output1[2]=0. - 1.*t1395*t2225 + t1881*t2217*t486 + t2399*t2974*t486 + t3284*t5705 + t3819*t5722 + t4296*t5756 + t4675*t5766 + t4837*t5778 + t4974*t5788 + t5126*t5799 + t5232*t5808 + t5281*t5815 + t5342*t5827 + t5383*t5839 + 0.0306*(t5329*t5827 + t5309*t5839) - 1.1312*(t5309*t5827 - 1.*t5329*t5839) - 0.1305*(t1211*t2225 + t5705*t904) + var1[2];
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
