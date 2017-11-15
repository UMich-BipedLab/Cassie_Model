/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_left_src.h"

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
  double t3408;
  double t3402;
  double t3411;
  double t3403;
  double t3412;
  double t3355;
  double t3406;
  double t3413;
  double t3421;
  double t3426;
  double t3427;
  double t3429;
  double t3430;
  double t3438;
  double t3444;
  double t3447;
  double t3449;
  double t3435;
  double t3436;
  double t3437;
  double t3454;
  double t3480;
  double t3483;
  double t3485;
  double t3492;
  double t3474;
  double t3476;
  double t3477;
  double t3497;
  double t3498;
  double t3499;
  double t3509;
  double t3511;
  double t3512;
  double t3514;
  double t3518;
  double t3519;
  double t3521;
  double t3528;
  double t3529;
  double t3530;
  double t3532;
  double t3533;
  double t3534;
  double t3537;
  double t3541;
  double t3542;
  double t3543;
  double t3549;
  double t3550;
  double t3551;
  double t3554;
  double t3555;
  double t3557;
  double t3559;
  double t3563;
  double t3565;
  double t3566;
  double t3572;
  double t3574;
  double t3575;
  double t3360;
  double t3398;
  double t3400;
  double t3401;
  double t3432;
  double t3433;
  double t3589;
  double t3590;
  double t3591;
  double t3593;
  double t3594;
  double t3595;
  double t3448;
  double t3450;
  double t3452;
  double t3456;
  double t3457;
  double t3465;
  double t3597;
  double t3598;
  double t3599;
  double t3490;
  double t3493;
  double t3495;
  double t3500;
  double t3501;
  double t3502;
  double t3513;
  double t3516;
  double t3517;
  double t3609;
  double t3610;
  double t3611;
  double t3614;
  double t3615;
  double t3617;
  double t3525;
  double t3526;
  double t3527;
  double t3535;
  double t3538;
  double t3540;
  double t3620;
  double t3621;
  double t3622;
  double t3624;
  double t3626;
  double t3627;
  double t3546;
  double t3547;
  double t3548;
  double t3558;
  double t3560;
  double t3562;
  double t3630;
  double t3631;
  double t3634;
  double t3636;
  double t3637;
  double t3638;
  double t3569;
  double t3570;
  double t3571;
  double t3640;
  double t3641;
  double t3642;
  double t3644;
  double t3645;
  double t3646;
  double t3659;
  double t3660;
  double t3661;
  double t3668;
  double t3669;
  double t3670;
  double t3672;
  double t3673;
  double t3674;
  double t3676;
  double t3677;
  double t3678;
  double t3680;
  double t3681;
  double t3682;
  double t3684;
  double t3685;
  double t3686;
  double t3688;
  double t3689;
  double t3690;
  double t3692;
  double t3693;
  double t3694;
  double t3696;
  double t3697;
  double t3698;
  t3408 = Cos(var1[3]);
  t3402 = Cos(var1[5]);
  t3411 = Sin(var1[4]);
  t3403 = Sin(var1[3]);
  t3412 = Sin(var1[5]);
  t3355 = Cos(var1[6]);
  t3406 = -1.*t3402*t3403;
  t3413 = t3408*t3411*t3412;
  t3421 = t3406 + t3413;
  t3426 = t3408*t3402*t3411;
  t3427 = t3403*t3412;
  t3429 = t3426 + t3427;
  t3430 = Sin(var1[6]);
  t3438 = Cos(var1[7]);
  t3444 = -1.*t3438;
  t3447 = 1. + t3444;
  t3449 = Sin(var1[7]);
  t3435 = t3355*t3421;
  t3436 = t3429*t3430;
  t3437 = t3435 + t3436;
  t3454 = Cos(var1[4]);
  t3480 = Cos(var1[8]);
  t3483 = -1.*t3480;
  t3485 = 1. + t3483;
  t3492 = Sin(var1[8]);
  t3474 = t3408*t3454*t3438;
  t3476 = t3437*t3449;
  t3477 = t3474 + t3476;
  t3497 = t3355*t3429;
  t3498 = -1.*t3421*t3430;
  t3499 = t3497 + t3498;
  t3509 = Cos(var1[9]);
  t3511 = -1.*t3509;
  t3512 = 1. + t3511;
  t3514 = Sin(var1[9]);
  t3518 = t3480*t3477;
  t3519 = t3499*t3492;
  t3521 = t3518 + t3519;
  t3528 = t3480*t3499;
  t3529 = -1.*t3477*t3492;
  t3530 = t3528 + t3529;
  t3532 = Cos(var1[10]);
  t3533 = -1.*t3532;
  t3534 = 1. + t3533;
  t3537 = Sin(var1[10]);
  t3541 = -1.*t3514*t3521;
  t3542 = t3509*t3530;
  t3543 = t3541 + t3542;
  t3549 = t3509*t3521;
  t3550 = t3514*t3530;
  t3551 = t3549 + t3550;
  t3554 = Cos(var1[11]);
  t3555 = -1.*t3554;
  t3557 = 1. + t3555;
  t3559 = Sin(var1[11]);
  t3563 = t3537*t3543;
  t3565 = t3532*t3551;
  t3566 = t3563 + t3565;
  t3572 = t3532*t3543;
  t3574 = -1.*t3537*t3551;
  t3575 = t3572 + t3574;
  t3360 = -1.*t3355;
  t3398 = 1. + t3360;
  t3400 = 0.135*t3398;
  t3401 = 0. + t3400;
  t3432 = -0.135*t3430;
  t3433 = 0. + t3432;
  t3589 = t3408*t3402;
  t3590 = t3403*t3411*t3412;
  t3591 = t3589 + t3590;
  t3593 = t3402*t3403*t3411;
  t3594 = -1.*t3408*t3412;
  t3595 = t3593 + t3594;
  t3448 = 0.135*t3447;
  t3450 = 0.049*t3449;
  t3452 = 0. + t3448 + t3450;
  t3456 = -0.049*t3447;
  t3457 = 0.135*t3449;
  t3465 = 0. + t3456 + t3457;
  t3597 = t3355*t3591;
  t3598 = t3595*t3430;
  t3599 = t3597 + t3598;
  t3490 = -0.049*t3485;
  t3493 = -0.09*t3492;
  t3495 = 0. + t3490 + t3493;
  t3500 = -0.09*t3485;
  t3501 = 0.049*t3492;
  t3502 = 0. + t3500 + t3501;
  t3513 = -0.049*t3512;
  t3516 = -0.21*t3514;
  t3517 = 0. + t3513 + t3516;
  t3609 = t3454*t3438*t3403;
  t3610 = t3599*t3449;
  t3611 = t3609 + t3610;
  t3614 = t3355*t3595;
  t3615 = -1.*t3591*t3430;
  t3617 = t3614 + t3615;
  t3525 = -0.21*t3512;
  t3526 = 0.049*t3514;
  t3527 = 0. + t3525 + t3526;
  t3535 = -0.2707*t3534;
  t3538 = 0.0016*t3537;
  t3540 = 0. + t3535 + t3538;
  t3620 = t3480*t3611;
  t3621 = t3617*t3492;
  t3622 = t3620 + t3621;
  t3624 = t3480*t3617;
  t3626 = -1.*t3611*t3492;
  t3627 = t3624 + t3626;
  t3546 = -0.0016*t3534;
  t3547 = -0.2707*t3537;
  t3548 = 0. + t3546 + t3547;
  t3558 = 0.0184*t3557;
  t3560 = -0.7055*t3559;
  t3562 = 0. + t3558 + t3560;
  t3630 = -1.*t3514*t3622;
  t3631 = t3509*t3627;
  t3634 = t3630 + t3631;
  t3636 = t3509*t3622;
  t3637 = t3514*t3627;
  t3638 = t3636 + t3637;
  t3569 = -0.7055*t3557;
  t3570 = -0.0184*t3559;
  t3571 = 0. + t3569 + t3570;
  t3640 = t3537*t3634;
  t3641 = t3532*t3638;
  t3642 = t3640 + t3641;
  t3644 = t3532*t3634;
  t3645 = -1.*t3537*t3638;
  t3646 = t3644 + t3645;
  t3659 = t3454*t3355*t3412;
  t3660 = t3454*t3402*t3430;
  t3661 = t3659 + t3660;
  t3668 = -1.*t3438*t3411;
  t3669 = t3661*t3449;
  t3670 = t3668 + t3669;
  t3672 = t3454*t3402*t3355;
  t3673 = -1.*t3454*t3412*t3430;
  t3674 = t3672 + t3673;
  t3676 = t3480*t3670;
  t3677 = t3674*t3492;
  t3678 = t3676 + t3677;
  t3680 = t3480*t3674;
  t3681 = -1.*t3670*t3492;
  t3682 = t3680 + t3681;
  t3684 = -1.*t3514*t3678;
  t3685 = t3509*t3682;
  t3686 = t3684 + t3685;
  t3688 = t3509*t3678;
  t3689 = t3514*t3682;
  t3690 = t3688 + t3689;
  t3692 = t3537*t3686;
  t3693 = t3532*t3690;
  t3694 = t3692 + t3693;
  t3696 = t3532*t3686;
  t3697 = -1.*t3537*t3690;
  t3698 = t3696 + t3697;
  p_output1[0]=0. + t3401*t3421 + t3429*t3433 + t3437*t3452 + 0.1305*(t3437*t3438 - 1.*t3408*t3449*t3454) + t3408*t3454*t3465 + t3477*t3495 + t3499*t3502 + t3517*t3521 + t3527*t3530 + t3540*t3543 + t3548*t3551 + t3562*t3566 + t3571*t3575 - 0.7055*(-1.*t3559*t3566 + t3554*t3575) + 0.0184*(t3554*t3566 + t3559*t3575) + var1[0];
  p_output1[1]=0. + t3403*t3454*t3465 + t3401*t3591 + t3433*t3595 + t3452*t3599 + 0.1305*(-1.*t3403*t3449*t3454 + t3438*t3599) + t3495*t3611 + t3502*t3617 + t3517*t3622 + t3527*t3627 + t3540*t3634 + t3548*t3638 + t3562*t3642 + t3571*t3646 - 0.7055*(-1.*t3559*t3642 + t3554*t3646) + 0.0184*(t3554*t3642 + t3559*t3646) + var1[1];
  p_output1[2]=0. + t3401*t3412*t3454 + t3402*t3433*t3454 - 1.*t3411*t3465 + t3452*t3661 + 0.1305*(t3411*t3449 + t3438*t3661) + t3495*t3670 + t3502*t3674 + t3517*t3678 + t3527*t3682 + t3540*t3686 + t3548*t3690 + t3562*t3694 + t3571*t3698 - 0.7055*(-1.*t3559*t3694 + t3554*t3698) + 0.0184*(t3554*t3694 + t3559*t3698) + var1[2];
}



void p_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
