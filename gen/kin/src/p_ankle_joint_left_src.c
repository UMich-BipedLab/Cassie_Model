/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:05 GMT-04:00
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
  double t3370;
  double t3365;
  double t3372;
  double t3366;
  double t3375;
  double t127;
  double t3367;
  double t3376;
  double t3377;
  double t3389;
  double t3390;
  double t3391;
  double t3393;
  double t3401;
  double t3402;
  double t3408;
  double t3412;
  double t3398;
  double t3399;
  double t3400;
  double t3417;
  double t3441;
  double t3444;
  double t3447;
  double t3454;
  double t3437;
  double t3438;
  double t3440;
  double t3460;
  double t3461;
  double t3462;
  double t3468;
  double t3473;
  double t3475;
  double t3477;
  double t3481;
  double t3482;
  double t3483;
  double t3491;
  double t3492;
  double t3493;
  double t3495;
  double t3496;
  double t3497;
  double t3499;
  double t3504;
  double t3505;
  double t3506;
  double t3512;
  double t3513;
  double t3514;
  double t3516;
  double t3518;
  double t3519;
  double t3522;
  double t3526;
  double t3527;
  double t3529;
  double t3535;
  double t3536;
  double t3538;
  double t3319;
  double t3324;
  double t3362;
  double t3364;
  double t3394;
  double t3396;
  double t3552;
  double t3553;
  double t3554;
  double t3556;
  double t3557;
  double t3558;
  double t3411;
  double t3413;
  double t3414;
  double t3418;
  double t3420;
  double t3421;
  double t3560;
  double t3561;
  double t3562;
  double t3449;
  double t3456;
  double t3457;
  double t3463;
  double t3464;
  double t3465;
  double t3476;
  double t3478;
  double t3480;
  double t3571;
  double t3573;
  double t3574;
  double t3576;
  double t3578;
  double t3579;
  double t3488;
  double t3489;
  double t3490;
  double t3498;
  double t3501;
  double t3502;
  double t3582;
  double t3584;
  double t3585;
  double t3587;
  double t3588;
  double t3590;
  double t3509;
  double t3510;
  double t3511;
  double t3521;
  double t3523;
  double t3524;
  double t3592;
  double t3594;
  double t3595;
  double t3599;
  double t3600;
  double t3601;
  double t3532;
  double t3533;
  double t3534;
  double t3603;
  double t3604;
  double t3605;
  double t3607;
  double t3608;
  double t3609;
  double t3622;
  double t3623;
  double t3624;
  double t3631;
  double t3632;
  double t3633;
  double t3635;
  double t3636;
  double t3637;
  double t3639;
  double t3640;
  double t3641;
  double t3643;
  double t3644;
  double t3645;
  double t3647;
  double t3648;
  double t3649;
  double t3651;
  double t3652;
  double t3653;
  double t3655;
  double t3656;
  double t3657;
  double t3659;
  double t3660;
  double t3661;
  t3370 = Cos(var1[3]);
  t3365 = Cos(var1[5]);
  t3372 = Sin(var1[4]);
  t3366 = Sin(var1[3]);
  t3375 = Sin(var1[5]);
  t127 = Cos(var1[6]);
  t3367 = -1.*t3365*t3366;
  t3376 = t3370*t3372*t3375;
  t3377 = t3367 + t3376;
  t3389 = t3370*t3365*t3372;
  t3390 = t3366*t3375;
  t3391 = t3389 + t3390;
  t3393 = Sin(var1[6]);
  t3401 = Cos(var1[7]);
  t3402 = -1.*t3401;
  t3408 = 1. + t3402;
  t3412 = Sin(var1[7]);
  t3398 = t127*t3377;
  t3399 = t3391*t3393;
  t3400 = t3398 + t3399;
  t3417 = Cos(var1[4]);
  t3441 = Cos(var1[8]);
  t3444 = -1.*t3441;
  t3447 = 1. + t3444;
  t3454 = Sin(var1[8]);
  t3437 = t3370*t3417*t3401;
  t3438 = t3400*t3412;
  t3440 = t3437 + t3438;
  t3460 = t127*t3391;
  t3461 = -1.*t3377*t3393;
  t3462 = t3460 + t3461;
  t3468 = Cos(var1[9]);
  t3473 = -1.*t3468;
  t3475 = 1. + t3473;
  t3477 = Sin(var1[9]);
  t3481 = t3441*t3440;
  t3482 = t3462*t3454;
  t3483 = t3481 + t3482;
  t3491 = t3441*t3462;
  t3492 = -1.*t3440*t3454;
  t3493 = t3491 + t3492;
  t3495 = Cos(var1[10]);
  t3496 = -1.*t3495;
  t3497 = 1. + t3496;
  t3499 = Sin(var1[10]);
  t3504 = -1.*t3477*t3483;
  t3505 = t3468*t3493;
  t3506 = t3504 + t3505;
  t3512 = t3468*t3483;
  t3513 = t3477*t3493;
  t3514 = t3512 + t3513;
  t3516 = Cos(var1[11]);
  t3518 = -1.*t3516;
  t3519 = 1. + t3518;
  t3522 = Sin(var1[11]);
  t3526 = t3499*t3506;
  t3527 = t3495*t3514;
  t3529 = t3526 + t3527;
  t3535 = t3495*t3506;
  t3536 = -1.*t3499*t3514;
  t3538 = t3535 + t3536;
  t3319 = -1.*t127;
  t3324 = 1. + t3319;
  t3362 = 0.135*t3324;
  t3364 = 0. + t3362;
  t3394 = -0.135*t3393;
  t3396 = 0. + t3394;
  t3552 = t3370*t3365;
  t3553 = t3366*t3372*t3375;
  t3554 = t3552 + t3553;
  t3556 = t3365*t3366*t3372;
  t3557 = -1.*t3370*t3375;
  t3558 = t3556 + t3557;
  t3411 = 0.135*t3408;
  t3413 = 0.049*t3412;
  t3414 = 0. + t3411 + t3413;
  t3418 = -0.049*t3408;
  t3420 = 0.135*t3412;
  t3421 = 0. + t3418 + t3420;
  t3560 = t127*t3554;
  t3561 = t3558*t3393;
  t3562 = t3560 + t3561;
  t3449 = -0.049*t3447;
  t3456 = -0.09*t3454;
  t3457 = 0. + t3449 + t3456;
  t3463 = -0.09*t3447;
  t3464 = 0.049*t3454;
  t3465 = 0. + t3463 + t3464;
  t3476 = -0.049*t3475;
  t3478 = -0.21*t3477;
  t3480 = 0. + t3476 + t3478;
  t3571 = t3417*t3401*t3366;
  t3573 = t3562*t3412;
  t3574 = t3571 + t3573;
  t3576 = t127*t3558;
  t3578 = -1.*t3554*t3393;
  t3579 = t3576 + t3578;
  t3488 = -0.21*t3475;
  t3489 = 0.049*t3477;
  t3490 = 0. + t3488 + t3489;
  t3498 = -0.2707*t3497;
  t3501 = 0.0016*t3499;
  t3502 = 0. + t3498 + t3501;
  t3582 = t3441*t3574;
  t3584 = t3579*t3454;
  t3585 = t3582 + t3584;
  t3587 = t3441*t3579;
  t3588 = -1.*t3574*t3454;
  t3590 = t3587 + t3588;
  t3509 = -0.0016*t3497;
  t3510 = -0.2707*t3499;
  t3511 = 0. + t3509 + t3510;
  t3521 = 0.0184*t3519;
  t3523 = -0.7055*t3522;
  t3524 = 0. + t3521 + t3523;
  t3592 = -1.*t3477*t3585;
  t3594 = t3468*t3590;
  t3595 = t3592 + t3594;
  t3599 = t3468*t3585;
  t3600 = t3477*t3590;
  t3601 = t3599 + t3600;
  t3532 = -0.7055*t3519;
  t3533 = -0.0184*t3522;
  t3534 = 0. + t3532 + t3533;
  t3603 = t3499*t3595;
  t3604 = t3495*t3601;
  t3605 = t3603 + t3604;
  t3607 = t3495*t3595;
  t3608 = -1.*t3499*t3601;
  t3609 = t3607 + t3608;
  t3622 = t3417*t127*t3375;
  t3623 = t3417*t3365*t3393;
  t3624 = t3622 + t3623;
  t3631 = -1.*t3401*t3372;
  t3632 = t3624*t3412;
  t3633 = t3631 + t3632;
  t3635 = t3417*t3365*t127;
  t3636 = -1.*t3417*t3375*t3393;
  t3637 = t3635 + t3636;
  t3639 = t3441*t3633;
  t3640 = t3637*t3454;
  t3641 = t3639 + t3640;
  t3643 = t3441*t3637;
  t3644 = -1.*t3633*t3454;
  t3645 = t3643 + t3644;
  t3647 = -1.*t3477*t3641;
  t3648 = t3468*t3645;
  t3649 = t3647 + t3648;
  t3651 = t3468*t3641;
  t3652 = t3477*t3645;
  t3653 = t3651 + t3652;
  t3655 = t3499*t3649;
  t3656 = t3495*t3653;
  t3657 = t3655 + t3656;
  t3659 = t3495*t3649;
  t3660 = -1.*t3499*t3653;
  t3661 = t3659 + t3660;
  p_output1[0]=0. + t3364*t3377 + t3391*t3396 + t3400*t3414 + 0.1305*(t3400*t3401 - 1.*t3370*t3412*t3417) + t3370*t3417*t3421 + t3440*t3457 + t3462*t3465 + t3480*t3483 + t3490*t3493 + t3502*t3506 + t3511*t3514 + t3524*t3529 + t3534*t3538 - 0.7055*(-1.*t3522*t3529 + t3516*t3538) + 0.0184*(t3516*t3529 + t3522*t3538) + var1[0];
  p_output1[1]=0. + t3366*t3417*t3421 + t3364*t3554 + t3396*t3558 + t3414*t3562 + 0.1305*(-1.*t3366*t3412*t3417 + t3401*t3562) + t3457*t3574 + t3465*t3579 + t3480*t3585 + t3490*t3590 + t3502*t3595 + t3511*t3601 + t3524*t3605 + t3534*t3609 - 0.7055*(-1.*t3522*t3605 + t3516*t3609) + 0.0184*(t3516*t3605 + t3522*t3609) + var1[1];
  p_output1[2]=0. + t3364*t3375*t3417 + t3365*t3396*t3417 - 1.*t3372*t3421 + t3414*t3624 + 0.1305*(t3372*t3412 + t3401*t3624) + t3457*t3633 + t3465*t3637 + t3480*t3641 + t3490*t3645 + t3502*t3649 + t3511*t3653 + t3524*t3657 + t3534*t3661 - 0.7055*(-1.*t3522*t3657 + t3516*t3661) + 0.0184*(t3516*t3657 + t3522*t3661) + var1[2];
}



void p_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
