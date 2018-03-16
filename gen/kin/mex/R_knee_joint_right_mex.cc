/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:24 GMT-04:00
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
  double t838;
  double t1466;
  double t695;
  double t946;
  double t1752;
  double t1889;
  double t1164;
  double t1796;
  double t1856;
  double t623;
  double t1929;
  double t1933;
  double t1971;
  double t2304;
  double t1878;
  double t2032;
  double t2181;
  double t365;
  double t2411;
  double t2468;
  double t2518;
  double t2960;
  double t3245;
  double t3248;
  double t3400;
  double t3471;
  double t3483;
  double t219;
  double t4099;
  double t4180;
  double t4310;
  double t5137;
  double t5233;
  double t7583;
  double t3761;
  double t4928;
  double t7609;
  double t7678;
  double t7708;
  double t7716;
  double t7719;
  double t7736;
  double t7751;
  double t7756;
  double t7822;
  double t7823;
  double t7825;
  double t7831;
  double t7840;
  double t7841;
  double t7843;
  double t7847;
  double t7850;
  double t2214;
  double t3544;
  double t3579;
  double t3858;
  double t3950;
  double t3982;
  double t7685;
  double t7788;
  double t7795;
  double t7805;
  double t7814;
  double t7818;
  double t7830;
  double t7851;
  double t7852;
  double t7857;
  double t7858;
  double t7870;
  t838 = Cos(var1[5]);
  t1466 = Sin(var1[3]);
  t695 = Cos(var1[3]);
  t946 = Sin(var1[4]);
  t1752 = Sin(var1[5]);
  t1889 = Sin(var1[13]);
  t1164 = t695*t838*t946;
  t1796 = t1466*t1752;
  t1856 = t1164 + t1796;
  t623 = Cos(var1[13]);
  t1929 = -1.*t838*t1466;
  t1933 = t695*t946*t1752;
  t1971 = t1929 + t1933;
  t2304 = Cos(var1[15]);
  t1878 = t623*t1856;
  t2032 = -1.*t1889*t1971;
  t2181 = t1878 + t2032;
  t365 = Sin(var1[15]);
  t2411 = Cos(var1[14]);
  t2468 = Cos(var1[4]);
  t2518 = t2411*t695*t2468;
  t2960 = Sin(var1[14]);
  t3245 = t1889*t1856;
  t3248 = t623*t1971;
  t3400 = t3245 + t3248;
  t3471 = t2960*t3400;
  t3483 = t2518 + t3471;
  t219 = Sin(var1[16]);
  t4099 = t838*t1466*t946;
  t4180 = -1.*t695*t1752;
  t4310 = t4099 + t4180;
  t5137 = t695*t838;
  t5233 = t1466*t946*t1752;
  t7583 = t5137 + t5233;
  t3761 = Cos(var1[16]);
  t4928 = t623*t4310;
  t7609 = -1.*t1889*t7583;
  t7678 = t4928 + t7609;
  t7708 = t2411*t2468*t1466;
  t7716 = t1889*t4310;
  t7719 = t623*t7583;
  t7736 = t7716 + t7719;
  t7751 = t2960*t7736;
  t7756 = t7708 + t7751;
  t7822 = t623*t2468*t838;
  t7823 = -1.*t2468*t1889*t1752;
  t7825 = t7822 + t7823;
  t7831 = -1.*t2411*t946;
  t7840 = t2468*t838*t1889;
  t7841 = t623*t2468*t1752;
  t7843 = t7840 + t7841;
  t7847 = t2960*t7843;
  t7850 = t7831 + t7847;
  t2214 = t365*t2181;
  t3544 = t2304*t3483;
  t3579 = t2214 + t3544;
  t3858 = t2304*t2181;
  t3950 = -1.*t365*t3483;
  t3982 = t3858 + t3950;
  t7685 = t365*t7678;
  t7788 = t2304*t7756;
  t7795 = t7685 + t7788;
  t7805 = t2304*t7678;
  t7814 = -1.*t365*t7756;
  t7818 = t7805 + t7814;
  t7830 = t365*t7825;
  t7851 = t2304*t7850;
  t7852 = t7830 + t7851;
  t7857 = t2304*t7825;
  t7858 = -1.*t365*t7850;
  t7870 = t7857 + t7858;
  p_output1[0]=t219*t3579 - 1.*t3761*t3982;
  p_output1[1]=t219*t7795 - 1.*t3761*t7818;
  p_output1[2]=t219*t7852 - 1.*t3761*t7870;
  p_output1[3]=t3579*t3761 + t219*t3982;
  p_output1[4]=t3761*t7795 + t219*t7818;
  p_output1[5]=t3761*t7852 + t219*t7870;
  p_output1[6]=-1.*t2411*t3400 + t2468*t2960*t695;
  p_output1[7]=t1466*t2468*t2960 - 1.*t2411*t7736;
  p_output1[8]=-1.*t2411*t7843 - 1.*t2960*t946;
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

#include "R_knee_joint_right_mex.hh"

namespace SymExpression
{

void R_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
