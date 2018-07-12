/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:48 GMT-04:00
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
  double t213;
  double t659;
  double t566;
  double t572;
  double t673;
  double t751;
  double t654;
  double t691;
  double t699;
  double t498;
  double t806;
  double t825;
  double t829;
  double t1024;
  double t713;
  double t871;
  double t927;
  double t495;
  double t1031;
  double t1034;
  double t1058;
  double t1159;
  double t942;
  double t1076;
  double t1153;
  double t450;
  double t1160;
  double t1185;
  double t1200;
  double t202;
  double t28;
  double t278;
  double t1451;
  double t1468;
  double t1548;
  double t1639;
  double t1659;
  double t1759;
  double t1578;
  double t1761;
  double t1786;
  double t1800;
  double t1807;
  double t1824;
  double t1798;
  double t1860;
  double t1882;
  double t1902;
  double t1931;
  double t1934;
  double t1887;
  double t1938;
  double t1941;
  double t1987;
  double t2013;
  double t2019;
  double t2216;
  double t2221;
  double t2224;
  double t2229;
  double t2230;
  double t2260;
  double t2228;
  double t2291;
  double t2294;
  double t2315;
  double t2347;
  double t2400;
  double t2309;
  double t2407;
  double t2422;
  double t2489;
  double t2508;
  double t2524;
  double t2440;
  double t2561;
  double t2569;
  double t2582;
  double t2584;
  double t2596;
  double t1155;
  double t1211;
  double t1216;
  double t1266;
  double t1276;
  double t1291;
  double t1949;
  double t2093;
  double t2134;
  double t2151;
  double t2188;
  double t2196;
  double t2578;
  double t2621;
  double t2639;
  double t2682;
  double t2694;
  double t2709;
  double t2925;
  double t2926;
  double t3351;
  double t3377;
  double t3516;
  double t3572;
  double t3839;
  double t3863;
  double t2841;
  double t2918;
  double t3090;
  double t3110;
  double t3145;
  double t3154;
  double t3160;
  double t2934;
  double t2951;
  double t3006;
  double t3230;
  double t3245;
  double t3289;
  double t3380;
  double t3397;
  double t3417;
  double t3465;
  double t3480;
  double t3481;
  double t3680;
  double t3689;
  double t3696;
  double t3721;
  double t3738;
  double t3829;
  double t3872;
  double t3877;
  double t3887;
  double t3891;
  double t3898;
  double t3907;
  double t4036;
  double t4067;
  double t4081;
  double t4251;
  double t4260;
  double t4262;
  t213 = Cos(var1[1]);
  t659 = Cos(var1[3]);
  t566 = Cos(var1[2]);
  t572 = Sin(var1[3]);
  t673 = Sin(var1[2]);
  t751 = Cos(var1[4]);
  t654 = -1.*t213*t566*t572;
  t691 = -1.*t659*t213*t673;
  t699 = t654 + t691;
  t498 = Sin(var1[4]);
  t806 = t659*t213*t566;
  t825 = -1.*t213*t572*t673;
  t829 = t806 + t825;
  t1024 = Cos(var1[5]);
  t713 = t498*t699;
  t871 = t751*t829;
  t927 = t713 + t871;
  t495 = Sin(var1[5]);
  t1031 = t751*t699;
  t1034 = -1.*t498*t829;
  t1058 = t1031 + t1034;
  t1159 = Cos(var1[6]);
  t942 = -1.*t495*t927;
  t1076 = t1024*t1058;
  t1153 = t942 + t1076;
  t450 = Sin(var1[6]);
  t1160 = t1024*t927;
  t1185 = t495*t1058;
  t1200 = t1160 + t1185;
  t202 = Cos(var1[0]);
  t28 = Sin(var1[1]);
  t278 = Sin(var1[0]);
  t1451 = t202*t566*t28;
  t1468 = -1.*t278*t673;
  t1548 = t1451 + t1468;
  t1639 = -1.*t566*t278;
  t1659 = -1.*t202*t28*t673;
  t1759 = t1639 + t1659;
  t1578 = -1.*t572*t1548;
  t1761 = t659*t1759;
  t1786 = t1578 + t1761;
  t1800 = t659*t1548;
  t1807 = t572*t1759;
  t1824 = t1800 + t1807;
  t1798 = t498*t1786;
  t1860 = t751*t1824;
  t1882 = t1798 + t1860;
  t1902 = t751*t1786;
  t1931 = -1.*t498*t1824;
  t1934 = t1902 + t1931;
  t1887 = -1.*t495*t1882;
  t1938 = t1024*t1934;
  t1941 = t1887 + t1938;
  t1987 = t1024*t1882;
  t2013 = t495*t1934;
  t2019 = t1987 + t2013;
  t2216 = t566*t278*t28;
  t2221 = t202*t673;
  t2224 = t2216 + t2221;
  t2229 = t202*t566;
  t2230 = -1.*t278*t28*t673;
  t2260 = t2229 + t2230;
  t2228 = -1.*t572*t2224;
  t2291 = t659*t2260;
  t2294 = t2228 + t2291;
  t2315 = t659*t2224;
  t2347 = t572*t2260;
  t2400 = t2315 + t2347;
  t2309 = t498*t2294;
  t2407 = t751*t2400;
  t2422 = t2309 + t2407;
  t2489 = t751*t2294;
  t2508 = -1.*t498*t2400;
  t2524 = t2489 + t2508;
  t2440 = -1.*t495*t2422;
  t2561 = t1024*t2524;
  t2569 = t2440 + t2561;
  t2582 = t1024*t2422;
  t2584 = t495*t2524;
  t2596 = t2582 + t2584;
  t1155 = t450*t1153;
  t1211 = t1159*t1200;
  t1216 = t1155 + t1211;
  t1266 = t1159*t1153;
  t1276 = -1.*t450*t1200;
  t1291 = t1266 + t1276;
  t1949 = t450*t1941;
  t2093 = t1159*t2019;
  t2134 = t1949 + t2093;
  t2151 = t1159*t1941;
  t2188 = -1.*t450*t2019;
  t2196 = t2151 + t2188;
  t2578 = t450*t2569;
  t2621 = t1159*t2596;
  t2639 = t2578 + t2621;
  t2682 = t1159*t2569;
  t2694 = -1.*t450*t2596;
  t2709 = t2682 + t2694;
  t2925 = -1.*t659;
  t2926 = 1. + t2925;
  t3351 = -1.*t751;
  t3377 = 1. + t3351;
  t3516 = -1.*t1024;
  t3572 = 1. + t3516;
  t3839 = -1.*t1159;
  t3863 = 1. + t3839;
  t2841 = -1.*t213;
  t2918 = 1. + t2841;
  t3090 = -1.*t566;
  t3110 = 1. + t3090;
  t3145 = -0.049*t3110;
  t3154 = -0.09*t673;
  t3160 = 0. + t3145 + t3154;
  t2934 = -0.049*t2926;
  t2951 = -0.21*t572;
  t3006 = 0. + t2934 + t2951;
  t3230 = -0.21*t2926;
  t3245 = 0.049*t572;
  t3289 = 0. + t3230 + t3245;
  t3380 = -0.2707*t3377;
  t3397 = 0.0016*t498;
  t3417 = 0. + t3380 + t3397;
  t3465 = -0.0016*t3377;
  t3480 = -0.2707*t498;
  t3481 = 0. + t3465 + t3480;
  t3680 = 0.0184*t3572;
  t3689 = -0.7055*t495;
  t3696 = 0. + t3680 + t3689;
  t3721 = -0.7055*t3572;
  t3738 = -0.0184*t495;
  t3829 = 0. + t3721 + t3738;
  t3872 = -1.1135*t3863;
  t3877 = 0.0216*t450;
  t3887 = 0. + t3872 + t3877;
  t3891 = -0.0216*t3863;
  t3898 = -1.1135*t450;
  t3907 = 0. + t3891 + t3898;
  t4036 = 0.135*t2918;
  t4067 = 0.049*t28;
  t4081 = 0. + t4036 + t4067;
  t4251 = -0.09*t3110;
  t4260 = 0.049*t673;
  t4262 = 0. + t4251 + t4260;
  p_output1[0]=0. + t28;
  p_output1[1]=0. - 1.*t202*t213;
  p_output1[2]=0. - 1.*t213*t278;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t1216 + 0.766044*t1291;
  p_output1[5]=0. + 0.642788*t2134 + 0.766044*t2196;
  p_output1[6]=0. + 0.642788*t2639 + 0.766044*t2709;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t1216 + 0.642788*t1291;
  p_output1[9]=0. - 0.766044*t2134 + 0.642788*t2196;
  p_output1[10]=0. - 0.766044*t2639 + 0.642788*t2709;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.0306*t1216 - 1.1312*t1291 + 0.004500000000000004*t28 - 0.049*t2918 + t213*t3160 + t1058*t3829 + t1153*t3887 + t1200*t3907 + t213*t3006*t566 - 1.*t213*t3289*t673 + t3417*t699 + t3481*t829 + t3696*t927;
  p_output1[13]=0. + 0.135*(1. - 1.*t202) + 0.1305*t202*t213 + 0.0306*t2134 - 1.1312*t2196 + t1548*t3006 + t202*t28*t3160 + t1759*t3289 + t1786*t3417 + t1824*t3481 + t1882*t3696 + t1934*t3829 + t1941*t3887 + t2019*t3907 + t202*t4081 - 1.*t278*t4262;
  p_output1[14]=0.07996 + 0.0306*t2639 - 1.1312*t2709 - 0.135*t278 + 0.1305*t213*t278 + t2224*t3006 + t278*t28*t3160 + t2260*t3289 + t2294*t3417 + t2400*t3481 + t2422*t3696 + t2524*t3829 + t2569*t3887 + t2596*t3907 + t278*t4081 + t202*t4262;
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

#include "H_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
