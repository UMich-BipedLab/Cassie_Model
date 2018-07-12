/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:59 GMT-04:00
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
  double t3748;
  double t2607;
  double t3769;
  double t3498;
  double t3850;
  double t564;
  double t3551;
  double t3866;
  double t3913;
  double t3972;
  double t3973;
  double t3974;
  double t3982;
  double t4160;
  double t4171;
  double t4186;
  double t4203;
  double t4069;
  double t4072;
  double t4073;
  double t4227;
  double t4338;
  double t4341;
  double t4342;
  double t4350;
  double t4306;
  double t4313;
  double t4336;
  double t4386;
  double t4388;
  double t4389;
  double t1088;
  double t1578;
  double t2122;
  double t2224;
  double t4017;
  double t4021;
  double t4560;
  double t4594;
  double t4596;
  double t4604;
  double t4630;
  double t4637;
  double t4187;
  double t4209;
  double t4214;
  double t4229;
  double t4236;
  double t4238;
  double t4707;
  double t4711;
  double t4743;
  double t4348;
  double t4351;
  double t4365;
  double t4414;
  double t4433;
  double t4459;
  double t4815;
  double t4838;
  double t4843;
  double t4854;
  double t4861;
  double t4862;
  double t4978;
  double t4981;
  double t4988;
  double t5019;
  double t5026;
  double t5030;
  double t5041;
  double t5059;
  double t5061;
  t3748 = Cos(var1[3]);
  t2607 = Cos(var1[5]);
  t3769 = Sin(var1[4]);
  t3498 = Sin(var1[3]);
  t3850 = Sin(var1[5]);
  t564 = Cos(var1[6]);
  t3551 = -1.*t2607*t3498;
  t3866 = t3748*t3769*t3850;
  t3913 = t3551 + t3866;
  t3972 = t3748*t2607*t3769;
  t3973 = t3498*t3850;
  t3974 = t3972 + t3973;
  t3982 = Sin(var1[6]);
  t4160 = Cos(var1[7]);
  t4171 = -1.*t4160;
  t4186 = 1. + t4171;
  t4203 = Sin(var1[7]);
  t4069 = t564*t3913;
  t4072 = t3974*t3982;
  t4073 = t4069 + t4072;
  t4227 = Cos(var1[4]);
  t4338 = Cos(var1[8]);
  t4341 = -1.*t4338;
  t4342 = 1. + t4341;
  t4350 = Sin(var1[8]);
  t4306 = t3748*t4227*t4160;
  t4313 = t4073*t4203;
  t4336 = t4306 + t4313;
  t4386 = t564*t3974;
  t4388 = -1.*t3913*t3982;
  t4389 = t4386 + t4388;
  t1088 = -1.*t564;
  t1578 = 1. + t1088;
  t2122 = 0.135*t1578;
  t2224 = 0. + t2122;
  t4017 = -0.135*t3982;
  t4021 = 0. + t4017;
  t4560 = t3748*t2607;
  t4594 = t3498*t3769*t3850;
  t4596 = t4560 + t4594;
  t4604 = t2607*t3498*t3769;
  t4630 = -1.*t3748*t3850;
  t4637 = t4604 + t4630;
  t4187 = 0.135*t4186;
  t4209 = 0.049*t4203;
  t4214 = 0. + t4187 + t4209;
  t4229 = -0.049*t4186;
  t4236 = 0.135*t4203;
  t4238 = 0. + t4229 + t4236;
  t4707 = t564*t4596;
  t4711 = t4637*t3982;
  t4743 = t4707 + t4711;
  t4348 = -0.049*t4342;
  t4351 = -0.09*t4350;
  t4365 = 0. + t4348 + t4351;
  t4414 = -0.09*t4342;
  t4433 = 0.049*t4350;
  t4459 = 0. + t4414 + t4433;
  t4815 = t4227*t4160*t3498;
  t4838 = t4743*t4203;
  t4843 = t4815 + t4838;
  t4854 = t564*t4637;
  t4861 = -1.*t4596*t3982;
  t4862 = t4854 + t4861;
  t4978 = t4227*t564*t3850;
  t4981 = t4227*t2607*t3982;
  t4988 = t4978 + t4981;
  t5019 = -1.*t4160*t3769;
  t5026 = t4988*t4203;
  t5030 = t5019 + t5026;
  t5041 = t4227*t2607*t564;
  t5059 = -1.*t4227*t3850*t3982;
  t5061 = t5041 + t5059;
  p_output1[0]=0. + t2224*t3913 + t3974*t4021 + t4073*t4214 + 0.135*(t4073*t4160 - 1.*t3748*t4203*t4227) + t3748*t4227*t4238 + t4336*t4365 - 0.09*(-1.*t4336*t4350 + t4338*t4389) - 0.049*(t4336*t4338 + t4350*t4389) + t4389*t4459 + var1[0];
  p_output1[1]=0. + t3498*t4227*t4238 + t2224*t4596 + t4021*t4637 + t4214*t4743 + 0.135*(-1.*t3498*t4203*t4227 + t4160*t4743) + t4365*t4843 + t4459*t4862 - 0.09*(-1.*t4350*t4843 + t4338*t4862) - 0.049*(t4338*t4843 + t4350*t4862) + var1[1];
  p_output1[2]=0. + t2224*t3850*t4227 + t2607*t4021*t4227 - 1.*t3769*t4238 + t4214*t4988 + 0.135*(t3769*t4203 + t4160*t4988) + t4365*t5030 + t4459*t5061 - 0.09*(-1.*t4350*t5030 + t4338*t5061) - 0.049*(t4338*t5030 + t4350*t5061) + var1[2];
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

#include "p_hip_flexion_left_mex.hh"

namespace SymExpression
{

void p_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
