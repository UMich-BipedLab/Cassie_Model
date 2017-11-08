/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:18 GMT-05:00
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
  double t3980;
  double t4063;
  double t4069;
  double t4064;
  double t4070;
  double t4061;
  double t4100;
  double t4104;
  double t4107;
  double t4067;
  double t4072;
  double t4073;
  double t4108;
  double t3887;
  double t4123;
  double t4125;
  double t4126;
  double t3997;
  double t3998;
  double t4047;
  double t4093;
  double t4110;
  double t4111;
  double t4114;
  double t4116;
  double t4118;
  double t4128;
  double t4138;
  double t4120;
  double t4129;
  double t4133;
  double t3884;
  double t4139;
  double t4140;
  double t4141;
  double t3862;
  double t4166;
  double t4167;
  double t4168;
  double t4159;
  double t4161;
  double t4162;
  double t4177;
  double t4179;
  double t4182;
  double t4158;
  double t4165;
  double t4169;
  double t4170;
  double t4171;
  double t4172;
  double t4147;
  double t4174;
  double t4184;
  double t4187;
  double t4189;
  double t4192;
  double t4195;
  double t4222;
  double t4225;
  double t4226;
  double t4212;
  double t4213;
  double t4214;
  double t4217;
  double t4218;
  double t4219;
  double t4221;
  double t4227;
  double t4228;
  double t4231;
  double t4232;
  double t4233;
  double t4134;
  double t4143;
  double t4144;
  double t4149;
  double t4151;
  double t4152;
  double t4188;
  double t4197;
  double t4198;
  double t4202;
  double t4203;
  double t4204;
  double t4229;
  double t4234;
  double t4235;
  double t4237;
  double t4238;
  double t4239;
  t3980 = Cos(var1[3]);
  t4063 = Cos(var1[5]);
  t4069 = Sin(var1[4]);
  t4064 = Sin(var1[3]);
  t4070 = Sin(var1[5]);
  t4061 = Cos(var1[6]);
  t4100 = t3980*t4063*t4069;
  t4104 = t4064*t4070;
  t4107 = t4100 + t4104;
  t4067 = -1.*t4063*t4064;
  t4072 = t3980*t4069*t4070;
  t4073 = t4067 + t4072;
  t4108 = Sin(var1[6]);
  t3887 = Cos(var1[8]);
  t4123 = t4061*t4107;
  t4125 = -1.*t4073*t4108;
  t4126 = t4123 + t4125;
  t3997 = Cos(var1[4]);
  t3998 = Cos(var1[7]);
  t4047 = t3980*t3997*t3998;
  t4093 = t4061*t4073;
  t4110 = t4107*t4108;
  t4111 = t4093 + t4110;
  t4114 = Sin(var1[7]);
  t4116 = t4111*t4114;
  t4118 = t4047 + t4116;
  t4128 = Sin(var1[8]);
  t4138 = Cos(var1[9]);
  t4120 = t3887*t4118;
  t4129 = t4126*t4128;
  t4133 = t4120 + t4129;
  t3884 = Sin(var1[9]);
  t4139 = t3887*t4126;
  t4140 = -1.*t4118*t4128;
  t4141 = t4139 + t4140;
  t3862 = Cos(var1[10]);
  t4166 = t4063*t4064*t4069;
  t4167 = -1.*t3980*t4070;
  t4168 = t4166 + t4167;
  t4159 = t3980*t4063;
  t4161 = t4064*t4069*t4070;
  t4162 = t4159 + t4161;
  t4177 = t4061*t4168;
  t4179 = -1.*t4162*t4108;
  t4182 = t4177 + t4179;
  t4158 = t3997*t3998*t4064;
  t4165 = t4061*t4162;
  t4169 = t4168*t4108;
  t4170 = t4165 + t4169;
  t4171 = t4170*t4114;
  t4172 = t4158 + t4171;
  t4147 = Sin(var1[10]);
  t4174 = t3887*t4172;
  t4184 = t4182*t4128;
  t4187 = t4174 + t4184;
  t4189 = t3887*t4182;
  t4192 = -1.*t4172*t4128;
  t4195 = t4189 + t4192;
  t4222 = t3997*t4063*t4061;
  t4225 = -1.*t3997*t4070*t4108;
  t4226 = t4222 + t4225;
  t4212 = -1.*t3998*t4069;
  t4213 = t3997*t4061*t4070;
  t4214 = t3997*t4063*t4108;
  t4217 = t4213 + t4214;
  t4218 = t4217*t4114;
  t4219 = t4212 + t4218;
  t4221 = t3887*t4219;
  t4227 = t4226*t4128;
  t4228 = t4221 + t4227;
  t4231 = t3887*t4226;
  t4232 = -1.*t4219*t4128;
  t4233 = t4231 + t4232;
  t4134 = -1.*t3884*t4133;
  t4143 = t4138*t4141;
  t4144 = t4134 + t4143;
  t4149 = t4138*t4133;
  t4151 = t3884*t4141;
  t4152 = t4149 + t4151;
  t4188 = -1.*t3884*t4187;
  t4197 = t4138*t4195;
  t4198 = t4188 + t4197;
  t4202 = t4138*t4187;
  t4203 = t3884*t4195;
  t4204 = t4202 + t4203;
  t4229 = -1.*t3884*t4228;
  t4234 = t4138*t4233;
  t4235 = t4229 + t4234;
  t4237 = t4138*t4228;
  t4238 = t3884*t4233;
  t4239 = t4237 + t4238;
  p_output1[0]=-1.*t3862*t4144 + t4147*t4152;
  p_output1[1]=-1.*t3862*t4198 + t4147*t4204;
  p_output1[2]=-1.*t3862*t4235 + t4147*t4239;
  p_output1[3]=t4144*t4147 + t3862*t4152;
  p_output1[4]=t4147*t4198 + t3862*t4204;
  p_output1[5]=t4147*t4235 + t3862*t4239;
  p_output1[6]=-1.*t3998*t4111 + t3980*t3997*t4114;
  p_output1[7]=t3997*t4064*t4114 - 1.*t3998*t4170;
  p_output1[8]=-1.*t4069*t4114 - 1.*t3998*t4217;
}



void R_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
