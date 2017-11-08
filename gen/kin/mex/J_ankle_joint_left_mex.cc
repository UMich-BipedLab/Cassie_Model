/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:14 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t3275;
  double t3284;
  double t3285;
  double t3273;
  double t3286;
  double t3244;
  double t3283;
  double t3288;
  double t3304;
  double t3309;
  double t3310;
  double t3313;
  double t3314;
  double t3329;
  double t3339;
  double t3343;
  double t3348;
  double t3323;
  double t3326;
  double t3327;
  double t3355;
  double t3378;
  double t3381;
  double t3382;
  double t3391;
  double t3374;
  double t3376;
  double t3377;
  double t3403;
  double t3405;
  double t3407;
  double t3416;
  double t3418;
  double t3419;
  double t3421;
  double t3424;
  double t3425;
  double t3426;
  double t3433;
  double t3434;
  double t3436;
  double t3438;
  double t3440;
  double t3442;
  double t3445;
  double t3450;
  double t3453;
  double t3454;
  double t3464;
  double t3465;
  double t3467;
  double t3245;
  double t3257;
  double t3270;
  double t3272;
  double t3320;
  double t3321;
  double t3480;
  double t3481;
  double t3482;
  double t3484;
  double t3485;
  double t3486;
  double t3346;
  double t3349;
  double t3352;
  double t3359;
  double t3360;
  double t3365;
  double t3488;
  double t3489;
  double t3490;
  double t3388;
  double t3393;
  double t3398;
  double t3409;
  double t3410;
  double t3414;
  double t3420;
  double t3422;
  double t3423;
  double t3500;
  double t3501;
  double t3502;
  double t3505;
  double t3506;
  double t3508;
  double t3429;
  double t3431;
  double t3432;
  double t3443;
  double t3446;
  double t3448;
  double t3511;
  double t3513;
  double t3514;
  double t3517;
  double t3518;
  double t3519;
  double t3458;
  double t3460;
  double t3462;
  double t3521;
  double t3522;
  double t3523;
  double t3525;
  double t3526;
  double t3527;
  double t3540;
  double t3541;
  double t3542;
  double t3549;
  double t3550;
  double t3551;
  double t3553;
  double t3554;
  double t3555;
  double t3557;
  double t3558;
  double t3559;
  double t3561;
  double t3562;
  double t3563;
  double t3565;
  double t3566;
  double t3567;
  double t3569;
  double t3570;
  double t3571;
  double t3584;
  double t3585;
  double t3586;
  double t3593;
  double t3594;
  double t3595;
  double t3597;
  double t3598;
  double t3599;
  double t3601;
  double t3602;
  double t3603;
  double t3605;
  double t3606;
  double t3607;
  double t3609;
  double t3610;
  double t3611;
  double t3613;
  double t3614;
  double t3615;
  double t3628;
  double t3629;
  double t3630;
  double t3637;
  double t3638;
  double t3639;
  double t3641;
  double t3642;
  double t3643;
  double t3645;
  double t3646;
  double t3647;
  double t3649;
  double t3650;
  double t3651;
  double t3653;
  double t3654;
  double t3655;
  double t3657;
  double t3658;
  double t3659;
  double t3671;
  double t3672;
  double t3673;
  double t3675;
  double t3676;
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
  double t3709;
  double t3710;
  double t3711;
  double t3714;
  double t3715;
  double t3716;
  double t3720;
  double t3721;
  double t3723;
  double t3724;
  double t3725;
  double t3727;
  double t3728;
  double t3729;
  double t3731;
  double t3732;
  double t3733;
  double t3735;
  double t3736;
  double t3737;
  double t3750;
  double t3751;
  double t3752;
  double t3756;
  double t3757;
  double t3758;
  double t3760;
  double t3761;
  double t3762;
  double t3764;
  double t3765;
  double t3766;
  double t3768;
  double t3769;
  double t3770;
  double t3772;
  double t3773;
  double t3774;
  double t3790;
  double t3791;
  double t3793;
  double t3794;
  double t3795;
  double t3797;
  double t3798;
  double t3799;
  double t3801;
  double t3802;
  double t3803;
  double t3805;
  double t3806;
  double t3807;
  double t3819;
  double t3820;
  double t3821;
  double t3823;
  double t3824;
  double t3828;
  double t3829;
  double t3831;
  double t3832;
  double t3833;
  double t3835;
  double t3836;
  double t3837;
  double t3839;
  double t3840;
  double t3841;
  double t3843;
  double t3844;
  double t3845;
  double t3753;
  double t3754;
  double t3755;
  double t3759;
  double t3763;
  double t3767;
  double t3771;
  double t3775;
  double t3776;
  double t3777;
  double t3778;
  double t3779;
  double t3780;
  double t3781;
  double t3782;
  double t3783;
  double t3493;
  double t3495;
  double t3497;
  double t3873;
  double t3874;
  double t3875;
  double t3877;
  double t3878;
  double t3879;
  double t3859;
  double t3860;
  double t3861;
  double t3863;
  double t3864;
  double t3891;
  double t3892;
  double t3893;
  double t3895;
  double t3896;
  double t3897;
  double t3904;
  double t3905;
  double t3906;
  double t3908;
  double t3909;
  double t3910;
  double t3922;
  double t3923;
  double t3924;
  double t3926;
  double t3927;
  double t3928;
  double t3936;
  double t3937;
  double t3938;
  double t3940;
  double t3941;
  double t3942;
  double t3960;
  double t3961;
  double t3962;
  double t3965;
  double t3966;
  double t3968;
  double t3969;
  double t3970;
  double t3953;
  double t3954;
  double t3956;
  double t3957;
  double t3958;
  double t3982;
  double t3983;
  double t3984;
  double t3986;
  double t3987;
  double t3988;
  double t3990;
  double t3991;
  double t3992;
  double t3994;
  double t3995;
  double t3996;
  double t3998;
  double t3999;
  double t4000;
  double t4012;
  double t4013;
  double t4014;
  double t4016;
  double t4017;
  double t4018;
  double t4020;
  double t4021;
  double t4022;
  double t4024;
  double t4025;
  double t4026;
  double t4028;
  double t4029;
  double t4030;
  double t4049;
  double t4050;
  double t3533;
  double t4041;
  double t4042;
  double t4043;
  double t4045;
  double t4046;
  double t4060;
  double t4061;
  double t4062;
  double t4065;
  double t4066;
  double t4068;
  double t4069;
  double t4080;
  double t4081;
  double t4082;
  double t4085;
  double t4086;
  double t4088;
  double t4089;
  double t4052;
  double t3534;
  double t3535;
  double t4100;
  double t4101;
  double t4103;
  double t4104;
  double t4105;
  double t4071;
  double t4113;
  double t4114;
  double t4115;
  double t4075;
  double t4091;
  double t4125;
  double t4126;
  double t4127;
  double t4095;
  t3275 = Cos(var1[5]);
  t3284 = Sin(var1[3]);
  t3285 = Sin(var1[4]);
  t3273 = Cos(var1[3]);
  t3286 = Sin(var1[5]);
  t3244 = Cos(var1[6]);
  t3283 = -1.*t3273*t3275;
  t3288 = -1.*t3284*t3285*t3286;
  t3304 = t3283 + t3288;
  t3309 = -1.*t3275*t3284*t3285;
  t3310 = t3273*t3286;
  t3313 = t3309 + t3310;
  t3314 = Sin(var1[6]);
  t3329 = Cos(var1[7]);
  t3339 = -1.*t3329;
  t3343 = 1. + t3339;
  t3348 = Sin(var1[7]);
  t3323 = t3244*t3304;
  t3326 = t3313*t3314;
  t3327 = t3323 + t3326;
  t3355 = Cos(var1[4]);
  t3378 = Cos(var1[8]);
  t3381 = -1.*t3378;
  t3382 = 1. + t3381;
  t3391 = Sin(var1[8]);
  t3374 = -1.*t3355*t3329*t3284;
  t3376 = t3327*t3348;
  t3377 = t3374 + t3376;
  t3403 = t3244*t3313;
  t3405 = -1.*t3304*t3314;
  t3407 = t3403 + t3405;
  t3416 = Cos(var1[9]);
  t3418 = -1.*t3416;
  t3419 = 1. + t3418;
  t3421 = Sin(var1[9]);
  t3424 = t3378*t3377;
  t3425 = t3407*t3391;
  t3426 = t3424 + t3425;
  t3433 = t3378*t3407;
  t3434 = -1.*t3377*t3391;
  t3436 = t3433 + t3434;
  t3438 = Cos(var1[10]);
  t3440 = -1.*t3438;
  t3442 = 1. + t3440;
  t3445 = Sin(var1[10]);
  t3450 = -1.*t3421*t3426;
  t3453 = t3416*t3436;
  t3454 = t3450 + t3453;
  t3464 = t3416*t3426;
  t3465 = t3421*t3436;
  t3467 = t3464 + t3465;
  t3245 = -1.*t3244;
  t3257 = 1. + t3245;
  t3270 = 0.135*t3257;
  t3272 = 0. + t3270;
  t3320 = -0.135*t3314;
  t3321 = 0. + t3320;
  t3480 = -1.*t3275*t3284;
  t3481 = t3273*t3285*t3286;
  t3482 = t3480 + t3481;
  t3484 = t3273*t3275*t3285;
  t3485 = t3284*t3286;
  t3486 = t3484 + t3485;
  t3346 = 0.135*t3343;
  t3349 = 0.049*t3348;
  t3352 = 0. + t3346 + t3349;
  t3359 = -0.049*t3343;
  t3360 = 0.135*t3348;
  t3365 = 0. + t3359 + t3360;
  t3488 = t3244*t3482;
  t3489 = t3486*t3314;
  t3490 = t3488 + t3489;
  t3388 = -0.049*t3382;
  t3393 = -0.09*t3391;
  t3398 = 0. + t3388 + t3393;
  t3409 = -0.09*t3382;
  t3410 = 0.049*t3391;
  t3414 = 0. + t3409 + t3410;
  t3420 = -0.049*t3419;
  t3422 = -0.21*t3421;
  t3423 = 0. + t3420 + t3422;
  t3500 = t3273*t3355*t3329;
  t3501 = t3490*t3348;
  t3502 = t3500 + t3501;
  t3505 = t3244*t3486;
  t3506 = -1.*t3482*t3314;
  t3508 = t3505 + t3506;
  t3429 = -0.21*t3419;
  t3431 = 0.049*t3421;
  t3432 = 0. + t3429 + t3431;
  t3443 = -0.2707*t3442;
  t3446 = 0.0016*t3445;
  t3448 = 0. + t3443 + t3446;
  t3511 = t3378*t3502;
  t3513 = t3508*t3391;
  t3514 = t3511 + t3513;
  t3517 = t3378*t3508;
  t3518 = -1.*t3502*t3391;
  t3519 = t3517 + t3518;
  t3458 = -0.0016*t3442;
  t3460 = -0.2707*t3445;
  t3462 = 0. + t3458 + t3460;
  t3521 = -1.*t3421*t3514;
  t3522 = t3416*t3519;
  t3523 = t3521 + t3522;
  t3525 = t3416*t3514;
  t3526 = t3421*t3519;
  t3527 = t3525 + t3526;
  t3540 = t3273*t3355*t3244*t3286;
  t3541 = t3273*t3355*t3275*t3314;
  t3542 = t3540 + t3541;
  t3549 = -1.*t3273*t3329*t3285;
  t3550 = t3542*t3348;
  t3551 = t3549 + t3550;
  t3553 = t3273*t3355*t3275*t3244;
  t3554 = -1.*t3273*t3355*t3286*t3314;
  t3555 = t3553 + t3554;
  t3557 = t3378*t3551;
  t3558 = t3555*t3391;
  t3559 = t3557 + t3558;
  t3561 = t3378*t3555;
  t3562 = -1.*t3551*t3391;
  t3563 = t3561 + t3562;
  t3565 = -1.*t3421*t3559;
  t3566 = t3416*t3563;
  t3567 = t3565 + t3566;
  t3569 = t3416*t3559;
  t3570 = t3421*t3563;
  t3571 = t3569 + t3570;
  t3584 = t3355*t3244*t3284*t3286;
  t3585 = t3355*t3275*t3284*t3314;
  t3586 = t3584 + t3585;
  t3593 = -1.*t3329*t3284*t3285;
  t3594 = t3586*t3348;
  t3595 = t3593 + t3594;
  t3597 = t3355*t3275*t3244*t3284;
  t3598 = -1.*t3355*t3284*t3286*t3314;
  t3599 = t3597 + t3598;
  t3601 = t3378*t3595;
  t3602 = t3599*t3391;
  t3603 = t3601 + t3602;
  t3605 = t3378*t3599;
  t3606 = -1.*t3595*t3391;
  t3607 = t3605 + t3606;
  t3609 = -1.*t3421*t3603;
  t3610 = t3416*t3607;
  t3611 = t3609 + t3610;
  t3613 = t3416*t3603;
  t3614 = t3421*t3607;
  t3615 = t3613 + t3614;
  t3628 = -1.*t3244*t3285*t3286;
  t3629 = -1.*t3275*t3285*t3314;
  t3630 = t3628 + t3629;
  t3637 = -1.*t3355*t3329;
  t3638 = t3630*t3348;
  t3639 = t3637 + t3638;
  t3641 = -1.*t3275*t3244*t3285;
  t3642 = t3285*t3286*t3314;
  t3643 = t3641 + t3642;
  t3645 = t3378*t3639;
  t3646 = t3643*t3391;
  t3647 = t3645 + t3646;
  t3649 = t3378*t3643;
  t3650 = -1.*t3639*t3391;
  t3651 = t3649 + t3650;
  t3653 = -1.*t3421*t3647;
  t3654 = t3416*t3651;
  t3655 = t3653 + t3654;
  t3657 = t3416*t3647;
  t3658 = t3421*t3651;
  t3659 = t3657 + t3658;
  t3671 = t3275*t3284;
  t3672 = -1.*t3273*t3285*t3286;
  t3673 = t3671 + t3672;
  t3675 = t3673*t3314;
  t3676 = t3505 + t3675;
  t3680 = t3244*t3673;
  t3681 = -1.*t3486*t3314;
  t3682 = t3680 + t3681;
  t3684 = t3378*t3676*t3348;
  t3685 = t3682*t3391;
  t3686 = t3684 + t3685;
  t3688 = t3378*t3682;
  t3689 = -1.*t3676*t3348*t3391;
  t3690 = t3688 + t3689;
  t3692 = -1.*t3421*t3686;
  t3693 = t3416*t3690;
  t3694 = t3692 + t3693;
  t3696 = t3416*t3686;
  t3697 = t3421*t3690;
  t3698 = t3696 + t3697;
  t3709 = t3275*t3284*t3285;
  t3710 = -1.*t3273*t3286;
  t3711 = t3709 + t3710;
  t3714 = t3244*t3711;
  t3715 = t3304*t3314;
  t3716 = t3714 + t3715;
  t3720 = -1.*t3711*t3314;
  t3721 = t3323 + t3720;
  t3723 = t3378*t3716*t3348;
  t3724 = t3721*t3391;
  t3725 = t3723 + t3724;
  t3727 = t3378*t3721;
  t3728 = -1.*t3716*t3348*t3391;
  t3729 = t3727 + t3728;
  t3731 = -1.*t3421*t3725;
  t3732 = t3416*t3729;
  t3733 = t3731 + t3732;
  t3735 = t3416*t3725;
  t3736 = t3421*t3729;
  t3737 = t3735 + t3736;
  t3750 = t3355*t3275*t3244;
  t3751 = -1.*t3355*t3286*t3314;
  t3752 = t3750 + t3751;
  t3756 = -1.*t3355*t3244*t3286;
  t3757 = -1.*t3355*t3275*t3314;
  t3758 = t3756 + t3757;
  t3760 = t3378*t3752*t3348;
  t3761 = t3758*t3391;
  t3762 = t3760 + t3761;
  t3764 = t3378*t3758;
  t3765 = -1.*t3752*t3348*t3391;
  t3766 = t3764 + t3765;
  t3768 = -1.*t3421*t3762;
  t3769 = t3416*t3766;
  t3770 = t3768 + t3769;
  t3772 = t3416*t3762;
  t3773 = t3421*t3766;
  t3774 = t3772 + t3773;
  t3790 = -1.*t3244*t3482;
  t3791 = t3790 + t3681;
  t3793 = t3378*t3508*t3348;
  t3794 = t3791*t3391;
  t3795 = t3793 + t3794;
  t3797 = t3378*t3791;
  t3798 = -1.*t3508*t3348*t3391;
  t3799 = t3797 + t3798;
  t3801 = -1.*t3421*t3795;
  t3802 = t3416*t3799;
  t3803 = t3801 + t3802;
  t3805 = t3416*t3795;
  t3806 = t3421*t3799;
  t3807 = t3805 + t3806;
  t3819 = t3273*t3275;
  t3820 = t3284*t3285*t3286;
  t3821 = t3819 + t3820;
  t3823 = -1.*t3821*t3314;
  t3824 = t3714 + t3823;
  t3828 = -1.*t3244*t3821;
  t3829 = t3828 + t3720;
  t3831 = t3378*t3824*t3348;
  t3832 = t3829*t3391;
  t3833 = t3831 + t3832;
  t3835 = t3378*t3829;
  t3836 = -1.*t3824*t3348*t3391;
  t3837 = t3835 + t3836;
  t3839 = -1.*t3421*t3833;
  t3840 = t3416*t3837;
  t3841 = t3839 + t3840;
  t3843 = t3416*t3833;
  t3844 = t3421*t3837;
  t3845 = t3843 + t3844;
  t3753 = 0.1305*t3329*t3752;
  t3754 = t3752*t3352;
  t3755 = t3752*t3348*t3398;
  t3759 = t3758*t3414;
  t3763 = t3423*t3762;
  t3767 = t3432*t3766;
  t3771 = t3448*t3770;
  t3775 = t3462*t3774;
  t3776 = t3445*t3770;
  t3777 = t3438*t3774;
  t3778 = t3776 + t3777;
  t3779 = 0.0184*t3778;
  t3780 = t3438*t3770;
  t3781 = -1.*t3445*t3774;
  t3782 = t3780 + t3781;
  t3783 = -0.7055*t3782;
  t3493 = t3329*t3490;
  t3495 = -1.*t3273*t3355*t3348;
  t3497 = t3493 + t3495;
  t3873 = -1.*t3378*t3421*t3497;
  t3874 = -1.*t3416*t3497*t3391;
  t3875 = t3873 + t3874;
  t3877 = t3416*t3378*t3497;
  t3878 = -1.*t3421*t3497*t3391;
  t3879 = t3877 + t3878;
  t3859 = 0.135*t3329;
  t3860 = -0.049*t3348;
  t3861 = t3859 + t3860;
  t3863 = 0.049*t3329;
  t3864 = t3863 + t3360;
  t3891 = t3244*t3821;
  t3892 = t3711*t3314;
  t3893 = t3891 + t3892;
  t3895 = t3329*t3893;
  t3896 = -1.*t3355*t3284*t3348;
  t3897 = t3895 + t3896;
  t3904 = -1.*t3378*t3421*t3897;
  t3905 = -1.*t3416*t3897*t3391;
  t3906 = t3904 + t3905;
  t3908 = t3416*t3378*t3897;
  t3909 = -1.*t3421*t3897*t3391;
  t3910 = t3908 + t3909;
  t3922 = t3355*t3244*t3286;
  t3923 = t3355*t3275*t3314;
  t3924 = t3922 + t3923;
  t3926 = t3329*t3924;
  t3927 = t3285*t3348;
  t3928 = t3926 + t3927;
  t3936 = -1.*t3378*t3421*t3928;
  t3937 = -1.*t3416*t3928*t3391;
  t3938 = t3936 + t3937;
  t3940 = t3416*t3378*t3928;
  t3941 = -1.*t3421*t3928*t3391;
  t3942 = t3940 + t3941;
  t3960 = -1.*t3378*t3502;
  t3961 = -1.*t3508*t3391;
  t3962 = t3960 + t3961;
  t3965 = t3421*t3962;
  t3966 = t3965 + t3522;
  t3968 = t3416*t3962;
  t3969 = -1.*t3421*t3519;
  t3970 = t3968 + t3969;
  t3953 = 0.049*t3378;
  t3954 = t3953 + t3393;
  t3956 = -0.09*t3378;
  t3957 = -0.049*t3391;
  t3958 = t3956 + t3957;
  t3982 = t3355*t3329*t3284;
  t3983 = t3893*t3348;
  t3984 = t3982 + t3983;
  t3986 = -1.*t3378*t3984;
  t3987 = -1.*t3824*t3391;
  t3988 = t3986 + t3987;
  t3990 = t3378*t3824;
  t3991 = -1.*t3984*t3391;
  t3992 = t3990 + t3991;
  t3994 = t3421*t3988;
  t3995 = t3416*t3992;
  t3996 = t3994 + t3995;
  t3998 = t3416*t3988;
  t3999 = -1.*t3421*t3992;
  t4000 = t3998 + t3999;
  t4012 = -1.*t3329*t3285;
  t4013 = t3924*t3348;
  t4014 = t4012 + t4013;
  t4016 = -1.*t3378*t4014;
  t4017 = -1.*t3752*t3391;
  t4018 = t4016 + t4017;
  t4020 = t3378*t3752;
  t4021 = -1.*t4014*t3391;
  t4022 = t4020 + t4021;
  t4024 = t3421*t4018;
  t4025 = t3416*t4022;
  t4026 = t4024 + t4025;
  t4028 = t3416*t4018;
  t4029 = -1.*t3421*t4022;
  t4030 = t4028 + t4029;
  t4049 = -1.*t3416*t3514;
  t4050 = t4049 + t3969;
  t3533 = t3438*t3523;
  t4041 = -0.21*t3416;
  t4042 = -0.049*t3421;
  t4043 = t4041 + t4042;
  t4045 = 0.049*t3416;
  t4046 = t4045 + t3422;
  t4060 = t3378*t3984;
  t4061 = t3824*t3391;
  t4062 = t4060 + t4061;
  t4065 = -1.*t3421*t4062;
  t4066 = t4065 + t3995;
  t4068 = -1.*t3416*t4062;
  t4069 = t4068 + t3999;
  t4080 = t3378*t4014;
  t4081 = t3752*t3391;
  t4082 = t4080 + t4081;
  t4085 = -1.*t3421*t4082;
  t4086 = t4085 + t4025;
  t4088 = -1.*t3416*t4082;
  t4089 = t4088 + t4029;
  t4052 = -1.*t3445*t3523;
  t3534 = -1.*t3445*t3527;
  t3535 = t3533 + t3534;
  t4100 = 0.0016*t3438;
  t4101 = t4100 + t3460;
  t4103 = -0.2707*t3438;
  t4104 = -0.0016*t3445;
  t4105 = t4103 + t4104;
  t4071 = -1.*t3445*t4066;
  t4113 = t3416*t4062;
  t4114 = t3421*t3992;
  t4115 = t4113 + t4114;
  t4075 = t3438*t4066;
  t4091 = -1.*t3445*t4086;
  t4125 = t3416*t4082;
  t4126 = t3421*t4022;
  t4127 = t4125 + t4126;
  t4095 = t3438*t4086;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t3272*t3304 + t3313*t3321 + t3327*t3352 + 0.1305*(t3327*t3329 + t3284*t3348*t3355) - 1.*t3284*t3355*t3365 + t3377*t3398 + t3407*t3414 + t3423*t3426 + t3432*t3436 + t3448*t3454 + t3462*t3467 + 0.0184*(t3445*t3454 + t3438*t3467) - 0.7055*(t3438*t3454 - 1.*t3445*t3467);
  p_output1[10]=t3273*t3355*t3365 + t3272*t3482 + t3321*t3486 + t3352*t3490 + 0.1305*t3497 + t3398*t3502 + t3414*t3508 + t3423*t3514 + t3432*t3519 + t3448*t3523 + t3462*t3527 + 0.0184*(t3445*t3523 + t3438*t3527) - 0.7055*t3535;
  p_output1[11]=0;
  p_output1[12]=t3272*t3273*t3286*t3355 + t3273*t3275*t3321*t3355 - 1.*t3273*t3285*t3365 + t3352*t3542 + 0.1305*(t3273*t3285*t3348 + t3329*t3542) + t3398*t3551 + t3414*t3555 + t3423*t3559 + t3432*t3563 + t3448*t3567 + t3462*t3571 + 0.0184*(t3445*t3567 + t3438*t3571) - 0.7055*(t3438*t3567 - 1.*t3445*t3571);
  p_output1[13]=t3272*t3284*t3286*t3355 + t3275*t3284*t3321*t3355 - 1.*t3284*t3285*t3365 + t3352*t3586 + 0.1305*(t3284*t3285*t3348 + t3329*t3586) + t3398*t3595 + t3414*t3599 + t3423*t3603 + t3432*t3607 + t3448*t3611 + t3462*t3615 + 0.0184*(t3445*t3611 + t3438*t3615) - 0.7055*(t3438*t3611 - 1.*t3445*t3615);
  p_output1[14]=-1.*t3272*t3285*t3286 - 1.*t3275*t3285*t3321 - 1.*t3355*t3365 + t3352*t3630 + 0.1305*(t3348*t3355 + t3329*t3630) + t3398*t3639 + t3414*t3643 + t3423*t3647 + t3432*t3651 + t3448*t3655 + t3462*t3659 + 0.0184*(t3445*t3655 + t3438*t3659) - 0.7055*(t3438*t3655 - 1.*t3445*t3659);
  p_output1[15]=t3272*t3486 + t3321*t3673 + 0.1305*t3329*t3676 + t3352*t3676 + t3348*t3398*t3676 + t3414*t3682 + t3423*t3686 + t3432*t3690 + t3448*t3694 + t3462*t3698 + 0.0184*(t3445*t3694 + t3438*t3698) - 0.7055*(t3438*t3694 - 1.*t3445*t3698);
  p_output1[16]=t3304*t3321 + t3272*t3711 + 0.1305*t3329*t3716 + t3352*t3716 + t3348*t3398*t3716 + t3414*t3721 + t3423*t3725 + t3432*t3729 + t3448*t3733 + t3462*t3737 + 0.0184*(t3445*t3733 + t3438*t3737) - 0.7055*(t3438*t3733 - 1.*t3445*t3737);
  p_output1[17]=t3272*t3275*t3355 - 1.*t3286*t3321*t3355 + t3753 + t3754 + t3755 + t3759 + t3763 + t3767 + t3771 + t3775 + t3779 + t3783;
  p_output1[18]=0.135*t3314*t3482 - 0.135*t3244*t3486 + 0.1305*t3329*t3508 + t3352*t3508 + t3348*t3398*t3508 + t3414*t3791 + t3423*t3795 + t3432*t3799 + t3448*t3803 + t3462*t3807 + 0.0184*(t3445*t3803 + t3438*t3807) - 0.7055*(t3438*t3803 - 1.*t3445*t3807);
  p_output1[19]=-0.135*t3244*t3711 + 0.135*t3314*t3821 + 0.1305*t3329*t3824 + t3352*t3824 + t3348*t3398*t3824 + t3414*t3829 + t3423*t3833 + t3432*t3837 + t3448*t3841 + t3462*t3845 + 0.0184*(t3445*t3841 + t3438*t3845) - 0.7055*(t3438*t3841 - 1.*t3445*t3845);
  p_output1[20]=-0.135*t3244*t3275*t3355 + 0.135*t3286*t3314*t3355 + t3753 + t3754 + t3755 + t3759 + t3763 + t3767 + t3771 + t3775 + t3779 + t3783;
  p_output1[21]=0.1305*(-1.*t3273*t3329*t3355 - 1.*t3348*t3490) + t3398*t3497 + t3378*t3423*t3497 - 1.*t3391*t3432*t3497 + t3273*t3355*t3861 + t3490*t3864 + t3448*t3875 + t3462*t3879 + 0.0184*(t3445*t3875 + t3438*t3879) - 0.7055*(t3438*t3875 - 1.*t3445*t3879);
  p_output1[22]=t3284*t3355*t3861 + t3864*t3893 + 0.1305*(t3374 - 1.*t3348*t3893) + t3398*t3897 + t3378*t3423*t3897 - 1.*t3391*t3432*t3897 + t3448*t3906 + t3462*t3910 + 0.0184*(t3445*t3906 + t3438*t3910) - 0.7055*(t3438*t3906 - 1.*t3445*t3910);
  p_output1[23]=-1.*t3285*t3861 + t3864*t3924 + 0.1305*(t3285*t3329 - 1.*t3348*t3924) + t3398*t3928 + t3378*t3423*t3928 - 1.*t3391*t3432*t3928 + t3448*t3938 + t3462*t3942 + 0.0184*(t3445*t3938 + t3438*t3942) - 0.7055*(t3438*t3938 - 1.*t3445*t3942);
  p_output1[24]=t3423*t3519 + t3508*t3954 + t3502*t3958 + t3432*t3962 + t3462*t3966 + t3448*t3970 - 0.7055*(-1.*t3445*t3966 + t3438*t3970) + 0.0184*(t3438*t3966 + t3445*t3970);
  p_output1[25]=t3824*t3954 + t3958*t3984 + t3432*t3988 + t3423*t3992 + t3462*t3996 + t3448*t4000 - 0.7055*(-1.*t3445*t3996 + t3438*t4000) + 0.0184*(t3438*t3996 + t3445*t4000);
  p_output1[26]=t3752*t3954 + t3958*t4014 + t3432*t4018 + t3423*t4022 + t3462*t4026 + t3448*t4030 - 0.7055*(-1.*t3445*t4026 + t3438*t4030) + 0.0184*(t3438*t4026 + t3445*t4030);
  p_output1[27]=t3462*t3523 + t3514*t4043 + t3519*t4046 + t3448*t4050 + 0.0184*(t3533 + t3445*t4050) - 0.7055*(t3438*t4050 + t4052);
  p_output1[28]=t3992*t4046 + t4043*t4062 + t3462*t4066 + t3448*t4069 - 0.7055*(t3438*t4069 + t4071) + 0.0184*(t3445*t4069 + t4075);
  p_output1[29]=t4022*t4046 + t4043*t4082 + t3462*t4086 + t3448*t4089 - 0.7055*(t3438*t4089 + t4091) + 0.0184*(t3445*t4089 + t4095);
  p_output1[30]=0.0184*t3535 - 0.7055*(-1.*t3438*t3527 + t4052) + t3523*t4101 + t3527*t4105;
  p_output1[31]=t4066*t4101 + t4105*t4115 - 0.7055*(t4071 - 1.*t3438*t4115) + 0.0184*(t4075 - 1.*t3445*t4115);
  p_output1[32]=t4086*t4101 + t4105*t4127 - 0.7055*(t4091 - 1.*t3438*t4127) + 0.0184*(t4095 - 1.*t3445*t4127);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_ankle_joint_left_mex.hh"

namespace SymExpression
{

void J_ankle_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
