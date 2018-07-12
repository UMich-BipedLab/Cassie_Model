/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:10 GMT-04:00
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
  double t127;
  double t90;
  double t132;
  double t95;
  double t143;
  double t9;
  double t15;
  double t407;
  double t584;
  double t598;
  double t125;
  double t168;
  double t218;
  double t234;
  double t265;
  double t306;
  double t356;
  double t463;
  double t481;
  double t907;
  double t943;
  double t1010;
  double t1012;
  double t910;
  double t924;
  double t934;
  double t1015;
  double t1058;
  double t935;
  double t1029;
  double t1050;
  double t875;
  double t1066;
  double t1070;
  double t1094;
  double t1176;
  double t1051;
  double t1107;
  double t1129;
  double t835;
  double t1197;
  double t1210;
  double t1212;
  double t1300;
  double t1134;
  double t1217;
  double t1276;
  double t825;
  double t1312;
  double t1319;
  double t1321;
  double t1389;
  double t1291;
  double t1333;
  double t1372;
  double t820;
  double t1398;
  double t1463;
  double t1515;
  double t610;
  double t645;
  double t656;
  double t658;
  double t665;
  double t678;
  double t690;
  double t696;
  double t708;
  double t1732;
  double t1752;
  double t1754;
  double t1705;
  double t1714;
  double t1726;
  double t1729;
  double t1776;
  double t1781;
  double t1827;
  double t1837;
  double t1869;
  double t1783;
  double t1876;
  double t1884;
  double t1928;
  double t1953;
  double t1965;
  double t1892;
  double t1978;
  double t1994;
  double t2008;
  double t2013;
  double t2025;
  double t1998;
  double t2036;
  double t2039;
  double t2048;
  double t2055;
  double t2058;
  double t740;
  double t742;
  double t749;
  double t2194;
  double t2198;
  double t2207;
  double t2127;
  double t2144;
  double t2168;
  double t2175;
  double t2215;
  double t2216;
  double t2246;
  double t2292;
  double t2302;
  double t2230;
  double t2362;
  double t2374;
  double t2436;
  double t2483;
  double t2495;
  double t2414;
  double t2510;
  double t2537;
  double t2558;
  double t2580;
  double t2592;
  double t2548;
  double t2618;
  double t2619;
  double t2632;
  double t2642;
  double t2646;
  double t1375;
  double t1542;
  double t1560;
  double t1569;
  double t1622;
  double t1632;
  double t2046;
  double t2062;
  double t2064;
  double t2071;
  double t2094;
  double t2104;
  double t2624;
  double t2653;
  double t2663;
  double t2684;
  double t2697;
  double t2707;
  double t2889;
  double t2895;
  double t3025;
  double t3050;
  double t3154;
  double t3159;
  double t3222;
  double t3225;
  double t3320;
  double t3328;
  double t3407;
  double t3417;
  double t2834;
  double t2847;
  double t2849;
  double t2854;
  double t2861;
  double t2877;
  double t2904;
  double t2913;
  double t2916;
  double t2925;
  double t2928;
  double t2934;
  double t3059;
  double t3067;
  double t3112;
  double t3117;
  double t3125;
  double t3128;
  double t3182;
  double t3183;
  double t3186;
  double t3196;
  double t3199;
  double t3200;
  double t3229;
  double t3241;
  double t3242;
  double t3277;
  double t3279;
  double t3301;
  double t3329;
  double t3338;
  double t3352;
  double t3359;
  double t3371;
  double t3388;
  double t3423;
  double t3444;
  double t3454;
  double t3477;
  double t3495;
  double t3500;
  t127 = Cos(var1[3]);
  t90 = Cos(var1[5]);
  t132 = Sin(var1[4]);
  t95 = Sin(var1[3]);
  t143 = Sin(var1[5]);
  t9 = Cos(var1[7]);
  t15 = Cos(var1[6]);
  t407 = Sin(var1[6]);
  t584 = Cos(var1[4]);
  t598 = Sin(var1[7]);
  t125 = -1.*t90*t95;
  t168 = t127*t132*t143;
  t218 = t125 + t168;
  t234 = t15*t218;
  t265 = t127*t90*t132;
  t306 = t95*t143;
  t356 = t265 + t306;
  t463 = t356*t407;
  t481 = t234 + t463;
  t907 = Cos(var1[8]);
  t943 = t15*t356;
  t1010 = -1.*t218*t407;
  t1012 = t943 + t1010;
  t910 = t127*t584*t9;
  t924 = t481*t598;
  t934 = t910 + t924;
  t1015 = Sin(var1[8]);
  t1058 = Cos(var1[9]);
  t935 = t907*t934;
  t1029 = t1012*t1015;
  t1050 = t935 + t1029;
  t875 = Sin(var1[9]);
  t1066 = t907*t1012;
  t1070 = -1.*t934*t1015;
  t1094 = t1066 + t1070;
  t1176 = Cos(var1[10]);
  t1051 = -1.*t875*t1050;
  t1107 = t1058*t1094;
  t1129 = t1051 + t1107;
  t835 = Sin(var1[10]);
  t1197 = t1058*t1050;
  t1210 = t875*t1094;
  t1212 = t1197 + t1210;
  t1300 = Cos(var1[11]);
  t1134 = t835*t1129;
  t1217 = t1176*t1212;
  t1276 = t1134 + t1217;
  t825 = Sin(var1[11]);
  t1312 = t1176*t1129;
  t1319 = -1.*t835*t1212;
  t1321 = t1312 + t1319;
  t1389 = Cos(var1[12]);
  t1291 = -1.*t825*t1276;
  t1333 = t1300*t1321;
  t1372 = t1291 + t1333;
  t820 = Sin(var1[12]);
  t1398 = t1300*t1276;
  t1463 = t825*t1321;
  t1515 = t1398 + t1463;
  t610 = t127*t90;
  t645 = t95*t132*t143;
  t656 = t610 + t645;
  t658 = t15*t656;
  t665 = t90*t95*t132;
  t678 = -1.*t127*t143;
  t690 = t665 + t678;
  t696 = t690*t407;
  t708 = t658 + t696;
  t1732 = t15*t690;
  t1752 = -1.*t656*t407;
  t1754 = t1732 + t1752;
  t1705 = t584*t9*t95;
  t1714 = t708*t598;
  t1726 = t1705 + t1714;
  t1729 = t907*t1726;
  t1776 = t1754*t1015;
  t1781 = t1729 + t1776;
  t1827 = t907*t1754;
  t1837 = -1.*t1726*t1015;
  t1869 = t1827 + t1837;
  t1783 = -1.*t875*t1781;
  t1876 = t1058*t1869;
  t1884 = t1783 + t1876;
  t1928 = t1058*t1781;
  t1953 = t875*t1869;
  t1965 = t1928 + t1953;
  t1892 = t835*t1884;
  t1978 = t1176*t1965;
  t1994 = t1892 + t1978;
  t2008 = t1176*t1884;
  t2013 = -1.*t835*t1965;
  t2025 = t2008 + t2013;
  t1998 = -1.*t825*t1994;
  t2036 = t1300*t2025;
  t2039 = t1998 + t2036;
  t2048 = t1300*t1994;
  t2055 = t825*t2025;
  t2058 = t2048 + t2055;
  t740 = t584*t15*t143;
  t742 = t584*t90*t407;
  t749 = t740 + t742;
  t2194 = t584*t90*t15;
  t2198 = -1.*t584*t143*t407;
  t2207 = t2194 + t2198;
  t2127 = -1.*t9*t132;
  t2144 = t749*t598;
  t2168 = t2127 + t2144;
  t2175 = t907*t2168;
  t2215 = t2207*t1015;
  t2216 = t2175 + t2215;
  t2246 = t907*t2207;
  t2292 = -1.*t2168*t1015;
  t2302 = t2246 + t2292;
  t2230 = -1.*t875*t2216;
  t2362 = t1058*t2302;
  t2374 = t2230 + t2362;
  t2436 = t1058*t2216;
  t2483 = t875*t2302;
  t2495 = t2436 + t2483;
  t2414 = t835*t2374;
  t2510 = t1176*t2495;
  t2537 = t2414 + t2510;
  t2558 = t1176*t2374;
  t2580 = -1.*t835*t2495;
  t2592 = t2558 + t2580;
  t2548 = -1.*t825*t2537;
  t2618 = t1300*t2592;
  t2619 = t2548 + t2618;
  t2632 = t1300*t2537;
  t2642 = t825*t2592;
  t2646 = t2632 + t2642;
  t1375 = t820*t1372;
  t1542 = t1389*t1515;
  t1560 = t1375 + t1542;
  t1569 = t1389*t1372;
  t1622 = -1.*t820*t1515;
  t1632 = t1569 + t1622;
  t2046 = t820*t2039;
  t2062 = t1389*t2058;
  t2064 = t2046 + t2062;
  t2071 = t1389*t2039;
  t2094 = -1.*t820*t2058;
  t2104 = t2071 + t2094;
  t2624 = t820*t2619;
  t2653 = t1389*t2646;
  t2663 = t2624 + t2653;
  t2684 = t1389*t2619;
  t2697 = -1.*t820*t2646;
  t2707 = t2684 + t2697;
  t2889 = -1.*t9;
  t2895 = 1. + t2889;
  t3025 = -1.*t907;
  t3050 = 1. + t3025;
  t3154 = -1.*t1058;
  t3159 = 1. + t3154;
  t3222 = -1.*t1176;
  t3225 = 1. + t3222;
  t3320 = -1.*t1300;
  t3328 = 1. + t3320;
  t3407 = -1.*t1389;
  t3417 = 1. + t3407;
  t2834 = -1.*t15;
  t2847 = 1. + t2834;
  t2849 = 0.135*t2847;
  t2854 = 0. + t2849;
  t2861 = -0.135*t407;
  t2877 = 0. + t2861;
  t2904 = 0.135*t2895;
  t2913 = 0.049*t598;
  t2916 = 0. + t2904 + t2913;
  t2925 = -0.049*t2895;
  t2928 = 0.135*t598;
  t2934 = 0. + t2925 + t2928;
  t3059 = -0.049*t3050;
  t3067 = -0.09*t1015;
  t3112 = 0. + t3059 + t3067;
  t3117 = -0.09*t3050;
  t3125 = 0.049*t1015;
  t3128 = 0. + t3117 + t3125;
  t3182 = -0.049*t3159;
  t3183 = -0.21*t875;
  t3186 = 0. + t3182 + t3183;
  t3196 = -0.21*t3159;
  t3199 = 0.049*t875;
  t3200 = 0. + t3196 + t3199;
  t3229 = -0.2707*t3225;
  t3241 = 0.0016*t835;
  t3242 = 0. + t3229 + t3241;
  t3277 = -0.0016*t3225;
  t3279 = -0.2707*t835;
  t3301 = 0. + t3277 + t3279;
  t3329 = 0.0184*t3328;
  t3338 = -0.7055*t825;
  t3352 = 0. + t3329 + t3338;
  t3359 = -0.7055*t3328;
  t3371 = -0.0184*t825;
  t3388 = 0. + t3359 + t3371;
  t3423 = -1.1135*t3417;
  t3444 = 0.0216*t820;
  t3454 = 0. + t3423 + t3444;
  t3477 = -0.0216*t3417;
  t3495 = -1.1135*t820;
  t3500 = 0. + t3477 + t3495;
  p_output1[0]=t127*t584*t598 - 1.*t481*t9;
  p_output1[1]=-1.*t708*t9 + t584*t598*t95;
  p_output1[2]=-1.*t132*t598 - 1.*t749*t9;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1560 + 0.766044*t1632;
  p_output1[5]=0.642788*t2064 + 0.766044*t2104;
  p_output1[6]=0.642788*t2663 + 0.766044*t2707;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1560 + 0.642788*t1632;
  p_output1[9]=-0.766044*t2064 + 0.642788*t2104;
  p_output1[10]=-0.766044*t2663 + 0.642788*t2707;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t1560 - 1.200144*t1632 + t218*t2854 + t1012*t3128 + t1050*t3186 + t1094*t3200 + t1129*t3242 + t1212*t3301 + t1276*t3352 + t1321*t3388 + t1372*t3454 + t1515*t3500 + t2877*t356 + t2916*t481 + t127*t2934*t584 + 0.1305*(-1.*t127*t584*t598 + t481*t9) + t3112*t934 + var1[0];
  p_output1[13]=0. - 0.027251*t2064 - 1.200144*t2104 + t1726*t3112 + t1754*t3128 + t1781*t3186 + t1869*t3200 + t1884*t3242 + t1965*t3301 + t1994*t3352 + t2025*t3388 + t2039*t3454 + t2058*t3500 + t2854*t656 + t2877*t690 + t2916*t708 + t2934*t584*t95 + 0.1305*(t708*t9 - 1.*t584*t598*t95) + var1[1];
  p_output1[14]=0. - 0.027251*t2663 - 1.200144*t2707 - 1.*t132*t2934 + t2168*t3112 + t2207*t3128 + t2216*t3186 + t2302*t3200 + t2374*t3242 + t2495*t3301 + t2537*t3352 + t2592*t3388 + t2619*t3454 + t2646*t3500 + t143*t2854*t584 + t2916*t749 + 0.1305*(t132*t598 + t749*t9) + t2877*t584*t90 + var1[2];
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

#include "H_LeftToeBack_mex.hh"

namespace SymExpression
{

void H_LeftToeBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
