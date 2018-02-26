/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:10 GMT-05:00
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
  double t210;
  double t253;
  double t337;
  double t252;
  double t266;
  double t302;
  double t177;
  double t342;
  double t404;
  double t492;
  double t576;
  double t303;
  double t493;
  double t495;
  double t163;
  double t633;
  double t640;
  double t653;
  double t849;
  double t518;
  double t678;
  double t809;
  double t122;
  double t867;
  double t938;
  double t969;
  double t66;
  double t75;
  double t1204;
  double t1243;
  double t1267;
  double t1203;
  double t1269;
  double t1284;
  double t1302;
  double t1314;
  double t1293;
  double t1363;
  double t1365;
  double t1380;
  double t1382;
  double t1391;
  double t1097;
  double t1369;
  double t1395;
  double t1414;
  double t1559;
  double t1730;
  double t1803;
  double t1842;
  double t1846;
  double t1893;
  double t1895;
  double t1920;
  double t1024;
  double t1037;
  double t1081;
  double t810;
  double t971;
  double t984;
  double t2276;
  double t2300;
  double t2187;
  double t2198;
  double t2302;
  double t2303;
  double t2308;
  double t2316;
  double t2325;
  double t2333;
  double t2338;
  double t2355;
  double t2108;
  double t2123;
  double t2242;
  double t2244;
  double t2319;
  double t2358;
  double t2361;
  double t2434;
  double t2456;
  double t2473;
  double t2491;
  double t2493;
  double t2018;
  double t2028;
  double t2142;
  double t2171;
  double t2364;
  double t2500;
  double t2537;
  double t2596;
  double t2605;
  double t2610;
  double t2633;
  double t2638;
  double t1002;
  double t1135;
  double t1175;
  double t1188;
  double t1197;
  double t6;
  double t1985;
  double t1996;
  double t2678;
  double t2722;
  double t2730;
  double t2775;
  double t2795;
  double t2066;
  double t2091;
  double t2575;
  double t2659;
  double t2660;
  double t2835;
  double t2836;
  double t2953;
  double t3018;
  double t3019;
  double t3064;
  double t3105;
  double t2009;
  double t2662;
  double t2663;
  double t2797;
  double t2799;
  double t2869;
  double t2907;
  double t3124;
  double t3275;
  double t3381;
  double t3429;
  double t3467;
  double t3646;
  double t3662;
  double t1936;
  double t1954;
  double t1983;
  double t3353;
  double t3359;
  double t16;
  double t1931;
  double t3738;
  double t3741;
  double t3765;
  double t3893;
  double t3909;
  double t2813;
  double t3768;
  t210 = Cos(var1[6]);
  t253 = Sin(var1[6]);
  t337 = Cos(var1[5]);
  t252 = 0.642788*t210;
  t266 = -0.766044*t253;
  t302 = t252 + t266;
  t177 = Sin(var1[5]);
  t342 = -0.766044*t210;
  t404 = -0.642788*t253;
  t492 = t342 + t404;
  t576 = Cos(var1[4]);
  t303 = -1.*t177*t302;
  t493 = t337*t492;
  t495 = 0. + t303 + t493;
  t163 = Sin(var1[4]);
  t633 = t337*t302;
  t640 = t177*t492;
  t653 = 0. + t633 + t640;
  t849 = Sin(var1[3]);
  t518 = t163*t495;
  t678 = t576*t653;
  t809 = 0. + t518 + t678;
  t122 = Cos(var1[3]);
  t867 = t576*t495;
  t938 = -1.*t163*t653;
  t969 = 0. + t867 + t938;
  t66 = Cos(var1[1]);
  t75 = Cos(var1[2]);
  t1204 = -0.642788*t210;
  t1243 = 0.766044*t253;
  t1267 = t1204 + t1243;
  t1203 = -1.*t177*t492;
  t1269 = t337*t1267;
  t1284 = 0. + t1203 + t1269;
  t1302 = t177*t1267;
  t1314 = 0. + t493 + t1302;
  t1293 = t163*t1284;
  t1363 = t576*t1314;
  t1365 = 0. + t1293 + t1363;
  t1380 = t576*t1284;
  t1382 = -1.*t163*t1314;
  t1391 = 0. + t1380 + t1382;
  t1097 = Sin(var1[2]);
  t1369 = t122*t1365;
  t1395 = t849*t1391;
  t1414 = 0. + t1369 + t1395;
  t1559 = t75*t1414;
  t1730 = -1.*t849*t1365;
  t1803 = t122*t1391;
  t1842 = 0. + t1730 + t1803;
  t1846 = t1842*t1097;
  t1893 = 0. + t1559 + t1846;
  t1895 = t66*t1893;
  t1920 = 0. + t1895;
  t1024 = -1.*t849*t809;
  t1037 = t122*t969;
  t1081 = 0. + t1024 + t1037;
  t810 = t122*t809;
  t971 = t849*t969;
  t984 = 0. + t810 + t971;
  t2276 = -1.*t210;
  t2300 = 1. + t2276;
  t2187 = -1.*t337;
  t2198 = 1. + t2187;
  t2302 = 1.0335*t2300;
  t2303 = 1.0512*t210;
  t2308 = -0.052199999999999996*t253;
  t2316 = 0. + t2302 + t2303 + t2308;
  t2325 = -0.0532*t2300;
  t2333 = -0.001*t210;
  t2338 = 0.017699999999999827*t253;
  t2355 = 0. + t2325 + t2333 + t2338;
  t2108 = -1.*t576;
  t2123 = 1. + t2108;
  t2242 = -0.0132*t2198;
  t2244 = -0.6255*t177;
  t2319 = t177*t2316;
  t2358 = t337*t2355;
  t2361 = 0. + t2242 + t2244 + t2319 + t2358;
  t2434 = 0.6255*t2198;
  t2456 = -0.0132*t177;
  t2473 = t337*t2316;
  t2491 = -1.*t177*t2355;
  t2493 = 0. + t2434 + t2456 + t2473 + t2491;
  t2018 = -1.*t122;
  t2028 = 1. + t2018;
  t2142 = 0.1907*t2123;
  t2171 = -0.0332*t163;
  t2364 = -1.*t163*t2361;
  t2500 = t576*t2493;
  t2537 = 0. + t2142 + t2171 + t2364 + t2500;
  t2596 = -0.0332*t2123;
  t2605 = -0.1907*t163;
  t2610 = t576*t2361;
  t2633 = t163*t2493;
  t2638 = 0. + t2596 + t2605 + t2610 + t2633;
  t1002 = t75*t984;
  t1135 = t1081*t1097;
  t1175 = 0. + t1002 + t1135;
  t1188 = t66*t1175;
  t1197 = 0. + t1188;
  t6 = Sin(var1[1]);
  t1985 = -1.*t75;
  t1996 = 1. + t1985;
  t2678 = -0.0806*t2028;
  t2722 = -0.13*t849;
  t2730 = t849*t2537;
  t2775 = t122*t2638;
  t2795 = 0. + t2678 + t2722 + t2730 + t2775;
  t2066 = 0.13*t2028;
  t2091 = -0.0806*t849;
  t2575 = t122*t2537;
  t2659 = -1.*t849*t2638;
  t2660 = 0. + t2066 + t2091 + t2575 + t2659;
  t2835 = -1.*t66;
  t2836 = 1. + t2835;
  t2953 = -0.0806*t1996;
  t3018 = t75*t2795;
  t3019 = -0.01*t1097;
  t3064 = t2660*t1097;
  t3105 = 0. + t2953 + t3018 + t3019 + t3064;
  t2009 = 0.01*t1996;
  t2662 = t75*t2660;
  t2663 = -0.0806*t1097;
  t2797 = -1.*t2795*t1097;
  t2799 = 0. + t2009 + t2662 + t2663 + t2797;
  t2869 = -0.0806*t2836;
  t2907 = 0.004500000000000004*t6;
  t3124 = t66*t3105;
  t3275 = 0. + t2869 + t2907 + t3124;
  t3381 = -0.135*t2836;
  t3429 = -0.1305*t66;
  t3467 = -0.0806*t6;
  t3646 = -1.*t6*t3105;
  t3662 = 0. + t3381 + t3429 + t3467 + t3646;
  t1936 = t75*t1081;
  t1954 = -1.*t984*t1097;
  t1983 = 0. + t1936 + t1954;
  t3353 = -1.*t6*t1175;
  t3359 = 0. + t3353;
  t16 = 0. + t6;
  t1931 = 0. + t66;
  t3738 = t75*t1842;
  t3741 = -1.*t1414*t1097;
  t3765 = 0. + t3738 + t3741;
  t3893 = -1.*t6*t1893;
  t3909 = 0. + t3893;
  t2813 = -1.*t1983*t2799;
  t3768 = t2799*t3765;
  p_output1[0]=t16;
  p_output1[1]=t1197;
  p_output1[2]=t1920;
  p_output1[3]=0. - 0.08*t1931 + t1920*(t2813 - 1.*t1197*t3275 - 1.*t3359*t3662) + t1197*(t1920*t3275 + t3768 + t3662*t3909);
  p_output1[4]=0.135*t1983 - 0.08*t3359 + t1920*(0. + t16*t3275 + t1931*t3662) + t16*(-1.*t1920*t3275 - 1.*t2799*t3765 - 1.*t3662*t3909);
  p_output1[5]=t1197*(0. - 1.*t16*t3275 - 1.*t1931*t3662) + t16*(t1983*t2799 + t1197*t3275 + t3359*t3662) + 0.135*t3765 - 0.08*t3909;
  p_output1[6]=0.;
  p_output1[7]=0. - 1.*t1081*t75 + t1097*t984;
  p_output1[8]=0. + t1097*t1414 - 1.*t1842*t75;
  p_output1[9]=-0.0806 - 1.*(0. + t2813 - 1.*t1175*t3105)*t3765 - 1.*t1983*(0. + t1893*t3105 + t3768);
  p_output1[10]=0. + 0.135*t1175 + 0.1305*t3765;
  p_output1[11]=0. + 0.135*t1893 - 0.1305*t1983;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=0.;
  p_output1[16]=0. - 0.0806*t1081 - 1.*t1842*t2660 - 1.*t1414*t2795 - 0.01*t984;
  p_output1[17]=0. - 0.01*t1414 - 0.0806*t1842 + t1081*t2660 + t2795*t984;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
  p_output1[21]=0.;
  p_output1[22]=0. - 1.*t1391*t2537 - 1.*t1365*t2638 - 0.13*t809 - 0.0806*t969;
  p_output1[23]=0. - 0.13*t1365 - 0.0806*t1391 + t2638*t809 + t2537*t969;
  p_output1[24]=1.;
  p_output1[25]=0.;
  p_output1[26]=0.;
  p_output1[27]=0.;
  p_output1[28]=0. - 1.*t1314*t2361 - 1.*t1284*t2493 - 0.0332*t495 - 0.1907*t653;
  p_output1[29]=0. - 0.0332*t1284 - 0.1907*t1314 + t2493*t495 + t2361*t653;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0. - 1.*t1267*t2316 - 0.6255*t302 - 0.0132*t492 - 1.*t2355*t492;
  p_output1[35]=0. - 0.0132*t1267 + t2355*t302 - 0.6255*t492 + t2316*t492;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=0.05136484439999989;
  p_output1[41]=0.01999455480000023;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void J_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
