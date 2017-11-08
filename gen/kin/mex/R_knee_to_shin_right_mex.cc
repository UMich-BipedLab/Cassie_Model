/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:51 GMT-05:00
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
  double t2459;
  double t2759;
  double t2155;
  double t2571;
  double t2911;
  double t3442;
  double t2630;
  double t2923;
  double t2989;
  double t1680;
  double t3530;
  double t3652;
  double t4049;
  double t7114;
  double t3351;
  double t4145;
  double t4986;
  double t661;
  double t7123;
  double t7147;
  double t7155;
  double t7156;
  double t7180;
  double t7199;
  double t7208;
  double t7218;
  double t7230;
  double t258;
  double t7268;
  double t7274;
  double t7275;
  double t7297;
  double t7299;
  double t7302;
  double t7256;
  double t7292;
  double t7305;
  double t7307;
  double t7311;
  double t7318;
  double t7320;
  double t7321;
  double t7324;
  double t7325;
  double t7350;
  double t7352;
  double t7353;
  double t7362;
  double t7364;
  double t7368;
  double t7369;
  double t7373;
  double t7379;
  double t7111;
  double t7237;
  double t7241;
  double t7259;
  double t7263;
  double t7264;
  double t7308;
  double t7329;
  double t7331;
  double t7334;
  double t7340;
  double t7342;
  double t7361;
  double t7381;
  double t7382;
  double t7385;
  double t7388;
  double t7391;
  t2459 = Cos(var1[5]);
  t2759 = Sin(var1[3]);
  t2155 = Cos(var1[3]);
  t2571 = Sin(var1[4]);
  t2911 = Sin(var1[5]);
  t3442 = Sin(var1[13]);
  t2630 = t2155*t2459*t2571;
  t2923 = t2759*t2911;
  t2989 = t2630 + t2923;
  t1680 = Cos(var1[13]);
  t3530 = -1.*t2459*t2759;
  t3652 = t2155*t2571*t2911;
  t4049 = t3530 + t3652;
  t7114 = Cos(var1[15]);
  t3351 = t1680*t2989;
  t4145 = -1.*t3442*t4049;
  t4986 = t3351 + t4145;
  t661 = Sin(var1[15]);
  t7123 = Cos(var1[14]);
  t7147 = Cos(var1[4]);
  t7155 = t7123*t2155*t7147;
  t7156 = Sin(var1[14]);
  t7180 = t3442*t2989;
  t7199 = t1680*t4049;
  t7208 = t7180 + t7199;
  t7218 = t7156*t7208;
  t7230 = t7155 + t7218;
  t258 = Sin(var1[16]);
  t7268 = t2459*t2759*t2571;
  t7274 = -1.*t2155*t2911;
  t7275 = t7268 + t7274;
  t7297 = t2155*t2459;
  t7299 = t2759*t2571*t2911;
  t7302 = t7297 + t7299;
  t7256 = Cos(var1[16]);
  t7292 = t1680*t7275;
  t7305 = -1.*t3442*t7302;
  t7307 = t7292 + t7305;
  t7311 = t7123*t7147*t2759;
  t7318 = t3442*t7275;
  t7320 = t1680*t7302;
  t7321 = t7318 + t7320;
  t7324 = t7156*t7321;
  t7325 = t7311 + t7324;
  t7350 = t1680*t7147*t2459;
  t7352 = -1.*t7147*t3442*t2911;
  t7353 = t7350 + t7352;
  t7362 = -1.*t7123*t2571;
  t7364 = t7147*t2459*t3442;
  t7368 = t1680*t7147*t2911;
  t7369 = t7364 + t7368;
  t7373 = t7156*t7369;
  t7379 = t7362 + t7373;
  t7111 = t661*t4986;
  t7237 = t7114*t7230;
  t7241 = t7111 + t7237;
  t7259 = t7114*t4986;
  t7263 = -1.*t661*t7230;
  t7264 = t7259 + t7263;
  t7308 = t661*t7307;
  t7329 = t7114*t7325;
  t7331 = t7308 + t7329;
  t7334 = t7114*t7307;
  t7340 = -1.*t661*t7325;
  t7342 = t7334 + t7340;
  t7361 = t661*t7353;
  t7381 = t7114*t7379;
  t7382 = t7361 + t7381;
  t7385 = t7114*t7353;
  t7388 = -1.*t661*t7379;
  t7391 = t7385 + t7388;
  p_output1[0]=t258*t7241 - 1.*t7256*t7264;
  p_output1[1]=t258*t7331 - 1.*t7256*t7342;
  p_output1[2]=t258*t7382 - 1.*t7256*t7391;
  p_output1[3]=t7241*t7256 + t258*t7264;
  p_output1[4]=t7256*t7331 + t258*t7342;
  p_output1[5]=t7256*t7382 + t258*t7391;
  p_output1[6]=t2155*t7147*t7156 - 1.*t7123*t7208;
  p_output1[7]=t2759*t7147*t7156 - 1.*t7123*t7321;
  p_output1[8]=-1.*t2571*t7156 - 1.*t7123*t7369;
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

#include "R_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void R_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
