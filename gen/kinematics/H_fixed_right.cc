/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:23 GMT-04:00
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
  double t722;
  double t10495;
  double t1104;
  double t592;
  double t10537;
  double t10655;
  double t10695;
  double t10698;
  double t10707;
  double t10711;
  double t10727;
  double t10753;
  t722 = Cos(var1[5]);
  t10495 = Sin(var1[3]);
  t1104 = Sin(var1[4]);
  t592 = Cos(var1[3]);
  t10537 = Sin(var1[5]);
  t10655 = Cos(var1[4]);
  t10695 = -1.*t722*t10495;
  t10698 = t592*t1104*t10537;
  t10707 = t10695 + t10698;
  t10711 = t592*t722;
  t10727 = t10495*t1104*t10537;
  t10753 = t10711 + t10727;
  p_output1[0]=-1.*t10495*t10537 - 1.*t1104*t592*t722;
  p_output1[1]=t10537*t592 - 1.*t10495*t1104*t722;
  p_output1[2]=-1.*t10655*t722;
  p_output1[3]=0;
  p_output1[4]=t10707;
  p_output1[5]=t10753;
  p_output1[6]=t10537*t10655;
  p_output1[7]=0;
  p_output1[8]=t10655*t592;
  p_output1[9]=t10495*t10655;
  p_output1[10]=-1.*t1104;
  p_output1[11]=0;
  p_output1[12]=-0.135*t10707 + 0.021*t10655*t592 + var1[0];
  p_output1[13]=0.021*t10495*t10655 - 0.135*t10753 + var1[1];
  p_output1[14]=-0.135*t10537*t10655 - 0.021*t1104 + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "H_fixed_right.hh"

namespace SymExpression
{

void H_fixed_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
