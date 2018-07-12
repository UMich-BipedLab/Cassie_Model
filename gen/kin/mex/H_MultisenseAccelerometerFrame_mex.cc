/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:51 GMT-04:00
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
  double t1365;
  double t3490;
  double t1810;
  double t31;
  double t4412;
  double t5142;
  double t5146;
  double t5148;
  double t5160;
  double t5167;
  double t5172;
  double t5173;
  t1365 = Cos(var1[5]);
  t3490 = Sin(var1[3]);
  t1810 = Sin(var1[4]);
  t31 = Cos(var1[3]);
  t4412 = Sin(var1[5]);
  t5142 = Cos(var1[4]);
  t5146 = -1.*t1365*t3490;
  t5148 = t31*t1810*t4412;
  t5160 = t5146 + t5148;
  t5167 = t31*t1365;
  t5172 = t3490*t1810*t4412;
  t5173 = t5167 + t5172;
  p_output1[0]=-1.*t1365*t1810*t31 - 1.*t3490*t4412;
  p_output1[1]=-1.*t1365*t1810*t3490 + t31*t4412;
  p_output1[2]=-1.*t1365*t5142;
  p_output1[3]=0;
  p_output1[4]=t5160;
  p_output1[5]=t5173;
  p_output1[6]=t4412*t5142;
  p_output1[7]=0;
  p_output1[8]=t31*t5142;
  p_output1[9]=t3490*t5142;
  p_output1[10]=-1.*t1810;
  p_output1[11]=0;
  p_output1[12]=0.24925*(t1365*t1810*t31 + t3490*t4412) + 0.047*t31*t5142 + 0.0302*t5160 + var1[0];
  p_output1[13]=0.24925*(t1365*t1810*t3490 - 1.*t31*t4412) + 0.047*t3490*t5142 + 0.0302*t5173 + var1[1];
  p_output1[14]=-0.047*t1810 + 0.24925*t1365*t5142 + 0.0302*t4412*t5142 + var1[2];
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

#include "H_MultisenseAccelerometerFrame_mex.hh"

namespace SymExpression
{

void H_MultisenseAccelerometerFrame_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
