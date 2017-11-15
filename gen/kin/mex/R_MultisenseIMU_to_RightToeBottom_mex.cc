/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:18 GMT-05:00
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
  double t125;
  double t202;
  double t452;
  double t361;
  double t1138;
  double t1174;
  double t1069;
  double t1451;
  double t1621;
  double t1766;
  double t1169;
  double t1227;
  double t1338;
  double t1811;
  double t882;
  double t2011;
  double t2028;
  double t2042;
  double t1385;
  double t1894;
  double t1942;
  double t2109;
  double t731;
  double t2244;
  double t2254;
  double t2316;
  double t2006;
  double t2191;
  double t2214;
  double t2338;
  double t666;
  double t2481;
  double t2496;
  double t2497;
  double t2235;
  double t2346;
  double t2352;
  double t2498;
  double t2790;
  double t2914;
  double t2993;
  double t2700;
  double t2706;
  double t2716;
  double t3087;
  double t3107;
  double t3119;
  double t2723;
  double t3010;
  double t3031;
  double t3214;
  double t3268;
  double t3295;
  double t3080;
  double t3143;
  double t3147;
  double t3340;
  double t3361;
  double t3370;
  double t3202;
  double t3298;
  double t3305;
  double t3638;
  double t3646;
  double t3651;
  double t3543;
  double t3587;
  double t3598;
  double t3791;
  double t3799;
  double t3803;
  double t3637;
  double t3680;
  double t3730;
  double t3902;
  double t3922;
  double t3949;
  double t3776;
  double t3821;
  double t3859;
  double t2402;
  double t2504;
  double t2529;
  double t2567;
  double t2609;
  double t2668;
  double t3331;
  double t3372;
  double t3393;
  double t3412;
  double t3438;
  double t3496;
  double t3884;
  double t3951;
  double t3962;
  double t4018;
  double t4066;
  double t4110;
  t125 = Cos(var1[8]);
  t202 = Sin(var1[7]);
  t452 = Sin(var1[8]);
  t361 = Cos(var1[7]);
  t1138 = Cos(var1[9]);
  t1174 = Sin(var1[9]);
  t1069 = Cos(var1[10]);
  t1451 = t361*t1138;
  t1621 = -1.*t202*t452*t1174;
  t1766 = t1451 + t1621;
  t1169 = t1138*t202*t452;
  t1227 = t361*t1174;
  t1338 = t1169 + t1227;
  t1811 = Sin(var1[10]);
  t882 = Cos(var1[11]);
  t2011 = t1069*t1766;
  t2028 = -1.*t1338*t1811;
  t2042 = t2011 + t2028;
  t1385 = t1069*t1338;
  t1894 = t1766*t1811;
  t1942 = t1385 + t1894;
  t2109 = Sin(var1[11]);
  t731 = Cos(var1[12]);
  t2244 = t882*t2042;
  t2254 = -1.*t1942*t2109;
  t2316 = t2244 + t2254;
  t2006 = t882*t1942;
  t2191 = t2042*t2109;
  t2214 = t2006 + t2191;
  t2338 = Sin(var1[12]);
  t666 = Cos(var1[13]);
  t2481 = t731*t2316;
  t2496 = -1.*t2214*t2338;
  t2497 = t2481 + t2496;
  t2235 = t731*t2214;
  t2346 = t2316*t2338;
  t2352 = t2235 + t2346;
  t2498 = Sin(var1[13]);
  t2790 = -1.*t1138*t202;
  t2914 = -1.*t361*t452*t1174;
  t2993 = t2790 + t2914;
  t2700 = t361*t1138*t452;
  t2706 = -1.*t202*t1174;
  t2716 = t2700 + t2706;
  t3087 = t1069*t2993;
  t3107 = -1.*t2716*t1811;
  t3119 = t3087 + t3107;
  t2723 = t1069*t2716;
  t3010 = t2993*t1811;
  t3031 = t2723 + t3010;
  t3214 = t882*t3119;
  t3268 = -1.*t3031*t2109;
  t3295 = t3214 + t3268;
  t3080 = t882*t3031;
  t3143 = t3119*t2109;
  t3147 = t3080 + t3143;
  t3340 = t731*t3295;
  t3361 = -1.*t3147*t2338;
  t3370 = t3340 + t3361;
  t3202 = t731*t3147;
  t3298 = t3295*t2338;
  t3305 = t3202 + t3298;
  t3638 = -1.*t125*t1069*t1174;
  t3646 = -1.*t125*t1138*t1811;
  t3651 = t3638 + t3646;
  t3543 = t125*t1138*t1069;
  t3587 = -1.*t125*t1174*t1811;
  t3598 = t3543 + t3587;
  t3791 = t882*t3651;
  t3799 = -1.*t3598*t2109;
  t3803 = t3791 + t3799;
  t3637 = t882*t3598;
  t3680 = t3651*t2109;
  t3730 = t3637 + t3680;
  t3902 = t731*t3803;
  t3922 = -1.*t3730*t2338;
  t3949 = t3902 + t3922;
  t3776 = t731*t3730;
  t3821 = t3803*t2338;
  t3859 = t3776 + t3821;
  t2402 = t666*t2352;
  t2504 = t2497*t2498;
  t2529 = t2402 + t2504;
  t2567 = t666*t2497;
  t2609 = -1.*t2352*t2498;
  t2668 = t2567 + t2609;
  t3331 = t666*t3305;
  t3372 = t3370*t2498;
  t3393 = t3331 + t3372;
  t3412 = t666*t3370;
  t3438 = -1.*t3305*t2498;
  t3496 = t3412 + t3438;
  t3884 = t666*t3859;
  t3951 = t3949*t2498;
  t3962 = t3884 + t3951;
  t4018 = t666*t3949;
  t4066 = -1.*t3859*t2498;
  t4110 = t4018 + t4066;
  p_output1[0]=0. + t125*t202;
  p_output1[1]=0. - 1.*t125*t361;
  p_output1[2]=0. + t452;
  p_output1[3]=0. - 0.642788*t2529 - 0.766044*t2668;
  p_output1[4]=0. + 0.642788*t3393 + 0.766044*t3496;
  p_output1[5]=0. + 0.642788*t3962 + 0.766044*t4110;
  p_output1[6]=0. + 0.766044*t2529 - 0.642788*t2668;
  p_output1[7]=0. - 0.766044*t3393 + 0.642788*t3496;
  p_output1[8]=0. - 0.766044*t3962 + 0.642788*t4110;
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

#include "R_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
