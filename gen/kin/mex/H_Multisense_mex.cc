/*
 * Automatically Generated from Mathematica.
 * Thu 9 Nov 2017 12:21:16 GMT-05:00
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
  double t1752;
  double t2311;
  double t440;
  double t2434;
  double t2461;
  double t2598;
  double t2917;
  double t2993;
  double t3018;
  double t3070;
  double t3115;
  double t3125;
  t1752 = Cos(var1[4]);
  t2311 = Sin(var1[3]);
  t440 = Cos(var1[3]);
  t2434 = Sin(var1[4]);
  t2461 = Cos(var1[5]);
  t2598 = Sin(var1[5]);
  t2917 = t440*t2461*t2434;
  t2993 = t2311*t2598;
  t3018 = t2917 + t2993;
  t3070 = t2461*t2311*t2434;
  t3115 = -1.*t440*t2598;
  t3125 = t3070 + t3115;
  p_output1[0]=t1752*t440;
  p_output1[1]=t1752*t2311;
  p_output1[2]=-1.*t2434;
  p_output1[3]=0;
  p_output1[4]=-1.*t2311*t2461 + t2434*t2598*t440;
  p_output1[5]=t2311*t2434*t2598 + t2461*t440;
  p_output1[6]=t1752*t2598;
  p_output1[7]=0;
  p_output1[8]=t3018;
  p_output1[9]=t3125;
  p_output1[10]=t1752*t2461;
  p_output1[11]=0;
  p_output1[12]=0.2784*t3018 + 0.0507*t1752*t440 + var1[0];
  p_output1[13]=0.0507*t1752*t2311 + 0.2784*t3125 + var1[1];
  p_output1[14]=-0.0507*t2434 + 0.2784*t1752*t2461 + var1[2];
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

#include "H_Multisense_mex.hh"

namespace SymExpression
{

void H_Multisense_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
