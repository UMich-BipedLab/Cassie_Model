/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:39 GMT-05:00
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
  double t25;
  double t113;
  double t448;
  double t256;
  double t1370;
  double t1649;
  double t2004;
  double t1441;
  double t1712;
  double t1835;
  double t1350;
  double t2043;
  double t2160;
  double t2316;
  double t2649;
  double t1932;
  double t2376;
  double t2388;
  double t778;
  double t2696;
  double t2909;
  double t2930;
  double t3155;
  double t2476;
  double t3012;
  double t3076;
  double t732;
  double t3213;
  double t3253;
  double t3273;
  double t3627;
  double t3118;
  double t3376;
  double t3409;
  double t536;
  double t3639;
  double t3654;
  double t3665;
  double t4110;
  double t4150;
  double t4283;
  double t4493;
  double t4501;
  double t4534;
  double t4320;
  double t4570;
  double t4682;
  double t4706;
  double t4721;
  double t4896;
  double t4704;
  double t4907;
  double t4973;
  double t4984;
  double t5141;
  double t5210;
  double t4980;
  double t5213;
  double t5275;
  double t5318;
  double t5342;
  double t5374;
  double t5669;
  double t5675;
  double t5679;
  double t5701;
  double t5716;
  double t5755;
  double t5696;
  double t5808;
  double t5836;
  double t5883;
  double t5934;
  double t5947;
  double t5877;
  double t6125;
  double t6215;
  double t6299;
  double t6311;
  double t6338;
  double t3619;
  double t3704;
  double t3846;
  double t3930;
  double t3980;
  double t3982;
  double t5312;
  double t5443;
  double t5484;
  double t5563;
  double t5564;
  double t5591;
  double t6241;
  double t6344;
  double t6375;
  double t6417;
  double t6427;
  double t6457;
  t25 = Cos(var1[1]);
  t113 = Sin(var1[0]);
  t448 = Sin(var1[1]);
  t256 = Cos(var1[0]);
  t1370 = Cos(var1[2]);
  t1649 = Sin(var1[2]);
  t2004 = Cos(var1[3]);
  t1441 = t1370*t113*t448;
  t1712 = t256*t1649;
  t1835 = t1441 + t1712;
  t1350 = Sin(var1[3]);
  t2043 = t256*t1370;
  t2160 = -1.*t113*t448*t1649;
  t2316 = t2043 + t2160;
  t2649 = Cos(var1[4]);
  t1932 = -1.*t1350*t1835;
  t2376 = t2004*t2316;
  t2388 = t1932 + t2376;
  t778 = Sin(var1[4]);
  t2696 = t2004*t1835;
  t2909 = t1350*t2316;
  t2930 = t2696 + t2909;
  t3155 = Cos(var1[5]);
  t2476 = t778*t2388;
  t3012 = t2649*t2930;
  t3076 = t2476 + t3012;
  t732 = Sin(var1[5]);
  t3213 = t2649*t2388;
  t3253 = -1.*t778*t2930;
  t3273 = t3213 + t3253;
  t3627 = Cos(var1[6]);
  t3118 = -1.*t732*t3076;
  t3376 = t3155*t3273;
  t3409 = t3118 + t3376;
  t536 = Sin(var1[6]);
  t3639 = t3155*t3076;
  t3654 = t732*t3273;
  t3665 = t3639 + t3654;
  t4110 = t256*t1370*t448;
  t4150 = -1.*t113*t1649;
  t4283 = t4110 + t4150;
  t4493 = -1.*t1370*t113;
  t4501 = -1.*t256*t448*t1649;
  t4534 = t4493 + t4501;
  t4320 = -1.*t1350*t4283;
  t4570 = t2004*t4534;
  t4682 = t4320 + t4570;
  t4706 = t2004*t4283;
  t4721 = t1350*t4534;
  t4896 = t4706 + t4721;
  t4704 = t778*t4682;
  t4907 = t2649*t4896;
  t4973 = t4704 + t4907;
  t4984 = t2649*t4682;
  t5141 = -1.*t778*t4896;
  t5210 = t4984 + t5141;
  t4980 = -1.*t732*t4973;
  t5213 = t3155*t5210;
  t5275 = t4980 + t5213;
  t5318 = t3155*t4973;
  t5342 = t732*t5210;
  t5374 = t5318 + t5342;
  t5669 = -1.*t25*t1370*t1350;
  t5675 = -1.*t2004*t25*t1649;
  t5679 = t5669 + t5675;
  t5701 = t2004*t25*t1370;
  t5716 = -1.*t25*t1350*t1649;
  t5755 = t5701 + t5716;
  t5696 = t778*t5679;
  t5808 = t2649*t5755;
  t5836 = t5696 + t5808;
  t5883 = t2649*t5679;
  t5934 = -1.*t778*t5755;
  t5947 = t5883 + t5934;
  t5877 = -1.*t732*t5836;
  t6125 = t3155*t5947;
  t6215 = t5877 + t6125;
  t6299 = t3155*t5836;
  t6311 = t732*t5947;
  t6338 = t6299 + t6311;
  t3619 = t536*t3409;
  t3704 = t3627*t3665;
  t3846 = t3619 + t3704;
  t3930 = t3627*t3409;
  t3980 = -1.*t536*t3665;
  t3982 = t3930 + t3980;
  t5312 = t536*t5275;
  t5443 = t3627*t5374;
  t5484 = t5312 + t5443;
  t5563 = t3627*t5275;
  t5564 = -1.*t536*t5374;
  t5591 = t5563 + t5564;
  t6241 = t536*t6215;
  t6344 = t3627*t6338;
  t6375 = t6241 + t6344;
  t6417 = t3627*t6215;
  t6427 = -1.*t536*t6338;
  t6457 = t6417 + t6427;
  p_output1[0]=0. + t113*t25;
  p_output1[1]=0. - 1.*t25*t256;
  p_output1[2]=0. + t448;
  p_output1[3]=0. - 0.642788*t3846 - 0.766044*t3982;
  p_output1[4]=0. + 0.642788*t5484 + 0.766044*t5591;
  p_output1[5]=0. + 0.642788*t6375 + 0.766044*t6457;
  p_output1[6]=0. + 0.766044*t3846 - 0.642788*t3982;
  p_output1[7]=0. - 0.766044*t5484 + 0.642788*t5591;
  p_output1[8]=0. - 0.766044*t6375 + 0.642788*t6457;
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

#include "R_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
