/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:34 GMT-04:00
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
  double t735;
  double t3763;
  double t169;
  double t3796;
  double t3889;
  double t3913;
  double t4033;
  double t4052;
  double t4065;
  double t3899;
  double t3933;
  double t3953;
  double t4072;
  double t4094;
  double t4108;
  double t3980;
  double t3983;
  double t3986;
  t735 = Cos(var1[4]);
  t3763 = Sin(var1[3]);
  t169 = Cos(var1[3]);
  t3796 = Sin(var1[4]);
  t3889 = Cos(var1[5]);
  t3913 = Sin(var1[5]);
  t4033 = t169*t3889*t3796;
  t4052 = t3763*t3913;
  t4065 = t4033 + t4052;
  t3899 = -1.*t3889*t3763;
  t3933 = t169*t3796*t3913;
  t3953 = t3899 + t3933;
  t4072 = t3889*t3763*t3796;
  t4094 = -1.*t169*t3913;
  t4108 = t4072 + t4094;
  t3980 = t169*t3889;
  t3983 = t3763*t3796*t3913;
  t3986 = t3980 + t3983;
  p_output1[0]=t169*t735;
  p_output1[1]=t3763*t735;
  p_output1[2]=-1.*t3796;
  p_output1[3]=0;
  p_output1[4]=t3953;
  p_output1[5]=t3986;
  p_output1[6]=t3913*t735;
  p_output1[7]=0;
  p_output1[8]=t4065;
  p_output1[9]=t4108;
  p_output1[10]=t3889*t735;
  p_output1[11]=0;
  p_output1[12]=0.035*t3953 + 0.25*t4065 + 0.052*t169*t735 + var1[0];
  p_output1[13]=0.035*t3986 + 0.25*t4108 + 0.052*t3763*t735 + var1[1];
  p_output1[14]=-0.052*t3796 + 0.25*t3889*t735 + 0.035*t3913*t735 + var1[2];
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

#include "H_MultisenseLeftCameraFrame_mex.hh"

namespace SymExpression
{

void H_MultisenseLeftCameraFrame_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
