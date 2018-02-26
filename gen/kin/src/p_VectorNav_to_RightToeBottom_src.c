/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom_src.h"

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
  double t57;
  double t4177;
  double t4303;
  double t4347;
  double t4355;
  double t4366;
  double t4374;
  double t4420;
  double t4431;
  double t4433;
  double t4451;
  double t4414;
  double t4417;
  double t4419;
  double t4479;
  double t4486;
  double t4490;
  double t4512;
  double t4514;
  double t4516;
  double t4518;
  double t4505;
  double t4506;
  double t4508;
  double t4530;
  double t4531;
  double t4539;
  double t4563;
  double t4564;
  double t4567;
  double t4570;
  double t4558;
  double t4560;
  double t4561;
  double t4588;
  double t4589;
  double t4595;
  double t4633;
  double t62;
  double t3381;
  double t3982;
  double t4229;
  double t4259;
  double t4299;
  double t4305;
  double t4311;
  double t4656;
  double t4372;
  double t4375;
  double t4383;
  double t4390;
  double t4402;
  double t4408;
  double t4667;
  double t4668;
  double t4671;
  double t4673;
  double t4675;
  double t4676;
  double t4436;
  double t4465;
  double t4473;
  double t4496;
  double t4497;
  double t4498;
  double t4680;
  double t4681;
  double t4682;
  double t4686;
  double t4687;
  double t4688;
  double t4517;
  double t4521;
  double t4522;
  double t4541;
  double t4544;
  double t4549;
  double t4690;
  double t4691;
  double t4692;
  double t4694;
  double t4695;
  double t4698;
  double t4569;
  double t4578;
  double t4580;
  double t4599;
  double t4602;
  double t4604;
  double t4700;
  double t4701;
  double t4704;
  double t4706;
  double t4707;
  double t4708;
  double t4640;
  double t4641;
  double t4646;
  double t4657;
  double t4663;
  double t4664;
  double t4729;
  double t4730;
  double t4731;
  double t4733;
  double t4734;
  double t4735;
  double t4737;
  double t4738;
  double t4739;
  double t4741;
  double t4742;
  double t4743;
  double t4745;
  double t4746;
  double t4747;
  double t4751;
  double t4752;
  double t4753;
  double t4758;
  double t4759;
  double t4760;
  double t4762;
  double t4763;
  double t4764;
  t57 = Cos(var1[8]);
  t4177 = Cos(var1[9]);
  t4303 = Sin(var1[9]);
  t4347 = Cos(var1[10]);
  t4355 = -1.*t4347;
  t4366 = 1. + t4355;
  t4374 = Sin(var1[10]);
  t4420 = Cos(var1[11]);
  t4431 = -1.*t4420;
  t4433 = 1. + t4431;
  t4451 = Sin(var1[11]);
  t4414 = t57*t4177*t4347;
  t4417 = -1.*t57*t4303*t4374;
  t4419 = t4414 + t4417;
  t4479 = -1.*t57*t4347*t4303;
  t4486 = -1.*t57*t4177*t4374;
  t4490 = t4479 + t4486;
  t4512 = Cos(var1[12]);
  t4514 = -1.*t4512;
  t4516 = 1. + t4514;
  t4518 = Sin(var1[12]);
  t4505 = t4420*t4419;
  t4506 = t4490*t4451;
  t4508 = t4505 + t4506;
  t4530 = t4420*t4490;
  t4531 = -1.*t4419*t4451;
  t4539 = t4530 + t4531;
  t4563 = Cos(var1[13]);
  t4564 = -1.*t4563;
  t4567 = 1. + t4564;
  t4570 = Sin(var1[13]);
  t4558 = t4512*t4508;
  t4560 = t4539*t4518;
  t4561 = t4558 + t4560;
  t4588 = t4512*t4539;
  t4589 = -1.*t4508*t4518;
  t4595 = t4588 + t4589;
  t4633 = Cos(var1[7]);
  t62 = -1.*t57;
  t3381 = 1. + t62;
  t3982 = Sin(var1[8]);
  t4229 = -1.*t4177;
  t4259 = 1. + t4229;
  t4299 = -0.049*t4259;
  t4305 = -0.09*t4303;
  t4311 = 0. + t4299 + t4305;
  t4656 = Sin(var1[7]);
  t4372 = -0.049*t4366;
  t4375 = -0.21*t4374;
  t4383 = 0. + t4372 + t4375;
  t4390 = -0.21*t4366;
  t4402 = 0.049*t4374;
  t4408 = 0. + t4390 + t4402;
  t4667 = t4633*t4177*t3982;
  t4668 = -1.*t4656*t4303;
  t4671 = t4667 + t4668;
  t4673 = -1.*t4177*t4656;
  t4675 = -1.*t4633*t3982*t4303;
  t4676 = t4673 + t4675;
  t4436 = -0.0016*t4433;
  t4465 = -0.2707*t4451;
  t4473 = 0. + t4436 + t4465;
  t4496 = -0.2707*t4433;
  t4497 = 0.0016*t4451;
  t4498 = 0. + t4496 + t4497;
  t4680 = t4347*t4671;
  t4681 = t4676*t4374;
  t4682 = t4680 + t4681;
  t4686 = t4347*t4676;
  t4687 = -1.*t4671*t4374;
  t4688 = t4686 + t4687;
  t4517 = 0.0184*t4516;
  t4521 = -0.7055*t4518;
  t4522 = 0. + t4517 + t4521;
  t4541 = -0.7055*t4516;
  t4544 = -0.0184*t4518;
  t4549 = 0. + t4541 + t4544;
  t4690 = t4420*t4682;
  t4691 = t4688*t4451;
  t4692 = t4690 + t4691;
  t4694 = t4420*t4688;
  t4695 = -1.*t4682*t4451;
  t4698 = t4694 + t4695;
  t4569 = -0.0216*t4567;
  t4578 = -1.1135*t4570;
  t4580 = 0. + t4569 + t4578;
  t4599 = -1.1135*t4567;
  t4602 = 0.0216*t4570;
  t4604 = 0. + t4599 + t4602;
  t4700 = t4512*t4692;
  t4701 = t4698*t4518;
  t4704 = t4700 + t4701;
  t4706 = t4512*t4698;
  t4707 = -1.*t4692*t4518;
  t4708 = t4706 + t4707;
  t4640 = -0.135*t3381;
  t4641 = 0.049*t3982;
  t4646 = 0. + t4640 + t4641;
  t4657 = -0.09*t4259;
  t4663 = 0.049*t4303;
  t4664 = 0. + t4657 + t4663;
  t4729 = t4177*t4656*t3982;
  t4730 = t4633*t4303;
  t4731 = t4729 + t4730;
  t4733 = t4633*t4177;
  t4734 = -1.*t4656*t3982*t4303;
  t4735 = t4733 + t4734;
  t4737 = t4347*t4731;
  t4738 = t4735*t4374;
  t4739 = t4737 + t4738;
  t4741 = t4347*t4735;
  t4742 = -1.*t4731*t4374;
  t4743 = t4741 + t4742;
  t4745 = t4420*t4739;
  t4746 = t4743*t4451;
  t4747 = t4745 + t4746;
  t4751 = t4420*t4743;
  t4752 = -1.*t4739*t4451;
  t4753 = t4751 + t4752;
  t4758 = t4512*t4747;
  t4759 = t4753*t4518;
  t4760 = t4758 + t4759;
  t4762 = t4512*t4753;
  t4763 = -1.*t4747*t4518;
  t4764 = t4762 + t4763;
  p_output1[0]=-0.03155 - 0.049*t3381 - 0.004500000000000004*t3982 + t4419*t4473 + t4490*t4498 + t4508*t4522 + t4539*t4549 + t4561*t4580 - 1.1312*(-1.*t4561*t4570 + t4563*t4595) + 0.0306*(t4561*t4563 + t4570*t4595) + t4595*t4604 + t4311*t57 + t4177*t4383*t57 - 1.*t4303*t4408*t57;
  p_output1[1]=0. + 0.135*(1. - 1.*t4633) - 1.*t3982*t4311*t4633 - 1.*t4633*t4646 + t4656*t4664 - 1.*t4383*t4671 - 1.*t4408*t4676 - 1.*t4473*t4682 - 1.*t4498*t4688 - 1.*t4522*t4692 - 1.*t4549*t4698 - 1.*t4580*t4704 - 1.*t4604*t4708 + 1.1312*(-1.*t4570*t4704 + t4563*t4708) - 0.0306*(t4563*t4704 + t4570*t4708) + 0.1305*t4633*t57;
  p_output1[2]=-0.07996 - 0.135*t4656 - 1.*t3982*t4311*t4656 - 1.*t4646*t4656 - 1.*t4633*t4664 - 1.*t4383*t4731 - 1.*t4408*t4735 - 1.*t4473*t4739 - 1.*t4498*t4743 - 1.*t4522*t4747 - 1.*t4549*t4753 - 1.*t4580*t4760 - 1.*t4604*t4764 + 1.1312*(-1.*t4570*t4760 + t4563*t4764) - 0.0306*(t4563*t4760 + t4570*t4764) + 0.1305*t4656*t57;
}



void p_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
