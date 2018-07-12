/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:14 GMT-04:00
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
  double t11;
  double t197;
  double t221;
  double t217;
  double t240;
  double t72;
  double t122;
  double t158;
  double t183;
  double t281;
  double t219;
  double t243;
  double t254;
  double t282;
  double t331;
  double t334;
  double t280;
  double t373;
  double t397;
  double t1053;
  double t1016;
  double t1023;
  double t1045;
  double t997;
  double t1056;
  double t1090;
  double t1096;
  double t1132;
  double t1048;
  double t1101;
  double t1119;
  double t989;
  double t1152;
  double t1172;
  double t1177;
  double t1272;
  double t1131;
  double t1178;
  double t1237;
  double t960;
  double t1275;
  double t1299;
  double t1329;
  double t1409;
  double t1260;
  double t1334;
  double t1369;
  double t955;
  double t1421;
  double t1434;
  double t1443;
  double t1522;
  double t1377;
  double t1450;
  double t1517;
  double t954;
  double t1525;
  double t1526;
  double t1533;
  double t556;
  double t557;
  double t568;
  double t649;
  double t697;
  double t705;
  double t585;
  double t754;
  double t824;
  double t1651;
  double t1656;
  double t1696;
  double t1727;
  double t1728;
  double t1731;
  double t1723;
  double t1753;
  double t1767;
  double t1804;
  double t1808;
  double t1815;
  double t1788;
  double t1816;
  double t1823;
  double t1866;
  double t1874;
  double t1878;
  double t1840;
  double t1910;
  double t1926;
  double t2015;
  double t2017;
  double t2030;
  double t1981;
  double t2033;
  double t2047;
  double t2060;
  double t2070;
  double t2087;
  double t888;
  double t906;
  double t928;
  double t2186;
  double t2189;
  double t2190;
  double t2214;
  double t2226;
  double t2234;
  double t2211;
  double t2244;
  double t2248;
  double t2319;
  double t2326;
  double t2352;
  double t2295;
  double t2353;
  double t2354;
  double t2357;
  double t2376;
  double t2386;
  double t2355;
  double t2387;
  double t2404;
  double t2411;
  double t2418;
  double t2424;
  double t2409;
  double t2426;
  double t2441;
  double t2461;
  double t2471;
  double t2488;
  double t1521;
  double t1546;
  double t1550;
  double t1588;
  double t1596;
  double t1602;
  double t2051;
  double t2105;
  double t2113;
  double t2119;
  double t2142;
  double t2150;
  double t2442;
  double t2491;
  double t2533;
  double t2555;
  double t2559;
  double t2566;
  double t2764;
  double t2774;
  double t2907;
  double t2909;
  double t3063;
  double t3079;
  double t3190;
  double t3226;
  double t3283;
  double t3286;
  double t3382;
  double t3385;
  double t2779;
  double t2782;
  double t2789;
  double t2793;
  double t2806;
  double t2822;
  double t2827;
  double t2842;
  double t2850;
  double t2872;
  double t2876;
  double t2896;
  double t2914;
  double t2925;
  double t2952;
  double t3030;
  double t3048;
  double t3054;
  double t3124;
  double t3151;
  double t3155;
  double t3166;
  double t3167;
  double t3179;
  double t3233;
  double t3234;
  double t3243;
  double t3260;
  double t3267;
  double t3270;
  double t3300;
  double t3312;
  double t3324;
  double t3344;
  double t3358;
  double t3377;
  double t3395;
  double t3398;
  double t3408;
  double t3418;
  double t3435;
  double t3452;
  t11 = Cos(var1[3]);
  t197 = Cos(var1[5]);
  t221 = Sin(var1[3]);
  t217 = Sin(var1[4]);
  t240 = Sin(var1[5]);
  t72 = Cos(var1[4]);
  t122 = Sin(var1[14]);
  t158 = Cos(var1[14]);
  t183 = Sin(var1[13]);
  t281 = Cos(var1[13]);
  t219 = t11*t197*t217;
  t243 = t221*t240;
  t254 = t219 + t243;
  t282 = -1.*t197*t221;
  t331 = t11*t217*t240;
  t334 = t282 + t331;
  t280 = t183*t254;
  t373 = t281*t334;
  t397 = t280 + t373;
  t1053 = Cos(var1[15]);
  t1016 = t281*t254;
  t1023 = -1.*t183*t334;
  t1045 = t1016 + t1023;
  t997 = Sin(var1[15]);
  t1056 = t158*t11*t72;
  t1090 = t122*t397;
  t1096 = t1056 + t1090;
  t1132 = Cos(var1[16]);
  t1048 = t997*t1045;
  t1101 = t1053*t1096;
  t1119 = t1048 + t1101;
  t989 = Sin(var1[16]);
  t1152 = t1053*t1045;
  t1172 = -1.*t997*t1096;
  t1177 = t1152 + t1172;
  t1272 = Cos(var1[17]);
  t1131 = -1.*t989*t1119;
  t1178 = t1132*t1177;
  t1237 = t1131 + t1178;
  t960 = Sin(var1[17]);
  t1275 = t1132*t1119;
  t1299 = t989*t1177;
  t1329 = t1275 + t1299;
  t1409 = Cos(var1[18]);
  t1260 = t960*t1237;
  t1334 = t1272*t1329;
  t1369 = t1260 + t1334;
  t955 = Sin(var1[18]);
  t1421 = t1272*t1237;
  t1434 = -1.*t960*t1329;
  t1443 = t1421 + t1434;
  t1522 = Cos(var1[19]);
  t1377 = -1.*t955*t1369;
  t1450 = t1409*t1443;
  t1517 = t1377 + t1450;
  t954 = Sin(var1[19]);
  t1525 = t1409*t1369;
  t1526 = t955*t1443;
  t1533 = t1525 + t1526;
  t556 = t197*t221*t217;
  t557 = -1.*t11*t240;
  t568 = t556 + t557;
  t649 = t11*t197;
  t697 = t221*t217*t240;
  t705 = t649 + t697;
  t585 = t183*t568;
  t754 = t281*t705;
  t824 = t585 + t754;
  t1651 = t281*t568;
  t1656 = -1.*t183*t705;
  t1696 = t1651 + t1656;
  t1727 = t158*t72*t221;
  t1728 = t122*t824;
  t1731 = t1727 + t1728;
  t1723 = t997*t1696;
  t1753 = t1053*t1731;
  t1767 = t1723 + t1753;
  t1804 = t1053*t1696;
  t1808 = -1.*t997*t1731;
  t1815 = t1804 + t1808;
  t1788 = -1.*t989*t1767;
  t1816 = t1132*t1815;
  t1823 = t1788 + t1816;
  t1866 = t1132*t1767;
  t1874 = t989*t1815;
  t1878 = t1866 + t1874;
  t1840 = t960*t1823;
  t1910 = t1272*t1878;
  t1926 = t1840 + t1910;
  t2015 = t1272*t1823;
  t2017 = -1.*t960*t1878;
  t2030 = t2015 + t2017;
  t1981 = -1.*t955*t1926;
  t2033 = t1409*t2030;
  t2047 = t1981 + t2033;
  t2060 = t1409*t1926;
  t2070 = t955*t2030;
  t2087 = t2060 + t2070;
  t888 = t72*t197*t183;
  t906 = t281*t72*t240;
  t928 = t888 + t906;
  t2186 = t281*t72*t197;
  t2189 = -1.*t72*t183*t240;
  t2190 = t2186 + t2189;
  t2214 = -1.*t158*t217;
  t2226 = t122*t928;
  t2234 = t2214 + t2226;
  t2211 = t997*t2190;
  t2244 = t1053*t2234;
  t2248 = t2211 + t2244;
  t2319 = t1053*t2190;
  t2326 = -1.*t997*t2234;
  t2352 = t2319 + t2326;
  t2295 = -1.*t989*t2248;
  t2353 = t1132*t2352;
  t2354 = t2295 + t2353;
  t2357 = t1132*t2248;
  t2376 = t989*t2352;
  t2386 = t2357 + t2376;
  t2355 = t960*t2354;
  t2387 = t1272*t2386;
  t2404 = t2355 + t2387;
  t2411 = t1272*t2354;
  t2418 = -1.*t960*t2386;
  t2424 = t2411 + t2418;
  t2409 = -1.*t955*t2404;
  t2426 = t1409*t2424;
  t2441 = t2409 + t2426;
  t2461 = t1409*t2404;
  t2471 = t955*t2424;
  t2488 = t2461 + t2471;
  t1521 = t954*t1517;
  t1546 = t1522*t1533;
  t1550 = t1521 + t1546;
  t1588 = t1522*t1517;
  t1596 = -1.*t954*t1533;
  t1602 = t1588 + t1596;
  t2051 = t954*t2047;
  t2105 = t1522*t2087;
  t2113 = t2051 + t2105;
  t2119 = t1522*t2047;
  t2142 = -1.*t954*t2087;
  t2150 = t2119 + t2142;
  t2442 = t954*t2441;
  t2491 = t1522*t2488;
  t2533 = t2442 + t2491;
  t2555 = t1522*t2441;
  t2559 = -1.*t954*t2488;
  t2566 = t2555 + t2559;
  t2764 = -1.*t158;
  t2774 = 1. + t2764;
  t2907 = -1.*t1053;
  t2909 = 1. + t2907;
  t3063 = -1.*t1132;
  t3079 = 1. + t3063;
  t3190 = -1.*t1272;
  t3226 = 1. + t3190;
  t3283 = -1.*t1409;
  t3286 = 1. + t3283;
  t3382 = -1.*t1522;
  t3385 = 1. + t3382;
  t2779 = -0.049*t2774;
  t2782 = -0.135*t122;
  t2789 = 0. + t2779 + t2782;
  t2793 = 0.135*t183;
  t2806 = 0. + t2793;
  t2822 = -1.*t281;
  t2827 = 1. + t2822;
  t2842 = -0.135*t2827;
  t2850 = 0. + t2842;
  t2872 = -0.135*t2774;
  t2876 = 0.049*t122;
  t2896 = 0. + t2872 + t2876;
  t2914 = -0.09*t2909;
  t2925 = 0.049*t997;
  t2952 = 0. + t2914 + t2925;
  t3030 = -0.049*t2909;
  t3048 = -0.09*t997;
  t3054 = 0. + t3030 + t3048;
  t3124 = -0.049*t3079;
  t3151 = -0.21*t989;
  t3155 = 0. + t3124 + t3151;
  t3166 = -0.21*t3079;
  t3167 = 0.049*t989;
  t3179 = 0. + t3166 + t3167;
  t3233 = -0.2707*t3226;
  t3234 = 0.0016*t960;
  t3243 = 0. + t3233 + t3234;
  t3260 = -0.0016*t3226;
  t3267 = -0.2707*t960;
  t3270 = 0. + t3260 + t3267;
  t3300 = 0.0184*t3286;
  t3312 = -0.7055*t955;
  t3324 = 0. + t3300 + t3312;
  t3344 = -0.7055*t3286;
  t3358 = -0.0184*t955;
  t3377 = 0. + t3344 + t3358;
  t3395 = -1.1135*t3385;
  t3398 = 0.0216*t954;
  t3408 = 0. + t3395 + t3398;
  t3418 = -0.0216*t3385;
  t3435 = -1.1135*t954;
  t3452 = 0. + t3418 + t3435;
  p_output1[0]=-1.*t158*t397 + t11*t122*t72;
  p_output1[1]=t122*t221*t72 - 1.*t158*t824;
  p_output1[2]=-1.*t122*t217 - 1.*t158*t928;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1550 + 0.766044*t1602;
  p_output1[5]=0.642788*t2113 + 0.766044*t2150;
  p_output1[6]=0.642788*t2533 + 0.766044*t2566;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1550 + 0.642788*t1602;
  p_output1[9]=-0.766044*t2113 + 0.642788*t2150;
  p_output1[10]=-0.766044*t2533 + 0.642788*t2566;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1550 - 1.1312*t1602 + t254*t2806 + t1045*t2952 + t1096*t3054 + t1119*t3155 + t1177*t3179 + t1237*t3243 + t1329*t3270 + t1369*t3324 + t2850*t334 + t1443*t3377 + t1517*t3408 + t1533*t3452 + t2896*t397 + t11*t2789*t72 - 0.1305*(t158*t397 - 1.*t11*t122*t72) + var1[0];
  p_output1[13]=0. + 0.0306*t2113 - 1.1312*t2150 + t1696*t2952 + t1731*t3054 + t1767*t3155 + t1815*t3179 + t1823*t3243 + t1878*t3270 + t1926*t3324 + t2030*t3377 + t2047*t3408 + t2087*t3452 + t2806*t568 + t2850*t705 + t221*t2789*t72 + t2896*t824 - 0.1305*(-1.*t122*t221*t72 + t158*t824) + var1[1];
  p_output1[14]=0. + 0.0306*t2533 - 1.1312*t2566 - 1.*t217*t2789 + t2190*t2952 + t2234*t3054 + t2248*t3155 + t2352*t3179 + t2354*t3243 + t2386*t3270 + t2404*t3324 + t2424*t3377 + t2441*t3408 + t2488*t3452 + t197*t2806*t72 + t240*t2850*t72 + t2896*t928 - 0.1305*(t122*t217 + t158*t928) + var1[2];
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

#include "H_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
