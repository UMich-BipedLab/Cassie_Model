/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:56 GMT-04:00
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
  double t757;
  double t921;
  double t706;
  double t792;
  double t939;
  double t1106;
  double t893;
  double t1012;
  double t1042;
  double t701;
  double t1111;
  double t1145;
  double t1164;
  double t1481;
  double t1094;
  double t1293;
  double t1386;
  double t439;
  double t1520;
  double t1587;
  double t1617;
  double t1623;
  double t1658;
  double t1680;
  double t1684;
  double t1734;
  double t1767;
  double t1906;
  double t1410;
  double t1781;
  double t1827;
  double t401;
  double t1944;
  double t1946;
  double t1953;
  double t2016;
  double t1885;
  double t1964;
  double t1984;
  double t355;
  double t2036;
  double t2044;
  double t2073;
  double t2122;
  double t2013;
  double t2082;
  double t2095;
  double t222;
  double t2129;
  double t2130;
  double t2144;
  double t175;
  double t2483;
  double t2484;
  double t2495;
  double t2588;
  double t2594;
  double t2619;
  double t2558;
  double t2624;
  double t2642;
  double t2670;
  double t2684;
  double t2691;
  double t2710;
  double t2716;
  double t2736;
  double t2660;
  double t2762;
  double t2764;
  double t2809;
  double t2812;
  double t2817;
  double t2783;
  double t2834;
  double t2859;
  double t2880;
  double t2884;
  double t2888;
  double t2208;
  double t2877;
  double t2923;
  double t2925;
  double t2979;
  double t3025;
  double t3060;
  double t3182;
  double t3186;
  double t3192;
  double t3197;
  double t3216;
  double t3218;
  double t3221;
  double t3225;
  double t3242;
  double t3196;
  double t3245;
  double t3252;
  double t3259;
  double t3272;
  double t3277;
  double t3258;
  double t3279;
  double t3287;
  double t3329;
  double t3354;
  double t3361;
  double t3320;
  double t3370;
  double t3371;
  double t3411;
  double t3428;
  double t3434;
  double t2115;
  double t2163;
  double t2166;
  double t2302;
  double t2381;
  double t2434;
  double t2950;
  double t3067;
  double t3079;
  double t3100;
  double t3132;
  double t3164;
  double t3407;
  double t3454;
  double t3455;
  double t3478;
  double t3480;
  double t3482;
  t757 = Cos(var1[5]);
  t921 = Sin(var1[3]);
  t706 = Cos(var1[3]);
  t792 = Sin(var1[4]);
  t939 = Sin(var1[5]);
  t1106 = Sin(var1[13]);
  t893 = t706*t757*t792;
  t1012 = t921*t939;
  t1042 = t893 + t1012;
  t701 = Cos(var1[13]);
  t1111 = -1.*t757*t921;
  t1145 = t706*t792*t939;
  t1164 = t1111 + t1145;
  t1481 = Cos(var1[15]);
  t1094 = t701*t1042;
  t1293 = -1.*t1106*t1164;
  t1386 = t1094 + t1293;
  t439 = Sin(var1[15]);
  t1520 = Cos(var1[14]);
  t1587 = Cos(var1[4]);
  t1617 = t1520*t706*t1587;
  t1623 = Sin(var1[14]);
  t1658 = t1106*t1042;
  t1680 = t701*t1164;
  t1684 = t1658 + t1680;
  t1734 = t1623*t1684;
  t1767 = t1617 + t1734;
  t1906 = Cos(var1[16]);
  t1410 = t439*t1386;
  t1781 = t1481*t1767;
  t1827 = t1410 + t1781;
  t401 = Sin(var1[16]);
  t1944 = t1481*t1386;
  t1946 = -1.*t439*t1767;
  t1953 = t1944 + t1946;
  t2016 = Cos(var1[17]);
  t1885 = -1.*t401*t1827;
  t1964 = t1906*t1953;
  t1984 = t1885 + t1964;
  t355 = Sin(var1[17]);
  t2036 = t1906*t1827;
  t2044 = t401*t1953;
  t2073 = t2036 + t2044;
  t2122 = Cos(var1[18]);
  t2013 = t355*t1984;
  t2082 = t2016*t2073;
  t2095 = t2013 + t2082;
  t222 = Sin(var1[18]);
  t2129 = t2016*t1984;
  t2130 = -1.*t355*t2073;
  t2144 = t2129 + t2130;
  t175 = Cos(var1[19]);
  t2483 = t757*t921*t792;
  t2484 = -1.*t706*t939;
  t2495 = t2483 + t2484;
  t2588 = t706*t757;
  t2594 = t921*t792*t939;
  t2619 = t2588 + t2594;
  t2558 = t701*t2495;
  t2624 = -1.*t1106*t2619;
  t2642 = t2558 + t2624;
  t2670 = t1520*t1587*t921;
  t2684 = t1106*t2495;
  t2691 = t701*t2619;
  t2710 = t2684 + t2691;
  t2716 = t1623*t2710;
  t2736 = t2670 + t2716;
  t2660 = t439*t2642;
  t2762 = t1481*t2736;
  t2764 = t2660 + t2762;
  t2809 = t1481*t2642;
  t2812 = -1.*t439*t2736;
  t2817 = t2809 + t2812;
  t2783 = -1.*t401*t2764;
  t2834 = t1906*t2817;
  t2859 = t2783 + t2834;
  t2880 = t1906*t2764;
  t2884 = t401*t2817;
  t2888 = t2880 + t2884;
  t2208 = Sin(var1[19]);
  t2877 = t355*t2859;
  t2923 = t2016*t2888;
  t2925 = t2877 + t2923;
  t2979 = t2016*t2859;
  t3025 = -1.*t355*t2888;
  t3060 = t2979 + t3025;
  t3182 = t701*t1587*t757;
  t3186 = -1.*t1587*t1106*t939;
  t3192 = t3182 + t3186;
  t3197 = -1.*t1520*t792;
  t3216 = t1587*t757*t1106;
  t3218 = t701*t1587*t939;
  t3221 = t3216 + t3218;
  t3225 = t1623*t3221;
  t3242 = t3197 + t3225;
  t3196 = t439*t3192;
  t3245 = t1481*t3242;
  t3252 = t3196 + t3245;
  t3259 = t1481*t3192;
  t3272 = -1.*t439*t3242;
  t3277 = t3259 + t3272;
  t3258 = -1.*t401*t3252;
  t3279 = t1906*t3277;
  t3287 = t3258 + t3279;
  t3329 = t1906*t3252;
  t3354 = t401*t3277;
  t3361 = t3329 + t3354;
  t3320 = t355*t3287;
  t3370 = t2016*t3361;
  t3371 = t3320 + t3370;
  t3411 = t2016*t3287;
  t3428 = -1.*t355*t3361;
  t3434 = t3411 + t3428;
  t2115 = -1.*t222*t2095;
  t2163 = t2122*t2144;
  t2166 = t2115 + t2163;
  t2302 = t2122*t2095;
  t2381 = t222*t2144;
  t2434 = t2302 + t2381;
  t2950 = -1.*t222*t2925;
  t3067 = t2122*t3060;
  t3079 = t2950 + t3067;
  t3100 = t2122*t2925;
  t3132 = t222*t3060;
  t3164 = t3100 + t3132;
  t3407 = -1.*t222*t3371;
  t3454 = t2122*t3434;
  t3455 = t3407 + t3454;
  t3478 = t2122*t3371;
  t3480 = t222*t3434;
  t3482 = t3478 + t3480;
  p_output1[0]=-1.*t175*t2166 + t2208*t2434;
  p_output1[1]=-1.*t175*t3079 + t2208*t3164;
  p_output1[2]=-1.*t175*t3455 + t2208*t3482;
  p_output1[3]=t2166*t2208 + t175*t2434;
  p_output1[4]=t2208*t3079 + t175*t3164;
  p_output1[5]=t2208*t3455 + t175*t3482;
  p_output1[6]=-1.*t1520*t1684 + t1587*t1623*t706;
  p_output1[7]=-1.*t1520*t2710 + t1587*t1623*t921;
  p_output1[8]=-1.*t1520*t3221 - 1.*t1623*t792;
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

#include "R_toe_joint_right_mex.hh"

namespace SymExpression
{

void R_toe_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
