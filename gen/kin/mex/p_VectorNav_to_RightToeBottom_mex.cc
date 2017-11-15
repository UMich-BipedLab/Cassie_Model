/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:01 GMT-05:00
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
  double t633;
  double t2218;
  double t2310;
  double t2551;
  double t2905;
  double t3012;
  double t4273;
  double t5839;
  double t5865;
  double t5893;
  double t5939;
  double t5799;
  double t5806;
  double t5826;
  double t5990;
  double t6007;
  double t6009;
  double t6057;
  double t6068;
  double t6075;
  double t6085;
  double t6037;
  double t6048;
  double t6054;
  double t6095;
  double t6096;
  double t6099;
  double t6113;
  double t6115;
  double t6117;
  double t6123;
  double t6109;
  double t6110;
  double t6112;
  double t6132;
  double t6135;
  double t6136;
  double t6160;
  double t1535;
  double t1683;
  double t1878;
  double t2253;
  double t2301;
  double t2305;
  double t2317;
  double t2332;
  double t6174;
  double t3920;
  double t4943;
  double t5480;
  double t5627;
  double t5656;
  double t5705;
  double t6186;
  double t6187;
  double t6188;
  double t6191;
  double t6194;
  double t6195;
  double t5900;
  double t5960;
  double t5964;
  double t6019;
  double t6023;
  double t6030;
  double t6197;
  double t6198;
  double t6199;
  double t6201;
  double t6202;
  double t6203;
  double t6081;
  double t6086;
  double t6087;
  double t6100;
  double t6101;
  double t6105;
  double t6207;
  double t6210;
  double t6211;
  double t6215;
  double t6216;
  double t6219;
  double t6122;
  double t6126;
  double t6127;
  double t6137;
  double t6138;
  double t6139;
  double t6223;
  double t6224;
  double t6225;
  double t6227;
  double t6228;
  double t6229;
  double t6167;
  double t6169;
  double t6170;
  double t6176;
  double t6178;
  double t6180;
  double t6253;
  double t6254;
  double t6255;
  double t6258;
  double t6262;
  double t6263;
  double t6267;
  double t6269;
  double t6271;
  double t6274;
  double t6280;
  double t6284;
  double t6290;
  double t6305;
  double t6316;
  double t6321;
  double t6322;
  double t6344;
  double t6356;
  double t6357;
  double t6359;
  double t6364;
  double t6378;
  double t6386;
  t633 = Cos(var1[8]);
  t2218 = Cos(var1[9]);
  t2310 = Sin(var1[9]);
  t2551 = Cos(var1[10]);
  t2905 = -1.*t2551;
  t3012 = 1. + t2905;
  t4273 = Sin(var1[10]);
  t5839 = Cos(var1[11]);
  t5865 = -1.*t5839;
  t5893 = 1. + t5865;
  t5939 = Sin(var1[11]);
  t5799 = t633*t2218*t2551;
  t5806 = -1.*t633*t2310*t4273;
  t5826 = t5799 + t5806;
  t5990 = -1.*t633*t2551*t2310;
  t6007 = -1.*t633*t2218*t4273;
  t6009 = t5990 + t6007;
  t6057 = Cos(var1[12]);
  t6068 = -1.*t6057;
  t6075 = 1. + t6068;
  t6085 = Sin(var1[12]);
  t6037 = t5839*t5826;
  t6048 = t6009*t5939;
  t6054 = t6037 + t6048;
  t6095 = t5839*t6009;
  t6096 = -1.*t5826*t5939;
  t6099 = t6095 + t6096;
  t6113 = Cos(var1[13]);
  t6115 = -1.*t6113;
  t6117 = 1. + t6115;
  t6123 = Sin(var1[13]);
  t6109 = t6057*t6054;
  t6110 = t6099*t6085;
  t6112 = t6109 + t6110;
  t6132 = t6057*t6099;
  t6135 = -1.*t6054*t6085;
  t6136 = t6132 + t6135;
  t6160 = Cos(var1[7]);
  t1535 = -1.*t633;
  t1683 = 1. + t1535;
  t1878 = Sin(var1[8]);
  t2253 = -1.*t2218;
  t2301 = 1. + t2253;
  t2305 = -0.049*t2301;
  t2317 = -0.09*t2310;
  t2332 = 0. + t2305 + t2317;
  t6174 = Sin(var1[7]);
  t3920 = -0.049*t3012;
  t4943 = -0.21*t4273;
  t5480 = 0. + t3920 + t4943;
  t5627 = -0.21*t3012;
  t5656 = 0.049*t4273;
  t5705 = 0. + t5627 + t5656;
  t6186 = t6160*t2218*t1878;
  t6187 = -1.*t6174*t2310;
  t6188 = t6186 + t6187;
  t6191 = -1.*t2218*t6174;
  t6194 = -1.*t6160*t1878*t2310;
  t6195 = t6191 + t6194;
  t5900 = -0.0016*t5893;
  t5960 = -0.2707*t5939;
  t5964 = 0. + t5900 + t5960;
  t6019 = -0.2707*t5893;
  t6023 = 0.0016*t5939;
  t6030 = 0. + t6019 + t6023;
  t6197 = t2551*t6188;
  t6198 = t6195*t4273;
  t6199 = t6197 + t6198;
  t6201 = t2551*t6195;
  t6202 = -1.*t6188*t4273;
  t6203 = t6201 + t6202;
  t6081 = 0.0184*t6075;
  t6086 = -0.7055*t6085;
  t6087 = 0. + t6081 + t6086;
  t6100 = -0.7055*t6075;
  t6101 = -0.0184*t6085;
  t6105 = 0. + t6100 + t6101;
  t6207 = t5839*t6199;
  t6210 = t6203*t5939;
  t6211 = t6207 + t6210;
  t6215 = t5839*t6203;
  t6216 = -1.*t6199*t5939;
  t6219 = t6215 + t6216;
  t6122 = -0.0216*t6117;
  t6126 = -1.1135*t6123;
  t6127 = 0. + t6122 + t6126;
  t6137 = -1.1135*t6117;
  t6138 = 0.0216*t6123;
  t6139 = 0. + t6137 + t6138;
  t6223 = t6057*t6211;
  t6224 = t6219*t6085;
  t6225 = t6223 + t6224;
  t6227 = t6057*t6219;
  t6228 = -1.*t6211*t6085;
  t6229 = t6227 + t6228;
  t6167 = -0.135*t1683;
  t6169 = 0.049*t1878;
  t6170 = 0. + t6167 + t6169;
  t6176 = -0.09*t2301;
  t6178 = 0.049*t2310;
  t6180 = 0. + t6176 + t6178;
  t6253 = t2218*t6174*t1878;
  t6254 = t6160*t2310;
  t6255 = t6253 + t6254;
  t6258 = t6160*t2218;
  t6262 = -1.*t6174*t1878*t2310;
  t6263 = t6258 + t6262;
  t6267 = t2551*t6255;
  t6269 = t6263*t4273;
  t6271 = t6267 + t6269;
  t6274 = t2551*t6263;
  t6280 = -1.*t6255*t4273;
  t6284 = t6274 + t6280;
  t6290 = t5839*t6271;
  t6305 = t6284*t5939;
  t6316 = t6290 + t6305;
  t6321 = t5839*t6284;
  t6322 = -1.*t6271*t5939;
  t6344 = t6321 + t6322;
  t6356 = t6057*t6316;
  t6357 = t6344*t6085;
  t6359 = t6356 + t6357;
  t6364 = t6057*t6344;
  t6378 = -1.*t6316*t6085;
  t6386 = t6364 + t6378;
  p_output1[0]=-0.03155 - 0.049*t1683 - 0.004500000000000004*t1878 + t5826*t5964 + t6009*t6030 + t6054*t6087 + t6099*t6105 + t6112*t6127 - 1.1312*(-1.*t6112*t6123 + t6113*t6136) + 0.0306*(t6112*t6113 + t6123*t6136) + t6136*t6139 + t2332*t633 + t2218*t5480*t633 - 1.*t2310*t5705*t633;
  p_output1[1]=0. + 0.135*(1. - 1.*t6160) - 1.*t1878*t2332*t6160 - 1.*t6160*t6170 + t6174*t6180 - 1.*t5480*t6188 - 1.*t5705*t6195 - 1.*t5964*t6199 - 1.*t6030*t6203 - 1.*t6087*t6211 - 1.*t6105*t6219 - 1.*t6127*t6225 - 1.*t6139*t6229 + 1.1312*(-1.*t6123*t6225 + t6113*t6229) - 0.0306*(t6113*t6225 + t6123*t6229) + 0.1305*t6160*t633;
  p_output1[2]=-0.07996 - 0.135*t6174 - 1.*t1878*t2332*t6174 - 1.*t6170*t6174 - 1.*t6160*t6180 - 1.*t5480*t6255 - 1.*t5705*t6263 - 1.*t5964*t6271 - 1.*t6030*t6284 - 1.*t6087*t6316 + 0.1305*t6174*t633 - 1.*t6105*t6344 - 1.*t6127*t6359 - 1.*t6139*t6386 + 1.1312*(-1.*t6123*t6359 + t6113*t6386) - 0.0306*(t6113*t6359 + t6123*t6386);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
