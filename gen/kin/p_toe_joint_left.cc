/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:37 GMT-04:00
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
  double t383;
  double t370;
  double t392;
  double t378;
  double t395;
  double t338;
  double t382;
  double t411;
  double t413;
  double t419;
  double t422;
  double t427;
  double t432;
  double t452;
  double t477;
  double t478;
  double t479;
  double t466;
  double t468;
  double t469;
  double t483;
  double t515;
  double t516;
  double t519;
  double t522;
  double t510;
  double t512;
  double t513;
  double t534;
  double t487;
  double t489;
  double t491;
  double t498;
  double t503;
  double t504;
  double t507;
  double t551;
  double t552;
  double t553;
  double t556;
  double t558;
  double t559;
  double t562;
  double t565;
  double t566;
  double t567;
  double t576;
  double t577;
  double t581;
  double t584;
  double t586;
  double t588;
  double t593;
  double t596;
  double t599;
  double t600;
  double t606;
  double t607;
  double t608;
  double t610;
  double t611;
  double t612;
  double t614;
  double t619;
  double t620;
  double t621;
  double t628;
  double t629;
  double t630;
  double t350;
  double t353;
  double t354;
  double t359;
  double t437;
  double t444;
  double t454;
  double t455;
  double t458;
  double t461;
  double t641;
  double t642;
  double t643;
  double t645;
  double t646;
  double t647;
  double t484;
  double t485;
  double t495;
  double t499;
  double t501;
  double t653;
  double t654;
  double t655;
  double t649;
  double t650;
  double t651;
  double t520;
  double t524;
  double t526;
  double t537;
  double t538;
  double t541;
  double t661;
  double t662;
  double t663;
  double t548;
  double t549;
  double t550;
  double t560;
  double t563;
  double t564;
  double t657;
  double t658;
  double t659;
  double t670;
  double t671;
  double t672;
  double t571;
  double t572;
  double t574;
  double t589;
  double t594;
  double t595;
  double t674;
  double t675;
  double t676;
  double t678;
  double t679;
  double t680;
  double t602;
  double t603;
  double t604;
  double t613;
  double t617;
  double t618;
  double t682;
  double t683;
  double t684;
  double t686;
  double t687;
  double t688;
  double t623;
  double t624;
  double t627;
  double t690;
  double t691;
  double t692;
  double t694;
  double t695;
  double t696;
  double t713;
  double t714;
  double t715;
  double t709;
  double t710;
  double t711;
  double t721;
  double t722;
  double t723;
  double t717;
  double t718;
  double t719;
  double t730;
  double t731;
  double t732;
  double t734;
  double t735;
  double t736;
  double t738;
  double t739;
  double t740;
  double t742;
  double t743;
  double t744;
  double t746;
  double t747;
  double t748;
  double t750;
  double t751;
  double t752;
  double t754;
  double t755;
  double t756;
  t383 = Cos(var1[3]);
  t370 = Cos(var1[5]);
  t392 = Sin(var1[4]);
  t378 = Sin(var1[3]);
  t395 = Sin(var1[5]);
  t338 = Cos(var1[6]);
  t382 = -1.*t370*t378;
  t411 = t383*t392*t395;
  t413 = t382 + t411;
  t419 = t383*t370*t392;
  t422 = t378*t395;
  t427 = t419 + t422;
  t432 = Sin(var1[6]);
  t452 = Cos(var1[7]);
  t477 = t338*t427;
  t478 = -1.*t413*t432;
  t479 = t477 + t478;
  t466 = t338*t413;
  t468 = t427*t432;
  t469 = t466 + t468;
  t483 = Sin(var1[7]);
  t515 = Cos(var1[8]);
  t516 = -1.*t515;
  t519 = 1. + t516;
  t522 = Sin(var1[8]);
  t510 = t452*t469;
  t512 = t479*t483;
  t513 = t510 + t512;
  t534 = Cos(var1[4]);
  t487 = Cos(var1[9]);
  t489 = -1.*t487;
  t491 = 1. + t489;
  t498 = Sin(var1[9]);
  t503 = t452*t479;
  t504 = -1.*t469*t483;
  t507 = t503 + t504;
  t551 = t383*t534*t515;
  t552 = t513*t522;
  t553 = t551 + t552;
  t556 = Cos(var1[10]);
  t558 = -1.*t556;
  t559 = 1. + t558;
  t562 = Sin(var1[10]);
  t565 = t498*t507;
  t566 = t487*t553;
  t567 = t565 + t566;
  t576 = t487*t507;
  t577 = -1.*t498*t553;
  t581 = t576 + t577;
  t584 = Cos(var1[11]);
  t586 = -1.*t584;
  t588 = 1. + t586;
  t593 = Sin(var1[11]);
  t596 = -1.*t562*t567;
  t599 = t556*t581;
  t600 = t596 + t599;
  t606 = t556*t567;
  t607 = t562*t581;
  t608 = t606 + t607;
  t610 = Cos(var1[12]);
  t611 = -1.*t610;
  t612 = 1. + t611;
  t614 = Sin(var1[12]);
  t619 = t593*t600;
  t620 = t584*t608;
  t621 = t619 + t620;
  t628 = t584*t600;
  t629 = -1.*t593*t608;
  t630 = t628 + t629;
  t350 = -1.*t338;
  t353 = 1. + t350;
  t354 = 0.135*t353;
  t359 = 0. + t354;
  t437 = -0.135*t432;
  t444 = 0. + t437;
  t454 = -1.*t452;
  t455 = 1. + t454;
  t458 = 0.135*t455;
  t461 = 0. + t458;
  t641 = t383*t370;
  t642 = t378*t392*t395;
  t643 = t641 + t642;
  t645 = t370*t378*t392;
  t646 = -1.*t383*t395;
  t647 = t645 + t646;
  t484 = -0.135*t483;
  t485 = 0. + t484;
  t495 = -0.09*t491;
  t499 = 0.049*t498;
  t501 = 0. + t495 + t499;
  t653 = t338*t647;
  t654 = -1.*t643*t432;
  t655 = t653 + t654;
  t649 = t338*t643;
  t650 = t647*t432;
  t651 = t649 + t650;
  t520 = 0.135*t519;
  t524 = 0.049*t522;
  t526 = 0. + t520 + t524;
  t537 = -0.049*t519;
  t538 = 0.135*t522;
  t541 = 0. + t537 + t538;
  t661 = t452*t651;
  t662 = t655*t483;
  t663 = t661 + t662;
  t548 = -0.049*t491;
  t549 = -0.09*t498;
  t550 = 0. + t548 + t549;
  t560 = -0.049*t559;
  t563 = -0.21*t562;
  t564 = 0. + t560 + t563;
  t657 = t452*t655;
  t658 = -1.*t651*t483;
  t659 = t657 + t658;
  t670 = t534*t515*t378;
  t671 = t663*t522;
  t672 = t670 + t671;
  t571 = -0.21*t559;
  t572 = 0.049*t562;
  t574 = 0. + t571 + t572;
  t589 = -0.2707*t588;
  t594 = 0.0016*t593;
  t595 = 0. + t589 + t594;
  t674 = t498*t659;
  t675 = t487*t672;
  t676 = t674 + t675;
  t678 = t487*t659;
  t679 = -1.*t498*t672;
  t680 = t678 + t679;
  t602 = -0.0016*t588;
  t603 = -0.2707*t593;
  t604 = 0. + t602 + t603;
  t613 = 0.0184*t612;
  t617 = -0.7055*t614;
  t618 = 0. + t613 + t617;
  t682 = -1.*t562*t676;
  t683 = t556*t680;
  t684 = t682 + t683;
  t686 = t556*t676;
  t687 = t562*t680;
  t688 = t686 + t687;
  t623 = -0.7055*t612;
  t624 = -0.0184*t614;
  t627 = 0. + t623 + t624;
  t690 = t593*t684;
  t691 = t584*t688;
  t692 = t690 + t691;
  t694 = t584*t684;
  t695 = -1.*t593*t688;
  t696 = t694 + t695;
  t713 = t534*t370*t338;
  t714 = -1.*t534*t395*t432;
  t715 = t713 + t714;
  t709 = t534*t338*t395;
  t710 = t534*t370*t432;
  t711 = t709 + t710;
  t721 = t452*t711;
  t722 = t715*t483;
  t723 = t721 + t722;
  t717 = t452*t715;
  t718 = -1.*t711*t483;
  t719 = t717 + t718;
  t730 = -1.*t515*t392;
  t731 = t723*t522;
  t732 = t730 + t731;
  t734 = t498*t719;
  t735 = t487*t732;
  t736 = t734 + t735;
  t738 = t487*t719;
  t739 = -1.*t498*t732;
  t740 = t738 + t739;
  t742 = -1.*t562*t736;
  t743 = t556*t740;
  t744 = t742 + t743;
  t746 = t556*t736;
  t747 = t562*t740;
  t748 = t746 + t747;
  t750 = t593*t744;
  t751 = t584*t748;
  t752 = t750 + t751;
  t754 = t584*t744;
  t755 = -1.*t593*t748;
  t756 = t754 + t755;
  p_output1[0]=0. + t359*t413 + t427*t444 + t461*t469 + t479*t485 + t501*t507 + t513*t526 + 0.1305*(t513*t515 - 1.*t383*t522*t534) + t383*t534*t541 + t550*t553 + t564*t567 + t574*t581 + t595*t600 + t604*t608 + t618*t621 + t627*t630 - 1.1135*(-1.*t614*t621 + t610*t630) - 0.0216*(t610*t621 + t614*t630) + var1[0];
  p_output1[1]=0. + t378*t534*t541 + t359*t643 + t444*t647 + t461*t651 + t485*t655 + t501*t659 + t526*t663 + 0.1305*(-1.*t378*t522*t534 + t515*t663) + t550*t672 + t564*t676 + t574*t680 + t595*t684 + t604*t688 + t618*t692 + t627*t696 - 1.1135*(-1.*t614*t692 + t610*t696) - 0.0216*(t610*t692 + t614*t696) + var1[1];
  p_output1[2]=0. + t359*t395*t534 + t370*t444*t534 - 1.*t392*t541 + t461*t711 + t485*t715 + t501*t719 + t526*t723 + 0.1305*(t392*t522 + t515*t723) + t550*t732 + t564*t736 + t574*t740 + t595*t744 + t604*t748 + t618*t752 + t627*t756 - 1.1135*(-1.*t614*t752 + t610*t756) - 0.0216*(t610*t752 + t614*t756) + var1[2];
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

#include "p_toe_joint_left.hh"

namespace SymExpression
{

void p_toe_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
