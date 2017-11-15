/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_right_src.h"

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
  double t1069;
  double t2214;
  double t1068;
  double t1660;
  double t2232;
  double t3197;
  double t2105;
  double t2571;
  double t3167;
  double t984;
  double t3587;
  double t3795;
  double t3835;
  double t3894;
  double t3194;
  double t3883;
  double t3890;
  double t841;
  double t3897;
  double t3905;
  double t3907;
  double t3939;
  double t3974;
  double t3982;
  double t4002;
  double t4008;
  double t4012;
  double t4036;
  double t3893;
  double t4021;
  double t4034;
  double t36;
  double t4045;
  double t4061;
  double t4091;
  double t4132;
  double t4035;
  double t4118;
  double t4122;
  double t34;
  double t4137;
  double t4150;
  double t4169;
  double t4209;
  double t4131;
  double t4181;
  double t4189;
  double t31;
  double t4212;
  double t4213;
  double t4215;
  double t29;
  double t4303;
  double t4306;
  double t4309;
  double t4330;
  double t4363;
  double t4372;
  double t4322;
  double t4379;
  double t4385;
  double t4401;
  double t4406;
  double t4412;
  double t4419;
  double t4426;
  double t4429;
  double t4397;
  double t4430;
  double t4434;
  double t4440;
  double t4450;
  double t4466;
  double t4435;
  double t4469;
  double t4479;
  double t4483;
  double t4485;
  double t4490;
  double t4244;
  double t4480;
  double t4494;
  double t4495;
  double t4498;
  double t4499;
  double t4501;
  double t4523;
  double t4524;
  double t4525;
  double t4530;
  double t4533;
  double t4534;
  double t4535;
  double t4537;
  double t4538;
  double t4528;
  double t4539;
  double t4542;
  double t4544;
  double t4546;
  double t4549;
  double t4543;
  double t4552;
  double t4553;
  double t4556;
  double t4559;
  double t4562;
  double t4554;
  double t4563;
  double t4564;
  double t4567;
  double t4568;
  double t4569;
  double t4190;
  double t4221;
  double t4223;
  double t4248;
  double t4252;
  double t4258;
  double t4496;
  double t4503;
  double t4504;
  double t4513;
  double t4514;
  double t4515;
  double t4566;
  double t4571;
  double t4573;
  double t4577;
  double t4580;
  double t4581;
  t1069 = Cos(var1[5]);
  t2214 = Sin(var1[3]);
  t1068 = Cos(var1[3]);
  t1660 = Sin(var1[4]);
  t2232 = Sin(var1[5]);
  t3197 = Sin(var1[13]);
  t2105 = t1068*t1069*t1660;
  t2571 = t2214*t2232;
  t3167 = t2105 + t2571;
  t984 = Cos(var1[13]);
  t3587 = -1.*t1069*t2214;
  t3795 = t1068*t1660*t2232;
  t3835 = t3587 + t3795;
  t3894 = Cos(var1[15]);
  t3194 = t984*t3167;
  t3883 = -1.*t3197*t3835;
  t3890 = t3194 + t3883;
  t841 = Sin(var1[15]);
  t3897 = Cos(var1[14]);
  t3905 = Cos(var1[4]);
  t3907 = t3897*t1068*t3905;
  t3939 = Sin(var1[14]);
  t3974 = t3197*t3167;
  t3982 = t984*t3835;
  t4002 = t3974 + t3982;
  t4008 = t3939*t4002;
  t4012 = t3907 + t4008;
  t4036 = Cos(var1[16]);
  t3893 = t841*t3890;
  t4021 = t3894*t4012;
  t4034 = t3893 + t4021;
  t36 = Sin(var1[16]);
  t4045 = t3894*t3890;
  t4061 = -1.*t841*t4012;
  t4091 = t4045 + t4061;
  t4132 = Cos(var1[17]);
  t4035 = -1.*t36*t4034;
  t4118 = t4036*t4091;
  t4122 = t4035 + t4118;
  t34 = Sin(var1[17]);
  t4137 = t4036*t4034;
  t4150 = t36*t4091;
  t4169 = t4137 + t4150;
  t4209 = Cos(var1[18]);
  t4131 = t34*t4122;
  t4181 = t4132*t4169;
  t4189 = t4131 + t4181;
  t31 = Sin(var1[18]);
  t4212 = t4132*t4122;
  t4213 = -1.*t34*t4169;
  t4215 = t4212 + t4213;
  t29 = Cos(var1[19]);
  t4303 = t1069*t2214*t1660;
  t4306 = -1.*t1068*t2232;
  t4309 = t4303 + t4306;
  t4330 = t1068*t1069;
  t4363 = t2214*t1660*t2232;
  t4372 = t4330 + t4363;
  t4322 = t984*t4309;
  t4379 = -1.*t3197*t4372;
  t4385 = t4322 + t4379;
  t4401 = t3897*t3905*t2214;
  t4406 = t3197*t4309;
  t4412 = t984*t4372;
  t4419 = t4406 + t4412;
  t4426 = t3939*t4419;
  t4429 = t4401 + t4426;
  t4397 = t841*t4385;
  t4430 = t3894*t4429;
  t4434 = t4397 + t4430;
  t4440 = t3894*t4385;
  t4450 = -1.*t841*t4429;
  t4466 = t4440 + t4450;
  t4435 = -1.*t36*t4434;
  t4469 = t4036*t4466;
  t4479 = t4435 + t4469;
  t4483 = t4036*t4434;
  t4485 = t36*t4466;
  t4490 = t4483 + t4485;
  t4244 = Sin(var1[19]);
  t4480 = t34*t4479;
  t4494 = t4132*t4490;
  t4495 = t4480 + t4494;
  t4498 = t4132*t4479;
  t4499 = -1.*t34*t4490;
  t4501 = t4498 + t4499;
  t4523 = t984*t3905*t1069;
  t4524 = -1.*t3905*t3197*t2232;
  t4525 = t4523 + t4524;
  t4530 = -1.*t3897*t1660;
  t4533 = t3905*t1069*t3197;
  t4534 = t984*t3905*t2232;
  t4535 = t4533 + t4534;
  t4537 = t3939*t4535;
  t4538 = t4530 + t4537;
  t4528 = t841*t4525;
  t4539 = t3894*t4538;
  t4542 = t4528 + t4539;
  t4544 = t3894*t4525;
  t4546 = -1.*t841*t4538;
  t4549 = t4544 + t4546;
  t4543 = -1.*t36*t4542;
  t4552 = t4036*t4549;
  t4553 = t4543 + t4552;
  t4556 = t4036*t4542;
  t4559 = t36*t4549;
  t4562 = t4556 + t4559;
  t4554 = t34*t4553;
  t4563 = t4132*t4562;
  t4564 = t4554 + t4563;
  t4567 = t4132*t4553;
  t4568 = -1.*t34*t4562;
  t4569 = t4567 + t4568;
  t4190 = -1.*t31*t4189;
  t4221 = t4209*t4215;
  t4223 = t4190 + t4221;
  t4248 = t4209*t4189;
  t4252 = t31*t4215;
  t4258 = t4248 + t4252;
  t4496 = -1.*t31*t4495;
  t4503 = t4209*t4501;
  t4504 = t4496 + t4503;
  t4513 = t4209*t4495;
  t4514 = t31*t4501;
  t4515 = t4513 + t4514;
  t4566 = -1.*t31*t4564;
  t4571 = t4209*t4569;
  t4573 = t4566 + t4571;
  t4577 = t4209*t4564;
  t4580 = t31*t4569;
  t4581 = t4577 + t4580;
  p_output1[0]=-1.*t29*t4223 + t4244*t4258;
  p_output1[1]=-1.*t29*t4504 + t4244*t4515;
  p_output1[2]=-1.*t29*t4573 + t4244*t4581;
  p_output1[3]=t4223*t4244 + t29*t4258;
  p_output1[4]=t4244*t4504 + t29*t4515;
  p_output1[5]=t4244*t4573 + t29*t4581;
  p_output1[6]=t1068*t3905*t3939 - 1.*t3897*t4002;
  p_output1[7]=t2214*t3905*t3939 - 1.*t3897*t4419;
  p_output1[8]=-1.*t1660*t3939 - 1.*t3897*t4535;
}



void R_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
