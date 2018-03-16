/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:12 GMT-04:00
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
  double t2732;
  double t2767;
  double t2935;
  double t2883;
  double t2979;
  double t2984;
  double t2998;
  double t2982;
  double t2989;
  double t2991;
  double t2967;
  double t2999;
  double t3005;
  double t3008;
  double t3034;
  double t2997;
  double t3014;
  double t3018;
  double t2964;
  double t3035;
  double t3037;
  double t3038;
  double t3047;
  double t3021;
  double t3041;
  double t3042;
  double t2962;
  double t3049;
  double t3050;
  double t3051;
  double t3058;
  double t3044;
  double t3052;
  double t3053;
  double t2949;
  double t3060;
  double t3063;
  double t3064;
  double t3093;
  double t3094;
  double t3096;
  double t3098;
  double t3100;
  double t3104;
  double t3097;
  double t3106;
  double t3107;
  double t3111;
  double t3112;
  double t3113;
  double t3108;
  double t3114;
  double t3115;
  double t3117;
  double t3118;
  double t3119;
  double t3116;
  double t3120;
  double t3121;
  double t3123;
  double t3124;
  double t3127;
  double t3143;
  double t3144;
  double t3146;
  double t3148;
  double t3150;
  double t3153;
  double t3147;
  double t3154;
  double t3156;
  double t3158;
  double t3160;
  double t3163;
  double t3157;
  double t3164;
  double t3166;
  double t3168;
  double t3170;
  double t3173;
  double t3054;
  double t3067;
  double t3068;
  double t3076;
  double t3077;
  double t3078;
  double t3122;
  double t3128;
  double t3130;
  double t3134;
  double t3136;
  double t3137;
  double t3167;
  double t3174;
  double t3176;
  double t3178;
  double t3180;
  double t3181;
  t2732 = Cos(var1[1]);
  t2767 = Sin(var1[0]);
  t2935 = Sin(var1[1]);
  t2883 = Cos(var1[0]);
  t2979 = Cos(var1[2]);
  t2984 = Sin(var1[2]);
  t2998 = Cos(var1[3]);
  t2982 = t2979*t2767*t2935;
  t2989 = t2883*t2984;
  t2991 = t2982 + t2989;
  t2967 = Sin(var1[3]);
  t2999 = t2883*t2979;
  t3005 = -1.*t2767*t2935*t2984;
  t3008 = t2999 + t3005;
  t3034 = Cos(var1[4]);
  t2997 = -1.*t2967*t2991;
  t3014 = t2998*t3008;
  t3018 = t2997 + t3014;
  t2964 = Sin(var1[4]);
  t3035 = t2998*t2991;
  t3037 = t2967*t3008;
  t3038 = t3035 + t3037;
  t3047 = Cos(var1[5]);
  t3021 = t2964*t3018;
  t3041 = t3034*t3038;
  t3042 = t3021 + t3041;
  t2962 = Sin(var1[5]);
  t3049 = t3034*t3018;
  t3050 = -1.*t2964*t3038;
  t3051 = t3049 + t3050;
  t3058 = Cos(var1[6]);
  t3044 = -1.*t2962*t3042;
  t3052 = t3047*t3051;
  t3053 = t3044 + t3052;
  t2949 = Sin(var1[6]);
  t3060 = t3047*t3042;
  t3063 = t2962*t3051;
  t3064 = t3060 + t3063;
  t3093 = t2883*t2979*t2935;
  t3094 = -1.*t2767*t2984;
  t3096 = t3093 + t3094;
  t3098 = -1.*t2979*t2767;
  t3100 = -1.*t2883*t2935*t2984;
  t3104 = t3098 + t3100;
  t3097 = -1.*t2967*t3096;
  t3106 = t2998*t3104;
  t3107 = t3097 + t3106;
  t3111 = t2998*t3096;
  t3112 = t2967*t3104;
  t3113 = t3111 + t3112;
  t3108 = t2964*t3107;
  t3114 = t3034*t3113;
  t3115 = t3108 + t3114;
  t3117 = t3034*t3107;
  t3118 = -1.*t2964*t3113;
  t3119 = t3117 + t3118;
  t3116 = -1.*t2962*t3115;
  t3120 = t3047*t3119;
  t3121 = t3116 + t3120;
  t3123 = t3047*t3115;
  t3124 = t2962*t3119;
  t3127 = t3123 + t3124;
  t3143 = -1.*t2732*t2979*t2967;
  t3144 = -1.*t2998*t2732*t2984;
  t3146 = t3143 + t3144;
  t3148 = t2998*t2732*t2979;
  t3150 = -1.*t2732*t2967*t2984;
  t3153 = t3148 + t3150;
  t3147 = t2964*t3146;
  t3154 = t3034*t3153;
  t3156 = t3147 + t3154;
  t3158 = t3034*t3146;
  t3160 = -1.*t2964*t3153;
  t3163 = t3158 + t3160;
  t3157 = -1.*t2962*t3156;
  t3164 = t3047*t3163;
  t3166 = t3157 + t3164;
  t3168 = t3047*t3156;
  t3170 = t2962*t3163;
  t3173 = t3168 + t3170;
  t3054 = t2949*t3053;
  t3067 = t3058*t3064;
  t3068 = t3054 + t3067;
  t3076 = t3058*t3053;
  t3077 = -1.*t2949*t3064;
  t3078 = t3076 + t3077;
  t3122 = t2949*t3121;
  t3128 = t3058*t3127;
  t3130 = t3122 + t3128;
  t3134 = t3058*t3121;
  t3136 = -1.*t2949*t3127;
  t3137 = t3134 + t3136;
  t3167 = t2949*t3166;
  t3174 = t3058*t3173;
  t3176 = t3167 + t3174;
  t3178 = t3058*t3166;
  t3180 = -1.*t2949*t3173;
  t3181 = t3178 + t3180;
  p_output1[0]=0. + t2732*t2767;
  p_output1[1]=0. - 1.*t2732*t2883;
  p_output1[2]=0. + t2935;
  p_output1[3]=0. - 0.642788*t3068 - 0.766044*t3078;
  p_output1[4]=0. + 0.642788*t3130 + 0.766044*t3137;
  p_output1[5]=0. + 0.642788*t3176 + 0.766044*t3181;
  p_output1[6]=0. + 0.766044*t3068 - 0.642788*t3078;
  p_output1[7]=0. - 0.766044*t3130 + 0.642788*t3137;
  p_output1[8]=0. - 0.766044*t3176 + 0.642788*t3181;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
