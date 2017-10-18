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
  double t92;
  double t99;
  double t90;
  double t93;
  double t103;
  double t70;
  double t117;
  double t118;
  double t119;
  double t98;
  double t104;
  double t107;
  double t121;
  double t65;
  double t150;
  double t152;
  double t153;
  double t139;
  double t146;
  double t148;
  double t136;
  double t163;
  double t131;
  double t132;
  double t133;
  double t116;
  double t122;
  double t127;
  double t176;
  double t158;
  double t159;
  double t160;
  double t149;
  double t155;
  double t156;
  double t183;
  double t169;
  double t171;
  double t172;
  double t164;
  double t165;
  double t166;
  double t180;
  double t181;
  double t182;
  double t188;
  double t189;
  double t190;
  double t194;
  double t195;
  double t196;
  double t232;
  double t233;
  double t177;
  double t184;
  double t185;
  double t211;
  double t212;
  double t213;
  double t214;
  double t217;
  double t218;
  double t220;
  double t221;
  double t222;
  double t223;
  double t225;
  double t226;
  double t234;
  double t235;
  double t236;
  double t238;
  double t239;
  double t240;
  double t186;
  double t191;
  double t192;
  double t193;
  double t197;
  double t198;
  t92 = Cos(var1[5]);
  t99 = Sin(var1[3]);
  t90 = Cos(var1[3]);
  t93 = Sin(var1[4]);
  t103 = Sin(var1[5]);
  t70 = Cos(var1[6]);
  t117 = -1.*t92*t99;
  t118 = t90*t93*t103;
  t119 = t117 + t118;
  t98 = t90*t92*t93;
  t104 = t99*t103;
  t107 = t98 + t104;
  t121 = Sin(var1[6]);
  t65 = Cos(var1[7]);
  t150 = t90*t92;
  t152 = t99*t93*t103;
  t153 = t150 + t152;
  t139 = t92*t99*t93;
  t146 = -1.*t90*t103;
  t148 = t139 + t146;
  t136 = Sin(var1[7]);
  t163 = Cos(var1[4]);
  t131 = t70*t119;
  t132 = t107*t121;
  t133 = t131 + t132;
  t116 = t70*t107;
  t122 = -1.*t119*t121;
  t127 = t116 + t122;
  t176 = Cos(var1[8]);
  t158 = t70*t153;
  t159 = t148*t121;
  t160 = t158 + t159;
  t149 = t70*t148;
  t155 = -1.*t153*t121;
  t156 = t149 + t155;
  t183 = Sin(var1[8]);
  t169 = t163*t70*t103;
  t171 = t163*t92*t121;
  t172 = t169 + t171;
  t164 = t163*t92*t70;
  t165 = -1.*t163*t103*t121;
  t166 = t164 + t165;
  t180 = t65*t133;
  t181 = t127*t136;
  t182 = t180 + t181;
  t188 = t65*t160;
  t189 = t156*t136;
  t190 = t188 + t189;
  t194 = t65*t172;
  t195 = t166*t136;
  t196 = t194 + t195;
  t232 = -1.*t176;
  t233 = 1. + t232;
  t177 = t90*t163*t176;
  t184 = t182*t183;
  t185 = t177 + t184;
  t211 = -1.*t70;
  t212 = 1. + t211;
  t213 = 0.135*t212;
  t214 = 0. + t213;
  t217 = -0.135*t121;
  t218 = 0. + t217;
  t220 = -1.*t65;
  t221 = 1. + t220;
  t222 = 0.135*t221;
  t223 = 0. + t222;
  t225 = -0.135*t136;
  t226 = 0. + t225;
  t234 = 0.135*t233;
  t235 = 0.049*t183;
  t236 = 0. + t234 + t235;
  t238 = -0.049*t233;
  t239 = 0.135*t183;
  t240 = 0. + t238 + t239;
  t186 = t163*t176*t99;
  t191 = t190*t183;
  t192 = t186 + t191;
  t193 = -1.*t176*t93;
  t197 = t196*t183;
  t198 = t193 + t197;
  p_output1[0]=t133*t136 - 1.*t127*t65;
  p_output1[1]=t136*t160 - 1.*t156*t65;
  p_output1[2]=t136*t172 - 1.*t166*t65;
  p_output1[3]=0.;
  p_output1[4]=t185;
  p_output1[5]=t192;
  p_output1[6]=t198;
  p_output1[7]=0.;
  p_output1[8]=-1.*t176*t182 + t163*t183*t90;
  p_output1[9]=-1.*t176*t190 + t163*t183*t99;
  p_output1[10]=-1.*t176*t196 - 1.*t183*t93;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t185 + t119*t214 + t107*t218 + t133*t223 + t127*t226 + t182*t236 - 0.09*(-1.*t133*t136 + t127*t65) + t163*t240*t90 + 0.135*(t176*t182 - 1.*t163*t183*t90) + var1[0];
  p_output1[13]=0. - 0.049*t192 + t153*t214 + t148*t218 + t160*t223 + t156*t226 + t190*t236 - 0.09*(-1.*t136*t160 + t156*t65) + t163*t240*t99 + 0.135*(t176*t190 - 1.*t163*t183*t99) + var1[1];
  p_output1[14]=0. - 0.049*t198 + t103*t163*t214 + t172*t223 + t166*t226 + t196*t236 - 0.09*(-1.*t136*t172 + t166*t65) + t163*t218*t92 - 1.*t240*t93 + 0.135*(t176*t196 + t183*t93) + var1[2];
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

#include "H_hip_flexion_left.hh"

namespace SymExpression
{

void H_hip_flexion_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
