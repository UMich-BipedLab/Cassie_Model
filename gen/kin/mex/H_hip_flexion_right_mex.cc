/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:39 GMT-05:00
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
  double t991;
  double t1902;
  double t987;
  double t1641;
  double t2405;
  double t2971;
  double t1840;
  double t2612;
  double t2842;
  double t337;
  double t3140;
  double t3160;
  double t3874;
  double t190;
  double t7206;
  double t7214;
  double t7239;
  double t7257;
  double t7282;
  double t7284;
  double t7286;
  double t7297;
  double t7298;
  double t7299;
  double t2861;
  double t4428;
  double t4889;
  double t7249;
  double t7262;
  double t7263;
  double t7264;
  double t7270;
  double t7271;
  double t7295;
  double t7300;
  double t7302;
  double t7304;
  double t7307;
  double t7312;
  double t7313;
  double t7314;
  double t7316;
  double t7324;
  double t7325;
  double t7326;
  double t7330;
  double t7332;
  double t7333;
  double t7335;
  double t7337;
  double t7340;
  double t7379;
  double t7380;
  double t7411;
  double t7412;
  double t7344;
  double t7345;
  double t7350;
  double t7381;
  double t7382;
  double t7384;
  double t7387;
  double t7392;
  double t7394;
  double t7396;
  double t7399;
  double t7402;
  double t7407;
  double t7408;
  double t7409;
  double t7413;
  double t7414;
  double t7417;
  double t7430;
  double t7431;
  double t7433;
  double t7354;
  double t7356;
  double t7358;
  double t7359;
  double t7360;
  double t7364;
  t991 = Cos(var1[5]);
  t1902 = Sin(var1[3]);
  t987 = Cos(var1[3]);
  t1641 = Sin(var1[4]);
  t2405 = Sin(var1[5]);
  t2971 = Sin(var1[13]);
  t1840 = t987*t991*t1641;
  t2612 = t1902*t2405;
  t2842 = t1840 + t2612;
  t337 = Cos(var1[13]);
  t3140 = -1.*t991*t1902;
  t3160 = t987*t1641*t2405;
  t3874 = t3140 + t3160;
  t190 = Cos(var1[15]);
  t7206 = Sin(var1[15]);
  t7214 = Cos(var1[14]);
  t7239 = Cos(var1[4]);
  t7257 = Sin(var1[14]);
  t7282 = t991*t1902*t1641;
  t7284 = -1.*t987*t2405;
  t7286 = t7282 + t7284;
  t7297 = t987*t991;
  t7298 = t1902*t1641*t2405;
  t7299 = t7297 + t7298;
  t2861 = t337*t2842;
  t4428 = -1.*t2971*t3874;
  t4889 = t2861 + t4428;
  t7249 = t7214*t987*t7239;
  t7262 = t2971*t2842;
  t7263 = t337*t3874;
  t7264 = t7262 + t7263;
  t7270 = t7257*t7264;
  t7271 = t7249 + t7270;
  t7295 = t337*t7286;
  t7300 = -1.*t2971*t7299;
  t7302 = t7295 + t7300;
  t7304 = t7214*t7239*t1902;
  t7307 = t2971*t7286;
  t7312 = t337*t7299;
  t7313 = t7307 + t7312;
  t7314 = t7257*t7313;
  t7316 = t7304 + t7314;
  t7324 = t337*t7239*t991;
  t7325 = -1.*t7239*t2971*t2405;
  t7326 = t7324 + t7325;
  t7330 = -1.*t7214*t1641;
  t7332 = t7239*t991*t2971;
  t7333 = t337*t7239*t2405;
  t7335 = t7332 + t7333;
  t7337 = t7257*t7335;
  t7340 = t7330 + t7337;
  t7379 = -1.*t7214;
  t7380 = 1. + t7379;
  t7411 = -1.*t190;
  t7412 = 1. + t7411;
  t7344 = t7206*t4889;
  t7345 = t190*t7271;
  t7350 = t7344 + t7345;
  t7381 = -0.049*t7380;
  t7382 = -0.135*t7257;
  t7384 = 0. + t7381 + t7382;
  t7387 = 0.135*t2971;
  t7392 = 0. + t7387;
  t7394 = -1.*t337;
  t7396 = 1. + t7394;
  t7399 = -0.135*t7396;
  t7402 = 0. + t7399;
  t7407 = -0.135*t7380;
  t7408 = 0.049*t7257;
  t7409 = 0. + t7407 + t7408;
  t7413 = -0.09*t7412;
  t7414 = 0.049*t7206;
  t7417 = 0. + t7413 + t7414;
  t7430 = -0.049*t7412;
  t7431 = -0.09*t7206;
  t7433 = 0. + t7430 + t7431;
  t7354 = t7206*t7302;
  t7356 = t190*t7316;
  t7358 = t7354 + t7356;
  t7359 = t7206*t7326;
  t7360 = t190*t7340;
  t7364 = t7359 + t7360;
  p_output1[0]=-1.*t190*t4889 + t7206*t7271;
  p_output1[1]=-1.*t190*t7302 + t7206*t7316;
  p_output1[2]=-1.*t190*t7326 + t7206*t7340;
  p_output1[3]=0.;
  p_output1[4]=t7350;
  p_output1[5]=t7358;
  p_output1[6]=t7364;
  p_output1[7]=0.;
  p_output1[8]=-1.*t7214*t7264 + t7239*t7257*t987;
  p_output1[9]=t1902*t7239*t7257 - 1.*t7214*t7313;
  p_output1[10]=-1.*t1641*t7257 - 1.*t7214*t7335;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t190*t4889 - 1.*t7206*t7271) - 0.049*t7350 + t2842*t7392 + t3874*t7402 + t7264*t7409 + t4889*t7417 + t7271*t7433 + t7239*t7384*t987 - 0.135*(t7214*t7264 - 1.*t7239*t7257*t987) + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t1902*t7239*t7257 + t7214*t7313) - 0.09*(t190*t7302 - 1.*t7206*t7316) - 0.049*t7358 + t1902*t7239*t7384 + t7286*t7392 + t7299*t7402 + t7313*t7409 + t7302*t7417 + t7316*t7433 + var1[1];
  p_output1[14]=0. - 0.135*(t1641*t7257 + t7214*t7335) - 0.09*(t190*t7326 - 1.*t7206*t7340) - 0.049*t7364 - 1.*t1641*t7384 + t2405*t7239*t7402 + t7335*t7409 + t7326*t7417 + t7340*t7433 + t7239*t7392*t991 + var1[2];
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

#include "H_hip_flexion_right_mex.hh"

namespace SymExpression
{

void H_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
