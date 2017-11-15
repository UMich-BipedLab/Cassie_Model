/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:17 GMT-05:00
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
  double t15;
  double t26;
  double t240;
  double t153;
  double t369;
  double t383;
  double t352;
  double t448;
  double t449;
  double t460;
  double t381;
  double t427;
  double t428;
  double t473;
  double t325;
  double t493;
  double t498;
  double t502;
  double t431;
  double t480;
  double t481;
  double t504;
  double t275;
  double t566;
  double t568;
  double t593;
  double t489;
  double t511;
  double t515;
  double t608;
  double t264;
  double t667;
  double t668;
  double t684;
  double t554;
  double t646;
  double t661;
  double t722;
  double t1173;
  double t1278;
  double t1285;
  double t1054;
  double t1067;
  double t1132;
  double t1432;
  double t1437;
  double t1440;
  double t1170;
  double t1385;
  double t1404;
  double t1509;
  double t1529;
  double t1624;
  double t1411;
  double t1451;
  double t1458;
  double t1766;
  double t1769;
  double t1773;
  double t1499;
  double t1627;
  double t1696;
  double t2012;
  double t2038;
  double t2061;
  double t1947;
  double t1958;
  double t1972;
  double t2171;
  double t2175;
  double t2176;
  double t2011;
  double t2106;
  double t2111;
  double t2233;
  double t2234;
  double t2235;
  double t2154;
  double t2191;
  double t2202;
  double t666;
  double t746;
  double t748;
  double t863;
  double t875;
  double t890;
  double t1699;
  double t1811;
  double t1871;
  double t1900;
  double t1902;
  double t1929;
  double t2221;
  double t2241;
  double t2254;
  double t2281;
  double t2292;
  double t2316;
  double t2584;
  double t2604;
  double t2707;
  double t2708;
  double t2873;
  double t2902;
  double t3039;
  double t3062;
  double t3145;
  double t3174;
  double t2558;
  double t2561;
  double t2564;
  double t2567;
  double t2569;
  double t2605;
  double t2609;
  double t2627;
  double t2665;
  double t2668;
  double t2689;
  double t2712;
  double t2713;
  double t2722;
  double t2730;
  double t2790;
  double t2827;
  double t2914;
  double t2923;
  double t2931;
  double t2993;
  double t3010;
  double t3014;
  double t3080;
  double t3087;
  double t3093;
  double t3106;
  double t3107;
  double t3121;
  double t3202;
  double t3214;
  double t3234;
  double t3295;
  double t3305;
  double t3311;
  t15 = Cos(var1[8]);
  t26 = Sin(var1[7]);
  t240 = Sin(var1[8]);
  t153 = Cos(var1[7]);
  t369 = Cos(var1[9]);
  t383 = Sin(var1[9]);
  t352 = Cos(var1[10]);
  t448 = t153*t369;
  t449 = -1.*t26*t240*t383;
  t460 = t448 + t449;
  t381 = t369*t26*t240;
  t427 = t153*t383;
  t428 = t381 + t427;
  t473 = Sin(var1[10]);
  t325 = Cos(var1[11]);
  t493 = t352*t460;
  t498 = -1.*t428*t473;
  t502 = t493 + t498;
  t431 = t352*t428;
  t480 = t460*t473;
  t481 = t431 + t480;
  t504 = Sin(var1[11]);
  t275 = Cos(var1[12]);
  t566 = t325*t502;
  t568 = -1.*t481*t504;
  t593 = t566 + t568;
  t489 = t325*t481;
  t511 = t502*t504;
  t515 = t489 + t511;
  t608 = Sin(var1[12]);
  t264 = Cos(var1[13]);
  t667 = t275*t593;
  t668 = -1.*t515*t608;
  t684 = t667 + t668;
  t554 = t275*t515;
  t646 = t593*t608;
  t661 = t554 + t646;
  t722 = Sin(var1[13]);
  t1173 = -1.*t369*t26;
  t1278 = -1.*t153*t240*t383;
  t1285 = t1173 + t1278;
  t1054 = t153*t369*t240;
  t1067 = -1.*t26*t383;
  t1132 = t1054 + t1067;
  t1432 = t352*t1285;
  t1437 = -1.*t1132*t473;
  t1440 = t1432 + t1437;
  t1170 = t352*t1132;
  t1385 = t1285*t473;
  t1404 = t1170 + t1385;
  t1509 = t325*t1440;
  t1529 = -1.*t1404*t504;
  t1624 = t1509 + t1529;
  t1411 = t325*t1404;
  t1451 = t1440*t504;
  t1458 = t1411 + t1451;
  t1766 = t275*t1624;
  t1769 = -1.*t1458*t608;
  t1773 = t1766 + t1769;
  t1499 = t275*t1458;
  t1627 = t1624*t608;
  t1696 = t1499 + t1627;
  t2012 = -1.*t15*t352*t383;
  t2038 = -1.*t15*t369*t473;
  t2061 = t2012 + t2038;
  t1947 = t15*t369*t352;
  t1958 = -1.*t15*t383*t473;
  t1972 = t1947 + t1958;
  t2171 = t325*t2061;
  t2175 = -1.*t1972*t504;
  t2176 = t2171 + t2175;
  t2011 = t325*t1972;
  t2106 = t2061*t504;
  t2111 = t2011 + t2106;
  t2233 = t275*t2176;
  t2234 = -1.*t2111*t608;
  t2235 = t2233 + t2234;
  t2154 = t275*t2111;
  t2191 = t2176*t608;
  t2202 = t2154 + t2191;
  t666 = t264*t661;
  t746 = t684*t722;
  t748 = t666 + t746;
  t863 = t264*t684;
  t875 = -1.*t661*t722;
  t890 = t863 + t875;
  t1699 = t264*t1696;
  t1811 = t1773*t722;
  t1871 = t1699 + t1811;
  t1900 = t264*t1773;
  t1902 = -1.*t1696*t722;
  t1929 = t1900 + t1902;
  t2221 = t264*t2202;
  t2241 = t2235*t722;
  t2254 = t2221 + t2241;
  t2281 = t264*t2235;
  t2292 = -1.*t2202*t722;
  t2316 = t2281 + t2292;
  t2584 = -1.*t369;
  t2604 = 1. + t2584;
  t2707 = -1.*t352;
  t2708 = 1. + t2707;
  t2873 = -1.*t325;
  t2902 = 1. + t2873;
  t3039 = -1.*t275;
  t3062 = 1. + t3039;
  t3145 = -1.*t264;
  t3174 = 1. + t3145;
  t2558 = -1.*t15;
  t2561 = 1. + t2558;
  t2564 = -0.135*t2561;
  t2567 = 0.049*t240;
  t2569 = 0. + t2564 + t2567;
  t2605 = -0.049*t2604;
  t2609 = -0.09*t383;
  t2627 = 0. + t2605 + t2609;
  t2665 = -0.09*t2604;
  t2668 = 0.049*t383;
  t2689 = 0. + t2665 + t2668;
  t2712 = -0.049*t2708;
  t2713 = -0.21*t473;
  t2722 = 0. + t2712 + t2713;
  t2730 = -0.21*t2708;
  t2790 = 0.049*t473;
  t2827 = 0. + t2730 + t2790;
  t2914 = -0.0016*t2902;
  t2923 = -0.2707*t504;
  t2931 = 0. + t2914 + t2923;
  t2993 = -0.2707*t2902;
  t3010 = 0.0016*t504;
  t3014 = 0. + t2993 + t3010;
  t3080 = 0.0184*t3062;
  t3087 = -0.7055*t608;
  t3093 = 0. + t3080 + t3087;
  t3106 = -0.7055*t3062;
  t3107 = -0.0184*t608;
  t3121 = 0. + t3106 + t3107;
  t3202 = -0.0216*t3174;
  t3214 = -1.1135*t722;
  t3234 = 0. + t3202 + t3214;
  t3295 = -1.1135*t3174;
  t3305 = 0.0216*t722;
  t3311 = 0. + t3295 + t3305;
  p_output1[0]=0. + t15*t26;
  p_output1[1]=0. - 1.*t15*t153;
  p_output1[2]=0. + t240;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t748 - 0.766044*t890;
  p_output1[5]=0. + 0.642788*t1871 + 0.766044*t1929;
  p_output1[6]=0. + 0.642788*t2254 + 0.766044*t2316;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t748 - 0.642788*t890;
  p_output1[9]=0. - 0.766044*t1871 + 0.642788*t1929;
  p_output1[10]=0. - 0.766044*t2254 + 0.642788*t2316;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.135*t26 + 0.1305*t15*t26 - 1.*t2569*t26 - 1.*t240*t26*t2627 - 1.*t153*t2689 - 1.*t2722*t428 - 1.*t2827*t460 - 1.*t2931*t481 - 1.*t3014*t502 - 1.*t3093*t515 - 1.*t3121*t593 - 1.*t3234*t661 - 1.*t3311*t684 - 0.0306*t748 + 1.1312*t890;
  p_output1[13]=-0.0302 - 0.135*(1. - 1.*t153) - 0.1305*t15*t153 + 0.0306*t1871 - 1.1312*t1929 + t153*t2569 + t153*t240*t2627 - 1.*t26*t2689 + t1132*t2722 + t1285*t2827 + t1404*t2931 + t1440*t3014 + t1458*t3093 + t1624*t3121 + t1696*t3234 + t1773*t3311;
  p_output1[14]=-0.047 + 0.0306*t2254 - 1.1312*t2316 - 0.004500000000000004*t240 - 0.049*t2561 + t15*t2627 + t1972*t2931 + t2061*t3014 + t2111*t3093 + t2176*t3121 + t2202*t3234 + t2235*t3311 + t15*t2722*t369 - 1.*t15*t2827*t383;
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

#include "H_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
