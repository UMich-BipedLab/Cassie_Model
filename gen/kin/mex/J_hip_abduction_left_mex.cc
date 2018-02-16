/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:14:59 GMT-05:00
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
  double t89;
  double t108;
  double t111;
  double t107;
  double t112;
  double t98;
  double t110;
  double t113;
  double t114;
  double t116;
  double t117;
  double t119;
  double t120;
  double t81;
  double t102;
  double t104;
  double t105;
  double t106;
  double t121;
  double t122;
  double t131;
  double t132;
  double t133;
  double t135;
  double t136;
  double t137;
  double t169;
  double t170;
  double t171;
  double t178;
  double t179;
  double t180;
  double t173;
  double t183;
  double t202;
  double t203;
  double t204;
  double t190;
  double t191;
  double t192;
  double t193;
  t89 = Sin(var1[3]);
  t108 = Cos(var1[5]);
  t111 = Sin(var1[4]);
  t107 = Cos(var1[3]);
  t112 = Sin(var1[5]);
  t98 = Cos(var1[6]);
  t110 = -1.*t107*t108;
  t113 = -1.*t89*t111*t112;
  t114 = t110 + t113;
  t116 = -1.*t108*t89*t111;
  t117 = t107*t112;
  t119 = t116 + t117;
  t120 = Sin(var1[6]);
  t81 = Cos(var1[4]);
  t102 = -1.*t98;
  t104 = 1. + t102;
  t105 = 0.135*t104;
  t106 = 0. + t105;
  t121 = -0.135*t120;
  t122 = 0. + t121;
  t131 = -1.*t108*t89;
  t132 = t107*t111*t112;
  t133 = t131 + t132;
  t135 = t107*t108*t111;
  t136 = t89*t112;
  t137 = t135 + t136;
  t169 = t108*t89;
  t170 = -1.*t107*t111*t112;
  t171 = t169 + t170;
  t178 = t108*t89*t111;
  t179 = -1.*t107*t112;
  t180 = t178 + t179;
  t173 = t98*t137;
  t183 = t98*t180;
  t202 = t107*t108;
  t203 = t89*t111*t112;
  t204 = t202 + t203;
  t190 = t81*t108*t98;
  t191 = -1.*t81*t112*t120;
  t192 = t190 + t191;
  t193 = 0.135*t192;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t106*t114 + t119*t122 + 0.049*t81*t89 + 0.135*(t119*t120 + t114*t98);
  p_output1[10]=t106*t133 + t122*t137 - 0.049*t107*t81 + 0.135*(t120*t137 + t133*t98);
  p_output1[11]=0;
  p_output1[12]=0.049*t107*t111 + t106*t107*t112*t81 + t107*t108*t122*t81 + 0.135*(t107*t108*t120*t81 + t107*t112*t81*t98);
  p_output1[13]=0.049*t111*t89 + t106*t112*t81*t89 + t108*t122*t81*t89 + 0.135*(t108*t120*t81*t89 + t112*t81*t89*t98);
  p_output1[14]=-1.*t106*t111*t112 - 1.*t108*t111*t122 + 0.049*t81 + 0.135*(-1.*t108*t111*t120 - 1.*t111*t112*t98);
  p_output1[15]=t106*t137 + t122*t171 + 0.135*(t120*t171 + t173);
  p_output1[16]=t114*t122 + t106*t180 + 0.135*(t114*t120 + t183);
  p_output1[17]=t193 + t106*t108*t81 - 1.*t112*t122*t81;
  p_output1[18]=0.135*t120*t133 + 0.135*(-1.*t120*t133 + t173) - 0.135*t137*t98;
  p_output1[19]=0.135*t120*t204 + 0.135*(t183 - 1.*t120*t204) - 0.135*t180*t98;
  p_output1[20]=t193 + 0.135*t112*t120*t81 - 0.135*t108*t81*t98;
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
