/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:35 GMT-05:00
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
  double t1669;
  double t6915;
  double t612;
  double t1766;
  double t6922;
  double t315;
  double t6941;
  double t6996;
  double t4418;
  double t6924;
  double t6930;
  double t6946;
  double t6950;
  double t6954;
  double t7007;
  double t7015;
  double t6965;
  double t6968;
  double t6971;
  double t6981;
  double t6983;
  double t6984;
  double t7017;
  double t7018;
  double t7020;
  double t7026;
  double t7027;
  double t7038;
  double t7043;
  double t7045;
  double t7048;
  t1669 = Cos(var1[5]);
  t6915 = Sin(var1[3]);
  t612 = Cos(var1[3]);
  t1766 = Sin(var1[4]);
  t6922 = Sin(var1[5]);
  t315 = Cos(var1[13]);
  t6941 = Sin(var1[13]);
  t6996 = Cos(var1[4]);
  t4418 = t612*t1669*t1766;
  t6924 = t6915*t6922;
  t6930 = t4418 + t6924;
  t6946 = -1.*t1669*t6915;
  t6950 = t612*t1766*t6922;
  t6954 = t6946 + t6950;
  t7007 = Cos(var1[14]);
  t7015 = Sin(var1[14]);
  t6965 = t1669*t6915*t1766;
  t6968 = -1.*t612*t6922;
  t6971 = t6965 + t6968;
  t6981 = t612*t1669;
  t6983 = t6915*t1766*t6922;
  t6984 = t6981 + t6983;
  t7017 = t6941*t6930;
  t7018 = t315*t6954;
  t7020 = t7017 + t7018;
  t7026 = t6941*t6971;
  t7027 = t315*t6984;
  t7038 = t7026 + t7027;
  t7043 = t6996*t1669*t6941;
  t7045 = t315*t6996*t6922;
  t7048 = t7043 + t7045;
  p_output1[0]=-1.*t315*t6930 + t6941*t6954;
  p_output1[1]=-1.*t315*t6971 + t6941*t6984;
  p_output1[2]=-1.*t1669*t315*t6996 + t6922*t6941*t6996;
  p_output1[3]=t612*t6996*t7007 + t7015*t7020;
  p_output1[4]=t6915*t6996*t7007 + t7015*t7038;
  p_output1[5]=-1.*t1766*t7007 + t7015*t7048;
  p_output1[6]=t612*t6996*t7015 - 1.*t7007*t7020;
  p_output1[7]=t6915*t6996*t7015 - 1.*t7007*t7038;
  p_output1[8]=-1.*t1766*t7015 - 1.*t7007*t7048;
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
