/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:06 GMT-05:00
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
  double t1999;
  double t2026;
  double t1991;
  double t2004;
  double t2028;
  double t1982;
  double t2070;
  double t2073;
  double t2077;
  double t2021;
  double t2036;
  double t2058;
  double t2078;
  double t1965;
  double t2099;
  double t2100;
  double t2153;
  double t2156;
  double t2157;
  double t2148;
  double t2149;
  double t2151;
  double t2111;
  double t2124;
  double t2101;
  double t2105;
  double t2107;
  double t2109;
  double t2120;
  double t2122;
  double t2068;
  double t2080;
  double t2081;
  double t2165;
  double t2166;
  double t2171;
  double t2174;
  double t2175;
  double t2176;
  double t2152;
  double t2161;
  double t2163;
  double t2191;
  double t2192;
  double t2193;
  double t2198;
  double t2201;
  double t2202;
  double t2181;
  double t2186;
  double t2187;
  t1999 = Cos(var1[5]);
  t2026 = Sin(var1[3]);
  t1991 = Cos(var1[3]);
  t2004 = Sin(var1[4]);
  t2028 = Sin(var1[5]);
  t1982 = Cos(var1[6]);
  t2070 = -1.*t1999*t2026;
  t2073 = t1991*t2004*t2028;
  t2077 = t2070 + t2073;
  t2021 = t1991*t1999*t2004;
  t2036 = t2026*t2028;
  t2058 = t2021 + t2036;
  t2078 = Sin(var1[6]);
  t1965 = Cos(var1[8]);
  t2099 = Cos(var1[4]);
  t2100 = Cos(var1[7]);
  t2153 = t1991*t1999;
  t2156 = t2026*t2004*t2028;
  t2157 = t2153 + t2156;
  t2148 = t1999*t2026*t2004;
  t2149 = -1.*t1991*t2028;
  t2151 = t2148 + t2149;
  t2111 = Sin(var1[7]);
  t2124 = Sin(var1[8]);
  t2101 = t1991*t2099*t2100;
  t2105 = t1982*t2077;
  t2107 = t2058*t2078;
  t2109 = t2105 + t2107;
  t2120 = t2109*t2111;
  t2122 = t2101 + t2120;
  t2068 = t1982*t2058;
  t2080 = -1.*t2077*t2078;
  t2081 = t2068 + t2080;
  t2165 = t2099*t2100*t2026;
  t2166 = t1982*t2157;
  t2171 = t2151*t2078;
  t2174 = t2166 + t2171;
  t2175 = t2174*t2111;
  t2176 = t2165 + t2175;
  t2152 = t1982*t2151;
  t2161 = -1.*t2157*t2078;
  t2163 = t2152 + t2161;
  t2191 = -1.*t2100*t2004;
  t2192 = t2099*t1982*t2028;
  t2193 = t2099*t1999*t2078;
  t2198 = t2192 + t2193;
  t2201 = t2198*t2111;
  t2202 = t2191 + t2201;
  t2181 = t2099*t1999*t1982;
  t2186 = -1.*t2099*t2028*t2078;
  t2187 = t2181 + t2186;
  p_output1[0]=-1.*t1965*t2081 + t2122*t2124;
  p_output1[1]=-1.*t1965*t2163 + t2124*t2176;
  p_output1[2]=-1.*t1965*t2187 + t2124*t2202;
  p_output1[3]=t1965*t2122 + t2081*t2124;
  p_output1[4]=t2124*t2163 + t1965*t2176;
  p_output1[5]=t2124*t2187 + t1965*t2202;
  p_output1[6]=-1.*t2100*t2109 + t1991*t2099*t2111;
  p_output1[7]=t2026*t2099*t2111 - 1.*t2100*t2174;
  p_output1[8]=-1.*t2004*t2111 - 1.*t2100*t2198;
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

#include "R_knee_joint_left_mex.hh"

namespace SymExpression
{

void R_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
