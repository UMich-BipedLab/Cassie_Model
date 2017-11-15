/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_left_src.h"

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
  double t4338;
  double t4447;
  double t4455;
  double t4449;
  double t4457;
  double t4429;
  double t4480;
  double t4483;
  double t4485;
  double t4450;
  double t4466;
  double t4469;
  double t4489;
  double t4223;
  double t4501;
  double t4504;
  double t4505;
  double t4351;
  double t4352;
  double t4423;
  double t4479;
  double t4490;
  double t4494;
  double t4495;
  double t4496;
  double t4498;
  double t4506;
  double t4519;
  double t4499;
  double t4514;
  double t4515;
  double t4220;
  double t4524;
  double t4525;
  double t4528;
  double t4537;
  double t4518;
  double t4530;
  double t4534;
  double t4189;
  double t4538;
  double t4539;
  double t4542;
  double t1474;
  double t4568;
  double t4569;
  double t4571;
  double t4563;
  double t4564;
  double t4566;
  double t4584;
  double t4585;
  double t4586;
  double t4562;
  double t4567;
  double t4573;
  double t4576;
  double t4577;
  double t4578;
  double t4581;
  double t4590;
  double t4591;
  double t4596;
  double t4599;
  double t4601;
  double t4549;
  double t4594;
  double t4602;
  double t4603;
  double t4607;
  double t4608;
  double t4609;
  double t4637;
  double t4639;
  double t4641;
  double t4627;
  double t4628;
  double t4629;
  double t4631;
  double t4632;
  double t4634;
  double t4635;
  double t4643;
  double t4644;
  double t4646;
  double t4647;
  double t4648;
  double t4645;
  double t4649;
  double t4650;
  double t4652;
  double t4655;
  double t4656;
  double t4535;
  double t4543;
  double t4544;
  double t4553;
  double t4554;
  double t4556;
  double t4605;
  double t4611;
  double t4612;
  double t4617;
  double t4619;
  double t4622;
  double t4651;
  double t4657;
  double t4660;
  double t4663;
  double t4667;
  double t4668;
  t4338 = Cos(var1[3]);
  t4447 = Cos(var1[5]);
  t4455 = Sin(var1[4]);
  t4449 = Sin(var1[3]);
  t4457 = Sin(var1[5]);
  t4429 = Cos(var1[6]);
  t4480 = t4338*t4447*t4455;
  t4483 = t4449*t4457;
  t4485 = t4480 + t4483;
  t4450 = -1.*t4447*t4449;
  t4466 = t4338*t4455*t4457;
  t4469 = t4450 + t4466;
  t4489 = Sin(var1[6]);
  t4223 = Cos(var1[8]);
  t4501 = t4429*t4485;
  t4504 = -1.*t4469*t4489;
  t4505 = t4501 + t4504;
  t4351 = Cos(var1[4]);
  t4352 = Cos(var1[7]);
  t4423 = t4338*t4351*t4352;
  t4479 = t4429*t4469;
  t4490 = t4485*t4489;
  t4494 = t4479 + t4490;
  t4495 = Sin(var1[7]);
  t4496 = t4494*t4495;
  t4498 = t4423 + t4496;
  t4506 = Sin(var1[8]);
  t4519 = Cos(var1[9]);
  t4499 = t4223*t4498;
  t4514 = t4505*t4506;
  t4515 = t4499 + t4514;
  t4220 = Sin(var1[9]);
  t4524 = t4223*t4505;
  t4525 = -1.*t4498*t4506;
  t4528 = t4524 + t4525;
  t4537 = Cos(var1[10]);
  t4518 = -1.*t4220*t4515;
  t4530 = t4519*t4528;
  t4534 = t4518 + t4530;
  t4189 = Sin(var1[10]);
  t4538 = t4519*t4515;
  t4539 = t4220*t4528;
  t4542 = t4538 + t4539;
  t1474 = Sin(var1[11]);
  t4568 = t4447*t4449*t4455;
  t4569 = -1.*t4338*t4457;
  t4571 = t4568 + t4569;
  t4563 = t4338*t4447;
  t4564 = t4449*t4455*t4457;
  t4566 = t4563 + t4564;
  t4584 = t4429*t4571;
  t4585 = -1.*t4566*t4489;
  t4586 = t4584 + t4585;
  t4562 = t4351*t4352*t4449;
  t4567 = t4429*t4566;
  t4573 = t4571*t4489;
  t4576 = t4567 + t4573;
  t4577 = t4576*t4495;
  t4578 = t4562 + t4577;
  t4581 = t4223*t4578;
  t4590 = t4586*t4506;
  t4591 = t4581 + t4590;
  t4596 = t4223*t4586;
  t4599 = -1.*t4578*t4506;
  t4601 = t4596 + t4599;
  t4549 = Cos(var1[11]);
  t4594 = -1.*t4220*t4591;
  t4602 = t4519*t4601;
  t4603 = t4594 + t4602;
  t4607 = t4519*t4591;
  t4608 = t4220*t4601;
  t4609 = t4607 + t4608;
  t4637 = t4351*t4447*t4429;
  t4639 = -1.*t4351*t4457*t4489;
  t4641 = t4637 + t4639;
  t4627 = -1.*t4352*t4455;
  t4628 = t4351*t4429*t4457;
  t4629 = t4351*t4447*t4489;
  t4631 = t4628 + t4629;
  t4632 = t4631*t4495;
  t4634 = t4627 + t4632;
  t4635 = t4223*t4634;
  t4643 = t4641*t4506;
  t4644 = t4635 + t4643;
  t4646 = t4223*t4641;
  t4647 = -1.*t4634*t4506;
  t4648 = t4646 + t4647;
  t4645 = -1.*t4220*t4644;
  t4649 = t4519*t4648;
  t4650 = t4645 + t4649;
  t4652 = t4519*t4644;
  t4655 = t4220*t4648;
  t4656 = t4652 + t4655;
  t4535 = t4189*t4534;
  t4543 = t4537*t4542;
  t4544 = t4535 + t4543;
  t4553 = t4537*t4534;
  t4554 = -1.*t4189*t4542;
  t4556 = t4553 + t4554;
  t4605 = t4189*t4603;
  t4611 = t4537*t4609;
  t4612 = t4605 + t4611;
  t4617 = t4537*t4603;
  t4619 = -1.*t4189*t4609;
  t4622 = t4617 + t4619;
  t4651 = t4189*t4650;
  t4657 = t4537*t4656;
  t4660 = t4651 + t4657;
  t4663 = t4537*t4650;
  t4667 = -1.*t4189*t4656;
  t4668 = t4663 + t4667;
  p_output1[0]=t1474*t4544 - 1.*t4549*t4556;
  p_output1[1]=t1474*t4612 - 1.*t4549*t4622;
  p_output1[2]=t1474*t4660 - 1.*t4549*t4668;
  p_output1[3]=t4544*t4549 + t1474*t4556;
  p_output1[4]=t4549*t4612 + t1474*t4622;
  p_output1[5]=t4549*t4660 + t1474*t4668;
  p_output1[6]=-1.*t4352*t4494 + t4338*t4351*t4495;
  p_output1[7]=t4351*t4449*t4495 - 1.*t4352*t4576;
  p_output1[8]=-1.*t4455*t4495 - 1.*t4352*t4631;
}



void R_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
