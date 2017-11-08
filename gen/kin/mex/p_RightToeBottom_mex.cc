/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:10 GMT-05:00
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
  double t638;
  double t1178;
  double t1434;
  double t1232;
  double t1462;
  double t699;
  double t708;
  double t880;
  double t951;
  double t970;
  double t1269;
  double t1465;
  double t1475;
  double t1562;
  double t1594;
  double t1596;
  double t1632;
  double t642;
  double t1835;
  double t1902;
  double t2053;
  double t2218;
  double t2219;
  double t2220;
  double t2229;
  double t2376;
  double t2377;
  double t2409;
  double t2624;
  double t2625;
  double t2667;
  double t2748;
  double t2776;
  double t2784;
  double t2807;
  double t2836;
  double t2870;
  double t2937;
  double t3209;
  double t3222;
  double t3223;
  double t3253;
  double t3258;
  double t3339;
  double t3440;
  double t3611;
  double t3678;
  double t3681;
  double t3858;
  double t3883;
  double t3896;
  double t3931;
  double t3933;
  double t3952;
  double t3975;
  double t4012;
  double t4026;
  double t4030;
  double t4155;
  double t4180;
  double t4246;
  double t4308;
  double t4310;
  double t4312;
  double t4339;
  double t4398;
  double t4406;
  double t4411;
  double t4500;
  double t4515;
  double t4523;
  double t946;
  double t961;
  double t964;
  double t1076;
  double t1157;
  double t1563;
  double t1568;
  double t1576;
  double t1592;
  double t1643;
  double t1701;
  double t1820;
  double t4626;
  double t4634;
  double t4644;
  double t4677;
  double t4685;
  double t4698;
  double t2224;
  double t2233;
  double t2333;
  double t4733;
  double t4741;
  double t4747;
  double t2553;
  double t2557;
  double t2576;
  double t2790;
  double t2811;
  double t2822;
  double t4787;
  double t4793;
  double t4795;
  double t4821;
  double t4826;
  double t4828;
  double t2997;
  double t3002;
  double t3010;
  double t3405;
  double t3478;
  double t3571;
  double t4851;
  double t4858;
  double t4871;
  double t4880;
  double t4881;
  double t4891;
  double t3762;
  double t3782;
  double t3815;
  double t3953;
  double t3988;
  double t3996;
  double t4930;
  double t4935;
  double t4960;
  double t4964;
  double t4985;
  double t4991;
  double t4115;
  double t4133;
  double t4140;
  double t4319;
  double t4348;
  double t4371;
  double t5011;
  double t5012;
  double t5025;
  double t5067;
  double t5068;
  double t5073;
  double t4460;
  double t4465;
  double t4486;
  double t5109;
  double t5153;
  double t5162;
  double t5206;
  double t5217;
  double t5231;
  double t5370;
  double t5374;
  double t5386;
  double t5392;
  double t5395;
  double t5417;
  double t5456;
  double t5471;
  double t5481;
  double t5487;
  double t5488;
  double t5489;
  double t5497;
  double t5594;
  double t5598;
  double t5604;
  double t5606;
  double t5610;
  double t5616;
  double t5617;
  double t5620;
  double t5629;
  double t5630;
  double t5633;
  double t5639;
  double t5645;
  double t5646;
  double t5653;
  double t5654;
  double t5655;
  double t5660;
  double t5662;
  double t5663;
  t638 = Cos(var1[3]);
  t1178 = Cos(var1[5]);
  t1434 = Sin(var1[3]);
  t1232 = Sin(var1[4]);
  t1462 = Sin(var1[5]);
  t699 = Cos(var1[14]);
  t708 = -1.*t699;
  t880 = 1. + t708;
  t951 = Sin(var1[14]);
  t970 = Sin(var1[13]);
  t1269 = t638*t1178*t1232;
  t1465 = t1434*t1462;
  t1475 = t1269 + t1465;
  t1562 = Cos(var1[13]);
  t1594 = -1.*t1178*t1434;
  t1596 = t638*t1232*t1462;
  t1632 = t1594 + t1596;
  t642 = Cos(var1[4]);
  t1835 = t970*t1475;
  t1902 = t1562*t1632;
  t2053 = t1835 + t1902;
  t2218 = Cos(var1[15]);
  t2219 = -1.*t2218;
  t2220 = 1. + t2219;
  t2229 = Sin(var1[15]);
  t2376 = t1562*t1475;
  t2377 = -1.*t970*t1632;
  t2409 = t2376 + t2377;
  t2624 = t699*t638*t642;
  t2625 = t951*t2053;
  t2667 = t2624 + t2625;
  t2748 = Cos(var1[16]);
  t2776 = -1.*t2748;
  t2784 = 1. + t2776;
  t2807 = Sin(var1[16]);
  t2836 = t2229*t2409;
  t2870 = t2218*t2667;
  t2937 = t2836 + t2870;
  t3209 = t2218*t2409;
  t3222 = -1.*t2229*t2667;
  t3223 = t3209 + t3222;
  t3253 = Cos(var1[17]);
  t3258 = -1.*t3253;
  t3339 = 1. + t3258;
  t3440 = Sin(var1[17]);
  t3611 = -1.*t2807*t2937;
  t3678 = t2748*t3223;
  t3681 = t3611 + t3678;
  t3858 = t2748*t2937;
  t3883 = t2807*t3223;
  t3896 = t3858 + t3883;
  t3931 = Cos(var1[18]);
  t3933 = -1.*t3931;
  t3952 = 1. + t3933;
  t3975 = Sin(var1[18]);
  t4012 = t3440*t3681;
  t4026 = t3253*t3896;
  t4030 = t4012 + t4026;
  t4155 = t3253*t3681;
  t4180 = -1.*t3440*t3896;
  t4246 = t4155 + t4180;
  t4308 = Cos(var1[19]);
  t4310 = -1.*t4308;
  t4312 = 1. + t4310;
  t4339 = Sin(var1[19]);
  t4398 = -1.*t3975*t4030;
  t4406 = t3931*t4246;
  t4411 = t4398 + t4406;
  t4500 = t3931*t4030;
  t4515 = t3975*t4246;
  t4523 = t4500 + t4515;
  t946 = -0.049*t880;
  t961 = -0.135*t951;
  t964 = 0. + t946 + t961;
  t1076 = 0.135*t970;
  t1157 = 0. + t1076;
  t1563 = -1.*t1562;
  t1568 = 1. + t1563;
  t1576 = -0.135*t1568;
  t1592 = 0. + t1576;
  t1643 = -0.135*t880;
  t1701 = 0.049*t951;
  t1820 = 0. + t1643 + t1701;
  t4626 = t1178*t1434*t1232;
  t4634 = -1.*t638*t1462;
  t4644 = t4626 + t4634;
  t4677 = t638*t1178;
  t4685 = t1434*t1232*t1462;
  t4698 = t4677 + t4685;
  t2224 = -0.09*t2220;
  t2233 = 0.049*t2229;
  t2333 = 0. + t2224 + t2233;
  t4733 = t970*t4644;
  t4741 = t1562*t4698;
  t4747 = t4733 + t4741;
  t2553 = -0.049*t2220;
  t2557 = -0.09*t2229;
  t2576 = 0. + t2553 + t2557;
  t2790 = -0.049*t2784;
  t2811 = -0.21*t2807;
  t2822 = 0. + t2790 + t2811;
  t4787 = t1562*t4644;
  t4793 = -1.*t970*t4698;
  t4795 = t4787 + t4793;
  t4821 = t699*t642*t1434;
  t4826 = t951*t4747;
  t4828 = t4821 + t4826;
  t2997 = -0.21*t2784;
  t3002 = 0.049*t2807;
  t3010 = 0. + t2997 + t3002;
  t3405 = -0.2707*t3339;
  t3478 = 0.0016*t3440;
  t3571 = 0. + t3405 + t3478;
  t4851 = t2229*t4795;
  t4858 = t2218*t4828;
  t4871 = t4851 + t4858;
  t4880 = t2218*t4795;
  t4881 = -1.*t2229*t4828;
  t4891 = t4880 + t4881;
  t3762 = -0.0016*t3339;
  t3782 = -0.2707*t3440;
  t3815 = 0. + t3762 + t3782;
  t3953 = 0.0184*t3952;
  t3988 = -0.7055*t3975;
  t3996 = 0. + t3953 + t3988;
  t4930 = -1.*t2807*t4871;
  t4935 = t2748*t4891;
  t4960 = t4930 + t4935;
  t4964 = t2748*t4871;
  t4985 = t2807*t4891;
  t4991 = t4964 + t4985;
  t4115 = -0.7055*t3952;
  t4133 = -0.0184*t3975;
  t4140 = 0. + t4115 + t4133;
  t4319 = -1.1135*t4312;
  t4348 = 0.0216*t4339;
  t4371 = 0. + t4319 + t4348;
  t5011 = t3440*t4960;
  t5012 = t3253*t4991;
  t5025 = t5011 + t5012;
  t5067 = t3253*t4960;
  t5068 = -1.*t3440*t4991;
  t5073 = t5067 + t5068;
  t4460 = -0.0216*t4312;
  t4465 = -1.1135*t4339;
  t4486 = 0. + t4460 + t4465;
  t5109 = -1.*t3975*t5025;
  t5153 = t3931*t5073;
  t5162 = t5109 + t5153;
  t5206 = t3931*t5025;
  t5217 = t3975*t5073;
  t5231 = t5206 + t5217;
  t5370 = t642*t1178*t970;
  t5374 = t1562*t642*t1462;
  t5386 = t5370 + t5374;
  t5392 = t1562*t642*t1178;
  t5395 = -1.*t642*t970*t1462;
  t5417 = t5392 + t5395;
  t5456 = -1.*t699*t1232;
  t5471 = t951*t5386;
  t5481 = t5456 + t5471;
  t5487 = t2229*t5417;
  t5488 = t2218*t5481;
  t5489 = t5487 + t5488;
  t5497 = t2218*t5417;
  t5594 = -1.*t2229*t5481;
  t5598 = t5497 + t5594;
  t5604 = -1.*t2807*t5489;
  t5606 = t2748*t5598;
  t5610 = t5604 + t5606;
  t5616 = t2748*t5489;
  t5617 = t2807*t5598;
  t5620 = t5616 + t5617;
  t5629 = t3440*t5610;
  t5630 = t3253*t5620;
  t5633 = t5629 + t5630;
  t5639 = t3253*t5610;
  t5645 = -1.*t3440*t5620;
  t5646 = t5639 + t5645;
  t5653 = -1.*t3975*t5633;
  t5654 = t3931*t5646;
  t5655 = t5653 + t5654;
  t5660 = t3931*t5633;
  t5662 = t3975*t5646;
  t5663 = t5660 + t5662;
  p_output1[0]=0. + t1157*t1475 + t1592*t1632 + t1820*t2053 + t2333*t2409 + t2576*t2667 + t2822*t2937 + t3010*t3223 + t3571*t3681 + t3815*t3896 + t3996*t4030 + t4140*t4246 + t4371*t4411 + t4486*t4523 + 0.0306*(t4339*t4411 + t4308*t4523) - 1.1312*(t4308*t4411 - 1.*t4339*t4523) - 0.1305*(t2053*t699 - 1.*t638*t642*t951) + t638*t642*t964 + var1[0];
  p_output1[1]=0. + t1157*t4644 + t1592*t4698 + t1820*t4747 + t2333*t4795 + t2576*t4828 + t2822*t4871 + t3010*t4891 + t3571*t4960 + t3815*t4991 + t3996*t5025 + t4140*t5073 + t4371*t5162 + t4486*t5231 + 0.0306*(t4339*t5162 + t4308*t5231) - 1.1312*(t4308*t5162 - 1.*t4339*t5231) - 0.1305*(t4747*t699 - 1.*t1434*t642*t951) + t1434*t642*t964 + var1[1];
  p_output1[2]=0. + t1820*t5386 + t2333*t5417 + t2576*t5481 + t2822*t5489 + t3010*t5598 + t3571*t5610 + t3815*t5620 + t3996*t5633 + t4140*t5646 + t4371*t5655 + t4486*t5663 + 0.0306*(t4339*t5655 + t4308*t5663) - 1.1312*(t4308*t5655 - 1.*t4339*t5663) + t1157*t1178*t642 + t1462*t1592*t642 - 0.1305*(t5386*t699 + t1232*t951) - 1.*t1232*t964 + var1[2];
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
