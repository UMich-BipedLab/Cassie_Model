/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:03 GMT-04:00
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
  double t1607;
  double t1194;
  double t2245;
  double t1281;
  double t2263;
  double t147;
  double t1436;
  double t3140;
  double t3470;
  double t4119;
  double t4154;
  double t4200;
  double t4221;
  double t5184;
  double t5185;
  double t5188;
  double t5332;
  double t4617;
  double t4673;
  double t5096;
  double t5412;
  double t5499;
  double t5503;
  double t5514;
  double t5533;
  double t5475;
  double t5481;
  double t5486;
  double t5576;
  double t5580;
  double t5581;
  double t5601;
  double t5614;
  double t5615;
  double t5631;
  double t5670;
  double t5683;
  double t5689;
  double t5740;
  double t5742;
  double t5745;
  double t457;
  double t859;
  double t1099;
  double t1159;
  double t4234;
  double t4244;
  double t5813;
  double t5834;
  double t5835;
  double t5853;
  double t5855;
  double t5860;
  double t5243;
  double t5337;
  double t5361;
  double t5419;
  double t5420;
  double t5425;
  double t5872;
  double t5873;
  double t5875;
  double t5522;
  double t5548;
  double t5557;
  double t5584;
  double t5585;
  double t5590;
  double t5621;
  double t5643;
  double t5666;
  double t5936;
  double t5944;
  double t5947;
  double t5965;
  double t5967;
  double t6002;
  double t5696;
  double t5714;
  double t5737;
  double t6010;
  double t6017;
  double t6022;
  double t6064;
  double t6066;
  double t6078;
  double t6227;
  double t6247;
  double t6248;
  double t6277;
  double t6278;
  double t6281;
  double t6287;
  double t6289;
  double t6291;
  double t6296;
  double t6301;
  double t6303;
  double t6321;
  double t6326;
  double t6335;
  t1607 = Cos(var1[3]);
  t1194 = Cos(var1[5]);
  t2245 = Sin(var1[4]);
  t1281 = Sin(var1[3]);
  t2263 = Sin(var1[5]);
  t147 = Cos(var1[6]);
  t1436 = -1.*t1194*t1281;
  t3140 = t1607*t2245*t2263;
  t3470 = t1436 + t3140;
  t4119 = t1607*t1194*t2245;
  t4154 = t1281*t2263;
  t4200 = t4119 + t4154;
  t4221 = Sin(var1[6]);
  t5184 = Cos(var1[7]);
  t5185 = -1.*t5184;
  t5188 = 1. + t5185;
  t5332 = Sin(var1[7]);
  t4617 = t147*t3470;
  t4673 = t4200*t4221;
  t5096 = t4617 + t4673;
  t5412 = Cos(var1[4]);
  t5499 = Cos(var1[8]);
  t5503 = -1.*t5499;
  t5514 = 1. + t5503;
  t5533 = Sin(var1[8]);
  t5475 = t1607*t5412*t5184;
  t5481 = t5096*t5332;
  t5486 = t5475 + t5481;
  t5576 = t147*t4200;
  t5580 = -1.*t3470*t4221;
  t5581 = t5576 + t5580;
  t5601 = Cos(var1[9]);
  t5614 = -1.*t5601;
  t5615 = 1. + t5614;
  t5631 = Sin(var1[9]);
  t5670 = t5499*t5486;
  t5683 = t5581*t5533;
  t5689 = t5670 + t5683;
  t5740 = t5499*t5581;
  t5742 = -1.*t5486*t5533;
  t5745 = t5740 + t5742;
  t457 = -1.*t147;
  t859 = 1. + t457;
  t1099 = 0.135*t859;
  t1159 = 0. + t1099;
  t4234 = -0.135*t4221;
  t4244 = 0. + t4234;
  t5813 = t1607*t1194;
  t5834 = t1281*t2245*t2263;
  t5835 = t5813 + t5834;
  t5853 = t1194*t1281*t2245;
  t5855 = -1.*t1607*t2263;
  t5860 = t5853 + t5855;
  t5243 = 0.135*t5188;
  t5337 = 0.049*t5332;
  t5361 = 0. + t5243 + t5337;
  t5419 = -0.049*t5188;
  t5420 = 0.135*t5332;
  t5425 = 0. + t5419 + t5420;
  t5872 = t147*t5835;
  t5873 = t5860*t4221;
  t5875 = t5872 + t5873;
  t5522 = -0.049*t5514;
  t5548 = -0.09*t5533;
  t5557 = 0. + t5522 + t5548;
  t5584 = -0.09*t5514;
  t5585 = 0.049*t5533;
  t5590 = 0. + t5584 + t5585;
  t5621 = -0.049*t5615;
  t5643 = -0.21*t5631;
  t5666 = 0. + t5621 + t5643;
  t5936 = t5412*t5184*t1281;
  t5944 = t5875*t5332;
  t5947 = t5936 + t5944;
  t5965 = t147*t5860;
  t5967 = -1.*t5835*t4221;
  t6002 = t5965 + t5967;
  t5696 = -0.21*t5615;
  t5714 = 0.049*t5631;
  t5737 = 0. + t5696 + t5714;
  t6010 = t5499*t5947;
  t6017 = t6002*t5533;
  t6022 = t6010 + t6017;
  t6064 = t5499*t6002;
  t6066 = -1.*t5947*t5533;
  t6078 = t6064 + t6066;
  t6227 = t5412*t147*t2263;
  t6247 = t5412*t1194*t4221;
  t6248 = t6227 + t6247;
  t6277 = -1.*t5184*t2245;
  t6278 = t6248*t5332;
  t6281 = t6277 + t6278;
  t6287 = t5412*t1194*t147;
  t6289 = -1.*t5412*t2263*t4221;
  t6291 = t6287 + t6289;
  t6296 = t5499*t6281;
  t6301 = t6291*t5533;
  t6303 = t6296 + t6301;
  t6321 = t5499*t6291;
  t6326 = -1.*t6281*t5533;
  t6335 = t6321 + t6326;
  p_output1[0]=0. + t1159*t3470 + t4200*t4244 + t5096*t5361 + 0.1305*(t5096*t5184 - 1.*t1607*t5332*t5412) + t1607*t5412*t5425 + t5486*t5557 + t5581*t5590 + t5666*t5689 + t5737*t5745 - 0.21*(-1.*t5631*t5689 + t5601*t5745) - 0.049*(t5601*t5689 + t5631*t5745) + var1[0];
  p_output1[1]=0. + t1281*t5412*t5425 + t1159*t5835 + t4244*t5860 + t5361*t5875 + 0.1305*(-1.*t1281*t5332*t5412 + t5184*t5875) + t5557*t5947 + t5590*t6002 + t5666*t6022 + t5737*t6078 - 0.21*(-1.*t5631*t6022 + t5601*t6078) - 0.049*(t5601*t6022 + t5631*t6078) + var1[1];
  p_output1[2]=0. + t1159*t2263*t5412 + t1194*t4244*t5412 - 1.*t2245*t5425 + t5361*t6248 + 0.1305*(t2245*t5332 + t5184*t6248) + t5557*t6281 + t5590*t6291 + t5666*t6303 + t5737*t6335 - 0.21*(-1.*t5631*t6303 + t5601*t6335) - 0.049*(t5601*t6303 + t5631*t6335) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_knee_joint_left_mex.hh"

namespace SymExpression
{

void p_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
