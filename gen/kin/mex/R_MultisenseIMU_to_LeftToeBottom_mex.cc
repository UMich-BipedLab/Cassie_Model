/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:22 GMT-05:00
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
  double t187;
  double t233;
  double t745;
  double t476;
  double t1365;
  double t1493;
  double t1794;
  double t1412;
  double t1497;
  double t1574;
  double t1267;
  double t1806;
  double t1836;
  double t1877;
  double t2002;
  double t1793;
  double t1883;
  double t1898;
  double t1103;
  double t2046;
  double t2058;
  double t2065;
  double t2081;
  double t1934;
  double t2070;
  double t2072;
  double t961;
  double t2096;
  double t2119;
  double t2134;
  double t2298;
  double t2073;
  double t2186;
  double t2188;
  double t820;
  double t2329;
  double t2339;
  double t2444;
  double t2563;
  double t2655;
  double t2659;
  double t2673;
  double t2675;
  double t2784;
  double t2667;
  double t2795;
  double t2798;
  double t2819;
  double t2883;
  double t2967;
  double t2818;
  double t2973;
  double t3007;
  double t3042;
  double t3060;
  double t3070;
  double t3041;
  double t3076;
  double t3097;
  double t3171;
  double t3207;
  double t3284;
  double t3452;
  double t3455;
  double t3456;
  double t3480;
  double t3494;
  double t3502;
  double t3463;
  double t3519;
  double t3607;
  double t3633;
  double t3645;
  double t3667;
  double t3632;
  double t3713;
  double t3756;
  double t3766;
  double t3784;
  double t3787;
  double t2255;
  double t2462;
  double t2463;
  double t2485;
  double t2507;
  double t2523;
  double t3149;
  double t3314;
  double t3350;
  double t3374;
  double t3400;
  double t3405;
  double t3762;
  double t3790;
  double t3810;
  double t3824;
  double t3881;
  double t3903;
  t187 = Cos(var1[1]);
  t233 = Sin(var1[0]);
  t745 = Sin(var1[1]);
  t476 = Cos(var1[0]);
  t1365 = Cos(var1[2]);
  t1493 = Sin(var1[2]);
  t1794 = Cos(var1[3]);
  t1412 = t1365*t233*t745;
  t1497 = t476*t1493;
  t1574 = t1412 + t1497;
  t1267 = Sin(var1[3]);
  t1806 = t476*t1365;
  t1836 = -1.*t233*t745*t1493;
  t1877 = t1806 + t1836;
  t2002 = Cos(var1[4]);
  t1793 = -1.*t1267*t1574;
  t1883 = t1794*t1877;
  t1898 = t1793 + t1883;
  t1103 = Sin(var1[4]);
  t2046 = t1794*t1574;
  t2058 = t1267*t1877;
  t2065 = t2046 + t2058;
  t2081 = Cos(var1[5]);
  t1934 = t1103*t1898;
  t2070 = t2002*t2065;
  t2072 = t1934 + t2070;
  t961 = Sin(var1[5]);
  t2096 = t2002*t1898;
  t2119 = -1.*t1103*t2065;
  t2134 = t2096 + t2119;
  t2298 = Cos(var1[6]);
  t2073 = -1.*t961*t2072;
  t2186 = t2081*t2134;
  t2188 = t2073 + t2186;
  t820 = Sin(var1[6]);
  t2329 = t2081*t2072;
  t2339 = t961*t2134;
  t2444 = t2329 + t2339;
  t2563 = t476*t1365*t745;
  t2655 = -1.*t233*t1493;
  t2659 = t2563 + t2655;
  t2673 = -1.*t1365*t233;
  t2675 = -1.*t476*t745*t1493;
  t2784 = t2673 + t2675;
  t2667 = -1.*t1267*t2659;
  t2795 = t1794*t2784;
  t2798 = t2667 + t2795;
  t2819 = t1794*t2659;
  t2883 = t1267*t2784;
  t2967 = t2819 + t2883;
  t2818 = t1103*t2798;
  t2973 = t2002*t2967;
  t3007 = t2818 + t2973;
  t3042 = t2002*t2798;
  t3060 = -1.*t1103*t2967;
  t3070 = t3042 + t3060;
  t3041 = -1.*t961*t3007;
  t3076 = t2081*t3070;
  t3097 = t3041 + t3076;
  t3171 = t2081*t3007;
  t3207 = t961*t3070;
  t3284 = t3171 + t3207;
  t3452 = -1.*t187*t1365*t1267;
  t3455 = -1.*t1794*t187*t1493;
  t3456 = t3452 + t3455;
  t3480 = t1794*t187*t1365;
  t3494 = -1.*t187*t1267*t1493;
  t3502 = t3480 + t3494;
  t3463 = t1103*t3456;
  t3519 = t2002*t3502;
  t3607 = t3463 + t3519;
  t3633 = t2002*t3456;
  t3645 = -1.*t1103*t3502;
  t3667 = t3633 + t3645;
  t3632 = -1.*t961*t3607;
  t3713 = t2081*t3667;
  t3756 = t3632 + t3713;
  t3766 = t2081*t3607;
  t3784 = t961*t3667;
  t3787 = t3766 + t3784;
  t2255 = t820*t2188;
  t2462 = t2298*t2444;
  t2463 = t2255 + t2462;
  t2485 = t2298*t2188;
  t2507 = -1.*t820*t2444;
  t2523 = t2485 + t2507;
  t3149 = t820*t3097;
  t3314 = t2298*t3284;
  t3350 = t3149 + t3314;
  t3374 = t2298*t3097;
  t3400 = -1.*t820*t3284;
  t3405 = t3374 + t3400;
  t3762 = t820*t3756;
  t3790 = t2298*t3787;
  t3810 = t3762 + t3790;
  t3824 = t2298*t3756;
  t3881 = -1.*t820*t3787;
  t3903 = t3824 + t3881;
  p_output1[0]=0. + t187*t233;
  p_output1[1]=0. - 1.*t187*t476;
  p_output1[2]=0. + t745;
  p_output1[3]=0. - 0.642788*t2463 - 0.766044*t2523;
  p_output1[4]=0. + 0.642788*t3350 + 0.766044*t3405;
  p_output1[5]=0. + 0.642788*t3810 + 0.766044*t3903;
  p_output1[6]=0. + 0.766044*t2463 - 0.642788*t2523;
  p_output1[7]=0. - 0.766044*t3350 + 0.642788*t3405;
  p_output1[8]=0. - 0.766044*t3810 + 0.642788*t3903;
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
