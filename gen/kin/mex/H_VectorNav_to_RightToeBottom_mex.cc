/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:12 GMT-05:00
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
  double t402;
  double t4417;
  double t4445;
  double t4411;
  double t4450;
  double t4393;
  double t5076;
  double t5388;
  double t5531;
  double t4441;
  double t4456;
  double t4546;
  double t5634;
  double t4392;
  double t5882;
  double t5883;
  double t5888;
  double t5039;
  double t5843;
  double t5853;
  double t5889;
  double t4391;
  double t5910;
  double t5911;
  double t5912;
  double t5868;
  double t5896;
  double t5902;
  double t5917;
  double t357;
  double t330;
  double t4096;
  double t5964;
  double t5965;
  double t5966;
  double t5957;
  double t5958;
  double t5960;
  double t5988;
  double t5990;
  double t5993;
  double t5962;
  double t5976;
  double t5981;
  double t6033;
  double t6039;
  double t6043;
  double t5985;
  double t5999;
  double t6001;
  double t6053;
  double t6054;
  double t6059;
  double t6024;
  double t6045;
  double t6049;
  double t6127;
  double t6133;
  double t6140;
  double t6099;
  double t6104;
  double t6109;
  double t6157;
  double t6164;
  double t6171;
  double t6113;
  double t6144;
  double t6149;
  double t6208;
  double t6209;
  double t6219;
  double t6150;
  double t6174;
  double t6181;
  double t6242;
  double t6268;
  double t6269;
  double t6188;
  double t6225;
  double t6237;
  double t5907;
  double t5918;
  double t5919;
  double t5930;
  double t5933;
  double t5940;
  double t6052;
  double t6063;
  double t6066;
  double t6069;
  double t6070;
  double t6075;
  double t6238;
  double t6275;
  double t6277;
  double t6286;
  double t6287;
  double t6290;
  double t6391;
  double t6394;
  double t6456;
  double t6466;
  double t6492;
  double t6494;
  double t6521;
  double t6528;
  double t6339;
  double t6340;
  double t6358;
  double t6368;
  double t6376;
  double t6380;
  double t6384;
  double t6401;
  double t6411;
  double t6415;
  double t6421;
  double t6424;
  double t6445;
  double t6468;
  double t6469;
  double t6471;
  double t6482;
  double t6489;
  double t6490;
  double t6495;
  double t6496;
  double t6498;
  double t6502;
  double t6505;
  double t6506;
  double t6529;
  double t6531;
  double t6533;
  double t6552;
  double t6553;
  double t6557;
  double t6588;
  double t6591;
  double t6593;
  double t6607;
  double t6610;
  double t6616;
  t402 = Cos(var1[8]);
  t4417 = Cos(var1[10]);
  t4445 = Sin(var1[9]);
  t4411 = Cos(var1[9]);
  t4450 = Sin(var1[10]);
  t4393 = Cos(var1[11]);
  t5076 = -1.*t402*t4417*t4445;
  t5388 = -1.*t402*t4411*t4450;
  t5531 = t5076 + t5388;
  t4441 = t402*t4411*t4417;
  t4456 = -1.*t402*t4445*t4450;
  t4546 = t4441 + t4456;
  t5634 = Sin(var1[11]);
  t4392 = Cos(var1[12]);
  t5882 = t4393*t5531;
  t5883 = -1.*t4546*t5634;
  t5888 = t5882 + t5883;
  t5039 = t4393*t4546;
  t5843 = t5531*t5634;
  t5853 = t5039 + t5843;
  t5889 = Sin(var1[12]);
  t4391 = Cos(var1[13]);
  t5910 = t4392*t5888;
  t5911 = -1.*t5853*t5889;
  t5912 = t5910 + t5911;
  t5868 = t4392*t5853;
  t5896 = t5888*t5889;
  t5902 = t5868 + t5896;
  t5917 = Sin(var1[13]);
  t357 = Cos(var1[7]);
  t330 = Sin(var1[8]);
  t4096 = Sin(var1[7]);
  t5964 = -1.*t4411*t4096;
  t5965 = -1.*t357*t330*t4445;
  t5966 = t5964 + t5965;
  t5957 = t357*t4411*t330;
  t5958 = -1.*t4096*t4445;
  t5960 = t5957 + t5958;
  t5988 = t4417*t5966;
  t5990 = -1.*t5960*t4450;
  t5993 = t5988 + t5990;
  t5962 = t4417*t5960;
  t5976 = t5966*t4450;
  t5981 = t5962 + t5976;
  t6033 = t4393*t5993;
  t6039 = -1.*t5981*t5634;
  t6043 = t6033 + t6039;
  t5985 = t4393*t5981;
  t5999 = t5993*t5634;
  t6001 = t5985 + t5999;
  t6053 = t4392*t6043;
  t6054 = -1.*t6001*t5889;
  t6059 = t6053 + t6054;
  t6024 = t4392*t6001;
  t6045 = t6043*t5889;
  t6049 = t6024 + t6045;
  t6127 = t357*t4411;
  t6133 = -1.*t4096*t330*t4445;
  t6140 = t6127 + t6133;
  t6099 = t4411*t4096*t330;
  t6104 = t357*t4445;
  t6109 = t6099 + t6104;
  t6157 = t4417*t6140;
  t6164 = -1.*t6109*t4450;
  t6171 = t6157 + t6164;
  t6113 = t4417*t6109;
  t6144 = t6140*t4450;
  t6149 = t6113 + t6144;
  t6208 = t4393*t6171;
  t6209 = -1.*t6149*t5634;
  t6219 = t6208 + t6209;
  t6150 = t4393*t6149;
  t6174 = t6171*t5634;
  t6181 = t6150 + t6174;
  t6242 = t4392*t6219;
  t6268 = -1.*t6181*t5889;
  t6269 = t6242 + t6268;
  t6188 = t4392*t6181;
  t6225 = t6219*t5889;
  t6237 = t6188 + t6225;
  t5907 = t4391*t5902;
  t5918 = t5912*t5917;
  t5919 = t5907 + t5918;
  t5930 = t4391*t5912;
  t5933 = -1.*t5902*t5917;
  t5940 = t5930 + t5933;
  t6052 = t4391*t6049;
  t6063 = t6059*t5917;
  t6066 = t6052 + t6063;
  t6069 = t4391*t6059;
  t6070 = -1.*t6049*t5917;
  t6075 = t6069 + t6070;
  t6238 = t4391*t6237;
  t6275 = t6269*t5917;
  t6277 = t6238 + t6275;
  t6286 = t4391*t6269;
  t6287 = -1.*t6237*t5917;
  t6290 = t6286 + t6287;
  t6391 = -1.*t4417;
  t6394 = 1. + t6391;
  t6456 = -1.*t4393;
  t6466 = 1. + t6456;
  t6492 = -1.*t4392;
  t6494 = 1. + t6492;
  t6521 = -1.*t4391;
  t6528 = 1. + t6521;
  t6339 = -1.*t402;
  t6340 = 1. + t6339;
  t6358 = -1.*t4411;
  t6368 = 1. + t6358;
  t6376 = -0.049*t6368;
  t6380 = -0.09*t4445;
  t6384 = 0. + t6376 + t6380;
  t6401 = -0.049*t6394;
  t6411 = -0.21*t4450;
  t6415 = 0. + t6401 + t6411;
  t6421 = -0.21*t6394;
  t6424 = 0.049*t4450;
  t6445 = 0. + t6421 + t6424;
  t6468 = -0.0016*t6466;
  t6469 = -0.2707*t5634;
  t6471 = 0. + t6468 + t6469;
  t6482 = -0.2707*t6466;
  t6489 = 0.0016*t5634;
  t6490 = 0. + t6482 + t6489;
  t6495 = 0.0184*t6494;
  t6496 = -0.7055*t5889;
  t6498 = 0. + t6495 + t6496;
  t6502 = -0.7055*t6494;
  t6505 = -0.0184*t5889;
  t6506 = 0. + t6502 + t6505;
  t6529 = -0.0216*t6528;
  t6531 = -1.1135*t5917;
  t6533 = 0. + t6529 + t6531;
  t6552 = -1.1135*t6528;
  t6553 = 0.0216*t5917;
  t6557 = 0. + t6552 + t6553;
  t6588 = -0.135*t6340;
  t6591 = 0.049*t330;
  t6593 = 0. + t6588 + t6591;
  t6607 = -0.09*t6368;
  t6610 = 0.049*t4445;
  t6616 = 0. + t6607 + t6610;
  p_output1[0]=0. + t330;
  p_output1[1]=0. + t357*t402;
  p_output1[2]=0. + t402*t4096;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t5919 + 0.766044*t5940;
  p_output1[5]=0. - 0.642788*t6066 - 0.766044*t6075;
  p_output1[6]=0. - 0.642788*t6277 - 0.766044*t6290;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t5919 + 0.642788*t5940;
  p_output1[9]=0. + 0.766044*t6066 - 0.642788*t6075;
  p_output1[10]=0. + 0.766044*t6277 - 0.642788*t6290;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t330 + 0.0306*t5919 - 1.1312*t5940 - 0.049*t6340 + t402*t6384 + t402*t4411*t6415 - 1.*t402*t4445*t6445 + t4546*t6471 + t5531*t6490 + t5853*t6498 + t5888*t6506 + t5902*t6533 + t5912*t6557;
  p_output1[13]=0. + 0.135*(1. - 1.*t357) + 0.1305*t357*t402 - 0.0306*t6066 + 1.1312*t6075 - 1.*t330*t357*t6384 - 1.*t5960*t6415 - 1.*t5966*t6445 - 1.*t5981*t6471 - 1.*t5993*t6490 - 1.*t6001*t6498 - 1.*t6043*t6506 - 1.*t6049*t6533 - 1.*t6059*t6557 - 1.*t357*t6593 + t4096*t6616;
  p_output1[14]=-0.07996 - 0.135*t4096 + 0.1305*t402*t4096 - 0.0306*t6277 + 1.1312*t6290 - 1.*t330*t4096*t6384 - 1.*t6109*t6415 - 1.*t6140*t6445 - 1.*t6149*t6471 - 1.*t6171*t6490 - 1.*t6181*t6498 - 1.*t6219*t6506 - 1.*t6237*t6533 - 1.*t6269*t6557 - 1.*t4096*t6593 - 1.*t357*t6616;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
