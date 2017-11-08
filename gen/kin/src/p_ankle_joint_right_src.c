/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_right_src.h"

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
  double t689;
  double t7671;
  double t7678;
  double t7675;
  double t7685;
  double t1608;
  double t1790;
  double t1819;
  double t2489;
  double t7592;
  double t7677;
  double t7688;
  double t7690;
  double t7696;
  double t7706;
  double t7710;
  double t7712;
  double t1214;
  double t7719;
  double t7720;
  double t7721;
  double t7724;
  double t7725;
  double t7726;
  double t7730;
  double t7738;
  double t7739;
  double t7740;
  double t7756;
  double t7758;
  double t7759;
  double t7764;
  double t7765;
  double t7766;
  double t7769;
  double t7777;
  double t7778;
  double t7780;
  double t7786;
  double t7787;
  double t7789;
  double t7795;
  double t7796;
  double t7799;
  double t7803;
  double t7808;
  double t7809;
  double t7811;
  double t7816;
  double t7817;
  double t7818;
  double t2091;
  double t3370;
  double t4429;
  double t7629;
  double t7639;
  double t7697;
  double t7700;
  double t7702;
  double t7704;
  double t7714;
  double t7716;
  double t7718;
  double t7838;
  double t7839;
  double t7840;
  double t7842;
  double t7843;
  double t7844;
  double t7728;
  double t7732;
  double t7736;
  double t7846;
  double t7847;
  double t7848;
  double t7747;
  double t7749;
  double t7750;
  double t7767;
  double t7772;
  double t7774;
  double t7850;
  double t7851;
  double t7852;
  double t7859;
  double t7860;
  double t7861;
  double t7782;
  double t7784;
  double t7785;
  double t7800;
  double t7804;
  double t7806;
  double t7864;
  double t7866;
  double t7867;
  double t7870;
  double t7871;
  double t7873;
  double t7813;
  double t7814;
  double t7815;
  double t7876;
  double t7878;
  double t7879;
  double t7882;
  double t7883;
  double t7884;
  double t7898;
  double t7899;
  double t7900;
  double t7902;
  double t7903;
  double t7904;
  double t7910;
  double t7911;
  double t7912;
  double t7914;
  double t7915;
  double t7916;
  double t7918;
  double t7919;
  double t7920;
  double t7922;
  double t7923;
  double t7924;
  double t7926;
  double t7927;
  double t7928;
  t689 = Cos(var1[3]);
  t7671 = Cos(var1[5]);
  t7678 = Sin(var1[3]);
  t7675 = Sin(var1[4]);
  t7685 = Sin(var1[5]);
  t1608 = Cos(var1[14]);
  t1790 = -1.*t1608;
  t1819 = 1. + t1790;
  t2489 = Sin(var1[14]);
  t7592 = Sin(var1[13]);
  t7677 = t689*t7671*t7675;
  t7688 = t7678*t7685;
  t7690 = t7677 + t7688;
  t7696 = Cos(var1[13]);
  t7706 = -1.*t7671*t7678;
  t7710 = t689*t7675*t7685;
  t7712 = t7706 + t7710;
  t1214 = Cos(var1[4]);
  t7719 = t7592*t7690;
  t7720 = t7696*t7712;
  t7721 = t7719 + t7720;
  t7724 = Cos(var1[15]);
  t7725 = -1.*t7724;
  t7726 = 1. + t7725;
  t7730 = Sin(var1[15]);
  t7738 = t7696*t7690;
  t7739 = -1.*t7592*t7712;
  t7740 = t7738 + t7739;
  t7756 = t1608*t689*t1214;
  t7758 = t2489*t7721;
  t7759 = t7756 + t7758;
  t7764 = Cos(var1[16]);
  t7765 = -1.*t7764;
  t7766 = 1. + t7765;
  t7769 = Sin(var1[16]);
  t7777 = t7730*t7740;
  t7778 = t7724*t7759;
  t7780 = t7777 + t7778;
  t7786 = t7724*t7740;
  t7787 = -1.*t7730*t7759;
  t7789 = t7786 + t7787;
  t7795 = Cos(var1[17]);
  t7796 = -1.*t7795;
  t7799 = 1. + t7796;
  t7803 = Sin(var1[17]);
  t7808 = -1.*t7769*t7780;
  t7809 = t7764*t7789;
  t7811 = t7808 + t7809;
  t7816 = t7764*t7780;
  t7817 = t7769*t7789;
  t7818 = t7816 + t7817;
  t2091 = -0.049*t1819;
  t3370 = -0.135*t2489;
  t4429 = 0. + t2091 + t3370;
  t7629 = 0.135*t7592;
  t7639 = 0. + t7629;
  t7697 = -1.*t7696;
  t7700 = 1. + t7697;
  t7702 = -0.135*t7700;
  t7704 = 0. + t7702;
  t7714 = -0.135*t1819;
  t7716 = 0.049*t2489;
  t7718 = 0. + t7714 + t7716;
  t7838 = t7671*t7678*t7675;
  t7839 = -1.*t689*t7685;
  t7840 = t7838 + t7839;
  t7842 = t689*t7671;
  t7843 = t7678*t7675*t7685;
  t7844 = t7842 + t7843;
  t7728 = -0.09*t7726;
  t7732 = 0.049*t7730;
  t7736 = 0. + t7728 + t7732;
  t7846 = t7592*t7840;
  t7847 = t7696*t7844;
  t7848 = t7846 + t7847;
  t7747 = -0.049*t7726;
  t7749 = -0.09*t7730;
  t7750 = 0. + t7747 + t7749;
  t7767 = -0.049*t7766;
  t7772 = -0.21*t7769;
  t7774 = 0. + t7767 + t7772;
  t7850 = t7696*t7840;
  t7851 = -1.*t7592*t7844;
  t7852 = t7850 + t7851;
  t7859 = t1608*t1214*t7678;
  t7860 = t2489*t7848;
  t7861 = t7859 + t7860;
  t7782 = -0.21*t7766;
  t7784 = 0.049*t7769;
  t7785 = 0. + t7782 + t7784;
  t7800 = -0.2707*t7799;
  t7804 = 0.0016*t7803;
  t7806 = 0. + t7800 + t7804;
  t7864 = t7730*t7852;
  t7866 = t7724*t7861;
  t7867 = t7864 + t7866;
  t7870 = t7724*t7852;
  t7871 = -1.*t7730*t7861;
  t7873 = t7870 + t7871;
  t7813 = -0.0016*t7799;
  t7814 = -0.2707*t7803;
  t7815 = 0. + t7813 + t7814;
  t7876 = -1.*t7769*t7867;
  t7878 = t7764*t7873;
  t7879 = t7876 + t7878;
  t7882 = t7764*t7867;
  t7883 = t7769*t7873;
  t7884 = t7882 + t7883;
  t7898 = t1214*t7671*t7592;
  t7899 = t7696*t1214*t7685;
  t7900 = t7898 + t7899;
  t7902 = t7696*t1214*t7671;
  t7903 = -1.*t1214*t7592*t7685;
  t7904 = t7902 + t7903;
  t7910 = -1.*t1608*t7675;
  t7911 = t2489*t7900;
  t7912 = t7910 + t7911;
  t7914 = t7730*t7904;
  t7915 = t7724*t7912;
  t7916 = t7914 + t7915;
  t7918 = t7724*t7904;
  t7919 = -1.*t7730*t7912;
  t7920 = t7918 + t7919;
  t7922 = -1.*t7769*t7916;
  t7923 = t7764*t7920;
  t7924 = t7922 + t7923;
  t7926 = t7764*t7916;
  t7927 = t7769*t7920;
  t7928 = t7926 + t7927;
  p_output1[0]=0. + t1214*t4429*t689 + t7639*t7690 + t7704*t7712 + t7718*t7721 - 0.1305*(-1.*t1214*t2489*t689 + t1608*t7721) + t7736*t7740 + t7750*t7759 + t7774*t7780 + t7785*t7789 + t7806*t7811 + t7815*t7818 + 0.0184*(t7803*t7811 + t7795*t7818) - 0.7055*(t7795*t7811 - 1.*t7803*t7818) + var1[0];
  p_output1[1]=0. + t1214*t4429*t7678 + t7639*t7840 + t7704*t7844 + t7718*t7848 - 0.1305*(-1.*t1214*t2489*t7678 + t1608*t7848) + t7736*t7852 + t7750*t7861 + t7774*t7867 + t7785*t7873 + t7806*t7879 + t7815*t7884 + 0.0184*(t7803*t7879 + t7795*t7884) - 0.7055*(t7795*t7879 - 1.*t7803*t7884) + var1[1];
  p_output1[2]=0. + t1214*t7639*t7671 - 1.*t4429*t7675 + t1214*t7685*t7704 + t7718*t7900 - 0.1305*(t2489*t7675 + t1608*t7900) + t7736*t7904 + t7750*t7912 + t7774*t7916 + t7785*t7920 + t7806*t7924 + t7815*t7928 + 0.0184*(t7803*t7924 + t7795*t7928) - 0.7055*(t7795*t7924 - 1.*t7803*t7928) + var1[2];
}



void p_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
