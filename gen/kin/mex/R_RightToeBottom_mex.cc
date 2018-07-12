/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:16 GMT-04:00
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
  double t156;
  double t484;
  double t551;
  double t486;
  double t649;
  double t179;
  double t269;
  double t296;
  double t483;
  double t816;
  double t504;
  double t697;
  double t718;
  double t843;
  double t906;
  double t953;
  double t797;
  double t998;
  double t1016;
  double t2111;
  double t2031;
  double t2047;
  double t2060;
  double t2030;
  double t2113;
  double t2190;
  double t2226;
  double t2271;
  double t2070;
  double t2227;
  double t2244;
  double t2029;
  double t2319;
  double t2333;
  double t2353;
  double t2427;
  double t2253;
  double t2355;
  double t2424;
  double t2027;
  double t2441;
  double t2461;
  double t2471;
  double t2513;
  double t2426;
  double t2478;
  double t2486;
  double t2014;
  double t2533;
  double t2551;
  double t2553;
  double t2675;
  double t2501;
  double t2577;
  double t2581;
  double t1910;
  double t2735;
  double t2782;
  double t2793;
  double t1054;
  double t1101;
  double t1275;
  double t1299;
  double t1314;
  double t1351;
  double t1280;
  double t1450;
  double t1495;
  double t2953;
  double t2976;
  double t2998;
  double t3048;
  double t3054;
  double t3073;
  double t3008;
  double t3077;
  double t3151;
  double t3164;
  double t3166;
  double t3170;
  double t3153;
  double t3185;
  double t3234;
  double t3248;
  double t3267;
  double t3270;
  double t3247;
  double t3282;
  double t3300;
  double t3374;
  double t3378;
  double t3395;
  double t3324;
  double t3398;
  double t3418;
  double t3435;
  double t3452;
  double t3453;
  double t1698;
  double t1728;
  double t1804;
  double t3560;
  double t3576;
  double t3582;
  double t3593;
  double t3595;
  double t3663;
  double t3584;
  double t3666;
  double t3672;
  double t3678;
  double t3685;
  double t3711;
  double t3676;
  double t3718;
  double t3723;
  double t3739;
  double t3746;
  double t3777;
  double t3737;
  double t3789;
  double t3802;
  double t3825;
  double t3826;
  double t3833;
  double t3814;
  double t3852;
  double t3870;
  double t3883;
  double t3884;
  double t3896;
  double t2647;
  double t2806;
  double t2808;
  double t2876;
  double t2901;
  double t2914;
  double t3420;
  double t3455;
  double t3464;
  double t3498;
  double t3501;
  double t3504;
  double t3875;
  double t3904;
  double t3943;
  double t3946;
  double t3951;
  double t4010;
  t156 = Cos(var1[3]);
  t484 = Cos(var1[5]);
  t551 = Sin(var1[3]);
  t486 = Sin(var1[4]);
  t649 = Sin(var1[5]);
  t179 = Cos(var1[4]);
  t269 = Sin(var1[14]);
  t296 = Cos(var1[14]);
  t483 = Sin(var1[13]);
  t816 = Cos(var1[13]);
  t504 = t156*t484*t486;
  t697 = t551*t649;
  t718 = t504 + t697;
  t843 = -1.*t484*t551;
  t906 = t156*t486*t649;
  t953 = t843 + t906;
  t797 = t483*t718;
  t998 = t816*t953;
  t1016 = t797 + t998;
  t2111 = Cos(var1[15]);
  t2031 = t816*t718;
  t2047 = -1.*t483*t953;
  t2060 = t2031 + t2047;
  t2030 = Sin(var1[15]);
  t2113 = t296*t156*t179;
  t2190 = t269*t1016;
  t2226 = t2113 + t2190;
  t2271 = Cos(var1[16]);
  t2070 = t2030*t2060;
  t2227 = t2111*t2226;
  t2244 = t2070 + t2227;
  t2029 = Sin(var1[16]);
  t2319 = t2111*t2060;
  t2333 = -1.*t2030*t2226;
  t2353 = t2319 + t2333;
  t2427 = Cos(var1[17]);
  t2253 = -1.*t2029*t2244;
  t2355 = t2271*t2353;
  t2424 = t2253 + t2355;
  t2027 = Sin(var1[17]);
  t2441 = t2271*t2244;
  t2461 = t2029*t2353;
  t2471 = t2441 + t2461;
  t2513 = Cos(var1[18]);
  t2426 = t2027*t2424;
  t2478 = t2427*t2471;
  t2486 = t2426 + t2478;
  t2014 = Sin(var1[18]);
  t2533 = t2427*t2424;
  t2551 = -1.*t2027*t2471;
  t2553 = t2533 + t2551;
  t2675 = Cos(var1[19]);
  t2501 = -1.*t2014*t2486;
  t2577 = t2513*t2553;
  t2581 = t2501 + t2577;
  t1910 = Sin(var1[19]);
  t2735 = t2513*t2486;
  t2782 = t2014*t2553;
  t2793 = t2735 + t2782;
  t1054 = t484*t551*t486;
  t1101 = -1.*t156*t649;
  t1275 = t1054 + t1101;
  t1299 = t156*t484;
  t1314 = t551*t486*t649;
  t1351 = t1299 + t1314;
  t1280 = t483*t1275;
  t1450 = t816*t1351;
  t1495 = t1280 + t1450;
  t2953 = t816*t1275;
  t2976 = -1.*t483*t1351;
  t2998 = t2953 + t2976;
  t3048 = t296*t179*t551;
  t3054 = t269*t1495;
  t3073 = t3048 + t3054;
  t3008 = t2030*t2998;
  t3077 = t2111*t3073;
  t3151 = t3008 + t3077;
  t3164 = t2111*t2998;
  t3166 = -1.*t2030*t3073;
  t3170 = t3164 + t3166;
  t3153 = -1.*t2029*t3151;
  t3185 = t2271*t3170;
  t3234 = t3153 + t3185;
  t3248 = t2271*t3151;
  t3267 = t2029*t3170;
  t3270 = t3248 + t3267;
  t3247 = t2027*t3234;
  t3282 = t2427*t3270;
  t3300 = t3247 + t3282;
  t3374 = t2427*t3234;
  t3378 = -1.*t2027*t3270;
  t3395 = t3374 + t3378;
  t3324 = -1.*t2014*t3300;
  t3398 = t2513*t3395;
  t3418 = t3324 + t3398;
  t3435 = t2513*t3300;
  t3452 = t2014*t3395;
  t3453 = t3435 + t3452;
  t1698 = t179*t484*t483;
  t1728 = t816*t179*t649;
  t1804 = t1698 + t1728;
  t3560 = t816*t179*t484;
  t3576 = -1.*t179*t483*t649;
  t3582 = t3560 + t3576;
  t3593 = -1.*t296*t486;
  t3595 = t269*t1804;
  t3663 = t3593 + t3595;
  t3584 = t2030*t3582;
  t3666 = t2111*t3663;
  t3672 = t3584 + t3666;
  t3678 = t2111*t3582;
  t3685 = -1.*t2030*t3663;
  t3711 = t3678 + t3685;
  t3676 = -1.*t2029*t3672;
  t3718 = t2271*t3711;
  t3723 = t3676 + t3718;
  t3739 = t2271*t3672;
  t3746 = t2029*t3711;
  t3777 = t3739 + t3746;
  t3737 = t2027*t3723;
  t3789 = t2427*t3777;
  t3802 = t3737 + t3789;
  t3825 = t2427*t3723;
  t3826 = -1.*t2027*t3777;
  t3833 = t3825 + t3826;
  t3814 = -1.*t2014*t3802;
  t3852 = t2513*t3833;
  t3870 = t3814 + t3852;
  t3883 = t2513*t3802;
  t3884 = t2014*t3833;
  t3896 = t3883 + t3884;
  t2647 = t1910*t2581;
  t2806 = t2675*t2793;
  t2808 = t2647 + t2806;
  t2876 = t2675*t2581;
  t2901 = -1.*t1910*t2793;
  t2914 = t2876 + t2901;
  t3420 = t1910*t3418;
  t3455 = t2675*t3453;
  t3464 = t3420 + t3455;
  t3498 = t2675*t3418;
  t3501 = -1.*t1910*t3453;
  t3504 = t3498 + t3501;
  t3875 = t1910*t3870;
  t3904 = t2675*t3896;
  t3943 = t3875 + t3904;
  t3946 = t2675*t3870;
  t3951 = -1.*t1910*t3896;
  t4010 = t3946 + t3951;
  p_output1[0]=t156*t179*t269 - 1.*t1016*t296;
  p_output1[1]=-1.*t1495*t296 + t179*t269*t551;
  p_output1[2]=-1.*t1804*t296 - 1.*t269*t486;
  p_output1[3]=0.642788*t2808 + 0.766044*t2914;
  p_output1[4]=0.642788*t3464 + 0.766044*t3504;
  p_output1[5]=0.642788*t3943 + 0.766044*t4010;
  p_output1[6]=-0.766044*t2808 + 0.642788*t2914;
  p_output1[7]=-0.766044*t3464 + 0.642788*t3504;
  p_output1[8]=-0.766044*t3943 + 0.642788*t4010;
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

#include "R_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
