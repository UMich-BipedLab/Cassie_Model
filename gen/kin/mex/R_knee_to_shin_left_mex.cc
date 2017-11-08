/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:11 GMT-05:00
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
  double t2707;
  double t2737;
  double t2752;
  double t2742;
  double t2758;
  double t2729;
  double t2801;
  double t2802;
  double t2809;
  double t2743;
  double t2781;
  double t2790;
  double t2811;
  double t2694;
  double t2847;
  double t2850;
  double t2851;
  double t2715;
  double t2717;
  double t2721;
  double t2798;
  double t2823;
  double t2828;
  double t2831;
  double t2833;
  double t2840;
  double t2855;
  double t2646;
  double t2920;
  double t2923;
  double t2925;
  double t2909;
  double t2910;
  double t2916;
  double t2870;
  double t2937;
  double t2940;
  double t2946;
  double t2904;
  double t2919;
  double t2926;
  double t2927;
  double t2928;
  double t2934;
  double t2989;
  double t2990;
  double t2992;
  double t2973;
  double t2976;
  double t2977;
  double t2979;
  double t2981;
  double t2987;
  double t2846;
  double t2856;
  double t2864;
  double t2872;
  double t2875;
  double t2893;
  double t2935;
  double t2950;
  double t2951;
  double t2955;
  double t2958;
  double t2959;
  double t2988;
  double t2993;
  double t2997;
  double t2999;
  double t3001;
  double t3002;
  t2707 = Cos(var1[3]);
  t2737 = Cos(var1[5]);
  t2752 = Sin(var1[4]);
  t2742 = Sin(var1[3]);
  t2758 = Sin(var1[5]);
  t2729 = Cos(var1[6]);
  t2801 = t2707*t2737*t2752;
  t2802 = t2742*t2758;
  t2809 = t2801 + t2802;
  t2743 = -1.*t2737*t2742;
  t2781 = t2707*t2752*t2758;
  t2790 = t2743 + t2781;
  t2811 = Sin(var1[6]);
  t2694 = Cos(var1[8]);
  t2847 = t2729*t2809;
  t2850 = -1.*t2790*t2811;
  t2851 = t2847 + t2850;
  t2715 = Cos(var1[4]);
  t2717 = Cos(var1[7]);
  t2721 = t2707*t2715*t2717;
  t2798 = t2729*t2790;
  t2823 = t2809*t2811;
  t2828 = t2798 + t2823;
  t2831 = Sin(var1[7]);
  t2833 = t2828*t2831;
  t2840 = t2721 + t2833;
  t2855 = Sin(var1[8]);
  t2646 = Sin(var1[9]);
  t2920 = t2737*t2742*t2752;
  t2923 = -1.*t2707*t2758;
  t2925 = t2920 + t2923;
  t2909 = t2707*t2737;
  t2910 = t2742*t2752*t2758;
  t2916 = t2909 + t2910;
  t2870 = Cos(var1[9]);
  t2937 = t2729*t2925;
  t2940 = -1.*t2916*t2811;
  t2946 = t2937 + t2940;
  t2904 = t2715*t2717*t2742;
  t2919 = t2729*t2916;
  t2926 = t2925*t2811;
  t2927 = t2919 + t2926;
  t2928 = t2927*t2831;
  t2934 = t2904 + t2928;
  t2989 = t2715*t2737*t2729;
  t2990 = -1.*t2715*t2758*t2811;
  t2992 = t2989 + t2990;
  t2973 = -1.*t2717*t2752;
  t2976 = t2715*t2729*t2758;
  t2977 = t2715*t2737*t2811;
  t2979 = t2976 + t2977;
  t2981 = t2979*t2831;
  t2987 = t2973 + t2981;
  t2846 = t2694*t2840;
  t2856 = t2851*t2855;
  t2864 = t2846 + t2856;
  t2872 = t2694*t2851;
  t2875 = -1.*t2840*t2855;
  t2893 = t2872 + t2875;
  t2935 = t2694*t2934;
  t2950 = t2946*t2855;
  t2951 = t2935 + t2950;
  t2955 = t2694*t2946;
  t2958 = -1.*t2934*t2855;
  t2959 = t2955 + t2958;
  t2988 = t2694*t2987;
  t2993 = t2992*t2855;
  t2997 = t2988 + t2993;
  t2999 = t2694*t2992;
  t3001 = -1.*t2987*t2855;
  t3002 = t2999 + t3001;
  p_output1[0]=t2646*t2864 - 1.*t2870*t2893;
  p_output1[1]=t2646*t2951 - 1.*t2870*t2959;
  p_output1[2]=t2646*t2997 - 1.*t2870*t3002;
  p_output1[3]=t2864*t2870 + t2646*t2893;
  p_output1[4]=t2870*t2951 + t2646*t2959;
  p_output1[5]=t2870*t2997 + t2646*t3002;
  p_output1[6]=-1.*t2717*t2828 + t2707*t2715*t2831;
  p_output1[7]=t2715*t2742*t2831 - 1.*t2717*t2927;
  p_output1[8]=-1.*t2752*t2831 - 1.*t2717*t2979;
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

#include "R_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void R_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
