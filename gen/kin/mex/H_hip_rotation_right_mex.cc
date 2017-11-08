/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:33 GMT-05:00
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
  double t2352;
  double t5918;
  double t1483;
  double t2657;
  double t5963;
  double t335;
  double t5981;
  double t6011;
  double t3653;
  double t5966;
  double t5971;
  double t5985;
  double t5987;
  double t5988;
  double t5992;
  double t5994;
  double t5995;
  double t5998;
  double t6000;
  double t6004;
  double t6032;
  double t6035;
  double t6038;
  double t6039;
  double t6042;
  double t6043;
  t2352 = Cos(var1[5]);
  t5918 = Sin(var1[3]);
  t1483 = Cos(var1[3]);
  t2657 = Sin(var1[4]);
  t5963 = Sin(var1[5]);
  t335 = Cos(var1[13]);
  t5981 = Sin(var1[13]);
  t6011 = Cos(var1[4]);
  t3653 = t1483*t2352*t2657;
  t5966 = t5918*t5963;
  t5971 = t3653 + t5966;
  t5985 = -1.*t2352*t5918;
  t5987 = t1483*t2657*t5963;
  t5988 = t5985 + t5987;
  t5992 = t2352*t5918*t2657;
  t5994 = -1.*t1483*t5963;
  t5995 = t5992 + t5994;
  t5998 = t1483*t2352;
  t6000 = t5918*t2657*t5963;
  t6004 = t5998 + t6000;
  t6032 = 0.135*t5981;
  t6035 = 0. + t6032;
  t6038 = -1.*t335;
  t6039 = 1. + t6038;
  t6042 = -0.135*t6039;
  t6043 = 0. + t6042;
  p_output1[0]=-1.*t335*t5971 + t5981*t5988;
  p_output1[1]=-1.*t335*t5995 + t5981*t6004;
  p_output1[2]=-1.*t2352*t335*t6011 + t5963*t5981*t6011;
  p_output1[3]=0.;
  p_output1[4]=t1483*t6011;
  p_output1[5]=t5918*t6011;
  p_output1[6]=-1.*t2657;
  p_output1[7]=0.;
  p_output1[8]=-1.*t5971*t5981 - 1.*t335*t5988;
  p_output1[9]=-1.*t5981*t5995 - 1.*t335*t6004;
  p_output1[10]=-1.*t335*t5963*t6011 - 1.*t2352*t5981*t6011;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(t5971*t5981 + t335*t5988) - 0.09*(t335*t5971 - 1.*t5981*t5988) - 0.049*t1483*t6011 + t5971*t6035 + t5988*t6043 + var1[0];
  p_output1[13]=0. - 0.135*(t5981*t5995 + t335*t6004) - 0.09*(t335*t5995 - 1.*t5981*t6004) - 0.049*t5918*t6011 + t5995*t6035 + t6004*t6043 + var1[1];
  p_output1[14]=0. + 0.049*t2657 - 0.135*(t335*t5963*t6011 + t2352*t5981*t6011) - 0.09*(t2352*t335*t6011 - 1.*t5963*t5981*t6011) + t2352*t6011*t6035 + t5963*t6011*t6043 + var1[2];
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
