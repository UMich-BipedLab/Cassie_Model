/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:50 GMT-04:00
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
  double t84;
  double t792;
  double t938;
  double t1158;
  double t1265;
  double t1448;
  double t2466;
  double t2777;
  double t2805;
  double t2855;
  double t2934;
  double t3154;
  double t3182;
  double t3221;
  double t3832;
  double t3872;
  double t3898;
  double t4034;
  double t4081;
  double t4117;
  double t4199;
  double t4383;
  double t4419;
  double t4436;
  double t4594;
  double t4626;
  double t4662;
  double t4686;
  double t4847;
  double t4889;
  double t4960;
  double t5002;
  double t5020;
  double t5021;
  double t5260;
  double t5265;
  double t5276;
  double t5552;
  double t578;
  double t650;
  double t2054;
  double t2128;
  double t2151;
  double t2257;
  double t2489;
  double t2580;
  double t1431;
  double t1519;
  double t1889;
  double t5682;
  double t2639;
  double t2722;
  double t2737;
  double t2922;
  double t3006;
  double t3016;
  double t5769;
  double t5775;
  double t5778;
  double t5791;
  double t5806;
  double t5808;
  double t3232;
  double t3246;
  double t3829;
  double t4156;
  double t4285;
  double t4370;
  double t5824;
  double t5826;
  double t5852;
  double t5878;
  double t5884;
  double t5895;
  double t4479;
  double t4491;
  double t4533;
  double t4946;
  double t4985;
  double t4993;
  double t5903;
  double t5904;
  double t5907;
  double t5917;
  double t5947;
  double t5952;
  double t5072;
  double t5081;
  double t5228;
  double t5957;
  double t5966;
  double t5981;
  double t5988;
  double t6006;
  double t6014;
  double t5595;
  double t5620;
  double t5626;
  double t5705;
  double t5723;
  double t5728;
  double t6187;
  double t6196;
  double t6199;
  double t6220;
  double t6226;
  double t6235;
  double t6255;
  double t6281;
  double t6284;
  double t6314;
  double t6329;
  double t6332;
  double t6361;
  double t6374;
  double t6384;
  double t6402;
  double t6407;
  double t6408;
  double t6431;
  double t6447;
  double t6450;
  double t6463;
  double t6464;
  double t6467;
  t84 = Cos(var1[1]);
  t792 = Cos(var1[2]);
  t938 = Cos(var1[3]);
  t1158 = -1.*t938;
  t1265 = 1. + t1158;
  t1448 = Sin(var1[3]);
  t2466 = Sin(var1[2]);
  t2777 = Cos(var1[4]);
  t2805 = -1.*t2777;
  t2855 = 1. + t2805;
  t2934 = Sin(var1[4]);
  t3154 = -1.*t84*t792*t1448;
  t3182 = -1.*t938*t84*t2466;
  t3221 = t3154 + t3182;
  t3832 = t938*t84*t792;
  t3872 = -1.*t84*t1448*t2466;
  t3898 = t3832 + t3872;
  t4034 = Cos(var1[5]);
  t4081 = -1.*t4034;
  t4117 = 1. + t4081;
  t4199 = Sin(var1[5]);
  t4383 = t2934*t3221;
  t4419 = t2777*t3898;
  t4436 = t4383 + t4419;
  t4594 = t2777*t3221;
  t4626 = -1.*t2934*t3898;
  t4662 = t4594 + t4626;
  t4686 = Cos(var1[6]);
  t4847 = -1.*t4686;
  t4889 = 1. + t4847;
  t4960 = Sin(var1[6]);
  t5002 = -1.*t4199*t4436;
  t5020 = t4034*t4662;
  t5021 = t5002 + t5020;
  t5260 = t4034*t4436;
  t5265 = t4199*t4662;
  t5276 = t5260 + t5265;
  t5552 = Cos(var1[0]);
  t578 = -1.*t84;
  t650 = 1. + t578;
  t2054 = Sin(var1[1]);
  t2128 = -1.*t792;
  t2151 = 1. + t2128;
  t2257 = -0.049*t2151;
  t2489 = -0.09*t2466;
  t2580 = 0. + t2257 + t2489;
  t1431 = -0.049*t1265;
  t1519 = -0.21*t1448;
  t1889 = 0. + t1431 + t1519;
  t5682 = Sin(var1[0]);
  t2639 = -0.21*t1265;
  t2722 = 0.049*t1448;
  t2737 = 0. + t2639 + t2722;
  t2922 = -0.2707*t2855;
  t3006 = 0.0016*t2934;
  t3016 = 0. + t2922 + t3006;
  t5769 = t5552*t792*t2054;
  t5775 = -1.*t5682*t2466;
  t5778 = t5769 + t5775;
  t5791 = -1.*t792*t5682;
  t5806 = -1.*t5552*t2054*t2466;
  t5808 = t5791 + t5806;
  t3232 = -0.0016*t2855;
  t3246 = -0.2707*t2934;
  t3829 = 0. + t3232 + t3246;
  t4156 = 0.0184*t4117;
  t4285 = -0.7055*t4199;
  t4370 = 0. + t4156 + t4285;
  t5824 = -1.*t1448*t5778;
  t5826 = t938*t5808;
  t5852 = t5824 + t5826;
  t5878 = t938*t5778;
  t5884 = t1448*t5808;
  t5895 = t5878 + t5884;
  t4479 = -0.7055*t4117;
  t4491 = -0.0184*t4199;
  t4533 = 0. + t4479 + t4491;
  t4946 = -1.1135*t4889;
  t4985 = 0.0216*t4960;
  t4993 = 0. + t4946 + t4985;
  t5903 = t2934*t5852;
  t5904 = t2777*t5895;
  t5907 = t5903 + t5904;
  t5917 = t2777*t5852;
  t5947 = -1.*t2934*t5895;
  t5952 = t5917 + t5947;
  t5072 = -0.0216*t4889;
  t5081 = -1.1135*t4960;
  t5228 = 0. + t5072 + t5081;
  t5957 = -1.*t4199*t5907;
  t5966 = t4034*t5952;
  t5981 = t5957 + t5966;
  t5988 = t4034*t5907;
  t6006 = t4199*t5952;
  t6014 = t5988 + t6006;
  t5595 = 0.135*t650;
  t5620 = 0.049*t2054;
  t5626 = 0. + t5595 + t5620;
  t5705 = -0.09*t2151;
  t5723 = 0.049*t2466;
  t5728 = 0. + t5705 + t5723;
  t6187 = t792*t5682*t2054;
  t6196 = t5552*t2466;
  t6199 = t6187 + t6196;
  t6220 = t5552*t792;
  t6226 = -1.*t5682*t2054*t2466;
  t6235 = t6220 + t6226;
  t6255 = -1.*t1448*t6199;
  t6281 = t938*t6235;
  t6284 = t6255 + t6281;
  t6314 = t938*t6199;
  t6329 = t1448*t6235;
  t6332 = t6314 + t6329;
  t6361 = t2934*t6284;
  t6374 = t2777*t6332;
  t6384 = t6361 + t6374;
  t6402 = t2777*t6284;
  t6407 = -1.*t2934*t6332;
  t6408 = t6402 + t6407;
  t6431 = -1.*t4199*t6384;
  t6447 = t4034*t6408;
  t6450 = t6431 + t6447;
  t6463 = t4034*t6384;
  t6464 = t4199*t6408;
  t6467 = t6463 + t6464;
  p_output1[0]=-0.03155 + 0.004500000000000004*t2054 + t3016*t3221 + t3829*t3898 + t4370*t4436 + t4533*t4662 + t4993*t5021 + t5228*t5276 + 0.0306*(t4960*t5021 + t4686*t5276) - 1.1312*(t4686*t5021 - 1.*t4960*t5276) - 0.049*t650 + t2580*t84 - 1.*t2466*t2737*t84 + t1889*t792*t84;
  p_output1[1]=0. + 0.135*(1. - 1.*t5552) + t2054*t2580*t5552 + t5552*t5626 - 1.*t5682*t5728 + t1889*t5778 + t2737*t5808 + t3016*t5852 + t3829*t5895 + t4370*t5907 + t4533*t5952 + t4993*t5981 + t5228*t6014 + 0.0306*(t4960*t5981 + t4686*t6014) - 1.1312*(t4686*t5981 - 1.*t4960*t6014) + 0.1305*t5552*t84;
  p_output1[2]=0.07996 - 0.135*t5682 + t2054*t2580*t5682 + t5626*t5682 + t5552*t5728 + t1889*t6199 + t2737*t6235 + t3016*t6284 + t3829*t6332 + t4370*t6384 + t4533*t6408 + t4993*t6450 + t5228*t6467 + 0.0306*(t4960*t6450 + t4686*t6467) - 1.1312*(t4686*t6450 - 1.*t4960*t6467) + 0.1305*t5682*t84;
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

#include "p_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
