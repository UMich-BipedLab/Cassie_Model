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
  double t875;
  double t1209;
  double t1612;
  double t1108;
  double t1241;
  double t1329;
  double t357;
  double t1668;
  double t1722;
  double t1723;
  double t1963;
  double t1425;
  double t1825;
  double t1845;
  double t350;
  double t2031;
  double t2054;
  double t2082;
  double t2439;
  double t1856;
  double t2127;
  double t2132;
  double t333;
  double t2494;
  double t2569;
  double t2616;
  double t150;
  double t247;
  double t3383;
  double t3433;
  double t3523;
  double t3217;
  double t3547;
  double t3686;
  double t3724;
  double t3772;
  double t2876;
  double t3717;
  double t3889;
  double t3901;
  double t3980;
  double t4026;
  double t4043;
  double t2326;
  double t2735;
  double t2793;
  double t2794;
  double t2883;
  double t2925;
  double t2927;
  double t2944;
  double t2976;
  double t3059;
  double t3169;
  double t116;
  double t5671;
  double t5708;
  double t5536;
  double t5539;
  double t5746;
  double t5755;
  double t5756;
  double t5762;
  double t5874;
  double t6007;
  double t6024;
  double t6029;
  double t5261;
  double t5307;
  double t5606;
  double t5639;
  double t5814;
  double t6038;
  double t6200;
  double t6209;
  double t6235;
  double t6245;
  double t6304;
  double t6308;
  double t5057;
  double t5185;
  double t5347;
  double t5426;
  double t6204;
  double t6382;
  double t6384;
  double t6469;
  double t6530;
  double t6580;
  double t6637;
  double t6714;
  double t4618;
  double t4688;
  double t4835;
  double t4864;
  double t4946;
  double t4974;
  double t5209;
  double t5253;
  double t6408;
  double t6715;
  double t6720;
  double t6729;
  double t6832;
  double t6862;
  double t6863;
  double t6956;
  double t6958;
  double t6961;
  double t7004;
  double t3908;
  double t4113;
  double t4114;
  double t4176;
  double t4212;
  double t4277;
  double t4278;
  double t4360;
  double t4406;
  double t4407;
  double t4420;
  double t4788;
  double t4814;
  double t7059;
  double t7072;
  double t7225;
  double t7226;
  double t7334;
  double t7337;
  double t7340;
  double t7546;
  double t7554;
  double t7565;
  double t7575;
  double t7590;
  double t7089;
  double t7091;
  double t117;
  double t4498;
  double t7700;
  double t7719;
  double t7785;
  double t7938;
  double t7982;
  double t7395;
  double t7408;
  double t7432;
  double t7996;
  double t7592;
  t875 = Cos(var1[13]);
  t1209 = Sin(var1[13]);
  t1612 = Cos(var1[12]);
  t1108 = 0.642788*t875;
  t1241 = -0.766044*t1209;
  t1329 = t1108 + t1241;
  t357 = Sin(var1[12]);
  t1668 = -0.766044*t875;
  t1722 = -0.642788*t1209;
  t1723 = t1668 + t1722;
  t1963 = Cos(var1[11]);
  t1425 = -1.*t357*t1329;
  t1825 = t1612*t1723;
  t1845 = 0. + t1425 + t1825;
  t350 = Sin(var1[11]);
  t2031 = t1612*t1329;
  t2054 = t357*t1723;
  t2082 = 0. + t2031 + t2054;
  t2439 = Cos(var1[10]);
  t1856 = t350*t1845;
  t2127 = t1963*t2082;
  t2132 = 0. + t1856 + t2127;
  t333 = Sin(var1[10]);
  t2494 = t1963*t1845;
  t2569 = -1.*t350*t2082;
  t2616 = 0. + t2494 + t2569;
  t150 = Cos(var1[8]);
  t247 = Sin(var1[9]);
  t3383 = -0.642788*t875;
  t3433 = 0.766044*t1209;
  t3523 = t3383 + t3433;
  t3217 = -1.*t357*t1723;
  t3547 = t1612*t3523;
  t3686 = 0. + t3217 + t3547;
  t3724 = t357*t3523;
  t3772 = 0. + t1825 + t3724;
  t2876 = Cos(var1[9]);
  t3717 = t350*t3686;
  t3889 = t1963*t3772;
  t3901 = 0. + t3717 + t3889;
  t3980 = t1963*t3686;
  t4026 = -1.*t350*t3772;
  t4043 = 0. + t3980 + t4026;
  t2326 = -1.*t333*t2132;
  t2735 = t2439*t2616;
  t2793 = 0. + t2326 + t2735;
  t2794 = t247*t2793;
  t2883 = t2439*t2132;
  t2925 = t333*t2616;
  t2927 = 0. + t2883 + t2925;
  t2944 = t2876*t2927;
  t2976 = 0. + t2794 + t2944;
  t3059 = t150*t2976;
  t3169 = 0. + t3059;
  t116 = Sin(var1[8]);
  t5671 = -1.*t875;
  t5708 = 1. + t5671;
  t5536 = -1.*t1612;
  t5539 = 1. + t5536;
  t5746 = 1.0335*t5708;
  t5755 = 1.0512*t875;
  t5756 = -0.052199999999999996*t1209;
  t5762 = 0. + t5746 + t5755 + t5756;
  t5874 = -0.0532*t5708;
  t6007 = -0.001*t875;
  t6024 = 0.017699999999999827*t1209;
  t6029 = 0. + t5874 + t6007 + t6024;
  t5261 = -1.*t1963;
  t5307 = 1. + t5261;
  t5606 = -0.0132*t5539;
  t5639 = -0.6255*t357;
  t5814 = t357*t5762;
  t6038 = t1612*t6029;
  t6200 = 0. + t5606 + t5639 + t5814 + t6038;
  t6209 = 0.6255*t5539;
  t6235 = -0.0132*t357;
  t6245 = t1612*t5762;
  t6304 = -1.*t357*t6029;
  t6308 = 0. + t6209 + t6235 + t6245 + t6304;
  t5057 = -1.*t2439;
  t5185 = 1. + t5057;
  t5347 = 0.1907*t5307;
  t5426 = -0.0332*t350;
  t6204 = -1.*t350*t6200;
  t6382 = t1963*t6308;
  t6384 = 0. + t5347 + t5426 + t6204 + t6382;
  t6469 = -0.0332*t5307;
  t6530 = -0.1907*t350;
  t6580 = t1963*t6200;
  t6637 = t350*t6308;
  t6714 = 0. + t6469 + t6530 + t6580 + t6637;
  t4618 = -1.*t150;
  t4688 = 1. + t4618;
  t4835 = -1.*t2876;
  t4864 = 1. + t4835;
  t4946 = -0.0806*t4864;
  t4974 = -0.01*t247;
  t5209 = -0.0806*t5185;
  t5253 = -0.13*t333;
  t6408 = t333*t6384;
  t6715 = t2439*t6714;
  t6720 = 0. + t5209 + t5253 + t6408 + t6715;
  t6729 = t2876*t6720;
  t6832 = 0.13*t5185;
  t6862 = -0.0806*t333;
  t6863 = t2439*t6384;
  t6956 = -1.*t333*t6714;
  t6958 = 0. + t6832 + t6862 + t6863 + t6956;
  t6961 = t247*t6958;
  t7004 = 0. + t4946 + t4974 + t6729 + t6961;
  t3908 = -1.*t333*t3901;
  t4113 = t2439*t4043;
  t4114 = 0. + t3908 + t4113;
  t4176 = t247*t4114;
  t4212 = t2439*t3901;
  t4277 = t333*t4043;
  t4278 = 0. + t4212 + t4277;
  t4360 = t2876*t4278;
  t4406 = 0. + t4176 + t4360;
  t4407 = t150*t4406;
  t4420 = 0. + t4407;
  t4788 = -0.0806*t4688;
  t4814 = -0.004500000000000004*t116;
  t7059 = t150*t7004;
  t7072 = 0. + t4788 + t4814 + t7059;
  t7225 = 0.135*t4688;
  t7226 = 0.1305*t150;
  t7334 = -0.0806*t116;
  t7337 = -1.*t116*t7004;
  t7340 = 0. + t7225 + t7226 + t7334 + t7337;
  t7546 = 0.01*t4864;
  t7554 = -0.0806*t247;
  t7565 = -1.*t247*t6720;
  t7575 = t2876*t6958;
  t7590 = 0. + t7546 + t7554 + t7565 + t7575;
  t7089 = -1.*t116*t2976;
  t7091 = 0. + t7089;
  t117 = 0. + t116;
  t4498 = 0. + t150;
  t7700 = -1.*t116*t4406;
  t7719 = 0. + t7700;
  t7785 = t2876*t4114;
  t7938 = -1.*t247*t4278;
  t7982 = 0. + t7785 + t7938;
  t7395 = t2876*t2793;
  t7408 = -1.*t247*t2927;
  t7432 = 0. + t7395 + t7408;
  t7996 = t7590*t7982;
  t7592 = -1.*t7432*t7590;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[42]=t117;
  p_output1[43]=t3169;
  p_output1[44]=t4420;
  p_output1[45]=0. - 0.08*t4498 + t4420*(-1.*t3169*t7072 - 1.*t7091*t7340 + t7592) + t3169*(t4420*t7072 + t7340*t7719 + t7996);
  p_output1[46]=-0.08*t7091 + t4420*(0. + t117*t7072 + t4498*t7340) - 0.135*t7432 + t117*(-1.*t4420*t7072 - 1.*t7340*t7719 - 1.*t7590*t7982);
  p_output1[47]=t3169*(0. - 1.*t117*t7072 - 1.*t4498*t7340) + t117*(t3169*t7072 + t7091*t7340 + t7432*t7590) - 0.08*t7719 - 0.135*t7982;
  p_output1[48]=0.;
  p_output1[49]=0. - 1.*t2793*t2876 + t247*t2927;
  p_output1[50]=0. - 1.*t2876*t4114 + t247*t4278;
  p_output1[51]=-0.0806 - 1.*(0. - 1.*t2976*t7004 + t7592)*t7982 - 1.*t7432*(0. + t4406*t7004 + t7996);
  p_output1[52]=0. - 0.135*t2976 - 0.1305*t7982;
  p_output1[53]=0. - 0.135*t4406 + 0.1305*t7432;
  p_output1[54]=1.;
  p_output1[55]=0.;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0. - 0.0806*t2793 - 0.01*t2927 - 1.*t4278*t6720 - 1.*t4114*t6958;
  p_output1[59]=0. - 0.0806*t4114 - 0.01*t4278 + t2927*t6720 + t2793*t6958;
  p_output1[60]=1.;
  p_output1[61]=0.;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0. - 0.13*t2132 - 0.0806*t2616 - 1.*t4043*t6384 - 1.*t3901*t6714;
  p_output1[65]=0. - 0.13*t3901 - 0.0806*t4043 + t2616*t6384 + t2132*t6714;
  p_output1[66]=1.;
  p_output1[67]=0.;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0. - 0.0332*t1845 - 0.1907*t2082 - 1.*t3772*t6200 - 1.*t3686*t6308;
  p_output1[71]=0. - 0.0332*t3686 - 0.1907*t3772 + t2082*t6200 + t1845*t6308;
  p_output1[72]=1.;
  p_output1[73]=0.;
  p_output1[74]=0.;
  p_output1[75]=0.;
  p_output1[76]=0. - 0.6255*t1329 - 0.0132*t1723 - 1.*t3523*t5762 - 1.*t1723*t6029;
  p_output1[77]=0. - 0.6255*t1723 - 0.0132*t3523 + t1723*t5762 + t1329*t6029;
  p_output1[78]=1.;
  p_output1[79]=0.;
  p_output1[80]=0.;
  p_output1[81]=0.;
  p_output1[82]=0.05136484439999989;
  p_output1[83]=0.01999455480000023;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void J_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
