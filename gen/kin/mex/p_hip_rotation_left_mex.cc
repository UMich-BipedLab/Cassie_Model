/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:57 GMT-05:00
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
  double t326;
  double t317;
  double t327;
  double t321;
  double t328;
  double t278;
  double t332;
  double t333;
  double t334;
  double t325;
  double t329;
  double t330;
  double t335;
  double t346;
  double t347;
  double t348;
  double t350;
  double t343;
  double t344;
  double t345;
  double t354;
  double t296;
  double t301;
  double t311;
  double t316;
  double t336;
  double t337;
  double t372;
  double t373;
  double t374;
  double t368;
  double t369;
  double t370;
  double t349;
  double t351;
  double t352;
  double t355;
  double t356;
  double t357;
  double t380;
  double t381;
  double t382;
  double t400;
  double t401;
  double t402;
  t326 = Cos(var1[3]);
  t317 = Cos(var1[5]);
  t327 = Sin(var1[4]);
  t321 = Sin(var1[3]);
  t328 = Sin(var1[5]);
  t278 = Cos(var1[6]);
  t332 = t326*t317*t327;
  t333 = t321*t328;
  t334 = t332 + t333;
  t325 = -1.*t317*t321;
  t329 = t326*t327*t328;
  t330 = t325 + t329;
  t335 = Sin(var1[6]);
  t346 = Cos(var1[7]);
  t347 = -1.*t346;
  t348 = 1. + t347;
  t350 = Sin(var1[7]);
  t343 = t278*t330;
  t344 = t334*t335;
  t345 = t343 + t344;
  t354 = Cos(var1[4]);
  t296 = -1.*t278;
  t301 = 1. + t296;
  t311 = 0.135*t301;
  t316 = 0. + t311;
  t336 = -0.135*t335;
  t337 = 0. + t336;
  t372 = t317*t321*t327;
  t373 = -1.*t326*t328;
  t374 = t372 + t373;
  t368 = t326*t317;
  t369 = t321*t327*t328;
  t370 = t368 + t369;
  t349 = 0.135*t348;
  t351 = 0.049*t350;
  t352 = 0. + t349 + t351;
  t355 = -0.049*t348;
  t356 = 0.135*t350;
  t357 = 0. + t355 + t356;
  t380 = t278*t370;
  t381 = t374*t335;
  t382 = t380 + t381;
  t400 = t354*t278*t328;
  t401 = t354*t317*t335;
  t402 = t400 + t401;
  p_output1[0]=0. + t316*t330 - 0.09*(t278*t334 - 1.*t330*t335) + t334*t337 + t345*t352 - 0.049*(t345*t350 + t326*t346*t354) + 0.135*(t345*t346 - 1.*t326*t350*t354) + t326*t354*t357 + var1[0];
  p_output1[1]=0. + t321*t354*t357 + t316*t370 + t337*t374 - 0.09*(-1.*t335*t370 + t278*t374) + t352*t382 + 0.135*(-1.*t321*t350*t354 + t346*t382) - 0.049*(t321*t346*t354 + t350*t382) + var1[1];
  p_output1[2]=0. + t316*t328*t354 + t317*t337*t354 - 0.09*(t278*t317*t354 - 1.*t328*t335*t354) - 1.*t327*t357 + t352*t402 + 0.135*(t327*t350 + t346*t402) - 0.049*(-1.*t327*t346 + t350*t402) + var1[2];
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
