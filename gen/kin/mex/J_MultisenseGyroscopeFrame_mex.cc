/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:59 GMT-04:00
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
  double t2881;
  double t5359;
  double t5338;
  double t5347;
  double t5360;
  double t1192;
  double t5435;
  double t5446;
  double t5447;
  double t5393;
  double t5394;
  double t5395;
  t2881 = Sin(var1[3]);
  t5359 = Cos(var1[3]);
  t5338 = Cos(var1[5]);
  t5347 = Sin(var1[4]);
  t5360 = Sin(var1[5]);
  t1192 = Cos(var1[4]);
  t5435 = t5359*t5338*t5347;
  t5446 = t2881*t5360;
  t5447 = t5435 + t5446;
  t5393 = -1.*t5359*t5338;
  t5394 = -1.*t2881*t5347*t5360;
  t5395 = t5393 + t5394;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.047*t1192*t2881 + 0.25125*(-1.*t2881*t5338*t5347 + t5359*t5360) + 0.0388*t5395;
  p_output1[10]=0.047*t1192*t5359 + 0.0388*(-1.*t2881*t5338 + t5347*t5359*t5360) + 0.25125*t5447;
  p_output1[11]=0;
  p_output1[12]=0.25125*t1192*t5338*t5359 - 0.047*t5347*t5359 + 0.0388*t1192*t5359*t5360;
  p_output1[13]=0.25125*t1192*t2881*t5338 - 0.047*t2881*t5347 + 0.0388*t1192*t2881*t5360;
  p_output1[14]=-0.047*t1192 - 0.25125*t5338*t5347 - 0.0388*t5347*t5360;
  p_output1[15]=0.25125*(t2881*t5338 - 1.*t5347*t5359*t5360) + 0.0388*t5447;
  p_output1[16]=0.0388*(t2881*t5338*t5347 - 1.*t5359*t5360) + 0.25125*t5395;
  p_output1[17]=0.0388*t1192*t5338 - 0.25125*t1192*t5360;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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

#include "J_MultisenseGyroscopeFrame_mex.hh"

namespace SymExpression
{

void J_MultisenseGyroscopeFrame_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
