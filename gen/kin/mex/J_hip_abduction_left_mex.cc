/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:53 GMT-05:00
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
  double t125;
  double t144;
  double t147;
  double t143;
  double t148;
  double t134;
  double t146;
  double t149;
  double t150;
  double t152;
  double t153;
  double t155;
  double t156;
  double t117;
  double t138;
  double t140;
  double t141;
  double t142;
  double t157;
  double t158;
  double t167;
  double t168;
  double t169;
  double t171;
  double t172;
  double t173;
  double t205;
  double t206;
  double t207;
  double t214;
  double t215;
  double t216;
  double t209;
  double t219;
  double t238;
  double t239;
  double t240;
  double t226;
  double t227;
  double t228;
  double t229;
  t125 = Sin(var1[3]);
  t144 = Cos(var1[5]);
  t147 = Sin(var1[4]);
  t143 = Cos(var1[3]);
  t148 = Sin(var1[5]);
  t134 = Cos(var1[6]);
  t146 = -1.*t143*t144;
  t149 = -1.*t125*t147*t148;
  t150 = t146 + t149;
  t152 = -1.*t144*t125*t147;
  t153 = t143*t148;
  t155 = t152 + t153;
  t156 = Sin(var1[6]);
  t117 = Cos(var1[4]);
  t138 = -1.*t134;
  t140 = 1. + t138;
  t141 = 0.135*t140;
  t142 = 0. + t141;
  t157 = -0.135*t156;
  t158 = 0. + t157;
  t167 = -1.*t144*t125;
  t168 = t143*t147*t148;
  t169 = t167 + t168;
  t171 = t143*t144*t147;
  t172 = t125*t148;
  t173 = t171 + t172;
  t205 = t144*t125;
  t206 = -1.*t143*t147*t148;
  t207 = t205 + t206;
  t214 = t144*t125*t147;
  t215 = -1.*t143*t148;
  t216 = t214 + t215;
  t209 = t134*t173;
  t219 = t134*t216;
  t238 = t143*t144;
  t239 = t125*t147*t148;
  t240 = t238 + t239;
  t226 = t117*t144*t134;
  t227 = -1.*t117*t148*t156;
  t228 = t226 + t227;
  t229 = 0.135*t228;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t117*t125 + t142*t150 + 0.135*(t134*t150 + t155*t156) + t155*t158;
  p_output1[10]=-0.049*t117*t143 + t142*t169 + t158*t173 + 0.135*(t134*t169 + t156*t173);
  p_output1[11]=0;
  p_output1[12]=0.049*t143*t147 + t117*t142*t143*t148 + 0.135*(t117*t134*t143*t148 + t117*t143*t144*t156) + t117*t143*t144*t158;
  p_output1[13]=0.049*t125*t147 + t117*t125*t142*t148 + 0.135*(t117*t125*t134*t148 + t117*t125*t144*t156) + t117*t125*t144*t158;
  p_output1[14]=0.049*t117 - 1.*t142*t147*t148 + 0.135*(-1.*t134*t147*t148 - 1.*t144*t147*t156) - 1.*t144*t147*t158;
  p_output1[15]=t142*t173 + t158*t207 + 0.135*(t156*t207 + t209);
  p_output1[16]=t150*t158 + t142*t216 + 0.135*(t150*t156 + t219);
  p_output1[17]=t117*t142*t144 - 1.*t117*t148*t158 + t229;
  p_output1[18]=0.135*t156*t169 - 0.135*t134*t173 + 0.135*(-1.*t156*t169 + t209);
  p_output1[19]=-0.135*t134*t216 + 0.135*t156*t240 + 0.135*(t219 - 1.*t156*t240);
  p_output1[20]=-0.135*t117*t134*t144 + 0.135*t117*t148*t156 + t229;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_hip_abduction_left_mex.hh"

namespace SymExpression
{

void J_hip_abduction_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
