/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom_src.h"

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
  double t1602;
  double t3702;
  double t3756;
  double t3638;
  double t3792;
  double t3535;
  double t3952;
  double t3956;
  double t3975;
  double t3743;
  double t3856;
  double t3889;
  double t3980;
  double t3503;
  double t4017;
  double t4026;
  double t4033;
  double t3911;
  double t3982;
  double t3995;
  double t4035;
  double t3439;
  double t4119;
  double t4129;
  double t4136;
  double t4003;
  double t4061;
  double t4085;
  double t4140;
  double t1061;
  double t189;
  double t2898;
  double t4207;
  double t4208;
  double t4210;
  double t4185;
  double t4188;
  double t4192;
  double t4229;
  double t4236;
  double t4240;
  double t4198;
  double t4212;
  double t4217;
  double t4273;
  double t4276;
  double t4283;
  double t4223;
  double t4248;
  double t4252;
  double t4303;
  double t4304;
  double t4305;
  double t4259;
  double t4290;
  double t4296;
  double t4335;
  double t4336;
  double t4340;
  double t4328;
  double t4330;
  double t4331;
  double t4347;
  double t4349;
  double t4350;
  double t4334;
  double t4342;
  double t4343;
  double t4358;
  double t4360;
  double t4364;
  double t4344;
  double t4351;
  double t4353;
  double t4369;
  double t4370;
  double t4371;
  double t4355;
  double t4366;
  double t4367;
  double t4107;
  double t4149;
  double t4151;
  double t4162;
  double t4166;
  double t4175;
  double t4299;
  double t4306;
  double t4307;
  double t4313;
  double t4315;
  double t4316;
  double t4368;
  double t4372;
  double t4373;
  double t4375;
  double t4377;
  double t4378;
  t1602 = Cos(var1[8]);
  t3702 = Cos(var1[10]);
  t3756 = Sin(var1[9]);
  t3638 = Cos(var1[9]);
  t3792 = Sin(var1[10]);
  t3535 = Cos(var1[11]);
  t3952 = -1.*t1602*t3702*t3756;
  t3956 = -1.*t1602*t3638*t3792;
  t3975 = t3952 + t3956;
  t3743 = t1602*t3638*t3702;
  t3856 = -1.*t1602*t3756*t3792;
  t3889 = t3743 + t3856;
  t3980 = Sin(var1[11]);
  t3503 = Cos(var1[12]);
  t4017 = t3535*t3975;
  t4026 = -1.*t3889*t3980;
  t4033 = t4017 + t4026;
  t3911 = t3535*t3889;
  t3982 = t3975*t3980;
  t3995 = t3911 + t3982;
  t4035 = Sin(var1[12]);
  t3439 = Cos(var1[13]);
  t4119 = t3503*t4033;
  t4129 = -1.*t3995*t4035;
  t4136 = t4119 + t4129;
  t4003 = t3503*t3995;
  t4061 = t4033*t4035;
  t4085 = t4003 + t4061;
  t4140 = Sin(var1[13]);
  t1061 = Cos(var1[7]);
  t189 = Sin(var1[8]);
  t2898 = Sin(var1[7]);
  t4207 = -1.*t3638*t2898;
  t4208 = -1.*t1061*t189*t3756;
  t4210 = t4207 + t4208;
  t4185 = t1061*t3638*t189;
  t4188 = -1.*t2898*t3756;
  t4192 = t4185 + t4188;
  t4229 = t3702*t4210;
  t4236 = -1.*t4192*t3792;
  t4240 = t4229 + t4236;
  t4198 = t3702*t4192;
  t4212 = t4210*t3792;
  t4217 = t4198 + t4212;
  t4273 = t3535*t4240;
  t4276 = -1.*t4217*t3980;
  t4283 = t4273 + t4276;
  t4223 = t3535*t4217;
  t4248 = t4240*t3980;
  t4252 = t4223 + t4248;
  t4303 = t3503*t4283;
  t4304 = -1.*t4252*t4035;
  t4305 = t4303 + t4304;
  t4259 = t3503*t4252;
  t4290 = t4283*t4035;
  t4296 = t4259 + t4290;
  t4335 = t1061*t3638;
  t4336 = -1.*t2898*t189*t3756;
  t4340 = t4335 + t4336;
  t4328 = t3638*t2898*t189;
  t4330 = t1061*t3756;
  t4331 = t4328 + t4330;
  t4347 = t3702*t4340;
  t4349 = -1.*t4331*t3792;
  t4350 = t4347 + t4349;
  t4334 = t3702*t4331;
  t4342 = t4340*t3792;
  t4343 = t4334 + t4342;
  t4358 = t3535*t4350;
  t4360 = -1.*t4343*t3980;
  t4364 = t4358 + t4360;
  t4344 = t3535*t4343;
  t4351 = t4350*t3980;
  t4353 = t4344 + t4351;
  t4369 = t3503*t4364;
  t4370 = -1.*t4353*t4035;
  t4371 = t4369 + t4370;
  t4355 = t3503*t4353;
  t4366 = t4364*t4035;
  t4367 = t4355 + t4366;
  t4107 = t3439*t4085;
  t4149 = t4136*t4140;
  t4151 = t4107 + t4149;
  t4162 = t3439*t4136;
  t4166 = -1.*t4085*t4140;
  t4175 = t4162 + t4166;
  t4299 = t3439*t4296;
  t4306 = t4305*t4140;
  t4307 = t4299 + t4306;
  t4313 = t3439*t4305;
  t4315 = -1.*t4296*t4140;
  t4316 = t4313 + t4315;
  t4368 = t3439*t4367;
  t4372 = t4371*t4140;
  t4373 = t4368 + t4372;
  t4375 = t3439*t4371;
  t4377 = -1.*t4367*t4140;
  t4378 = t4375 + t4377;
  p_output1[0]=0. + t189;
  p_output1[1]=0. + t1061*t1602;
  p_output1[2]=0. + t1602*t2898;
  p_output1[3]=0. + 0.642788*t4151 + 0.766044*t4175;
  p_output1[4]=0. - 0.642788*t4307 - 0.766044*t4316;
  p_output1[5]=0. - 0.642788*t4373 - 0.766044*t4378;
  p_output1[6]=0. - 0.766044*t4151 + 0.642788*t4175;
  p_output1[7]=0. + 0.766044*t4307 - 0.642788*t4316;
  p_output1[8]=0. + 0.766044*t4373 - 0.642788*t4378;
}



void R_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
