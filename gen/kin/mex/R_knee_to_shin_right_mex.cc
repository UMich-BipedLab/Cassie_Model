/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:27 GMT-04:00
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
  double t1094;
  double t1484;
  double t1051;
  double t1337;
  double t1488;
  double t1730;
  double t1397;
  double t1491;
  double t1505;
  double t949;
  double t1742;
  double t1758;
  double t1825;
  double t2206;
  double t1665;
  double t1853;
  double t1970;
  double t753;
  double t2250;
  double t2421;
  double t2432;
  double t2495;
  double t2527;
  double t2572;
  double t2750;
  double t2763;
  double t2869;
  double t3176;
  double t1995;
  double t2995;
  double t3034;
  double t463;
  double t3190;
  double t3192;
  double t3326;
  double t455;
  double t3821;
  double t3868;
  double t3922;
  double t3990;
  double t4060;
  double t4072;
  double t3973;
  double t4137;
  double t4143;
  double t4293;
  double t4311;
  double t4324;
  double t4410;
  double t4449;
  double t4496;
  double t3502;
  double t4165;
  double t4530;
  double t4538;
  double t4658;
  double t4792;
  double t4833;
  double t5397;
  double t5493;
  double t5635;
  double t5689;
  double t5729;
  double t5901;
  double t6348;
  double t6511;
  double t6523;
  double t5641;
  double t6622;
  double t8101;
  double t8152;
  double t8159;
  double t8189;
  double t3067;
  double t3446;
  double t3450;
  double t3541;
  double t3545;
  double t3552;
  double t4647;
  double t4848;
  double t4852;
  double t4956;
  double t5032;
  double t5051;
  double t8108;
  double t8220;
  double t8223;
  double t8281;
  double t8312;
  double t8329;
  t1094 = Cos(var1[5]);
  t1484 = Sin(var1[3]);
  t1051 = Cos(var1[3]);
  t1337 = Sin(var1[4]);
  t1488 = Sin(var1[5]);
  t1730 = Sin(var1[13]);
  t1397 = t1051*t1094*t1337;
  t1491 = t1484*t1488;
  t1505 = t1397 + t1491;
  t949 = Cos(var1[13]);
  t1742 = -1.*t1094*t1484;
  t1758 = t1051*t1337*t1488;
  t1825 = t1742 + t1758;
  t2206 = Cos(var1[15]);
  t1665 = t949*t1505;
  t1853 = -1.*t1730*t1825;
  t1970 = t1665 + t1853;
  t753 = Sin(var1[15]);
  t2250 = Cos(var1[14]);
  t2421 = Cos(var1[4]);
  t2432 = t2250*t1051*t2421;
  t2495 = Sin(var1[14]);
  t2527 = t1730*t1505;
  t2572 = t949*t1825;
  t2750 = t2527 + t2572;
  t2763 = t2495*t2750;
  t2869 = t2432 + t2763;
  t3176 = Cos(var1[16]);
  t1995 = t753*t1970;
  t2995 = t2206*t2869;
  t3034 = t1995 + t2995;
  t463 = Sin(var1[16]);
  t3190 = t2206*t1970;
  t3192 = -1.*t753*t2869;
  t3326 = t3190 + t3192;
  t455 = Cos(var1[17]);
  t3821 = t1094*t1484*t1337;
  t3868 = -1.*t1051*t1488;
  t3922 = t3821 + t3868;
  t3990 = t1051*t1094;
  t4060 = t1484*t1337*t1488;
  t4072 = t3990 + t4060;
  t3973 = t949*t3922;
  t4137 = -1.*t1730*t4072;
  t4143 = t3973 + t4137;
  t4293 = t2250*t2421*t1484;
  t4311 = t1730*t3922;
  t4324 = t949*t4072;
  t4410 = t4311 + t4324;
  t4449 = t2495*t4410;
  t4496 = t4293 + t4449;
  t3502 = Sin(var1[17]);
  t4165 = t753*t4143;
  t4530 = t2206*t4496;
  t4538 = t4165 + t4530;
  t4658 = t2206*t4143;
  t4792 = -1.*t753*t4496;
  t4833 = t4658 + t4792;
  t5397 = t949*t2421*t1094;
  t5493 = -1.*t2421*t1730*t1488;
  t5635 = t5397 + t5493;
  t5689 = -1.*t2250*t1337;
  t5729 = t2421*t1094*t1730;
  t5901 = t949*t2421*t1488;
  t6348 = t5729 + t5901;
  t6511 = t2495*t6348;
  t6523 = t5689 + t6511;
  t5641 = t753*t5635;
  t6622 = t2206*t6523;
  t8101 = t5641 + t6622;
  t8152 = t2206*t5635;
  t8159 = -1.*t753*t6523;
  t8189 = t8152 + t8159;
  t3067 = -1.*t463*t3034;
  t3446 = t3176*t3326;
  t3450 = t3067 + t3446;
  t3541 = t3176*t3034;
  t3545 = t463*t3326;
  t3552 = t3541 + t3545;
  t4647 = -1.*t463*t4538;
  t4848 = t3176*t4833;
  t4852 = t4647 + t4848;
  t4956 = t3176*t4538;
  t5032 = t463*t4833;
  t5051 = t4956 + t5032;
  t8108 = -1.*t463*t8101;
  t8220 = t3176*t8189;
  t8223 = t8108 + t8220;
  t8281 = t3176*t8101;
  t8312 = t463*t8189;
  t8329 = t8281 + t8312;
  p_output1[0]=t3502*t3552 - 1.*t3450*t455;
  p_output1[1]=-1.*t455*t4852 + t3502*t5051;
  p_output1[2]=-1.*t455*t8223 + t3502*t8329;
  p_output1[3]=t3450*t3502 + t3552*t455;
  p_output1[4]=t3502*t4852 + t455*t5051;
  p_output1[5]=t3502*t8223 + t455*t8329;
  p_output1[6]=t1051*t2421*t2495 - 1.*t2250*t2750;
  p_output1[7]=t1484*t2421*t2495 - 1.*t2250*t4410;
  p_output1[8]=-1.*t1337*t2495 - 1.*t2250*t6348;
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

#include "R_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void R_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
