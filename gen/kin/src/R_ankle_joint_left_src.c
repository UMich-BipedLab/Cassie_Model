/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:23 GMT-05:00
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
  double t4158;
  double t4371;
  double t4386;
  double t4379;
  double t4387;
  double t4301;
  double t4408;
  double t4412;
  double t4416;
  double t4383;
  double t4388;
  double t4401;
  double t4429;
  double t4133;
  double t4448;
  double t4451;
  double t4452;
  double t4164;
  double t4282;
  double t4297;
  double t4407;
  double t4430;
  double t4438;
  double t4439;
  double t4442;
  double t4444;
  double t4454;
  double t4460;
  double t4447;
  double t4457;
  double t4458;
  double t3011;
  double t4461;
  double t4465;
  double t4467;
  double t4480;
  double t4459;
  double t4471;
  double t4473;
  double t550;
  double t4484;
  double t4486;
  double t4487;
  double t229;
  double t4517;
  double t4518;
  double t4520;
  double t4511;
  double t4512;
  double t4514;
  double t4529;
  double t4531;
  double t4535;
  double t4506;
  double t4515;
  double t4523;
  double t4524;
  double t4525;
  double t4527;
  double t4528;
  double t4536;
  double t4537;
  double t4540;
  double t4542;
  double t4545;
  double t4494;
  double t4539;
  double t4547;
  double t4550;
  double t4554;
  double t4557;
  double t4558;
  double t4585;
  double t4588;
  double t4589;
  double t4574;
  double t4575;
  double t4576;
  double t4578;
  double t4580;
  double t4583;
  double t4584;
  double t4590;
  double t4592;
  double t4595;
  double t4596;
  double t4600;
  double t4593;
  double t4601;
  double t4602;
  double t4605;
  double t4606;
  double t4607;
  double t4474;
  double t4489;
  double t4491;
  double t4497;
  double t4500;
  double t4501;
  double t4552;
  double t4560;
  double t4562;
  double t4566;
  double t4567;
  double t4568;
  double t4604;
  double t4608;
  double t4609;
  double t4611;
  double t4614;
  double t4615;
  t4158 = Cos(var1[3]);
  t4371 = Cos(var1[5]);
  t4386 = Sin(var1[4]);
  t4379 = Sin(var1[3]);
  t4387 = Sin(var1[5]);
  t4301 = Cos(var1[6]);
  t4408 = t4158*t4371*t4386;
  t4412 = t4379*t4387;
  t4416 = t4408 + t4412;
  t4383 = -1.*t4371*t4379;
  t4388 = t4158*t4386*t4387;
  t4401 = t4383 + t4388;
  t4429 = Sin(var1[6]);
  t4133 = Cos(var1[8]);
  t4448 = t4301*t4416;
  t4451 = -1.*t4401*t4429;
  t4452 = t4448 + t4451;
  t4164 = Cos(var1[4]);
  t4282 = Cos(var1[7]);
  t4297 = t4158*t4164*t4282;
  t4407 = t4301*t4401;
  t4430 = t4416*t4429;
  t4438 = t4407 + t4430;
  t4439 = Sin(var1[7]);
  t4442 = t4438*t4439;
  t4444 = t4297 + t4442;
  t4454 = Sin(var1[8]);
  t4460 = Cos(var1[9]);
  t4447 = t4133*t4444;
  t4457 = t4452*t4454;
  t4458 = t4447 + t4457;
  t3011 = Sin(var1[9]);
  t4461 = t4133*t4452;
  t4465 = -1.*t4444*t4454;
  t4467 = t4461 + t4465;
  t4480 = Cos(var1[10]);
  t4459 = -1.*t3011*t4458;
  t4471 = t4460*t4467;
  t4473 = t4459 + t4471;
  t550 = Sin(var1[10]);
  t4484 = t4460*t4458;
  t4486 = t3011*t4467;
  t4487 = t4484 + t4486;
  t229 = Sin(var1[11]);
  t4517 = t4371*t4379*t4386;
  t4518 = -1.*t4158*t4387;
  t4520 = t4517 + t4518;
  t4511 = t4158*t4371;
  t4512 = t4379*t4386*t4387;
  t4514 = t4511 + t4512;
  t4529 = t4301*t4520;
  t4531 = -1.*t4514*t4429;
  t4535 = t4529 + t4531;
  t4506 = t4164*t4282*t4379;
  t4515 = t4301*t4514;
  t4523 = t4520*t4429;
  t4524 = t4515 + t4523;
  t4525 = t4524*t4439;
  t4527 = t4506 + t4525;
  t4528 = t4133*t4527;
  t4536 = t4535*t4454;
  t4537 = t4528 + t4536;
  t4540 = t4133*t4535;
  t4542 = -1.*t4527*t4454;
  t4545 = t4540 + t4542;
  t4494 = Cos(var1[11]);
  t4539 = -1.*t3011*t4537;
  t4547 = t4460*t4545;
  t4550 = t4539 + t4547;
  t4554 = t4460*t4537;
  t4557 = t3011*t4545;
  t4558 = t4554 + t4557;
  t4585 = t4164*t4371*t4301;
  t4588 = -1.*t4164*t4387*t4429;
  t4589 = t4585 + t4588;
  t4574 = -1.*t4282*t4386;
  t4575 = t4164*t4301*t4387;
  t4576 = t4164*t4371*t4429;
  t4578 = t4575 + t4576;
  t4580 = t4578*t4439;
  t4583 = t4574 + t4580;
  t4584 = t4133*t4583;
  t4590 = t4589*t4454;
  t4592 = t4584 + t4590;
  t4595 = t4133*t4589;
  t4596 = -1.*t4583*t4454;
  t4600 = t4595 + t4596;
  t4593 = -1.*t3011*t4592;
  t4601 = t4460*t4600;
  t4602 = t4593 + t4601;
  t4605 = t4460*t4592;
  t4606 = t3011*t4600;
  t4607 = t4605 + t4606;
  t4474 = t550*t4473;
  t4489 = t4480*t4487;
  t4491 = t4474 + t4489;
  t4497 = t4480*t4473;
  t4500 = -1.*t550*t4487;
  t4501 = t4497 + t4500;
  t4552 = t550*t4550;
  t4560 = t4480*t4558;
  t4562 = t4552 + t4560;
  t4566 = t4480*t4550;
  t4567 = -1.*t550*t4558;
  t4568 = t4566 + t4567;
  t4604 = t550*t4602;
  t4608 = t4480*t4607;
  t4609 = t4604 + t4608;
  t4611 = t4480*t4602;
  t4614 = -1.*t550*t4607;
  t4615 = t4611 + t4614;
  p_output1[0]=t229*t4491 - 1.*t4494*t4501;
  p_output1[1]=t229*t4562 - 1.*t4494*t4568;
  p_output1[2]=t229*t4609 - 1.*t4494*t4615;
  p_output1[3]=t4491*t4494 + t229*t4501;
  p_output1[4]=t4494*t4562 + t229*t4568;
  p_output1[5]=t4494*t4609 + t229*t4615;
  p_output1[6]=-1.*t4282*t4438 + t4158*t4164*t4439;
  p_output1[7]=t4164*t4379*t4439 - 1.*t4282*t4524;
  p_output1[8]=-1.*t4386*t4439 - 1.*t4282*t4578;
}



void R_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
