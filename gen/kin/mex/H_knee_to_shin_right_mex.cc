/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:45 GMT-04:00
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
  double t185;
  double t338;
  double t166;
  double t224;
  double t372;
  double t511;
  double t299;
  double t450;
  double t463;
  double t125;
  double t514;
  double t641;
  double t798;
  double t866;
  double t491;
  double t822;
  double t847;
  double t95;
  double t908;
  double t931;
  double t937;
  double t948;
  double t959;
  double t985;
  double t1098;
  double t1114;
  double t1167;
  double t1607;
  double t852;
  double t1174;
  double t1326;
  double t82;
  double t1608;
  double t1654;
  double t1672;
  double t5;
  double t2119;
  double t2157;
  double t2206;
  double t2215;
  double t2221;
  double t2234;
  double t2211;
  double t2258;
  double t2264;
  double t2307;
  double t2330;
  double t2370;
  double t2379;
  double t2452;
  double t2489;
  double t1787;
  double t2285;
  double t2515;
  double t2548;
  double t2655;
  double t2690;
  double t2694;
  double t2839;
  double t2841;
  double t2848;
  double t2981;
  double t3092;
  double t3175;
  double t3190;
  double t3194;
  double t3222;
  double t2920;
  double t3265;
  double t3276;
  double t3336;
  double t3338;
  double t3365;
  double t1527;
  double t1678;
  double t1705;
  double t1797;
  double t1840;
  double t1998;
  double t2567;
  double t2725;
  double t2778;
  double t2806;
  double t2808;
  double t2832;
  double t3323;
  double t3369;
  double t3399;
  double t3417;
  double t3423;
  double t3433;
  double t4185;
  double t4187;
  double t4644;
  double t4663;
  double t4871;
  double t4887;
  double t5155;
  double t5190;
  double t3700;
  double t3702;
  double t3726;
  double t4197;
  double t4207;
  double t4265;
  double t4323;
  double t4362;
  double t4375;
  double t4405;
  double t4408;
  double t4417;
  double t4509;
  double t4521;
  double t4541;
  double t4675;
  double t4712;
  double t4720;
  double t4817;
  double t4832;
  double t4836;
  double t4936;
  double t4955;
  double t4988;
  double t5048;
  double t5078;
  double t5147;
  double t5215;
  double t5216;
  double t5219;
  double t5257;
  double t5259;
  double t5282;
  double t3747;
  double t3806;
  double t3807;
  double t3832;
  double t3834;
  double t3895;
  t185 = Cos(var1[5]);
  t338 = Sin(var1[3]);
  t166 = Cos(var1[3]);
  t224 = Sin(var1[4]);
  t372 = Sin(var1[5]);
  t511 = Sin(var1[13]);
  t299 = t166*t185*t224;
  t450 = t338*t372;
  t463 = t299 + t450;
  t125 = Cos(var1[13]);
  t514 = -1.*t185*t338;
  t641 = t166*t224*t372;
  t798 = t514 + t641;
  t866 = Cos(var1[15]);
  t491 = t125*t463;
  t822 = -1.*t511*t798;
  t847 = t491 + t822;
  t95 = Sin(var1[15]);
  t908 = Cos(var1[14]);
  t931 = Cos(var1[4]);
  t937 = t908*t166*t931;
  t948 = Sin(var1[14]);
  t959 = t511*t463;
  t985 = t125*t798;
  t1098 = t959 + t985;
  t1114 = t948*t1098;
  t1167 = t937 + t1114;
  t1607 = Cos(var1[16]);
  t852 = t95*t847;
  t1174 = t866*t1167;
  t1326 = t852 + t1174;
  t82 = Sin(var1[16]);
  t1608 = t866*t847;
  t1654 = -1.*t95*t1167;
  t1672 = t1608 + t1654;
  t5 = Cos(var1[17]);
  t2119 = t185*t338*t224;
  t2157 = -1.*t166*t372;
  t2206 = t2119 + t2157;
  t2215 = t166*t185;
  t2221 = t338*t224*t372;
  t2234 = t2215 + t2221;
  t2211 = t125*t2206;
  t2258 = -1.*t511*t2234;
  t2264 = t2211 + t2258;
  t2307 = t908*t931*t338;
  t2330 = t511*t2206;
  t2370 = t125*t2234;
  t2379 = t2330 + t2370;
  t2452 = t948*t2379;
  t2489 = t2307 + t2452;
  t1787 = Sin(var1[17]);
  t2285 = t95*t2264;
  t2515 = t866*t2489;
  t2548 = t2285 + t2515;
  t2655 = t866*t2264;
  t2690 = -1.*t95*t2489;
  t2694 = t2655 + t2690;
  t2839 = t125*t931*t185;
  t2841 = -1.*t931*t511*t372;
  t2848 = t2839 + t2841;
  t2981 = -1.*t908*t224;
  t3092 = t931*t185*t511;
  t3175 = t125*t931*t372;
  t3190 = t3092 + t3175;
  t3194 = t948*t3190;
  t3222 = t2981 + t3194;
  t2920 = t95*t2848;
  t3265 = t866*t3222;
  t3276 = t2920 + t3265;
  t3336 = t866*t2848;
  t3338 = -1.*t95*t3222;
  t3365 = t3336 + t3338;
  t1527 = -1.*t82*t1326;
  t1678 = t1607*t1672;
  t1705 = t1527 + t1678;
  t1797 = t1607*t1326;
  t1840 = t82*t1672;
  t1998 = t1797 + t1840;
  t2567 = -1.*t82*t2548;
  t2725 = t1607*t2694;
  t2778 = t2567 + t2725;
  t2806 = t1607*t2548;
  t2808 = t82*t2694;
  t2832 = t2806 + t2808;
  t3323 = -1.*t82*t3276;
  t3369 = t1607*t3365;
  t3399 = t3323 + t3369;
  t3417 = t1607*t3276;
  t3423 = t82*t3365;
  t3433 = t3417 + t3423;
  t4185 = -1.*t908;
  t4187 = 1. + t4185;
  t4644 = -1.*t866;
  t4663 = 1. + t4644;
  t4871 = -1.*t1607;
  t4887 = 1. + t4871;
  t5155 = -1.*t5;
  t5190 = 1. + t5155;
  t3700 = t1787*t1705;
  t3702 = t5*t1998;
  t3726 = t3700 + t3702;
  t4197 = -0.049*t4187;
  t4207 = -0.135*t948;
  t4265 = 0. + t4197 + t4207;
  t4323 = 0.135*t511;
  t4362 = 0. + t4323;
  t4375 = -1.*t125;
  t4405 = 1. + t4375;
  t4408 = -0.135*t4405;
  t4417 = 0. + t4408;
  t4509 = -0.135*t4187;
  t4521 = 0.049*t948;
  t4541 = 0. + t4509 + t4521;
  t4675 = -0.09*t4663;
  t4712 = 0.049*t95;
  t4720 = 0. + t4675 + t4712;
  t4817 = -0.049*t4663;
  t4832 = -0.09*t95;
  t4836 = 0. + t4817 + t4832;
  t4936 = -0.049*t4887;
  t4955 = -0.21*t82;
  t4988 = 0. + t4936 + t4955;
  t5048 = -0.21*t4887;
  t5078 = 0.049*t82;
  t5147 = 0. + t5048 + t5078;
  t5215 = -0.2707*t5190;
  t5216 = 0.0016*t1787;
  t5219 = 0. + t5215 + t5216;
  t5257 = -0.0016*t5190;
  t5259 = -0.2707*t1787;
  t5282 = 0. + t5257 + t5259;
  t3747 = t1787*t2778;
  t3806 = t5*t2832;
  t3807 = t3747 + t3806;
  t3832 = t1787*t3399;
  t3834 = t5*t3433;
  t3895 = t3832 + t3834;
  p_output1[0]=t1787*t1998 - 1.*t1705*t5;
  p_output1[1]=t1787*t2832 - 1.*t2778*t5;
  p_output1[2]=t1787*t3433 - 1.*t3399*t5;
  p_output1[3]=0.;
  p_output1[4]=t3726;
  p_output1[5]=t3807;
  p_output1[6]=t3895;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1098*t908 + t166*t931*t948;
  p_output1[9]=-1.*t2379*t908 + t338*t931*t948;
  p_output1[10]=-1.*t3190*t908 - 1.*t224*t948;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0016*t3726 + t1098*t4541 + t4362*t463 + t1167*t4836 + t1326*t4988 - 0.2707*(-1.*t1787*t1998 + t1705*t5) + t1672*t5147 + t1705*t5219 + t1998*t5282 + t4417*t798 + t4720*t847 + t166*t4265*t931 - 0.1305*(t1098*t908 - 1.*t166*t931*t948) + var1[0];
  p_output1[13]=0. - 0.0016*t3807 + t2206*t4362 + t2234*t4417 + t2379*t4541 + t2264*t4720 + t2489*t4836 + t2548*t4988 - 0.2707*(-1.*t1787*t2832 + t2778*t5) + t2694*t5147 + t2778*t5219 + t2832*t5282 + t338*t4265*t931 - 0.1305*(t2379*t908 - 1.*t338*t931*t948) + var1[1];
  p_output1[14]=0. - 0.0016*t3895 - 1.*t224*t4265 + t3190*t4541 + t2848*t4720 + t3222*t4836 + t3276*t4988 - 0.2707*(-1.*t1787*t3433 + t3399*t5) + t3365*t5147 + t3399*t5219 + t3433*t5282 + t185*t4362*t931 + t372*t4417*t931 - 0.1305*(t3190*t908 + t224*t948) + var1[2];
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

#include "H_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void H_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
