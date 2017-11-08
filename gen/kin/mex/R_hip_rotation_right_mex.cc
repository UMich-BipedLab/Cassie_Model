/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:34 GMT-05:00
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
  double t1726;
  double t6015;
  double t1210;
  double t1730;
  double t6021;
  double t368;
  double t6032;
  double t6070;
  double t6009;
  double t6026;
  double t6030;
  double t6042;
  double t6043;
  double t6044;
  double t6054;
  double t6056;
  double t6058;
  double t6060;
  double t6061;
  double t6064;
  t1726 = Cos(var1[5]);
  t6015 = Sin(var1[3]);
  t1210 = Cos(var1[3]);
  t1730 = Sin(var1[4]);
  t6021 = Sin(var1[5]);
  t368 = Cos(var1[13]);
  t6032 = Sin(var1[13]);
  t6070 = Cos(var1[4]);
  t6009 = t1210*t1726*t1730;
  t6026 = t6015*t6021;
  t6030 = t6009 + t6026;
  t6042 = -1.*t1726*t6015;
  t6043 = t1210*t1730*t6021;
  t6044 = t6042 + t6043;
  t6054 = t1726*t6015*t1730;
  t6056 = -1.*t1210*t6021;
  t6058 = t6054 + t6056;
  t6060 = t1210*t1726;
  t6061 = t6015*t1730*t6021;
  t6064 = t6060 + t6061;
  p_output1[0]=-1.*t368*t6030 + t6032*t6044;
  p_output1[1]=-1.*t368*t6058 + t6032*t6064;
  p_output1[2]=-1.*t1726*t368*t6070 + t6021*t6032*t6070;
  p_output1[3]=t1210*t6070;
  p_output1[4]=t6015*t6070;
  p_output1[5]=-1.*t1730;
  p_output1[6]=-1.*t6030*t6032 - 1.*t368*t6044;
  p_output1[7]=-1.*t6032*t6058 - 1.*t368*t6064;
  p_output1[8]=-1.*t368*t6021*t6070 - 1.*t1726*t6032*t6070;
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

#include "R_hip_rotation_right_mex.hh"

namespace SymExpression
{

void R_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
