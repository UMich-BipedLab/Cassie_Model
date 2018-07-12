/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:55 GMT-04:00
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
  double t2760;
  double t2706;
  double t2761;
  double t2745;
  double t2763;
  double t2247;
  double t2804;
  double t2807;
  double t2809;
  double t2759;
  double t2779;
  double t2783;
  double t2812;
  double t2879;
  double t2882;
  double t2885;
  double t2911;
  double t2853;
  double t2856;
  double t2876;
  double t2924;
  double t2544;
  double t2603;
  double t2676;
  double t2703;
  double t2819;
  double t2821;
  double t3066;
  double t3077;
  double t3078;
  double t3050;
  double t3051;
  double t3057;
  double t2902;
  double t2915;
  double t2917;
  double t2930;
  double t2935;
  double t2943;
  double t3114;
  double t3124;
  double t3129;
  double t3262;
  double t3283;
  double t3290;
  t2760 = Cos(var1[3]);
  t2706 = Cos(var1[5]);
  t2761 = Sin(var1[4]);
  t2745 = Sin(var1[3]);
  t2763 = Sin(var1[5]);
  t2247 = Cos(var1[6]);
  t2804 = t2760*t2706*t2761;
  t2807 = t2745*t2763;
  t2809 = t2804 + t2807;
  t2759 = -1.*t2706*t2745;
  t2779 = t2760*t2761*t2763;
  t2783 = t2759 + t2779;
  t2812 = Sin(var1[6]);
  t2879 = Cos(var1[7]);
  t2882 = -1.*t2879;
  t2885 = 1. + t2882;
  t2911 = Sin(var1[7]);
  t2853 = t2247*t2783;
  t2856 = t2809*t2812;
  t2876 = t2853 + t2856;
  t2924 = Cos(var1[4]);
  t2544 = -1.*t2247;
  t2603 = 1. + t2544;
  t2676 = 0.135*t2603;
  t2703 = 0. + t2676;
  t2819 = -0.135*t2812;
  t2821 = 0. + t2819;
  t3066 = t2706*t2745*t2761;
  t3077 = -1.*t2760*t2763;
  t3078 = t3066 + t3077;
  t3050 = t2760*t2706;
  t3051 = t2745*t2761*t2763;
  t3057 = t3050 + t3051;
  t2902 = 0.135*t2885;
  t2915 = 0.049*t2911;
  t2917 = 0. + t2902 + t2915;
  t2930 = -0.049*t2885;
  t2935 = 0.135*t2911;
  t2943 = 0. + t2930 + t2935;
  t3114 = t2247*t3057;
  t3124 = t3078*t2812;
  t3129 = t3114 + t3124;
  t3262 = t2924*t2247*t2763;
  t3283 = t2924*t2706*t2812;
  t3290 = t3262 + t3283;
  p_output1[0]=0. + t2703*t2783 - 0.09*(t2247*t2809 - 1.*t2783*t2812) + t2809*t2821 + t2876*t2917 - 0.049*(t2876*t2911 + t2760*t2879*t2924) + 0.135*(t2876*t2879 - 1.*t2760*t2911*t2924) + t2760*t2924*t2943 + var1[0];
  p_output1[1]=0. + t2745*t2924*t2943 + t2703*t3057 + t2821*t3078 - 0.09*(-1.*t2812*t3057 + t2247*t3078) + t2917*t3129 + 0.135*(-1.*t2745*t2911*t2924 + t2879*t3129) - 0.049*(t2745*t2879*t2924 + t2911*t3129) + var1[1];
  p_output1[2]=0. + t2703*t2763*t2924 + t2706*t2821*t2924 - 0.09*(t2247*t2706*t2924 - 1.*t2763*t2812*t2924) - 1.*t2761*t2943 + t2917*t3290 + 0.135*(t2761*t2911 + t2879*t3290) - 0.049*(-1.*t2761*t2879 + t2911*t3290) + var1[2];
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

#include "p_hip_rotation_left_mex.hh"

namespace SymExpression
{

void p_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
