/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:58 GMT-05:00
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
  double t70;
  double t8032;
  double t8094;
  double t8085;
  double t8135;
  double t1519;
  double t2715;
  double t2758;
  double t4797;
  double t5831;
  double t8092;
  double t8147;
  double t8150;
  double t8152;
  double t8158;
  double t8163;
  double t8165;
  double t441;
  double t8185;
  double t8189;
  double t8191;
  double t8195;
  double t8198;
  double t8204;
  double t8216;
  double t8230;
  double t8232;
  double t8235;
  double t8252;
  double t8254;
  double t8255;
  double t8262;
  double t8268;
  double t8269;
  double t8282;
  double t8293;
  double t8296;
  double t8301;
  double t8310;
  double t8312;
  double t8313;
  double t8316;
  double t8317;
  double t8318;
  double t8320;
  double t8330;
  double t8332;
  double t8333;
  double t8349;
  double t8350;
  double t8351;
  double t8353;
  double t8357;
  double t8358;
  double t8362;
  double t8365;
  double t8367;
  double t8371;
  double t8389;
  double t8390;
  double t8393;
  double t2990;
  double t5242;
  double t5266;
  double t8022;
  double t8030;
  double t8154;
  double t8155;
  double t8156;
  double t8157;
  double t8168;
  double t8172;
  double t8174;
  double t8414;
  double t8415;
  double t8417;
  double t8424;
  double t8425;
  double t8428;
  double t8211;
  double t8223;
  double t8227;
  double t8430;
  double t8431;
  double t8432;
  double t8244;
  double t8246;
  double t8249;
  double t8278;
  double t8287;
  double t8288;
  double t8438;
  double t8439;
  double t8440;
  double t8451;
  double t8452;
  double t8455;
  double t8303;
  double t8306;
  double t8308;
  double t8319;
  double t8322;
  double t8327;
  double t8461;
  double t8469;
  double t8470;
  double t8474;
  double t8475;
  double t8477;
  double t8337;
  double t8341;
  double t8342;
  double t8361;
  double t8363;
  double t8364;
  double t8481;
  double t8482;
  double t8483;
  double t8485;
  double t8487;
  double t8491;
  double t8375;
  double t8382;
  double t8383;
  double t8497;
  double t8500;
  double t8501;
  double t8506;
  double t8507;
  double t8511;
  double t8548;
  double t8550;
  double t8551;
  double t8554;
  double t8555;
  double t8556;
  double t8567;
  double t8571;
  double t8572;
  double t8574;
  double t8575;
  double t8576;
  double t8579;
  double t8581;
  double t8582;
  double t8587;
  double t8588;
  double t8590;
  double t8592;
  double t8594;
  double t8597;
  double t8599;
  double t8601;
  double t8605;
  double t8611;
  double t8612;
  double t8614;
  t70 = Cos(var1[3]);
  t8032 = Cos(var1[5]);
  t8094 = Sin(var1[3]);
  t8085 = Sin(var1[4]);
  t8135 = Sin(var1[5]);
  t1519 = Cos(var1[14]);
  t2715 = -1.*t1519;
  t2758 = 1. + t2715;
  t4797 = Sin(var1[14]);
  t5831 = Sin(var1[13]);
  t8092 = t70*t8032*t8085;
  t8147 = t8094*t8135;
  t8150 = t8092 + t8147;
  t8152 = Cos(var1[13]);
  t8158 = -1.*t8032*t8094;
  t8163 = t70*t8085*t8135;
  t8165 = t8158 + t8163;
  t441 = Cos(var1[4]);
  t8185 = t5831*t8150;
  t8189 = t8152*t8165;
  t8191 = t8185 + t8189;
  t8195 = Cos(var1[15]);
  t8198 = -1.*t8195;
  t8204 = 1. + t8198;
  t8216 = Sin(var1[15]);
  t8230 = t8152*t8150;
  t8232 = -1.*t5831*t8165;
  t8235 = t8230 + t8232;
  t8252 = t1519*t70*t441;
  t8254 = t4797*t8191;
  t8255 = t8252 + t8254;
  t8262 = Cos(var1[16]);
  t8268 = -1.*t8262;
  t8269 = 1. + t8268;
  t8282 = Sin(var1[16]);
  t8293 = t8216*t8235;
  t8296 = t8195*t8255;
  t8301 = t8293 + t8296;
  t8310 = t8195*t8235;
  t8312 = -1.*t8216*t8255;
  t8313 = t8310 + t8312;
  t8316 = Cos(var1[17]);
  t8317 = -1.*t8316;
  t8318 = 1. + t8317;
  t8320 = Sin(var1[17]);
  t8330 = -1.*t8282*t8301;
  t8332 = t8262*t8313;
  t8333 = t8330 + t8332;
  t8349 = t8262*t8301;
  t8350 = t8282*t8313;
  t8351 = t8349 + t8350;
  t8353 = Cos(var1[18]);
  t8357 = -1.*t8353;
  t8358 = 1. + t8357;
  t8362 = Sin(var1[18]);
  t8365 = t8320*t8333;
  t8367 = t8316*t8351;
  t8371 = t8365 + t8367;
  t8389 = t8316*t8333;
  t8390 = -1.*t8320*t8351;
  t8393 = t8389 + t8390;
  t2990 = -0.049*t2758;
  t5242 = -0.135*t4797;
  t5266 = 0. + t2990 + t5242;
  t8022 = 0.135*t5831;
  t8030 = 0. + t8022;
  t8154 = -1.*t8152;
  t8155 = 1. + t8154;
  t8156 = -0.135*t8155;
  t8157 = 0. + t8156;
  t8168 = -0.135*t2758;
  t8172 = 0.049*t4797;
  t8174 = 0. + t8168 + t8172;
  t8414 = t8032*t8094*t8085;
  t8415 = -1.*t70*t8135;
  t8417 = t8414 + t8415;
  t8424 = t70*t8032;
  t8425 = t8094*t8085*t8135;
  t8428 = t8424 + t8425;
  t8211 = -0.09*t8204;
  t8223 = 0.049*t8216;
  t8227 = 0. + t8211 + t8223;
  t8430 = t5831*t8417;
  t8431 = t8152*t8428;
  t8432 = t8430 + t8431;
  t8244 = -0.049*t8204;
  t8246 = -0.09*t8216;
  t8249 = 0. + t8244 + t8246;
  t8278 = -0.049*t8269;
  t8287 = -0.21*t8282;
  t8288 = 0. + t8278 + t8287;
  t8438 = t8152*t8417;
  t8439 = -1.*t5831*t8428;
  t8440 = t8438 + t8439;
  t8451 = t1519*t441*t8094;
  t8452 = t4797*t8432;
  t8455 = t8451 + t8452;
  t8303 = -0.21*t8269;
  t8306 = 0.049*t8282;
  t8308 = 0. + t8303 + t8306;
  t8319 = -0.2707*t8318;
  t8322 = 0.0016*t8320;
  t8327 = 0. + t8319 + t8322;
  t8461 = t8216*t8440;
  t8469 = t8195*t8455;
  t8470 = t8461 + t8469;
  t8474 = t8195*t8440;
  t8475 = -1.*t8216*t8455;
  t8477 = t8474 + t8475;
  t8337 = -0.0016*t8318;
  t8341 = -0.2707*t8320;
  t8342 = 0. + t8337 + t8341;
  t8361 = 0.0184*t8358;
  t8363 = -0.7055*t8362;
  t8364 = 0. + t8361 + t8363;
  t8481 = -1.*t8282*t8470;
  t8482 = t8262*t8477;
  t8483 = t8481 + t8482;
  t8485 = t8262*t8470;
  t8487 = t8282*t8477;
  t8491 = t8485 + t8487;
  t8375 = -0.7055*t8358;
  t8382 = -0.0184*t8362;
  t8383 = 0. + t8375 + t8382;
  t8497 = t8320*t8483;
  t8500 = t8316*t8491;
  t8501 = t8497 + t8500;
  t8506 = t8316*t8483;
  t8507 = -1.*t8320*t8491;
  t8511 = t8506 + t8507;
  t8548 = t441*t8032*t5831;
  t8550 = t8152*t441*t8135;
  t8551 = t8548 + t8550;
  t8554 = t8152*t441*t8032;
  t8555 = -1.*t441*t5831*t8135;
  t8556 = t8554 + t8555;
  t8567 = -1.*t1519*t8085;
  t8571 = t4797*t8551;
  t8572 = t8567 + t8571;
  t8574 = t8216*t8556;
  t8575 = t8195*t8572;
  t8576 = t8574 + t8575;
  t8579 = t8195*t8556;
  t8581 = -1.*t8216*t8572;
  t8582 = t8579 + t8581;
  t8587 = -1.*t8282*t8576;
  t8588 = t8262*t8582;
  t8590 = t8587 + t8588;
  t8592 = t8262*t8576;
  t8594 = t8282*t8582;
  t8597 = t8592 + t8594;
  t8599 = t8320*t8590;
  t8601 = t8316*t8597;
  t8605 = t8599 + t8601;
  t8611 = t8316*t8590;
  t8612 = -1.*t8320*t8597;
  t8614 = t8611 + t8612;
  p_output1[0]=0. + t441*t5266*t70 + t8030*t8150 + t8157*t8165 + t8174*t8191 - 0.1305*(-1.*t441*t4797*t70 + t1519*t8191) + t8227*t8235 + t8249*t8255 + t8288*t8301 + t8308*t8313 + t8327*t8333 + t8342*t8351 + t8364*t8371 + t8383*t8393 - 1.1135*(-1.*t8362*t8371 + t8353*t8393) - 0.0216*(t8353*t8371 + t8362*t8393) + var1[0];
  p_output1[1]=0. + t441*t5266*t8094 + t8030*t8417 + t8157*t8428 + t8174*t8432 - 0.1305*(-1.*t441*t4797*t8094 + t1519*t8432) + t8227*t8440 + t8249*t8455 + t8288*t8470 + t8308*t8477 + t8327*t8483 + t8342*t8491 + t8364*t8501 + t8383*t8511 - 1.1135*(-1.*t8362*t8501 + t8353*t8511) - 0.0216*(t8353*t8501 + t8362*t8511) + var1[1];
  p_output1[2]=0. + t441*t8030*t8032 - 1.*t5266*t8085 + t441*t8135*t8157 + t8174*t8551 - 0.1305*(t4797*t8085 + t1519*t8551) + t8227*t8556 + t8249*t8572 + t8288*t8576 + t8308*t8582 + t8327*t8590 + t8342*t8597 + t8364*t8605 + t8383*t8614 - 1.1135*(-1.*t8362*t8605 + t8353*t8614) - 0.0216*(t8353*t8605 + t8362*t8614) + var1[2];
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
