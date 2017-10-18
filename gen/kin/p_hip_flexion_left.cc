/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:32 GMT-04:00
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
  double t86;
  double t78;
  double t87;
  double t82;
  double t88;
  double t59;
  double t83;
  double t90;
  double t91;
  double t93;
  double t98;
  double t99;
  double t101;
  double t112;
  double t122;
  double t123;
  double t124;
  double t118;
  double t119;
  double t120;
  double t126;
  double t141;
  double t144;
  double t145;
  double t147;
  double t138;
  double t139;
  double t140;
  double t151;
  double t62;
  double t64;
  double t65;
  double t70;
  double t103;
  double t104;
  double t113;
  double t114;
  double t116;
  double t117;
  double t165;
  double t166;
  double t167;
  double t169;
  double t170;
  double t171;
  double t127;
  double t130;
  double t177;
  double t178;
  double t179;
  double t173;
  double t174;
  double t175;
  double t146;
  double t148;
  double t149;
  double t152;
  double t153;
  double t154;
  double t185;
  double t186;
  double t187;
  double t205;
  double t206;
  double t207;
  double t201;
  double t202;
  double t203;
  double t213;
  double t214;
  double t215;
  t86 = Cos(var1[3]);
  t78 = Cos(var1[5]);
  t87 = Sin(var1[4]);
  t82 = Sin(var1[3]);
  t88 = Sin(var1[5]);
  t59 = Cos(var1[6]);
  t83 = -1.*t78*t82;
  t90 = t86*t87*t88;
  t91 = t83 + t90;
  t93 = t86*t78*t87;
  t98 = t82*t88;
  t99 = t93 + t98;
  t101 = Sin(var1[6]);
  t112 = Cos(var1[7]);
  t122 = t59*t99;
  t123 = -1.*t91*t101;
  t124 = t122 + t123;
  t118 = t59*t91;
  t119 = t99*t101;
  t120 = t118 + t119;
  t126 = Sin(var1[7]);
  t141 = Cos(var1[8]);
  t144 = -1.*t141;
  t145 = 1. + t144;
  t147 = Sin(var1[8]);
  t138 = t112*t120;
  t139 = t124*t126;
  t140 = t138 + t139;
  t151 = Cos(var1[4]);
  t62 = -1.*t59;
  t64 = 1. + t62;
  t65 = 0.135*t64;
  t70 = 0. + t65;
  t103 = -0.135*t101;
  t104 = 0. + t103;
  t113 = -1.*t112;
  t114 = 1. + t113;
  t116 = 0.135*t114;
  t117 = 0. + t116;
  t165 = t86*t78;
  t166 = t82*t87*t88;
  t167 = t165 + t166;
  t169 = t78*t82*t87;
  t170 = -1.*t86*t88;
  t171 = t169 + t170;
  t127 = -0.135*t126;
  t130 = 0. + t127;
  t177 = t59*t171;
  t178 = -1.*t167*t101;
  t179 = t177 + t178;
  t173 = t59*t167;
  t174 = t171*t101;
  t175 = t173 + t174;
  t146 = 0.135*t145;
  t148 = 0.049*t147;
  t149 = 0. + t146 + t148;
  t152 = -0.049*t145;
  t153 = 0.135*t147;
  t154 = 0. + t152 + t153;
  t185 = t112*t175;
  t186 = t179*t126;
  t187 = t185 + t186;
  t205 = t151*t78*t59;
  t206 = -1.*t151*t88*t101;
  t207 = t205 + t206;
  t201 = t151*t59*t88;
  t202 = t151*t78*t101;
  t203 = t201 + t202;
  t213 = t112*t203;
  t214 = t207*t126;
  t215 = t213 + t214;
  p_output1[0]=0. + t117*t120 - 0.09*(t112*t124 - 1.*t120*t126) + t124*t130 + t140*t149 + t151*t154*t86 - 0.049*(t140*t147 + t141*t151*t86) + 0.135*(t140*t141 - 1.*t147*t151*t86) + t70*t91 + t104*t99 + var1[0];
  p_output1[1]=0. + t104*t171 + t117*t175 + t130*t179 - 0.09*(-1.*t126*t175 + t112*t179) + t149*t187 + t167*t70 + t151*t154*t82 - 0.049*(t147*t187 + t141*t151*t82) + 0.135*(t141*t187 - 1.*t147*t151*t82) + var1[1];
  p_output1[2]=0. + t117*t203 + t130*t207 - 0.09*(-1.*t126*t203 + t112*t207) + t149*t215 + t104*t151*t78 - 1.*t154*t87 - 0.049*(t147*t215 - 1.*t141*t87) + 0.135*(t141*t215 + t147*t87) + t151*t70*t88 + var1[2];
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

#include "p_hip_flexion_left.hh"

namespace SymExpression
{

void p_hip_flexion_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
