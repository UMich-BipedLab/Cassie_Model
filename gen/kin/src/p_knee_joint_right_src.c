/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_right_src.h"

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
  double t664;
  double t7658;
  double t7664;
  double t7659;
  double t7665;
  double t2743;
  double t2849;
  double t2910;
  double t3472;
  double t7638;
  double t7660;
  double t7667;
  double t7670;
  double t7673;
  double t7682;
  double t7685;
  double t7686;
  double t1880;
  double t7692;
  double t7693;
  double t7694;
  double t7696;
  double t7697;
  double t7698;
  double t7701;
  double t7708;
  double t7709;
  double t7710;
  double t7723;
  double t7724;
  double t7726;
  double t7729;
  double t7730;
  double t7731;
  double t7733;
  double t7737;
  double t7738;
  double t7740;
  double t7747;
  double t7748;
  double t7749;
  double t3080;
  double t3494;
  double t7596;
  double t7639;
  double t7654;
  double t7674;
  double t7675;
  double t7676;
  double t7678;
  double t7689;
  double t7690;
  double t7691;
  double t7765;
  double t7766;
  double t7767;
  double t7769;
  double t7770;
  double t7771;
  double t7699;
  double t7705;
  double t7707;
  double t7773;
  double t7774;
  double t7775;
  double t7720;
  double t7721;
  double t7722;
  double t7732;
  double t7735;
  double t7736;
  double t7777;
  double t7778;
  double t7779;
  double t7786;
  double t7787;
  double t7788;
  double t7742;
  double t7744;
  double t7745;
  double t7792;
  double t7793;
  double t7794;
  double t7797;
  double t7800;
  double t7801;
  double t7815;
  double t7816;
  double t7817;
  double t7819;
  double t7820;
  double t7821;
  double t7827;
  double t7828;
  double t7829;
  double t7831;
  double t7832;
  double t7833;
  double t7835;
  double t7836;
  double t7837;
  t664 = Cos(var1[3]);
  t7658 = Cos(var1[5]);
  t7664 = Sin(var1[3]);
  t7659 = Sin(var1[4]);
  t7665 = Sin(var1[5]);
  t2743 = Cos(var1[14]);
  t2849 = -1.*t2743;
  t2910 = 1. + t2849;
  t3472 = Sin(var1[14]);
  t7638 = Sin(var1[13]);
  t7660 = t664*t7658*t7659;
  t7667 = t7664*t7665;
  t7670 = t7660 + t7667;
  t7673 = Cos(var1[13]);
  t7682 = -1.*t7658*t7664;
  t7685 = t664*t7659*t7665;
  t7686 = t7682 + t7685;
  t1880 = Cos(var1[4]);
  t7692 = t7638*t7670;
  t7693 = t7673*t7686;
  t7694 = t7692 + t7693;
  t7696 = Cos(var1[15]);
  t7697 = -1.*t7696;
  t7698 = 1. + t7697;
  t7701 = Sin(var1[15]);
  t7708 = t7673*t7670;
  t7709 = -1.*t7638*t7686;
  t7710 = t7708 + t7709;
  t7723 = t2743*t664*t1880;
  t7724 = t3472*t7694;
  t7726 = t7723 + t7724;
  t7729 = Cos(var1[16]);
  t7730 = -1.*t7729;
  t7731 = 1. + t7730;
  t7733 = Sin(var1[16]);
  t7737 = t7701*t7710;
  t7738 = t7696*t7726;
  t7740 = t7737 + t7738;
  t7747 = t7696*t7710;
  t7748 = -1.*t7701*t7726;
  t7749 = t7747 + t7748;
  t3080 = -0.049*t2910;
  t3494 = -0.135*t3472;
  t7596 = 0. + t3080 + t3494;
  t7639 = 0.135*t7638;
  t7654 = 0. + t7639;
  t7674 = -1.*t7673;
  t7675 = 1. + t7674;
  t7676 = -0.135*t7675;
  t7678 = 0. + t7676;
  t7689 = -0.135*t2910;
  t7690 = 0.049*t3472;
  t7691 = 0. + t7689 + t7690;
  t7765 = t7658*t7664*t7659;
  t7766 = -1.*t664*t7665;
  t7767 = t7765 + t7766;
  t7769 = t664*t7658;
  t7770 = t7664*t7659*t7665;
  t7771 = t7769 + t7770;
  t7699 = -0.09*t7698;
  t7705 = 0.049*t7701;
  t7707 = 0. + t7699 + t7705;
  t7773 = t7638*t7767;
  t7774 = t7673*t7771;
  t7775 = t7773 + t7774;
  t7720 = -0.049*t7698;
  t7721 = -0.09*t7701;
  t7722 = 0. + t7720 + t7721;
  t7732 = -0.049*t7731;
  t7735 = -0.21*t7733;
  t7736 = 0. + t7732 + t7735;
  t7777 = t7673*t7767;
  t7778 = -1.*t7638*t7771;
  t7779 = t7777 + t7778;
  t7786 = t2743*t1880*t7664;
  t7787 = t3472*t7775;
  t7788 = t7786 + t7787;
  t7742 = -0.21*t7731;
  t7744 = 0.049*t7733;
  t7745 = 0. + t7742 + t7744;
  t7792 = t7701*t7779;
  t7793 = t7696*t7788;
  t7794 = t7792 + t7793;
  t7797 = t7696*t7779;
  t7800 = -1.*t7701*t7788;
  t7801 = t7797 + t7800;
  t7815 = t1880*t7658*t7638;
  t7816 = t7673*t1880*t7665;
  t7817 = t7815 + t7816;
  t7819 = t7673*t1880*t7658;
  t7820 = -1.*t1880*t7638*t7665;
  t7821 = t7819 + t7820;
  t7827 = -1.*t2743*t7659;
  t7828 = t3472*t7817;
  t7829 = t7827 + t7828;
  t7831 = t7701*t7821;
  t7832 = t7696*t7829;
  t7833 = t7831 + t7832;
  t7835 = t7696*t7821;
  t7836 = -1.*t7701*t7829;
  t7837 = t7835 + t7836;
  p_output1[0]=0. + t1880*t664*t7596 + t7654*t7670 + t7678*t7686 + t7691*t7694 - 0.1305*(-1.*t1880*t3472*t664 + t2743*t7694) + t7707*t7710 + t7722*t7726 + t7736*t7740 + t7745*t7749 - 0.21*(-1.*t7733*t7740 + t7729*t7749) - 0.049*(t7729*t7740 + t7733*t7749) + var1[0];
  p_output1[1]=0. + t1880*t7596*t7664 + t7654*t7767 + t7678*t7771 + t7691*t7775 - 0.1305*(-1.*t1880*t3472*t7664 + t2743*t7775) + t7707*t7779 + t7722*t7788 + t7736*t7794 + t7745*t7801 - 0.21*(-1.*t7733*t7794 + t7729*t7801) - 0.049*(t7729*t7794 + t7733*t7801) + var1[1];
  p_output1[2]=0. + t1880*t7654*t7658 - 1.*t7596*t7659 + t1880*t7665*t7678 + t7691*t7817 - 0.1305*(t3472*t7659 + t2743*t7817) + t7707*t7821 + t7722*t7829 + t7736*t7833 + t7745*t7837 - 0.21*(-1.*t7733*t7833 + t7729*t7837) - 0.049*(t7729*t7833 + t7733*t7837) + var1[2];
}



void p_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
