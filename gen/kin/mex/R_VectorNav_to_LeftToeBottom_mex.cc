/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:19 GMT-05:00
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
  double t338;
  double t1376;
  double t1009;
  double t1293;
  double t1589;
  double t1885;
  double t1302;
  double t1731;
  double t1737;
  double t954;
  double t1987;
  double t2219;
  double t2312;
  double t2491;
  double t1785;
  double t2432;
  double t2481;
  double t952;
  double t2515;
  double t2528;
  double t2532;
  double t2873;
  double t2485;
  double t2589;
  double t2651;
  double t936;
  double t2950;
  double t2958;
  double t2962;
  double t221;
  double t145;
  double t862;
  double t3137;
  double t3141;
  double t3194;
  double t3269;
  double t3296;
  double t3327;
  double t3206;
  double t3372;
  double t3375;
  double t3407;
  double t3424;
  double t3447;
  double t3393;
  double t3499;
  double t3557;
  double t3608;
  double t3716;
  double t3719;
  double t3601;
  double t3736;
  double t3742;
  double t3829;
  double t3892;
  double t3899;
  double t4764;
  double t4839;
  double t4845;
  double t4922;
  double t4929;
  double t4972;
  double t4881;
  double t4982;
  double t4990;
  double t5045;
  double t5095;
  double t5175;
  double t5018;
  double t5187;
  double t5243;
  double t5280;
  double t5347;
  double t5357;
  double t5273;
  double t5393;
  double t5397;
  double t5534;
  double t5539;
  double t5570;
  double t2652;
  double t2973;
  double t2986;
  double t3002;
  double t3034;
  double t3061;
  double t3798;
  double t4002;
  double t4091;
  double t4287;
  double t4375;
  double t4399;
  double t5422;
  double t5576;
  double t5609;
  double t5691;
  double t5758;
  double t5762;
  t338 = Cos(var1[1]);
  t1376 = Cos(var1[3]);
  t1009 = Cos(var1[2]);
  t1293 = Sin(var1[3]);
  t1589 = Sin(var1[2]);
  t1885 = Cos(var1[4]);
  t1302 = -1.*t338*t1009*t1293;
  t1731 = -1.*t1376*t338*t1589;
  t1737 = t1302 + t1731;
  t954 = Sin(var1[4]);
  t1987 = t1376*t338*t1009;
  t2219 = -1.*t338*t1293*t1589;
  t2312 = t1987 + t2219;
  t2491 = Cos(var1[5]);
  t1785 = t954*t1737;
  t2432 = t1885*t2312;
  t2481 = t1785 + t2432;
  t952 = Sin(var1[5]);
  t2515 = t1885*t1737;
  t2528 = -1.*t954*t2312;
  t2532 = t2515 + t2528;
  t2873 = Cos(var1[6]);
  t2485 = -1.*t952*t2481;
  t2589 = t2491*t2532;
  t2651 = t2485 + t2589;
  t936 = Sin(var1[6]);
  t2950 = t2491*t2481;
  t2958 = t952*t2532;
  t2962 = t2950 + t2958;
  t221 = Cos(var1[0]);
  t145 = Sin(var1[1]);
  t862 = Sin(var1[0]);
  t3137 = t221*t1009*t145;
  t3141 = -1.*t862*t1589;
  t3194 = t3137 + t3141;
  t3269 = -1.*t1009*t862;
  t3296 = -1.*t221*t145*t1589;
  t3327 = t3269 + t3296;
  t3206 = -1.*t1293*t3194;
  t3372 = t1376*t3327;
  t3375 = t3206 + t3372;
  t3407 = t1376*t3194;
  t3424 = t1293*t3327;
  t3447 = t3407 + t3424;
  t3393 = t954*t3375;
  t3499 = t1885*t3447;
  t3557 = t3393 + t3499;
  t3608 = t1885*t3375;
  t3716 = -1.*t954*t3447;
  t3719 = t3608 + t3716;
  t3601 = -1.*t952*t3557;
  t3736 = t2491*t3719;
  t3742 = t3601 + t3736;
  t3829 = t2491*t3557;
  t3892 = t952*t3719;
  t3899 = t3829 + t3892;
  t4764 = t1009*t862*t145;
  t4839 = t221*t1589;
  t4845 = t4764 + t4839;
  t4922 = t221*t1009;
  t4929 = -1.*t862*t145*t1589;
  t4972 = t4922 + t4929;
  t4881 = -1.*t1293*t4845;
  t4982 = t1376*t4972;
  t4990 = t4881 + t4982;
  t5045 = t1376*t4845;
  t5095 = t1293*t4972;
  t5175 = t5045 + t5095;
  t5018 = t954*t4990;
  t5187 = t1885*t5175;
  t5243 = t5018 + t5187;
  t5280 = t1885*t4990;
  t5347 = -1.*t954*t5175;
  t5357 = t5280 + t5347;
  t5273 = -1.*t952*t5243;
  t5393 = t2491*t5357;
  t5397 = t5273 + t5393;
  t5534 = t2491*t5243;
  t5539 = t952*t5357;
  t5570 = t5534 + t5539;
  t2652 = t936*t2651;
  t2973 = t2873*t2962;
  t2986 = t2652 + t2973;
  t3002 = t2873*t2651;
  t3034 = -1.*t936*t2962;
  t3061 = t3002 + t3034;
  t3798 = t936*t3742;
  t4002 = t2873*t3899;
  t4091 = t3798 + t4002;
  t4287 = t2873*t3742;
  t4375 = -1.*t936*t3899;
  t4399 = t4287 + t4375;
  t5422 = t936*t5397;
  t5576 = t2873*t5570;
  t5609 = t5422 + t5576;
  t5691 = t2873*t5397;
  t5758 = -1.*t936*t5570;
  t5762 = t5691 + t5758;
  p_output1[0]=0. + t145;
  p_output1[1]=0. + t221*t338;
  p_output1[2]=0. + t338*t862;
  p_output1[3]=0. + 0.642788*t2986 + 0.766044*t3061;
  p_output1[4]=0. - 0.642788*t4091 - 0.766044*t4399;
  p_output1[5]=0. - 0.642788*t5609 - 0.766044*t5762;
  p_output1[6]=0. - 0.766044*t2986 + 0.642788*t3061;
  p_output1[7]=0. + 0.766044*t4091 - 0.642788*t4399;
  p_output1[8]=0. + 0.766044*t5609 - 0.642788*t5762;
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

#include "R_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
