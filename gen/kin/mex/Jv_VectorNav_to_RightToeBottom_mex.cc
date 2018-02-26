/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:14 GMT-05:00
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
  double t86;
  double t1277;
  double t1641;
  double t2031;
  double t1377;
  double t1813;
  double t1836;
  double t1272;
  double t2140;
  double t2415;
  double t2471;
  double t3181;
  double t1889;
  double t2664;
  double t2812;
  double t1148;
  double t3295;
  double t3564;
  double t3596;
  double t3896;
  double t2885;
  double t3702;
  double t3814;
  double t1118;
  double t4029;
  double t4172;
  double t4221;
  double t4506;
  double t358;
  double t6007;
  double t6044;
  double t5827;
  double t5831;
  double t6054;
  double t6067;
  double t6101;
  double t6124;
  double t6167;
  double t6180;
  double t6209;
  double t6293;
  double t5778;
  double t5781;
  double t5876;
  double t5981;
  double t6126;
  double t6296;
  double t6382;
  double t6427;
  double t6525;
  double t6554;
  double t6637;
  double t6715;
  double t5533;
  double t5737;
  double t5801;
  double t5807;
  double t6391;
  double t6741;
  double t6832;
  double t6863;
  double t6909;
  double t6979;
  double t7044;
  double t7088;
  double t5380;
  double t3828;
  double t4222;
  double t4357;
  double t4465;
  double t4643;
  double t4705;
  double t4748;
  double t4822;
  double t4945;
  double t5196;
  double t5265;
  double t5426;
  double t5442;
  double t5480;
  double t5517;
  double t5746;
  double t5755;
  double t6862;
  double t7151;
  double t7195;
  double t7225;
  double t7299;
  double t7334;
  double t7352;
  double t7370;
  double t7441;
  double t7444;
  double t7518;
  double t9183;
  double t9187;
  double t9188;
  double t9182;
  double t9198;
  double t9199;
  double t9206;
  double t9212;
  double t9205;
  double t9214;
  double t9216;
  double t9224;
  double t9231;
  double t9232;
  double t5061;
  double t5137;
  double t5347;
  double t5424;
  double t7539;
  double t7585;
  double t9217;
  double t9233;
  double t9236;
  double t9237;
  double t9239;
  double t9240;
  double t9241;
  double t9245;
  double t9251;
  double t9255;
  double t9258;
  double t7767;
  double t7777;
  double t8067;
  double t8081;
  double t8262;
  double t8794;
  double t9056;
  double t9062;
  double t9092;
  double t9119;
  double t7621;
  double t7675;
  double t223;
  double t9306;
  double t9268;
  double t9269;
  double t9275;
  double t9276;
  double t9277;
  double t8430;
  double t8465;
  double t8584;
  double t9284;
  double t9133;
  t86 = Cos(var1[8]);
  t1277 = Cos(var1[13]);
  t1641 = Sin(var1[13]);
  t2031 = Cos(var1[12]);
  t1377 = 0.642788*t1277;
  t1813 = -0.766044*t1641;
  t1836 = t1377 + t1813;
  t1272 = Sin(var1[12]);
  t2140 = -0.766044*t1277;
  t2415 = -0.642788*t1641;
  t2471 = t2140 + t2415;
  t3181 = Cos(var1[11]);
  t1889 = -1.*t1272*t1836;
  t2664 = t2031*t2471;
  t2812 = 0. + t1889 + t2664;
  t1148 = Sin(var1[11]);
  t3295 = t2031*t1836;
  t3564 = t1272*t2471;
  t3596 = 0. + t3295 + t3564;
  t3896 = Cos(var1[10]);
  t2885 = t1148*t2812;
  t3702 = t3181*t3596;
  t3814 = 0. + t2885 + t3702;
  t1118 = Sin(var1[10]);
  t4029 = t3181*t2812;
  t4172 = -1.*t1148*t3596;
  t4221 = 0. + t4029 + t4172;
  t4506 = Cos(var1[9]);
  t358 = Sin(var1[9]);
  t6007 = -1.*t1277;
  t6044 = 1. + t6007;
  t5827 = -1.*t2031;
  t5831 = 1. + t5827;
  t6054 = 1.0335*t6044;
  t6067 = 1.0512*t1277;
  t6101 = -0.052199999999999996*t1641;
  t6124 = 0. + t6054 + t6067 + t6101;
  t6167 = -0.0532*t6044;
  t6180 = -0.001*t1277;
  t6209 = 0.017699999999999827*t1641;
  t6293 = 0. + t6167 + t6180 + t6209;
  t5778 = -1.*t3181;
  t5781 = 1. + t5778;
  t5876 = -0.0132*t5831;
  t5981 = -0.6255*t1272;
  t6126 = t1272*t6124;
  t6296 = t2031*t6293;
  t6382 = 0. + t5876 + t5981 + t6126 + t6296;
  t6427 = 0.6255*t5831;
  t6525 = -0.0132*t1272;
  t6554 = t2031*t6124;
  t6637 = -1.*t1272*t6293;
  t6715 = 0. + t6427 + t6525 + t6554 + t6637;
  t5533 = -1.*t3896;
  t5737 = 1. + t5533;
  t5801 = 0.1907*t5781;
  t5807 = -0.0332*t1148;
  t6391 = -1.*t1148*t6382;
  t6741 = t3181*t6715;
  t6832 = 0. + t5801 + t5807 + t6391 + t6741;
  t6863 = -0.0332*t5781;
  t6909 = -0.1907*t1148;
  t6979 = t3181*t6382;
  t7044 = t1148*t6715;
  t7088 = 0. + t6863 + t6909 + t6979 + t7044;
  t5380 = Sin(var1[8]);
  t3828 = -1.*t1118*t3814;
  t4222 = t3896*t4221;
  t4357 = 0. + t3828 + t4222;
  t4465 = t358*t4357;
  t4643 = t3896*t3814;
  t4705 = t1118*t4221;
  t4748 = 0. + t4643 + t4705;
  t4822 = t4506*t4748;
  t4945 = 0. + t4465 + t4822;
  t5196 = -1.*t86;
  t5265 = 1. + t5196;
  t5426 = -1.*t4506;
  t5442 = 1. + t5426;
  t5480 = -0.0806*t5442;
  t5517 = -0.01*t358;
  t5746 = -0.0806*t5737;
  t5755 = -0.13*t1118;
  t6862 = t1118*t6832;
  t7151 = t3896*t7088;
  t7195 = 0. + t5746 + t5755 + t6862 + t7151;
  t7225 = t4506*t7195;
  t7299 = 0.13*t5737;
  t7334 = -0.0806*t1118;
  t7352 = t3896*t6832;
  t7370 = -1.*t1118*t7088;
  t7441 = 0. + t7299 + t7334 + t7352 + t7370;
  t7444 = t358*t7441;
  t7518 = 0. + t5480 + t5517 + t7225 + t7444;
  t9183 = -0.642788*t1277;
  t9187 = 0.766044*t1641;
  t9188 = t9183 + t9187;
  t9182 = -1.*t1272*t2471;
  t9198 = t2031*t9188;
  t9199 = 0. + t9182 + t9198;
  t9206 = t1272*t9188;
  t9212 = 0. + t2664 + t9206;
  t9205 = t1148*t9199;
  t9214 = t3181*t9212;
  t9216 = 0. + t9205 + t9214;
  t9224 = t3181*t9199;
  t9231 = -1.*t1148*t9212;
  t9232 = 0. + t9224 + t9231;
  t5061 = t86*t4945;
  t5137 = 0. + t5061;
  t5347 = -0.0806*t5265;
  t5424 = -0.004500000000000004*t5380;
  t7539 = t86*t7518;
  t7585 = 0. + t5347 + t5424 + t7539;
  t9217 = -1.*t1118*t9216;
  t9233 = t3896*t9232;
  t9236 = 0. + t9217 + t9233;
  t9237 = t358*t9236;
  t9239 = t3896*t9216;
  t9240 = t1118*t9232;
  t9241 = 0. + t9239 + t9240;
  t9245 = t4506*t9241;
  t9251 = 0. + t9237 + t9245;
  t9255 = t86*t9251;
  t9258 = 0. + t9255;
  t7767 = 0.135*t5265;
  t7777 = 0.1305*t86;
  t8067 = -0.0806*t5380;
  t8081 = -1.*t5380*t7518;
  t8262 = 0. + t7767 + t7777 + t8067 + t8081;
  t8794 = 0.01*t5442;
  t9056 = -0.0806*t358;
  t9062 = -1.*t358*t7195;
  t9092 = t4506*t7441;
  t9119 = 0. + t8794 + t9056 + t9062 + t9092;
  t7621 = -1.*t5380*t4945;
  t7675 = 0. + t7621;
  t223 = 0. + t86;
  t9306 = 0. + t5380;
  t9268 = -1.*t5380*t9251;
  t9269 = 0. + t9268;
  t9275 = t4506*t9236;
  t9276 = -1.*t358*t9241;
  t9277 = 0. + t9275 + t9276;
  t8430 = t4506*t4357;
  t8465 = -1.*t358*t4748;
  t8584 = 0. + t8430 + t8465;
  t9284 = t9119*t9277;
  t9133 = -1.*t8584*t9119;
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
  p_output1[21]=0. - 0.08*t223 + (-1.*t5137*t7585 - 1.*t7675*t8262 + t9133)*t9258 + t5137*(t7585*t9258 + t8262*t9269 + t9284);
  p_output1[22]=-0.08*t7675 - 0.135*t8584 + (-1.*t7585*t9258 - 1.*t8262*t9269 - 1.*t9119*t9277)*t9306 + t9258*(0. + t223*t8262 + t7585*t9306);
  p_output1[23]=-0.08*t9269 - 0.135*t9277 + (t5137*t7585 + t7675*t8262 + t8584*t9119)*t9306 + t5137*(0. - 1.*t223*t8262 - 1.*t7585*t9306);
  p_output1[24]=-0.0806 - 1.*(0. - 1.*t4945*t7518 + t9133)*t9277 - 1.*t8584*(0. + t7518*t9251 + t9284);
  p_output1[25]=0. - 0.135*t4945 - 0.1305*t9277;
  p_output1[26]=0. + 0.1305*t8584 - 0.135*t9251;
  p_output1[27]=0.;
  p_output1[28]=0. - 0.0806*t4357 - 0.01*t4748 - 1.*t7441*t9236 - 1.*t7195*t9241;
  p_output1[29]=0. + t4748*t7195 + t4357*t7441 - 0.0806*t9236 - 0.01*t9241;
  p_output1[30]=0.;
  p_output1[31]=0. - 0.13*t3814 - 0.0806*t4221 - 1.*t7088*t9216 - 1.*t6832*t9232;
  p_output1[32]=0. + t4221*t6832 + t3814*t7088 - 0.13*t9216 - 0.0806*t9232;
  p_output1[33]=0.;
  p_output1[34]=0. - 0.0332*t2812 - 0.1907*t3596 - 1.*t6715*t9199 - 1.*t6382*t9212;
  p_output1[35]=0. + t3596*t6382 + t2812*t6715 - 0.0332*t9199 - 0.1907*t9212;
  p_output1[36]=0.;
  p_output1[37]=0. - 0.6255*t1836 - 0.0132*t2471 - 1.*t2471*t6293 - 1.*t6124*t9188;
  p_output1[38]=0. - 0.6255*t2471 + t2471*t6124 + t1836*t6293 - 0.0132*t9188;
  p_output1[39]=0.;
  p_output1[40]=0.05136484439999989;
  p_output1[41]=0.01999455480000023;
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

#include "Jv_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jv_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
