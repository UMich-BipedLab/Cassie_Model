/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:38 GMT-05:00
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
  double t252;
  double t384;
  double t103;
  double t311;
  double t507;
  double t998;
  double t312;
  double t686;
  double t851;
  double t75;
  double t1042;
  double t1052;
  double t1145;
  double t34;
  double t1794;
  double t1882;
  double t2188;
  double t2435;
  double t3116;
  double t3134;
  double t3143;
  double t3164;
  double t3166;
  double t3167;
  double t869;
  double t1668;
  double t1777;
  double t2428;
  double t2641;
  double t2979;
  double t2987;
  double t3026;
  double t3088;
  double t3158;
  double t3172;
  double t3178;
  double t3196;
  double t3199;
  double t3203;
  double t3205;
  double t3211;
  double t3213;
  double t3251;
  double t7141;
  double t7158;
  double t7199;
  double t7221;
  double t7224;
  double t7226;
  double t7227;
  double t7229;
  double t7301;
  double t7303;
  double t7333;
  double t7335;
  double t7250;
  double t7252;
  double t7254;
  double t7307;
  double t7310;
  double t7311;
  double t7313;
  double t7316;
  double t7318;
  double t7319;
  double t7320;
  double t7321;
  double t7323;
  double t7324;
  double t7325;
  double t7337;
  double t7338;
  double t7339;
  double t7349;
  double t7350;
  double t7351;
  double t7255;
  double t7256;
  double t7257;
  double t7264;
  double t7270;
  double t7272;
  t252 = Cos(var1[5]);
  t384 = Sin(var1[3]);
  t103 = Cos(var1[3]);
  t311 = Sin(var1[4]);
  t507 = Sin(var1[5]);
  t998 = Sin(var1[13]);
  t312 = t103*t252*t311;
  t686 = t384*t507;
  t851 = t312 + t686;
  t75 = Cos(var1[13]);
  t1042 = -1.*t252*t384;
  t1052 = t103*t311*t507;
  t1145 = t1042 + t1052;
  t34 = Cos(var1[15]);
  t1794 = Sin(var1[15]);
  t1882 = Cos(var1[14]);
  t2188 = Cos(var1[4]);
  t2435 = Sin(var1[14]);
  t3116 = t252*t384*t311;
  t3134 = -1.*t103*t507;
  t3143 = t3116 + t3134;
  t3164 = t103*t252;
  t3166 = t384*t311*t507;
  t3167 = t3164 + t3166;
  t869 = t75*t851;
  t1668 = -1.*t998*t1145;
  t1777 = t869 + t1668;
  t2428 = t1882*t103*t2188;
  t2641 = t998*t851;
  t2979 = t75*t1145;
  t2987 = t2641 + t2979;
  t3026 = t2435*t2987;
  t3088 = t2428 + t3026;
  t3158 = t75*t3143;
  t3172 = -1.*t998*t3167;
  t3178 = t3158 + t3172;
  t3196 = t1882*t2188*t384;
  t3199 = t998*t3143;
  t3203 = t75*t3167;
  t3205 = t3199 + t3203;
  t3211 = t2435*t3205;
  t3213 = t3196 + t3211;
  t3251 = t75*t2188*t252;
  t7141 = -1.*t2188*t998*t507;
  t7158 = t3251 + t7141;
  t7199 = -1.*t1882*t311;
  t7221 = t2188*t252*t998;
  t7224 = t75*t2188*t507;
  t7226 = t7221 + t7224;
  t7227 = t2435*t7226;
  t7229 = t7199 + t7227;
  t7301 = -1.*t1882;
  t7303 = 1. + t7301;
  t7333 = -1.*t34;
  t7335 = 1. + t7333;
  t7250 = t1794*t1777;
  t7252 = t34*t3088;
  t7254 = t7250 + t7252;
  t7307 = -0.049*t7303;
  t7310 = -0.135*t2435;
  t7311 = 0. + t7307 + t7310;
  t7313 = 0.135*t998;
  t7316 = 0. + t7313;
  t7318 = -1.*t75;
  t7319 = 1. + t7318;
  t7320 = -0.135*t7319;
  t7321 = 0. + t7320;
  t7323 = -0.135*t7303;
  t7324 = 0.049*t2435;
  t7325 = 0. + t7323 + t7324;
  t7337 = -0.09*t7335;
  t7338 = 0.049*t1794;
  t7339 = 0. + t7337 + t7338;
  t7349 = -0.049*t7335;
  t7350 = -0.09*t1794;
  t7351 = 0. + t7349 + t7350;
  t7255 = t1794*t3178;
  t7256 = t34*t3213;
  t7257 = t7255 + t7256;
  t7264 = t1794*t7158;
  t7270 = t34*t7229;
  t7272 = t7264 + t7270;
  p_output1[0]=t1794*t3088 - 1.*t1777*t34;
  p_output1[1]=t1794*t3213 - 1.*t3178*t34;
  p_output1[2]=-1.*t34*t7158 + t1794*t7229;
  p_output1[3]=0.;
  p_output1[4]=t7254;
  p_output1[5]=t7257;
  p_output1[6]=t7272;
  p_output1[7]=0.;
  p_output1[8]=t103*t2188*t2435 - 1.*t1882*t2987;
  p_output1[9]=-1.*t1882*t3205 + t2188*t2435*t384;
  p_output1[10]=-1.*t2435*t311 - 1.*t1882*t7226;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(-1.*t103*t2188*t2435 + t1882*t2987) - 0.09*(-1.*t1794*t3088 + t1777*t34) - 0.049*t7254 + t103*t2188*t7311 + t1145*t7321 + t2987*t7325 + t1777*t7339 + t3088*t7351 + t7316*t851 + var1[0];
  p_output1[13]=0. - 0.09*(-1.*t1794*t3213 + t3178*t34) - 0.135*(t1882*t3205 - 1.*t2188*t2435*t384) - 0.049*t7257 + t2188*t384*t7311 + t3143*t7316 + t3167*t7321 + t3205*t7325 + t3178*t7339 + t3213*t7351 + var1[1];
  p_output1[14]=0. - 0.135*(t2435*t311 + t1882*t7226) - 0.09*(t34*t7158 - 1.*t1794*t7229) - 0.049*t7272 - 1.*t311*t7311 + t2188*t252*t7316 + t2188*t507*t7321 + t7226*t7325 + t7158*t7339 + t7229*t7351 + var1[2];
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
