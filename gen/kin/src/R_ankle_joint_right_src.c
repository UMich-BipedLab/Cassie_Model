/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_right_src.h"

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
  double t1973;
  double t2555;
  double t1972;
  double t2050;
  double t2781;
  double t3272;
  double t2533;
  double t2787;
  double t2978;
  double t1909;
  double t3282;
  double t3666;
  double t3673;
  double t4028;
  double t3198;
  double t3711;
  double t3839;
  double t863;
  double t4033;
  double t4244;
  double t4271;
  double t4273;
  double t4276;
  double t4279;
  double t4288;
  double t4297;
  double t4301;
  double t4321;
  double t4016;
  double t4302;
  double t4305;
  double t714;
  double t4323;
  double t4325;
  double t4326;
  double t4339;
  double t4319;
  double t4327;
  double t4328;
  double t575;
  double t4345;
  double t4347;
  double t4352;
  double t522;
  double t4412;
  double t4416;
  double t4421;
  double t4430;
  double t4435;
  double t4438;
  double t4423;
  double t4442;
  double t4443;
  double t4447;
  double t4448;
  double t4451;
  double t4452;
  double t4457;
  double t4460;
  double t4444;
  double t4461;
  double t4465;
  double t4471;
  double t4473;
  double t4474;
  double t4367;
  double t4467;
  double t4480;
  double t4484;
  double t4487;
  double t4489;
  double t4491;
  double t4517;
  double t4518;
  double t4520;
  double t4524;
  double t4525;
  double t4527;
  double t4528;
  double t4529;
  double t4535;
  double t4523;
  double t4536;
  double t4539;
  double t4542;
  double t4545;
  double t4547;
  double t4540;
  double t4550;
  double t4552;
  double t4554;
  double t4557;
  double t4559;
  double t4331;
  double t4353;
  double t4355;
  double t4376;
  double t4382;
  double t4388;
  double t4486;
  double t4497;
  double t4500;
  double t4506;
  double t4510;
  double t4511;
  double t4553;
  double t4560;
  double t4562;
  double t4574;
  double t4575;
  double t4576;
  t1973 = Cos(var1[5]);
  t2555 = Sin(var1[3]);
  t1972 = Cos(var1[3]);
  t2050 = Sin(var1[4]);
  t2781 = Sin(var1[5]);
  t3272 = Sin(var1[13]);
  t2533 = t1972*t1973*t2050;
  t2787 = t2555*t2781;
  t2978 = t2533 + t2787;
  t1909 = Cos(var1[13]);
  t3282 = -1.*t1973*t2555;
  t3666 = t1972*t2050*t2781;
  t3673 = t3282 + t3666;
  t4028 = Cos(var1[15]);
  t3198 = t1909*t2978;
  t3711 = -1.*t3272*t3673;
  t3839 = t3198 + t3711;
  t863 = Sin(var1[15]);
  t4033 = Cos(var1[14]);
  t4244 = Cos(var1[4]);
  t4271 = t4033*t1972*t4244;
  t4273 = Sin(var1[14]);
  t4276 = t3272*t2978;
  t4279 = t1909*t3673;
  t4288 = t4276 + t4279;
  t4297 = t4273*t4288;
  t4301 = t4271 + t4297;
  t4321 = Cos(var1[16]);
  t4016 = t863*t3839;
  t4302 = t4028*t4301;
  t4305 = t4016 + t4302;
  t714 = Sin(var1[16]);
  t4323 = t4028*t3839;
  t4325 = -1.*t863*t4301;
  t4326 = t4323 + t4325;
  t4339 = Cos(var1[17]);
  t4319 = -1.*t714*t4305;
  t4327 = t4321*t4326;
  t4328 = t4319 + t4327;
  t575 = Sin(var1[17]);
  t4345 = t4321*t4305;
  t4347 = t714*t4326;
  t4352 = t4345 + t4347;
  t522 = Sin(var1[18]);
  t4412 = t1973*t2555*t2050;
  t4416 = -1.*t1972*t2781;
  t4421 = t4412 + t4416;
  t4430 = t1972*t1973;
  t4435 = t2555*t2050*t2781;
  t4438 = t4430 + t4435;
  t4423 = t1909*t4421;
  t4442 = -1.*t3272*t4438;
  t4443 = t4423 + t4442;
  t4447 = t4033*t4244*t2555;
  t4448 = t3272*t4421;
  t4451 = t1909*t4438;
  t4452 = t4448 + t4451;
  t4457 = t4273*t4452;
  t4460 = t4447 + t4457;
  t4444 = t863*t4443;
  t4461 = t4028*t4460;
  t4465 = t4444 + t4461;
  t4471 = t4028*t4443;
  t4473 = -1.*t863*t4460;
  t4474 = t4471 + t4473;
  t4367 = Cos(var1[18]);
  t4467 = -1.*t714*t4465;
  t4480 = t4321*t4474;
  t4484 = t4467 + t4480;
  t4487 = t4321*t4465;
  t4489 = t714*t4474;
  t4491 = t4487 + t4489;
  t4517 = t1909*t4244*t1973;
  t4518 = -1.*t4244*t3272*t2781;
  t4520 = t4517 + t4518;
  t4524 = -1.*t4033*t2050;
  t4525 = t4244*t1973*t3272;
  t4527 = t1909*t4244*t2781;
  t4528 = t4525 + t4527;
  t4529 = t4273*t4528;
  t4535 = t4524 + t4529;
  t4523 = t863*t4520;
  t4536 = t4028*t4535;
  t4539 = t4523 + t4536;
  t4542 = t4028*t4520;
  t4545 = -1.*t863*t4535;
  t4547 = t4542 + t4545;
  t4540 = -1.*t714*t4539;
  t4550 = t4321*t4547;
  t4552 = t4540 + t4550;
  t4554 = t4321*t4539;
  t4557 = t714*t4547;
  t4559 = t4554 + t4557;
  t4331 = t575*t4328;
  t4353 = t4339*t4352;
  t4355 = t4331 + t4353;
  t4376 = t4339*t4328;
  t4382 = -1.*t575*t4352;
  t4388 = t4376 + t4382;
  t4486 = t575*t4484;
  t4497 = t4339*t4491;
  t4500 = t4486 + t4497;
  t4506 = t4339*t4484;
  t4510 = -1.*t575*t4491;
  t4511 = t4506 + t4510;
  t4553 = t575*t4552;
  t4560 = t4339*t4559;
  t4562 = t4553 + t4560;
  t4574 = t4339*t4552;
  t4575 = -1.*t575*t4559;
  t4576 = t4574 + t4575;
  p_output1[0]=-1.*t4367*t4388 + t4355*t522;
  p_output1[1]=-1.*t4367*t4511 + t4500*t522;
  p_output1[2]=-1.*t4367*t4576 + t4562*t522;
  p_output1[3]=t4355*t4367 + t4388*t522;
  p_output1[4]=t4367*t4500 + t4511*t522;
  p_output1[5]=t4367*t4562 + t4576*t522;
  p_output1[6]=t1972*t4244*t4273 - 1.*t4033*t4288;
  p_output1[7]=t2555*t4244*t4273 - 1.*t4033*t4452;
  p_output1[8]=-1.*t2050*t4273 - 1.*t4033*t4528;
}



void R_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
