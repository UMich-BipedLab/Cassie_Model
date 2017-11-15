/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_left_src.h"

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
  double t730;
  double t722;
  double t731;
  double t727;
  double t732;
  double t696;
  double t729;
  double t733;
  double t738;
  double t741;
  double t742;
  double t744;
  double t745;
  double t753;
  double t758;
  double t760;
  double t762;
  double t750;
  double t751;
  double t752;
  double t768;
  double t780;
  double t782;
  double t783;
  double t786;
  double t777;
  double t778;
  double t779;
  double t791;
  double t792;
  double t793;
  double t701;
  double t715;
  double t720;
  double t721;
  double t747;
  double t748;
  double t810;
  double t811;
  double t812;
  double t814;
  double t815;
  double t816;
  double t761;
  double t763;
  double t766;
  double t769;
  double t770;
  double t771;
  double t818;
  double t819;
  double t820;
  double t785;
  double t787;
  double t788;
  double t794;
  double t795;
  double t796;
  double t831;
  double t832;
  double t833;
  double t835;
  double t836;
  double t837;
  double t850;
  double t851;
  double t852;
  double t859;
  double t860;
  double t861;
  double t863;
  double t864;
  double t865;
  t730 = Cos(var1[3]);
  t722 = Cos(var1[5]);
  t731 = Sin(var1[4]);
  t727 = Sin(var1[3]);
  t732 = Sin(var1[5]);
  t696 = Cos(var1[6]);
  t729 = -1.*t722*t727;
  t733 = t730*t731*t732;
  t738 = t729 + t733;
  t741 = t730*t722*t731;
  t742 = t727*t732;
  t744 = t741 + t742;
  t745 = Sin(var1[6]);
  t753 = Cos(var1[7]);
  t758 = -1.*t753;
  t760 = 1. + t758;
  t762 = Sin(var1[7]);
  t750 = t696*t738;
  t751 = t744*t745;
  t752 = t750 + t751;
  t768 = Cos(var1[4]);
  t780 = Cos(var1[8]);
  t782 = -1.*t780;
  t783 = 1. + t782;
  t786 = Sin(var1[8]);
  t777 = t730*t768*t753;
  t778 = t752*t762;
  t779 = t777 + t778;
  t791 = t696*t744;
  t792 = -1.*t738*t745;
  t793 = t791 + t792;
  t701 = -1.*t696;
  t715 = 1. + t701;
  t720 = 0.135*t715;
  t721 = 0. + t720;
  t747 = -0.135*t745;
  t748 = 0. + t747;
  t810 = t730*t722;
  t811 = t727*t731*t732;
  t812 = t810 + t811;
  t814 = t722*t727*t731;
  t815 = -1.*t730*t732;
  t816 = t814 + t815;
  t761 = 0.135*t760;
  t763 = 0.049*t762;
  t766 = 0. + t761 + t763;
  t769 = -0.049*t760;
  t770 = 0.135*t762;
  t771 = 0. + t769 + t770;
  t818 = t696*t812;
  t819 = t816*t745;
  t820 = t818 + t819;
  t785 = -0.049*t783;
  t787 = -0.09*t786;
  t788 = 0. + t785 + t787;
  t794 = -0.09*t783;
  t795 = 0.049*t786;
  t796 = 0. + t794 + t795;
  t831 = t768*t753*t727;
  t832 = t820*t762;
  t833 = t831 + t832;
  t835 = t696*t816;
  t836 = -1.*t812*t745;
  t837 = t835 + t836;
  t850 = t768*t696*t732;
  t851 = t768*t722*t745;
  t852 = t850 + t851;
  t859 = -1.*t753*t731;
  t860 = t852*t762;
  t861 = t859 + t860;
  t863 = t768*t722*t696;
  t864 = -1.*t768*t732*t745;
  t865 = t863 + t864;
  p_output1[0]=0. + t721*t738 + t744*t748 + t752*t766 + 0.135*(t752*t753 - 1.*t730*t762*t768) + t730*t768*t771 + t779*t788 - 0.09*(-1.*t779*t786 + t780*t793) - 0.049*(t779*t780 + t786*t793) + t793*t796 + var1[0];
  p_output1[1]=0. + t727*t768*t771 + t721*t812 + t748*t816 + t766*t820 + 0.135*(-1.*t727*t762*t768 + t753*t820) + t788*t833 + t796*t837 - 0.09*(-1.*t786*t833 + t780*t837) - 0.049*(t780*t833 + t786*t837) + var1[1];
  p_output1[2]=0. + t721*t732*t768 + t722*t748*t768 - 1.*t731*t771 + t766*t852 + 0.135*(t731*t762 + t753*t852) + t788*t861 + t796*t865 - 0.09*(-1.*t786*t861 + t780*t865) - 0.049*(t780*t861 + t786*t865) + var1[2];
}



void p_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
