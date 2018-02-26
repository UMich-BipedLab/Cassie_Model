/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:11 GMT-05:00
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
  double t501;
  double t532;
  double t679;
  double t518;
  double t541;
  double t642;
  double t493;
  double t686;
  double t755;
  double t801;
  double t966;
  double t645;
  double t810;
  double t893;
  double t488;
  double t971;
  double t975;
  double t988;
  double t1095;
  double t935;
  double t998;
  double t1012;
  double t348;
  double t1188;
  double t1238;
  double t1241;
  double t103;
  double t234;
  double t1671;
  double t1676;
  double t1769;
  double t1649;
  double t1803;
  double t1856;
  double t1914;
  double t1919;
  double t1891;
  double t1935;
  double t1936;
  double t2134;
  double t2171;
  double t2193;
  double t1551;
  double t1369;
  double t1468;
  double t1509;
  double t1037;
  double t1269;
  double t1323;
  double t2292;
  double t2293;
  double t2319;
  double t1948;
  double t2255;
  double t2270;
  t501 = Cos(var1[6]);
  t532 = Sin(var1[6]);
  t679 = Cos(var1[5]);
  t518 = 0.642788*t501;
  t541 = -0.766044*t532;
  t642 = t518 + t541;
  t493 = Sin(var1[5]);
  t686 = -0.766044*t501;
  t755 = -0.642788*t532;
  t801 = t686 + t755;
  t966 = Cos(var1[4]);
  t645 = -1.*t493*t642;
  t810 = t679*t801;
  t893 = 0. + t645 + t810;
  t488 = Sin(var1[4]);
  t971 = t679*t642;
  t975 = t493*t801;
  t988 = 0. + t971 + t975;
  t1095 = Sin(var1[3]);
  t935 = t488*t893;
  t998 = t966*t988;
  t1012 = 0. + t935 + t998;
  t348 = Cos(var1[3]);
  t1188 = t966*t893;
  t1238 = -1.*t488*t988;
  t1241 = 0. + t1188 + t1238;
  t103 = Cos(var1[1]);
  t234 = Cos(var1[2]);
  t1671 = -0.642788*t501;
  t1676 = 0.766044*t532;
  t1769 = t1671 + t1676;
  t1649 = -1.*t493*t801;
  t1803 = t679*t1769;
  t1856 = 0. + t1649 + t1803;
  t1914 = t493*t1769;
  t1919 = 0. + t810 + t1914;
  t1891 = t488*t1856;
  t1935 = t966*t1919;
  t1936 = 0. + t1891 + t1935;
  t2134 = t966*t1856;
  t2171 = -1.*t488*t1919;
  t2193 = 0. + t2134 + t2171;
  t1551 = Sin(var1[2]);
  t1369 = -1.*t1095*t1012;
  t1468 = t348*t1241;
  t1509 = 0. + t1369 + t1468;
  t1037 = t348*t1012;
  t1269 = t1095*t1241;
  t1323 = 0. + t1037 + t1269;
  t2292 = -1.*t1095*t1936;
  t2293 = t348*t2193;
  t2319 = 0. + t2292 + t2293;
  t1948 = t348*t1936;
  t2255 = t1095*t2193;
  t2270 = 0. + t1948 + t2255;
  p_output1[0]=0. + Sin(var1[1]);
  p_output1[1]=0. + t103*(0. + t1509*t1551 + t1323*t234);
  p_output1[2]=0. + t103*(0. + t1551*t2319 + t2270*t234);
  p_output1[3]=0.;
  p_output1[4]=0. + t1323*t1551 - 1.*t1509*t234;
  p_output1[5]=0. + t1551*t2270 - 1.*t2319*t234;
  p_output1[6]=1.;
  p_output1[7]=0.;
  p_output1[8]=0.;
  p_output1[9]=1.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=1.;
  p_output1[16]=0.;
  p_output1[17]=0.;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jw_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Jw_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
