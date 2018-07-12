/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:52 GMT-04:00
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
  double t19;
  double t4919;
  double t5288;
  double t4983;
  double t5639;
  double t1091;
  double t1307;
  double t1574;
  double t2727;
  double t4240;
  double t5236;
  double t5667;
  double t5836;
  double t5865;
  double t6408;
  double t6415;
  double t6457;
  double t91;
  double t6812;
  double t6836;
  double t6838;
  double t6875;
  double t6881;
  double t6904;
  double t6914;
  double t6953;
  double t6962;
  double t6965;
  double t7051;
  double t7060;
  double t7066;
  double t7103;
  double t7108;
  double t7112;
  double t7121;
  double t7159;
  double t7161;
  double t7166;
  double t7202;
  double t7207;
  double t7210;
  double t7216;
  double t7221;
  double t7226;
  double t7235;
  double t7246;
  double t7253;
  double t7255;
  double t7298;
  double t7326;
  double t7327;
  double t7348;
  double t7355;
  double t7363;
  double t7383;
  double t7388;
  double t7389;
  double t7392;
  double t7411;
  double t7412;
  double t7414;
  double t7438;
  double t7454;
  double t7462;
  double t7499;
  double t7513;
  double t7514;
  double t7527;
  double t7602;
  double t7613;
  double t7617;
  double t2024;
  double t2753;
  double t3429;
  double t4557;
  double t4863;
  double t5925;
  double t5974;
  double t5991;
  double t6361;
  double t6678;
  double t6794;
  double t6809;
  double t7699;
  double t7702;
  double t7712;
  double t7724;
  double t7737;
  double t7740;
  double t6912;
  double t6917;
  double t6927;
  double t7772;
  double t7778;
  double t7795;
  double t7026;
  double t7034;
  double t7048;
  double t7120;
  double t7141;
  double t7158;
  double t7798;
  double t7811;
  double t7831;
  double t7898;
  double t7912;
  double t7926;
  double t7183;
  double t7189;
  double t7191;
  double t7231;
  double t7241;
  double t7245;
  double t7941;
  double t7942;
  double t7945;
  double t7948;
  double t7955;
  double t7957;
  double t7282;
  double t7292;
  double t7295;
  double t7366;
  double t7386;
  double t7387;
  double t7964;
  double t7975;
  double t7983;
  double t7988;
  double t8001;
  double t8007;
  double t7399;
  double t7400;
  double t7408;
  double t7475;
  double t7503;
  double t7509;
  double t8018;
  double t8023;
  double t8032;
  double t8044;
  double t8050;
  double t8052;
  double t7556;
  double t7564;
  double t7581;
  double t8065;
  double t8076;
  double t8081;
  double t8093;
  double t8094;
  double t8097;
  double t8168;
  double t8178;
  double t8179;
  double t8190;
  double t8192;
  double t8211;
  double t8319;
  double t8326;
  double t8331;
  double t8366;
  double t8382;
  double t8384;
  double t8391;
  double t8396;
  double t8399;
  double t8459;
  double t8507;
  double t8516;
  double t8526;
  double t8529;
  double t8531;
  double t8550;
  double t8554;
  double t8556;
  double t8581;
  double t8582;
  double t8583;
  double t8587;
  double t8599;
  double t8605;
  double t8633;
  double t8635;
  double t8653;
  t19 = Cos(var1[3]);
  t4919 = Cos(var1[5]);
  t5288 = Sin(var1[3]);
  t4983 = Sin(var1[4]);
  t5639 = Sin(var1[5]);
  t1091 = Cos(var1[14]);
  t1307 = -1.*t1091;
  t1574 = 1. + t1307;
  t2727 = Sin(var1[14]);
  t4240 = Sin(var1[13]);
  t5236 = t19*t4919*t4983;
  t5667 = t5288*t5639;
  t5836 = t5236 + t5667;
  t5865 = Cos(var1[13]);
  t6408 = -1.*t4919*t5288;
  t6415 = t19*t4983*t5639;
  t6457 = t6408 + t6415;
  t91 = Cos(var1[4]);
  t6812 = t4240*t5836;
  t6836 = t5865*t6457;
  t6838 = t6812 + t6836;
  t6875 = Cos(var1[15]);
  t6881 = -1.*t6875;
  t6904 = 1. + t6881;
  t6914 = Sin(var1[15]);
  t6953 = t5865*t5836;
  t6962 = -1.*t4240*t6457;
  t6965 = t6953 + t6962;
  t7051 = t1091*t19*t91;
  t7060 = t2727*t6838;
  t7066 = t7051 + t7060;
  t7103 = Cos(var1[16]);
  t7108 = -1.*t7103;
  t7112 = 1. + t7108;
  t7121 = Sin(var1[16]);
  t7159 = t6914*t6965;
  t7161 = t6875*t7066;
  t7166 = t7159 + t7161;
  t7202 = t6875*t6965;
  t7207 = -1.*t6914*t7066;
  t7210 = t7202 + t7207;
  t7216 = Cos(var1[17]);
  t7221 = -1.*t7216;
  t7226 = 1. + t7221;
  t7235 = Sin(var1[17]);
  t7246 = -1.*t7121*t7166;
  t7253 = t7103*t7210;
  t7255 = t7246 + t7253;
  t7298 = t7103*t7166;
  t7326 = t7121*t7210;
  t7327 = t7298 + t7326;
  t7348 = Cos(var1[18]);
  t7355 = -1.*t7348;
  t7363 = 1. + t7355;
  t7383 = Sin(var1[18]);
  t7388 = t7235*t7255;
  t7389 = t7216*t7327;
  t7392 = t7388 + t7389;
  t7411 = t7216*t7255;
  t7412 = -1.*t7235*t7327;
  t7414 = t7411 + t7412;
  t7438 = Cos(var1[19]);
  t7454 = -1.*t7438;
  t7462 = 1. + t7454;
  t7499 = Sin(var1[19]);
  t7513 = -1.*t7383*t7392;
  t7514 = t7348*t7414;
  t7527 = t7513 + t7514;
  t7602 = t7348*t7392;
  t7613 = t7383*t7414;
  t7617 = t7602 + t7613;
  t2024 = -0.049*t1574;
  t2753 = -0.135*t2727;
  t3429 = 0. + t2024 + t2753;
  t4557 = 0.135*t4240;
  t4863 = 0. + t4557;
  t5925 = -1.*t5865;
  t5974 = 1. + t5925;
  t5991 = -0.135*t5974;
  t6361 = 0. + t5991;
  t6678 = -0.135*t1574;
  t6794 = 0.049*t2727;
  t6809 = 0. + t6678 + t6794;
  t7699 = t4919*t5288*t4983;
  t7702 = -1.*t19*t5639;
  t7712 = t7699 + t7702;
  t7724 = t19*t4919;
  t7737 = t5288*t4983*t5639;
  t7740 = t7724 + t7737;
  t6912 = -0.09*t6904;
  t6917 = 0.049*t6914;
  t6927 = 0. + t6912 + t6917;
  t7772 = t4240*t7712;
  t7778 = t5865*t7740;
  t7795 = t7772 + t7778;
  t7026 = -0.049*t6904;
  t7034 = -0.09*t6914;
  t7048 = 0. + t7026 + t7034;
  t7120 = -0.049*t7112;
  t7141 = -0.21*t7121;
  t7158 = 0. + t7120 + t7141;
  t7798 = t5865*t7712;
  t7811 = -1.*t4240*t7740;
  t7831 = t7798 + t7811;
  t7898 = t1091*t91*t5288;
  t7912 = t2727*t7795;
  t7926 = t7898 + t7912;
  t7183 = -0.21*t7112;
  t7189 = 0.049*t7121;
  t7191 = 0. + t7183 + t7189;
  t7231 = -0.2707*t7226;
  t7241 = 0.0016*t7235;
  t7245 = 0. + t7231 + t7241;
  t7941 = t6914*t7831;
  t7942 = t6875*t7926;
  t7945 = t7941 + t7942;
  t7948 = t6875*t7831;
  t7955 = -1.*t6914*t7926;
  t7957 = t7948 + t7955;
  t7282 = -0.0016*t7226;
  t7292 = -0.2707*t7235;
  t7295 = 0. + t7282 + t7292;
  t7366 = 0.0184*t7363;
  t7386 = -0.7055*t7383;
  t7387 = 0. + t7366 + t7386;
  t7964 = -1.*t7121*t7945;
  t7975 = t7103*t7957;
  t7983 = t7964 + t7975;
  t7988 = t7103*t7945;
  t8001 = t7121*t7957;
  t8007 = t7988 + t8001;
  t7399 = -0.7055*t7363;
  t7400 = -0.0184*t7383;
  t7408 = 0. + t7399 + t7400;
  t7475 = -1.1135*t7462;
  t7503 = 0.0216*t7499;
  t7509 = 0. + t7475 + t7503;
  t8018 = t7235*t7983;
  t8023 = t7216*t8007;
  t8032 = t8018 + t8023;
  t8044 = t7216*t7983;
  t8050 = -1.*t7235*t8007;
  t8052 = t8044 + t8050;
  t7556 = -0.0216*t7462;
  t7564 = -1.1135*t7499;
  t7581 = 0. + t7556 + t7564;
  t8065 = -1.*t7383*t8032;
  t8076 = t7348*t8052;
  t8081 = t8065 + t8076;
  t8093 = t7348*t8032;
  t8094 = t7383*t8052;
  t8097 = t8093 + t8094;
  t8168 = t91*t4919*t4240;
  t8178 = t5865*t91*t5639;
  t8179 = t8168 + t8178;
  t8190 = t5865*t91*t4919;
  t8192 = -1.*t91*t4240*t5639;
  t8211 = t8190 + t8192;
  t8319 = -1.*t1091*t4983;
  t8326 = t2727*t8179;
  t8331 = t8319 + t8326;
  t8366 = t6914*t8211;
  t8382 = t6875*t8331;
  t8384 = t8366 + t8382;
  t8391 = t6875*t8211;
  t8396 = -1.*t6914*t8331;
  t8399 = t8391 + t8396;
  t8459 = -1.*t7121*t8384;
  t8507 = t7103*t8399;
  t8516 = t8459 + t8507;
  t8526 = t7103*t8384;
  t8529 = t7121*t8399;
  t8531 = t8526 + t8529;
  t8550 = t7235*t8516;
  t8554 = t7216*t8531;
  t8556 = t8550 + t8554;
  t8581 = t7216*t8516;
  t8582 = -1.*t7235*t8531;
  t8583 = t8581 + t8582;
  t8587 = -1.*t7383*t8556;
  t8599 = t7348*t8583;
  t8605 = t8587 + t8599;
  t8633 = t7348*t8556;
  t8635 = t7383*t8583;
  t8653 = t8633 + t8635;
  p_output1[0]=0. + t4863*t5836 + t6361*t6457 + t6809*t6838 + t6927*t6965 + t7048*t7066 + t7158*t7166 + t7191*t7210 + t7245*t7255 + t7295*t7327 + t7387*t7392 + t7408*t7414 + t7509*t7527 + t7581*t7617 - 0.0216*(t7499*t7527 + t7438*t7617) - 1.1135*(t7438*t7527 - 1.*t7499*t7617) + t19*t3429*t91 - 0.1305*(t1091*t6838 - 1.*t19*t2727*t91) + var1[0];
  p_output1[1]=0. + t4863*t7712 + t6361*t7740 + t6809*t7795 + t6927*t7831 + t7048*t7926 + t7158*t7945 + t7191*t7957 + t7245*t7983 + t7295*t8007 + t7387*t8032 + t7408*t8052 + t7509*t8081 + t7581*t8097 - 0.0216*(t7499*t8081 + t7438*t8097) - 1.1135*(t7438*t8081 - 1.*t7499*t8097) + t3429*t5288*t91 - 0.1305*(t1091*t7795 - 1.*t2727*t5288*t91) + var1[1];
  p_output1[2]=0. - 1.*t3429*t4983 + t6809*t8179 - 0.1305*(t2727*t4983 + t1091*t8179) + t6927*t8211 + t7048*t8331 + t7158*t8384 + t7191*t8399 + t7245*t8516 + t7295*t8531 + t7387*t8556 + t7408*t8583 + t7509*t8605 + t7581*t8653 - 0.0216*(t7499*t8605 + t7438*t8653) - 1.1135*(t7438*t8605 - 1.*t7499*t8653) + t4863*t4919*t91 + t5639*t6361*t91 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_toe_joint_right_mex.hh"

namespace SymExpression
{

void p_toe_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
