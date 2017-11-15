/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:19 GMT-05:00
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
  double t145;
  double t409;
  double t731;
  double t1009;
  double t1105;
  double t1120;
  double t1191;
  double t1489;
  double t1748;
  double t1762;
  double t1843;
  double t1889;
  double t1691;
  double t1725;
  double t1739;
  double t1953;
  double t1961;
  double t2006;
  double t2382;
  double t2407;
  double t2481;
  double t2504;
  double t2217;
  double t2316;
  double t2346;
  double t2600;
  double t2616;
  double t2617;
  double t2841;
  double t2868;
  double t2870;
  double t2981;
  double t2723;
  double t2812;
  double t2829;
  double t3119;
  double t3185;
  double t3209;
  double t3331;
  double t3360;
  double t3372;
  double t3443;
  double t3291;
  double t3295;
  double t3298;
  double t3585;
  double t3637;
  double t3651;
  double t457;
  double t666;
  double t714;
  double t802;
  double t887;
  double t1167;
  double t1216;
  double t1385;
  double t1498;
  double t1516;
  double t1625;
  double t1888;
  double t1907;
  double t1908;
  double t2042;
  double t2121;
  double t2127;
  double t4070;
  double t4081;
  double t4090;
  double t4114;
  double t4116;
  double t4119;
  double t2484;
  double t2524;
  double t2565;
  double t2640;
  double t2649;
  double t2661;
  double t4141;
  double t4142;
  double t4148;
  double t4162;
  double t4163;
  double t4232;
  double t2920;
  double t2993;
  double t3063;
  double t3211;
  double t3214;
  double t3217;
  double t4256;
  double t4259;
  double t4260;
  double t4280;
  double t4288;
  double t4294;
  double t3412;
  double t3496;
  double t3540;
  double t3680;
  double t3710;
  double t3728;
  double t4313;
  double t4315;
  double t4341;
  double t4361;
  double t4386;
  double t4395;
  double t4806;
  double t4834;
  double t4842;
  double t4877;
  double t4884;
  double t4895;
  double t4912;
  double t4921;
  double t4924;
  double t4934;
  double t4937;
  double t4944;
  double t4952;
  double t4966;
  double t4977;
  double t5002;
  double t5014;
  double t5019;
  t145 = Sin(var1[7]);
  t409 = Cos(var1[8]);
  t731 = Sin(var1[8]);
  t1009 = Cos(var1[9]);
  t1105 = -1.*t1009;
  t1120 = 1. + t1105;
  t1191 = Sin(var1[9]);
  t1489 = Cos(var1[7]);
  t1748 = Cos(var1[10]);
  t1762 = -1.*t1748;
  t1843 = 1. + t1762;
  t1889 = Sin(var1[10]);
  t1691 = t1009*t145*t731;
  t1725 = t1489*t1191;
  t1739 = t1691 + t1725;
  t1953 = t1489*t1009;
  t1961 = -1.*t145*t731*t1191;
  t2006 = t1953 + t1961;
  t2382 = Cos(var1[11]);
  t2407 = -1.*t2382;
  t2481 = 1. + t2407;
  t2504 = Sin(var1[11]);
  t2217 = t1748*t1739;
  t2316 = t2006*t1889;
  t2346 = t2217 + t2316;
  t2600 = t1748*t2006;
  t2616 = -1.*t1739*t1889;
  t2617 = t2600 + t2616;
  t2841 = Cos(var1[12]);
  t2868 = -1.*t2841;
  t2870 = 1. + t2868;
  t2981 = Sin(var1[12]);
  t2723 = t2382*t2346;
  t2812 = t2617*t2504;
  t2829 = t2723 + t2812;
  t3119 = t2382*t2617;
  t3185 = -1.*t2346*t2504;
  t3209 = t3119 + t3185;
  t3331 = Cos(var1[13]);
  t3360 = -1.*t3331;
  t3372 = 1. + t3360;
  t3443 = Sin(var1[13]);
  t3291 = t2841*t2829;
  t3295 = t3209*t2981;
  t3298 = t3291 + t3295;
  t3585 = t2841*t3209;
  t3637 = -1.*t2829*t2981;
  t3651 = t3585 + t3637;
  t457 = -1.*t409;
  t666 = 1. + t457;
  t714 = -0.135*t666;
  t802 = 0.049*t731;
  t887 = 0. + t714 + t802;
  t1167 = -0.049*t1120;
  t1216 = -0.09*t1191;
  t1385 = 0. + t1167 + t1216;
  t1498 = -0.09*t1120;
  t1516 = 0.049*t1191;
  t1625 = 0. + t1498 + t1516;
  t1888 = -0.049*t1843;
  t1907 = -0.21*t1889;
  t1908 = 0. + t1888 + t1907;
  t2042 = -0.21*t1843;
  t2121 = 0.049*t1889;
  t2127 = 0. + t2042 + t2121;
  t4070 = t1489*t1009*t731;
  t4081 = -1.*t145*t1191;
  t4090 = t4070 + t4081;
  t4114 = -1.*t1009*t145;
  t4116 = -1.*t1489*t731*t1191;
  t4119 = t4114 + t4116;
  t2484 = -0.0016*t2481;
  t2524 = -0.2707*t2504;
  t2565 = 0. + t2484 + t2524;
  t2640 = -0.2707*t2481;
  t2649 = 0.0016*t2504;
  t2661 = 0. + t2640 + t2649;
  t4141 = t1748*t4090;
  t4142 = t4119*t1889;
  t4148 = t4141 + t4142;
  t4162 = t1748*t4119;
  t4163 = -1.*t4090*t1889;
  t4232 = t4162 + t4163;
  t2920 = 0.0184*t2870;
  t2993 = -0.7055*t2981;
  t3063 = 0. + t2920 + t2993;
  t3211 = -0.7055*t2870;
  t3214 = -0.0184*t2981;
  t3217 = 0. + t3211 + t3214;
  t4256 = t2382*t4148;
  t4259 = t4232*t2504;
  t4260 = t4256 + t4259;
  t4280 = t2382*t4232;
  t4288 = -1.*t4148*t2504;
  t4294 = t4280 + t4288;
  t3412 = -0.0216*t3372;
  t3496 = -1.1135*t3443;
  t3540 = 0. + t3412 + t3496;
  t3680 = -1.1135*t3372;
  t3710 = 0.0216*t3443;
  t3728 = 0. + t3680 + t3710;
  t4313 = t2841*t4260;
  t4315 = t4294*t2981;
  t4341 = t4313 + t4315;
  t4361 = t2841*t4294;
  t4386 = -1.*t4260*t2981;
  t4395 = t4361 + t4386;
  t4806 = t409*t1009*t1748;
  t4834 = -1.*t409*t1191*t1889;
  t4842 = t4806 + t4834;
  t4877 = -1.*t409*t1748*t1191;
  t4884 = -1.*t409*t1009*t1889;
  t4895 = t4877 + t4884;
  t4912 = t2382*t4842;
  t4921 = t4895*t2504;
  t4924 = t4912 + t4921;
  t4934 = t2382*t4895;
  t4937 = -1.*t4842*t2504;
  t4944 = t4934 + t4937;
  t4952 = t2841*t4924;
  t4966 = t4944*t2981;
  t4977 = t4952 + t4966;
  t5002 = t2841*t4944;
  t5014 = -1.*t4924*t2981;
  t5019 = t5002 + t5014;
  p_output1[0]=0.24925 - 0.135*t145 - 1.*t1489*t1625 - 1.*t1739*t1908 - 1.*t2006*t2127 - 1.*t2346*t2565 - 1.*t2617*t2661 - 1.*t2829*t3063 - 1.*t3209*t3217 - 1.*t3298*t3540 + 1.1312*(-1.*t3298*t3443 + t3331*t3651) - 0.0306*(t3298*t3331 + t3443*t3651) - 1.*t3651*t3728 + 0.1305*t145*t409 - 1.*t1385*t145*t731 - 1.*t145*t887;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t1489) - 1.*t145*t1625 - 0.1305*t1489*t409 + t1908*t4090 + t2127*t4119 + t2565*t4148 + t2661*t4232 + t3063*t4260 + t3217*t4294 + t3540*t4341 + t3728*t4395 - 1.1312*(-1.*t3443*t4341 + t3331*t4395) + 0.0306*(t3331*t4341 + t3443*t4395) + t1385*t1489*t731 + t1489*t887;
  p_output1[2]=-0.047 + t1385*t409 + t1009*t1908*t409 - 1.*t1191*t2127*t409 + t2565*t4842 + t2661*t4895 + t3063*t4924 + t3217*t4944 + t3540*t4977 + t3728*t5019 - 1.1312*(-1.*t3443*t4977 + t3331*t5019) + 0.0306*(t3331*t4977 + t3443*t5019) - 0.049*t666 - 0.004500000000000004*t731;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
