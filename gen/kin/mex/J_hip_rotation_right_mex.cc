/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:31 GMT-05:00
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
  double t5869;
  double t5911;
  double t5898;
  double t5906;
  double t5914;
  double t5882;
  double t5908;
  double t5918;
  double t5919;
  double t5922;
  double t5927;
  double t5928;
  double t5930;
  double t5863;
  double t5889;
  double t5894;
  double t5923;
  double t5924;
  double t5925;
  double t5926;
  double t5951;
  double t5952;
  double t5953;
  double t5955;
  double t5956;
  double t5957;
  double t6019;
  double t6020;
  double t6021;
  double t5964;
  double t6032;
  double t6033;
  double t6034;
  double t5939;
  double t6023;
  double t5965;
  double t5966;
  double t6037;
  double t6065;
  double t6066;
  double t6067;
  double t6041;
  double t6048;
  double t6049;
  double t6050;
  double t6051;
  double t6052;
  double t6053;
  double t6054;
  double t6055;
  t5869 = Sin(var1[3]);
  t5911 = Cos(var1[3]);
  t5898 = Cos(var1[5]);
  t5906 = Sin(var1[4]);
  t5914 = Sin(var1[5]);
  t5882 = Sin(var1[13]);
  t5908 = -1.*t5898*t5869*t5906;
  t5918 = t5911*t5914;
  t5919 = t5908 + t5918;
  t5922 = Cos(var1[13]);
  t5927 = -1.*t5911*t5898;
  t5928 = -1.*t5869*t5906*t5914;
  t5930 = t5927 + t5928;
  t5863 = Cos(var1[4]);
  t5889 = 0.135*t5882;
  t5894 = 0. + t5889;
  t5923 = -1.*t5922;
  t5924 = 1. + t5923;
  t5925 = -0.135*t5924;
  t5926 = 0. + t5925;
  t5951 = t5911*t5898*t5906;
  t5952 = t5869*t5914;
  t5953 = t5951 + t5952;
  t5955 = -1.*t5898*t5869;
  t5956 = t5911*t5906*t5914;
  t5957 = t5955 + t5956;
  t6019 = t5898*t5869;
  t6020 = -1.*t5911*t5906*t5914;
  t6021 = t6019 + t6020;
  t5964 = t5922*t5953;
  t6032 = t5898*t5869*t5906;
  t6033 = -1.*t5911*t5914;
  t6034 = t6032 + t6033;
  t5939 = t5922*t5930;
  t6023 = -1.*t5882*t5953;
  t5965 = -1.*t5882*t5957;
  t5966 = t5964 + t5965;
  t6037 = -1.*t5882*t6034;
  t6065 = t5911*t5898;
  t6066 = t5869*t5906*t5914;
  t6067 = t6065 + t6066;
  t6041 = t5922*t6034;
  t6048 = -1.*t5863*t5898*t5882;
  t6049 = -1.*t5922*t5863*t5914;
  t6050 = t6048 + t6049;
  t6051 = -0.09*t6050;
  t6052 = t5922*t5863*t5898;
  t6053 = -1.*t5863*t5882*t5914;
  t6054 = t6052 + t6053;
  t6055 = -0.135*t6054;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t5863*t5869 + t5894*t5919 + t5926*t5930 - 0.09*(t5919*t5922 - 1.*t5882*t5930) - 0.135*(t5882*t5919 + t5939);
  p_output1[10]=-0.049*t5863*t5911 + t5894*t5953 + t5926*t5957 - 0.135*(t5882*t5953 + t5922*t5957) - 0.09*t5966;
  p_output1[11]=0;
  p_output1[12]=t5863*t5894*t5898*t5911 + 0.049*t5906*t5911 - 0.09*(-1.*t5863*t5882*t5911*t5914 + t5863*t5898*t5911*t5922) - 0.135*(t5863*t5882*t5898*t5911 + t5863*t5911*t5914*t5922) + t5863*t5911*t5914*t5926;
  p_output1[13]=t5863*t5869*t5894*t5898 + 0.049*t5869*t5906 - 0.09*(-1.*t5863*t5869*t5882*t5914 + t5863*t5869*t5898*t5922) - 0.135*(t5863*t5869*t5882*t5898 + t5863*t5869*t5914*t5922) + t5863*t5869*t5914*t5926;
  p_output1[14]=0.049*t5863 - 1.*t5894*t5898*t5906 - 0.09*(t5882*t5906*t5914 - 1.*t5898*t5906*t5922) - 0.135*(-1.*t5882*t5898*t5906 - 1.*t5906*t5914*t5922) - 1.*t5906*t5914*t5926;
  p_output1[15]=t5926*t5953 + t5894*t6021 - 0.135*(t5964 + t5882*t6021) - 0.09*(t5922*t6021 + t6023);
  p_output1[16]=t5894*t5930 + t5926*t6034 - 0.09*(t5939 + t6037) - 0.135*(t5882*t5930 + t6041);
  p_output1[17]=-1.*t5863*t5894*t5914 + t5863*t5898*t5926 + t6051 + t6055;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=0.135*t5922*t5953 - 0.135*t5882*t5957 - 0.135*t5966 - 0.09*(-1.*t5922*t5957 + t6023);
  p_output1[40]=0.135*t5922*t6034 - 0.135*t5882*t6067 - 0.135*(t6041 - 1.*t5882*t6067) - 0.09*(t6037 - 1.*t5922*t6067);
  p_output1[41]=-0.135*t5863*t5882*t5914 + 0.135*t5863*t5898*t5922 + t6051 + t6055;
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

#include "J_hip_rotation_right_mex.hh"

namespace SymExpression
{

void J_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
