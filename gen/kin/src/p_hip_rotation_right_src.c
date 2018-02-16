/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_right_src.h"

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
  double t6739;
  double t6783;
  double t6786;
  double t6784;
  double t6788;
  double t6754;
  double t6756;
  double t6757;
  double t6763;
  double t6779;
  double t6785;
  double t6789;
  double t6790;
  double t6792;
  double t6798;
  double t6799;
  double t6801;
  double t6752;
  double t6808;
  double t6809;
  double t6811;
  double t6760;
  double t6767;
  double t6773;
  double t6781;
  double t6782;
  double t6793;
  double t6794;
  double t6795;
  double t6796;
  double t6803;
  double t6804;
  double t6805;
  double t6838;
  double t6840;
  double t6841;
  double t6844;
  double t6845;
  double t6846;
  double t6849;
  double t6850;
  double t6851;
  double t6870;
  double t6871;
  double t6872;
  t6739 = Cos(var1[3]);
  t6783 = Cos(var1[5]);
  t6786 = Sin(var1[3]);
  t6784 = Sin(var1[4]);
  t6788 = Sin(var1[5]);
  t6754 = Cos(var1[14]);
  t6756 = -1.*t6754;
  t6757 = 1. + t6756;
  t6763 = Sin(var1[14]);
  t6779 = Sin(var1[13]);
  t6785 = t6739*t6783*t6784;
  t6789 = t6786*t6788;
  t6790 = t6785 + t6789;
  t6792 = Cos(var1[13]);
  t6798 = -1.*t6783*t6786;
  t6799 = t6739*t6784*t6788;
  t6801 = t6798 + t6799;
  t6752 = Cos(var1[4]);
  t6808 = t6779*t6790;
  t6809 = t6792*t6801;
  t6811 = t6808 + t6809;
  t6760 = -0.049*t6757;
  t6767 = -0.135*t6763;
  t6773 = 0. + t6760 + t6767;
  t6781 = 0.135*t6779;
  t6782 = 0. + t6781;
  t6793 = -1.*t6792;
  t6794 = 1. + t6793;
  t6795 = -0.135*t6794;
  t6796 = 0. + t6795;
  t6803 = -0.135*t6757;
  t6804 = 0.049*t6763;
  t6805 = 0. + t6803 + t6804;
  t6838 = t6783*t6786*t6784;
  t6840 = -1.*t6739*t6788;
  t6841 = t6838 + t6840;
  t6844 = t6739*t6783;
  t6845 = t6786*t6784*t6788;
  t6846 = t6844 + t6845;
  t6849 = t6779*t6841;
  t6850 = t6792*t6846;
  t6851 = t6849 + t6850;
  t6870 = t6752*t6783*t6779;
  t6871 = t6792*t6752*t6788;
  t6872 = t6870 + t6871;
  p_output1[0]=0. + t6739*t6752*t6773 + t6782*t6790 + t6796*t6801 - 0.09*(t6790*t6792 - 1.*t6779*t6801) + t6805*t6811 - 0.135*(-1.*t6739*t6752*t6763 + t6754*t6811) - 0.049*(t6739*t6752*t6754 + t6763*t6811) + var1[0];
  p_output1[1]=0. + t6752*t6773*t6786 + t6782*t6841 + t6796*t6846 - 0.09*(t6792*t6841 - 1.*t6779*t6846) + t6805*t6851 - 0.135*(-1.*t6752*t6763*t6786 + t6754*t6851) - 0.049*(t6752*t6754*t6786 + t6763*t6851) + var1[1];
  p_output1[2]=0. + t6752*t6782*t6783 - 1.*t6773*t6784 - 0.09*(-1.*t6752*t6779*t6788 + t6752*t6783*t6792) + t6752*t6788*t6796 + t6805*t6872 - 0.135*(t6763*t6784 + t6754*t6872) - 0.049*(-1.*t6754*t6784 + t6763*t6872) + var1[2];
}



void p_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
