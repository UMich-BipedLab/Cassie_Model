/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:40 GMT-05:00
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
  double t906;
  double t2473;
  double t551;
  double t1507;
  double t2612;
  double t4324;
  double t2303;
  double t2874;
  double t3050;
  double t524;
  double t7272;
  double t7298;
  double t7314;
  double t175;
  double t7350;
  double t7354;
  double t7356;
  double t7366;
  double t7402;
  double t7405;
  double t7407;
  double t7414;
  double t7417;
  double t7427;
  double t3229;
  double t7332;
  double t7333;
  double t7365;
  double t7368;
  double t7373;
  double t7381;
  double t7382;
  double t7386;
  double t7410;
  double t7431;
  double t7433;
  double t7440;
  double t7441;
  double t7443;
  double t7448;
  double t7454;
  double t7456;
  double t7469;
  double t7470;
  double t7471;
  double t7473;
  double t7474;
  double t7477;
  double t7478;
  double t7480;
  double t7493;
  t906 = Cos(var1[5]);
  t2473 = Sin(var1[3]);
  t551 = Cos(var1[3]);
  t1507 = Sin(var1[4]);
  t2612 = Sin(var1[5]);
  t4324 = Sin(var1[13]);
  t2303 = t551*t906*t1507;
  t2874 = t2473*t2612;
  t3050 = t2303 + t2874;
  t524 = Cos(var1[13]);
  t7272 = -1.*t906*t2473;
  t7298 = t551*t1507*t2612;
  t7314 = t7272 + t7298;
  t175 = Cos(var1[15]);
  t7350 = Sin(var1[15]);
  t7354 = Cos(var1[14]);
  t7356 = Cos(var1[4]);
  t7366 = Sin(var1[14]);
  t7402 = t906*t2473*t1507;
  t7405 = -1.*t551*t2612;
  t7407 = t7402 + t7405;
  t7414 = t551*t906;
  t7417 = t2473*t1507*t2612;
  t7427 = t7414 + t7417;
  t3229 = t524*t3050;
  t7332 = -1.*t4324*t7314;
  t7333 = t3229 + t7332;
  t7365 = t7354*t551*t7356;
  t7368 = t4324*t3050;
  t7373 = t524*t7314;
  t7381 = t7368 + t7373;
  t7382 = t7366*t7381;
  t7386 = t7365 + t7382;
  t7410 = t524*t7407;
  t7431 = -1.*t4324*t7427;
  t7433 = t7410 + t7431;
  t7440 = t7354*t7356*t2473;
  t7441 = t4324*t7407;
  t7443 = t524*t7427;
  t7448 = t7441 + t7443;
  t7454 = t7366*t7448;
  t7456 = t7440 + t7454;
  t7469 = t524*t7356*t906;
  t7470 = -1.*t7356*t4324*t2612;
  t7471 = t7469 + t7470;
  t7473 = -1.*t7354*t1507;
  t7474 = t7356*t906*t4324;
  t7477 = t524*t7356*t2612;
  t7478 = t7474 + t7477;
  t7480 = t7366*t7478;
  t7493 = t7473 + t7480;
  p_output1[0]=-1.*t175*t7333 + t7350*t7386;
  p_output1[1]=-1.*t175*t7433 + t7350*t7456;
  p_output1[2]=-1.*t175*t7471 + t7350*t7493;
  p_output1[3]=t7333*t7350 + t175*t7386;
  p_output1[4]=t7350*t7433 + t175*t7456;
  p_output1[5]=t7350*t7471 + t175*t7493;
  p_output1[6]=t551*t7356*t7366 - 1.*t7354*t7381;
  p_output1[7]=t2473*t7356*t7366 - 1.*t7354*t7448;
  p_output1[8]=-1.*t1507*t7366 - 1.*t7354*t7478;
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

#include "R_hip_flexion_right_mex.hh"

namespace SymExpression
{

void R_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
