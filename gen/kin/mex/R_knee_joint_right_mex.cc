/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:42 GMT-04:00
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
  double t1131;
  double t1409;
  double t1023;
  double t1275;
  double t1421;
  double t1728;
  double t1377;
  double t1526;
  double t1558;
  double t856;
  double t2113;
  double t2169;
  double t2186;
  double t2376;
  double t1723;
  double t2189;
  double t2326;
  double t386;
  double t2387;
  double t2559;
  double t2675;
  double t2720;
  double t2779;
  double t2822;
  double t2902;
  double t2953;
  double t2976;
  double t217;
  double t3560;
  double t3576;
  double t3582;
  double t3662;
  double t3667;
  double t3672;
  double t3226;
  double t3595;
  double t3703;
  double t3875;
  double t3943;
  double t4022;
  double t4050;
  double t4232;
  double t4306;
  double t4345;
  double t4606;
  double t4636;
  double t4674;
  double t4717;
  double t4753;
  double t4764;
  double t4783;
  double t4790;
  double t4814;
  double t2354;
  double t3054;
  double t3063;
  double t3312;
  double t3408;
  double t3418;
  double t3896;
  double t4386;
  double t4434;
  double t4507;
  double t4511;
  double t4556;
  double t4708;
  double t4841;
  double t4862;
  double t4932;
  double t4959;
  double t4981;
  t1131 = Cos(var1[5]);
  t1409 = Sin(var1[3]);
  t1023 = Cos(var1[3]);
  t1275 = Sin(var1[4]);
  t1421 = Sin(var1[5]);
  t1728 = Sin(var1[13]);
  t1377 = t1023*t1131*t1275;
  t1526 = t1409*t1421;
  t1558 = t1377 + t1526;
  t856 = Cos(var1[13]);
  t2113 = -1.*t1131*t1409;
  t2169 = t1023*t1275*t1421;
  t2186 = t2113 + t2169;
  t2376 = Cos(var1[15]);
  t1723 = t856*t1558;
  t2189 = -1.*t1728*t2186;
  t2326 = t1723 + t2189;
  t386 = Sin(var1[15]);
  t2387 = Cos(var1[14]);
  t2559 = Cos(var1[4]);
  t2675 = t2387*t1023*t2559;
  t2720 = Sin(var1[14]);
  t2779 = t1728*t1558;
  t2822 = t856*t2186;
  t2902 = t2779 + t2822;
  t2953 = t2720*t2902;
  t2976 = t2675 + t2953;
  t217 = Sin(var1[16]);
  t3560 = t1131*t1409*t1275;
  t3576 = -1.*t1023*t1421;
  t3582 = t3560 + t3576;
  t3662 = t1023*t1131;
  t3667 = t1409*t1275*t1421;
  t3672 = t3662 + t3667;
  t3226 = Cos(var1[16]);
  t3595 = t856*t3582;
  t3703 = -1.*t1728*t3672;
  t3875 = t3595 + t3703;
  t3943 = t2387*t2559*t1409;
  t4022 = t1728*t3582;
  t4050 = t856*t3672;
  t4232 = t4022 + t4050;
  t4306 = t2720*t4232;
  t4345 = t3943 + t4306;
  t4606 = t856*t2559*t1131;
  t4636 = -1.*t2559*t1728*t1421;
  t4674 = t4606 + t4636;
  t4717 = -1.*t2387*t1275;
  t4753 = t2559*t1131*t1728;
  t4764 = t856*t2559*t1421;
  t4783 = t4753 + t4764;
  t4790 = t2720*t4783;
  t4814 = t4717 + t4790;
  t2354 = t386*t2326;
  t3054 = t2376*t2976;
  t3063 = t2354 + t3054;
  t3312 = t2376*t2326;
  t3408 = -1.*t386*t2976;
  t3418 = t3312 + t3408;
  t3896 = t386*t3875;
  t4386 = t2376*t4345;
  t4434 = t3896 + t4386;
  t4507 = t2376*t3875;
  t4511 = -1.*t386*t4345;
  t4556 = t4507 + t4511;
  t4708 = t386*t4674;
  t4841 = t2376*t4814;
  t4862 = t4708 + t4841;
  t4932 = t2376*t4674;
  t4959 = -1.*t386*t4814;
  t4981 = t4932 + t4959;
  p_output1[0]=t217*t3063 - 1.*t3226*t3418;
  p_output1[1]=t217*t4434 - 1.*t3226*t4556;
  p_output1[2]=t217*t4862 - 1.*t3226*t4981;
  p_output1[3]=t3063*t3226 + t217*t3418;
  p_output1[4]=t3226*t4434 + t217*t4556;
  p_output1[5]=t3226*t4862 + t217*t4981;
  p_output1[6]=t1023*t2559*t2720 - 1.*t2387*t2902;
  p_output1[7]=t1409*t2559*t2720 - 1.*t2387*t4232;
  p_output1[8]=-1.*t1275*t2720 - 1.*t2387*t4783;
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

#include "R_knee_joint_right_mex.hh"

namespace SymExpression
{

void R_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
