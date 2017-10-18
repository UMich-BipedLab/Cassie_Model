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
  double t437;
  double t458;
  double t427;
  double t444;
  double t461;
  double t422;
  double t477;
  double t479;
  double t484;
  double t448;
  double t466;
  double t468;
  double t485;
  double t419;
  double t501;
  double t503;
  double t507;
  double t476;
  double t486;
  double t495;
  double t508;
  double t524;
  double t499;
  double t510;
  double t512;
  double t414;
  double t526;
  double t529;
  double t537;
  double t538;
  double t542;
  double t543;
  double t545;
  double t546;
  double t547;
  double t551;
  double t520;
  double t548;
  double t549;
  double t411;
  double t552;
  double t555;
  double t560;
  double t566;
  double t550;
  double t563;
  double t564;
  double t359;
  double t570;
  double t571;
  double t572;
  double t354;
  double t606;
  double t607;
  double t609;
  double t601;
  double t602;
  double t603;
  double t619;
  double t620;
  double t622;
  double t604;
  double t613;
  double t617;
  double t618;
  double t623;
  double t624;
  double t628;
  double t631;
  double t632;
  double t633;
  double t634;
  double t635;
  double t627;
  double t636;
  double t637;
  double t639;
  double t640;
  double t641;
  double t583;
  double t638;
  double t642;
  double t644;
  double t647;
  double t648;
  double t649;
  double t666;
  double t667;
  double t668;
  double t661;
  double t662;
  double t664;
  double t665;
  double t669;
  double t670;
  double t673;
  double t674;
  double t675;
  double t677;
  double t678;
  double t680;
  double t671;
  double t681;
  double t683;
  double t685;
  double t686;
  double t687;
  double t684;
  double t689;
  double t690;
  double t693;
  double t694;
  double t697;
  double t565;
  double t574;
  double t576;
  double t589;
  double t594;
  double t595;
  double t645;
  double t650;
  double t652;
  double t655;
  double t656;
  double t657;
  double t691;
  double t698;
  double t699;
  double t701;
  double t702;
  double t703;
  double t758;
  double t759;
  double t749;
  double t750;
  double t776;
  double t777;
  double t786;
  double t787;
  double t796;
  double t797;
  double t706;
  double t707;
  double t708;
  double t727;
  double t728;
  double t729;
  double t731;
  double t734;
  double t735;
  double t738;
  double t740;
  double t741;
  double t743;
  double t745;
  double t746;
  double t751;
  double t753;
  double t754;
  double t760;
  double t761;
  double t762;
  double t764;
  double t765;
  double t766;
  double t772;
  double t773;
  double t774;
  double t778;
  double t779;
  double t780;
  double t782;
  double t783;
  double t784;
  double t788;
  double t789;
  double t790;
  double t792;
  double t793;
  double t794;
  double t798;
  double t799;
  double t800;
  double t802;
  double t803;
  double t804;
  double t709;
  double t710;
  double t712;
  double t713;
  double t715;
  double t716;
  t437 = Cos(var1[5]);
  t458 = Sin(var1[3]);
  t427 = Cos(var1[3]);
  t444 = Sin(var1[4]);
  t461 = Sin(var1[5]);
  t422 = Cos(var1[6]);
  t477 = -1.*t437*t458;
  t479 = t427*t444*t461;
  t484 = t477 + t479;
  t448 = t427*t437*t444;
  t466 = t458*t461;
  t468 = t448 + t466;
  t485 = Sin(var1[6]);
  t419 = Cos(var1[7]);
  t501 = t422*t484;
  t503 = t468*t485;
  t507 = t501 + t503;
  t476 = t422*t468;
  t486 = -1.*t484*t485;
  t495 = t476 + t486;
  t508 = Sin(var1[7]);
  t524 = Cos(var1[9]);
  t499 = t419*t495;
  t510 = -1.*t507*t508;
  t512 = t499 + t510;
  t414 = Sin(var1[9]);
  t526 = Cos(var1[4]);
  t529 = Cos(var1[8]);
  t537 = t427*t526*t529;
  t538 = t419*t507;
  t542 = t495*t508;
  t543 = t538 + t542;
  t545 = Sin(var1[8]);
  t546 = t543*t545;
  t547 = t537 + t546;
  t551 = Cos(var1[10]);
  t520 = t414*t512;
  t548 = t524*t547;
  t549 = t520 + t548;
  t411 = Sin(var1[10]);
  t552 = t524*t512;
  t555 = -1.*t414*t547;
  t560 = t552 + t555;
  t566 = Cos(var1[11]);
  t550 = -1.*t411*t549;
  t563 = t551*t560;
  t564 = t550 + t563;
  t359 = Sin(var1[11]);
  t570 = t551*t549;
  t571 = t411*t560;
  t572 = t570 + t571;
  t354 = Sin(var1[12]);
  t606 = t427*t437;
  t607 = t458*t444*t461;
  t609 = t606 + t607;
  t601 = t437*t458*t444;
  t602 = -1.*t427*t461;
  t603 = t601 + t602;
  t619 = t422*t609;
  t620 = t603*t485;
  t622 = t619 + t620;
  t604 = t422*t603;
  t613 = -1.*t609*t485;
  t617 = t604 + t613;
  t618 = t419*t617;
  t623 = -1.*t622*t508;
  t624 = t618 + t623;
  t628 = t526*t529*t458;
  t631 = t419*t622;
  t632 = t617*t508;
  t633 = t631 + t632;
  t634 = t633*t545;
  t635 = t628 + t634;
  t627 = t414*t624;
  t636 = t524*t635;
  t637 = t627 + t636;
  t639 = t524*t624;
  t640 = -1.*t414*t635;
  t641 = t639 + t640;
  t583 = Cos(var1[12]);
  t638 = -1.*t411*t637;
  t642 = t551*t641;
  t644 = t638 + t642;
  t647 = t551*t637;
  t648 = t411*t641;
  t649 = t647 + t648;
  t666 = t526*t422*t461;
  t667 = t526*t437*t485;
  t668 = t666 + t667;
  t661 = t526*t437*t422;
  t662 = -1.*t526*t461*t485;
  t664 = t661 + t662;
  t665 = t419*t664;
  t669 = -1.*t668*t508;
  t670 = t665 + t669;
  t673 = -1.*t529*t444;
  t674 = t419*t668;
  t675 = t664*t508;
  t677 = t674 + t675;
  t678 = t677*t545;
  t680 = t673 + t678;
  t671 = t414*t670;
  t681 = t524*t680;
  t683 = t671 + t681;
  t685 = t524*t670;
  t686 = -1.*t414*t680;
  t687 = t685 + t686;
  t684 = -1.*t411*t683;
  t689 = t551*t687;
  t690 = t684 + t689;
  t693 = t551*t683;
  t694 = t411*t687;
  t697 = t693 + t694;
  t565 = t359*t564;
  t574 = t566*t572;
  t576 = t565 + t574;
  t589 = t566*t564;
  t594 = -1.*t359*t572;
  t595 = t589 + t594;
  t645 = t359*t644;
  t650 = t566*t649;
  t652 = t645 + t650;
  t655 = t566*t644;
  t656 = -1.*t359*t649;
  t657 = t655 + t656;
  t691 = t359*t690;
  t698 = t566*t697;
  t699 = t691 + t698;
  t701 = t566*t690;
  t702 = -1.*t359*t697;
  t703 = t701 + t702;
  t758 = -1.*t529;
  t759 = 1. + t758;
  t749 = -1.*t524;
  t750 = 1. + t749;
  t776 = -1.*t551;
  t777 = 1. + t776;
  t786 = -1.*t566;
  t787 = 1. + t786;
  t796 = -1.*t583;
  t797 = 1. + t796;
  t706 = t583*t576;
  t707 = t354*t595;
  t708 = t706 + t707;
  t727 = -1.*t422;
  t728 = 1. + t727;
  t729 = 0.135*t728;
  t731 = 0. + t729;
  t734 = -0.135*t485;
  t735 = 0. + t734;
  t738 = -1.*t419;
  t740 = 1. + t738;
  t741 = 0.135*t740;
  t743 = 0. + t741;
  t745 = -0.135*t508;
  t746 = 0. + t745;
  t751 = -0.09*t750;
  t753 = 0.049*t414;
  t754 = 0. + t751 + t753;
  t760 = 0.135*t759;
  t761 = 0.049*t545;
  t762 = 0. + t760 + t761;
  t764 = -0.049*t759;
  t765 = 0.135*t545;
  t766 = 0. + t764 + t765;
  t772 = -0.049*t750;
  t773 = -0.09*t414;
  t774 = 0. + t772 + t773;
  t778 = -0.049*t777;
  t779 = -0.21*t411;
  t780 = 0. + t778 + t779;
  t782 = -0.21*t777;
  t783 = 0.049*t411;
  t784 = 0. + t782 + t783;
  t788 = -0.2707*t787;
  t789 = 0.0016*t359;
  t790 = 0. + t788 + t789;
  t792 = -0.0016*t787;
  t793 = -0.2707*t359;
  t794 = 0. + t792 + t793;
  t798 = 0.0184*t797;
  t799 = -0.7055*t354;
  t800 = 0. + t798 + t799;
  t802 = -0.7055*t797;
  t803 = -0.0184*t354;
  t804 = 0. + t802 + t803;
  t709 = t583*t652;
  t710 = t354*t657;
  t712 = t709 + t710;
  t713 = t583*t699;
  t715 = t354*t703;
  t716 = t713 + t715;
  p_output1[0]=t354*t576 - 1.*t583*t595;
  p_output1[1]=t354*t652 - 1.*t583*t657;
  p_output1[2]=t354*t699 - 1.*t583*t703;
  p_output1[3]=0.;
  p_output1[4]=t708;
  p_output1[5]=t712;
  p_output1[6]=t716;
  p_output1[7]=0.;
  p_output1[8]=-1.*t529*t543 + t427*t526*t545;
  p_output1[9]=t458*t526*t545 - 1.*t529*t633;
  p_output1[10]=-1.*t444*t545 - 1.*t529*t677;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t529*t543 - 1.*t427*t526*t545) - 1.1135*(-1.*t354*t576 + t583*t595) - 0.0216*t708 + t484*t731 + t468*t735 + t507*t743 + t495*t746 + t512*t754 + t543*t762 + t427*t526*t766 + t547*t774 + t549*t780 + t560*t784 + t564*t790 + t572*t794 + t576*t800 + t595*t804 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t458*t526*t545 + t529*t633) - 1.1135*(-1.*t354*t652 + t583*t657) - 0.0216*t712 + t609*t731 + t603*t735 + t622*t743 + t617*t746 + t624*t754 + t633*t762 + t458*t526*t766 + t635*t774 + t637*t780 + t641*t784 + t644*t790 + t649*t794 + t652*t800 + t657*t804 + var1[1];
  p_output1[14]=0. + 0.1305*(t444*t545 + t529*t677) - 1.1135*(-1.*t354*t699 + t583*t703) - 0.0216*t716 + t461*t526*t731 + t437*t526*t735 + t668*t743 + t664*t746 + t670*t754 + t677*t762 - 1.*t444*t766 + t680*t774 + t683*t780 + t687*t784 + t690*t790 + t697*t794 + t699*t800 + t703*t804 + var1[2];
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

#include "H_toe_joint_left.hh"

namespace SymExpression
{

void H_toe_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
