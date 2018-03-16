/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:15:57 GMT-04:00
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
  double t48;
  double t122;
  double t131;
  double t119;
  double t137;
  double t115;
  double t147;
  double t149;
  double t153;
  double t127;
  double t139;
  double t140;
  double t157;
  double t109;
  double t181;
  double t186;
  double t189;
  double t141;
  double t167;
  double t176;
  double t190;
  double t108;
  double t201;
  double t204;
  double t205;
  double t180;
  double t193;
  double t195;
  double t207;
  double t37;
  double t11;
  double t82;
  double t243;
  double t247;
  double t249;
  double t231;
  double t233;
  double t237;
  double t255;
  double t256;
  double t259;
  double t241;
  double t250;
  double t253;
  double t264;
  double t265;
  double t266;
  double t254;
  double t260;
  double t261;
  double t270;
  double t271;
  double t274;
  double t263;
  double t267;
  double t268;
  double t297;
  double t298;
  double t299;
  double t289;
  double t291;
  double t294;
  double t307;
  double t308;
  double t309;
  double t295;
  double t301;
  double t304;
  double t317;
  double t318;
  double t319;
  double t305;
  double t311;
  double t314;
  double t324;
  double t325;
  double t326;
  double t315;
  double t321;
  double t322;
  double t196;
  double t211;
  double t213;
  double t215;
  double t217;
  double t221;
  double t269;
  double t275;
  double t278;
  double t281;
  double t284;
  double t285;
  double t323;
  double t327;
  double t328;
  double t330;
  double t332;
  double t333;
  t48 = Cos(var1[8]);
  t122 = Cos(var1[10]);
  t131 = Sin(var1[9]);
  t119 = Cos(var1[9]);
  t137 = Sin(var1[10]);
  t115 = Cos(var1[11]);
  t147 = -1.*t48*t122*t131;
  t149 = -1.*t48*t119*t137;
  t153 = t147 + t149;
  t127 = t48*t119*t122;
  t139 = -1.*t48*t131*t137;
  t140 = t127 + t139;
  t157 = Sin(var1[11]);
  t109 = Cos(var1[12]);
  t181 = t115*t153;
  t186 = -1.*t140*t157;
  t189 = t181 + t186;
  t141 = t115*t140;
  t167 = t153*t157;
  t176 = t141 + t167;
  t190 = Sin(var1[12]);
  t108 = Cos(var1[13]);
  t201 = t109*t189;
  t204 = -1.*t176*t190;
  t205 = t201 + t204;
  t180 = t109*t176;
  t193 = t189*t190;
  t195 = t180 + t193;
  t207 = Sin(var1[13]);
  t37 = Cos(var1[7]);
  t11 = Sin(var1[8]);
  t82 = Sin(var1[7]);
  t243 = -1.*t119*t82;
  t247 = -1.*t37*t11*t131;
  t249 = t243 + t247;
  t231 = t37*t119*t11;
  t233 = -1.*t82*t131;
  t237 = t231 + t233;
  t255 = t122*t249;
  t256 = -1.*t237*t137;
  t259 = t255 + t256;
  t241 = t122*t237;
  t250 = t249*t137;
  t253 = t241 + t250;
  t264 = t115*t259;
  t265 = -1.*t253*t157;
  t266 = t264 + t265;
  t254 = t115*t253;
  t260 = t259*t157;
  t261 = t254 + t260;
  t270 = t109*t266;
  t271 = -1.*t261*t190;
  t274 = t270 + t271;
  t263 = t109*t261;
  t267 = t266*t190;
  t268 = t263 + t267;
  t297 = t37*t119;
  t298 = -1.*t82*t11*t131;
  t299 = t297 + t298;
  t289 = t119*t82*t11;
  t291 = t37*t131;
  t294 = t289 + t291;
  t307 = t122*t299;
  t308 = -1.*t294*t137;
  t309 = t307 + t308;
  t295 = t122*t294;
  t301 = t299*t137;
  t304 = t295 + t301;
  t317 = t115*t309;
  t318 = -1.*t304*t157;
  t319 = t317 + t318;
  t305 = t115*t304;
  t311 = t309*t157;
  t314 = t305 + t311;
  t324 = t109*t319;
  t325 = -1.*t314*t190;
  t326 = t324 + t325;
  t315 = t109*t314;
  t321 = t319*t190;
  t322 = t315 + t321;
  t196 = t108*t195;
  t211 = t205*t207;
  t213 = t196 + t211;
  t215 = t108*t205;
  t217 = -1.*t195*t207;
  t221 = t215 + t217;
  t269 = t108*t268;
  t275 = t274*t207;
  t278 = t269 + t275;
  t281 = t108*t274;
  t284 = -1.*t268*t207;
  t285 = t281 + t284;
  t323 = t108*t322;
  t327 = t326*t207;
  t328 = t323 + t327;
  t330 = t108*t326;
  t332 = -1.*t322*t207;
  t333 = t330 + t332;
  p_output1[0]=0. + t11;
  p_output1[1]=0. + t37*t48;
  p_output1[2]=0. + t48*t82;
  p_output1[3]=0. + 0.642788*t213 + 0.766044*t221;
  p_output1[4]=0. - 0.642788*t278 - 0.766044*t285;
  p_output1[5]=0. - 0.642788*t328 - 0.766044*t333;
  p_output1[6]=0. - 0.766044*t213 + 0.642788*t221;
  p_output1[7]=0. + 0.766044*t278 - 0.642788*t285;
  p_output1[8]=0. + 0.766044*t328 - 0.642788*t333;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
