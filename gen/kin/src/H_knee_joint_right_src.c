/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_right_src.h"

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
  double t483;
  double t1180;
  double t238;
  double t528;
  double t1388;
  double t2649;
  double t682;
  double t1436;
  double t1543;
  double t221;
  double t2695;
  double t3545;
  double t6606;
  double t86;
  double t6614;
  double t6615;
  double t6637;
  double t6639;
  double t6670;
  double t6672;
  double t6678;
  double t6682;
  double t6688;
  double t6695;
  double t2071;
  double t6608;
  double t6610;
  double t6638;
  double t6645;
  double t6657;
  double t6659;
  double t6661;
  double t6662;
  double t6680;
  double t6698;
  double t6699;
  double t6702;
  double t6703;
  double t6707;
  double t6709;
  double t6710;
  double t6713;
  double t6717;
  double t6722;
  double t6723;
  double t6725;
  double t6726;
  double t6730;
  double t6731;
  double t6736;
  double t6737;
  double t6779;
  double t6780;
  double t6821;
  double t6825;
  double t6743;
  double t6744;
  double t6751;
  double t6785;
  double t6786;
  double t6794;
  double t6796;
  double t6797;
  double t6802;
  double t6804;
  double t6805;
  double t6806;
  double t6811;
  double t6817;
  double t6818;
  double t6826;
  double t6830;
  double t6832;
  double t6843;
  double t6844;
  double t6845;
  double t6752;
  double t6753;
  double t6757;
  double t6759;
  double t6760;
  double t6763;
  t483 = Cos(var1[5]);
  t1180 = Sin(var1[3]);
  t238 = Cos(var1[3]);
  t528 = Sin(var1[4]);
  t1388 = Sin(var1[5]);
  t2649 = Sin(var1[13]);
  t682 = t238*t483*t528;
  t1436 = t1180*t1388;
  t1543 = t682 + t1436;
  t221 = Cos(var1[13]);
  t2695 = -1.*t483*t1180;
  t3545 = t238*t528*t1388;
  t6606 = t2695 + t3545;
  t86 = Cos(var1[15]);
  t6614 = Sin(var1[15]);
  t6615 = Cos(var1[14]);
  t6637 = Cos(var1[4]);
  t6639 = Sin(var1[14]);
  t6670 = t483*t1180*t528;
  t6672 = -1.*t238*t1388;
  t6678 = t6670 + t6672;
  t6682 = t238*t483;
  t6688 = t1180*t528*t1388;
  t6695 = t6682 + t6688;
  t2071 = t221*t1543;
  t6608 = -1.*t2649*t6606;
  t6610 = t2071 + t6608;
  t6638 = t6615*t238*t6637;
  t6645 = t2649*t1543;
  t6657 = t221*t6606;
  t6659 = t6645 + t6657;
  t6661 = t6639*t6659;
  t6662 = t6638 + t6661;
  t6680 = t221*t6678;
  t6698 = -1.*t2649*t6695;
  t6699 = t6680 + t6698;
  t6702 = t6615*t6637*t1180;
  t6703 = t2649*t6678;
  t6707 = t221*t6695;
  t6709 = t6703 + t6707;
  t6710 = t6639*t6709;
  t6713 = t6702 + t6710;
  t6717 = t221*t6637*t483;
  t6722 = -1.*t6637*t2649*t1388;
  t6723 = t6717 + t6722;
  t6725 = -1.*t6615*t528;
  t6726 = t6637*t483*t2649;
  t6730 = t221*t6637*t1388;
  t6731 = t6726 + t6730;
  t6736 = t6639*t6731;
  t6737 = t6725 + t6736;
  t6779 = -1.*t6615;
  t6780 = 1. + t6779;
  t6821 = -1.*t86;
  t6825 = 1. + t6821;
  t6743 = t6614*t6610;
  t6744 = t86*t6662;
  t6751 = t6743 + t6744;
  t6785 = -0.049*t6780;
  t6786 = -0.135*t6639;
  t6794 = 0. + t6785 + t6786;
  t6796 = 0.135*t2649;
  t6797 = 0. + t6796;
  t6802 = -1.*t221;
  t6804 = 1. + t6802;
  t6805 = -0.135*t6804;
  t6806 = 0. + t6805;
  t6811 = -0.135*t6780;
  t6817 = 0.049*t6639;
  t6818 = 0. + t6811 + t6817;
  t6826 = -0.09*t6825;
  t6830 = 0.049*t6614;
  t6832 = 0. + t6826 + t6830;
  t6843 = -0.049*t6825;
  t6844 = -0.09*t6614;
  t6845 = 0. + t6843 + t6844;
  t6752 = t6614*t6699;
  t6753 = t86*t6713;
  t6757 = t6752 + t6753;
  t6759 = t6614*t6723;
  t6760 = t86*t6737;
  t6763 = t6759 + t6760;
  p_output1[0]=t6614*t6662 - 1.*t6610*t86;
  p_output1[1]=t6614*t6713 - 1.*t6699*t86;
  p_output1[2]=t6614*t6737 - 1.*t6723*t86;
  p_output1[3]=0.;
  p_output1[4]=t6751;
  p_output1[5]=t6757;
  p_output1[6]=t6763;
  p_output1[7]=0.;
  p_output1[8]=t238*t6637*t6639 - 1.*t6615*t6659;
  p_output1[9]=t1180*t6637*t6639 - 1.*t6615*t6709;
  p_output1[10]=-1.*t528*t6639 - 1.*t6615*t6731;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t238*t6637*t6639 + t6615*t6659) - 0.049*t6751 + t238*t6637*t6794 + t1543*t6797 + t6606*t6806 + t6659*t6818 + t6610*t6832 + t6662*t6845 - 0.21*(-1.*t6614*t6662 + t6610*t86) + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t1180*t6637*t6639 + t6615*t6709) - 0.049*t6757 + t1180*t6637*t6794 + t6678*t6797 + t6695*t6806 + t6709*t6818 + t6699*t6832 + t6713*t6845 - 0.21*(-1.*t6614*t6713 + t6699*t86) + var1[1];
  p_output1[14]=0. - 0.1305*(t528*t6639 + t6615*t6731) - 0.049*t6763 - 1.*t528*t6794 + t483*t6637*t6797 + t1388*t6637*t6806 + t6731*t6818 + t6723*t6832 + t6737*t6845 - 0.21*(-1.*t6614*t6737 + t6723*t86) + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
