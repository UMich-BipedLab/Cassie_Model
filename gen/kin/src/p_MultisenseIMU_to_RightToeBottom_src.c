/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_RightToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t56;
  double t1407;
  double t5403;
  double t5555;
  double t5564;
  double t5566;
  double t5592;
  double t5628;
  double t5664;
  double t5666;
  double t5667;
  double t5672;
  double t5651;
  double t5653;
  double t5661;
  double t5688;
  double t5691;
  double t5693;
  double t5710;
  double t5712;
  double t5713;
  double t5717;
  double t5702;
  double t5703;
  double t5708;
  double t5722;
  double t5723;
  double t5724;
  double t5732;
  double t5733;
  double t5734;
  double t5736;
  double t5729;
  double t5730;
  double t5731;
  double t5744;
  double t5745;
  double t5747;
  double t5758;
  double t5759;
  double t5760;
  double t5763;
  double t5753;
  double t5755;
  double t5756;
  double t5769;
  double t5770;
  double t5771;
  double t2655;
  double t4333;
  double t4871;
  double t5438;
  double t5504;
  double t5584;
  double t5600;
  double t5620;
  double t5630;
  double t5642;
  double t5645;
  double t5671;
  double t5678;
  double t5679;
  double t5694;
  double t5698;
  double t5699;
  double t5798;
  double t5799;
  double t5801;
  double t5805;
  double t5806;
  double t5807;
  double t5716;
  double t5719;
  double t5720;
  double t5725;
  double t5726;
  double t5727;
  double t5809;
  double t5810;
  double t5811;
  double t5813;
  double t5814;
  double t5815;
  double t5735;
  double t5739;
  double t5742;
  double t5748;
  double t5750;
  double t5751;
  double t5817;
  double t5818;
  double t5819;
  double t5821;
  double t5822;
  double t5823;
  double t5761;
  double t5764;
  double t5767;
  double t5772;
  double t5773;
  double t5774;
  double t5825;
  double t5826;
  double t5827;
  double t5829;
  double t5830;
  double t5831;
  double t5847;
  double t5848;
  double t5849;
  double t5851;
  double t5852;
  double t5853;
  double t5855;
  double t5856;
  double t5857;
  double t5859;
  double t5860;
  double t5861;
  double t5863;
  double t5864;
  double t5865;
  double t5867;
  double t5868;
  double t5869;
  t56 = Sin(var1[7]);
  t1407 = Cos(var1[8]);
  t5403 = Sin(var1[8]);
  t5555 = Cos(var1[9]);
  t5564 = -1.*t5555;
  t5566 = 1. + t5564;
  t5592 = Sin(var1[9]);
  t5628 = Cos(var1[7]);
  t5664 = Cos(var1[10]);
  t5666 = -1.*t5664;
  t5667 = 1. + t5666;
  t5672 = Sin(var1[10]);
  t5651 = t5555*t56*t5403;
  t5653 = t5628*t5592;
  t5661 = t5651 + t5653;
  t5688 = t5628*t5555;
  t5691 = -1.*t56*t5403*t5592;
  t5693 = t5688 + t5691;
  t5710 = Cos(var1[11]);
  t5712 = -1.*t5710;
  t5713 = 1. + t5712;
  t5717 = Sin(var1[11]);
  t5702 = t5664*t5661;
  t5703 = t5693*t5672;
  t5708 = t5702 + t5703;
  t5722 = t5664*t5693;
  t5723 = -1.*t5661*t5672;
  t5724 = t5722 + t5723;
  t5732 = Cos(var1[12]);
  t5733 = -1.*t5732;
  t5734 = 1. + t5733;
  t5736 = Sin(var1[12]);
  t5729 = t5710*t5708;
  t5730 = t5724*t5717;
  t5731 = t5729 + t5730;
  t5744 = t5710*t5724;
  t5745 = -1.*t5708*t5717;
  t5747 = t5744 + t5745;
  t5758 = Cos(var1[13]);
  t5759 = -1.*t5758;
  t5760 = 1. + t5759;
  t5763 = Sin(var1[13]);
  t5753 = t5732*t5731;
  t5755 = t5747*t5736;
  t5756 = t5753 + t5755;
  t5769 = t5732*t5747;
  t5770 = -1.*t5731*t5736;
  t5771 = t5769 + t5770;
  t2655 = -1.*t1407;
  t4333 = 1. + t2655;
  t4871 = -0.135*t4333;
  t5438 = 0.049*t5403;
  t5504 = 0. + t4871 + t5438;
  t5584 = -0.049*t5566;
  t5600 = -0.09*t5592;
  t5620 = 0. + t5584 + t5600;
  t5630 = -0.09*t5566;
  t5642 = 0.049*t5592;
  t5645 = 0. + t5630 + t5642;
  t5671 = -0.049*t5667;
  t5678 = -0.21*t5672;
  t5679 = 0. + t5671 + t5678;
  t5694 = -0.21*t5667;
  t5698 = 0.049*t5672;
  t5699 = 0. + t5694 + t5698;
  t5798 = t5628*t5555*t5403;
  t5799 = -1.*t56*t5592;
  t5801 = t5798 + t5799;
  t5805 = -1.*t5555*t56;
  t5806 = -1.*t5628*t5403*t5592;
  t5807 = t5805 + t5806;
  t5716 = -0.0016*t5713;
  t5719 = -0.2707*t5717;
  t5720 = 0. + t5716 + t5719;
  t5725 = -0.2707*t5713;
  t5726 = 0.0016*t5717;
  t5727 = 0. + t5725 + t5726;
  t5809 = t5664*t5801;
  t5810 = t5807*t5672;
  t5811 = t5809 + t5810;
  t5813 = t5664*t5807;
  t5814 = -1.*t5801*t5672;
  t5815 = t5813 + t5814;
  t5735 = 0.0184*t5734;
  t5739 = -0.7055*t5736;
  t5742 = 0. + t5735 + t5739;
  t5748 = -0.7055*t5734;
  t5750 = -0.0184*t5736;
  t5751 = 0. + t5748 + t5750;
  t5817 = t5710*t5811;
  t5818 = t5815*t5717;
  t5819 = t5817 + t5818;
  t5821 = t5710*t5815;
  t5822 = -1.*t5811*t5717;
  t5823 = t5821 + t5822;
  t5761 = -0.0216*t5760;
  t5764 = -1.1135*t5763;
  t5767 = 0. + t5761 + t5764;
  t5772 = -1.1135*t5760;
  t5773 = 0.0216*t5763;
  t5774 = 0. + t5772 + t5773;
  t5825 = t5732*t5819;
  t5826 = t5823*t5736;
  t5827 = t5825 + t5826;
  t5829 = t5732*t5823;
  t5830 = -1.*t5819*t5736;
  t5831 = t5829 + t5830;
  t5847 = t1407*t5555*t5664;
  t5848 = -1.*t1407*t5592*t5672;
  t5849 = t5847 + t5848;
  t5851 = -1.*t1407*t5664*t5592;
  t5852 = -1.*t1407*t5555*t5672;
  t5853 = t5851 + t5852;
  t5855 = t5710*t5849;
  t5856 = t5853*t5717;
  t5857 = t5855 + t5856;
  t5859 = t5710*t5853;
  t5860 = -1.*t5849*t5717;
  t5861 = t5859 + t5860;
  t5863 = t5732*t5857;
  t5864 = t5861*t5736;
  t5865 = t5863 + t5864;
  t5867 = t5732*t5861;
  t5868 = -1.*t5857*t5736;
  t5869 = t5867 + t5868;
  p_output1[0]=0.24925 - 0.135*t56 + 0.1305*t1407*t56 - 1.*t5504*t56 - 1.*t5403*t56*t5620 - 1.*t5628*t5645 - 1.*t5661*t5679 - 1.*t5693*t5699 - 1.*t5708*t5720 - 1.*t5724*t5727 - 1.*t5731*t5742 - 1.*t5747*t5751 - 1.*t5756*t5767 + 1.1312*(-1.*t5756*t5763 + t5758*t5771) - 0.0306*(t5756*t5758 + t5763*t5771) - 1.*t5771*t5774;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t5628) - 0.1305*t1407*t5628 + t5504*t5628 + t5403*t5620*t5628 - 1.*t56*t5645 + t5679*t5801 + t5699*t5807 + t5720*t5811 + t5727*t5815 + t5742*t5819 + t5751*t5823 + t5767*t5827 + t5774*t5831 - 1.1312*(-1.*t5763*t5827 + t5758*t5831) + 0.0306*(t5758*t5827 + t5763*t5831);
  p_output1[2]=-0.047 - 0.049*t4333 - 0.004500000000000004*t5403 + t1407*t5620 + t1407*t5555*t5679 - 1.*t1407*t5592*t5699 + t5720*t5849 + t5727*t5853 + t5742*t5857 + t5751*t5861 + t5767*t5865 + t5774*t5869 - 1.1312*(-1.*t5763*t5865 + t5758*t5869) + 0.0306*(t5758*t5865 + t5763*t5869);
}



void p_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
