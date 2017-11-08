/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:38 GMT-05:00
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
  double t583;
  double t758;
  double t576;
  double t608;
  double t1404;
  double t232;
  double t6220;
  double t6274;
  double t615;
  double t2838;
  double t3518;
  double t6229;
  double t6241;
  double t6245;
  double t6280;
  double t6284;
  double t6261;
  double t6262;
  double t6263;
  double t6265;
  double t6267;
  double t6269;
  double t6285;
  double t6286;
  double t6287;
  double t6293;
  double t6295;
  double t6298;
  double t6303;
  double t6305;
  double t6306;
  double t6323;
  double t6324;
  double t6282;
  double t6288;
  double t6289;
  double t6326;
  double t6327;
  double t6329;
  double t6332;
  double t6333;
  double t6335;
  double t6336;
  double t6337;
  double t6338;
  double t6345;
  double t6347;
  double t6348;
  double t6290;
  double t6299;
  double t6300;
  double t6302;
  double t6308;
  double t6312;
  t583 = Cos(var1[5]);
  t758 = Sin(var1[3]);
  t576 = Cos(var1[3]);
  t608 = Sin(var1[4]);
  t1404 = Sin(var1[5]);
  t232 = Cos(var1[13]);
  t6220 = Sin(var1[13]);
  t6274 = Cos(var1[4]);
  t615 = t576*t583*t608;
  t2838 = t758*t1404;
  t3518 = t615 + t2838;
  t6229 = -1.*t583*t758;
  t6241 = t576*t608*t1404;
  t6245 = t6229 + t6241;
  t6280 = Cos(var1[14]);
  t6284 = Sin(var1[14]);
  t6261 = t583*t758*t608;
  t6262 = -1.*t576*t1404;
  t6263 = t6261 + t6262;
  t6265 = t576*t583;
  t6267 = t758*t608*t1404;
  t6269 = t6265 + t6267;
  t6285 = t6220*t3518;
  t6286 = t232*t6245;
  t6287 = t6285 + t6286;
  t6293 = t6220*t6263;
  t6295 = t232*t6269;
  t6298 = t6293 + t6295;
  t6303 = t6274*t583*t6220;
  t6305 = t232*t6274*t1404;
  t6306 = t6303 + t6305;
  t6323 = -1.*t6280;
  t6324 = 1. + t6323;
  t6282 = t6280*t576*t6274;
  t6288 = t6284*t6287;
  t6289 = t6282 + t6288;
  t6326 = -0.049*t6324;
  t6327 = -0.135*t6284;
  t6329 = 0. + t6326 + t6327;
  t6332 = 0.135*t6220;
  t6333 = 0. + t6332;
  t6335 = -1.*t232;
  t6336 = 1. + t6335;
  t6337 = -0.135*t6336;
  t6338 = 0. + t6337;
  t6345 = -0.135*t6324;
  t6347 = 0.049*t6284;
  t6348 = 0. + t6345 + t6347;
  t6290 = t6280*t6274*t758;
  t6299 = t6284*t6298;
  t6300 = t6290 + t6299;
  t6302 = -1.*t6280*t608;
  t6308 = t6284*t6306;
  t6312 = t6302 + t6308;
  p_output1[0]=-1.*t232*t3518 + t6220*t6245;
  p_output1[1]=-1.*t232*t6263 + t6220*t6269;
  p_output1[2]=-1.*t232*t583*t6274 + t1404*t6220*t6274;
  p_output1[3]=0.;
  p_output1[4]=t6289;
  p_output1[5]=t6300;
  p_output1[6]=t6312;
  p_output1[7]=0.;
  p_output1[8]=t576*t6274*t6284 - 1.*t6280*t6287;
  p_output1[9]=-1.*t6280*t6298 + t6274*t6284*t758;
  p_output1[10]=-1.*t608*t6284 - 1.*t6280*t6306;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t232*t3518 - 1.*t6220*t6245) - 0.135*(-1.*t576*t6274*t6284 + t6280*t6287) - 0.049*t6289 + t576*t6274*t6329 + t3518*t6333 + t6245*t6338 + t6287*t6348 + var1[0];
  p_output1[13]=0. - 0.09*(t232*t6263 - 1.*t6220*t6269) - 0.049*t6300 + t6263*t6333 + t6269*t6338 + t6298*t6348 + t6274*t6329*t758 - 0.135*(t6280*t6298 - 1.*t6274*t6284*t758) + var1[1];
  p_output1[14]=0. - 0.09*(t232*t583*t6274 - 1.*t1404*t6220*t6274) - 0.135*(t608*t6284 + t6280*t6306) - 0.049*t6312 - 1.*t608*t6329 + t583*t6274*t6333 + t1404*t6274*t6338 + t6306*t6348 + var1[2];
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
