/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:41 GMT-05:00
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
  double t1677;
  double t7598;
  double t7605;
  double t7599;
  double t7606;
  double t2773;
  double t2999;
  double t3720;
  double t4365;
  double t7573;
  double t7600;
  double t7609;
  double t7612;
  double t7614;
  double t7625;
  double t7627;
  double t7628;
  double t2232;
  double t7634;
  double t7635;
  double t7637;
  double t7639;
  double t7640;
  double t7641;
  double t7644;
  double t7651;
  double t7652;
  double t7653;
  double t7666;
  double t7667;
  double t7668;
  double t7670;
  double t7671;
  double t7672;
  double t7674;
  double t7680;
  double t7681;
  double t7683;
  double t7690;
  double t7691;
  double t7692;
  double t4269;
  double t6816;
  double t7547;
  double t7583;
  double t7594;
  double t7615;
  double t7616;
  double t7617;
  double t7619;
  double t7631;
  double t7632;
  double t7633;
  double t7708;
  double t7709;
  double t7710;
  double t7712;
  double t7713;
  double t7714;
  double t7642;
  double t7648;
  double t7650;
  double t7716;
  double t7717;
  double t7718;
  double t7662;
  double t7663;
  double t7664;
  double t7673;
  double t7676;
  double t7678;
  double t7720;
  double t7721;
  double t7722;
  double t7729;
  double t7730;
  double t7731;
  double t7685;
  double t7687;
  double t7688;
  double t7735;
  double t7736;
  double t7737;
  double t7740;
  double t7743;
  double t7744;
  double t7758;
  double t7759;
  double t7760;
  double t7762;
  double t7763;
  double t7764;
  double t7770;
  double t7771;
  double t7772;
  double t7774;
  double t7775;
  double t7776;
  double t7778;
  double t7779;
  double t7780;
  t1677 = Cos(var1[3]);
  t7598 = Cos(var1[5]);
  t7605 = Sin(var1[3]);
  t7599 = Sin(var1[4]);
  t7606 = Sin(var1[5]);
  t2773 = Cos(var1[14]);
  t2999 = -1.*t2773;
  t3720 = 1. + t2999;
  t4365 = Sin(var1[14]);
  t7573 = Sin(var1[13]);
  t7600 = t1677*t7598*t7599;
  t7609 = t7605*t7606;
  t7612 = t7600 + t7609;
  t7614 = Cos(var1[13]);
  t7625 = -1.*t7598*t7605;
  t7627 = t1677*t7599*t7606;
  t7628 = t7625 + t7627;
  t2232 = Cos(var1[4]);
  t7634 = t7573*t7612;
  t7635 = t7614*t7628;
  t7637 = t7634 + t7635;
  t7639 = Cos(var1[15]);
  t7640 = -1.*t7639;
  t7641 = 1. + t7640;
  t7644 = Sin(var1[15]);
  t7651 = t7614*t7612;
  t7652 = -1.*t7573*t7628;
  t7653 = t7651 + t7652;
  t7666 = t2773*t1677*t2232;
  t7667 = t4365*t7637;
  t7668 = t7666 + t7667;
  t7670 = Cos(var1[16]);
  t7671 = -1.*t7670;
  t7672 = 1. + t7671;
  t7674 = Sin(var1[16]);
  t7680 = t7644*t7653;
  t7681 = t7639*t7668;
  t7683 = t7680 + t7681;
  t7690 = t7639*t7653;
  t7691 = -1.*t7644*t7668;
  t7692 = t7690 + t7691;
  t4269 = -0.049*t3720;
  t6816 = -0.135*t4365;
  t7547 = 0. + t4269 + t6816;
  t7583 = 0.135*t7573;
  t7594 = 0. + t7583;
  t7615 = -1.*t7614;
  t7616 = 1. + t7615;
  t7617 = -0.135*t7616;
  t7619 = 0. + t7617;
  t7631 = -0.135*t3720;
  t7632 = 0.049*t4365;
  t7633 = 0. + t7631 + t7632;
  t7708 = t7598*t7605*t7599;
  t7709 = -1.*t1677*t7606;
  t7710 = t7708 + t7709;
  t7712 = t1677*t7598;
  t7713 = t7605*t7599*t7606;
  t7714 = t7712 + t7713;
  t7642 = -0.09*t7641;
  t7648 = 0.049*t7644;
  t7650 = 0. + t7642 + t7648;
  t7716 = t7573*t7710;
  t7717 = t7614*t7714;
  t7718 = t7716 + t7717;
  t7662 = -0.049*t7641;
  t7663 = -0.09*t7644;
  t7664 = 0. + t7662 + t7663;
  t7673 = -0.049*t7672;
  t7676 = -0.21*t7674;
  t7678 = 0. + t7673 + t7676;
  t7720 = t7614*t7710;
  t7721 = -1.*t7573*t7714;
  t7722 = t7720 + t7721;
  t7729 = t2773*t2232*t7605;
  t7730 = t4365*t7718;
  t7731 = t7729 + t7730;
  t7685 = -0.21*t7672;
  t7687 = 0.049*t7674;
  t7688 = 0. + t7685 + t7687;
  t7735 = t7644*t7722;
  t7736 = t7639*t7731;
  t7737 = t7735 + t7736;
  t7740 = t7639*t7722;
  t7743 = -1.*t7644*t7731;
  t7744 = t7740 + t7743;
  t7758 = t2232*t7598*t7573;
  t7759 = t7614*t2232*t7606;
  t7760 = t7758 + t7759;
  t7762 = t7614*t2232*t7598;
  t7763 = -1.*t2232*t7573*t7606;
  t7764 = t7762 + t7763;
  t7770 = -1.*t2773*t7599;
  t7771 = t4365*t7760;
  t7772 = t7770 + t7771;
  t7774 = t7644*t7764;
  t7775 = t7639*t7772;
  t7776 = t7774 + t7775;
  t7778 = t7639*t7764;
  t7779 = -1.*t7644*t7772;
  t7780 = t7778 + t7779;
  p_output1[0]=0. + t1677*t2232*t7547 + t7594*t7612 + t7619*t7628 + t7633*t7637 - 0.1305*(-1.*t1677*t2232*t4365 + t2773*t7637) + t7650*t7653 + t7664*t7668 + t7678*t7683 + t7688*t7692 - 0.21*(-1.*t7674*t7683 + t7670*t7692) - 0.049*(t7670*t7683 + t7674*t7692) + var1[0];
  p_output1[1]=0. + t2232*t7547*t7605 + t7594*t7710 + t7619*t7714 + t7633*t7718 - 0.1305*(-1.*t2232*t4365*t7605 + t2773*t7718) + t7650*t7722 + t7664*t7731 + t7678*t7737 + t7688*t7744 - 0.21*(-1.*t7674*t7737 + t7670*t7744) - 0.049*(t7670*t7737 + t7674*t7744) + var1[1];
  p_output1[2]=0. + t2232*t7594*t7598 - 1.*t7547*t7599 + t2232*t7606*t7619 + t7633*t7760 - 0.1305*(t4365*t7599 + t2773*t7760) + t7650*t7764 + t7664*t7772 + t7678*t7776 + t7688*t7780 - 0.21*(-1.*t7674*t7776 + t7670*t7780) - 0.049*(t7670*t7776 + t7674*t7780) + var1[2];
}



void p_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
