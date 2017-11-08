/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_left_src.h"

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
  double t3471;
  double t3488;
  double t3529;
  double t3500;
  double t3531;
  double t3485;
  double t3550;
  double t3556;
  double t3558;
  double t3528;
  double t3536;
  double t3543;
  double t3563;
  double t3423;
  double t3592;
  double t3597;
  double t3599;
  double t3474;
  double t3476;
  double t3481;
  double t3547;
  double t3570;
  double t3578;
  double t3580;
  double t3582;
  double t3586;
  double t3602;
  double t3613;
  double t3591;
  double t3607;
  double t3608;
  double t92;
  double t3618;
  double t3621;
  double t3622;
  double t75;
  double t3680;
  double t3684;
  double t3687;
  double t3667;
  double t3669;
  double t3674;
  double t3702;
  double t3704;
  double t3705;
  double t3663;
  double t3678;
  double t3690;
  double t3695;
  double t3696;
  double t3699;
  double t3636;
  double t3700;
  double t3706;
  double t3708;
  double t3712;
  double t3713;
  double t3715;
  double t3772;
  double t3773;
  double t3777;
  double t3743;
  double t3745;
  double t3746;
  double t3747;
  double t3750;
  double t3766;
  double t3770;
  double t3778;
  double t3782;
  double t3785;
  double t3786;
  double t3787;
  double t3612;
  double t3627;
  double t3631;
  double t3643;
  double t3648;
  double t3651;
  double t3709;
  double t3718;
  double t3719;
  double t3723;
  double t3727;
  double t3729;
  double t3784;
  double t3791;
  double t3792;
  double t3796;
  double t3800;
  double t3804;
  double t3871;
  double t3877;
  double t3918;
  double t3921;
  double t3940;
  double t3943;
  double t3962;
  double t3963;
  double t3813;
  double t3816;
  double t3817;
  double t3854;
  double t3858;
  double t3859;
  double t3862;
  double t3865;
  double t3866;
  double t3881;
  double t3882;
  double t3883;
  double t3885;
  double t3887;
  double t3888;
  double t3922;
  double t3926;
  double t3927;
  double t3931;
  double t3933;
  double t3935;
  double t3944;
  double t3947;
  double t3948;
  double t3952;
  double t3953;
  double t3955;
  double t3964;
  double t3967;
  double t3971;
  double t3974;
  double t3975;
  double t3977;
  double t3822;
  double t3825;
  double t3829;
  double t3831;
  double t3832;
  double t3838;
  t3471 = Cos(var1[3]);
  t3488 = Cos(var1[5]);
  t3529 = Sin(var1[4]);
  t3500 = Sin(var1[3]);
  t3531 = Sin(var1[5]);
  t3485 = Cos(var1[6]);
  t3550 = t3471*t3488*t3529;
  t3556 = t3500*t3531;
  t3558 = t3550 + t3556;
  t3528 = -1.*t3488*t3500;
  t3536 = t3471*t3529*t3531;
  t3543 = t3528 + t3536;
  t3563 = Sin(var1[6]);
  t3423 = Cos(var1[8]);
  t3592 = t3485*t3558;
  t3597 = -1.*t3543*t3563;
  t3599 = t3592 + t3597;
  t3474 = Cos(var1[4]);
  t3476 = Cos(var1[7]);
  t3481 = t3471*t3474*t3476;
  t3547 = t3485*t3543;
  t3570 = t3558*t3563;
  t3578 = t3547 + t3570;
  t3580 = Sin(var1[7]);
  t3582 = t3578*t3580;
  t3586 = t3481 + t3582;
  t3602 = Sin(var1[8]);
  t3613 = Cos(var1[9]);
  t3591 = t3423*t3586;
  t3607 = t3599*t3602;
  t3608 = t3591 + t3607;
  t92 = Sin(var1[9]);
  t3618 = t3423*t3599;
  t3621 = -1.*t3586*t3602;
  t3622 = t3618 + t3621;
  t75 = Cos(var1[10]);
  t3680 = t3488*t3500*t3529;
  t3684 = -1.*t3471*t3531;
  t3687 = t3680 + t3684;
  t3667 = t3471*t3488;
  t3669 = t3500*t3529*t3531;
  t3674 = t3667 + t3669;
  t3702 = t3485*t3687;
  t3704 = -1.*t3674*t3563;
  t3705 = t3702 + t3704;
  t3663 = t3474*t3476*t3500;
  t3678 = t3485*t3674;
  t3690 = t3687*t3563;
  t3695 = t3678 + t3690;
  t3696 = t3695*t3580;
  t3699 = t3663 + t3696;
  t3636 = Sin(var1[10]);
  t3700 = t3423*t3699;
  t3706 = t3705*t3602;
  t3708 = t3700 + t3706;
  t3712 = t3423*t3705;
  t3713 = -1.*t3699*t3602;
  t3715 = t3712 + t3713;
  t3772 = t3474*t3488*t3485;
  t3773 = -1.*t3474*t3531*t3563;
  t3777 = t3772 + t3773;
  t3743 = -1.*t3476*t3529;
  t3745 = t3474*t3485*t3531;
  t3746 = t3474*t3488*t3563;
  t3747 = t3745 + t3746;
  t3750 = t3747*t3580;
  t3766 = t3743 + t3750;
  t3770 = t3423*t3766;
  t3778 = t3777*t3602;
  t3782 = t3770 + t3778;
  t3785 = t3423*t3777;
  t3786 = -1.*t3766*t3602;
  t3787 = t3785 + t3786;
  t3612 = -1.*t92*t3608;
  t3627 = t3613*t3622;
  t3631 = t3612 + t3627;
  t3643 = t3613*t3608;
  t3648 = t92*t3622;
  t3651 = t3643 + t3648;
  t3709 = -1.*t92*t3708;
  t3718 = t3613*t3715;
  t3719 = t3709 + t3718;
  t3723 = t3613*t3708;
  t3727 = t92*t3715;
  t3729 = t3723 + t3727;
  t3784 = -1.*t92*t3782;
  t3791 = t3613*t3787;
  t3792 = t3784 + t3791;
  t3796 = t3613*t3782;
  t3800 = t92*t3787;
  t3804 = t3796 + t3800;
  t3871 = -1.*t3476;
  t3877 = 1. + t3871;
  t3918 = -1.*t3423;
  t3921 = 1. + t3918;
  t3940 = -1.*t3613;
  t3943 = 1. + t3940;
  t3962 = -1.*t75;
  t3963 = 1. + t3962;
  t3813 = t3636*t3631;
  t3816 = t75*t3651;
  t3817 = t3813 + t3816;
  t3854 = -1.*t3485;
  t3858 = 1. + t3854;
  t3859 = 0.135*t3858;
  t3862 = 0. + t3859;
  t3865 = -0.135*t3563;
  t3866 = 0. + t3865;
  t3881 = 0.135*t3877;
  t3882 = 0.049*t3580;
  t3883 = 0. + t3881 + t3882;
  t3885 = -0.049*t3877;
  t3887 = 0.135*t3580;
  t3888 = 0. + t3885 + t3887;
  t3922 = -0.049*t3921;
  t3926 = -0.09*t3602;
  t3927 = 0. + t3922 + t3926;
  t3931 = -0.09*t3921;
  t3933 = 0.049*t3602;
  t3935 = 0. + t3931 + t3933;
  t3944 = -0.049*t3943;
  t3947 = -0.21*t92;
  t3948 = 0. + t3944 + t3947;
  t3952 = -0.21*t3943;
  t3953 = 0.049*t92;
  t3955 = 0. + t3952 + t3953;
  t3964 = -0.2707*t3963;
  t3967 = 0.0016*t3636;
  t3971 = 0. + t3964 + t3967;
  t3974 = -0.0016*t3963;
  t3975 = -0.2707*t3636;
  t3977 = 0. + t3974 + t3975;
  t3822 = t3636*t3719;
  t3825 = t75*t3729;
  t3829 = t3822 + t3825;
  t3831 = t3636*t3792;
  t3832 = t75*t3804;
  t3838 = t3831 + t3832;
  p_output1[0]=t3636*t3651 - 1.*t3631*t75;
  p_output1[1]=t3636*t3729 - 1.*t3719*t75;
  p_output1[2]=t3636*t3804 - 1.*t3792*t75;
  p_output1[3]=0.;
  p_output1[4]=t3817;
  p_output1[5]=t3829;
  p_output1[6]=t3838;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3476*t3578 + t3471*t3474*t3580;
  p_output1[9]=t3474*t3500*t3580 - 1.*t3476*t3695;
  p_output1[10]=-1.*t3529*t3580 - 1.*t3476*t3747;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t3476*t3578 - 1.*t3471*t3474*t3580) + 0.0184*t3817 + t3543*t3862 + t3558*t3866 + t3578*t3883 + t3471*t3474*t3888 + t3586*t3927 + t3599*t3935 + t3608*t3948 + t3622*t3955 + t3631*t3971 + t3651*t3977 - 0.7055*(-1.*t3636*t3651 + t3631*t75) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t3474*t3500*t3580 + t3476*t3695) + 0.0184*t3829 + t3674*t3862 + t3687*t3866 + t3695*t3883 + t3474*t3500*t3888 + t3699*t3927 + t3705*t3935 + t3708*t3948 + t3715*t3955 + t3719*t3971 + t3729*t3977 - 0.7055*(-1.*t3636*t3729 + t3719*t75) + var1[1];
  p_output1[14]=0. + 0.1305*(t3529*t3580 + t3476*t3747) + 0.0184*t3838 + t3474*t3531*t3862 + t3474*t3488*t3866 + t3747*t3883 - 1.*t3529*t3888 + t3766*t3927 + t3777*t3935 + t3782*t3948 + t3787*t3955 + t3792*t3971 + t3804*t3977 - 0.7055*(-1.*t3636*t3804 + t3792*t75) + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
