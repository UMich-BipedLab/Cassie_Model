/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:00 GMT-04:00
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
  double t382;
  double t141;
  double t399;
  double t191;
  double t549;
  double t3;
  double t111;
  double t648;
  double t703;
  double t712;
  double t214;
  double t557;
  double t602;
  double t603;
  double t612;
  double t635;
  double t641;
  double t694;
  double t699;
  double t1213;
  double t1285;
  double t1290;
  double t1296;
  double t1222;
  double t1247;
  double t1259;
  double t1306;
  double t1402;
  double t1284;
  double t1341;
  double t1365;
  double t1193;
  double t1412;
  double t1423;
  double t1428;
  double t1459;
  double t1400;
  double t1447;
  double t1448;
  double t1167;
  double t1485;
  double t1497;
  double t1500;
  double t1538;
  double t1455;
  double t1509;
  double t1518;
  double t1162;
  double t1567;
  double t1595;
  double t1603;
  double t1635;
  double t1530;
  double t1608;
  double t1612;
  double t1150;
  double t1639;
  double t1640;
  double t1654;
  double t760;
  double t775;
  double t801;
  double t811;
  double t815;
  double t832;
  double t883;
  double t887;
  double t914;
  double t1825;
  double t1834;
  double t1836;
  double t1757;
  double t1769;
  double t1798;
  double t1813;
  double t1857;
  double t1859;
  double t1873;
  double t1881;
  double t1913;
  double t1860;
  double t1920;
  double t1968;
  double t1980;
  double t1988;
  double t2041;
  double t1979;
  double t2049;
  double t2056;
  double t2182;
  double t2191;
  double t2203;
  double t2171;
  double t2228;
  double t2238;
  double t2288;
  double t2294;
  double t2305;
  double t984;
  double t1030;
  double t1067;
  double t2552;
  double t2562;
  double t2573;
  double t2526;
  double t2530;
  double t2543;
  double t2546;
  double t2576;
  double t2584;
  double t2612;
  double t2613;
  double t2620;
  double t2596;
  double t2643;
  double t2671;
  double t2690;
  double t2704;
  double t2739;
  double t2681;
  double t2760;
  double t2788;
  double t2813;
  double t2823;
  double t2827;
  double t2804;
  double t2864;
  double t2912;
  double t2926;
  double t2927;
  double t2955;
  double t1626;
  double t1697;
  double t1709;
  double t1722;
  double t1733;
  double t1739;
  double t2273;
  double t2309;
  double t2319;
  double t2405;
  double t2443;
  double t2489;
  double t2922;
  double t2973;
  double t2983;
  double t3024;
  double t3026;
  double t3033;
  double t3281;
  double t3293;
  double t3489;
  double t3492;
  double t3642;
  double t3676;
  double t3787;
  double t3793;
  double t3939;
  double t3944;
  double t4032;
  double t4037;
  double t3171;
  double t3201;
  double t3217;
  double t3227;
  double t3232;
  double t3246;
  double t3294;
  double t3309;
  double t3315;
  double t3347;
  double t3353;
  double t3375;
  double t3513;
  double t3519;
  double t3541;
  double t3584;
  double t3592;
  double t3639;
  double t3698;
  double t3721;
  double t3754;
  double t3778;
  double t3783;
  double t3785;
  double t3798;
  double t3814;
  double t3849;
  double t3886;
  double t3890;
  double t3924;
  double t3945;
  double t3950;
  double t3959;
  double t4003;
  double t4010;
  double t4029;
  double t4040;
  double t4055;
  double t4062;
  double t4070;
  double t4073;
  double t4076;
  t382 = Cos(var1[3]);
  t141 = Cos(var1[5]);
  t399 = Sin(var1[4]);
  t191 = Sin(var1[3]);
  t549 = Sin(var1[5]);
  t3 = Cos(var1[7]);
  t111 = Cos(var1[6]);
  t648 = Sin(var1[6]);
  t703 = Cos(var1[4]);
  t712 = Sin(var1[7]);
  t214 = -1.*t141*t191;
  t557 = t382*t399*t549;
  t602 = t214 + t557;
  t603 = t111*t602;
  t612 = t382*t141*t399;
  t635 = t191*t549;
  t641 = t612 + t635;
  t694 = t641*t648;
  t699 = t603 + t694;
  t1213 = Cos(var1[8]);
  t1285 = t111*t641;
  t1290 = -1.*t602*t648;
  t1296 = t1285 + t1290;
  t1222 = t382*t703*t3;
  t1247 = t699*t712;
  t1259 = t1222 + t1247;
  t1306 = Sin(var1[8]);
  t1402 = Cos(var1[9]);
  t1284 = t1213*t1259;
  t1341 = t1296*t1306;
  t1365 = t1284 + t1341;
  t1193 = Sin(var1[9]);
  t1412 = t1213*t1296;
  t1423 = -1.*t1259*t1306;
  t1428 = t1412 + t1423;
  t1459 = Cos(var1[10]);
  t1400 = -1.*t1193*t1365;
  t1447 = t1402*t1428;
  t1448 = t1400 + t1447;
  t1167 = Sin(var1[10]);
  t1485 = t1402*t1365;
  t1497 = t1193*t1428;
  t1500 = t1485 + t1497;
  t1538 = Cos(var1[11]);
  t1455 = t1167*t1448;
  t1509 = t1459*t1500;
  t1518 = t1455 + t1509;
  t1162 = Sin(var1[11]);
  t1567 = t1459*t1448;
  t1595 = -1.*t1167*t1500;
  t1603 = t1567 + t1595;
  t1635 = Cos(var1[12]);
  t1530 = -1.*t1162*t1518;
  t1608 = t1538*t1603;
  t1612 = t1530 + t1608;
  t1150 = Sin(var1[12]);
  t1639 = t1538*t1518;
  t1640 = t1162*t1603;
  t1654 = t1639 + t1640;
  t760 = t382*t141;
  t775 = t191*t399*t549;
  t801 = t760 + t775;
  t811 = t111*t801;
  t815 = t141*t191*t399;
  t832 = -1.*t382*t549;
  t883 = t815 + t832;
  t887 = t883*t648;
  t914 = t811 + t887;
  t1825 = t111*t883;
  t1834 = -1.*t801*t648;
  t1836 = t1825 + t1834;
  t1757 = t703*t3*t191;
  t1769 = t914*t712;
  t1798 = t1757 + t1769;
  t1813 = t1213*t1798;
  t1857 = t1836*t1306;
  t1859 = t1813 + t1857;
  t1873 = t1213*t1836;
  t1881 = -1.*t1798*t1306;
  t1913 = t1873 + t1881;
  t1860 = -1.*t1193*t1859;
  t1920 = t1402*t1913;
  t1968 = t1860 + t1920;
  t1980 = t1402*t1859;
  t1988 = t1193*t1913;
  t2041 = t1980 + t1988;
  t1979 = t1167*t1968;
  t2049 = t1459*t2041;
  t2056 = t1979 + t2049;
  t2182 = t1459*t1968;
  t2191 = -1.*t1167*t2041;
  t2203 = t2182 + t2191;
  t2171 = -1.*t1162*t2056;
  t2228 = t1538*t2203;
  t2238 = t2171 + t2228;
  t2288 = t1538*t2056;
  t2294 = t1162*t2203;
  t2305 = t2288 + t2294;
  t984 = t703*t111*t549;
  t1030 = t703*t141*t648;
  t1067 = t984 + t1030;
  t2552 = t703*t141*t111;
  t2562 = -1.*t703*t549*t648;
  t2573 = t2552 + t2562;
  t2526 = -1.*t3*t399;
  t2530 = t1067*t712;
  t2543 = t2526 + t2530;
  t2546 = t1213*t2543;
  t2576 = t2573*t1306;
  t2584 = t2546 + t2576;
  t2612 = t1213*t2573;
  t2613 = -1.*t2543*t1306;
  t2620 = t2612 + t2613;
  t2596 = -1.*t1193*t2584;
  t2643 = t1402*t2620;
  t2671 = t2596 + t2643;
  t2690 = t1402*t2584;
  t2704 = t1193*t2620;
  t2739 = t2690 + t2704;
  t2681 = t1167*t2671;
  t2760 = t1459*t2739;
  t2788 = t2681 + t2760;
  t2813 = t1459*t2671;
  t2823 = -1.*t1167*t2739;
  t2827 = t2813 + t2823;
  t2804 = -1.*t1162*t2788;
  t2864 = t1538*t2827;
  t2912 = t2804 + t2864;
  t2926 = t1538*t2788;
  t2927 = t1162*t2827;
  t2955 = t2926 + t2927;
  t1626 = t1150*t1612;
  t1697 = t1635*t1654;
  t1709 = t1626 + t1697;
  t1722 = t1635*t1612;
  t1733 = -1.*t1150*t1654;
  t1739 = t1722 + t1733;
  t2273 = t1150*t2238;
  t2309 = t1635*t2305;
  t2319 = t2273 + t2309;
  t2405 = t1635*t2238;
  t2443 = -1.*t1150*t2305;
  t2489 = t2405 + t2443;
  t2922 = t1150*t2912;
  t2973 = t1635*t2955;
  t2983 = t2922 + t2973;
  t3024 = t1635*t2912;
  t3026 = -1.*t1150*t2955;
  t3033 = t3024 + t3026;
  t3281 = -1.*t3;
  t3293 = 1. + t3281;
  t3489 = -1.*t1213;
  t3492 = 1. + t3489;
  t3642 = -1.*t1402;
  t3676 = 1. + t3642;
  t3787 = -1.*t1459;
  t3793 = 1. + t3787;
  t3939 = -1.*t1538;
  t3944 = 1. + t3939;
  t4032 = -1.*t1635;
  t4037 = 1. + t4032;
  t3171 = -1.*t111;
  t3201 = 1. + t3171;
  t3217 = 0.135*t3201;
  t3227 = 0. + t3217;
  t3232 = -0.135*t648;
  t3246 = 0. + t3232;
  t3294 = 0.135*t3293;
  t3309 = 0.049*t712;
  t3315 = 0. + t3294 + t3309;
  t3347 = -0.049*t3293;
  t3353 = 0.135*t712;
  t3375 = 0. + t3347 + t3353;
  t3513 = -0.049*t3492;
  t3519 = -0.09*t1306;
  t3541 = 0. + t3513 + t3519;
  t3584 = -0.09*t3492;
  t3592 = 0.049*t1306;
  t3639 = 0. + t3584 + t3592;
  t3698 = -0.049*t3676;
  t3721 = -0.21*t1193;
  t3754 = 0. + t3698 + t3721;
  t3778 = -0.21*t3676;
  t3783 = 0.049*t1193;
  t3785 = 0. + t3778 + t3783;
  t3798 = -0.2707*t3793;
  t3814 = 0.0016*t1167;
  t3849 = 0. + t3798 + t3814;
  t3886 = -0.0016*t3793;
  t3890 = -0.2707*t1167;
  t3924 = 0. + t3886 + t3890;
  t3945 = 0.0184*t3944;
  t3950 = -0.7055*t1162;
  t3959 = 0. + t3945 + t3950;
  t4003 = -0.7055*t3944;
  t4010 = -0.0184*t1162;
  t4029 = 0. + t4003 + t4010;
  t4040 = -1.1135*t4037;
  t4055 = 0.0216*t1150;
  t4062 = 0. + t4040 + t4055;
  t4070 = -0.0216*t4037;
  t4073 = -1.1135*t1150;
  t4076 = 0. + t4070 + t4073;
  p_output1[0]=-1.*t3*t699 + t382*t703*t712;
  p_output1[1]=t191*t703*t712 - 1.*t3*t914;
  p_output1[2]=-1.*t1067*t3 - 1.*t399*t712;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1709 + 0.766044*t1739;
  p_output1[5]=0.642788*t2319 + 0.766044*t2489;
  p_output1[6]=0.642788*t2983 + 0.766044*t3033;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1709 + 0.642788*t1739;
  p_output1[9]=-0.766044*t2319 + 0.642788*t2489;
  p_output1[10]=-0.766044*t2983 + 0.642788*t3033;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1709 - 1.1312*t1739 + t1259*t3541 + t1296*t3639 + t1365*t3754 + t1428*t3785 + t1448*t3849 + t1500*t3924 + t1518*t3959 + t1603*t4029 + t1612*t4062 + t1654*t4076 + t3227*t602 + t3246*t641 + t3315*t699 + t3375*t382*t703 + 0.1305*(t3*t699 - 1.*t382*t703*t712) + var1[0];
  p_output1[13]=0. + 0.0306*t2319 - 1.1312*t2489 + t1798*t3541 + t1836*t3639 + t1859*t3754 + t1913*t3785 + t1968*t3849 + t2041*t3924 + t2056*t3959 + t2203*t4029 + t2238*t4062 + t2305*t4076 + t191*t3375*t703 + t3227*t801 + t3246*t883 + t3315*t914 + 0.1305*(-1.*t191*t703*t712 + t3*t914) + var1[1];
  p_output1[14]=0. + 0.0306*t2983 - 1.1312*t3033 + t1067*t3315 + t2543*t3541 + t2573*t3639 + t2584*t3754 + t2620*t3785 + t2671*t3849 + t2739*t3924 + t2788*t3959 - 1.*t3375*t399 + t2827*t4029 + t2912*t4062 + t2955*t4076 + t141*t3246*t703 + t3227*t549*t703 + 0.1305*(t1067*t3 + t399*t712) + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
