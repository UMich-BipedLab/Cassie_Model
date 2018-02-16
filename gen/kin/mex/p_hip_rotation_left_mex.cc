/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:02 GMT-05:00
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
  double t290;
  double t281;
  double t291;
  double t285;
  double t292;
  double t242;
  double t296;
  double t297;
  double t298;
  double t289;
  double t293;
  double t294;
  double t299;
  double t310;
  double t311;
  double t312;
  double t314;
  double t307;
  double t308;
  double t309;
  double t318;
  double t260;
  double t265;
  double t275;
  double t280;
  double t300;
  double t301;
  double t336;
  double t337;
  double t338;
  double t332;
  double t333;
  double t334;
  double t313;
  double t315;
  double t316;
  double t319;
  double t320;
  double t321;
  double t344;
  double t345;
  double t346;
  double t364;
  double t365;
  double t366;
  t290 = Cos(var1[3]);
  t281 = Cos(var1[5]);
  t291 = Sin(var1[4]);
  t285 = Sin(var1[3]);
  t292 = Sin(var1[5]);
  t242 = Cos(var1[6]);
  t296 = t290*t281*t291;
  t297 = t285*t292;
  t298 = t296 + t297;
  t289 = -1.*t281*t285;
  t293 = t290*t291*t292;
  t294 = t289 + t293;
  t299 = Sin(var1[6]);
  t310 = Cos(var1[7]);
  t311 = -1.*t310;
  t312 = 1. + t311;
  t314 = Sin(var1[7]);
  t307 = t242*t294;
  t308 = t298*t299;
  t309 = t307 + t308;
  t318 = Cos(var1[4]);
  t260 = -1.*t242;
  t265 = 1. + t260;
  t275 = 0.135*t265;
  t280 = 0. + t275;
  t300 = -0.135*t299;
  t301 = 0. + t300;
  t336 = t281*t285*t291;
  t337 = -1.*t290*t292;
  t338 = t336 + t337;
  t332 = t290*t281;
  t333 = t285*t291*t292;
  t334 = t332 + t333;
  t313 = 0.135*t312;
  t315 = 0.049*t314;
  t316 = 0. + t313 + t315;
  t319 = -0.049*t312;
  t320 = 0.135*t314;
  t321 = 0. + t319 + t320;
  t344 = t242*t334;
  t345 = t338*t299;
  t346 = t344 + t345;
  t364 = t318*t242*t292;
  t365 = t318*t281*t299;
  t366 = t364 + t365;
  p_output1[0]=0. + t280*t294 - 0.09*(t242*t298 - 1.*t294*t299) + t298*t301 + t309*t316 - 0.049*(t309*t314 + t290*t310*t318) + 0.135*(t309*t310 - 1.*t290*t314*t318) + t290*t318*t321 + var1[0];
  p_output1[1]=0. + t285*t318*t321 + t280*t334 + t301*t338 - 0.09*(-1.*t299*t334 + t242*t338) + t316*t346 + 0.135*(-1.*t285*t314*t318 + t310*t346) - 0.049*(t285*t310*t318 + t314*t346) + var1[1];
  p_output1[2]=0. + t280*t292*t318 + t281*t301*t318 - 0.09*(t242*t281*t318 - 1.*t292*t299*t318) - 1.*t291*t321 + t316*t366 + 0.135*(t291*t314 + t310*t366) - 0.049*(-1.*t291*t310 + t314*t366) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_hip_rotation_left_mex.hh"

namespace SymExpression
{

void p_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
