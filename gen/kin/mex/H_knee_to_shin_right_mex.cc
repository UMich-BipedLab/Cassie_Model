/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:50 GMT-05:00
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
  double t577;
  double t667;
  double t396;
  double t616;
  double t692;
  double t911;
  double t657;
  double t742;
  double t831;
  double t220;
  double t914;
  double t944;
  double t953;
  double t1302;
  double t908;
  double t960;
  double t1131;
  double t189;
  double t1308;
  double t1315;
  double t1370;
  double t1654;
  double t1680;
  double t1685;
  double t1720;
  double t1865;
  double t1961;
  double t176;
  double t2740;
  double t2743;
  double t2759;
  double t2823;
  double t2833;
  double t2846;
  double t2456;
  double t2802;
  double t2856;
  double t2904;
  double t2925;
  double t2926;
  double t2928;
  double t2934;
  double t2935;
  double t2940;
  double t3640;
  double t3646;
  double t3652;
  double t4075;
  double t4094;
  double t4145;
  double t4273;
  double t4712;
  double t4782;
  double t1299;
  double t1962;
  double t2010;
  double t2491;
  double t2651;
  double t2662;
  double t2919;
  double t2950;
  double t2973;
  double t2993;
  double t2999;
  double t3001;
  double t3765;
  double t4986;
  double t5290;
  double t5445;
  double t5718;
  double t7012;
  double t7200;
  double t7204;
  double t7257;
  double t7258;
  double t7276;
  double t7280;
  double t7108;
  double t7111;
  double t7114;
  double t7206;
  double t7208;
  double t7213;
  double t7223;
  double t7226;
  double t7234;
  double t7236;
  double t7237;
  double t7240;
  double t7250;
  double t7254;
  double t7255;
  double t7259;
  double t7260;
  double t7261;
  double t7268;
  double t7271;
  double t7274;
  double t7282;
  double t7289;
  double t7291;
  double t7295;
  double t7296;
  double t7297;
  double t7116;
  double t7119;
  double t7123;
  double t7131;
  double t7147;
  double t7151;
  t577 = Cos(var1[5]);
  t667 = Sin(var1[3]);
  t396 = Cos(var1[3]);
  t616 = Sin(var1[4]);
  t692 = Sin(var1[5]);
  t911 = Sin(var1[13]);
  t657 = t396*t577*t616;
  t742 = t667*t692;
  t831 = t657 + t742;
  t220 = Cos(var1[13]);
  t914 = -1.*t577*t667;
  t944 = t396*t616*t692;
  t953 = t914 + t944;
  t1302 = Cos(var1[15]);
  t908 = t220*t831;
  t960 = -1.*t911*t953;
  t1131 = t908 + t960;
  t189 = Sin(var1[15]);
  t1308 = Cos(var1[14]);
  t1315 = Cos(var1[4]);
  t1370 = t1308*t396*t1315;
  t1654 = Sin(var1[14]);
  t1680 = t911*t831;
  t1685 = t220*t953;
  t1720 = t1680 + t1685;
  t1865 = t1654*t1720;
  t1961 = t1370 + t1865;
  t176 = Sin(var1[16]);
  t2740 = t577*t667*t616;
  t2743 = -1.*t396*t692;
  t2759 = t2740 + t2743;
  t2823 = t396*t577;
  t2833 = t667*t616*t692;
  t2846 = t2823 + t2833;
  t2456 = Cos(var1[16]);
  t2802 = t220*t2759;
  t2856 = -1.*t911*t2846;
  t2904 = t2802 + t2856;
  t2925 = t1308*t1315*t667;
  t2926 = t911*t2759;
  t2928 = t220*t2846;
  t2934 = t2926 + t2928;
  t2935 = t1654*t2934;
  t2940 = t2925 + t2935;
  t3640 = t220*t1315*t577;
  t3646 = -1.*t1315*t911*t692;
  t3652 = t3640 + t3646;
  t4075 = -1.*t1308*t616;
  t4094 = t1315*t577*t911;
  t4145 = t220*t1315*t692;
  t4273 = t4094 + t4145;
  t4712 = t1654*t4273;
  t4782 = t4075 + t4712;
  t1299 = t189*t1131;
  t1962 = t1302*t1961;
  t2010 = t1299 + t1962;
  t2491 = t1302*t1131;
  t2651 = -1.*t189*t1961;
  t2662 = t2491 + t2651;
  t2919 = t189*t2904;
  t2950 = t1302*t2940;
  t2973 = t2919 + t2950;
  t2993 = t1302*t2904;
  t2999 = -1.*t189*t2940;
  t3001 = t2993 + t2999;
  t3765 = t189*t3652;
  t4986 = t1302*t4782;
  t5290 = t3765 + t4986;
  t5445 = t1302*t3652;
  t5718 = -1.*t189*t4782;
  t7012 = t5445 + t5718;
  t7200 = -1.*t1308;
  t7204 = 1. + t7200;
  t7257 = -1.*t1302;
  t7258 = 1. + t7257;
  t7276 = -1.*t2456;
  t7280 = 1. + t7276;
  t7108 = t2456*t2010;
  t7111 = t176*t2662;
  t7114 = t7108 + t7111;
  t7206 = -0.049*t7204;
  t7208 = -0.135*t1654;
  t7213 = 0. + t7206 + t7208;
  t7223 = 0.135*t911;
  t7226 = 0. + t7223;
  t7234 = -1.*t220;
  t7236 = 1. + t7234;
  t7237 = -0.135*t7236;
  t7240 = 0. + t7237;
  t7250 = -0.135*t7204;
  t7254 = 0.049*t1654;
  t7255 = 0. + t7250 + t7254;
  t7259 = -0.09*t7258;
  t7260 = 0.049*t189;
  t7261 = 0. + t7259 + t7260;
  t7268 = -0.049*t7258;
  t7271 = -0.09*t189;
  t7274 = 0. + t7268 + t7271;
  t7282 = -0.049*t7280;
  t7289 = -0.21*t176;
  t7291 = 0. + t7282 + t7289;
  t7295 = -0.21*t7280;
  t7296 = 0.049*t176;
  t7297 = 0. + t7295 + t7296;
  t7116 = t2456*t2973;
  t7119 = t176*t3001;
  t7123 = t7116 + t7119;
  t7131 = t2456*t5290;
  t7147 = t176*t7012;
  t7151 = t7131 + t7147;
  p_output1[0]=t176*t2010 - 1.*t2456*t2662;
  p_output1[1]=t176*t2973 - 1.*t2456*t3001;
  p_output1[2]=t176*t5290 - 1.*t2456*t7012;
  p_output1[3]=0.;
  p_output1[4]=t7114;
  p_output1[5]=t7123;
  p_output1[6]=t7151;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1308*t1720 + t1315*t1654*t396;
  p_output1[9]=-1.*t1308*t2934 + t1315*t1654*t667;
  p_output1[10]=-1.*t1308*t4273 - 1.*t1654*t616;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(-1.*t176*t2010 + t2456*t2662) - 0.1305*(t1308*t1720 - 1.*t1315*t1654*t396) - 0.0016*t7114 + t1315*t396*t7213 + t1720*t7255 + t1131*t7261 + t1961*t7274 + t2010*t7291 + t2662*t7297 + t7226*t831 + t7240*t953 + var1[0];
  p_output1[13]=0. - 0.2707*(-1.*t176*t2973 + t2456*t3001) - 0.1305*(t1308*t2934 - 1.*t1315*t1654*t667) - 0.0016*t7123 + t1315*t667*t7213 + t2759*t7226 + t2846*t7240 + t2934*t7255 + t2904*t7261 + t2940*t7274 + t2973*t7291 + t3001*t7297 + var1[1];
  p_output1[14]=0. - 0.1305*(t1308*t4273 + t1654*t616) - 0.2707*(-1.*t176*t5290 + t2456*t7012) - 0.0016*t7151 - 1.*t616*t7213 + t1315*t577*t7226 + t1315*t692*t7240 + t4273*t7255 + t3652*t7261 + t4782*t7274 + t5290*t7291 + t7012*t7297 + var1[2];
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

#include "H_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void H_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
