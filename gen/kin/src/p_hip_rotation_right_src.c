/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:32 GMT-05:00
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
  double t47;
  double t6779;
  double t6787;
  double t6781;
  double t6790;
  double t128;
  double t371;
  double t1763;
  double t3393;
  double t6770;
  double t6785;
  double t6794;
  double t6795;
  double t6798;
  double t6806;
  double t6807;
  double t6808;
  double t127;
  double t6813;
  double t6815;
  double t6817;
  double t1965;
  double t6756;
  double t6761;
  double t6773;
  double t6776;
  double t6801;
  double t6802;
  double t6804;
  double t6805;
  double t6810;
  double t6811;
  double t6812;
  double t6842;
  double t6843;
  double t6844;
  double t6846;
  double t6848;
  double t6849;
  double t6852;
  double t6853;
  double t6854;
  double t6879;
  double t6881;
  double t6882;
  t47 = Cos(var1[3]);
  t6779 = Cos(var1[5]);
  t6787 = Sin(var1[3]);
  t6781 = Sin(var1[4]);
  t6790 = Sin(var1[5]);
  t128 = Cos(var1[14]);
  t371 = -1.*t128;
  t1763 = 1. + t371;
  t3393 = Sin(var1[14]);
  t6770 = Sin(var1[13]);
  t6785 = t47*t6779*t6781;
  t6794 = t6787*t6790;
  t6795 = t6785 + t6794;
  t6798 = Cos(var1[13]);
  t6806 = -1.*t6779*t6787;
  t6807 = t47*t6781*t6790;
  t6808 = t6806 + t6807;
  t127 = Cos(var1[4]);
  t6813 = t6770*t6795;
  t6815 = t6798*t6808;
  t6817 = t6813 + t6815;
  t1965 = -0.049*t1763;
  t6756 = -0.135*t3393;
  t6761 = 0. + t1965 + t6756;
  t6773 = 0.135*t6770;
  t6776 = 0. + t6773;
  t6801 = -1.*t6798;
  t6802 = 1. + t6801;
  t6804 = -0.135*t6802;
  t6805 = 0. + t6804;
  t6810 = -0.135*t1763;
  t6811 = 0.049*t3393;
  t6812 = 0. + t6810 + t6811;
  t6842 = t6779*t6787*t6781;
  t6843 = -1.*t47*t6790;
  t6844 = t6842 + t6843;
  t6846 = t47*t6779;
  t6848 = t6787*t6781*t6790;
  t6849 = t6846 + t6848;
  t6852 = t6770*t6844;
  t6853 = t6798*t6849;
  t6854 = t6852 + t6853;
  t6879 = t127*t6779*t6770;
  t6881 = t6798*t127*t6790;
  t6882 = t6879 + t6881;
  p_output1[0]=0. + t127*t47*t6761 + t6776*t6795 + t6805*t6808 - 0.09*(t6795*t6798 - 1.*t6770*t6808) + t6812*t6817 - 0.135*(-1.*t127*t3393*t47 + t128*t6817) - 0.049*(t127*t128*t47 + t3393*t6817) + var1[0];
  p_output1[1]=0. + t127*t6761*t6787 + t6776*t6844 + t6805*t6849 - 0.09*(t6798*t6844 - 1.*t6770*t6849) + t6812*t6854 - 0.135*(-1.*t127*t3393*t6787 + t128*t6854) - 0.049*(t127*t128*t6787 + t3393*t6854) + var1[1];
  p_output1[2]=0. + t127*t6776*t6779 - 1.*t6761*t6781 - 0.09*(-1.*t127*t6770*t6790 + t127*t6779*t6798) + t127*t6790*t6805 + t6812*t6882 - 0.135*(t3393*t6781 + t128*t6882) - 0.049*(-1.*t128*t6781 + t3393*t6882) + var1[2];
}



void p_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
