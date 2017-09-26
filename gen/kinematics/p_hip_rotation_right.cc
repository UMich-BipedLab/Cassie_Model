/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:25 GMT-04:00
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
  double t206;
  double t10818;
  double t10892;
  double t10838;
  double t10937;
  double t10640;
  double t10876;
  double t10942;
  double t10965;
  double t10968;
  double t11000;
  double t11009;
  double t11031;
  double t11103;
  double t11067;
  double t11078;
  double t11089;
  double t11045;
  double t11124;
  double t11134;
  double t11135;
  double t6863;
  double t10698;
  double t10766;
  double t10986;
  double t10987;
  double t10990;
  double t10998;
  double t11046;
  double t11047;
  double t11048;
  double t11054;
  double t11208;
  double t11213;
  double t11224;
  double t11247;
  double t11248;
  double t11249;
  double t11121;
  double t11123;
  double t11258;
  double t11267;
  double t11269;
  double t11271;
  double t11273;
  double t11279;
  double t11342;
  double t11364;
  double t11365;
  double t11370;
  double t11373;
  double t11377;
  t206 = Cos(var1[3]);
  t10818 = Cos(var1[5]);
  t10892 = Sin(var1[3]);
  t10838 = Sin(var1[4]);
  t10937 = Sin(var1[5]);
  t10640 = Sin(var1[14]);
  t10876 = t206*t10818*t10838;
  t10942 = t10892*t10937;
  t10965 = t10876 + t10942;
  t10968 = Cos(var1[14]);
  t11000 = -1.*t10818*t10892;
  t11009 = t206*t10838*t10937;
  t11031 = t11000 + t11009;
  t11103 = Sin(var1[15]);
  t11067 = t10640*t10965;
  t11078 = t10968*t11031;
  t11089 = t11067 + t11078;
  t11045 = Cos(var1[15]);
  t11124 = t10968*t10965;
  t11134 = -1.*t10640*t11031;
  t11135 = t11124 + t11134;
  t6863 = Cos(var1[4]);
  t10698 = 0.135*t10640;
  t10766 = 0. + t10698;
  t10986 = -1.*t10968;
  t10987 = 1. + t10986;
  t10990 = -0.135*t10987;
  t10998 = 0. + t10990;
  t11046 = -1.*t11045;
  t11047 = 1. + t11046;
  t11048 = -0.135*t11047;
  t11054 = 0. + t11048;
  t11208 = t10818*t10892*t10838;
  t11213 = -1.*t206*t10937;
  t11224 = t11208 + t11213;
  t11247 = t206*t10818;
  t11248 = t10892*t10838*t10937;
  t11249 = t11247 + t11248;
  t11121 = 0.135*t11103;
  t11123 = 0. + t11121;
  t11258 = t10640*t11224;
  t11267 = t10968*t11249;
  t11269 = t11258 + t11267;
  t11271 = t10968*t11224;
  t11273 = -1.*t10640*t11249;
  t11279 = t11271 + t11273;
  t11342 = t6863*t10818*t10640;
  t11364 = t10968*t6863*t10937;
  t11365 = t11342 + t11364;
  t11370 = t10968*t6863*t10818;
  t11373 = -1.*t6863*t10640*t10937;
  t11377 = t11370 + t11373;
  p_output1[0]=0. + t10766*t10965 + t10998*t11031 + t11054*t11089 + t11123*t11135 - 0.09*(-1.*t11089*t11103 + t11045*t11135) - 0.135*(t11045*t11089 + t11103*t11135) - 0.049*t206*t6863 + var1[0];
  p_output1[1]=0. + t10766*t11224 + t10998*t11249 + t11054*t11269 + t11123*t11279 - 0.09*(-1.*t11103*t11269 + t11045*t11279) - 0.135*(t11045*t11269 + t11103*t11279) - 0.049*t10892*t6863 + var1[1];
  p_output1[2]=0. + 0.049*t10838 + t11054*t11365 + t11123*t11377 - 0.09*(-1.*t11103*t11365 + t11045*t11377) - 0.135*(t11045*t11365 + t11103*t11377) + t10766*t10818*t6863 + t10937*t10998*t6863 + var1[2];
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

#include "p_hip_rotation_right.hh"

namespace SymExpression
{

void p_hip_rotation_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
