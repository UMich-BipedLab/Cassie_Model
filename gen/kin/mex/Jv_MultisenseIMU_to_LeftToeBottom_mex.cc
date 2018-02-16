/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:43 GMT-05:00
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
  double t24;
  double t348;
  double t516;
  double t920;
  double t1038;
  double t1150;
  double t1288;
  double t1387;
  double t1965;
  double t2001;
  double t2045;
  double t2076;
  double t2356;
  double t2357;
  double t2362;
  double t2754;
  double t2913;
  double t2916;
  double t2969;
  double t3046;
  double t3062;
  double t3288;
  double t3382;
  double t3437;
  double t3460;
  double t3787;
  double t3865;
  double t3893;
  double t3957;
  double t3975;
  double t4071;
  double t4415;
  double t4652;
  double t4726;
  double t4794;
  double t4861;
  double t4895;
  double t4900;
  double t5107;
  double t5127;
  double t5152;
  double t5219;
  double t5458;
  double t5461;
  double t5466;
  double t5837;
  double t5844;
  double t5874;
  double t465;
  double t480;
  double t485;
  double t524;
  double t578;
  double t1167;
  double t1305;
  double t1333;
  double t1492;
  double t1586;
  double t1885;
  double t2060;
  double t2304;
  double t2345;
  double t2637;
  double t2686;
  double t2746;
  double t3110;
  double t3316;
  double t3374;
  double t6739;
  double t6743;
  double t6752;
  double t6763;
  double t6798;
  double t6807;
  double t3522;
  double t3770;
  double t3777;
  double t4261;
  double t4464;
  double t4545;
  double t6840;
  double t6845;
  double t6857;
  double t6942;
  double t6952;
  double t6995;
  double t4835;
  double t4840;
  double t4844;
  double t5167;
  double t5224;
  double t5381;
  double t7161;
  double t7406;
  double t7444;
  double t7729;
  double t7730;
  double t7731;
  double t5680;
  double t5804;
  double t5817;
  double t7786;
  double t7790;
  double t7884;
  double t7948;
  double t7970;
  double t8051;
  double t8239;
  double t8243;
  double t8252;
  double t8260;
  double t8267;
  double t8268;
  double t8276;
  double t8279;
  double t8280;
  double t8284;
  double t8286;
  double t8297;
  double t8301;
  double t8302;
  double t8304;
  double t8311;
  double t8312;
  double t8316;
  double t8214;
  double t8215;
  double t8220;
  double t8226;
  double t8237;
  double t8256;
  double t8272;
  double t8281;
  double t8299;
  double t8309;
  double t8317;
  double t8318;
  double t8319;
  double t8320;
  double t8329;
  double t8331;
  double t8334;
  double t8335;
  double t8336;
  double t8344;
  double t8348;
  double t8349;
  double t1359;
  double t1910;
  double t2443;
  double t2925;
  double t3481;
  double t3921;
  double t4820;
  double t5024;
  double t5504;
  double t5900;
  double t5964;
  double t5993;
  double t6018;
  double t6039;
  double t6043;
  double t6125;
  double t6157;
  double t6270;
  double t8184;
  double t8213;
  double t6625;
  double t6687;
  double t6754;
  double t6811;
  double t6864;
  double t7065;
  double t7680;
  double t7757;
  double t7886;
  double t8059;
  double t8063;
  double t8121;
  double t8124;
  double t8140;
  double t8152;
  double t8172;
  double t8173;
  double t8175;
  double t8360;
  double t8391;
  double t8392;
  double t8394;
  double t8399;
  double t8377;
  double t8409;
  double t8412;
  double t8401;
  double t8404;
  double t8405;
  double t8388;
  double t8389;
  double t8417;
  double t8419;
  double t8421;
  double t8437;
  double t8439;
  double t8440;
  double t8444;
  double t8446;
  double t8448;
  double t8452;
  double t8454;
  double t8458;
  double t8470;
  double t8471;
  double t8474;
  double t8476;
  double t8477;
  double t8478;
  double t8485;
  double t8486;
  double t8488;
  double t8497;
  double t8498;
  double t8499;
  double t8501;
  double t8502;
  double t8503;
  double t8511;
  double t8512;
  double t8514;
  double t8522;
  double t8523;
  double t8524;
  double t8526;
  double t8529;
  double t8531;
  double t8536;
  double t8537;
  double t8538;
  t24 = Cos(var1[0]);
  t348 = Cos(var1[1]);
  t516 = Sin(var1[1]);
  t920 = Cos(var1[2]);
  t1038 = -1.*t920;
  t1150 = 1. + t1038;
  t1288 = Sin(var1[2]);
  t1387 = Sin(var1[0]);
  t1965 = Cos(var1[3]);
  t2001 = -1.*t1965;
  t2045 = 1. + t2001;
  t2076 = Sin(var1[3]);
  t2356 = t24*t920*t516;
  t2357 = -1.*t1387*t1288;
  t2362 = t2356 + t2357;
  t2754 = -1.*t920*t1387;
  t2913 = -1.*t24*t516*t1288;
  t2916 = t2754 + t2913;
  t2969 = Cos(var1[4]);
  t3046 = -1.*t2969;
  t3062 = 1. + t3046;
  t3288 = Sin(var1[4]);
  t3382 = -1.*t2076*t2362;
  t3437 = t1965*t2916;
  t3460 = t3382 + t3437;
  t3787 = t1965*t2362;
  t3865 = t2076*t2916;
  t3893 = t3787 + t3865;
  t3957 = Cos(var1[5]);
  t3975 = -1.*t3957;
  t4071 = 1. + t3975;
  t4415 = Sin(var1[5]);
  t4652 = t3288*t3460;
  t4726 = t2969*t3893;
  t4794 = t4652 + t4726;
  t4861 = t2969*t3460;
  t4895 = -1.*t3288*t3893;
  t4900 = t4861 + t4895;
  t5107 = Cos(var1[6]);
  t5127 = -1.*t5107;
  t5152 = 1. + t5127;
  t5219 = Sin(var1[6]);
  t5458 = -1.*t4415*t4794;
  t5461 = t3957*t4900;
  t5466 = t5458 + t5461;
  t5837 = t3957*t4794;
  t5844 = t4415*t4900;
  t5874 = t5837 + t5844;
  t465 = -1.*t348;
  t480 = 1. + t465;
  t485 = 0.135*t480;
  t524 = 0.049*t516;
  t578 = 0. + t485 + t524;
  t1167 = -0.049*t1150;
  t1305 = -0.09*t1288;
  t1333 = 0. + t1167 + t1305;
  t1492 = -0.09*t1150;
  t1586 = 0.049*t1288;
  t1885 = 0. + t1492 + t1586;
  t2060 = -0.049*t2045;
  t2304 = -0.21*t2076;
  t2345 = 0. + t2060 + t2304;
  t2637 = -0.21*t2045;
  t2686 = 0.049*t2076;
  t2746 = 0. + t2637 + t2686;
  t3110 = -0.2707*t3062;
  t3316 = 0.0016*t3288;
  t3374 = 0. + t3110 + t3316;
  t6739 = t920*t1387*t516;
  t6743 = t24*t1288;
  t6752 = t6739 + t6743;
  t6763 = t24*t920;
  t6798 = -1.*t1387*t516*t1288;
  t6807 = t6763 + t6798;
  t3522 = -0.0016*t3062;
  t3770 = -0.2707*t3288;
  t3777 = 0. + t3522 + t3770;
  t4261 = 0.0184*t4071;
  t4464 = -0.7055*t4415;
  t4545 = 0. + t4261 + t4464;
  t6840 = -1.*t2076*t6752;
  t6845 = t1965*t6807;
  t6857 = t6840 + t6845;
  t6942 = t1965*t6752;
  t6952 = t2076*t6807;
  t6995 = t6942 + t6952;
  t4835 = -0.7055*t4071;
  t4840 = -0.0184*t4415;
  t4844 = 0. + t4835 + t4840;
  t5167 = -1.1135*t5152;
  t5224 = 0.0216*t5219;
  t5381 = 0. + t5167 + t5224;
  t7161 = t3288*t6857;
  t7406 = t2969*t6995;
  t7444 = t7161 + t7406;
  t7729 = t2969*t6857;
  t7730 = -1.*t3288*t6995;
  t7731 = t7729 + t7730;
  t5680 = -0.0216*t5152;
  t5804 = -1.1135*t5219;
  t5817 = 0. + t5680 + t5804;
  t7786 = -1.*t4415*t7444;
  t7790 = t3957*t7731;
  t7884 = t7786 + t7790;
  t7948 = t3957*t7444;
  t7970 = t4415*t7731;
  t8051 = t7948 + t7970;
  t8239 = -1.*t348*t920*t2076;
  t8243 = -1.*t1965*t348*t1288;
  t8252 = t8239 + t8243;
  t8260 = t1965*t348*t920;
  t8267 = -1.*t348*t2076*t1288;
  t8268 = t8260 + t8267;
  t8276 = t3288*t8252;
  t8279 = t2969*t8268;
  t8280 = t8276 + t8279;
  t8284 = t2969*t8252;
  t8286 = -1.*t3288*t8268;
  t8297 = t8284 + t8286;
  t8301 = -1.*t4415*t8280;
  t8302 = t3957*t8297;
  t8304 = t8301 + t8302;
  t8311 = t3957*t8280;
  t8312 = t4415*t8297;
  t8316 = t8311 + t8312;
  t8214 = 0.049*t348;
  t8215 = t348*t920*t2345;
  t8220 = 0.004500000000000004*t516;
  t8226 = t348*t1333;
  t8237 = -1.*t348*t2746*t1288;
  t8256 = t3374*t8252;
  t8272 = t3777*t8268;
  t8281 = t4545*t8280;
  t8299 = t4844*t8297;
  t8309 = t5381*t8304;
  t8317 = t5817*t8316;
  t8318 = t5219*t8304;
  t8319 = t5107*t8316;
  t8320 = t8318 + t8319;
  t8329 = 0.0306*t8320;
  t8331 = t5107*t8304;
  t8334 = -1.*t5219*t8316;
  t8335 = t8331 + t8334;
  t8336 = -1.1312*t8335;
  t8344 = 0. + t8214 + t8215 + t8220 + t8226 + t8237 + t8256 + t8272 + t8281 + t8299 + t8309 + t8317 + t8329 + t8336;
  t8348 = -1.*t24;
  t8349 = 0. + t8348;
  t1359 = t24*t516*t1333;
  t1910 = -1.*t1387*t1885;
  t2443 = t2345*t2362;
  t2925 = t2746*t2916;
  t3481 = t3374*t3460;
  t3921 = t3777*t3893;
  t4820 = t4545*t4794;
  t5024 = t4844*t4900;
  t5504 = t5381*t5466;
  t5900 = t5817*t5874;
  t5964 = t5219*t5466;
  t5993 = t5107*t5874;
  t6018 = t5964 + t5993;
  t6039 = 0.0306*t6018;
  t6043 = t5107*t5466;
  t6125 = -1.*t5219*t5874;
  t6157 = t6043 + t6125;
  t6270 = -1.1312*t6157;
  t8184 = -1.*t1387;
  t8213 = 0. + t8184;
  t6625 = -1.*t1387*t516*t1333;
  t6687 = -1.*t24*t1885;
  t6754 = -1.*t2345*t6752;
  t6811 = -1.*t2746*t6807;
  t6864 = -1.*t3374*t6857;
  t7065 = -1.*t3777*t6995;
  t7680 = -1.*t4545*t7444;
  t7757 = -1.*t4844*t7731;
  t7886 = -1.*t5381*t7884;
  t8059 = -1.*t5817*t8051;
  t8063 = t5219*t7884;
  t8121 = t5107*t8051;
  t8124 = t8063 + t8121;
  t8140 = -0.0306*t8124;
  t8152 = t5107*t7884;
  t8172 = -1.*t5219*t8051;
  t8173 = t8152 + t8172;
  t8175 = 1.1312*t8173;
  t8360 = -0.004500000000000004*t24*t348;
  t8391 = 0.049*t348*t920;
  t8392 = -0.09*t348*t1288;
  t8394 = 0. + t8391 + t8215 + t8220 + t8392 + t8237 + t8256 + t8272 + t8281 + t8299 + t8309 + t8317 + t8329 + t8336;
  t8399 = 0. + t516;
  t8377 = 0.004500000000000004*t348*t1387;
  t8409 = t348*t1387;
  t8412 = 0. + t8409;
  t8401 = 0.049*t2362;
  t8404 = 0.09*t2916;
  t8405 = 0. + t8360 + t8401 + t2443 + t8404 + t2925 + t3481 + t3921 + t4820 + t5024 + t5504 + t5900 + t6039 + t6270;
  t8388 = -1.*t24*t348;
  t8389 = 0. + t8388;
  t8417 = -0.049*t6752;
  t8419 = -0.09*t6807;
  t8421 = 0. + t8377 + t8417 + t6754 + t8419 + t6811 + t6864 + t7065 + t7680 + t7757 + t7886 + t8059 + t8140 + t8175;
  t8437 = 0.21*t8252;
  t8439 = 0.049*t8268;
  t8440 = 0. + t8437 + t8256 + t8439 + t8272 + t8281 + t8299 + t8309 + t8317 + t8329 + t8336;
  t8444 = 0.21*t3460;
  t8446 = 0.049*t3893;
  t8448 = 0. + t8444 + t3481 + t8446 + t3921 + t4820 + t5024 + t5504 + t5900 + t6039 + t6270;
  t8452 = -0.21*t6857;
  t8454 = -0.049*t6995;
  t8458 = 0. + t8452 + t6864 + t8454 + t7065 + t7680 + t7757 + t7886 + t8059 + t8140 + t8175;
  t8470 = 0.0016*t8280;
  t8471 = 0.2707*t8297;
  t8474 = 0. + t8470 + t8281 + t8471 + t8299 + t8309 + t8317 + t8329 + t8336;
  t8476 = 0.0016*t4794;
  t8477 = 0.2707*t4900;
  t8478 = 0. + t8476 + t4820 + t8477 + t5024 + t5504 + t5900 + t6039 + t6270;
  t8485 = -0.0016*t7444;
  t8486 = -0.2707*t7731;
  t8488 = 0. + t8485 + t7680 + t8486 + t7757 + t7886 + t8059 + t8140 + t8175;
  t8497 = 0.7055*t8304;
  t8498 = -0.0184*t8316;
  t8499 = 0. + t8497 + t8309 + t8498 + t8317 + t8329 + t8336;
  t8501 = 0.7055*t5466;
  t8502 = -0.0184*t5874;
  t8503 = 0. + t8501 + t5504 + t8502 + t5900 + t6039 + t6270;
  t8511 = -0.7055*t7884;
  t8512 = 0.0184*t8051;
  t8514 = 0. + t8511 + t7886 + t8512 + t8059 + t8140 + t8175;
  t8522 = 0.052199999999999996*t8320;
  t8523 = -0.01770000000000005*t8335;
  t8524 = 0. + t8522 + t8523;
  t8526 = 0.052199999999999996*t6018;
  t8529 = -0.01770000000000005*t6157;
  t8531 = 0. + t8526 + t8529;
  t8536 = -0.052199999999999996*t8124;
  t8537 = 0.01770000000000005*t8173;
  t8538 = 0. + t8536 + t8537;
  p_output1[0]=0. - 1.*(0. + t1359 + t1910 - 0.135*t24 + t2443 + t2925 + 0.1305*t24*t348 + t3481 + t3921 + t4820 + t5024 + t5504 + t24*t578 + t5900 + t6039 + t6270);
  p_output1[1]=0. + 0.135*t1387 - 0.1305*t1387*t348 - 1.*t1387*t578 + t6625 + t6687 + t6754 + t6811 + t6864 + t7065 + t7680 + t7757 + t7886 + t8059 + t8140 + t8175;
  p_output1[2]=0.;
  p_output1[3]=0. + t8213*t8344;
  p_output1[4]=0. - 1.*t8344*t8349;
  p_output1[5]=t8349*(0. + t1359 - 0.09*t1387 + t1910 + t2443 + t2925 + t3481 + t3921 + t4820 + t5024 + 0.049*t24*t516 + t5504 + t5900 + t6039 + t6270 + t8360) - 1.*t8213*(0. - 0.09*t24 - 0.049*t1387*t516 + t6625 + t6687 + t6754 + t6811 + t6864 + t7065 + t7680 + t7757 + t7886 + t8059 + t8140 + t8175 + t8377);
  p_output1[6]=t8389*t8394 - 1.*t8399*t8405;
  p_output1[7]=-1.*t8394*t8412 + t8399*t8421;
  p_output1[8]=t8405*t8412 - 1.*t8389*t8421;
  p_output1[9]=t8389*t8440 - 1.*t8399*t8448;
  p_output1[10]=-1.*t8412*t8440 + t8399*t8458;
  p_output1[11]=t8412*t8448 - 1.*t8389*t8458;
  p_output1[12]=t8389*t8474 - 1.*t8399*t8478;
  p_output1[13]=-1.*t8412*t8474 + t8399*t8488;
  p_output1[14]=t8412*t8478 - 1.*t8389*t8488;
  p_output1[15]=t8389*t8499 - 1.*t8399*t8503;
  p_output1[16]=-1.*t8412*t8499 + t8399*t8514;
  p_output1[17]=t8412*t8503 - 1.*t8389*t8514;
  p_output1[18]=t8389*t8524 - 1.*t8399*t8531;
  p_output1[19]=-1.*t8412*t8524 + t8399*t8538;
  p_output1[20]=t8412*t8531 - 1.*t8389*t8538;
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

#include "Jv_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Jv_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
