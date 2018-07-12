/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:31 GMT-04:00
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
  double t381;
  double t1120;
  double t113;
  double t441;
  double t1187;
  double t54;
  double t1844;
  double t3247;
  double t459;
  double t1235;
  double t1441;
  double t2123;
  double t2262;
  double t2336;
  double t3464;
  double t3624;
  double t2549;
  double t2770;
  double t2814;
  double t2947;
  double t3017;
  double t3050;
  double t3638;
  double t3773;
  double t3791;
  double t4084;
  double t4131;
  double t4138;
  double t4253;
  double t4258;
  double t4274;
  double t4528;
  double t4580;
  double t3575;
  double t3848;
  double t3903;
  double t4638;
  double t4683;
  double t4740;
  double t4823;
  double t4826;
  double t4877;
  double t4899;
  double t4907;
  double t4923;
  double t5015;
  double t5047;
  double t5062;
  double t4072;
  double t4180;
  double t4184;
  double t4231;
  double t4316;
  double t4317;
  t381 = Cos(var1[5]);
  t1120 = Sin(var1[3]);
  t113 = Cos(var1[3]);
  t441 = Sin(var1[4]);
  t1187 = Sin(var1[5]);
  t54 = Cos(var1[13]);
  t1844 = Sin(var1[13]);
  t3247 = Cos(var1[4]);
  t459 = t113*t381*t441;
  t1235 = t1120*t1187;
  t1441 = t459 + t1235;
  t2123 = -1.*t381*t1120;
  t2262 = t113*t441*t1187;
  t2336 = t2123 + t2262;
  t3464 = Cos(var1[14]);
  t3624 = Sin(var1[14]);
  t2549 = t381*t1120*t441;
  t2770 = -1.*t113*t1187;
  t2814 = t2549 + t2770;
  t2947 = t113*t381;
  t3017 = t1120*t441*t1187;
  t3050 = t2947 + t3017;
  t3638 = t1844*t1441;
  t3773 = t54*t2336;
  t3791 = t3638 + t3773;
  t4084 = t1844*t2814;
  t4131 = t54*t3050;
  t4138 = t4084 + t4131;
  t4253 = t3247*t381*t1844;
  t4258 = t54*t3247*t1187;
  t4274 = t4253 + t4258;
  t4528 = -1.*t3464;
  t4580 = 1. + t4528;
  t3575 = t3464*t113*t3247;
  t3848 = t3624*t3791;
  t3903 = t3575 + t3848;
  t4638 = -0.049*t4580;
  t4683 = -0.135*t3624;
  t4740 = 0. + t4638 + t4683;
  t4823 = 0.135*t1844;
  t4826 = 0. + t4823;
  t4877 = -1.*t54;
  t4899 = 1. + t4877;
  t4907 = -0.135*t4899;
  t4923 = 0. + t4907;
  t5015 = -0.135*t4580;
  t5047 = 0.049*t3624;
  t5062 = 0. + t5015 + t5047;
  t4072 = t3464*t3247*t1120;
  t4180 = t3624*t4138;
  t4184 = t4072 + t4180;
  t4231 = -1.*t3464*t441;
  t4316 = t3624*t4274;
  t4317 = t4231 + t4316;
  p_output1[0]=t1844*t2336 - 1.*t1441*t54;
  p_output1[1]=t1844*t3050 - 1.*t2814*t54;
  p_output1[2]=t1187*t1844*t3247 - 1.*t3247*t381*t54;
  p_output1[3]=0.;
  p_output1[4]=t3903;
  p_output1[5]=t4184;
  p_output1[6]=t4317;
  p_output1[7]=0.;
  p_output1[8]=t113*t3247*t3624 - 1.*t3464*t3791;
  p_output1[9]=t1120*t3247*t3624 - 1.*t3464*t4138;
  p_output1[10]=-1.*t3464*t4274 - 1.*t3624*t441;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(-1.*t113*t3247*t3624 + t3464*t3791) - 0.049*t3903 + t113*t3247*t4740 + t1441*t4826 + t2336*t4923 + t3791*t5062 - 0.09*(-1.*t1844*t2336 + t1441*t54) + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t1120*t3247*t3624 + t3464*t4138) - 0.049*t4184 + t1120*t3247*t4740 + t2814*t4826 + t3050*t4923 + t4138*t5062 - 0.09*(-1.*t1844*t3050 + t2814*t54) + var1[1];
  p_output1[14]=0. - 0.049*t4317 - 0.135*(t3464*t4274 + t3624*t441) - 1.*t441*t4740 + t3247*t381*t4826 + t1187*t3247*t4923 + t4274*t5062 - 0.09*(-1.*t1187*t1844*t3247 + t3247*t381*t54) + var1[2];
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

#include "H_hip_rotation_right_mex.hh"

namespace SymExpression
{

void H_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
