/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:20 GMT-04:00
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
  double t10132;
  double t10026;
  double t10136;
  double t10047;
  double t10144;
  double t3;
  double t10124;
  double t10209;
  double t10248;
  double t10257;
  double t10263;
  double t10270;
  double t10274;
  double t10287;
  double t10318;
  double t10322;
  double t10328;
  double t10306;
  double t10313;
  double t10314;
  double t10330;
  double t10392;
  double t10393;
  double t10395;
  double t10399;
  double t10378;
  double t10384;
  double t10387;
  double t10408;
  double t10345;
  double t10346;
  double t10356;
  double t10365;
  double t10373;
  double t10374;
  double t10375;
  double t10445;
  double t10447;
  double t10448;
  double t10453;
  double t10454;
  double t10455;
  double t10466;
  double t10469;
  double t10471;
  double t10472;
  double t10478;
  double t10480;
  double t10481;
  double t4;
  double t9980;
  double t10012;
  double t10013;
  double t10275;
  double t10285;
  double t10289;
  double t10302;
  double t10303;
  double t10305;
  double t10494;
  double t10495;
  double t10497;
  double t10501;
  double t10504;
  double t10505;
  double t10333;
  double t10340;
  double t10359;
  double t10369;
  double t10371;
  double t10531;
  double t10534;
  double t10535;
  double t10514;
  double t10515;
  double t10525;
  double t10397;
  double t10400;
  double t10402;
  double t10411;
  double t10412;
  double t10414;
  double t10548;
  double t10549;
  double t10550;
  double t10428;
  double t10434;
  double t10441;
  double t10457;
  double t10467;
  double t10468;
  double t10541;
  double t10543;
  double t10544;
  double t10571;
  double t10572;
  double t10576;
  double t10475;
  double t10476;
  double t10477;
  double t10578;
  double t10579;
  double t10580;
  double t10582;
  double t10586;
  double t10587;
  double t10615;
  double t10616;
  double t10617;
  double t10606;
  double t10607;
  double t10611;
  double t10625;
  double t10626;
  double t10627;
  double t10619;
  double t10621;
  double t10623;
  double t10637;
  double t10640;
  double t10641;
  double t10644;
  double t10645;
  double t10648;
  double t10650;
  double t10651;
  double t10652;
  t10132 = Cos(var1[3]);
  t10026 = Cos(var1[5]);
  t10136 = Sin(var1[4]);
  t10047 = Sin(var1[3]);
  t10144 = Sin(var1[5]);
  t3 = Cos(var1[6]);
  t10124 = -1.*t10026*t10047;
  t10209 = t10132*t10136*t10144;
  t10248 = t10124 + t10209;
  t10257 = t10132*t10026*t10136;
  t10263 = t10047*t10144;
  t10270 = t10257 + t10263;
  t10274 = Sin(var1[6]);
  t10287 = Cos(var1[7]);
  t10318 = t3*t10270;
  t10322 = -1.*t10248*t10274;
  t10328 = t10318 + t10322;
  t10306 = t3*t10248;
  t10313 = t10270*t10274;
  t10314 = t10306 + t10313;
  t10330 = Sin(var1[7]);
  t10392 = Cos(var1[8]);
  t10393 = -1.*t10392;
  t10395 = 1. + t10393;
  t10399 = Sin(var1[8]);
  t10378 = t10287*t10314;
  t10384 = t10328*t10330;
  t10387 = t10378 + t10384;
  t10408 = Cos(var1[4]);
  t10345 = Cos(var1[9]);
  t10346 = -1.*t10345;
  t10356 = 1. + t10346;
  t10365 = Sin(var1[9]);
  t10373 = t10287*t10328;
  t10374 = -1.*t10314*t10330;
  t10375 = t10373 + t10374;
  t10445 = t10132*t10408*t10392;
  t10447 = t10387*t10399;
  t10448 = t10445 + t10447;
  t10453 = Cos(var1[10]);
  t10454 = -1.*t10453;
  t10455 = 1. + t10454;
  t10466 = Sin(var1[10]);
  t10469 = t10365*t10375;
  t10471 = t10345*t10448;
  t10472 = t10469 + t10471;
  t10478 = t10345*t10375;
  t10480 = -1.*t10365*t10448;
  t10481 = t10478 + t10480;
  t4 = -1.*t3;
  t9980 = 1. + t4;
  t10012 = 0.135*t9980;
  t10013 = 0. + t10012;
  t10275 = -0.135*t10274;
  t10285 = 0. + t10275;
  t10289 = -1.*t10287;
  t10302 = 1. + t10289;
  t10303 = 0.135*t10302;
  t10305 = 0. + t10303;
  t10494 = t10132*t10026;
  t10495 = t10047*t10136*t10144;
  t10497 = t10494 + t10495;
  t10501 = t10026*t10047*t10136;
  t10504 = -1.*t10132*t10144;
  t10505 = t10501 + t10504;
  t10333 = -0.135*t10330;
  t10340 = 0. + t10333;
  t10359 = -0.09*t10356;
  t10369 = 0.049*t10365;
  t10371 = 0. + t10359 + t10369;
  t10531 = t3*t10505;
  t10534 = -1.*t10497*t10274;
  t10535 = t10531 + t10534;
  t10514 = t3*t10497;
  t10515 = t10505*t10274;
  t10525 = t10514 + t10515;
  t10397 = 0.135*t10395;
  t10400 = 0.049*t10399;
  t10402 = 0. + t10397 + t10400;
  t10411 = -0.049*t10395;
  t10412 = 0.135*t10399;
  t10414 = 0. + t10411 + t10412;
  t10548 = t10287*t10525;
  t10549 = t10535*t10330;
  t10550 = t10548 + t10549;
  t10428 = -0.049*t10356;
  t10434 = -0.09*t10365;
  t10441 = 0. + t10428 + t10434;
  t10457 = -0.049*t10455;
  t10467 = -0.21*t10466;
  t10468 = 0. + t10457 + t10467;
  t10541 = t10287*t10535;
  t10543 = -1.*t10525*t10330;
  t10544 = t10541 + t10543;
  t10571 = t10408*t10392*t10047;
  t10572 = t10550*t10399;
  t10576 = t10571 + t10572;
  t10475 = -0.21*t10455;
  t10476 = 0.049*t10466;
  t10477 = 0. + t10475 + t10476;
  t10578 = t10365*t10544;
  t10579 = t10345*t10576;
  t10580 = t10578 + t10579;
  t10582 = t10345*t10544;
  t10586 = -1.*t10365*t10576;
  t10587 = t10582 + t10586;
  t10615 = t10408*t10026*t3;
  t10616 = -1.*t10408*t10144*t10274;
  t10617 = t10615 + t10616;
  t10606 = t10408*t3*t10144;
  t10607 = t10408*t10026*t10274;
  t10611 = t10606 + t10607;
  t10625 = t10287*t10611;
  t10626 = t10617*t10330;
  t10627 = t10625 + t10626;
  t10619 = t10287*t10617;
  t10621 = -1.*t10611*t10330;
  t10623 = t10619 + t10621;
  t10637 = -1.*t10392*t10136;
  t10640 = t10627*t10399;
  t10641 = t10637 + t10640;
  t10644 = t10365*t10623;
  t10645 = t10345*t10641;
  t10648 = t10644 + t10645;
  t10650 = t10345*t10623;
  t10651 = -1.*t10365*t10641;
  t10652 = t10650 + t10651;
  p_output1[0]=0. + t10013*t10248 + t10270*t10285 + t10305*t10314 + t10328*t10340 + t10371*t10375 + t10387*t10402 + 0.1305*(t10387*t10392 - 1.*t10132*t10399*t10408) + t10132*t10408*t10414 + t10441*t10448 + t10468*t10472 + t10477*t10481 - 0.2707*(-1.*t10466*t10472 + t10453*t10481) - 0.0016*(t10453*t10472 + t10466*t10481) + var1[0];
  p_output1[1]=0. + t10047*t10408*t10414 + t10013*t10497 + t10285*t10505 + t10305*t10525 + t10340*t10535 + t10371*t10544 + t10402*t10550 + 0.1305*(-1.*t10047*t10399*t10408 + t10392*t10550) + t10441*t10576 + t10468*t10580 + t10477*t10587 - 0.2707*(-1.*t10466*t10580 + t10453*t10587) - 0.0016*(t10453*t10580 + t10466*t10587) + var1[1];
  p_output1[2]=0. + t10013*t10144*t10408 + t10026*t10285*t10408 - 1.*t10136*t10414 + t10305*t10611 + t10340*t10617 + t10371*t10623 + t10402*t10627 + 0.1305*(t10136*t10399 + t10392*t10627) + t10441*t10641 + t10468*t10648 + t10477*t10652 - 0.2707*(-1.*t10466*t10648 + t10453*t10652) - 0.0016*(t10453*t10648 + t10466*t10652) + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "p_fixed_knee_to_shin_left.hh"

namespace SymExpression
{

void p_fixed_knee_to_shin_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
