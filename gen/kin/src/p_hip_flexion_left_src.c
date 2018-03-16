/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:55 GMT-04:00
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
  double t694;
  double t686;
  double t695;
  double t691;
  double t696;
  double t660;
  double t693;
  double t697;
  double t702;
  double t705;
  double t706;
  double t708;
  double t709;
  double t717;
  double t722;
  double t724;
  double t726;
  double t714;
  double t715;
  double t716;
  double t732;
  double t744;
  double t746;
  double t747;
  double t750;
  double t741;
  double t742;
  double t743;
  double t755;
  double t756;
  double t757;
  double t665;
  double t679;
  double t684;
  double t685;
  double t711;
  double t712;
  double t774;
  double t775;
  double t776;
  double t778;
  double t779;
  double t780;
  double t725;
  double t727;
  double t730;
  double t733;
  double t734;
  double t735;
  double t782;
  double t783;
  double t784;
  double t749;
  double t751;
  double t752;
  double t758;
  double t759;
  double t760;
  double t795;
  double t796;
  double t797;
  double t799;
  double t800;
  double t801;
  double t814;
  double t815;
  double t816;
  double t823;
  double t824;
  double t825;
  double t827;
  double t828;
  double t829;
  t694 = Cos(var1[3]);
  t686 = Cos(var1[5]);
  t695 = Sin(var1[4]);
  t691 = Sin(var1[3]);
  t696 = Sin(var1[5]);
  t660 = Cos(var1[6]);
  t693 = -1.*t686*t691;
  t697 = t694*t695*t696;
  t702 = t693 + t697;
  t705 = t694*t686*t695;
  t706 = t691*t696;
  t708 = t705 + t706;
  t709 = Sin(var1[6]);
  t717 = Cos(var1[7]);
  t722 = -1.*t717;
  t724 = 1. + t722;
  t726 = Sin(var1[7]);
  t714 = t660*t702;
  t715 = t708*t709;
  t716 = t714 + t715;
  t732 = Cos(var1[4]);
  t744 = Cos(var1[8]);
  t746 = -1.*t744;
  t747 = 1. + t746;
  t750 = Sin(var1[8]);
  t741 = t694*t732*t717;
  t742 = t716*t726;
  t743 = t741 + t742;
  t755 = t660*t708;
  t756 = -1.*t702*t709;
  t757 = t755 + t756;
  t665 = -1.*t660;
  t679 = 1. + t665;
  t684 = 0.135*t679;
  t685 = 0. + t684;
  t711 = -0.135*t709;
  t712 = 0. + t711;
  t774 = t694*t686;
  t775 = t691*t695*t696;
  t776 = t774 + t775;
  t778 = t686*t691*t695;
  t779 = -1.*t694*t696;
  t780 = t778 + t779;
  t725 = 0.135*t724;
  t727 = 0.049*t726;
  t730 = 0. + t725 + t727;
  t733 = -0.049*t724;
  t734 = 0.135*t726;
  t735 = 0. + t733 + t734;
  t782 = t660*t776;
  t783 = t780*t709;
  t784 = t782 + t783;
  t749 = -0.049*t747;
  t751 = -0.09*t750;
  t752 = 0. + t749 + t751;
  t758 = -0.09*t747;
  t759 = 0.049*t750;
  t760 = 0. + t758 + t759;
  t795 = t732*t717*t691;
  t796 = t784*t726;
  t797 = t795 + t796;
  t799 = t660*t780;
  t800 = -1.*t776*t709;
  t801 = t799 + t800;
  t814 = t732*t660*t696;
  t815 = t732*t686*t709;
  t816 = t814 + t815;
  t823 = -1.*t717*t695;
  t824 = t816*t726;
  t825 = t823 + t824;
  t827 = t732*t686*t660;
  t828 = -1.*t732*t696*t709;
  t829 = t827 + t828;
  p_output1[0]=0. + t685*t702 + t708*t712 + t716*t730 + 0.135*(t716*t717 - 1.*t694*t726*t732) + t694*t732*t735 + t743*t752 - 0.09*(-1.*t743*t750 + t744*t757) - 0.049*(t743*t744 + t750*t757) + t757*t760 + var1[0];
  p_output1[1]=0. + t691*t732*t735 + t685*t776 + t712*t780 + t730*t784 + 0.135*(-1.*t691*t726*t732 + t717*t784) + t752*t797 + t760*t801 - 0.09*(-1.*t750*t797 + t744*t801) - 0.049*(t744*t797 + t750*t801) + var1[1];
  p_output1[2]=0. + t685*t696*t732 + t686*t712*t732 - 1.*t695*t735 + t730*t816 + 0.135*(t695*t726 + t717*t816) + t752*t825 + t760*t829 - 0.09*(-1.*t750*t825 + t744*t829) - 0.049*(t744*t825 + t750*t829) + var1[2];
}



void p_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
