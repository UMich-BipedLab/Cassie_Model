/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:34 GMT-04:00
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
  double t152;
  double t161;
  double t150;
  double t157;
  double t162;
  double t148;
  double t177;
  double t180;
  double t184;
  double t158;
  double t164;
  double t173;
  double t185;
  double t118;
  double t194;
  double t199;
  double t201;
  double t174;
  double t188;
  double t191;
  double t202;
  double t116;
  double t242;
  double t244;
  double t245;
  double t237;
  double t238;
  double t239;
  double t213;
  double t219;
  double t223;
  double t249;
  double t250;
  double t251;
  double t241;
  double t246;
  double t247;
  double t230;
  double t273;
  double t274;
  double t275;
  double t266;
  double t268;
  double t269;
  double t192;
  double t204;
  double t209;
  double t224;
  double t225;
  double t227;
  double t228;
  double t231;
  double t234;
  double t248;
  double t252;
  double t253;
  double t255;
  double t257;
  double t258;
  double t260;
  double t261;
  double t262;
  double t270;
  double t277;
  double t278;
  double t280;
  double t281;
  double t282;
  double t283;
  double t284;
  double t286;
  double t335;
  double t336;
  double t329;
  double t330;
  double t289;
  double t290;
  double t291;
  double t311;
  double t312;
  double t313;
  double t314;
  double t316;
  double t317;
  double t320;
  double t322;
  double t323;
  double t324;
  double t326;
  double t327;
  double t331;
  double t332;
  double t333;
  double t337;
  double t338;
  double t339;
  double t341;
  double t342;
  double t343;
  double t349;
  double t350;
  double t351;
  double t292;
  double t293;
  double t294;
  double t295;
  double t296;
  double t297;
  t152 = Cos(var1[5]);
  t161 = Sin(var1[3]);
  t150 = Cos(var1[3]);
  t157 = Sin(var1[4]);
  t162 = Sin(var1[5]);
  t148 = Cos(var1[6]);
  t177 = -1.*t152*t161;
  t180 = t150*t157*t162;
  t184 = t177 + t180;
  t158 = t150*t152*t157;
  t164 = t161*t162;
  t173 = t158 + t164;
  t185 = Sin(var1[6]);
  t118 = Cos(var1[7]);
  t194 = t148*t184;
  t199 = t173*t185;
  t201 = t194 + t199;
  t174 = t148*t173;
  t188 = -1.*t184*t185;
  t191 = t174 + t188;
  t202 = Sin(var1[7]);
  t116 = Cos(var1[9]);
  t242 = t150*t152;
  t244 = t161*t157*t162;
  t245 = t242 + t244;
  t237 = t152*t161*t157;
  t238 = -1.*t150*t162;
  t239 = t237 + t238;
  t213 = Sin(var1[9]);
  t219 = Cos(var1[4]);
  t223 = Cos(var1[8]);
  t249 = t148*t245;
  t250 = t239*t185;
  t251 = t249 + t250;
  t241 = t148*t239;
  t246 = -1.*t245*t185;
  t247 = t241 + t246;
  t230 = Sin(var1[8]);
  t273 = t219*t148*t162;
  t274 = t219*t152*t185;
  t275 = t273 + t274;
  t266 = t219*t152*t148;
  t268 = -1.*t219*t162*t185;
  t269 = t266 + t268;
  t192 = t118*t191;
  t204 = -1.*t201*t202;
  t209 = t192 + t204;
  t224 = t150*t219*t223;
  t225 = t118*t201;
  t227 = t191*t202;
  t228 = t225 + t227;
  t231 = t228*t230;
  t234 = t224 + t231;
  t248 = t118*t247;
  t252 = -1.*t251*t202;
  t253 = t248 + t252;
  t255 = t219*t223*t161;
  t257 = t118*t251;
  t258 = t247*t202;
  t260 = t257 + t258;
  t261 = t260*t230;
  t262 = t255 + t261;
  t270 = t118*t269;
  t277 = -1.*t275*t202;
  t278 = t270 + t277;
  t280 = -1.*t223*t157;
  t281 = t118*t275;
  t282 = t269*t202;
  t283 = t281 + t282;
  t284 = t283*t230;
  t286 = t280 + t284;
  t335 = -1.*t223;
  t336 = 1. + t335;
  t329 = -1.*t116;
  t330 = 1. + t329;
  t289 = t213*t209;
  t290 = t116*t234;
  t291 = t289 + t290;
  t311 = -1.*t148;
  t312 = 1. + t311;
  t313 = 0.135*t312;
  t314 = 0. + t313;
  t316 = -0.135*t185;
  t317 = 0. + t316;
  t320 = -1.*t118;
  t322 = 1. + t320;
  t323 = 0.135*t322;
  t324 = 0. + t323;
  t326 = -0.135*t202;
  t327 = 0. + t326;
  t331 = -0.09*t330;
  t332 = 0.049*t213;
  t333 = 0. + t331 + t332;
  t337 = 0.135*t336;
  t338 = 0.049*t230;
  t339 = 0. + t337 + t338;
  t341 = -0.049*t336;
  t342 = 0.135*t230;
  t343 = 0. + t341 + t342;
  t349 = -0.049*t330;
  t350 = -0.09*t213;
  t351 = 0. + t349 + t350;
  t292 = t213*t253;
  t293 = t116*t262;
  t294 = t292 + t293;
  t295 = t213*t278;
  t296 = t116*t286;
  t297 = t295 + t296;
  p_output1[0]=-1.*t116*t209 + t213*t234;
  p_output1[1]=-1.*t116*t253 + t213*t262;
  p_output1[2]=-1.*t116*t278 + t213*t286;
  p_output1[3]=0.;
  p_output1[4]=t291;
  p_output1[5]=t294;
  p_output1[6]=t297;
  p_output1[7]=0.;
  p_output1[8]=-1.*t223*t228 + t150*t219*t230;
  p_output1[9]=t161*t219*t230 - 1.*t223*t260;
  p_output1[10]=-1.*t157*t230 - 1.*t223*t283;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t223*t228 - 1.*t150*t219*t230) - 0.21*(t116*t209 - 1.*t213*t234) - 0.049*t291 + t184*t314 + t173*t317 + t201*t324 + t191*t327 + t209*t333 + t228*t339 + t150*t219*t343 + t234*t351 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t161*t219*t230 + t223*t260) - 0.21*(t116*t253 - 1.*t213*t262) - 0.049*t294 + t245*t314 + t239*t317 + t251*t324 + t247*t327 + t253*t333 + t260*t339 + t161*t219*t343 + t262*t351 + var1[1];
  p_output1[14]=0. + 0.1305*(t157*t230 + t223*t283) - 0.21*(t116*t278 - 1.*t213*t286) - 0.049*t297 + t162*t219*t314 + t152*t219*t317 + t275*t324 + t269*t327 + t278*t333 + t283*t339 - 1.*t157*t343 + t286*t351 + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "H_knee_joint_left.hh"

namespace SymExpression
{

void H_knee_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
