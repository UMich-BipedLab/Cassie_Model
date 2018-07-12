/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:15 GMT-04:00
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
  double t626;
  double t1007;
  double t1107;
  double t1025;
  double t1169;
  double t947;
  double t1293;
  double t1362;
  double t1435;
  double t1081;
  double t1239;
  double t1246;
  double t1475;
  double t554;
  double t1735;
  double t1828;
  double t1849;
  double t701;
  double t708;
  double t941;
  double t1276;
  double t1537;
  double t1539;
  double t1579;
  double t1602;
  double t1643;
  double t1889;
  double t2069;
  double t1707;
  double t1935;
  double t1953;
  double t549;
  double t2073;
  double t2088;
  double t2095;
  double t2192;
  double t2060;
  double t2129;
  double t2136;
  double t366;
  double t2208;
  double t2304;
  double t2344;
  double t203;
  double t2831;
  double t2859;
  double t2873;
  double t2697;
  double t2710;
  double t2741;
  double t2959;
  double t3025;
  double t3060;
  double t2696;
  double t2762;
  double t2877;
  double t2889;
  double t2940;
  double t2944;
  double t2957;
  double t3076;
  double t3106;
  double t3173;
  double t3176;
  double t3218;
  double t2499;
  double t3157;
  double t3221;
  double t3255;
  double t3333;
  double t3344;
  double t3482;
  double t3715;
  double t3720;
  double t3725;
  double t3634;
  double t3674;
  double t3677;
  double t3687;
  double t3704;
  double t3709;
  double t3711;
  double t3734;
  double t3783;
  double t3799;
  double t3821;
  double t3859;
  double t3798;
  double t3869;
  double t3881;
  double t3888;
  double t3941;
  double t3963;
  double t2181;
  double t2349;
  double t2437;
  double t2593;
  double t2594;
  double t2598;
  double t3318;
  double t3494;
  double t3510;
  double t3549;
  double t3579;
  double t3598;
  double t3887;
  double t3990;
  double t3996;
  double t4011;
  double t4028;
  double t4036;
  t626 = Cos(var1[3]);
  t1007 = Cos(var1[5]);
  t1107 = Sin(var1[4]);
  t1025 = Sin(var1[3]);
  t1169 = Sin(var1[5]);
  t947 = Cos(var1[6]);
  t1293 = t626*t1007*t1107;
  t1362 = t1025*t1169;
  t1435 = t1293 + t1362;
  t1081 = -1.*t1007*t1025;
  t1239 = t626*t1107*t1169;
  t1246 = t1081 + t1239;
  t1475 = Sin(var1[6]);
  t554 = Cos(var1[8]);
  t1735 = t947*t1435;
  t1828 = -1.*t1246*t1475;
  t1849 = t1735 + t1828;
  t701 = Cos(var1[4]);
  t708 = Cos(var1[7]);
  t941 = t626*t701*t708;
  t1276 = t947*t1246;
  t1537 = t1435*t1475;
  t1539 = t1276 + t1537;
  t1579 = Sin(var1[7]);
  t1602 = t1539*t1579;
  t1643 = t941 + t1602;
  t1889 = Sin(var1[8]);
  t2069 = Cos(var1[9]);
  t1707 = t554*t1643;
  t1935 = t1849*t1889;
  t1953 = t1707 + t1935;
  t549 = Sin(var1[9]);
  t2073 = t554*t1849;
  t2088 = -1.*t1643*t1889;
  t2095 = t2073 + t2088;
  t2192 = Cos(var1[10]);
  t2060 = -1.*t549*t1953;
  t2129 = t2069*t2095;
  t2136 = t2060 + t2129;
  t366 = Sin(var1[10]);
  t2208 = t2069*t1953;
  t2304 = t549*t2095;
  t2344 = t2208 + t2304;
  t203 = Sin(var1[11]);
  t2831 = t1007*t1025*t1107;
  t2859 = -1.*t626*t1169;
  t2873 = t2831 + t2859;
  t2697 = t626*t1007;
  t2710 = t1025*t1107*t1169;
  t2741 = t2697 + t2710;
  t2959 = t947*t2873;
  t3025 = -1.*t2741*t1475;
  t3060 = t2959 + t3025;
  t2696 = t701*t708*t1025;
  t2762 = t947*t2741;
  t2877 = t2873*t1475;
  t2889 = t2762 + t2877;
  t2940 = t2889*t1579;
  t2944 = t2696 + t2940;
  t2957 = t554*t2944;
  t3076 = t3060*t1889;
  t3106 = t2957 + t3076;
  t3173 = t554*t3060;
  t3176 = -1.*t2944*t1889;
  t3218 = t3173 + t3176;
  t2499 = Cos(var1[11]);
  t3157 = -1.*t549*t3106;
  t3221 = t2069*t3218;
  t3255 = t3157 + t3221;
  t3333 = t2069*t3106;
  t3344 = t549*t3218;
  t3482 = t3333 + t3344;
  t3715 = t701*t1007*t947;
  t3720 = -1.*t701*t1169*t1475;
  t3725 = t3715 + t3720;
  t3634 = -1.*t708*t1107;
  t3674 = t701*t947*t1169;
  t3677 = t701*t1007*t1475;
  t3687 = t3674 + t3677;
  t3704 = t3687*t1579;
  t3709 = t3634 + t3704;
  t3711 = t554*t3709;
  t3734 = t3725*t1889;
  t3783 = t3711 + t3734;
  t3799 = t554*t3725;
  t3821 = -1.*t3709*t1889;
  t3859 = t3799 + t3821;
  t3798 = -1.*t549*t3783;
  t3869 = t2069*t3859;
  t3881 = t3798 + t3869;
  t3888 = t2069*t3783;
  t3941 = t549*t3859;
  t3963 = t3888 + t3941;
  t2181 = t366*t2136;
  t2349 = t2192*t2344;
  t2437 = t2181 + t2349;
  t2593 = t2192*t2136;
  t2594 = -1.*t366*t2344;
  t2598 = t2593 + t2594;
  t3318 = t366*t3255;
  t3494 = t2192*t3482;
  t3510 = t3318 + t3494;
  t3549 = t2192*t3255;
  t3579 = -1.*t366*t3482;
  t3598 = t3549 + t3579;
  t3887 = t366*t3881;
  t3990 = t2192*t3963;
  t3996 = t3887 + t3990;
  t4011 = t2192*t3881;
  t4028 = -1.*t366*t3963;
  t4036 = t4011 + t4028;
  p_output1[0]=t203*t2437 - 1.*t2499*t2598;
  p_output1[1]=t203*t3510 - 1.*t2499*t3598;
  p_output1[2]=t203*t3996 - 1.*t2499*t4036;
  p_output1[3]=t2437*t2499 + t203*t2598;
  p_output1[4]=t2499*t3510 + t203*t3598;
  p_output1[5]=t2499*t3996 + t203*t4036;
  p_output1[6]=t1579*t626*t701 - 1.*t1539*t708;
  p_output1[7]=t1025*t1579*t701 - 1.*t2889*t708;
  p_output1[8]=-1.*t1107*t1579 - 1.*t3687*t708;
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

#include "R_ankle_joint_left_mex.hh"

namespace SymExpression
{

void R_ankle_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
