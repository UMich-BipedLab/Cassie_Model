/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:09 GMT-04:00
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
  double t219;
  double t320;
  double t600;
  double t411;
  double t612;
  double t313;
  double t780;
  double t784;
  double t789;
  double t596;
  double t678;
  double t744;
  double t820;
  double t74;
  double t1026;
  double t1038;
  double t1074;
  double t240;
  double t254;
  double t283;
  double t746;
  double t877;
  double t888;
  double t906;
  double t912;
  double t943;
  double t1101;
  double t1188;
  double t1004;
  double t1102;
  double t1146;
  double t46;
  double t1198;
  double t1234;
  double t1237;
  double t28;
  double t1504;
  double t1509;
  double t1515;
  double t1416;
  double t1439;
  double t1445;
  double t1568;
  double t1576;
  double t1632;
  double t1368;
  double t1463;
  double t1516;
  double t1533;
  double t1544;
  double t1546;
  double t1284;
  double t1563;
  double t1645;
  double t1658;
  double t1680;
  double t1731;
  double t1856;
  double t2169;
  double t2184;
  double t2217;
  double t1962;
  double t1970;
  double t1972;
  double t2010;
  double t2016;
  double t2085;
  double t2160;
  double t2222;
  double t2229;
  double t2243;
  double t2256;
  double t2276;
  double t1158;
  double t1242;
  double t1272;
  double t1286;
  double t1308;
  double t1316;
  double t1667;
  double t1867;
  double t1869;
  double t1907;
  double t1913;
  double t1934;
  double t2234;
  double t2284;
  double t2288;
  double t2302;
  double t2388;
  double t2405;
  double t3315;
  double t3322;
  double t3607;
  double t3612;
  double t3751;
  double t3761;
  double t3855;
  double t3891;
  double t2500;
  double t2511;
  double t2529;
  double t3125;
  double t3169;
  double t3175;
  double t3180;
  double t3192;
  double t3234;
  double t3354;
  double t3366;
  double t3370;
  double t3404;
  double t3430;
  double t3434;
  double t3626;
  double t3655;
  double t3673;
  double t3694;
  double t3722;
  double t3745;
  double t3773;
  double t3774;
  double t3775;
  double t3820;
  double t3826;
  double t3833;
  double t3915;
  double t3919;
  double t3937;
  double t3998;
  double t4002;
  double t4018;
  double t2554;
  double t2612;
  double t2715;
  double t2768;
  double t2796;
  double t2817;
  t219 = Cos(var1[3]);
  t320 = Cos(var1[5]);
  t600 = Sin(var1[4]);
  t411 = Sin(var1[3]);
  t612 = Sin(var1[5]);
  t313 = Cos(var1[6]);
  t780 = t219*t320*t600;
  t784 = t411*t612;
  t789 = t780 + t784;
  t596 = -1.*t320*t411;
  t678 = t219*t600*t612;
  t744 = t596 + t678;
  t820 = Sin(var1[6]);
  t74 = Cos(var1[8]);
  t1026 = t313*t789;
  t1038 = -1.*t744*t820;
  t1074 = t1026 + t1038;
  t240 = Cos(var1[4]);
  t254 = Cos(var1[7]);
  t283 = t219*t240*t254;
  t746 = t313*t744;
  t877 = t789*t820;
  t888 = t746 + t877;
  t906 = Sin(var1[7]);
  t912 = t888*t906;
  t943 = t283 + t912;
  t1101 = Sin(var1[8]);
  t1188 = Cos(var1[9]);
  t1004 = t74*t943;
  t1102 = t1074*t1101;
  t1146 = t1004 + t1102;
  t46 = Sin(var1[9]);
  t1198 = t74*t1074;
  t1234 = -1.*t943*t1101;
  t1237 = t1198 + t1234;
  t28 = Cos(var1[10]);
  t1504 = t320*t411*t600;
  t1509 = -1.*t219*t612;
  t1515 = t1504 + t1509;
  t1416 = t219*t320;
  t1439 = t411*t600*t612;
  t1445 = t1416 + t1439;
  t1568 = t313*t1515;
  t1576 = -1.*t1445*t820;
  t1632 = t1568 + t1576;
  t1368 = t240*t254*t411;
  t1463 = t313*t1445;
  t1516 = t1515*t820;
  t1533 = t1463 + t1516;
  t1544 = t1533*t906;
  t1546 = t1368 + t1544;
  t1284 = Sin(var1[10]);
  t1563 = t74*t1546;
  t1645 = t1632*t1101;
  t1658 = t1563 + t1645;
  t1680 = t74*t1632;
  t1731 = -1.*t1546*t1101;
  t1856 = t1680 + t1731;
  t2169 = t240*t320*t313;
  t2184 = -1.*t240*t612*t820;
  t2217 = t2169 + t2184;
  t1962 = -1.*t254*t600;
  t1970 = t240*t313*t612;
  t1972 = t240*t320*t820;
  t2010 = t1970 + t1972;
  t2016 = t2010*t906;
  t2085 = t1962 + t2016;
  t2160 = t74*t2085;
  t2222 = t2217*t1101;
  t2229 = t2160 + t2222;
  t2243 = t74*t2217;
  t2256 = -1.*t2085*t1101;
  t2276 = t2243 + t2256;
  t1158 = -1.*t46*t1146;
  t1242 = t1188*t1237;
  t1272 = t1158 + t1242;
  t1286 = t1188*t1146;
  t1308 = t46*t1237;
  t1316 = t1286 + t1308;
  t1667 = -1.*t46*t1658;
  t1867 = t1188*t1856;
  t1869 = t1667 + t1867;
  t1907 = t1188*t1658;
  t1913 = t46*t1856;
  t1934 = t1907 + t1913;
  t2234 = -1.*t46*t2229;
  t2284 = t1188*t2276;
  t2288 = t2234 + t2284;
  t2302 = t1188*t2229;
  t2388 = t46*t2276;
  t2405 = t2302 + t2388;
  t3315 = -1.*t254;
  t3322 = 1. + t3315;
  t3607 = -1.*t74;
  t3612 = 1. + t3607;
  t3751 = -1.*t1188;
  t3761 = 1. + t3751;
  t3855 = -1.*t28;
  t3891 = 1. + t3855;
  t2500 = t1284*t1272;
  t2511 = t28*t1316;
  t2529 = t2500 + t2511;
  t3125 = -1.*t313;
  t3169 = 1. + t3125;
  t3175 = 0.135*t3169;
  t3180 = 0. + t3175;
  t3192 = -0.135*t820;
  t3234 = 0. + t3192;
  t3354 = 0.135*t3322;
  t3366 = 0.049*t906;
  t3370 = 0. + t3354 + t3366;
  t3404 = -0.049*t3322;
  t3430 = 0.135*t906;
  t3434 = 0. + t3404 + t3430;
  t3626 = -0.049*t3612;
  t3655 = -0.09*t1101;
  t3673 = 0. + t3626 + t3655;
  t3694 = -0.09*t3612;
  t3722 = 0.049*t1101;
  t3745 = 0. + t3694 + t3722;
  t3773 = -0.049*t3761;
  t3774 = -0.21*t46;
  t3775 = 0. + t3773 + t3774;
  t3820 = -0.21*t3761;
  t3826 = 0.049*t46;
  t3833 = 0. + t3820 + t3826;
  t3915 = -0.2707*t3891;
  t3919 = 0.0016*t1284;
  t3937 = 0. + t3915 + t3919;
  t3998 = -0.0016*t3891;
  t4002 = -0.2707*t1284;
  t4018 = 0. + t3998 + t4002;
  t2554 = t1284*t1869;
  t2612 = t28*t1934;
  t2715 = t2554 + t2612;
  t2768 = t1284*t2288;
  t2796 = t28*t2405;
  t2817 = t2768 + t2796;
  p_output1[0]=t1284*t1316 - 1.*t1272*t28;
  p_output1[1]=t1284*t1934 - 1.*t1869*t28;
  p_output1[2]=t1284*t2405 - 1.*t2288*t28;
  p_output1[3]=0.;
  p_output1[4]=t2529;
  p_output1[5]=t2715;
  p_output1[6]=t2817;
  p_output1[7]=0.;
  p_output1[8]=-1.*t254*t888 + t219*t240*t906;
  p_output1[9]=-1.*t1533*t254 + t240*t411*t906;
  p_output1[10]=-1.*t2010*t254 - 1.*t600*t906;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0016*t2529 - 0.2707*(-1.*t1284*t1316 + t1272*t28) + t219*t240*t3434 + t1074*t3745 + t1146*t3775 + t1237*t3833 + t1272*t3937 + t1316*t4018 + t3180*t744 + t3234*t789 + t3370*t888 + 0.1305*(t254*t888 - 1.*t219*t240*t906) + t3673*t943 + var1[0];
  p_output1[13]=0. - 0.0016*t2715 - 0.2707*(-1.*t1284*t1934 + t1869*t28) + t1445*t3180 + t1515*t3234 + t1533*t3370 + t1546*t3673 + t1632*t3745 + t1658*t3775 + t1856*t3833 + t1869*t3937 + t1934*t4018 + t240*t3434*t411 + 0.1305*(t1533*t254 - 1.*t240*t411*t906) + var1[1];
  p_output1[14]=0. - 0.2707*(-1.*t1284*t2405 + t2288*t28) - 0.0016*t2817 + t240*t320*t3234 + t2010*t3370 + t2085*t3673 + t2217*t3745 + t2229*t3775 + t2276*t3833 + t2288*t3937 + t2405*t4018 - 1.*t3434*t600 + t240*t3180*t612 + 0.1305*(t2010*t254 + t600*t906) + var1[2];
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

#include "H_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void H_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
