/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:03 GMT-04:00
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
  double t2632;
  double t2674;
  double t2686;
  double t2675;
  double t2703;
  double t2668;
  double t2742;
  double t2751;
  double t2755;
  double t2682;
  double t2712;
  double t2713;
  double t2758;
  double t2626;
  double t2799;
  double t2804;
  double t2807;
  double t2635;
  double t2642;
  double t2647;
  double t2735;
  double t2760;
  double t2765;
  double t2774;
  double t2782;
  double t2783;
  double t2811;
  double t2826;
  double t2798;
  double t2818;
  double t2819;
  double t2612;
  double t2827;
  double t2834;
  double t2835;
  double t2565;
  double t2917;
  double t2919;
  double t2927;
  double t2902;
  double t2912;
  double t2913;
  double t2941;
  double t2943;
  double t2947;
  double t2896;
  double t2916;
  double t2931;
  double t2932;
  double t2936;
  double t2937;
  double t2854;
  double t2940;
  double t2949;
  double t2952;
  double t2959;
  double t2964;
  double t2966;
  double t3006;
  double t3009;
  double t3012;
  double t2992;
  double t2993;
  double t2994;
  double t3001;
  double t3003;
  double t3004;
  double t3005;
  double t3013;
  double t3015;
  double t3019;
  double t3029;
  double t3030;
  double t2823;
  double t2837;
  double t2849;
  double t2855;
  double t2860;
  double t2877;
  double t2958;
  double t2967;
  double t2970;
  double t2973;
  double t2975;
  double t2980;
  double t3017;
  double t3032;
  double t3033;
  double t3038;
  double t3039;
  double t3041;
  t2632 = Cos(var1[3]);
  t2674 = Cos(var1[5]);
  t2686 = Sin(var1[4]);
  t2675 = Sin(var1[3]);
  t2703 = Sin(var1[5]);
  t2668 = Cos(var1[6]);
  t2742 = t2632*t2674*t2686;
  t2751 = t2675*t2703;
  t2755 = t2742 + t2751;
  t2682 = -1.*t2674*t2675;
  t2712 = t2632*t2686*t2703;
  t2713 = t2682 + t2712;
  t2758 = Sin(var1[6]);
  t2626 = Cos(var1[8]);
  t2799 = t2668*t2755;
  t2804 = -1.*t2713*t2758;
  t2807 = t2799 + t2804;
  t2635 = Cos(var1[4]);
  t2642 = Cos(var1[7]);
  t2647 = t2632*t2635*t2642;
  t2735 = t2668*t2713;
  t2760 = t2755*t2758;
  t2765 = t2735 + t2760;
  t2774 = Sin(var1[7]);
  t2782 = t2765*t2774;
  t2783 = t2647 + t2782;
  t2811 = Sin(var1[8]);
  t2826 = Cos(var1[9]);
  t2798 = t2626*t2783;
  t2818 = t2807*t2811;
  t2819 = t2798 + t2818;
  t2612 = Sin(var1[9]);
  t2827 = t2626*t2807;
  t2834 = -1.*t2783*t2811;
  t2835 = t2827 + t2834;
  t2565 = Cos(var1[10]);
  t2917 = t2674*t2675*t2686;
  t2919 = -1.*t2632*t2703;
  t2927 = t2917 + t2919;
  t2902 = t2632*t2674;
  t2912 = t2675*t2686*t2703;
  t2913 = t2902 + t2912;
  t2941 = t2668*t2927;
  t2943 = -1.*t2913*t2758;
  t2947 = t2941 + t2943;
  t2896 = t2635*t2642*t2675;
  t2916 = t2668*t2913;
  t2931 = t2927*t2758;
  t2932 = t2916 + t2931;
  t2936 = t2932*t2774;
  t2937 = t2896 + t2936;
  t2854 = Sin(var1[10]);
  t2940 = t2626*t2937;
  t2949 = t2947*t2811;
  t2952 = t2940 + t2949;
  t2959 = t2626*t2947;
  t2964 = -1.*t2937*t2811;
  t2966 = t2959 + t2964;
  t3006 = t2635*t2674*t2668;
  t3009 = -1.*t2635*t2703*t2758;
  t3012 = t3006 + t3009;
  t2992 = -1.*t2642*t2686;
  t2993 = t2635*t2668*t2703;
  t2994 = t2635*t2674*t2758;
  t3001 = t2993 + t2994;
  t3003 = t3001*t2774;
  t3004 = t2992 + t3003;
  t3005 = t2626*t3004;
  t3013 = t3012*t2811;
  t3015 = t3005 + t3013;
  t3019 = t2626*t3012;
  t3029 = -1.*t3004*t2811;
  t3030 = t3019 + t3029;
  t2823 = -1.*t2612*t2819;
  t2837 = t2826*t2835;
  t2849 = t2823 + t2837;
  t2855 = t2826*t2819;
  t2860 = t2612*t2835;
  t2877 = t2855 + t2860;
  t2958 = -1.*t2612*t2952;
  t2967 = t2826*t2966;
  t2970 = t2958 + t2967;
  t2973 = t2826*t2952;
  t2975 = t2612*t2966;
  t2980 = t2973 + t2975;
  t3017 = -1.*t2612*t3015;
  t3032 = t2826*t3030;
  t3033 = t3017 + t3032;
  t3038 = t2826*t3015;
  t3039 = t2612*t3030;
  t3041 = t3038 + t3039;
  p_output1[0]=-1.*t2565*t2849 + t2854*t2877;
  p_output1[1]=-1.*t2565*t2970 + t2854*t2980;
  p_output1[2]=-1.*t2565*t3033 + t2854*t3041;
  p_output1[3]=t2849*t2854 + t2565*t2877;
  p_output1[4]=t2854*t2970 + t2565*t2980;
  p_output1[5]=t2854*t3033 + t2565*t3041;
  p_output1[6]=-1.*t2642*t2765 + t2632*t2635*t2774;
  p_output1[7]=t2635*t2675*t2774 - 1.*t2642*t2932;
  p_output1[8]=-1.*t2686*t2774 - 1.*t2642*t3001;
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
