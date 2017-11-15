/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:54 GMT-05:00
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
  double t175;
  double t187;
  double t168;
  double t190;
  double t195;
  double t197;
  double t194;
  double t207;
  double t202;
  double t204;
  double t205;
  double t196;
  double t198;
  double t199;
  double t216;
  double t217;
  double t218;
  double t211;
  double t212;
  double t213;
  double t200;
  double t208;
  double t210;
  double t241;
  double t242;
  double t244;
  double t245;
  double t247;
  double t248;
  double t214;
  double t220;
  double t221;
  double t222;
  double t223;
  double t224;
  t175 = Cos(var1[4]);
  t187 = Sin(var1[3]);
  t168 = Cos(var1[3]);
  t190 = Sin(var1[4]);
  t195 = Cos(var1[5]);
  t197 = Sin(var1[5]);
  t194 = Cos(var1[6]);
  t207 = Sin(var1[6]);
  t202 = t168*t195*t190;
  t204 = t187*t197;
  t205 = t202 + t204;
  t196 = -1.*t195*t187;
  t198 = t168*t190*t197;
  t199 = t196 + t198;
  t216 = t195*t187*t190;
  t217 = -1.*t168*t197;
  t218 = t216 + t217;
  t211 = t168*t195;
  t212 = t187*t190*t197;
  t213 = t211 + t212;
  t200 = t194*t199;
  t208 = t205*t207;
  t210 = t200 + t208;
  t241 = -1.*t194;
  t242 = 1. + t241;
  t244 = 0.135*t242;
  t245 = 0. + t244;
  t247 = -0.135*t207;
  t248 = 0. + t247;
  t214 = t194*t213;
  t220 = t218*t207;
  t221 = t214 + t220;
  t222 = t175*t194*t197;
  t223 = t175*t195*t207;
  t224 = t222 + t223;
  p_output1[0]=t168*t175;
  p_output1[1]=t175*t187;
  p_output1[2]=-1.*t190;
  p_output1[3]=0.;
  p_output1[4]=t210;
  p_output1[5]=t221;
  p_output1[6]=t224;
  p_output1[7]=0.;
  p_output1[8]=t194*t205 - 1.*t199*t207;
  p_output1[9]=-1.*t207*t213 + t194*t218;
  p_output1[10]=t175*t194*t195 - 1.*t175*t197*t207;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t168*t175 + 0.135*t210 + t199*t245 + t205*t248 + var1[0];
  p_output1[13]=0. - 0.049*t175*t187 + 0.135*t221 + t213*t245 + t218*t248 + var1[1];
  p_output1[14]=0. + 0.049*t190 + 0.135*t224 + t175*t197*t245 + t175*t195*t248 + var1[2];
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

#include "H_hip_abduction_left_mex.hh"

namespace SymExpression
{

void H_hip_abduction_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
