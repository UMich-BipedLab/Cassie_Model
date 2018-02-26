/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:12 GMT-05:00
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
  double t8;
  double t686;
  double t966;
  double t1188;
  double t935;
  double t975;
  double t1037;
  double t681;
  double t1241;
  double t1269;
  double t1326;
  double t1769;
  double t1182;
  double t1596;
  double t1671;
  double t679;
  double t1856;
  double t1914;
  double t1935;
  double t2038;
  double t1715;
  double t1963;
  double t1972;
  double t541;
  double t2048;
  double t2134;
  double t2193;
  double t348;
  double t2982;
  double t3059;
  double t3400;
  double t3428;
  double t3429;
  double t3433;
  double t3456;
  double t3485;
  double t3430;
  double t3523;
  double t3746;
  double t3787;
  double t3788;
  double t4047;
  double t2596;
  double t4854;
  double t4894;
  double t4754;
  double t4813;
  double t4931;
  double t5209;
  double t5253;
  double t5266;
  double t5298;
  double t5318;
  double t5391;
  double t5504;
  double t4627;
  double t4629;
  double t4814;
  double t4828;
  double t5279;
  double t5536;
  double t5545;
  double t5606;
  double t5619;
  double t5624;
  double t5660;
  double t5696;
  double t4514;
  double t4527;
  double t4634;
  double t4733;
  double t5594;
  double t5697;
  double t5700;
  double t5732;
  double t5755;
  double t5756;
  double t5762;
  double t5766;
  double t4167;
  double t4184;
  double t4195;
  double t3768;
  double t4069;
  double t4070;
  double t4421;
  double t4423;
  double t5867;
  double t5874;
  double t5897;
  double t5902;
  double t5927;
  double t4537;
  double t4622;
  double t5708;
  double t5767;
  double t5830;
  double t6192;
  double t6024;
  double t6029;
  double t6039;
  double t6075;
  double t6132;
  double t6204;
  double t6209;
  double t6215;
  double t6219;
  double t6222;
  double t6062;
  double t6074;
  double t4445;
  double t5843;
  double t5848;
  double t5951;
  double t5998;
  double t2456;
  double t2478;
  double t2492;
  double t2021;
  double t2270;
  double t2282;
  double t6166;
  double t6200;
  double t6253;
  double t6262;
  double t2425;
  double t2603;
  double t2628;
  double t2765;
  double t2874;
  double t6354;
  double t6371;
  double t6382;
  double t6401;
  double t6421;
  double t4078;
  double t4202;
  double t4310;
  double t6289;
  double t6307;
  double t87;
  double t6701;
  double t6512;
  double t6517;
  double t6533;
  double t6544;
  double t6559;
  double t6011;
  double t6535;
  t8 = Cos(var1[1]);
  t686 = Cos(var1[6]);
  t966 = Sin(var1[6]);
  t1188 = Cos(var1[5]);
  t935 = -0.766044*t686;
  t975 = -0.642788*t966;
  t1037 = t935 + t975;
  t681 = Sin(var1[5]);
  t1241 = -0.642788*t686;
  t1269 = 0.766044*t966;
  t1326 = t1241 + t1269;
  t1769 = Cos(var1[4]);
  t1182 = -1.*t681*t1037;
  t1596 = t1188*t1326;
  t1671 = 0. + t1182 + t1596;
  t679 = Sin(var1[4]);
  t1856 = t1188*t1037;
  t1914 = t681*t1326;
  t1935 = 0. + t1856 + t1914;
  t2038 = Sin(var1[3]);
  t1715 = t679*t1671;
  t1963 = t1769*t1935;
  t1972 = 0. + t1715 + t1963;
  t541 = Cos(var1[3]);
  t2048 = t1769*t1671;
  t2134 = -1.*t679*t1935;
  t2193 = 0. + t2048 + t2134;
  t348 = Cos(var1[2]);
  t2982 = 0.642788*t686;
  t3059 = -0.766044*t966;
  t3400 = t2982 + t3059;
  t3428 = -1.*t681*t3400;
  t3429 = 0. + t3428 + t1856;
  t3433 = t1188*t3400;
  t3456 = t681*t1037;
  t3485 = 0. + t3433 + t3456;
  t3430 = t679*t3429;
  t3523 = t1769*t3485;
  t3746 = 0. + t3430 + t3523;
  t3787 = t1769*t3429;
  t3788 = -1.*t679*t3485;
  t4047 = 0. + t3787 + t3788;
  t2596 = Sin(var1[2]);
  t4854 = -1.*t686;
  t4894 = 1. + t4854;
  t4754 = -1.*t1188;
  t4813 = 1. + t4754;
  t4931 = 1.0335*t4894;
  t5209 = 1.0512*t686;
  t5253 = -0.052199999999999996*t966;
  t5266 = 0. + t4931 + t5209 + t5253;
  t5298 = -0.0532*t4894;
  t5318 = -0.001*t686;
  t5391 = 0.017699999999999827*t966;
  t5504 = 0. + t5298 + t5318 + t5391;
  t4627 = -1.*t1769;
  t4629 = 1. + t4627;
  t4814 = -0.0132*t4813;
  t4828 = -0.6255*t681;
  t5279 = t681*t5266;
  t5536 = t1188*t5504;
  t5545 = 0. + t4814 + t4828 + t5279 + t5536;
  t5606 = 0.6255*t4813;
  t5619 = -0.0132*t681;
  t5624 = t1188*t5266;
  t5660 = -1.*t681*t5504;
  t5696 = 0. + t5606 + t5619 + t5624 + t5660;
  t4514 = -1.*t541;
  t4527 = 1. + t4514;
  t4634 = 0.1907*t4629;
  t4733 = -0.0332*t679;
  t5594 = -1.*t679*t5545;
  t5697 = t1769*t5696;
  t5700 = 0. + t4634 + t4733 + t5594 + t5697;
  t5732 = -0.0332*t4629;
  t5755 = -0.1907*t679;
  t5756 = t1769*t5545;
  t5762 = t679*t5696;
  t5766 = 0. + t5732 + t5755 + t5756 + t5762;
  t4167 = t541*t3746;
  t4184 = t2038*t4047;
  t4195 = 0. + t4167 + t4184;
  t3768 = -1.*t2038*t3746;
  t4069 = t541*t4047;
  t4070 = 0. + t3768 + t4069;
  t4421 = -1.*t348;
  t4423 = 1. + t4421;
  t5867 = -0.0806*t4527;
  t5874 = -0.13*t2038;
  t5897 = t2038*t5700;
  t5902 = t541*t5766;
  t5927 = 0. + t5867 + t5874 + t5897 + t5902;
  t4537 = 0.13*t4527;
  t4622 = -0.0806*t2038;
  t5708 = t541*t5700;
  t5767 = -1.*t2038*t5766;
  t5830 = 0. + t4537 + t4622 + t5708 + t5767;
  t6192 = Sin(var1[1]);
  t6024 = t348*t4195;
  t6029 = t4070*t2596;
  t6039 = 0. + t6024 + t6029;
  t6075 = -1.*t8;
  t6132 = 1. + t6075;
  t6204 = -0.0806*t4423;
  t6209 = t348*t5927;
  t6215 = -0.01*t2596;
  t6219 = t5830*t2596;
  t6222 = 0. + t6204 + t6209 + t6215 + t6219;
  t6062 = t8*t6039;
  t6074 = 0. + t6062;
  t4445 = 0.01*t4423;
  t5843 = t348*t5830;
  t5848 = -0.0806*t2596;
  t5951 = -1.*t5927*t2596;
  t5998 = 0. + t4445 + t5843 + t5848 + t5951;
  t2456 = -1.*t2038*t1972;
  t2478 = t541*t2193;
  t2492 = 0. + t2456 + t2478;
  t2021 = t541*t1972;
  t2270 = t2038*t2193;
  t2282 = 0. + t2021 + t2270;
  t6166 = -0.0806*t6132;
  t6200 = 0.004500000000000004*t6192;
  t6253 = t8*t6222;
  t6262 = 0. + t6166 + t6200 + t6253;
  t2425 = t348*t2282;
  t2603 = t2492*t2596;
  t2628 = 0. + t2425 + t2603;
  t2765 = t8*t2628;
  t2874 = 0. + t2765;
  t6354 = -0.135*t6132;
  t6371 = -0.1305*t8;
  t6382 = -0.0806*t6192;
  t6401 = -1.*t6192*t6222;
  t6421 = 0. + t6354 + t6371 + t6382 + t6401;
  t4078 = t348*t4070;
  t4202 = -1.*t4195*t2596;
  t4310 = 0. + t4078 + t4202;
  t6289 = -1.*t6192*t6039;
  t6307 = 0. + t6289;
  t87 = 0. + t8;
  t6701 = 0. + t6192;
  t6512 = t348*t2492;
  t6517 = -1.*t2282*t2596;
  t6533 = 0. + t6512 + t6517;
  t6544 = -1.*t6192*t2628;
  t6559 = 0. + t6544;
  t6011 = -1.*t4310*t5998;
  t6535 = t5998*t6533;
  p_output1[0]=0. + t2874*(t6011 - 1.*t6074*t6262 - 1.*t6307*t6421) + t6074*(t2874*t6262 + t6535 + t6421*t6559) - 0.08*t87;
  p_output1[1]=0.135*t4310 - 0.08*t6307 + (-1.*t2874*t6262 - 1.*t5998*t6533 - 1.*t6421*t6559)*t6701 + t2874*(0. + t6262*t6701 + t6421*t87);
  p_output1[2]=0.135*t6533 - 0.08*t6559 + (t4310*t5998 + t6074*t6262 + t6307*t6421)*t6701 + t6074*(0. - 1.*t6262*t6701 - 1.*t6421*t87);
  p_output1[3]=-0.0806 - 1.*(0. + t6011 - 1.*t6039*t6222)*t6533 - 1.*t4310*(0. + t2628*t6222 + t6535);
  p_output1[4]=0. + 0.135*t6039 + 0.1305*t6533;
  p_output1[5]=0. + 0.135*t2628 - 0.1305*t4310;
  p_output1[6]=0.;
  p_output1[7]=0. - 0.0806*t4070 - 0.01*t4195 - 1.*t2492*t5830 - 1.*t2282*t5927;
  p_output1[8]=0. - 0.01*t2282 - 0.0806*t2492 + t4070*t5830 + t4195*t5927;
  p_output1[9]=0.;
  p_output1[10]=0. - 0.13*t3746 - 0.0806*t4047 - 1.*t2193*t5700 - 1.*t1972*t5766;
  p_output1[11]=0. - 0.13*t1972 - 0.0806*t2193 + t4047*t5700 + t3746*t5766;
  p_output1[12]=0.;
  p_output1[13]=0. - 0.0332*t3429 - 0.1907*t3485 - 1.*t1935*t5545 - 1.*t1671*t5696;
  p_output1[14]=0. - 0.0332*t1671 - 0.1907*t1935 + t3485*t5545 + t3429*t5696;
  p_output1[15]=0.;
  p_output1[16]=0. - 0.0132*t1037 - 0.6255*t3400 - 1.*t1326*t5266 - 1.*t1037*t5504;
  p_output1[17]=0. - 0.6255*t1037 - 0.0132*t1326 + t1037*t5266 + t3400*t5504;
  p_output1[18]=0.;
  p_output1[19]=0.05136484439999989;
  p_output1[20]=0.01999455480000023;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jv_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Jv_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
