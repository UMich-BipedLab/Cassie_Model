/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_left_src.h"

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
  double t4386;
  double t4379;
  double t4387;
  double t4380;
  double t4388;
  double t4300;
  double t4383;
  double t4389;
  double t4394;
  double t4398;
  double t4400;
  double t4404;
  double t4405;
  double t4418;
  double t4423;
  double t4425;
  double t4427;
  double t4413;
  double t4416;
  double t4417;
  double t4432;
  double t4455;
  double t4458;
  double t4459;
  double t4466;
  double t4449;
  double t4452;
  double t4454;
  double t4475;
  double t4477;
  double t4478;
  double t4488;
  double t4490;
  double t4491;
  double t4493;
  double t4497;
  double t4498;
  double t4499;
  double t4507;
  double t4508;
  double t4509;
  double t4511;
  double t4513;
  double t4514;
  double t4517;
  double t4521;
  double t4522;
  double t4523;
  double t4529;
  double t4530;
  double t4531;
  double t4534;
  double t4535;
  double t4537;
  double t4539;
  double t4543;
  double t4545;
  double t4546;
  double t4552;
  double t4554;
  double t4555;
  double t4334;
  double t4373;
  double t4375;
  double t4378;
  double t4409;
  double t4410;
  double t4569;
  double t4570;
  double t4571;
  double t4573;
  double t4574;
  double t4575;
  double t4426;
  double t4428;
  double t4430;
  double t4433;
  double t4435;
  double t4440;
  double t4577;
  double t4578;
  double t4579;
  double t4464;
  double t4468;
  double t4472;
  double t4479;
  double t4481;
  double t4482;
  double t4492;
  double t4495;
  double t4496;
  double t4589;
  double t4590;
  double t4591;
  double t4594;
  double t4595;
  double t4597;
  double t4504;
  double t4505;
  double t4506;
  double t4515;
  double t4518;
  double t4520;
  double t4600;
  double t4601;
  double t4602;
  double t4604;
  double t4606;
  double t4607;
  double t4526;
  double t4527;
  double t4528;
  double t4538;
  double t4540;
  double t4542;
  double t4610;
  double t4611;
  double t4614;
  double t4616;
  double t4617;
  double t4618;
  double t4549;
  double t4550;
  double t4551;
  double t4620;
  double t4621;
  double t4622;
  double t4624;
  double t4625;
  double t4626;
  double t4639;
  double t4640;
  double t4641;
  double t4648;
  double t4649;
  double t4650;
  double t4652;
  double t4653;
  double t4654;
  double t4656;
  double t4657;
  double t4658;
  double t4660;
  double t4661;
  double t4662;
  double t4664;
  double t4665;
  double t4666;
  double t4668;
  double t4669;
  double t4670;
  double t4672;
  double t4673;
  double t4674;
  double t4676;
  double t4677;
  double t4678;
  t4386 = Cos(var1[3]);
  t4379 = Cos(var1[5]);
  t4387 = Sin(var1[4]);
  t4380 = Sin(var1[3]);
  t4388 = Sin(var1[5]);
  t4300 = Cos(var1[6]);
  t4383 = -1.*t4379*t4380;
  t4389 = t4386*t4387*t4388;
  t4394 = t4383 + t4389;
  t4398 = t4386*t4379*t4387;
  t4400 = t4380*t4388;
  t4404 = t4398 + t4400;
  t4405 = Sin(var1[6]);
  t4418 = Cos(var1[7]);
  t4423 = -1.*t4418;
  t4425 = 1. + t4423;
  t4427 = Sin(var1[7]);
  t4413 = t4300*t4394;
  t4416 = t4404*t4405;
  t4417 = t4413 + t4416;
  t4432 = Cos(var1[4]);
  t4455 = Cos(var1[8]);
  t4458 = -1.*t4455;
  t4459 = 1. + t4458;
  t4466 = Sin(var1[8]);
  t4449 = t4386*t4432*t4418;
  t4452 = t4417*t4427;
  t4454 = t4449 + t4452;
  t4475 = t4300*t4404;
  t4477 = -1.*t4394*t4405;
  t4478 = t4475 + t4477;
  t4488 = Cos(var1[9]);
  t4490 = -1.*t4488;
  t4491 = 1. + t4490;
  t4493 = Sin(var1[9]);
  t4497 = t4455*t4454;
  t4498 = t4478*t4466;
  t4499 = t4497 + t4498;
  t4507 = t4455*t4478;
  t4508 = -1.*t4454*t4466;
  t4509 = t4507 + t4508;
  t4511 = Cos(var1[10]);
  t4513 = -1.*t4511;
  t4514 = 1. + t4513;
  t4517 = Sin(var1[10]);
  t4521 = -1.*t4493*t4499;
  t4522 = t4488*t4509;
  t4523 = t4521 + t4522;
  t4529 = t4488*t4499;
  t4530 = t4493*t4509;
  t4531 = t4529 + t4530;
  t4534 = Cos(var1[11]);
  t4535 = -1.*t4534;
  t4537 = 1. + t4535;
  t4539 = Sin(var1[11]);
  t4543 = t4517*t4523;
  t4545 = t4511*t4531;
  t4546 = t4543 + t4545;
  t4552 = t4511*t4523;
  t4554 = -1.*t4517*t4531;
  t4555 = t4552 + t4554;
  t4334 = -1.*t4300;
  t4373 = 1. + t4334;
  t4375 = 0.135*t4373;
  t4378 = 0. + t4375;
  t4409 = -0.135*t4405;
  t4410 = 0. + t4409;
  t4569 = t4386*t4379;
  t4570 = t4380*t4387*t4388;
  t4571 = t4569 + t4570;
  t4573 = t4379*t4380*t4387;
  t4574 = -1.*t4386*t4388;
  t4575 = t4573 + t4574;
  t4426 = 0.135*t4425;
  t4428 = 0.049*t4427;
  t4430 = 0. + t4426 + t4428;
  t4433 = -0.049*t4425;
  t4435 = 0.135*t4427;
  t4440 = 0. + t4433 + t4435;
  t4577 = t4300*t4571;
  t4578 = t4575*t4405;
  t4579 = t4577 + t4578;
  t4464 = -0.049*t4459;
  t4468 = -0.09*t4466;
  t4472 = 0. + t4464 + t4468;
  t4479 = -0.09*t4459;
  t4481 = 0.049*t4466;
  t4482 = 0. + t4479 + t4481;
  t4492 = -0.049*t4491;
  t4495 = -0.21*t4493;
  t4496 = 0. + t4492 + t4495;
  t4589 = t4432*t4418*t4380;
  t4590 = t4579*t4427;
  t4591 = t4589 + t4590;
  t4594 = t4300*t4575;
  t4595 = -1.*t4571*t4405;
  t4597 = t4594 + t4595;
  t4504 = -0.21*t4491;
  t4505 = 0.049*t4493;
  t4506 = 0. + t4504 + t4505;
  t4515 = -0.2707*t4514;
  t4518 = 0.0016*t4517;
  t4520 = 0. + t4515 + t4518;
  t4600 = t4455*t4591;
  t4601 = t4597*t4466;
  t4602 = t4600 + t4601;
  t4604 = t4455*t4597;
  t4606 = -1.*t4591*t4466;
  t4607 = t4604 + t4606;
  t4526 = -0.0016*t4514;
  t4527 = -0.2707*t4517;
  t4528 = 0. + t4526 + t4527;
  t4538 = 0.0184*t4537;
  t4540 = -0.7055*t4539;
  t4542 = 0. + t4538 + t4540;
  t4610 = -1.*t4493*t4602;
  t4611 = t4488*t4607;
  t4614 = t4610 + t4611;
  t4616 = t4488*t4602;
  t4617 = t4493*t4607;
  t4618 = t4616 + t4617;
  t4549 = -0.7055*t4537;
  t4550 = -0.0184*t4539;
  t4551 = 0. + t4549 + t4550;
  t4620 = t4517*t4614;
  t4621 = t4511*t4618;
  t4622 = t4620 + t4621;
  t4624 = t4511*t4614;
  t4625 = -1.*t4517*t4618;
  t4626 = t4624 + t4625;
  t4639 = t4432*t4300*t4388;
  t4640 = t4432*t4379*t4405;
  t4641 = t4639 + t4640;
  t4648 = -1.*t4418*t4387;
  t4649 = t4641*t4427;
  t4650 = t4648 + t4649;
  t4652 = t4432*t4379*t4300;
  t4653 = -1.*t4432*t4388*t4405;
  t4654 = t4652 + t4653;
  t4656 = t4455*t4650;
  t4657 = t4654*t4466;
  t4658 = t4656 + t4657;
  t4660 = t4455*t4654;
  t4661 = -1.*t4650*t4466;
  t4662 = t4660 + t4661;
  t4664 = -1.*t4493*t4658;
  t4665 = t4488*t4662;
  t4666 = t4664 + t4665;
  t4668 = t4488*t4658;
  t4669 = t4493*t4662;
  t4670 = t4668 + t4669;
  t4672 = t4517*t4666;
  t4673 = t4511*t4670;
  t4674 = t4672 + t4673;
  t4676 = t4511*t4666;
  t4677 = -1.*t4517*t4670;
  t4678 = t4676 + t4677;
  p_output1[0]=0. + t4378*t4394 + t4404*t4410 + t4417*t4430 + 0.1305*(t4417*t4418 - 1.*t4386*t4427*t4432) + t4386*t4432*t4440 + t4454*t4472 + t4478*t4482 + t4496*t4499 + t4506*t4509 + t4520*t4523 + t4528*t4531 + t4542*t4546 + t4551*t4555 - 1.1135*(-1.*t4539*t4546 + t4534*t4555) - 0.0216*(t4534*t4546 + t4539*t4555) + var1[0];
  p_output1[1]=0. + t4380*t4432*t4440 + t4378*t4571 + t4410*t4575 + t4430*t4579 + 0.1305*(-1.*t4380*t4427*t4432 + t4418*t4579) + t4472*t4591 + t4482*t4597 + t4496*t4602 + t4506*t4607 + t4520*t4614 + t4528*t4618 + t4542*t4622 + t4551*t4626 - 1.1135*(-1.*t4539*t4622 + t4534*t4626) - 0.0216*(t4534*t4622 + t4539*t4626) + var1[1];
  p_output1[2]=0. + t4378*t4388*t4432 + t4379*t4410*t4432 - 1.*t4387*t4440 + t4430*t4641 + 0.1305*(t4387*t4427 + t4418*t4641) + t4472*t4650 + t4482*t4654 + t4496*t4658 + t4506*t4662 + t4520*t4666 + t4528*t4670 + t4542*t4674 + t4551*t4678 - 1.1135*(-1.*t4539*t4674 + t4534*t4678) - 0.0216*(t4534*t4674 + t4539*t4678) + var1[2];
}



void p_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
