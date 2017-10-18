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
  double t52;
  double t60;
  double t47;
  double t57;
  double t61;
  double t44;
  double t66;
  double t70;
  double t71;
  double t59;
  double t62;
  double t64;
  double t74;
  double t35;
  double t92;
  double t93;
  double t94;
  double t88;
  double t89;
  double t90;
  double t85;
  double t106;
  double t82;
  double t83;
  double t84;
  double t65;
  double t75;
  double t77;
  double t99;
  double t101;
  double t102;
  double t91;
  double t95;
  double t96;
  double t113;
  double t114;
  double t115;
  double t107;
  double t110;
  double t111;
  double t134;
  double t135;
  double t136;
  double t137;
  double t139;
  double t140;
  double t142;
  double t143;
  double t144;
  double t145;
  double t147;
  double t148;
  t52 = Cos(var1[5]);
  t60 = Sin(var1[3]);
  t47 = Cos(var1[3]);
  t57 = Sin(var1[4]);
  t61 = Sin(var1[5]);
  t44 = Cos(var1[6]);
  t66 = -1.*t52*t60;
  t70 = t47*t57*t61;
  t71 = t66 + t70;
  t59 = t47*t52*t57;
  t62 = t60*t61;
  t64 = t59 + t62;
  t74 = Sin(var1[6]);
  t35 = Cos(var1[7]);
  t92 = t47*t52;
  t93 = t60*t57*t61;
  t94 = t92 + t93;
  t88 = t52*t60*t57;
  t89 = -1.*t47*t61;
  t90 = t88 + t89;
  t85 = Sin(var1[7]);
  t106 = Cos(var1[4]);
  t82 = t44*t71;
  t83 = t64*t74;
  t84 = t82 + t83;
  t65 = t44*t64;
  t75 = -1.*t71*t74;
  t77 = t65 + t75;
  t99 = t44*t94;
  t101 = t90*t74;
  t102 = t99 + t101;
  t91 = t44*t90;
  t95 = -1.*t94*t74;
  t96 = t91 + t95;
  t113 = t106*t44*t61;
  t114 = t106*t52*t74;
  t115 = t113 + t114;
  t107 = t106*t52*t44;
  t110 = -1.*t106*t61*t74;
  t111 = t107 + t110;
  t134 = -1.*t44;
  t135 = 1. + t134;
  t136 = 0.135*t135;
  t137 = 0. + t136;
  t139 = -0.135*t74;
  t140 = 0. + t139;
  t142 = -1.*t35;
  t143 = 1. + t142;
  t144 = 0.135*t143;
  t145 = 0. + t144;
  t147 = -0.135*t85;
  t148 = 0. + t147;
  p_output1[0]=-1.*t35*t77 + t84*t85;
  p_output1[1]=t102*t85 - 1.*t35*t96;
  p_output1[2]=-1.*t111*t35 + t115*t85;
  p_output1[3]=0.;
  p_output1[4]=t106*t47;
  p_output1[5]=t106*t60;
  p_output1[6]=-1.*t57;
  p_output1[7]=0.;
  p_output1[8]=-1.*t35*t84 - 1.*t77*t85;
  p_output1[9]=-1.*t102*t35 - 1.*t85*t96;
  p_output1[10]=-1.*t115*t35 - 1.*t111*t85;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t106*t47 + t140*t64 + t137*t71 + t148*t77 + t145*t84 + 0.135*(t35*t84 + t77*t85) - 0.09*(t35*t77 - 1.*t84*t85) + var1[0];
  p_output1[13]=0. + t102*t145 - 0.049*t106*t60 + t140*t90 + t137*t94 + t148*t96 - 0.09*(-1.*t102*t85 + t35*t96) + 0.135*(t102*t35 + t85*t96) + var1[1];
  p_output1[14]=0. + t115*t145 + t111*t148 + t106*t140*t52 + 0.049*t57 + t106*t137*t61 + 0.135*(t115*t35 + t111*t85) - 0.09*(t111*t35 - 1.*t115*t85) + var1[2];
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

#include "H_hip_rotation_left.hh"

namespace SymExpression
{

void H_hip_rotation_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
