/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:13 GMT-05:00
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
  double t1169;
  double t1372;
  double t1616;
  double t1170;
  double t1377;
  double t1385;
  double t1158;
  double t1625;
  double t1641;
  double t1681;
  double t1836;
  double t1550;
  double t1710;
  double t1738;
  double t378;
  double t1845;
  double t1856;
  double t1885;
  double t2140;
  double t1813;
  double t2031;
  double t2054;
  double t377;
  double t2415;
  double t2463;
  double t2471;
  double t309;
  double t358;
  double t3564;
  double t3567;
  double t3596;
  double t3509;
  double t3685;
  double t3724;
  double t3828;
  double t3889;
  double t2944;
  double t3814;
  double t3896;
  double t4006;
  double t4029;
  double t4062;
  double t4074;
  double t2122;
  double t2664;
  double t2802;
  double t3059;
  double t3106;
  double t3115;
  double t4016;
  double t4172;
  double t4212;
  double t4222;
  double t4277;
  double t4357;
  t1169 = Cos(var1[13]);
  t1372 = Sin(var1[13]);
  t1616 = Cos(var1[12]);
  t1170 = 0.642788*t1169;
  t1377 = -0.766044*t1372;
  t1385 = t1170 + t1377;
  t1158 = Sin(var1[12]);
  t1625 = -0.766044*t1169;
  t1641 = -0.642788*t1372;
  t1681 = t1625 + t1641;
  t1836 = Cos(var1[11]);
  t1550 = -1.*t1158*t1385;
  t1710 = t1616*t1681;
  t1738 = 0. + t1550 + t1710;
  t378 = Sin(var1[11]);
  t1845 = t1616*t1385;
  t1856 = t1158*t1681;
  t1885 = 0. + t1845 + t1856;
  t2140 = Cos(var1[10]);
  t1813 = t378*t1738;
  t2031 = t1836*t1885;
  t2054 = 0. + t1813 + t2031;
  t377 = Sin(var1[10]);
  t2415 = t1836*t1738;
  t2463 = -1.*t378*t1885;
  t2471 = 0. + t2415 + t2463;
  t309 = Cos(var1[8]);
  t358 = Sin(var1[9]);
  t3564 = -0.642788*t1169;
  t3567 = 0.766044*t1372;
  t3596 = t3564 + t3567;
  t3509 = -1.*t1158*t1681;
  t3685 = t1616*t3596;
  t3724 = 0. + t3509 + t3685;
  t3828 = t1158*t3596;
  t3889 = 0. + t1710 + t3828;
  t2944 = Cos(var1[9]);
  t3814 = t378*t3724;
  t3896 = t1836*t3889;
  t4006 = 0. + t3814 + t3896;
  t4029 = t1836*t3724;
  t4062 = -1.*t378*t3889;
  t4074 = 0. + t4029 + t4062;
  t2122 = -1.*t377*t2054;
  t2664 = t2140*t2471;
  t2802 = 0. + t2122 + t2664;
  t3059 = t2140*t2054;
  t3106 = t377*t2471;
  t3115 = 0. + t3059 + t3106;
  t4016 = -1.*t377*t4006;
  t4172 = t2140*t4074;
  t4212 = 0. + t4016 + t4172;
  t4222 = t2140*t4006;
  t4277 = t377*t4074;
  t4357 = 0. + t4222 + t4277;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0. + Sin(var1[8]);
  p_output1[22]=0. + t309*(0. + t2944*t3115 + t2802*t358);
  p_output1[23]=0. + t309*(0. + t358*t4212 + t2944*t4357);
  p_output1[24]=0.;
  p_output1[25]=0. - 1.*t2802*t2944 + t3115*t358;
  p_output1[26]=0. - 1.*t2944*t4212 + t358*t4357;
  p_output1[27]=1.;
  p_output1[28]=0.;
  p_output1[29]=0.;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jw_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jw_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
