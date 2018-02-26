/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:33:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_VectorNav_to_RightToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t288;
  double t490;
  double t499;
  double t525;
  double t491;
  double t502;
  double t505;
  double t479;
  double t526;
  double t527;
  double t528;
  double t550;
  double t519;
  double t533;
  double t535;
  double t457;
  double t559;
  double t563;
  double t566;
  double t574;
  double t544;
  double t567;
  double t570;
  double t453;
  double t575;
  double t578;
  double t579;
  double t586;
  double t428;
  double t634;
  double t637;
  double t627;
  double t628;
  double t639;
  double t640;
  double t642;
  double t644;
  double t647;
  double t650;
  double t653;
  double t655;
  double t619;
  double t622;
  double t631;
  double t632;
  double t645;
  double t656;
  double t657;
  double t661;
  double t663;
  double t664;
  double t667;
  double t668;
  double t611;
  double t612;
  double t623;
  double t624;
  double t659;
  double t671;
  double t672;
  double t674;
  double t675;
  double t677;
  double t678;
  double t679;
  double t603;
  double t571;
  double t582;
  double t583;
  double t584;
  double t587;
  double t588;
  double t589;
  double t591;
  double t594;
  double t599;
  double t601;
  double t605;
  double t607;
  double t609;
  double t610;
  double t615;
  double t617;
  double t673;
  double t680;
  double t681;
  double t682;
  double t683;
  double t684;
  double t685;
  double t686;
  double t687;
  double t688;
  double t689;
  double t712;
  double t713;
  double t714;
  double t711;
  double t715;
  double t716;
  double t718;
  double t719;
  double t717;
  double t720;
  double t721;
  double t723;
  double t724;
  double t725;
  double t595;
  double t596;
  double t602;
  double t604;
  double t690;
  double t691;
  double t722;
  double t726;
  double t727;
  double t728;
  double t729;
  double t730;
  double t731;
  double t732;
  double t733;
  double t734;
  double t735;
  double t695;
  double t696;
  double t697;
  double t698;
  double t699;
  double t704;
  double t705;
  double t706;
  double t707;
  double t708;
  double t693;
  double t694;
  double t424;
  double t749;
  double t738;
  double t739;
  double t741;
  double t742;
  double t743;
  double t701;
  double t702;
  double t703;
  double t744;
  double t709;
  t288 = Cos(var1[8]);
  t490 = Cos(var1[13]);
  t499 = Sin(var1[13]);
  t525 = Cos(var1[12]);
  t491 = 0.642788*t490;
  t502 = -0.766044*t499;
  t505 = t491 + t502;
  t479 = Sin(var1[12]);
  t526 = -0.766044*t490;
  t527 = -0.642788*t499;
  t528 = t526 + t527;
  t550 = Cos(var1[11]);
  t519 = -1.*t479*t505;
  t533 = t525*t528;
  t535 = 0. + t519 + t533;
  t457 = Sin(var1[11]);
  t559 = t525*t505;
  t563 = t479*t528;
  t566 = 0. + t559 + t563;
  t574 = Cos(var1[10]);
  t544 = t457*t535;
  t567 = t550*t566;
  t570 = 0. + t544 + t567;
  t453 = Sin(var1[10]);
  t575 = t550*t535;
  t578 = -1.*t457*t566;
  t579 = 0. + t575 + t578;
  t586 = Cos(var1[9]);
  t428 = Sin(var1[9]);
  t634 = -1.*t490;
  t637 = 1. + t634;
  t627 = -1.*t525;
  t628 = 1. + t627;
  t639 = 1.0335*t637;
  t640 = 1.0512*t490;
  t642 = -0.052199999999999996*t499;
  t644 = 0. + t639 + t640 + t642;
  t647 = -0.0532*t637;
  t650 = -0.001*t490;
  t653 = 0.017699999999999827*t499;
  t655 = 0. + t647 + t650 + t653;
  t619 = -1.*t550;
  t622 = 1. + t619;
  t631 = -0.0132*t628;
  t632 = -0.6255*t479;
  t645 = t479*t644;
  t656 = t525*t655;
  t657 = 0. + t631 + t632 + t645 + t656;
  t661 = 0.6255*t628;
  t663 = -0.0132*t479;
  t664 = t525*t644;
  t667 = -1.*t479*t655;
  t668 = 0. + t661 + t663 + t664 + t667;
  t611 = -1.*t574;
  t612 = 1. + t611;
  t623 = 0.1907*t622;
  t624 = -0.0332*t457;
  t659 = -1.*t457*t657;
  t671 = t550*t668;
  t672 = 0. + t623 + t624 + t659 + t671;
  t674 = -0.0332*t622;
  t675 = -0.1907*t457;
  t677 = t550*t657;
  t678 = t457*t668;
  t679 = 0. + t674 + t675 + t677 + t678;
  t603 = Sin(var1[8]);
  t571 = -1.*t453*t570;
  t582 = t574*t579;
  t583 = 0. + t571 + t582;
  t584 = t428*t583;
  t587 = t574*t570;
  t588 = t453*t579;
  t589 = 0. + t587 + t588;
  t591 = t586*t589;
  t594 = 0. + t584 + t591;
  t599 = -1.*t288;
  t601 = 1. + t599;
  t605 = -1.*t586;
  t607 = 1. + t605;
  t609 = -0.0806*t607;
  t610 = -0.01*t428;
  t615 = -0.0806*t612;
  t617 = -0.13*t453;
  t673 = t453*t672;
  t680 = t574*t679;
  t681 = 0. + t615 + t617 + t673 + t680;
  t682 = t586*t681;
  t683 = 0.13*t612;
  t684 = -0.0806*t453;
  t685 = t574*t672;
  t686 = -1.*t453*t679;
  t687 = 0. + t683 + t684 + t685 + t686;
  t688 = t428*t687;
  t689 = 0. + t609 + t610 + t682 + t688;
  t712 = -0.642788*t490;
  t713 = 0.766044*t499;
  t714 = t712 + t713;
  t711 = -1.*t479*t528;
  t715 = t525*t714;
  t716 = 0. + t711 + t715;
  t718 = t479*t714;
  t719 = 0. + t533 + t718;
  t717 = t457*t716;
  t720 = t550*t719;
  t721 = 0. + t717 + t720;
  t723 = t550*t716;
  t724 = -1.*t457*t719;
  t725 = 0. + t723 + t724;
  t595 = t288*t594;
  t596 = 0. + t595;
  t602 = -0.0806*t601;
  t604 = -0.004500000000000004*t603;
  t690 = t288*t689;
  t691 = 0. + t602 + t604 + t690;
  t722 = -1.*t453*t721;
  t726 = t574*t725;
  t727 = 0. + t722 + t726;
  t728 = t428*t727;
  t729 = t574*t721;
  t730 = t453*t725;
  t731 = 0. + t729 + t730;
  t732 = t586*t731;
  t733 = 0. + t728 + t732;
  t734 = t288*t733;
  t735 = 0. + t734;
  t695 = 0.135*t601;
  t696 = 0.1305*t288;
  t697 = -0.0806*t603;
  t698 = -1.*t603*t689;
  t699 = 0. + t695 + t696 + t697 + t698;
  t704 = 0.01*t607;
  t705 = -0.0806*t428;
  t706 = -1.*t428*t681;
  t707 = t586*t687;
  t708 = 0. + t704 + t705 + t706 + t707;
  t693 = -1.*t603*t594;
  t694 = 0. + t693;
  t424 = 0. + t288;
  t749 = 0. + t603;
  t738 = -1.*t603*t733;
  t739 = 0. + t738;
  t741 = t586*t727;
  t742 = -1.*t428*t731;
  t743 = 0. + t741 + t742;
  t701 = t586*t583;
  t702 = -1.*t428*t589;
  t703 = 0. + t701 + t702;
  t744 = t708*t743;
  t709 = -1.*t703*t708;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0. - 0.08*t424 + (-1.*t596*t691 - 1.*t694*t699 + t709)*t735 + t596*(t691*t735 + t699*t739 + t744);
  p_output1(22)=-0.08*t694 - 0.135*t703 + (-1.*t691*t735 - 1.*t699*t739 - 1.*t708*t743)*t749 + t735*(0. + t424*t699 + t691*t749);
  p_output1(23)=-0.08*t739 - 0.135*t743 + (t596*t691 + t694*t699 + t703*t708)*t749 + t596*(0. - 1.*t424*t699 - 1.*t691*t749);
  p_output1(24)=-0.0806 - 1.*(0. - 1.*t594*t689 + t709)*t743 - 1.*t703*(0. + t689*t733 + t744);
  p_output1(25)=0. - 0.135*t594 - 0.1305*t743;
  p_output1(26)=0. + 0.1305*t703 - 0.135*t733;
  p_output1(27)=0.;
  p_output1(28)=0. - 0.0806*t583 - 0.01*t589 - 1.*t687*t727 - 1.*t681*t731;
  p_output1(29)=0. + t589*t681 + t583*t687 - 0.0806*t727 - 0.01*t731;
  p_output1(30)=0.;
  p_output1(31)=0. - 0.13*t570 - 0.0806*t579 - 1.*t679*t721 - 1.*t672*t725;
  p_output1(32)=0. + t579*t672 + t570*t679 - 0.13*t721 - 0.0806*t725;
  p_output1(33)=0.;
  p_output1(34)=0. - 0.0332*t535 - 0.1907*t566 - 1.*t668*t716 - 1.*t657*t719;
  p_output1(35)=0. + t566*t657 + t535*t668 - 0.0332*t716 - 0.1907*t719;
  p_output1(36)=0.;
  p_output1(37)=0. - 0.6255*t505 - 0.0132*t528 - 1.*t528*t655 - 1.*t644*t714;
  p_output1(38)=0. - 0.6255*t528 + t528*t644 + t505*t655 - 0.0132*t714;
  p_output1(39)=0.;
  p_output1(40)=0.05136484439999989;
  p_output1(41)=0.01999455480000023;
}


       
void Jv_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
