/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:11 GMT-04:00
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
  double t132;
  double t2089;
  double t2724;
  double t2655;
  double t2758;
  double t2777;
  double t2793;
  double t2767;
  double t2782;
  double t2783;
  double t2756;
  double t2802;
  double t2804;
  double t2806;
  double t2823;
  double t2791;
  double t2814;
  double t2816;
  double t2754;
  double t2826;
  double t2828;
  double t2831;
  double t2847;
  double t2820;
  double t2832;
  double t2833;
  double t2744;
  double t2850;
  double t2851;
  double t2855;
  double t2862;
  double t2845;
  double t2856;
  double t2859;
  double t2742;
  double t2870;
  double t2872;
  double t2874;
  double t2888;
  double t2891;
  double t2892;
  double t2894;
  double t2896;
  double t2897;
  double t2893;
  double t2899;
  double t2900;
  double t2902;
  double t2904;
  double t2905;
  double t2901;
  double t2910;
  double t2913;
  double t2915;
  double t2916;
  double t2918;
  double t2914;
  double t2919;
  double t2921;
  double t2923;
  double t2924;
  double t2926;
  double t2939;
  double t2940;
  double t2941;
  double t2943;
  double t2944;
  double t2945;
  double t2942;
  double t2946;
  double t2947;
  double t2949;
  double t2950;
  double t2951;
  double t2948;
  double t2952;
  double t2953;
  double t2959;
  double t2960;
  double t2961;
  double t2861;
  double t2875;
  double t2878;
  double t2881;
  double t2882;
  double t2883;
  double t2922;
  double t2927;
  double t2929;
  double t2931;
  double t2932;
  double t2934;
  double t2956;
  double t2962;
  double t2964;
  double t2967;
  double t2968;
  double t2969;
  double t2992;
  double t2993;
  double t3002;
  double t3003;
  double t3012;
  double t3013;
  double t3022;
  double t3023;
  double t3032;
  double t3033;
  double t2986;
  double t2987;
  double t2988;
  double t2989;
  double t2990;
  double t2994;
  double t2995;
  double t2996;
  double t2998;
  double t2999;
  double t3000;
  double t3004;
  double t3005;
  double t3006;
  double t3008;
  double t3009;
  double t3010;
  double t3014;
  double t3015;
  double t3016;
  double t3018;
  double t3019;
  double t3020;
  double t3024;
  double t3025;
  double t3026;
  double t3028;
  double t3029;
  double t3030;
  double t3034;
  double t3035;
  double t3036;
  double t3038;
  double t3039;
  double t3040;
  t132 = Cos(var1[1]);
  t2089 = Sin(var1[0]);
  t2724 = Sin(var1[1]);
  t2655 = Cos(var1[0]);
  t2758 = Cos(var1[2]);
  t2777 = Sin(var1[2]);
  t2793 = Cos(var1[3]);
  t2767 = t2758*t2089*t2724;
  t2782 = t2655*t2777;
  t2783 = t2767 + t2782;
  t2756 = Sin(var1[3]);
  t2802 = t2655*t2758;
  t2804 = -1.*t2089*t2724*t2777;
  t2806 = t2802 + t2804;
  t2823 = Cos(var1[4]);
  t2791 = -1.*t2756*t2783;
  t2814 = t2793*t2806;
  t2816 = t2791 + t2814;
  t2754 = Sin(var1[4]);
  t2826 = t2793*t2783;
  t2828 = t2756*t2806;
  t2831 = t2826 + t2828;
  t2847 = Cos(var1[5]);
  t2820 = t2754*t2816;
  t2832 = t2823*t2831;
  t2833 = t2820 + t2832;
  t2744 = Sin(var1[5]);
  t2850 = t2823*t2816;
  t2851 = -1.*t2754*t2831;
  t2855 = t2850 + t2851;
  t2862 = Cos(var1[6]);
  t2845 = -1.*t2744*t2833;
  t2856 = t2847*t2855;
  t2859 = t2845 + t2856;
  t2742 = Sin(var1[6]);
  t2870 = t2847*t2833;
  t2872 = t2744*t2855;
  t2874 = t2870 + t2872;
  t2888 = t2655*t2758*t2724;
  t2891 = -1.*t2089*t2777;
  t2892 = t2888 + t2891;
  t2894 = -1.*t2758*t2089;
  t2896 = -1.*t2655*t2724*t2777;
  t2897 = t2894 + t2896;
  t2893 = -1.*t2756*t2892;
  t2899 = t2793*t2897;
  t2900 = t2893 + t2899;
  t2902 = t2793*t2892;
  t2904 = t2756*t2897;
  t2905 = t2902 + t2904;
  t2901 = t2754*t2900;
  t2910 = t2823*t2905;
  t2913 = t2901 + t2910;
  t2915 = t2823*t2900;
  t2916 = -1.*t2754*t2905;
  t2918 = t2915 + t2916;
  t2914 = -1.*t2744*t2913;
  t2919 = t2847*t2918;
  t2921 = t2914 + t2919;
  t2923 = t2847*t2913;
  t2924 = t2744*t2918;
  t2926 = t2923 + t2924;
  t2939 = -1.*t132*t2758*t2756;
  t2940 = -1.*t2793*t132*t2777;
  t2941 = t2939 + t2940;
  t2943 = t2793*t132*t2758;
  t2944 = -1.*t132*t2756*t2777;
  t2945 = t2943 + t2944;
  t2942 = t2754*t2941;
  t2946 = t2823*t2945;
  t2947 = t2942 + t2946;
  t2949 = t2823*t2941;
  t2950 = -1.*t2754*t2945;
  t2951 = t2949 + t2950;
  t2948 = -1.*t2744*t2947;
  t2952 = t2847*t2951;
  t2953 = t2948 + t2952;
  t2959 = t2847*t2947;
  t2960 = t2744*t2951;
  t2961 = t2959 + t2960;
  t2861 = t2742*t2859;
  t2875 = t2862*t2874;
  t2878 = t2861 + t2875;
  t2881 = t2862*t2859;
  t2882 = -1.*t2742*t2874;
  t2883 = t2881 + t2882;
  t2922 = t2742*t2921;
  t2927 = t2862*t2926;
  t2929 = t2922 + t2927;
  t2931 = t2862*t2921;
  t2932 = -1.*t2742*t2926;
  t2934 = t2931 + t2932;
  t2956 = t2742*t2953;
  t2962 = t2862*t2961;
  t2964 = t2956 + t2962;
  t2967 = t2862*t2953;
  t2968 = -1.*t2742*t2961;
  t2969 = t2967 + t2968;
  t2992 = -1.*t2758;
  t2993 = 1. + t2992;
  t3002 = -1.*t2793;
  t3003 = 1. + t3002;
  t3012 = -1.*t2823;
  t3013 = 1. + t3012;
  t3022 = -1.*t2847;
  t3023 = 1. + t3022;
  t3032 = -1.*t2862;
  t3033 = 1. + t3032;
  t2986 = -1.*t132;
  t2987 = 1. + t2986;
  t2988 = 0.135*t2987;
  t2989 = 0.049*t2724;
  t2990 = 0. + t2988 + t2989;
  t2994 = -0.049*t2993;
  t2995 = -0.09*t2777;
  t2996 = 0. + t2994 + t2995;
  t2998 = -0.09*t2993;
  t2999 = 0.049*t2777;
  t3000 = 0. + t2998 + t2999;
  t3004 = -0.049*t3003;
  t3005 = -0.21*t2756;
  t3006 = 0. + t3004 + t3005;
  t3008 = -0.21*t3003;
  t3009 = 0.049*t2756;
  t3010 = 0. + t3008 + t3009;
  t3014 = -0.2707*t3013;
  t3015 = 0.0016*t2754;
  t3016 = 0. + t3014 + t3015;
  t3018 = -0.0016*t3013;
  t3019 = -0.2707*t2754;
  t3020 = 0. + t3018 + t3019;
  t3024 = 0.0184*t3023;
  t3025 = -0.7055*t2744;
  t3026 = 0. + t3024 + t3025;
  t3028 = -0.7055*t3023;
  t3029 = -0.0184*t2744;
  t3030 = 0. + t3028 + t3029;
  t3034 = -1.1135*t3033;
  t3035 = 0.0216*t2742;
  t3036 = 0. + t3034 + t3035;
  t3038 = -0.0216*t3033;
  t3039 = -1.1135*t2742;
  t3040 = 0. + t3038 + t3039;
  p_output1[0]=0. + t132*t2089;
  p_output1[1]=0. - 1.*t132*t2655;
  p_output1[2]=0. + t2724;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t2878 - 0.766044*t2883;
  p_output1[5]=0. + 0.642788*t2929 + 0.766044*t2934;
  p_output1[6]=0. + 0.642788*t2964 + 0.766044*t2969;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t2878 - 0.642788*t2883;
  p_output1[9]=0. - 0.766044*t2929 + 0.642788*t2934;
  p_output1[10]=0. - 0.766044*t2964 + 0.642788*t2969;
  p_output1[11]=0.;
  p_output1[12]=0.24925 + 0.135*t2089 - 0.1305*t132*t2089 - 0.0306*t2878 + 1.1312*t2883 - 1.*t2089*t2990 - 1.*t2089*t2724*t2996 - 1.*t2655*t3000 - 1.*t2783*t3006 - 1.*t2806*t3010 - 1.*t2816*t3016 - 1.*t2831*t3020 - 1.*t2833*t3026 - 1.*t2855*t3030 - 1.*t2859*t3036 - 1.*t2874*t3040;
  p_output1[13]=-0.0302 + 0.135*(1. - 1.*t2655) + 0.1305*t132*t2655 + 0.0306*t2929 - 1.1312*t2934 + t2655*t2990 + t2655*t2724*t2996 - 1.*t2089*t3000 + t2892*t3006 + t2897*t3010 + t2900*t3016 + t2905*t3020 + t2913*t3026 + t2918*t3030 + t2921*t3036 + t2926*t3040;
  p_output1[14]=-0.047 + 0.004500000000000004*t2724 + 0.0306*t2964 - 1.1312*t2969 - 0.049*t2987 + t132*t2996 + t132*t2758*t3006 - 1.*t132*t2777*t3010 + t2941*t3016 + t2945*t3020 + t2947*t3026 + t2951*t3030 + t2953*t3036 + t2961*t3040;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
