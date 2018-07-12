/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:53 GMT-04:00
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
  double t294;
  double t402;
  double t282;
  double t649;
  double t1457;
  double t1763;
  double t987;
  double t1855;
  double t1836;
  double t1843;
  double t1848;
  double t1663;
  double t1791;
  double t1807;
  double t1951;
  double t1953;
  double t1976;
  double t1903;
  double t1916;
  double t1924;
  double t1830;
  double t1885;
  double t1887;
  double t2172;
  double t2174;
  double t2186;
  double t2193;
  double t2201;
  double t2228;
  double t1950;
  double t1992;
  double t2007;
  double t2013;
  double t2028;
  double t2039;
  t294 = Cos(var1[4]);
  t402 = Sin(var1[3]);
  t282 = Cos(var1[3]);
  t649 = Sin(var1[4]);
  t1457 = Cos(var1[5]);
  t1763 = Sin(var1[5]);
  t987 = Cos(var1[6]);
  t1855 = Sin(var1[6]);
  t1836 = t282*t1457*t649;
  t1843 = t402*t1763;
  t1848 = t1836 + t1843;
  t1663 = -1.*t1457*t402;
  t1791 = t282*t649*t1763;
  t1807 = t1663 + t1791;
  t1951 = t1457*t402*t649;
  t1953 = -1.*t282*t1763;
  t1976 = t1951 + t1953;
  t1903 = t282*t1457;
  t1916 = t402*t649*t1763;
  t1924 = t1903 + t1916;
  t1830 = t987*t1807;
  t1885 = t1848*t1855;
  t1887 = t1830 + t1885;
  t2172 = -1.*t987;
  t2174 = 1. + t2172;
  t2186 = 0.135*t2174;
  t2193 = 0. + t2186;
  t2201 = -0.135*t1855;
  t2228 = 0. + t2201;
  t1950 = t987*t1924;
  t1992 = t1976*t1855;
  t2007 = t1950 + t1992;
  t2013 = t294*t987*t1763;
  t2028 = t294*t1457*t1855;
  t2039 = t2013 + t2028;
  p_output1[0]=t282*t294;
  p_output1[1]=t294*t402;
  p_output1[2]=-1.*t649;
  p_output1[3]=0.;
  p_output1[4]=t1887;
  p_output1[5]=t2007;
  p_output1[6]=t2039;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1807*t1855 + t1848*t987;
  p_output1[9]=-1.*t1855*t1924 + t1976*t987;
  p_output1[10]=-1.*t1763*t1855*t294 + t1457*t294*t987;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*t1887 + t1807*t2193 + t1848*t2228 - 0.049*t282*t294 + var1[0];
  p_output1[13]=0. + 0.135*t2007 + t1924*t2193 + t1976*t2228 - 0.049*t294*t402 + var1[1];
  p_output1[14]=0. + 0.135*t2039 + t1763*t2193*t294 + t1457*t2228*t294 + 0.049*t649 + var1[2];
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

#include "H_hip_abduction_left_mex.hh"

namespace SymExpression
{

void H_hip_abduction_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
