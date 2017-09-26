/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:29 GMT-04:00
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
  double t156;
  double t1983;
  double t5422;
  double t3373;
  double t5780;
  double t1961;
  double t3613;
  double t6878;
  double t6942;
  double t11270;
  double t11844;
  double t11848;
  double t11867;
  double t12047;
  double t12003;
  double t12027;
  double t12031;
  double t11951;
  double t12081;
  double t12132;
  double t12153;
  double t489;
  double t491;
  double t690;
  double t861;
  double t160;
  double t12286;
  double t12291;
  double t12305;
  double t12176;
  double t12179;
  double t12181;
  double t12203;
  double t12219;
  double t12224;
  double t12225;
  double t12405;
  double t12413;
  double t12419;
  double t12425;
  double t12427;
  double t12433;
  double t12437;
  double t12444;
  double t12445;
  double t12446;
  double t12453;
  double t12454;
  double t12476;
  double t12507;
  double t12510;
  double t12513;
  double t12534;
  double t12545;
  double t12552;
  double t12553;
  double t12572;
  double t12573;
  double t12575;
  double t712;
  double t1451;
  double t1650;
  double t1962;
  double t1970;
  double t11707;
  double t11769;
  double t11833;
  double t11843;
  double t11956;
  double t11973;
  double t11979;
  double t11996;
  double t12597;
  double t12603;
  double t12604;
  double t12610;
  double t12612;
  double t12614;
  double t12057;
  double t12058;
  double t12182;
  double t12211;
  double t12215;
  double t12621;
  double t12623;
  double t12636;
  double t12641;
  double t12642;
  double t12647;
  double t12248;
  double t12258;
  double t12270;
  double t12659;
  double t12663;
  double t12666;
  double t12365;
  double t12373;
  double t12381;
  double t12434;
  double t12440;
  double t12441;
  double t12650;
  double t12652;
  double t12653;
  double t12677;
  double t12682;
  double t12686;
  double t12448;
  double t12449;
  double t12452;
  double t12519;
  double t12536;
  double t12537;
  double t12690;
  double t12692;
  double t12693;
  double t12696;
  double t12700;
  double t12702;
  double t12560;
  double t12561;
  double t12570;
  double t12708;
  double t12709;
  double t12712;
  double t12722;
  double t12724;
  double t12725;
  double t12748;
  double t12749;
  double t12750;
  double t12756;
  double t12758;
  double t12759;
  double t12772;
  double t12773;
  double t12774;
  double t12761;
  double t12768;
  double t12769;
  double t12789;
  double t12790;
  double t12794;
  double t12798;
  double t12804;
  double t12808;
  double t12812;
  double t12813;
  double t12819;
  double t12830;
  double t12831;
  double t12832;
  double t12841;
  double t12842;
  double t12843;
  t156 = Cos(var1[3]);
  t1983 = Cos(var1[5]);
  t5422 = Sin(var1[3]);
  t3373 = Sin(var1[4]);
  t5780 = Sin(var1[5]);
  t1961 = Sin(var1[14]);
  t3613 = t156*t1983*t3373;
  t6878 = t5422*t5780;
  t6942 = t3613 + t6878;
  t11270 = Cos(var1[14]);
  t11844 = -1.*t1983*t5422;
  t11848 = t156*t3373*t5780;
  t11867 = t11844 + t11848;
  t12047 = Sin(var1[15]);
  t12003 = t1961*t6942;
  t12027 = t11270*t11867;
  t12031 = t12003 + t12027;
  t11951 = Cos(var1[15]);
  t12081 = t11270*t6942;
  t12132 = -1.*t1961*t11867;
  t12153 = t12081 + t12132;
  t489 = Cos(var1[16]);
  t491 = -1.*t489;
  t690 = 1. + t491;
  t861 = Sin(var1[16]);
  t160 = Cos(var1[4]);
  t12286 = t11951*t12031;
  t12291 = t12047*t12153;
  t12305 = t12286 + t12291;
  t12176 = Cos(var1[17]);
  t12179 = -1.*t12176;
  t12181 = 1. + t12179;
  t12203 = Sin(var1[17]);
  t12219 = -1.*t12047*t12031;
  t12224 = t11951*t12153;
  t12225 = t12219 + t12224;
  t12405 = t489*t156*t160;
  t12413 = t861*t12305;
  t12419 = t12405 + t12413;
  t12425 = Cos(var1[18]);
  t12427 = -1.*t12425;
  t12433 = 1. + t12427;
  t12437 = Sin(var1[18]);
  t12444 = t12203*t12225;
  t12445 = t12176*t12419;
  t12446 = t12444 + t12445;
  t12453 = t12176*t12225;
  t12454 = -1.*t12203*t12419;
  t12476 = t12453 + t12454;
  t12507 = Cos(var1[19]);
  t12510 = -1.*t12507;
  t12513 = 1. + t12510;
  t12534 = Sin(var1[19]);
  t12545 = -1.*t12437*t12446;
  t12552 = t12425*t12476;
  t12553 = t12545 + t12552;
  t12572 = t12425*t12446;
  t12573 = t12437*t12476;
  t12575 = t12572 + t12573;
  t712 = -0.049*t690;
  t1451 = -0.135*t861;
  t1650 = 0. + t712 + t1451;
  t1962 = 0.135*t1961;
  t1970 = 0. + t1962;
  t11707 = -1.*t11270;
  t11769 = 1. + t11707;
  t11833 = -0.135*t11769;
  t11843 = 0. + t11833;
  t11956 = -1.*t11951;
  t11973 = 1. + t11956;
  t11979 = -0.135*t11973;
  t11996 = 0. + t11979;
  t12597 = t1983*t5422*t3373;
  t12603 = -1.*t156*t5780;
  t12604 = t12597 + t12603;
  t12610 = t156*t1983;
  t12612 = t5422*t3373*t5780;
  t12614 = t12610 + t12612;
  t12057 = 0.135*t12047;
  t12058 = 0. + t12057;
  t12182 = -0.09*t12181;
  t12211 = 0.049*t12203;
  t12215 = 0. + t12182 + t12211;
  t12621 = t1961*t12604;
  t12623 = t11270*t12614;
  t12636 = t12621 + t12623;
  t12641 = t11270*t12604;
  t12642 = -1.*t1961*t12614;
  t12647 = t12641 + t12642;
  t12248 = -0.135*t690;
  t12258 = 0.049*t861;
  t12270 = 0. + t12248 + t12258;
  t12659 = t11951*t12636;
  t12663 = t12047*t12647;
  t12666 = t12659 + t12663;
  t12365 = -0.049*t12181;
  t12373 = -0.09*t12203;
  t12381 = 0. + t12365 + t12373;
  t12434 = -0.049*t12433;
  t12440 = -0.21*t12437;
  t12441 = 0. + t12434 + t12440;
  t12650 = -1.*t12047*t12636;
  t12652 = t11951*t12647;
  t12653 = t12650 + t12652;
  t12677 = t489*t160*t5422;
  t12682 = t861*t12666;
  t12686 = t12677 + t12682;
  t12448 = -0.21*t12433;
  t12449 = 0.049*t12437;
  t12452 = 0. + t12448 + t12449;
  t12519 = -0.2707*t12513;
  t12536 = 0.0016*t12534;
  t12537 = 0. + t12519 + t12536;
  t12690 = t12203*t12653;
  t12692 = t12176*t12686;
  t12693 = t12690 + t12692;
  t12696 = t12176*t12653;
  t12700 = -1.*t12203*t12686;
  t12702 = t12696 + t12700;
  t12560 = -0.0016*t12513;
  t12561 = -0.2707*t12534;
  t12570 = 0. + t12560 + t12561;
  t12708 = -1.*t12437*t12693;
  t12709 = t12425*t12702;
  t12712 = t12708 + t12709;
  t12722 = t12425*t12693;
  t12724 = t12437*t12702;
  t12725 = t12722 + t12724;
  t12748 = t160*t1983*t1961;
  t12749 = t11270*t160*t5780;
  t12750 = t12748 + t12749;
  t12756 = t11270*t160*t1983;
  t12758 = -1.*t160*t1961*t5780;
  t12759 = t12756 + t12758;
  t12772 = t11951*t12750;
  t12773 = t12047*t12759;
  t12774 = t12772 + t12773;
  t12761 = -1.*t12047*t12750;
  t12768 = t11951*t12759;
  t12769 = t12761 + t12768;
  t12789 = -1.*t489*t3373;
  t12790 = t861*t12774;
  t12794 = t12789 + t12790;
  t12798 = t12203*t12769;
  t12804 = t12176*t12794;
  t12808 = t12798 + t12804;
  t12812 = t12176*t12769;
  t12813 = -1.*t12203*t12794;
  t12819 = t12812 + t12813;
  t12830 = -1.*t12437*t12808;
  t12831 = t12425*t12819;
  t12832 = t12830 + t12831;
  t12841 = t12425*t12808;
  t12842 = t12437*t12819;
  t12843 = t12841 + t12842;
  p_output1[0]=0. + t11843*t11867 + t11996*t12031 + t12058*t12153 + t12215*t12225 + t12270*t12305 + t12381*t12419 + t12441*t12446 + t12452*t12476 + t12537*t12553 + t12570*t12575 + 0.0184*(t12534*t12553 + t12507*t12575) - 0.7055*(t12507*t12553 - 1.*t12534*t12575) + t156*t160*t1650 + t1970*t6942 - 0.1305*(t12305*t489 - 1.*t156*t160*t861) + var1[0];
  p_output1[1]=0. + t11843*t12614 + t11996*t12636 + t12058*t12647 + t12215*t12653 + t12270*t12666 + t12381*t12686 + t12441*t12693 + t12452*t12702 + t12537*t12712 + t12570*t12725 + 0.0184*(t12534*t12712 + t12507*t12725) - 0.7055*(t12507*t12712 - 1.*t12534*t12725) + t12604*t1970 + t160*t1650*t5422 - 0.1305*(t12666*t489 - 1.*t160*t5422*t861) + var1[1];
  p_output1[2]=0. + t11996*t12750 + t12058*t12759 + t12215*t12769 + t12270*t12774 + t12381*t12794 + t12441*t12808 + t12452*t12819 + t12537*t12832 + t12570*t12843 + 0.0184*(t12534*t12832 + t12507*t12843) - 0.7055*(t12507*t12832 - 1.*t12534*t12843) + t160*t1970*t1983 - 1.*t1650*t3373 + t11843*t160*t5780 - 0.1305*(t12774*t489 + t3373*t861) + var1[2];
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

#include "p_ankle_joint_right.hh"

namespace SymExpression
{

void p_ankle_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
