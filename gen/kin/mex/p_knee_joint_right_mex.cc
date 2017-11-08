/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:41 GMT-05:00
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
  double t547;
  double t6481;
  double t6487;
  double t6482;
  double t6489;
  double t6427;
  double t6445;
  double t6446;
  double t6465;
  double t6471;
  double t6486;
  double t6493;
  double t6494;
  double t6496;
  double t6501;
  double t6503;
  double t6504;
  double t3224;
  double t6509;
  double t6510;
  double t6511;
  double t6513;
  double t6514;
  double t6516;
  double t6518;
  double t6521;
  double t6522;
  double t6523;
  double t6532;
  double t6533;
  double t6534;
  double t6461;
  double t6466;
  double t6468;
  double t6474;
  double t6480;
  double t6497;
  double t6498;
  double t6499;
  double t6500;
  double t6506;
  double t6507;
  double t6508;
  double t6546;
  double t6547;
  double t6548;
  double t6550;
  double t6551;
  double t6552;
  double t6517;
  double t6519;
  double t6520;
  double t6554;
  double t6555;
  double t6556;
  double t6529;
  double t6530;
  double t6531;
  double t6558;
  double t6559;
  double t6560;
  double t6566;
  double t6567;
  double t6568;
  double t6582;
  double t6583;
  double t6584;
  double t6586;
  double t6587;
  double t6588;
  double t6594;
  double t6595;
  double t6596;
  t547 = Cos(var1[3]);
  t6481 = Cos(var1[5]);
  t6487 = Sin(var1[3]);
  t6482 = Sin(var1[4]);
  t6489 = Sin(var1[5]);
  t6427 = Cos(var1[14]);
  t6445 = -1.*t6427;
  t6446 = 1. + t6445;
  t6465 = Sin(var1[14]);
  t6471 = Sin(var1[13]);
  t6486 = t547*t6481*t6482;
  t6493 = t6487*t6489;
  t6494 = t6486 + t6493;
  t6496 = Cos(var1[13]);
  t6501 = -1.*t6481*t6487;
  t6503 = t547*t6482*t6489;
  t6504 = t6501 + t6503;
  t3224 = Cos(var1[4]);
  t6509 = t6471*t6494;
  t6510 = t6496*t6504;
  t6511 = t6509 + t6510;
  t6513 = Cos(var1[15]);
  t6514 = -1.*t6513;
  t6516 = 1. + t6514;
  t6518 = Sin(var1[15]);
  t6521 = t6496*t6494;
  t6522 = -1.*t6471*t6504;
  t6523 = t6521 + t6522;
  t6532 = t6427*t547*t3224;
  t6533 = t6465*t6511;
  t6534 = t6532 + t6533;
  t6461 = -0.049*t6446;
  t6466 = -0.135*t6465;
  t6468 = 0. + t6461 + t6466;
  t6474 = 0.135*t6471;
  t6480 = 0. + t6474;
  t6497 = -1.*t6496;
  t6498 = 1. + t6497;
  t6499 = -0.135*t6498;
  t6500 = 0. + t6499;
  t6506 = -0.135*t6446;
  t6507 = 0.049*t6465;
  t6508 = 0. + t6506 + t6507;
  t6546 = t6481*t6487*t6482;
  t6547 = -1.*t547*t6489;
  t6548 = t6546 + t6547;
  t6550 = t547*t6481;
  t6551 = t6487*t6482*t6489;
  t6552 = t6550 + t6551;
  t6517 = -0.09*t6516;
  t6519 = 0.049*t6518;
  t6520 = 0. + t6517 + t6519;
  t6554 = t6471*t6548;
  t6555 = t6496*t6552;
  t6556 = t6554 + t6555;
  t6529 = -0.049*t6516;
  t6530 = -0.09*t6518;
  t6531 = 0. + t6529 + t6530;
  t6558 = t6496*t6548;
  t6559 = -1.*t6471*t6552;
  t6560 = t6558 + t6559;
  t6566 = t6427*t3224*t6487;
  t6567 = t6465*t6556;
  t6568 = t6566 + t6567;
  t6582 = t3224*t6481*t6471;
  t6583 = t6496*t3224*t6489;
  t6584 = t6582 + t6583;
  t6586 = t6496*t3224*t6481;
  t6587 = -1.*t3224*t6471*t6489;
  t6588 = t6586 + t6587;
  t6594 = -1.*t6427*t6482;
  t6595 = t6465*t6584;
  t6596 = t6594 + t6595;
  p_output1[0]=0. + t3224*t547*t6468 + t6480*t6494 + t6500*t6504 + t6508*t6511 - 0.1305*(-1.*t3224*t547*t6465 + t6427*t6511) + t6520*t6523 + t6531*t6534 - 0.049*(t6518*t6523 + t6513*t6534) - 0.21*(t6513*t6523 - 1.*t6518*t6534) + var1[0];
  p_output1[1]=0. + t3224*t6468*t6487 + t6480*t6548 + t6500*t6552 + t6508*t6556 - 0.1305*(-1.*t3224*t6465*t6487 + t6427*t6556) + t6520*t6560 + t6531*t6568 - 0.049*(t6518*t6560 + t6513*t6568) - 0.21*(t6513*t6560 - 1.*t6518*t6568) + var1[1];
  p_output1[2]=0. + t3224*t6480*t6481 - 1.*t6468*t6482 + t3224*t6489*t6500 + t6508*t6584 - 0.1305*(t6465*t6482 + t6427*t6584) + t6520*t6588 + t6531*t6596 - 0.049*(t6518*t6588 + t6513*t6596) - 0.21*(t6513*t6588 - 1.*t6518*t6596) + var1[2];
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

#include "p_knee_joint_right_mex.hh"

namespace SymExpression
{

void p_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
