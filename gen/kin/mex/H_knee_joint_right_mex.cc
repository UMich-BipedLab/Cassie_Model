/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:43 GMT-05:00
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
  double t544;
  double t747;
  double t421;
  double t554;
  double t868;
  double t963;
  double t742;
  double t872;
  double t882;
  double t377;
  double t980;
  double t1138;
  double t1341;
  double t1808;
  double t949;
  double t1370;
  double t1569;
  double t264;
  double t1813;
  double t1820;
  double t1822;
  double t1829;
  double t1851;
  double t1941;
  double t1964;
  double t2002;
  double t2008;
  double t243;
  double t2089;
  double t2090;
  double t2092;
  double t2117;
  double t2119;
  double t2122;
  double t2069;
  double t2114;
  double t2127;
  double t2131;
  double t2277;
  double t2425;
  double t2447;
  double t2462;
  double t2466;
  double t2467;
  double t2795;
  double t2990;
  double t3031;
  double t3301;
  double t3413;
  double t3442;
  double t3572;
  double t3633;
  double t3755;
  double t1794;
  double t2009;
  double t2040;
  double t2070;
  double t2071;
  double t2078;
  double t2244;
  double t2542;
  double t2567;
  double t2658;
  double t2725;
  double t2730;
  double t3035;
  double t3762;
  double t3968;
  double t4179;
  double t4192;
  double t4216;
  double t7754;
  double t7769;
  double t7852;
  double t7856;
  double t7889;
  double t7890;
  double t4458;
  double t4867;
  double t4976;
  double t7776;
  double t7784;
  double t7790;
  double t7806;
  double t7809;
  double t7826;
  double t7830;
  double t7831;
  double t7834;
  double t7840;
  double t7841;
  double t7845;
  double t7857;
  double t7860;
  double t7863;
  double t7877;
  double t7884;
  double t7885;
  double t7891;
  double t7893;
  double t7894;
  double t7896;
  double t7897;
  double t7898;
  double t5128;
  double t5134;
  double t5251;
  double t5728;
  double t6212;
  double t7667;
  t544 = Cos(var1[5]);
  t747 = Sin(var1[3]);
  t421 = Cos(var1[3]);
  t554 = Sin(var1[4]);
  t868 = Sin(var1[5]);
  t963 = Sin(var1[13]);
  t742 = t421*t544*t554;
  t872 = t747*t868;
  t882 = t742 + t872;
  t377 = Cos(var1[13]);
  t980 = -1.*t544*t747;
  t1138 = t421*t554*t868;
  t1341 = t980 + t1138;
  t1808 = Cos(var1[15]);
  t949 = t377*t882;
  t1370 = -1.*t963*t1341;
  t1569 = t949 + t1370;
  t264 = Sin(var1[15]);
  t1813 = Cos(var1[14]);
  t1820 = Cos(var1[4]);
  t1822 = t1813*t421*t1820;
  t1829 = Sin(var1[14]);
  t1851 = t963*t882;
  t1941 = t377*t1341;
  t1964 = t1851 + t1941;
  t2002 = t1829*t1964;
  t2008 = t1822 + t2002;
  t243 = Sin(var1[16]);
  t2089 = t544*t747*t554;
  t2090 = -1.*t421*t868;
  t2092 = t2089 + t2090;
  t2117 = t421*t544;
  t2119 = t747*t554*t868;
  t2122 = t2117 + t2119;
  t2069 = Cos(var1[16]);
  t2114 = t377*t2092;
  t2127 = -1.*t963*t2122;
  t2131 = t2114 + t2127;
  t2277 = t1813*t1820*t747;
  t2425 = t963*t2092;
  t2447 = t377*t2122;
  t2462 = t2425 + t2447;
  t2466 = t1829*t2462;
  t2467 = t2277 + t2466;
  t2795 = t377*t1820*t544;
  t2990 = -1.*t1820*t963*t868;
  t3031 = t2795 + t2990;
  t3301 = -1.*t1813*t554;
  t3413 = t1820*t544*t963;
  t3442 = t377*t1820*t868;
  t3572 = t3413 + t3442;
  t3633 = t1829*t3572;
  t3755 = t3301 + t3633;
  t1794 = t264*t1569;
  t2009 = t1808*t2008;
  t2040 = t1794 + t2009;
  t2070 = t1808*t1569;
  t2071 = -1.*t264*t2008;
  t2078 = t2070 + t2071;
  t2244 = t264*t2131;
  t2542 = t1808*t2467;
  t2567 = t2244 + t2542;
  t2658 = t1808*t2131;
  t2725 = -1.*t264*t2467;
  t2730 = t2658 + t2725;
  t3035 = t264*t3031;
  t3762 = t1808*t3755;
  t3968 = t3035 + t3762;
  t4179 = t1808*t3031;
  t4192 = -1.*t264*t3755;
  t4216 = t4179 + t4192;
  t7754 = -1.*t1813;
  t7769 = 1. + t7754;
  t7852 = -1.*t1808;
  t7856 = 1. + t7852;
  t7889 = -1.*t2069;
  t7890 = 1. + t7889;
  t4458 = t2069*t2040;
  t4867 = t243*t2078;
  t4976 = t4458 + t4867;
  t7776 = -0.049*t7769;
  t7784 = -0.135*t1829;
  t7790 = 0. + t7776 + t7784;
  t7806 = 0.135*t963;
  t7809 = 0. + t7806;
  t7826 = -1.*t377;
  t7830 = 1. + t7826;
  t7831 = -0.135*t7830;
  t7834 = 0. + t7831;
  t7840 = -0.135*t7769;
  t7841 = 0.049*t1829;
  t7845 = 0. + t7840 + t7841;
  t7857 = -0.09*t7856;
  t7860 = 0.049*t264;
  t7863 = 0. + t7857 + t7860;
  t7877 = -0.049*t7856;
  t7884 = -0.09*t264;
  t7885 = 0. + t7877 + t7884;
  t7891 = -0.049*t7890;
  t7893 = -0.21*t243;
  t7894 = 0. + t7891 + t7893;
  t7896 = -0.21*t7890;
  t7897 = 0.049*t243;
  t7898 = 0. + t7896 + t7897;
  t5128 = t2069*t2567;
  t5134 = t243*t2730;
  t5251 = t5128 + t5134;
  t5728 = t2069*t3968;
  t6212 = t243*t4216;
  t7667 = t5728 + t6212;
  p_output1[0]=-1.*t2069*t2078 + t2040*t243;
  p_output1[1]=t243*t2567 - 1.*t2069*t2730;
  p_output1[2]=t243*t3968 - 1.*t2069*t4216;
  p_output1[3]=0.;
  p_output1[4]=t4976;
  p_output1[5]=t5251;
  p_output1[6]=t7667;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1813*t1964 + t1820*t1829*t421;
  p_output1[9]=-1.*t1813*t2462 + t1820*t1829*t747;
  p_output1[10]=-1.*t1813*t3572 - 1.*t1829*t554;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(t2069*t2078 - 1.*t2040*t243) - 0.1305*(t1813*t1964 - 1.*t1820*t1829*t421) - 0.049*t4976 + t1820*t421*t7790 + t1341*t7834 + t1964*t7845 + t1569*t7863 + t2008*t7885 + t2040*t7894 + t2078*t7898 + t7809*t882 + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t243*t2567 + t2069*t2730) - 0.049*t5251 - 0.1305*(t1813*t2462 - 1.*t1820*t1829*t747) + t1820*t747*t7790 + t2092*t7809 + t2122*t7834 + t2462*t7845 + t2131*t7863 + t2467*t7885 + t2567*t7894 + t2730*t7898 + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t243*t3968 + t2069*t4216) - 0.1305*(t1813*t3572 + t1829*t554) - 0.049*t7667 - 1.*t554*t7790 + t1820*t544*t7809 + t3572*t7845 + t3031*t7863 + t3755*t7885 + t3968*t7894 + t4216*t7898 + t1820*t7834*t868 + var1[2];
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

#include "H_knee_joint_right_mex.hh"

namespace SymExpression
{

void H_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
