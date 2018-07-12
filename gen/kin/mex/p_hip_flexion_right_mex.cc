/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:33 GMT-04:00
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
  double t124;
  double t5448;
  double t5502;
  double t5486;
  double t5510;
  double t537;
  double t569;
  double t582;
  double t637;
  double t4923;
  double t5497;
  double t5522;
  double t5556;
  double t5561;
  double t6066;
  double t6086;
  double t6112;
  double t445;
  double t6314;
  double t6327;
  double t6330;
  double t6419;
  double t6443;
  double t6469;
  double t6486;
  double t6545;
  double t6546;
  double t6565;
  double t6784;
  double t6821;
  double t6825;
  double t601;
  double t4332;
  double t4522;
  double t4956;
  double t5302;
  double t5759;
  double t5828;
  double t5875;
  double t6006;
  double t6279;
  double t6305;
  double t6312;
  double t7123;
  double t7131;
  double t7132;
  double t7172;
  double t7201;
  double t7217;
  double t6478;
  double t6505;
  double t6532;
  double t7240;
  double t7247;
  double t7251;
  double t6735;
  double t6753;
  double t6774;
  double t7264;
  double t7267;
  double t7390;
  double t7424;
  double t7439;
  double t7443;
  double t7593;
  double t7614;
  double t7629;
  double t7679;
  double t7697;
  double t7711;
  double t7756;
  double t7763;
  double t7779;
  t124 = Cos(var1[3]);
  t5448 = Cos(var1[5]);
  t5502 = Sin(var1[3]);
  t5486 = Sin(var1[4]);
  t5510 = Sin(var1[5]);
  t537 = Cos(var1[14]);
  t569 = -1.*t537;
  t582 = 1. + t569;
  t637 = Sin(var1[14]);
  t4923 = Sin(var1[13]);
  t5497 = t124*t5448*t5486;
  t5522 = t5502*t5510;
  t5556 = t5497 + t5522;
  t5561 = Cos(var1[13]);
  t6066 = -1.*t5448*t5502;
  t6086 = t124*t5486*t5510;
  t6112 = t6066 + t6086;
  t445 = Cos(var1[4]);
  t6314 = t4923*t5556;
  t6327 = t5561*t6112;
  t6330 = t6314 + t6327;
  t6419 = Cos(var1[15]);
  t6443 = -1.*t6419;
  t6469 = 1. + t6443;
  t6486 = Sin(var1[15]);
  t6545 = t5561*t5556;
  t6546 = -1.*t4923*t6112;
  t6565 = t6545 + t6546;
  t6784 = t537*t124*t445;
  t6821 = t637*t6330;
  t6825 = t6784 + t6821;
  t601 = -0.049*t582;
  t4332 = -0.135*t637;
  t4522 = 0. + t601 + t4332;
  t4956 = 0.135*t4923;
  t5302 = 0. + t4956;
  t5759 = -1.*t5561;
  t5828 = 1. + t5759;
  t5875 = -0.135*t5828;
  t6006 = 0. + t5875;
  t6279 = -0.135*t582;
  t6305 = 0.049*t637;
  t6312 = 0. + t6279 + t6305;
  t7123 = t5448*t5502*t5486;
  t7131 = -1.*t124*t5510;
  t7132 = t7123 + t7131;
  t7172 = t124*t5448;
  t7201 = t5502*t5486*t5510;
  t7217 = t7172 + t7201;
  t6478 = -0.09*t6469;
  t6505 = 0.049*t6486;
  t6532 = 0. + t6478 + t6505;
  t7240 = t4923*t7132;
  t7247 = t5561*t7217;
  t7251 = t7240 + t7247;
  t6735 = -0.049*t6469;
  t6753 = -0.09*t6486;
  t6774 = 0. + t6735 + t6753;
  t7264 = t5561*t7132;
  t7267 = -1.*t4923*t7217;
  t7390 = t7264 + t7267;
  t7424 = t537*t445*t5502;
  t7439 = t637*t7251;
  t7443 = t7424 + t7439;
  t7593 = t445*t5448*t4923;
  t7614 = t5561*t445*t5510;
  t7629 = t7593 + t7614;
  t7679 = t5561*t445*t5448;
  t7697 = -1.*t445*t4923*t5510;
  t7711 = t7679 + t7697;
  t7756 = -1.*t537*t5486;
  t7763 = t637*t7629;
  t7779 = t7756 + t7763;
  p_output1[0]=0. + t124*t445*t4522 + t5302*t5556 + t6006*t6112 + t6312*t6330 - 0.135*(t537*t6330 - 1.*t124*t445*t637) + t6532*t6565 + t6774*t6825 - 0.049*(t6486*t6565 + t6419*t6825) - 0.09*(t6419*t6565 - 1.*t6486*t6825) + var1[0];
  p_output1[1]=0. + t445*t4522*t5502 + t5302*t7132 + t6006*t7217 + t6312*t7251 - 0.135*(-1.*t445*t5502*t637 + t537*t7251) + t6532*t7390 + t6774*t7443 - 0.049*(t6486*t7390 + t6419*t7443) - 0.09*(t6419*t7390 - 1.*t6486*t7443) + var1[1];
  p_output1[2]=0. + t445*t5302*t5448 - 1.*t4522*t5486 + t445*t5510*t6006 + t6312*t7629 - 0.135*(t5486*t637 + t537*t7629) + t6532*t7711 + t6774*t7779 - 0.049*(t6486*t7711 + t6419*t7779) - 0.09*(t6419*t7711 - 1.*t6486*t7779) + var1[2];
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

#include "p_hip_flexion_right_mex.hh"

namespace SymExpression
{

void p_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
