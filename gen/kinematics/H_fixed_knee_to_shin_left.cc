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
  double t10013;
  double t10257;
  double t10012;
  double t10209;
  double t10263;
  double t9030;
  double t10286;
  double t10303;
  double t10305;
  double t10251;
  double t10270;
  double t10275;
  double t10306;
  double t4953;
  double t10328;
  double t10333;
  double t10340;
  double t10285;
  double t10313;
  double t10317;
  double t10344;
  double t10373;
  double t10318;
  double t10359;
  double t10369;
  double t2458;
  double t10375;
  double t10376;
  double t10378;
  double t10384;
  double t10397;
  double t10400;
  double t10402;
  double t10406;
  double t10411;
  double t2177;
  double t10467;
  double t10468;
  double t10469;
  double t10445;
  double t10447;
  double t10449;
  double t10476;
  double t10477;
  double t10478;
  double t10457;
  double t10471;
  double t10474;
  double t10424;
  double t10475;
  double t10482;
  double t10483;
  double t10485;
  double t10486;
  double t10488;
  double t10489;
  double t10490;
  double t10491;
  double t10537;
  double t10541;
  double t10544;
  double t10515;
  double t10528;
  double t10531;
  double t10535;
  double t10547;
  double t10548;
  double t10553;
  double t10556;
  double t10557;
  double t10558;
  double t10562;
  double t10569;
  double t10371;
  double t10412;
  double t10421;
  double t10425;
  double t10427;
  double t10428;
  double t10484;
  double t10492;
  double t10494;
  double t10499;
  double t10501;
  double t10505;
  double t10549;
  double t10571;
  double t10572;
  double t10578;
  double t10579;
  double t10581;
  double t10660;
  double t10662;
  double t10650;
  double t10653;
  double t10686;
  double t10687;
  double t10590;
  double t10591;
  double t10594;
  double t10623;
  double t10624;
  double t10625;
  double t10626;
  double t10628;
  double t10629;
  double t10632;
  double t10634;
  double t10636;
  double t10640;
  double t10644;
  double t10645;
  double t10654;
  double t10655;
  double t10658;
  double t10663;
  double t10664;
  double t10665;
  double t10668;
  double t10671;
  double t10672;
  double t10681;
  double t10682;
  double t10683;
  double t10688;
  double t10692;
  double t10694;
  double t10696;
  double t10697;
  double t10698;
  double t10595;
  double t10597;
  double t10598;
  double t10599;
  double t10601;
  double t10602;
  t10013 = Cos(var1[5]);
  t10257 = Sin(var1[3]);
  t10012 = Cos(var1[3]);
  t10209 = Sin(var1[4]);
  t10263 = Sin(var1[5]);
  t9030 = Cos(var1[6]);
  t10286 = -1.*t10013*t10257;
  t10303 = t10012*t10209*t10263;
  t10305 = t10286 + t10303;
  t10251 = t10012*t10013*t10209;
  t10270 = t10257*t10263;
  t10275 = t10251 + t10270;
  t10306 = Sin(var1[6]);
  t4953 = Cos(var1[7]);
  t10328 = t9030*t10305;
  t10333 = t10275*t10306;
  t10340 = t10328 + t10333;
  t10285 = t9030*t10275;
  t10313 = -1.*t10305*t10306;
  t10317 = t10285 + t10313;
  t10344 = Sin(var1[7]);
  t10373 = Cos(var1[9]);
  t10318 = t4953*t10317;
  t10359 = -1.*t10340*t10344;
  t10369 = t10318 + t10359;
  t2458 = Sin(var1[9]);
  t10375 = Cos(var1[4]);
  t10376 = Cos(var1[8]);
  t10378 = t10012*t10375*t10376;
  t10384 = t4953*t10340;
  t10397 = t10317*t10344;
  t10400 = t10384 + t10397;
  t10402 = Sin(var1[8]);
  t10406 = t10400*t10402;
  t10411 = t10378 + t10406;
  t2177 = Sin(var1[10]);
  t10467 = t10012*t10013;
  t10468 = t10257*t10209*t10263;
  t10469 = t10467 + t10468;
  t10445 = t10013*t10257*t10209;
  t10447 = -1.*t10012*t10263;
  t10449 = t10445 + t10447;
  t10476 = t9030*t10469;
  t10477 = t10449*t10306;
  t10478 = t10476 + t10477;
  t10457 = t9030*t10449;
  t10471 = -1.*t10469*t10306;
  t10474 = t10457 + t10471;
  t10424 = Cos(var1[10]);
  t10475 = t4953*t10474;
  t10482 = -1.*t10478*t10344;
  t10483 = t10475 + t10482;
  t10485 = t10375*t10376*t10257;
  t10486 = t4953*t10478;
  t10488 = t10474*t10344;
  t10489 = t10486 + t10488;
  t10490 = t10489*t10402;
  t10491 = t10485 + t10490;
  t10537 = t10375*t9030*t10263;
  t10541 = t10375*t10013*t10306;
  t10544 = t10537 + t10541;
  t10515 = t10375*t10013*t9030;
  t10528 = -1.*t10375*t10263*t10306;
  t10531 = t10515 + t10528;
  t10535 = t4953*t10531;
  t10547 = -1.*t10544*t10344;
  t10548 = t10535 + t10547;
  t10553 = -1.*t10376*t10209;
  t10556 = t4953*t10544;
  t10557 = t10531*t10344;
  t10558 = t10556 + t10557;
  t10562 = t10558*t10402;
  t10569 = t10553 + t10562;
  t10371 = t2458*t10369;
  t10412 = t10373*t10411;
  t10421 = t10371 + t10412;
  t10425 = t10373*t10369;
  t10427 = -1.*t2458*t10411;
  t10428 = t10425 + t10427;
  t10484 = t2458*t10483;
  t10492 = t10373*t10491;
  t10494 = t10484 + t10492;
  t10499 = t10373*t10483;
  t10501 = -1.*t2458*t10491;
  t10505 = t10499 + t10501;
  t10549 = t2458*t10548;
  t10571 = t10373*t10569;
  t10572 = t10549 + t10571;
  t10578 = t10373*t10548;
  t10579 = -1.*t2458*t10569;
  t10581 = t10578 + t10579;
  t10660 = -1.*t10376;
  t10662 = 1. + t10660;
  t10650 = -1.*t10373;
  t10653 = 1. + t10650;
  t10686 = -1.*t10424;
  t10687 = 1. + t10686;
  t10590 = t10424*t10421;
  t10591 = t2177*t10428;
  t10594 = t10590 + t10591;
  t10623 = -1.*t9030;
  t10624 = 1. + t10623;
  t10625 = 0.135*t10624;
  t10626 = 0. + t10625;
  t10628 = -0.135*t10306;
  t10629 = 0. + t10628;
  t10632 = -1.*t4953;
  t10634 = 1. + t10632;
  t10636 = 0.135*t10634;
  t10640 = 0. + t10636;
  t10644 = -0.135*t10344;
  t10645 = 0. + t10644;
  t10654 = -0.09*t10653;
  t10655 = 0.049*t2458;
  t10658 = 0. + t10654 + t10655;
  t10663 = 0.135*t10662;
  t10664 = 0.049*t10402;
  t10665 = 0. + t10663 + t10664;
  t10668 = -0.049*t10662;
  t10671 = 0.135*t10402;
  t10672 = 0. + t10668 + t10671;
  t10681 = -0.049*t10653;
  t10682 = -0.09*t2458;
  t10683 = 0. + t10681 + t10682;
  t10688 = -0.049*t10687;
  t10692 = -0.21*t2177;
  t10694 = 0. + t10688 + t10692;
  t10696 = -0.21*t10687;
  t10697 = 0.049*t2177;
  t10698 = 0. + t10696 + t10697;
  t10595 = t10424*t10494;
  t10597 = t2177*t10505;
  t10598 = t10595 + t10597;
  t10599 = t10424*t10572;
  t10601 = t2177*t10581;
  t10602 = t10599 + t10601;
  p_output1[0]=-1.*t10424*t10428 + t10421*t2177;
  p_output1[1]=-1.*t10424*t10505 + t10494*t2177;
  p_output1[2]=-1.*t10424*t10581 + t10572*t2177;
  p_output1[3]=0.;
  p_output1[4]=t10594;
  p_output1[5]=t10598;
  p_output1[6]=t10602;
  p_output1[7]=0.;
  p_output1[8]=-1.*t10376*t10400 + t10012*t10375*t10402;
  p_output1[9]=t10257*t10375*t10402 - 1.*t10376*t10489;
  p_output1[10]=-1.*t10209*t10402 - 1.*t10376*t10558;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t10376*t10400 - 1.*t10012*t10375*t10402) - 0.0016*t10594 + t10305*t10626 + t10275*t10629 + t10340*t10640 + t10317*t10645 + t10369*t10658 + t10400*t10665 + t10012*t10375*t10672 + t10411*t10683 + t10421*t10694 + t10428*t10698 - 0.2707*(t10424*t10428 - 1.*t10421*t2177) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t10257*t10375*t10402 + t10376*t10489) - 0.0016*t10598 + t10469*t10626 + t10449*t10629 + t10478*t10640 + t10474*t10645 + t10483*t10658 + t10489*t10665 + t10257*t10375*t10672 + t10491*t10683 + t10494*t10694 + t10505*t10698 - 0.2707*(t10424*t10505 - 1.*t10494*t2177) + var1[1];
  p_output1[14]=0. + 0.1305*(t10209*t10402 + t10376*t10558) - 0.0016*t10602 + t10263*t10375*t10626 + t10013*t10375*t10629 + t10544*t10640 + t10531*t10645 + t10548*t10658 + t10558*t10665 - 1.*t10209*t10672 + t10569*t10683 + t10572*t10694 + t10581*t10698 - 0.2707*(t10424*t10581 - 1.*t10572*t2177) + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "H_fixed_knee_to_shin_left.hh"

namespace SymExpression
{

void H_fixed_knee_to_shin_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
