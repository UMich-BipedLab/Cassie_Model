/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:32 GMT-04:00
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
  double t139;
  double t5180;
  double t5387;
  double t5226;
  double t5834;
  double t776;
  double t800;
  double t1996;
  double t3898;
  double t4744;
  double t5240;
  double t5952;
  double t6043;
  double t6136;
  double t6319;
  double t6330;
  double t6336;
  double t159;
  double t6477;
  double t6497;
  double t6503;
  double t6540;
  double t6545;
  double t6550;
  double t6564;
  double t6656;
  double t6772;
  double t6780;
  double t7095;
  double t7098;
  double t7102;
  double t7105;
  double t7163;
  double t7249;
  double t7406;
  double t7676;
  double t7717;
  double t7729;
  double t8171;
  double t8283;
  double t8523;
  double t8784;
  double t8800;
  double t8853;
  double t8860;
  double t8942;
  double t8944;
  double t8971;
  double t8996;
  double t9007;
  double t9009;
  double t9013;
  double t9041;
  double t9047;
  double t9060;
  double t9071;
  double t9075;
  double t9077;
  double t9137;
  double t9140;
  double t9155;
  double t9163;
  double t9167;
  double t9171;
  double t9185;
  double t9207;
  double t9210;
  double t9212;
  double t9222;
  double t9223;
  double t9224;
  double t3480;
  double t4229;
  double t4413;
  double t4747;
  double t4873;
  double t6193;
  double t6205;
  double t6222;
  double t6312;
  double t6443;
  double t6465;
  double t6472;
  double t9264;
  double t9267;
  double t9271;
  double t9276;
  double t9277;
  double t9280;
  double t6563;
  double t6571;
  double t6599;
  double t9284;
  double t9285;
  double t9288;
  double t7054;
  double t7056;
  double t7059;
  double t7314;
  double t7432;
  double t7623;
  double t9291;
  double t9292;
  double t9296;
  double t9309;
  double t9310;
  double t9312;
  double t7999;
  double t8123;
  double t8139;
  double t8859;
  double t8891;
  double t8925;
  double t9316;
  double t9317;
  double t9318;
  double t9325;
  double t9330;
  double t9338;
  double t8984;
  double t8985;
  double t8995;
  double t9057;
  double t9062;
  double t9065;
  double t9345;
  double t9350;
  double t9353;
  double t9358;
  double t9359;
  double t9367;
  double t9082;
  double t9107;
  double t9112;
  double t9184;
  double t9189;
  double t9198;
  double t9373;
  double t9377;
  double t9382;
  double t9386;
  double t9388;
  double t9389;
  double t9214;
  double t9217;
  double t9219;
  double t9394;
  double t9395;
  double t9399;
  double t9402;
  double t9404;
  double t9405;
  double t9445;
  double t9446;
  double t9451;
  double t9461;
  double t9464;
  double t9467;
  double t9480;
  double t9481;
  double t9482;
  double t9485;
  double t9489;
  double t9497;
  double t9509;
  double t9510;
  double t9514;
  double t9519;
  double t9523;
  double t9526;
  double t9531;
  double t9536;
  double t9537;
  double t9539;
  double t9541;
  double t9544;
  double t9547;
  double t9549;
  double t9550;
  double t9558;
  double t9563;
  double t9564;
  double t9566;
  double t9567;
  double t9569;
  t139 = Cos(var1[3]);
  t5180 = Cos(var1[5]);
  t5387 = Sin(var1[3]);
  t5226 = Sin(var1[4]);
  t5834 = Sin(var1[5]);
  t776 = Cos(var1[14]);
  t800 = -1.*t776;
  t1996 = 1. + t800;
  t3898 = Sin(var1[14]);
  t4744 = Sin(var1[13]);
  t5240 = t139*t5180*t5226;
  t5952 = t5387*t5834;
  t6043 = t5240 + t5952;
  t6136 = Cos(var1[13]);
  t6319 = -1.*t5180*t5387;
  t6330 = t139*t5226*t5834;
  t6336 = t6319 + t6330;
  t159 = Cos(var1[4]);
  t6477 = t4744*t6043;
  t6497 = t6136*t6336;
  t6503 = t6477 + t6497;
  t6540 = Cos(var1[15]);
  t6545 = -1.*t6540;
  t6550 = 1. + t6545;
  t6564 = Sin(var1[15]);
  t6656 = t6136*t6043;
  t6772 = -1.*t4744*t6336;
  t6780 = t6656 + t6772;
  t7095 = t776*t139*t159;
  t7098 = t3898*t6503;
  t7102 = t7095 + t7098;
  t7105 = Cos(var1[16]);
  t7163 = -1.*t7105;
  t7249 = 1. + t7163;
  t7406 = Sin(var1[16]);
  t7676 = t6564*t6780;
  t7717 = t6540*t7102;
  t7729 = t7676 + t7717;
  t8171 = t6540*t6780;
  t8283 = -1.*t6564*t7102;
  t8523 = t8171 + t8283;
  t8784 = Cos(var1[17]);
  t8800 = -1.*t8784;
  t8853 = 1. + t8800;
  t8860 = Sin(var1[17]);
  t8942 = -1.*t7406*t7729;
  t8944 = t7105*t8523;
  t8971 = t8942 + t8944;
  t8996 = t7105*t7729;
  t9007 = t7406*t8523;
  t9009 = t8996 + t9007;
  t9013 = Cos(var1[18]);
  t9041 = -1.*t9013;
  t9047 = 1. + t9041;
  t9060 = Sin(var1[18]);
  t9071 = t8860*t8971;
  t9075 = t8784*t9009;
  t9077 = t9071 + t9075;
  t9137 = t8784*t8971;
  t9140 = -1.*t8860*t9009;
  t9155 = t9137 + t9140;
  t9163 = Cos(var1[19]);
  t9167 = -1.*t9163;
  t9171 = 1. + t9167;
  t9185 = Sin(var1[19]);
  t9207 = -1.*t9060*t9077;
  t9210 = t9013*t9155;
  t9212 = t9207 + t9210;
  t9222 = t9013*t9077;
  t9223 = t9060*t9155;
  t9224 = t9222 + t9223;
  t3480 = -0.049*t1996;
  t4229 = -0.135*t3898;
  t4413 = 0. + t3480 + t4229;
  t4747 = 0.135*t4744;
  t4873 = 0. + t4747;
  t6193 = -1.*t6136;
  t6205 = 1. + t6193;
  t6222 = -0.135*t6205;
  t6312 = 0. + t6222;
  t6443 = -0.135*t1996;
  t6465 = 0.049*t3898;
  t6472 = 0. + t6443 + t6465;
  t9264 = t5180*t5387*t5226;
  t9267 = -1.*t139*t5834;
  t9271 = t9264 + t9267;
  t9276 = t139*t5180;
  t9277 = t5387*t5226*t5834;
  t9280 = t9276 + t9277;
  t6563 = -0.09*t6550;
  t6571 = 0.049*t6564;
  t6599 = 0. + t6563 + t6571;
  t9284 = t4744*t9271;
  t9285 = t6136*t9280;
  t9288 = t9284 + t9285;
  t7054 = -0.049*t6550;
  t7056 = -0.09*t6564;
  t7059 = 0. + t7054 + t7056;
  t7314 = -0.049*t7249;
  t7432 = -0.21*t7406;
  t7623 = 0. + t7314 + t7432;
  t9291 = t6136*t9271;
  t9292 = -1.*t4744*t9280;
  t9296 = t9291 + t9292;
  t9309 = t776*t159*t5387;
  t9310 = t3898*t9288;
  t9312 = t9309 + t9310;
  t7999 = -0.21*t7249;
  t8123 = 0.049*t7406;
  t8139 = 0. + t7999 + t8123;
  t8859 = -0.2707*t8853;
  t8891 = 0.0016*t8860;
  t8925 = 0. + t8859 + t8891;
  t9316 = t6564*t9296;
  t9317 = t6540*t9312;
  t9318 = t9316 + t9317;
  t9325 = t6540*t9296;
  t9330 = -1.*t6564*t9312;
  t9338 = t9325 + t9330;
  t8984 = -0.0016*t8853;
  t8985 = -0.2707*t8860;
  t8995 = 0. + t8984 + t8985;
  t9057 = 0.0184*t9047;
  t9062 = -0.7055*t9060;
  t9065 = 0. + t9057 + t9062;
  t9345 = -1.*t7406*t9318;
  t9350 = t7105*t9338;
  t9353 = t9345 + t9350;
  t9358 = t7105*t9318;
  t9359 = t7406*t9338;
  t9367 = t9358 + t9359;
  t9082 = -0.7055*t9047;
  t9107 = -0.0184*t9060;
  t9112 = 0. + t9082 + t9107;
  t9184 = -1.1135*t9171;
  t9189 = 0.0216*t9185;
  t9198 = 0. + t9184 + t9189;
  t9373 = t8860*t9353;
  t9377 = t8784*t9367;
  t9382 = t9373 + t9377;
  t9386 = t8784*t9353;
  t9388 = -1.*t8860*t9367;
  t9389 = t9386 + t9388;
  t9214 = -0.0216*t9171;
  t9217 = -1.1135*t9185;
  t9219 = 0. + t9214 + t9217;
  t9394 = -1.*t9060*t9382;
  t9395 = t9013*t9389;
  t9399 = t9394 + t9395;
  t9402 = t9013*t9382;
  t9404 = t9060*t9389;
  t9405 = t9402 + t9404;
  t9445 = t159*t5180*t4744;
  t9446 = t6136*t159*t5834;
  t9451 = t9445 + t9446;
  t9461 = t6136*t159*t5180;
  t9464 = -1.*t159*t4744*t5834;
  t9467 = t9461 + t9464;
  t9480 = -1.*t776*t5226;
  t9481 = t3898*t9451;
  t9482 = t9480 + t9481;
  t9485 = t6564*t9467;
  t9489 = t6540*t9482;
  t9497 = t9485 + t9489;
  t9509 = t6540*t9467;
  t9510 = -1.*t6564*t9482;
  t9514 = t9509 + t9510;
  t9519 = -1.*t7406*t9497;
  t9523 = t7105*t9514;
  t9526 = t9519 + t9523;
  t9531 = t7105*t9497;
  t9536 = t7406*t9514;
  t9537 = t9531 + t9536;
  t9539 = t8860*t9526;
  t9541 = t8784*t9537;
  t9544 = t9539 + t9541;
  t9547 = t8784*t9526;
  t9549 = -1.*t8860*t9537;
  t9550 = t9547 + t9549;
  t9558 = -1.*t9060*t9544;
  t9563 = t9013*t9550;
  t9564 = t9558 + t9563;
  t9566 = t9013*t9544;
  t9567 = t9060*t9550;
  t9569 = t9566 + t9567;
  p_output1[0]=0. + t139*t159*t4413 + t4873*t6043 + t6312*t6336 + t6472*t6503 + t6599*t6780 + t7059*t7102 + t7623*t7729 - 0.1305*(-1.*t139*t159*t3898 + t6503*t776) + t8139*t8523 + t8925*t8971 + t8995*t9009 + t9065*t9077 + t9112*t9155 + t9198*t9212 + t9219*t9224 - 0.0216*(t9185*t9212 + t9163*t9224) - 1.1135*(t9163*t9212 - 1.*t9185*t9224) + var1[0];
  p_output1[1]=0. + t159*t4413*t5387 + t4873*t9271 + t6312*t9280 + t6472*t9288 - 0.1305*(-1.*t159*t3898*t5387 + t776*t9288) + t6599*t9296 + t7059*t9312 + t7623*t9318 + t8139*t9338 + t8925*t9353 + t8995*t9367 + t9065*t9382 + t9112*t9389 + t9198*t9399 + t9219*t9405 - 0.0216*(t9185*t9399 + t9163*t9405) - 1.1135*(t9163*t9399 - 1.*t9185*t9405) + var1[1];
  p_output1[2]=0. + t159*t4873*t5180 - 1.*t4413*t5226 + t159*t5834*t6312 + t6472*t9451 - 0.1305*(t3898*t5226 + t776*t9451) + t6599*t9467 + t7059*t9482 + t7623*t9497 + t8139*t9514 + t8925*t9526 + t8995*t9537 + t9065*t9544 + t9112*t9550 + t9198*t9564 + t9219*t9569 - 0.0216*(t9185*t9564 + t9163*t9569) - 1.1135*(t9163*t9564 - 1.*t9185*t9569) + var1[2];
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
