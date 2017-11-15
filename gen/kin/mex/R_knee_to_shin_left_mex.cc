/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:14 GMT-05:00
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
  double t2668;
  double t2710;
  double t2722;
  double t2711;
  double t2739;
  double t2704;
  double t2778;
  double t2787;
  double t2791;
  double t2718;
  double t2748;
  double t2749;
  double t2794;
  double t2662;
  double t2835;
  double t2840;
  double t2843;
  double t2671;
  double t2678;
  double t2683;
  double t2771;
  double t2796;
  double t2801;
  double t2810;
  double t2818;
  double t2819;
  double t2847;
  double t2862;
  double t2834;
  double t2854;
  double t2855;
  double t2648;
  double t2863;
  double t2870;
  double t2871;
  double t2601;
  double t2953;
  double t2955;
  double t2963;
  double t2938;
  double t2948;
  double t2949;
  double t2977;
  double t2979;
  double t2983;
  double t2932;
  double t2952;
  double t2967;
  double t2968;
  double t2972;
  double t2973;
  double t2890;
  double t2976;
  double t2985;
  double t2988;
  double t2995;
  double t3000;
  double t3002;
  double t3042;
  double t3045;
  double t3048;
  double t3028;
  double t3029;
  double t3030;
  double t3037;
  double t3039;
  double t3040;
  double t3041;
  double t3049;
  double t3051;
  double t3055;
  double t3065;
  double t3066;
  double t2859;
  double t2873;
  double t2885;
  double t2891;
  double t2896;
  double t2913;
  double t2994;
  double t3003;
  double t3006;
  double t3009;
  double t3011;
  double t3016;
  double t3053;
  double t3068;
  double t3069;
  double t3074;
  double t3075;
  double t3077;
  t2668 = Cos(var1[3]);
  t2710 = Cos(var1[5]);
  t2722 = Sin(var1[4]);
  t2711 = Sin(var1[3]);
  t2739 = Sin(var1[5]);
  t2704 = Cos(var1[6]);
  t2778 = t2668*t2710*t2722;
  t2787 = t2711*t2739;
  t2791 = t2778 + t2787;
  t2718 = -1.*t2710*t2711;
  t2748 = t2668*t2722*t2739;
  t2749 = t2718 + t2748;
  t2794 = Sin(var1[6]);
  t2662 = Cos(var1[8]);
  t2835 = t2704*t2791;
  t2840 = -1.*t2749*t2794;
  t2843 = t2835 + t2840;
  t2671 = Cos(var1[4]);
  t2678 = Cos(var1[7]);
  t2683 = t2668*t2671*t2678;
  t2771 = t2704*t2749;
  t2796 = t2791*t2794;
  t2801 = t2771 + t2796;
  t2810 = Sin(var1[7]);
  t2818 = t2801*t2810;
  t2819 = t2683 + t2818;
  t2847 = Sin(var1[8]);
  t2862 = Cos(var1[9]);
  t2834 = t2662*t2819;
  t2854 = t2843*t2847;
  t2855 = t2834 + t2854;
  t2648 = Sin(var1[9]);
  t2863 = t2662*t2843;
  t2870 = -1.*t2819*t2847;
  t2871 = t2863 + t2870;
  t2601 = Cos(var1[10]);
  t2953 = t2710*t2711*t2722;
  t2955 = -1.*t2668*t2739;
  t2963 = t2953 + t2955;
  t2938 = t2668*t2710;
  t2948 = t2711*t2722*t2739;
  t2949 = t2938 + t2948;
  t2977 = t2704*t2963;
  t2979 = -1.*t2949*t2794;
  t2983 = t2977 + t2979;
  t2932 = t2671*t2678*t2711;
  t2952 = t2704*t2949;
  t2967 = t2963*t2794;
  t2968 = t2952 + t2967;
  t2972 = t2968*t2810;
  t2973 = t2932 + t2972;
  t2890 = Sin(var1[10]);
  t2976 = t2662*t2973;
  t2985 = t2983*t2847;
  t2988 = t2976 + t2985;
  t2995 = t2662*t2983;
  t3000 = -1.*t2973*t2847;
  t3002 = t2995 + t3000;
  t3042 = t2671*t2710*t2704;
  t3045 = -1.*t2671*t2739*t2794;
  t3048 = t3042 + t3045;
  t3028 = -1.*t2678*t2722;
  t3029 = t2671*t2704*t2739;
  t3030 = t2671*t2710*t2794;
  t3037 = t3029 + t3030;
  t3039 = t3037*t2810;
  t3040 = t3028 + t3039;
  t3041 = t2662*t3040;
  t3049 = t3048*t2847;
  t3051 = t3041 + t3049;
  t3055 = t2662*t3048;
  t3065 = -1.*t3040*t2847;
  t3066 = t3055 + t3065;
  t2859 = -1.*t2648*t2855;
  t2873 = t2862*t2871;
  t2885 = t2859 + t2873;
  t2891 = t2862*t2855;
  t2896 = t2648*t2871;
  t2913 = t2891 + t2896;
  t2994 = -1.*t2648*t2988;
  t3003 = t2862*t3002;
  t3006 = t2994 + t3003;
  t3009 = t2862*t2988;
  t3011 = t2648*t3002;
  t3016 = t3009 + t3011;
  t3053 = -1.*t2648*t3051;
  t3068 = t2862*t3066;
  t3069 = t3053 + t3068;
  t3074 = t2862*t3051;
  t3075 = t2648*t3066;
  t3077 = t3074 + t3075;
  p_output1[0]=-1.*t2601*t2885 + t2890*t2913;
  p_output1[1]=-1.*t2601*t3006 + t2890*t3016;
  p_output1[2]=-1.*t2601*t3069 + t2890*t3077;
  p_output1[3]=t2885*t2890 + t2601*t2913;
  p_output1[4]=t2890*t3006 + t2601*t3016;
  p_output1[5]=t2890*t3069 + t2601*t3077;
  p_output1[6]=-1.*t2678*t2801 + t2668*t2671*t2810;
  p_output1[7]=t2671*t2711*t2810 - 1.*t2678*t2968;
  p_output1[8]=-1.*t2722*t2810 - 1.*t2678*t3037;
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
