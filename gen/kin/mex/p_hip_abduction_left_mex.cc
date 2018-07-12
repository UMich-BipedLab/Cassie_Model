/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:51 GMT-04:00
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
  double t775;
  double t1142;
  double t1152;
  double t1148;
  double t1162;
  double t1014;
  double t1151;
  double t1201;
  double t1209;
  double t1219;
  double t1233;
  double t1241;
  double t1244;
  double t959;
  double t1034;
  double t1076;
  double t1106;
  double t1119;
  double t1250;
  double t1275;
  double t1354;
  double t1360;
  double t1364;
  double t1392;
  double t1400;
  double t1409;
  t775 = Cos(var1[3]);
  t1142 = Cos(var1[5]);
  t1152 = Sin(var1[4]);
  t1148 = Sin(var1[3]);
  t1162 = Sin(var1[5]);
  t1014 = Cos(var1[6]);
  t1151 = -1.*t1142*t1148;
  t1201 = t775*t1152*t1162;
  t1209 = t1151 + t1201;
  t1219 = t775*t1142*t1152;
  t1233 = t1148*t1162;
  t1241 = t1219 + t1233;
  t1244 = Sin(var1[6]);
  t959 = Cos(var1[4]);
  t1034 = -1.*t1014;
  t1076 = 1. + t1034;
  t1106 = 0.135*t1076;
  t1119 = 0. + t1106;
  t1250 = -0.135*t1244;
  t1275 = 0. + t1250;
  t1354 = t775*t1142;
  t1360 = t1148*t1152*t1162;
  t1364 = t1354 + t1360;
  t1392 = t1142*t1148*t1152;
  t1400 = -1.*t775*t1162;
  t1409 = t1392 + t1400;
  p_output1[0]=0. + t1119*t1209 + 0.135*(t1014*t1209 + t1241*t1244) + t1241*t1275 - 0.049*t775*t959 + var1[0];
  p_output1[1]=0. + t1119*t1364 + t1275*t1409 + 0.135*(t1014*t1364 + t1244*t1409) - 0.049*t1148*t959 + var1[1];
  p_output1[2]=0. + 0.049*t1152 + t1119*t1162*t959 + t1142*t1275*t959 + 0.135*(t1014*t1162*t959 + t1142*t1244*t959) + var1[2];
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

#include "p_hip_abduction_left_mex.hh"

namespace SymExpression
{

void p_hip_abduction_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
