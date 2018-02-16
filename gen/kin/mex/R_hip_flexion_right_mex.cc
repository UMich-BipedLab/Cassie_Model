/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:39 GMT-05:00
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
  double t869;
  double t2979;
  double t669;
  double t2024;
  double t3158;
  double t3578;
  double t2536;
  double t3199;
  double t3251;
  double t555;
  double t7176;
  double t7227;
  double t7244;
  double t240;
  double t7270;
  double t7275;
  double t7289;
  double t7294;
  double t7325;
  double t7339;
  double t7346;
  double t7348;
  double t7349;
  double t7352;
  double t3554;
  double t7250;
  double t7256;
  double t7290;
  double t7299;
  double t7310;
  double t7313;
  double t7316;
  double t7317;
  double t7347;
  double t7353;
  double t7354;
  double t7360;
  double t7361;
  double t7365;
  double t7369;
  double t7370;
  double t7375;
  double t7380;
  double t7381;
  double t7385;
  double t7391;
  double t7393;
  double t7395;
  double t7397;
  double t7399;
  double t7400;
  t869 = Cos(var1[5]);
  t2979 = Sin(var1[3]);
  t669 = Cos(var1[3]);
  t2024 = Sin(var1[4]);
  t3158 = Sin(var1[5]);
  t3578 = Sin(var1[13]);
  t2536 = t669*t869*t2024;
  t3199 = t2979*t3158;
  t3251 = t2536 + t3199;
  t555 = Cos(var1[13]);
  t7176 = -1.*t869*t2979;
  t7227 = t669*t2024*t3158;
  t7244 = t7176 + t7227;
  t240 = Cos(var1[15]);
  t7270 = Sin(var1[15]);
  t7275 = Cos(var1[14]);
  t7289 = Cos(var1[4]);
  t7294 = Sin(var1[14]);
  t7325 = t869*t2979*t2024;
  t7339 = -1.*t669*t3158;
  t7346 = t7325 + t7339;
  t7348 = t669*t869;
  t7349 = t2979*t2024*t3158;
  t7352 = t7348 + t7349;
  t3554 = t555*t3251;
  t7250 = -1.*t3578*t7244;
  t7256 = t3554 + t7250;
  t7290 = t7275*t669*t7289;
  t7299 = t3578*t3251;
  t7310 = t555*t7244;
  t7313 = t7299 + t7310;
  t7316 = t7294*t7313;
  t7317 = t7290 + t7316;
  t7347 = t555*t7346;
  t7353 = -1.*t3578*t7352;
  t7354 = t7347 + t7353;
  t7360 = t7275*t7289*t2979;
  t7361 = t3578*t7346;
  t7365 = t555*t7352;
  t7369 = t7361 + t7365;
  t7370 = t7294*t7369;
  t7375 = t7360 + t7370;
  t7380 = t555*t7289*t869;
  t7381 = -1.*t7289*t3578*t3158;
  t7385 = t7380 + t7381;
  t7391 = -1.*t7275*t2024;
  t7393 = t7289*t869*t3578;
  t7395 = t555*t7289*t3158;
  t7397 = t7393 + t7395;
  t7399 = t7294*t7397;
  t7400 = t7391 + t7399;
  p_output1[0]=-1.*t240*t7256 + t7270*t7317;
  p_output1[1]=-1.*t240*t7354 + t7270*t7375;
  p_output1[2]=-1.*t240*t7385 + t7270*t7400;
  p_output1[3]=t7256*t7270 + t240*t7317;
  p_output1[4]=t7270*t7354 + t240*t7375;
  p_output1[5]=t7270*t7385 + t240*t7400;
  p_output1[6]=t669*t7289*t7294 - 1.*t7275*t7313;
  p_output1[7]=t2979*t7289*t7294 - 1.*t7275*t7369;
  p_output1[8]=-1.*t2024*t7294 - 1.*t7275*t7397;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_hip_flexion_right_mex.hh"

namespace SymExpression
{

void R_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
