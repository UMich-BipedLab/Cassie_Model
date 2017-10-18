/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:33 GMT-04:00
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
  double t137;
  double t130;
  double t138;
  double t131;
  double t139;
  double t98;
  double t132;
  double t148;
  double t149;
  double t152;
  double t157;
  double t158;
  double t159;
  double t168;
  double t185;
  double t186;
  double t188;
  double t177;
  double t180;
  double t181;
  double t189;
  double t216;
  double t217;
  double t218;
  double t222;
  double t210;
  double t213;
  double t214;
  double t226;
  double t195;
  double t197;
  double t198;
  double t200;
  double t204;
  double t205;
  double t208;
  double t241;
  double t242;
  double t243;
  double t104;
  double t107;
  double t116;
  double t118;
  double t161;
  double t162;
  double t169;
  double t171;
  double t173;
  double t174;
  double t254;
  double t255;
  double t256;
  double t258;
  double t259;
  double t260;
  double t191;
  double t192;
  double t199;
  double t201;
  double t202;
  double t266;
  double t267;
  double t268;
  double t262;
  double t263;
  double t264;
  double t219;
  double t223;
  double t224;
  double t227;
  double t228;
  double t229;
  double t274;
  double t275;
  double t276;
  double t237;
  double t238;
  double t239;
  double t270;
  double t271;
  double t272;
  double t283;
  double t284;
  double t285;
  double t302;
  double t303;
  double t304;
  double t298;
  double t299;
  double t300;
  double t310;
  double t311;
  double t312;
  double t306;
  double t307;
  double t308;
  double t319;
  double t320;
  double t321;
  t137 = Cos(var1[3]);
  t130 = Cos(var1[5]);
  t138 = Sin(var1[4]);
  t131 = Sin(var1[3]);
  t139 = Sin(var1[5]);
  t98 = Cos(var1[6]);
  t132 = -1.*t130*t131;
  t148 = t137*t138*t139;
  t149 = t132 + t148;
  t152 = t137*t130*t138;
  t157 = t131*t139;
  t158 = t152 + t157;
  t159 = Sin(var1[6]);
  t168 = Cos(var1[7]);
  t185 = t98*t158;
  t186 = -1.*t149*t159;
  t188 = t185 + t186;
  t177 = t98*t149;
  t180 = t158*t159;
  t181 = t177 + t180;
  t189 = Sin(var1[7]);
  t216 = Cos(var1[8]);
  t217 = -1.*t216;
  t218 = 1. + t217;
  t222 = Sin(var1[8]);
  t210 = t168*t181;
  t213 = t188*t189;
  t214 = t210 + t213;
  t226 = Cos(var1[4]);
  t195 = Cos(var1[9]);
  t197 = -1.*t195;
  t198 = 1. + t197;
  t200 = Sin(var1[9]);
  t204 = t168*t188;
  t205 = -1.*t181*t189;
  t208 = t204 + t205;
  t241 = t137*t226*t216;
  t242 = t214*t222;
  t243 = t241 + t242;
  t104 = -1.*t98;
  t107 = 1. + t104;
  t116 = 0.135*t107;
  t118 = 0. + t116;
  t161 = -0.135*t159;
  t162 = 0. + t161;
  t169 = -1.*t168;
  t171 = 1. + t169;
  t173 = 0.135*t171;
  t174 = 0. + t173;
  t254 = t137*t130;
  t255 = t131*t138*t139;
  t256 = t254 + t255;
  t258 = t130*t131*t138;
  t259 = -1.*t137*t139;
  t260 = t258 + t259;
  t191 = -0.135*t189;
  t192 = 0. + t191;
  t199 = -0.09*t198;
  t201 = 0.049*t200;
  t202 = 0. + t199 + t201;
  t266 = t98*t260;
  t267 = -1.*t256*t159;
  t268 = t266 + t267;
  t262 = t98*t256;
  t263 = t260*t159;
  t264 = t262 + t263;
  t219 = 0.135*t218;
  t223 = 0.049*t222;
  t224 = 0. + t219 + t223;
  t227 = -0.049*t218;
  t228 = 0.135*t222;
  t229 = 0. + t227 + t228;
  t274 = t168*t264;
  t275 = t268*t189;
  t276 = t274 + t275;
  t237 = -0.049*t198;
  t238 = -0.09*t200;
  t239 = 0. + t237 + t238;
  t270 = t168*t268;
  t271 = -1.*t264*t189;
  t272 = t270 + t271;
  t283 = t226*t216*t131;
  t284 = t276*t222;
  t285 = t283 + t284;
  t302 = t226*t130*t98;
  t303 = -1.*t226*t139*t159;
  t304 = t302 + t303;
  t298 = t226*t98*t139;
  t299 = t226*t130*t159;
  t300 = t298 + t299;
  t310 = t168*t300;
  t311 = t304*t189;
  t312 = t310 + t311;
  t306 = t168*t304;
  t307 = -1.*t300*t189;
  t308 = t306 + t307;
  t319 = -1.*t216*t138;
  t320 = t312*t222;
  t321 = t319 + t320;
  p_output1[0]=0. + t118*t149 + t158*t162 + t174*t181 + t188*t192 + t202*t208 + t214*t224 + 0.1305*(t214*t216 - 1.*t137*t222*t226) + t137*t226*t229 + t239*t243 - 0.049*(t200*t208 + t195*t243) - 0.21*(t195*t208 - 1.*t200*t243) + var1[0];
  p_output1[1]=0. + t131*t226*t229 + t118*t256 + t162*t260 + t174*t264 + t192*t268 + t202*t272 + t224*t276 + 0.1305*(-1.*t131*t222*t226 + t216*t276) + t239*t285 - 0.049*(t200*t272 + t195*t285) - 0.21*(t195*t272 - 1.*t200*t285) + var1[1];
  p_output1[2]=0. + t118*t139*t226 + t130*t162*t226 - 1.*t138*t229 + t174*t300 + t192*t304 + t202*t308 + t224*t312 + 0.1305*(t138*t222 + t216*t312) + t239*t321 - 0.049*(t200*t308 + t195*t321) - 0.21*(t195*t308 - 1.*t200*t321) + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "p_knee_joint_left.hh"

namespace SymExpression
{

void p_knee_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
