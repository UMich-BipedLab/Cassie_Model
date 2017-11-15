/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:02 GMT-05:00
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
  double t579;
  double t538;
  double t584;
  double t564;
  double t601;
  double t333;
  double t376;
  double t843;
  double t1030;
  double t1124;
  double t577;
  double t617;
  double t644;
  double t699;
  double t737;
  double t772;
  double t797;
  double t908;
  double t954;
  double t1783;
  double t1939;
  double t1950;
  double t1981;
  double t1886;
  double t1904;
  double t1906;
  double t2016;
  double t2102;
  double t1935;
  double t2056;
  double t2060;
  double t1777;
  double t2113;
  double t2116;
  double t2120;
  double t2283;
  double t2066;
  double t2124;
  double t2148;
  double t1775;
  double t2285;
  double t2287;
  double t2321;
  double t2381;
  double t2251;
  double t2322;
  double t2327;
  double t1753;
  double t2384;
  double t2388;
  double t2400;
  double t2515;
  double t2371;
  double t2407;
  double t2495;
  double t1693;
  double t2541;
  double t2556;
  double t2563;
  double t1207;
  double t1211;
  double t1214;
  double t1235;
  double t1238;
  double t1241;
  double t1242;
  double t1249;
  double t1278;
  double t2735;
  double t2748;
  double t2769;
  double t2711;
  double t2717;
  double t2721;
  double t2722;
  double t2783;
  double t2787;
  double t2796;
  double t2814;
  double t2835;
  double t2794;
  double t2838;
  double t2840;
  double t2843;
  double t2847;
  double t2854;
  double t2842;
  double t2863;
  double t2871;
  double t2879;
  double t2885;
  double t2890;
  double t2873;
  double t2891;
  double t2932;
  double t2943;
  double t2948;
  double t2952;
  double t1374;
  double t1417;
  double t1488;
  double t2995;
  double t3000;
  double t3002;
  double t2976;
  double t2979;
  double t2983;
  double t2994;
  double t3009;
  double t3011;
  double t3029;
  double t3030;
  double t3034;
  double t3028;
  double t3037;
  double t3039;
  double t3042;
  double t3045;
  double t3048;
  double t3041;
  double t3049;
  double t3055;
  double t3066;
  double t3068;
  double t3069;
  double t3065;
  double t3074;
  double t3075;
  double t3165;
  double t3169;
  double t3183;
  double t2509;
  double t2601;
  double t2610;
  double t2671;
  double t2678;
  double t2681;
  double t2938;
  double t2953;
  double t2956;
  double t2963;
  double t2967;
  double t2968;
  double t3077;
  double t3190;
  double t3199;
  double t3207;
  double t3224;
  double t3269;
  t579 = Cos(var1[3]);
  t538 = Cos(var1[5]);
  t584 = Sin(var1[4]);
  t564 = Sin(var1[3]);
  t601 = Sin(var1[5]);
  t333 = Cos(var1[7]);
  t376 = Cos(var1[6]);
  t843 = Sin(var1[6]);
  t1030 = Cos(var1[4]);
  t1124 = Sin(var1[7]);
  t577 = -1.*t538*t564;
  t617 = t579*t584*t601;
  t644 = t577 + t617;
  t699 = t376*t644;
  t737 = t579*t538*t584;
  t772 = t564*t601;
  t797 = t737 + t772;
  t908 = t797*t843;
  t954 = t699 + t908;
  t1783 = Cos(var1[8]);
  t1939 = t376*t797;
  t1950 = -1.*t644*t843;
  t1981 = t1939 + t1950;
  t1886 = t579*t1030*t333;
  t1904 = t954*t1124;
  t1906 = t1886 + t1904;
  t2016 = Sin(var1[8]);
  t2102 = Cos(var1[9]);
  t1935 = t1783*t1906;
  t2056 = t1981*t2016;
  t2060 = t1935 + t2056;
  t1777 = Sin(var1[9]);
  t2113 = t1783*t1981;
  t2116 = -1.*t1906*t2016;
  t2120 = t2113 + t2116;
  t2283 = Cos(var1[10]);
  t2066 = -1.*t1777*t2060;
  t2124 = t2102*t2120;
  t2148 = t2066 + t2124;
  t1775 = Sin(var1[10]);
  t2285 = t2102*t2060;
  t2287 = t1777*t2120;
  t2321 = t2285 + t2287;
  t2381 = Cos(var1[11]);
  t2251 = t1775*t2148;
  t2322 = t2283*t2321;
  t2327 = t2251 + t2322;
  t1753 = Sin(var1[11]);
  t2384 = t2283*t2148;
  t2388 = -1.*t1775*t2321;
  t2400 = t2384 + t2388;
  t2515 = Cos(var1[12]);
  t2371 = -1.*t1753*t2327;
  t2407 = t2381*t2400;
  t2495 = t2371 + t2407;
  t1693 = Sin(var1[12]);
  t2541 = t2381*t2327;
  t2556 = t1753*t2400;
  t2563 = t2541 + t2556;
  t1207 = t579*t538;
  t1211 = t564*t584*t601;
  t1214 = t1207 + t1211;
  t1235 = t376*t1214;
  t1238 = t538*t564*t584;
  t1241 = -1.*t579*t601;
  t1242 = t1238 + t1241;
  t1249 = t1242*t843;
  t1278 = t1235 + t1249;
  t2735 = t376*t1242;
  t2748 = -1.*t1214*t843;
  t2769 = t2735 + t2748;
  t2711 = t1030*t333*t564;
  t2717 = t1278*t1124;
  t2721 = t2711 + t2717;
  t2722 = t1783*t2721;
  t2783 = t2769*t2016;
  t2787 = t2722 + t2783;
  t2796 = t1783*t2769;
  t2814 = -1.*t2721*t2016;
  t2835 = t2796 + t2814;
  t2794 = -1.*t1777*t2787;
  t2838 = t2102*t2835;
  t2840 = t2794 + t2838;
  t2843 = t2102*t2787;
  t2847 = t1777*t2835;
  t2854 = t2843 + t2847;
  t2842 = t1775*t2840;
  t2863 = t2283*t2854;
  t2871 = t2842 + t2863;
  t2879 = t2283*t2840;
  t2885 = -1.*t1775*t2854;
  t2890 = t2879 + t2885;
  t2873 = -1.*t1753*t2871;
  t2891 = t2381*t2890;
  t2932 = t2873 + t2891;
  t2943 = t2381*t2871;
  t2948 = t1753*t2890;
  t2952 = t2943 + t2948;
  t1374 = t1030*t376*t601;
  t1417 = t1030*t538*t843;
  t1488 = t1374 + t1417;
  t2995 = t1030*t538*t376;
  t3000 = -1.*t1030*t601*t843;
  t3002 = t2995 + t3000;
  t2976 = -1.*t333*t584;
  t2979 = t1488*t1124;
  t2983 = t2976 + t2979;
  t2994 = t1783*t2983;
  t3009 = t3002*t2016;
  t3011 = t2994 + t3009;
  t3029 = t1783*t3002;
  t3030 = -1.*t2983*t2016;
  t3034 = t3029 + t3030;
  t3028 = -1.*t1777*t3011;
  t3037 = t2102*t3034;
  t3039 = t3028 + t3037;
  t3042 = t2102*t3011;
  t3045 = t1777*t3034;
  t3048 = t3042 + t3045;
  t3041 = t1775*t3039;
  t3049 = t2283*t3048;
  t3055 = t3041 + t3049;
  t3066 = t2283*t3039;
  t3068 = -1.*t1775*t3048;
  t3069 = t3066 + t3068;
  t3065 = -1.*t1753*t3055;
  t3074 = t2381*t3069;
  t3075 = t3065 + t3074;
  t3165 = t2381*t3055;
  t3169 = t1753*t3069;
  t3183 = t3165 + t3169;
  t2509 = t1693*t2495;
  t2601 = t2515*t2563;
  t2610 = t2509 + t2601;
  t2671 = t2515*t2495;
  t2678 = -1.*t1693*t2563;
  t2681 = t2671 + t2678;
  t2938 = t1693*t2932;
  t2953 = t2515*t2952;
  t2956 = t2938 + t2953;
  t2963 = t2515*t2932;
  t2967 = -1.*t1693*t2952;
  t2968 = t2963 + t2967;
  t3077 = t1693*t3075;
  t3190 = t2515*t3183;
  t3199 = t3077 + t3190;
  t3207 = t2515*t3075;
  t3224 = -1.*t1693*t3183;
  t3269 = t3207 + t3224;
  p_output1[0]=t1030*t1124*t579 - 1.*t333*t954;
  p_output1[1]=-1.*t1278*t333 + t1030*t1124*t564;
  p_output1[2]=-1.*t1488*t333 - 1.*t1124*t584;
  p_output1[3]=0.642788*t2610 + 0.766044*t2681;
  p_output1[4]=0.642788*t2956 + 0.766044*t2968;
  p_output1[5]=0.642788*t3199 + 0.766044*t3269;
  p_output1[6]=-0.766044*t2610 + 0.642788*t2681;
  p_output1[7]=-0.766044*t2956 + 0.642788*t2968;
  p_output1[8]=-0.766044*t3199 + 0.642788*t3269;
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

#include "R_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
