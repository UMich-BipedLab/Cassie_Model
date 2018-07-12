/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:01 GMT-04:00
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
  double t357;
  double t649;
  double t956;
  double t1106;
  double t1122;
  double t1137;
  double t1293;
  double t1788;
  double t2279;
  double t2332;
  double t2336;
  double t2764;
  double t2078;
  double t2136;
  double t2157;
  double t3101;
  double t3207;
  double t3252;
  double t3622;
  double t3726;
  double t3729;
  double t3922;
  double t3511;
  double t3518;
  double t3547;
  double t4154;
  double t4228;
  double t4263;
  double t4781;
  double t4783;
  double t4864;
  double t4957;
  double t4545;
  double t4687;
  double t4772;
  double t5072;
  double t5074;
  double t5086;
  double t5221;
  double t5228;
  double t5259;
  double t5274;
  double t5154;
  double t5199;
  double t5209;
  double t5324;
  double t5328;
  double t5330;
  double t704;
  double t749;
  double t845;
  double t1037;
  double t1039;
  double t1164;
  double t1304;
  double t1510;
  double t1854;
  double t1904;
  double t2038;
  double t2427;
  double t2901;
  double t2979;
  double t3279;
  double t3335;
  double t3345;
  double t5528;
  double t5536;
  double t5539;
  double t5563;
  double t5571;
  double t5592;
  double t3809;
  double t3987;
  double t4049;
  double t4281;
  double t4408;
  double t4442;
  double t5608;
  double t5610;
  double t5614;
  double t5632;
  double t5634;
  double t5654;
  double t4934;
  double t4975;
  double t5043;
  double t5099;
  double t5102;
  double t5137;
  double t5673;
  double t5683;
  double t5694;
  double t5705;
  double t5720;
  double t5723;
  double t5260;
  double t5282;
  double t5296;
  double t5351;
  double t5356;
  double t5358;
  double t5747;
  double t5748;
  double t5766;
  double t5774;
  double t5789;
  double t5792;
  double t5869;
  double t5873;
  double t5878;
  double t5884;
  double t5888;
  double t5890;
  double t5899;
  double t5913;
  double t5917;
  double t5938;
  double t5939;
  double t5958;
  double t5982;
  double t5983;
  double t5988;
  double t6016;
  double t6021;
  double t6023;
  t357 = Sin(var1[7]);
  t649 = Cos(var1[8]);
  t956 = Sin(var1[8]);
  t1106 = Cos(var1[9]);
  t1122 = -1.*t1106;
  t1137 = 1. + t1122;
  t1293 = Sin(var1[9]);
  t1788 = Cos(var1[7]);
  t2279 = Cos(var1[10]);
  t2332 = -1.*t2279;
  t2336 = 1. + t2332;
  t2764 = Sin(var1[10]);
  t2078 = t1106*t357*t956;
  t2136 = t1788*t1293;
  t2157 = t2078 + t2136;
  t3101 = t1788*t1106;
  t3207 = -1.*t357*t956*t1293;
  t3252 = t3101 + t3207;
  t3622 = Cos(var1[11]);
  t3726 = -1.*t3622;
  t3729 = 1. + t3726;
  t3922 = Sin(var1[11]);
  t3511 = t2279*t2157;
  t3518 = t3252*t2764;
  t3547 = t3511 + t3518;
  t4154 = t2279*t3252;
  t4228 = -1.*t2157*t2764;
  t4263 = t4154 + t4228;
  t4781 = Cos(var1[12]);
  t4783 = -1.*t4781;
  t4864 = 1. + t4783;
  t4957 = Sin(var1[12]);
  t4545 = t3622*t3547;
  t4687 = t4263*t3922;
  t4772 = t4545 + t4687;
  t5072 = t3622*t4263;
  t5074 = -1.*t3547*t3922;
  t5086 = t5072 + t5074;
  t5221 = Cos(var1[13]);
  t5228 = -1.*t5221;
  t5259 = 1. + t5228;
  t5274 = Sin(var1[13]);
  t5154 = t4781*t4772;
  t5199 = t5086*t4957;
  t5209 = t5154 + t5199;
  t5324 = t4781*t5086;
  t5328 = -1.*t4772*t4957;
  t5330 = t5324 + t5328;
  t704 = -1.*t649;
  t749 = 1. + t704;
  t845 = -0.135*t749;
  t1037 = 0.049*t956;
  t1039 = 0. + t845 + t1037;
  t1164 = -0.049*t1137;
  t1304 = -0.09*t1293;
  t1510 = 0. + t1164 + t1304;
  t1854 = -0.09*t1137;
  t1904 = 0.049*t1293;
  t2038 = 0. + t1854 + t1904;
  t2427 = -0.049*t2336;
  t2901 = -0.21*t2764;
  t2979 = 0. + t2427 + t2901;
  t3279 = -0.21*t2336;
  t3335 = 0.049*t2764;
  t3345 = 0. + t3279 + t3335;
  t5528 = t1788*t1106*t956;
  t5536 = -1.*t357*t1293;
  t5539 = t5528 + t5536;
  t5563 = -1.*t1106*t357;
  t5571 = -1.*t1788*t956*t1293;
  t5592 = t5563 + t5571;
  t3809 = -0.0016*t3729;
  t3987 = -0.2707*t3922;
  t4049 = 0. + t3809 + t3987;
  t4281 = -0.2707*t3729;
  t4408 = 0.0016*t3922;
  t4442 = 0. + t4281 + t4408;
  t5608 = t2279*t5539;
  t5610 = t5592*t2764;
  t5614 = t5608 + t5610;
  t5632 = t2279*t5592;
  t5634 = -1.*t5539*t2764;
  t5654 = t5632 + t5634;
  t4934 = 0.0184*t4864;
  t4975 = -0.7055*t4957;
  t5043 = 0. + t4934 + t4975;
  t5099 = -0.7055*t4864;
  t5102 = -0.0184*t4957;
  t5137 = 0. + t5099 + t5102;
  t5673 = t3622*t5614;
  t5683 = t5654*t3922;
  t5694 = t5673 + t5683;
  t5705 = t3622*t5654;
  t5720 = -1.*t5614*t3922;
  t5723 = t5705 + t5720;
  t5260 = -0.0216*t5259;
  t5282 = -1.1135*t5274;
  t5296 = 0. + t5260 + t5282;
  t5351 = -1.1135*t5259;
  t5356 = 0.0216*t5274;
  t5358 = 0. + t5351 + t5356;
  t5747 = t4781*t5694;
  t5748 = t5723*t4957;
  t5766 = t5747 + t5748;
  t5774 = t4781*t5723;
  t5789 = -1.*t5694*t4957;
  t5792 = t5774 + t5789;
  t5869 = t649*t1106*t2279;
  t5873 = -1.*t649*t1293*t2764;
  t5878 = t5869 + t5873;
  t5884 = -1.*t649*t2279*t1293;
  t5888 = -1.*t649*t1106*t2764;
  t5890 = t5884 + t5888;
  t5899 = t3622*t5878;
  t5913 = t5890*t3922;
  t5917 = t5899 + t5913;
  t5938 = t3622*t5890;
  t5939 = -1.*t5878*t3922;
  t5958 = t5938 + t5939;
  t5982 = t4781*t5917;
  t5983 = t5958*t4957;
  t5988 = t5982 + t5983;
  t6016 = t4781*t5958;
  t6021 = -1.*t5917*t4957;
  t6023 = t6016 + t6021;
  p_output1[0]=0.24925 - 1.*t1788*t2038 - 1.*t2157*t2979 - 1.*t3252*t3345 - 0.135*t357 - 1.*t1039*t357 - 1.*t3547*t4049 - 1.*t4263*t4442 - 1.*t4772*t5043 - 1.*t5086*t5137 - 1.*t5209*t5296 + 1.1312*(-1.*t5209*t5274 + t5221*t5330) - 0.0306*(t5209*t5221 + t5274*t5330) - 1.*t5330*t5358 + 0.1305*t357*t649 - 1.*t1510*t357*t956;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t1788) + t1039*t1788 - 1.*t2038*t357 + t2979*t5539 + t3345*t5592 + t4049*t5614 + t4442*t5654 + t5043*t5694 + t5137*t5723 + t5296*t5766 + t5358*t5792 - 1.1312*(-1.*t5274*t5766 + t5221*t5792) + 0.0306*(t5221*t5766 + t5274*t5792) - 0.1305*t1788*t649 + t1510*t1788*t956;
  p_output1[2]=-0.047 + t4049*t5878 + t4442*t5890 + t5043*t5917 + t5137*t5958 + t5296*t5988 + t5358*t6023 - 1.1312*(-1.*t5274*t5988 + t5221*t6023) + 0.0306*(t5221*t5988 + t5274*t6023) + t1510*t649 + t1106*t2979*t649 - 1.*t1293*t3345*t649 - 0.049*t749 - 0.004500000000000004*t956;
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
